/*
*********************************************************************************************************
*                                             uC/USB-Host
*                                     The Embedded USB Host Stack
*
*                    Copyright 2004-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                        USB HOST HUB OPERATIONS
*
* Filename : usbh_hub.h
* Version  : V3.42.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef  USBH_HUB_MODULE_PRESENT
#define  USBH_HUB_MODULE_PRESENT


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  "usbh_core.h"


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   USBH_HUB_MODULE
#define  USBH_HUB_EXT
#else
#define  USBH_HUB_EXT  extern
#endif


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/

extern  USBH_CLASS_DRV  USBH_HUB_Drv;


/*
*********************************************************************************************************
*                                               MACROS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

USBH_ERR    USBH_HUB_PortEn        (USBH_HUB_DEV   *p_hub_dev,
                                    CPU_INT16U      port_nbr);

USBH_ERR    USBH_HUB_PortDis       (USBH_HUB_DEV   *p_hub_dev,
                                    CPU_INT16U      port_nbr);

USBH_ERR    USBH_HUB_PortSuspendSet(USBH_HUB_DEV   *p_hub_dev,
                                    CPU_INT16U      port_nbr);

void        USBH_HUB_ClassNotify   (void           *p_class_dev,
                                    CPU_INT08U      state,
                                    void           *p_ctx);

CPU_INT32U  USBH_HUB_RH_CtrlReq    (USBH_HC        *p_hc,
                                    CPU_INT08U      b_req,
                                    CPU_INT08U      bm_req_type,
                                    CPU_INT16U      w_val,
                                    CPU_INT16U      w_ix,
                                    void           *p_buf,
                                    CPU_INT32U      buf_len,
                                    USBH_ERR       *p_err);

void        USBH_HUB_RH_Event      (USBH_DEV       *p_dev);

void        USBH_HUB_ParseHubDesc  (USBH_HUB_DESC  *p_hub_desc,
                                    void           *p_buf_src);

void        USBH_HUB_FmtHubDesc    (USBH_HUB_DESC  *p_hub_desc,
                                    void           *p_buf_dest);

void        USBH_HUB_EventTask     (void           *p_arg);


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                              MODULE END
*********************************************************************************************************
*/

#endif
