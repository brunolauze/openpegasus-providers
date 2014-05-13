#!/bin/sh

#//%LICENSE////////////////////////////////////////////////////////////////
#//
#// Licensed to The Open Group (TOG) under one or more contributor license
#// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
#// this work for additional information regarding copyright ownership.
#// Each contributor licenses this file to you under the OpenPegasus Open
#// Source License; you may not use this file except in compliance with the
#// License.
#//
#// Permission is hereby granted, free of charge, to any person obtaining a
#// copy of this software and associated documentation files (the "Software"),
#// to deal in the Software without restriction, including without limitation
#// the rights to use, copy, modify, merge, publish, distribute, sublicense,
#// and/or sell copies of the Software, and to permit persons to whom the
#// Software is furnished to do so, subject to the following conditions:
#//
#// The above copyright notice and this permission notice shall be included
#// in all copies or substantial portions of the Software.
#//
#// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
#// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
#// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
#// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
#// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#//
#//////////////////////////////////////////////////////////////////////////
#//
#//%/////////////////////////////////////////////////////////////////////////

cd bin/Debug && LD_LIBRARY_PATH=../../../../../SettingsAffectSettings/bin/Debug:../../../../../FirewallRuleSettingData/bin/Debug:../../../../../LoadBalancingRuleSettingData/bin/Debug:../../../../../QoSPolicyRuleSettingData/bin/Debug:../../../../../VLANEndpointSettingData/bin/Debug:../../../../../CLPSettingData/bin/Debug:../../../../../StorageClientSettingData/bin/Debug:../../../../../CPUDiagnosticSettingData/bin/Debug:../../../../../RAIDDiagnosticSettingData/bin/Debug:../../../../../DiskDriveDiagnosticSettingData/bin/Debug:../../../../../FCHBADiagnosticSettingData/bin/Debug:../../../../../EthernetNICDiagnosticSettingData/bin/Debug:../../../../../SAEndpointRefreshSettings/bin/Debug:../../../../../WiFiEndpointSettings/bin/Debug:../../../../../LogicalPortSettings/bin/Debug:../../../../../NetworkPortSettings/bin/Debug:../../../../../FCPortSettings/bin/Debug:../../../../../ReplicationSettingData/bin/Debug:../../../../../AccessControlServiceSettingData/bin/Debug:../../../../../TimeZoneSettingData/bin/Debug:../../../../../VirtualSystemSettingData/bin/Debug:../../../../../VirtualEthernetSwitchSettingData/bin/Debug:../../../../../FCIPSettings/bin/Debug:../../../../../IndicationServiceSettingData/bin/Debug:../../../../../BootSourceSetting/bin/Debug:../../../../../CommonDatabaseSettingData/bin/Debug:../../../../../BootSettingData/bin/Debug:../../../../../ExportedFileShareSetting/bin/Debug:../../../../../PrintServiceSettings/bin/Debug:../../../../../StatisticalSetting/bin/Debug:../../../../../CIFSSettingData/bin/Debug:../../../../../IPVersionSettingData/bin/Debug:../../../../../IPSettings/bin/Debug:../../../../../StorageAllocationSettingData/bin/Debug:../../../../../ProcessorAllocationSettingData/bin/Debug:../../../../../EthernetPortAllocationSettingData/bin/Debug:../../../../../PowerAllocationSettingData/bin/Debug:../../../../../TCPSettings/bin/Debug:../../../../../FileSystemSetting/bin/Debug:../../../../../JobSettingData/bin/Debug:../../../../../DHCPSettingData/bin/Debug:../../../../../StaticIPAssignmentSettingData/bin/Debug:../../../../../ExtendedStaticIPAssignmentSettingData/bin/Debug:../../../../../DNSGeneralSettingData/bin/Debug:../../../../../DNSSettingData/bin/Debug:../../../../../FCSwitchSettings/bin/Debug:../../../../../ConfigurationData/bin/Debug:../../../../../WiFiNetworkDetectionSettings/bin/Debug:../../../../../VirtualSystemMigrationSettingData/bin/Debug:../../../../../SCSIMultipathSettings/bin/Debug:../../../../../NATStaticSettings/bin/Debug:../../../../../NATListBasedSettings/bin/Debug:../../../../../FileSystemSettingData/bin/Debug:../../../../../DatabaseSegmentSettingData/bin/Debug:../../../../../AHTransform/bin/Debug:../../../../../ESPTransform/bin/Debug:../../../../../IPCOMPTransform/bin/Debug:../../../../../IPsecProposal/bin/Debug:../../../../../IKEProposal/bin/Debug:../../../../../TimeoutsForNATTranslation/bin/Debug:../../../../../DatabaseParameter/bin/Debug:../../../../../BootConfigSetting/bin/Debug:../../../../../iSCSISessionSettings/bin/Debug:../../../../../SWRLimitSetting/bin/Debug:../../../../../MPLSQosPRTrfcProf/bin/Debug:../../../../../MPLSCRLSPTrfcProf/bin/Debug:../../../../../SSHSettingData/bin/Debug:../../../../../OSStorageNameBinding/bin/Debug:../../../../../StorageBridgeNameBinding/bin/Debug:../../../../../SynchronizationAspect/bin/Debug:../../../../../AccountSettingData/bin/Debug:../../../../../LAGPortPartnerSettings/bin/Debug:../../../../../StorageSetting/bin/Debug:../../../../../AdvancedStorageSetting/bin/Debug:../../../../../StorageSettingWithHints/bin/Debug:../../../../../NetworkPolicyActionSettingData/bin/Debug:../../../../../LoadBalancingActionSettingData/bin/Debug:../../../../../VideoHeadResolution/bin/Debug:../../../../../ImportedFileShareSetting/bin/Debug:../../../../../iSCSIConnectionSettings/bin/Debug:../../../../../TierSettingData/bin/Debug:../../../../../TierPolicySettingData/bin/Debug:../../../../../IEEE8021xSettings/bin/Debug:../../../../../ZoneMembershipSettingData/bin/Debug:../../../../../GARPMembershipSettingData/bin/Debug:../../../../../VLANMembershipSettingData/bin/Debug:../../../../../EnabledLogicalElementSettingData/bin/Debug:../../../../../VLANSystemSettingData/bin/Debug:../../../../../RedundancySetSettingData/bin/Debug:/usr/local/lib/pegasus/lib:/usr/local/lib:/usr/lib:/lib ./TestUNIX_SettingsAffectSettings
