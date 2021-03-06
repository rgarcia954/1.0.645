/**
 * @file ble_gap.c
 * @brief BLE Abstraction GATT layer source
 * @copyright @parblock
 * Copyright (c) 2021 Semiconductor Components Industries, LLC (d/b/a
 * onsemi), All Rights Reserved
 *
 * This code is the property of onsemi and may not be redistributed
 * in any form without prior written permission from onsemi.
 * The terms of use and warranty for this code are covered by contractual
 * agreements between onsemi and the licensee.
 *
 * This is Reusable Code.
 * @endparblock
 */

#include <ble_gatt.h>
#include <gapm_task.h>
#include <gattc_task.h>
#include <gattm_task.h>
#include <string.h>

/** GATT Environment Structure */
static GATT_Env_t gatt_env;

/** Service attribute database ID */
uint8_t svc_att_db_idx;

void GATT_Initialize(void)
{
    memset(&gatt_env, 0, sizeof(GATT_Env_t));
}

const GATT_Env_t * GATT_GetEnv(void)
{
    return &gatt_env;
}

void GATT_SetEnvData(uint16_t *disc_svc_count, cust_svc_desc *custom_service_db,
                     uint8_t max_cust_svc_num)
{
    if (disc_svc_count)
    {
        gatt_env.discSvcCount = disc_svc_count;
    }

    if (custom_service_db)
    {
        gatt_env.cust_svc_db = custom_service_db;
        gatt_env.max_cust_svc = max_cust_svc_num;
    }
}

uint16_t GATT_GetMaxCustomServiceNumber(void)
{
    return gatt_env.max_cust_svc;
}

uint16_t GATTM_GetServiceAddedCount(void)
{
    return gatt_env.addedSvcCount;
}

void GATTM_ResetServiceAttributeDatabaseID(void)
{
    svc_att_db_idx = 0;
}

void GATTM_AddAttributeDatabase(const struct att_db_desc *att_db,
                                uint16_t att_db_len)
{
    struct gattm_add_svc_req *req;
    uint8_t nb_att;
    uint8_t cs_nb_att = 0;
    uint8_t att_idx = 1;

    /* Save att_db details to gatt_env */
    if (svc_att_db_idx < gatt_env.max_cust_svc)
    {
        /* Point gatt_env att_db to first att_db to read/write first request
         * later will be managed by individual read/write requests */
        if (svc_att_db_idx == 0)
        {
            gatt_env.att_db = att_db;
            gatt_env.att_db_len = att_db_len;
        }

        gatt_env.cust_svc_db[svc_att_db_idx].cust_svc_att_db = att_db;
        gatt_env.cust_svc_db[svc_att_db_idx].cust_svc_att_db_len = att_db_len;

        svc_att_db_idx += 1;
    }

    while (att_idx < att_db_len)
    {
        /* Count the number of attributes in the current service */
        for (nb_att = 0; att_idx < att_db_len && !att_db[att_idx].is_service;
             nb_att++, att_idx++);

        req = KE_MSG_ALLOC_DYN(GATTM_ADD_SVC_REQ, TASK_GATTM, TASK_APP,
                               gattm_add_svc_req, nb_att * sizeof(struct gattm_att_desc));

        /* Fill the GATTM_ADD_SVC_REQ message to add a new custom service */
        req->svc_desc.start_hdl = 0;
        req->svc_desc.task_id = TASK_APP;
        req->svc_desc.perm = att_db[cs_nb_att].att.perm;
        req->svc_desc.nb_att = nb_att;
        memcpy(&req->svc_desc.uuid[0], &att_db[cs_nb_att++].att.uuid,
               ATT_UUID_128_LEN);

        for (uint8_t i = 0; i < nb_att; i++)
        {
            memcpy(&req->svc_desc.atts[i], &att_db[cs_nb_att++].att,
                   sizeof(struct gattm_att_desc));
        }

        ke_msg_send(req);

        att_idx++;
    }
}

uint16_t GATTM_GetHandle(uint8_t cs_svc_number, uint16_t attidx)
{
    if (gatt_env.cust_svc_db[cs_svc_number].cust_svc_start_hdl &&
        attidx < gatt_env.cust_svc_db[cs_svc_number].cust_svc_att_db_len)
    {
        return gatt_env.cust_svc_db[cs_svc_number].cust_svc_start_hdl + attidx;
    }

    return 0;
}

