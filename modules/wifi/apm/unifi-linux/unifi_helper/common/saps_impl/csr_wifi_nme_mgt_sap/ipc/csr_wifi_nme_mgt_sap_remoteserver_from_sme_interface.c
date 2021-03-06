/* This is an autogenerated file */
/* Tag: noCheckHeader */

/*    CONFIDENTIAL */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2008. All rights reserved. */

#include "nme_top_level_fsm/nme_top_level_fsm.h"
#include "csr_wifi_nme_mgt_sap_serialise.h"
#include "event_pack_unpack/event_pack_unpack.h"
#include "ipc/ipc.h"

extern ipcConnection* get_csr_wifi_nme_mgt_ipc_connection(FsmContext* context);

#ifndef CUSTOM_UNIFI_NME_MGT_BLACKLIST_REQ
void unifi_nme_mgt_blacklist_req(void* context, void* appHandle, unifi_ListAction action, CsrUint8 setAddressCount, const unifi_MACAddress *setAddresses)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_blacklist_req(&evt, appHandle, action, setAddressCount, setAddresses);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_BLACKLIST_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_CONNECT_REQ
void unifi_nme_mgt_connect_req(void* context, void* appHandle, const unifi_ConnectionConfig *connectionConfig)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_connect_req(&evt, appHandle, connectionConfig);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_CONNECT_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_DISCONNECT_REQ
void unifi_nme_mgt_disconnect_req(void* context, void* appHandle)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_disconnect_req(&evt, appHandle);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_DISCONNECT_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_EVENT_MASK_SET_REQ
void unifi_nme_mgt_event_mask_set_req(void* context, void* appHandle, CsrUint32 indMask)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_event_mask_set_req(&evt, appHandle, indMask);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_EVENT_MASK_SET_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_GET_VALUE_REQ
void unifi_nme_mgt_get_value_req(void* context, void* appHandle, unifi_AppValueId appValueId)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_get_value_req(&evt, appHandle, appValueId);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_GET_VALUE_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_KEY_REQ
void unifi_nme_mgt_key_req(void* context, void* appHandle, unifi_ListAction action, const unifi_Key *key)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_key_req(&evt, appHandle, action, key);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_KEY_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_MIB_GET_REQ
void unifi_nme_mgt_mib_get_req(void* context, void* appHandle, CsrUint16 mibAttributeLength, const CsrUint8 *mibAttribute)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_mib_get_req(&evt, appHandle, mibAttributeLength, mibAttribute);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_MIB_GET_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_MIB_GET_NEXT_REQ
void unifi_nme_mgt_mib_get_next_req(void* context, void* appHandle, CsrUint16 mibAttributeLength, const CsrUint8 *mibAttribute)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_mib_get_next_req(&evt, appHandle, mibAttributeLength, mibAttribute);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_MIB_GET_NEXT_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_MIB_SET_REQ
void unifi_nme_mgt_mib_set_req(void* context, void* appHandle, CsrUint16 mibAttributeLength, const CsrUint8 *mibAttribute)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_mib_set_req(&evt, appHandle, mibAttributeLength, mibAttribute);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_MIB_SET_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_MULTICAST_ADDRESS_REQ
void unifi_nme_mgt_multicast_address_req(void* context, void* appHandle, unifi_ListAction action, CsrUint8 setAddressesCount, const unifi_MACAddress *setAddresses)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_multicast_address_req(&evt, appHandle, action, setAddressesCount, setAddresses);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_MULTICAST_ADDRESS_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_PACKET_FILTER_SET_REQ
void unifi_nme_mgt_packet_filter_set_req(void* context, void* appHandle, CsrUint16 filterLength, const CsrUint8 *filter, unifi_PacketFilterMode mode, const unifi_IPV4Address *arpFilterAddress)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_packet_filter_set_req(&evt, appHandle, filterLength, filter, mode, arpFilterAddress);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_PACKET_FILTER_SET_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_PMKID_REQ
void unifi_nme_mgt_pmkid_req(void* context, void* appHandle, unifi_ListAction action, CsrUint8 setPmkidsCount, const unifi_Pmkid *setPmkids)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_pmkid_req(&evt, appHandle, action, setPmkidsCount, setPmkids);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_PMKID_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_RESTRICTED_ACCESS_DISABLE_REQ
void unifi_nme_mgt_restricted_access_disable_req(void* context, void* appHandle)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_restricted_access_disable_req(&evt, appHandle);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_RESTRICTED_ACCESS_DISABLE_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_RESTRICTED_ACCESS_ENABLE_REQ
void unifi_nme_mgt_restricted_access_enable_req(void* context, void* appHandle)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_restricted_access_enable_req(&evt, appHandle);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_RESTRICTED_ACCESS_ENABLE_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_SCAN_FULL_REQ
void unifi_nme_mgt_scan_full_req(void* context, void* appHandle, CsrUint8 ssidCount, const unifi_SSID *ssid, const unifi_MACAddress *bssid, CsrBool forceScan, unifi_BSSType bssType, unifi_ScanType scanType, CsrUint16 channelListCount, const CsrUint8 *channelList, CsrUint16 probeIeLength, const CsrUint8 *probeIe)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_scan_full_req(&evt, appHandle, ssidCount, ssid, bssid, forceScan, bssType, scanType, channelListCount, channelList, probeIeLength, probeIe);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_SCAN_FULL_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_SCAN_RESULTS_FLUSH_REQ
void unifi_nme_mgt_scan_results_flush_req(void* context, void* appHandle)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_scan_results_flush_req(&evt, appHandle);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_SCAN_RESULTS_FLUSH_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_SCAN_RESULTS_GET_REQ
void unifi_nme_mgt_scan_results_get_req(void* context, void* appHandle)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_scan_results_get_req(&evt, appHandle);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_SCAN_RESULTS_GET_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_SET_VALUE_REQ
void unifi_nme_mgt_set_value_req(void* context, void* appHandle, const unifi_AppValue *appValue)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_set_value_req(&evt, appHandle, appValue);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_SET_VALUE_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_TSPEC_REQ
void unifi_nme_mgt_tspec_req(void* context, void* appHandle, unifi_ListAction action, CsrUint32 transactionId, CsrBool strict, CsrUint8 ctrlMask, CsrUint16 tspecLength, const CsrUint8 *tspec, CsrUint16 tclasLength, const CsrUint8 *tclas)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_tspec_req(&evt, appHandle, action, transactionId, strict, ctrlMask, tspecLength, tspec, tclasLength, tclas);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_TSPEC_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_WIFI_FLIGHTMODE_REQ
void unifi_nme_mgt_wifi_flightmode_req(void* context, void* appHandle, const unifi_MACAddress *address, CsrUint16 mibFilesCount, const unifi_DataBlock *mibFiles)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_wifi_flightmode_req(&evt, appHandle, address, mibFilesCount, mibFiles);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_WIFI_FLIGHTMODE_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_WIFI_OFF_REQ
void unifi_nme_mgt_wifi_off_req(void* context, void* appHandle)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_wifi_off_req(&evt, appHandle);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_WIFI_OFF_REQ */

#ifndef CUSTOM_UNIFI_NME_MGT_WIFI_ON_REQ
void unifi_nme_mgt_wifi_on_req(void* context, void* appHandle, const unifi_MACAddress *address, CsrUint16 mibFilesCount, const unifi_DataBlock *mibFiles)
{
    CsrUint8* evt;
    CsrUint16 packedLength = serialise_unifi_nme_mgt_wifi_on_req(&evt, appHandle, address, mibFilesCount, mibFiles);

    (void)ipc_message_send(get_csr_wifi_nme_mgt_ipc_connection(context), evt, packedLength);
    CsrPfree(evt);
}
#endif /* CUSTOM_UNIFI_NME_MGT_WIFI_ON_REQ */