void GATTM_MsgHandler(ke_msg_id_t const msg_id, void const *param,
                      ke_task_id_t const dest_id, ke_task_id_t const src_id)
{
    switch (msg_id)
    {
        case GATTM_ADD_SVC_RSP:
        {
            const struct gattm_add_svc_rsp *p = param;
            if (p->status == ATT_ERR_NO_ERROR)
            {
                gatt_env.addedSvcCount++;
                if (gatt_env.addedSvcCount <= gatt_env.max_cust_svc)
                {
                    gatt_env.cust_svc_db[gatt_env.addedSvcCount - 1].cust_svc_start_hdl = p->start_hdl;
                }
            }
        }
        break;
    }
}

void GATTC_DiscByUUIDSvc(uint8_t conidx, uint8_t uuid[], uint8_t uuid_len,
                         uint16_t start_hdl, uint16_t end_hdl)
{
    struct gattc_disc_cmd *cmd;

    gatt_env.discSvcCount[conidx] = 0;

    cmd = KE_MSG_ALLOC_DYN(GATTC_DISC_CMD, KE_BUILD_ID(TASK_GATTC, conidx),
                           TASK_APP, gattc_disc_cmd, uuid_len * sizeof(uint8_t));

    cmd->operation = GATTC_DISC_BY_UUID_SVC;
    cmd->seq_num = 0;
    cmd->start_hdl = start_hdl;
    cmd->end_hdl = end_hdl;
    cmd->uuid_len = uuid_len;
    memcpy(cmd->uuid, uuid, uuid_len);

    ke_msg_send(cmd);
}

void GATTC_DiscAllSvc(uint8_t conidx, uint16_t start_hdl, uint16_t end_hdl)
{
    struct gattc_disc_cmd *cmd;

    gatt_env.discSvcCount[conidx] = 0;

    cmd = KE_MSG_ALLOC_DYN(GATTC_DISC_CMD, KE_BUILD_ID(TASK_GATTC, conidx),
                           TASK_APP, gattc_disc_cmd, 2 * sizeof(uint8_t));

    cmd->operation = GATTC_DISC_ALL_SVC;
    cmd->seq_num = 0;
    cmd->start_hdl = start_hdl;
    cmd->end_hdl = end_hdl;
    cmd->uuid_len = 2;
    cmd->uuid[0] = 0;
    cmd->uuid[1] = 0;

    ke_msg_send(cmd);
}

void GATTC_DiscAllChar(uint8_t conidx, uint16_t start_hdl, uint16_t end_hdl)
{
    struct gattc_disc_cmd *cmd;

    cmd = KE_MSG_ALLOC_DYN(GATTC_DISC_CMD, KE_BUILD_ID(TASK_GATTC, conidx),
                           TASK_APP, gattc_disc_cmd, 2 * sizeof(uint8_t));

    cmd->operation = GATTC_DISC_ALL_CHAR;
    cmd->seq_num = 0;
    cmd->start_hdl = start_hdl;
    cmd->end_hdl = end_hdl;
    cmd->uuid_len = 2;
    cmd->uuid[0] = 0;
    cmd->uuid[1] = 0;

    ke_msg_send(cmd);
}

void GATTC_SendEvtCmd(uint8_t conidx, uint8_t operation, uint16_t seq_num,
                      uint16_t handle, uint16_t length, uint8_t *value)
{
    struct gattc_send_evt_cmd *cmd;

    cmd = KE_MSG_ALLOC_DYN(GATTC_SEND_EVT_CMD, KE_BUILD_ID(TASK_GATTC, conidx),
                           TASK_APP, gattc_send_evt_cmd, length * sizeof(uint8_t));
    cmd->handle = handle;
    cmd->length = length;
    cmd->operation = operation;
    cmd->seq_num = seq_num;
    memcpy(cmd->value, value, length);

    ke_msg_send(cmd);
}

void GATTC_SendEvtCfm(uint8_t conidx, uint16_t handle)
{
    struct gattc_event_cfm *cfm = KE_MSG_ALLOC(GATTC_EVENT_CFM,
                                               KE_BUILD_ID(TASK_GATTC, conidx), TASK_APP, gattc_event_cfm);

    cfm->handle = handle;

    ke_msg_send(cfm);
}

void GATTC_MsgHandler(ke_msg_id_t const msg_id, void const *param,
                      ke_task_id_t const dest_id, ke_task_id_t const src_id)
{
    uint8_t conidx = KE_IDX_GET(src_id);

    switch (msg_id)
    {
        case GATTC_DISC_SVC_IND:
        {
            gatt_env.discSvcCount[conidx]++;
        }
        break;

        case GATTC_READ_REQ_IND:
        {
            if (gatt_env.att_db)
            {
                GATTC_ReadReqInd(msg_id, param, dest_id, src_id);
            }
        }
        break;

        case GATTC_WRITE_REQ_IND:
        {
            if (gatt_env.att_db)
            {
                GATTC_WriteReqInd(msg_id, param, dest_id, src_id);
            }
        }
        break;

        case GATTC_ATT_INFO_REQ_IND:
        {
            if (gatt_env.att_db)
            {
                GATTC_AttInfoReqInd(msg_id, param, dest_id, src_id);
            }
        }
        break;
    }
}

void GATTC_ReadReqInd(ke_msg_id_t const msg_id,
                      struct gattc_read_req_ind const *param, ke_task_id_t const dest_id,
                      ke_task_id_t const src_id)
{
    /* Retrieve the index of environment structure representing peer device */
    signed int conidx = KE_IDX_GET(src_id);
    struct gattc_read_cfm *cfm;
    uint8_t length = 0;
    uint8_t status = GAP_ERR_NO_ERROR;
    uint16_t attnum;
    static uint16_t read_start_hdl = 0;

    /* Find read_start_handle for particular param->handle */
    for (int i = ((gatt_env.max_cust_svc) - 1); i >= 0; i--)
    {
        if ((param->handle) > gatt_env.cust_svc_db[i].cust_svc_start_hdl)
        {
            read_start_hdl = gatt_env.cust_svc_db[i].cust_svc_start_hdl;
            gatt_env.att_db = gatt_env.cust_svc_db[i].cust_svc_att_db;
            gatt_env.att_db_len = gatt_env.cust_svc_db[i].cust_svc_att_db_len;
            break;
        }
    }

    attnum = (param->handle - read_start_hdl);

    if (param->handle <= read_start_hdl)
    {
        status = ATT_ERR_INVALID_HANDLE;
    }
    else if ((attnum >= gatt_env.att_db_len)
             || !(gatt_env.att_db[attnum].att.perm
                  & (PERM(RD, ENABLE) | PERM(NTF, ENABLE))))
    {
        status = ATT_ERR_READ_NOT_PERMITTED;
    }
    else
    {
        length = gatt_env.att_db[attnum].length;
    }

    /* Allocate and build message */
    cfm = KE_MSG_ALLOC_DYN(GATTC_READ_CFM, KE_BUILD_ID(TASK_GATTC, conidx),
                           TASK_APP, gattc_read_cfm, length);

    /* Copy the requested attribute value, using the callback function */
    if (gatt_env.att_db[attnum].callback != NULL)
    {
        status = gatt_env.att_db[attnum].callback(conidx, attnum,
                                                  param->handle, cfm->value, gatt_env.att_db[attnum].data,
                                                  length, GATTC_READ_REQ_IND, status);
    }
    else    /* No callback function has been set for this attribute, just do a memcpy */
    {
        if (status == GAP_ERR_NO_ERROR)
        {
            memcpy(cfm->value, gatt_env.att_db[attnum].data, length);
        }
    }

    cfm->handle = param->handle;
    cfm->length = length;
    cfm->status = status;

    /* Send the message */
    ke_msg_send(cfm);
}

void GATTC_WriteReqInd(ke_msg_id_t const msg_id,
                       struct gattc_write_req_ind const *param, ke_task_id_t const dest_id,
                       ke_task_id_t const src_id)
{
    /* Retrieve peer device index */
    signed int conidx = KE_IDX_GET(src_id);
    struct gattc_write_cfm *cfm = KE_MSG_ALLOC(GATTC_WRITE_CFM,
                                               KE_BUILD_ID(TASK_GATTC, conidx), TASK_APP, gattc_write_cfm);
    uint8_t status = GAP_ERR_NO_ERROR;
    uint16_t attnum;
    static uint16_t write_start_hdl = 0;

    /* Find write_start_handle for particular param->handle */
    for (int i = ((gatt_env.max_cust_svc) - 1); i >= 0; i--)
    {
        if ((param->handle) > gatt_env.cust_svc_db[i].cust_svc_start_hdl)
        {
            write_start_hdl = gatt_env.cust_svc_db[i].cust_svc_start_hdl;
            gatt_env.att_db = gatt_env.cust_svc_db[i].cust_svc_att_db;
            gatt_env.att_db_len = gatt_env.cust_svc_db[i].cust_svc_att_db_len;
            break;
        }
    }

    attnum = (param->handle - write_start_hdl);

    /* Verify the correctness of the write request. Set the attribute index if
     * the request is valid */
    if (param->offset)
    {
        status = ATT_ERR_INVALID_OFFSET;
    }
    else if (param->handle <= write_start_hdl)
    {
        status = ATT_ERR_INVALID_HANDLE;
    }
    else if ((attnum >= gatt_env.att_db_len)
             || !(gatt_env.att_db[attnum].att.perm
                  & (PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE))))
    {
        status = ATT_ERR_WRITE_NOT_PERMITTED;
    }

    /* Copy the requested attribute value, using the callback function */
    if (gatt_env.att_db[attnum].callback != NULL)
    {
        status = gatt_env.att_db[attnum].callback(conidx, attnum,
                                                  param->handle, gatt_env.att_db[attnum].data, param->value,
                                                  MIN(param->length, gatt_env.att_db[attnum].length),
                                                  GATTC_WRITE_REQ_IND, status);
    }
    else    /* No callback function has been set for this attribute, just do a memcpy */
    {
        if (status == GAP_ERR_NO_ERROR)
        {
            memcpy(gatt_env.att_db[attnum].data, param->value,
                   MIN(param->length, gatt_env.att_db[attnum].length));
        }
    }

    cfm->handle = param->handle;
    cfm->status = status;

    /* Send the message */
    ke_msg_send(cfm);
}

void GATTC_AttInfoReqInd(ke_msg_id_t const msg_id,
                         struct gattc_read_req_ind const *param, ke_task_id_t const dest_id,
                         ke_task_id_t const src_id)
{
    /* Retrieve peer device index */
    signed int conidx = KE_IDX_GET(src_id);
    uint8_t status = GAP_ERR_NO_ERROR;
    uint8_t length = 0;
    uint16_t attnum;
    static uint16_t att_info_start_hdl = 0;

    /* Find att_info_start_handle for particular param->handle */
    for (int i = ((gatt_env.max_cust_svc) - 1); i >= 0; i--)
    {
        if ((param->handle) > gatt_env.cust_svc_db[i].cust_svc_start_hdl)
        {
            att_info_start_hdl = gatt_env.cust_svc_db[i].cust_svc_start_hdl;
            gatt_env.att_db = gatt_env.cust_svc_db[i].cust_svc_att_db;
            gatt_env.att_db_len = gatt_env.cust_svc_db[i].cust_svc_att_db_len;
            break;
        }
    }

    attnum = (param->handle - att_info_start_hdl);

    if (param->handle <= att_info_start_hdl)
    {
        status = ATT_ERR_INVALID_OFFSET;
    }
    else if ((attnum >= gatt_env.att_db_len)
             || !(gatt_env.att_db[attnum].att.perm & PERM(WRITE_REQ, ENABLE)))

    {
        status = ATT_ERR_WRITE_NOT_PERMITTED;
    }
    else
    {
        length = gatt_env.att_db[attnum].length;
    }

    /* Attribute Information confirmation message to inform if peer
     * device is authorized to modify attribute value, and to get current
     * attribute length.
     */
    struct gattc_att_info_cfm *cfm = KE_MSG_ALLOC(GATTC_ATT_INFO_CFM,
                                                  KE_BUILD_ID(TASK_GATTC, conidx), TASK_APP, gattc_att_info_cfm);

    cfm->handle = param->handle;
    cfm->length = length;
    cfm->status = status;

    /* Send the message */
    ke_msg_send(cfm);
}
