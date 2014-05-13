//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////


/* **** Association *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FilesystemServices
*/


/* **** Description *** */
/*
This association defines settings that can be used to create or modify elements. Unlike ElementSettingData, these settings are not used to express the characteristics of existing managed elements. 
Typically, the capabilities associated with this class define the characteristics of a service in creating or modifying elements that are dependent on the service directly or indirectly. A CIM Client may use this association to find SettingData instances that can be used to create or modify these dependent elements.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_SettingAssociatedToCapabilities:
				DefaultSetting Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_SettingAssociatedToCapabilities:


*/

#ifndef __CIM_SETTINGASSOCIATEDTOCAPABILITIES_H
#define __CIM_SETTINGASSOCIATEDTOCAPABILITIES_H


#include "CIM_Dependency.h"
#include <RedundancySetCapabilities/UNIX_RedundancySetCapabilitiesProvider.h>
#include <JobCapabilities/UNIX_JobCapabilitiesProvider.h>
#include <DiagnosticServiceJobCapabilities/UNIX_DiagnosticServiceJobCapabilitiesProvider.h>
#include <BlockStatisticsCapabilities/UNIX_BlockStatisticsCapabilitiesProvider.h>
#include <FileSystemStatisticsCapabilities/UNIX_FileSystemStatisticsCapabilitiesProvider.h>
#include <VirtualSystemSnapshotServiceCapabilities/UNIX_VirtualSystemSnapshotServiceCapabilitiesProvider.h>
#include <USBRedirectionCapabilities/UNIX_USBRedirectionCapabilitiesProvider.h>
#include <MediaRedirectionCapabilities/UNIX_MediaRedirectionCapabilitiesProvider.h>
#include <PowerUtilizationManagementCapabilities/UNIX_PowerUtilizationManagementCapabilitiesProvider.h>
#include <VirtualSystemManagementCapabilities/UNIX_VirtualSystemManagementCapabilitiesProvider.h>
#include <WiFiEndpointCapabilities/UNIX_WiFiEndpointCapabilitiesProvider.h>
#include <WSManagementCapabilities/UNIX_WSManagementCapabilitiesProvider.h>
#include <CIMXMLCapabilities/UNIX_CIMXMLCapabilitiesProvider.h>
#include <SSHCapabilities/UNIX_SSHCapabilitiesProvider.h>
#include <CLPCapabilities/UNIX_CLPCapabilitiesProvider.h>
#include <RecordLogCapabilities/UNIX_RecordLogCapabilitiesProvider.h>
#include <LaunchInContextCapabilities/UNIX_LaunchInContextCapabilitiesProvider.h>
#include <AccountManagementCapabilities/UNIX_AccountManagementCapabilitiesProvider.h>
#include <PowerTopologyCapabilities/UNIX_PowerTopologyCapabilitiesProvider.h>
#include <AccountCapabilities/UNIX_AccountCapabilitiesProvider.h>
#include <WiFiPortCapabilities/UNIX_WiFiPortCapabilitiesProvider.h>
#include <FCPortCapabilities/UNIX_FCPortCapabilitiesProvider.h>
#include <OpaqueManagementDataCapabilities/UNIX_OpaqueManagementDataCapabilitiesProvider.h>
#include <OperatingSystemCapabilities/UNIX_OperatingSystemCapabilitiesProvider.h>
#include <NetworkPolicyServiceCapabilities/UNIX_NetworkPolicyServiceCapabilitiesProvider.h>
#include <LoadBalancerServiceCapabilities/UNIX_LoadBalancerServiceCapabilitiesProvider.h>
#include <FCSwitchCapabilities/UNIX_FCSwitchCapabilitiesProvider.h>
#include <WBEMServerCapabilities/UNIX_WBEMServerCapabilitiesProvider.h>
#include <IndicatorLEDCapabilities/UNIX_IndicatorLEDCapabilitiesProvider.h>
#include <CredentialManagementCapabilities/UNIX_CredentialManagementCapabilitiesProvider.h>
#include <CertificateManagementCapabilities/UNIX_CertificateManagementCapabilitiesProvider.h>
#include <BootServiceCapabilities/UNIX_BootServiceCapabilitiesProvider.h>
#include <ProcessorCapabilities/UNIX_ProcessorCapabilitiesProvider.h>
#include <TPMCapabilities/UNIX_TPMCapabilitiesProvider.h>
#include <AlarmDeviceCapabilities/UNIX_AlarmDeviceCapabilitiesProvider.h>
#include <DHCPCapabilities/UNIX_DHCPCapabilitiesProvider.h>
#include <MetricServiceCapabilities/UNIX_MetricServiceCapabilitiesProvider.h>
#include <FingerprintMatchingServiceCapabilities/UNIX_FingerprintMatchingServiceCapabilitiesProvider.h>
#include <PlatformWatchdogServiceCapabilities/UNIX_PlatformWatchdogServiceCapabilitiesProvider.h>
#include <ImportedFileShareCapabilities/UNIX_ImportedFileShareCapabilitiesProvider.h>
#include <PhysicalAssetCapabilities/UNIX_PhysicalAssetCapabilitiesProvider.h>
#include <DeviceSharingCapabilities/UNIX_DeviceSharingCapabilitiesProvider.h>
#include <AllocationCapabilities/UNIX_AllocationCapabilitiesProvider.h>
#include <PrintServiceCapabilities/UNIX_PrintServiceCapabilitiesProvider.h>
#include <OSPFServiceCapabilities/UNIX_OSPFServiceCapabilitiesProvider.h>
#include <ZoneCapabilities/UNIX_ZoneCapabilitiesProvider.h>
#include <StorageNameBindingCapabilities/UNIX_StorageNameBindingCapabilitiesProvider.h>
#include <VLANSystemCapabilities/UNIX_VLANSystemCapabilitiesProvider.h>
#include <IndicationServiceCapabilities/UNIX_IndicationServiceCapabilitiesProvider.h>
#include <BIOSServiceCapabilities/UNIX_BIOSServiceCapabilitiesProvider.h>
#include <ViewCapabilities/UNIX_ViewCapabilitiesProvider.h>
#include <FileImportCapabilities/UNIX_FileImportCapabilitiesProvider.h>
#include <ExportedFileShareCapabilities/UNIX_ExportedFileShareCapabilitiesProvider.h>
#include <VTLStatisticalDataServiceCapabilities/UNIX_VTLStatisticalDataServiceCapabilitiesProvider.h>
#include <QueryCapabilities/UNIX_QueryCapabilitiesProvider.h>
#include <LocalizationCapabilities/UNIX_LocalizationCapabilitiesProvider.h>
#include <PrivilegeManagementCapabilities/UNIX_PrivilegeManagementCapabilitiesProvider.h>
#include <RoleBasedManagementCapabilities/UNIX_RoleBasedManagementCapabilitiesProvider.h>
#include <SoftwareInstallationServiceCapabilities/UNIX_SoftwareInstallationServiceCapabilitiesProvider.h>
#include <SCSIMultipathConfigurationCapabilities/UNIX_SCSIMultipathConfigurationCapabilitiesProvider.h>
#include <FileSystemReplicationCapabilities/UNIX_FileSystemReplicationCapabilitiesProvider.h>
#include <RAIDDiagnosticServiceCapabilities/UNIX_RAIDDiagnosticServiceCapabilitiesProvider.h>
#include <EthernetNICDiagnosticServiceCapabilities/UNIX_EthernetNICDiagnosticServiceCapabilitiesProvider.h>
#include <CPUDiagnosticServiceCapabilities/UNIX_CPUDiagnosticServiceCapabilitiesProvider.h>
#include <DiskDriveDiagnosticServiceCapabilities/UNIX_DiskDriveDiagnosticServiceCapabilitiesProvider.h>
#include <FCHBADiagnosticServiceCapabilities/UNIX_FCHBADiagnosticServiceCapabilitiesProvider.h>
#include <OpticalDriveDiagnosticServiceCapabilities/UNIX_OpticalDriveDiagnosticServiceCapabilitiesProvider.h>
#include <iSCSIConfigurationCapabilities/UNIX_iSCSIConfigurationCapabilitiesProvider.h>
#include <ComputerSystemNodeCapabilities/UNIX_ComputerSystemNodeCapabilitiesProvider.h>
#include <MPLSCapabilities/UNIX_MPLSCapabilitiesProvider.h>
#include <CommonDatabaseCapabilities/UNIX_CommonDatabaseCapabilitiesProvider.h>
#include <RelationalDatabaseCapabilities/UNIX_RelationalDatabaseCapabilitiesProvider.h>
#include <FileSystemConfigurationCapabilities/UNIX_FileSystemConfigurationCapabilitiesProvider.h>
#include <FileSystemReplicationServiceCapabilities/UNIX_FileSystemReplicationServiceCapabilitiesProvider.h>
#include <ProtocolControllerMaskingCapabilities/UNIX_ProtocolControllerMaskingCapabilitiesProvider.h>
#include <GroupMaskingMappingCapabilities/UNIX_GroupMaskingMappingCapabilitiesProvider.h>
#include <FileSystemCapabilities/UNIX_FileSystemCapabilitiesProvider.h>
#include <IEEE8021xCapabilities/UNIX_IEEE8021xCapabilitiesProvider.h>
#include <ReplicationServiceCapabilities/UNIX_ReplicationServiceCapabilitiesProvider.h>
#include <LAGControlCapabilities/UNIX_LAGControlCapabilitiesProvider.h>
#include <ResourcePoolConfigurationCapabilities/UNIX_ResourcePoolConfigurationCapabilitiesProvider.h>
#include <PowerManagementCapabilities/UNIX_PowerManagementCapabilitiesProvider.h>
#include <VirtualSystemSnapshotCapabilities/UNIX_VirtualSystemSnapshotCapabilitiesProvider.h>
#include <iSCSICapabilities/UNIX_iSCSICapabilitiesProvider.h>
#include <ImplementationCapabilities/UNIX_ImplementationCapabilitiesProvider.h>
#include <StorageLibraryCapabilities/UNIX_StorageLibraryCapabilitiesProvider.h>
#include <VLANEndpointCapabilities/UNIX_VLANEndpointCapabilitiesProvider.h>
#include <ProviderCapabilities/UNIX_ProviderCapabilitiesProvider.h>
#include <StorageServerAsymmetryCapabilities/UNIX_StorageServerAsymmetryCapabilitiesProvider.h>
#include <DiskPartitionConfigurationCapabilities/UNIX_DiskPartitionConfigurationCapabilitiesProvider.h>
#include <StorageReplicationCapabilities/UNIX_StorageReplicationCapabilitiesProvider.h>
#include <StorageConfigurationCapabilities/UNIX_StorageConfigurationCapabilitiesProvider.h>
#include <TierServiceCapabilities/UNIX_TierServiceCapabilitiesProvider.h>
#include <TierPolicyServiceCapabilities/UNIX_TierPolicyServiceCapabilitiesProvider.h>
#include <StorageCapabilities/UNIX_StorageCapabilitiesProvider.h>
#include <StorageTierCapabilities/UNIX_StorageTierCapabilitiesProvider.h>
#include <SpareConfigurationCapabilities/UNIX_SpareConfigurationCapabilitiesProvider.h>
#include <FileExportCapabilities/UNIX_FileExportCapabilitiesProvider.h>
#include <VirtualSystemMigrationCapabilities/UNIX_VirtualSystemMigrationCapabilitiesProvider.h>
#include <StorageElementCompositionCapabilities/UNIX_StorageElementCompositionCapabilitiesProvider.h>
#include <FirewallRuleSettingData/UNIX_FirewallRuleSettingDataProvider.h>
#include <LoadBalancingRuleSettingData/UNIX_LoadBalancingRuleSettingDataProvider.h>
#include <QoSPolicyRuleSettingData/UNIX_QoSPolicyRuleSettingDataProvider.h>
#include <VLANEndpointSettingData/UNIX_VLANEndpointSettingDataProvider.h>
#include <CLPSettingData/UNIX_CLPSettingDataProvider.h>
#include <StorageClientSettingData/UNIX_StorageClientSettingDataProvider.h>
#include <CPUDiagnosticSettingData/UNIX_CPUDiagnosticSettingDataProvider.h>
#include <RAIDDiagnosticSettingData/UNIX_RAIDDiagnosticSettingDataProvider.h>
#include <DiskDriveDiagnosticSettingData/UNIX_DiskDriveDiagnosticSettingDataProvider.h>
#include <FCHBADiagnosticSettingData/UNIX_FCHBADiagnosticSettingDataProvider.h>
#include <EthernetNICDiagnosticSettingData/UNIX_EthernetNICDiagnosticSettingDataProvider.h>
#include <SAEndpointRefreshSettings/UNIX_SAEndpointRefreshSettingsProvider.h>
#include <WiFiEndpointSettings/UNIX_WiFiEndpointSettingsProvider.h>
#include <LogicalPortSettings/UNIX_LogicalPortSettingsProvider.h>
#include <NetworkPortSettings/UNIX_NetworkPortSettingsProvider.h>
#include <FCPortSettings/UNIX_FCPortSettingsProvider.h>
#include <ReplicationSettingData/UNIX_ReplicationSettingDataProvider.h>
#include <AccessControlServiceSettingData/UNIX_AccessControlServiceSettingDataProvider.h>
#include <TimeZoneSettingData/UNIX_TimeZoneSettingDataProvider.h>
#include <VirtualSystemSettingData/UNIX_VirtualSystemSettingDataProvider.h>
#include <VirtualEthernetSwitchSettingData/UNIX_VirtualEthernetSwitchSettingDataProvider.h>
#include <FCIPSettings/UNIX_FCIPSettingsProvider.h>
#include <IndicationServiceSettingData/UNIX_IndicationServiceSettingDataProvider.h>
#include <BootSourceSetting/UNIX_BootSourceSettingProvider.h>
#include <CommonDatabaseSettingData/UNIX_CommonDatabaseSettingDataProvider.h>
#include <BootSettingData/UNIX_BootSettingDataProvider.h>
#include <ExportedFileShareSetting/UNIX_ExportedFileShareSettingProvider.h>
#include <PrintServiceSettings/UNIX_PrintServiceSettingsProvider.h>
#include <StatisticalSetting/UNIX_StatisticalSettingProvider.h>
#include <CIFSSettingData/UNIX_CIFSSettingDataProvider.h>
#include <IPVersionSettingData/UNIX_IPVersionSettingDataProvider.h>
#include <IPSettings/UNIX_IPSettingsProvider.h>
#include <StorageAllocationSettingData/UNIX_StorageAllocationSettingDataProvider.h>
#include <ProcessorAllocationSettingData/UNIX_ProcessorAllocationSettingDataProvider.h>
#include <EthernetPortAllocationSettingData/UNIX_EthernetPortAllocationSettingDataProvider.h>
#include <PowerAllocationSettingData/UNIX_PowerAllocationSettingDataProvider.h>
#include <TCPSettings/UNIX_TCPSettingsProvider.h>
#include <FileSystemSetting/UNIX_FileSystemSettingProvider.h>
#include <JobSettingData/UNIX_JobSettingDataProvider.h>
#include <DHCPSettingData/UNIX_DHCPSettingDataProvider.h>
#include <StaticIPAssignmentSettingData/UNIX_StaticIPAssignmentSettingDataProvider.h>
#include <ExtendedStaticIPAssignmentSettingData/UNIX_ExtendedStaticIPAssignmentSettingDataProvider.h>
#include <DNSGeneralSettingData/UNIX_DNSGeneralSettingDataProvider.h>
#include <DNSSettingData/UNIX_DNSSettingDataProvider.h>
#include <FCSwitchSettings/UNIX_FCSwitchSettingsProvider.h>
#include <ConfigurationData/UNIX_ConfigurationDataProvider.h>
#include <WiFiNetworkDetectionSettings/UNIX_WiFiNetworkDetectionSettingsProvider.h>
#include <VirtualSystemMigrationSettingData/UNIX_VirtualSystemMigrationSettingDataProvider.h>
#include <SCSIMultipathSettings/UNIX_SCSIMultipathSettingsProvider.h>
#include <NATStaticSettings/UNIX_NATStaticSettingsProvider.h>
#include <NATListBasedSettings/UNIX_NATListBasedSettingsProvider.h>
#include <FileSystemSettingData/UNIX_FileSystemSettingDataProvider.h>
#include <DatabaseSegmentSettingData/UNIX_DatabaseSegmentSettingDataProvider.h>
#include <AHTransform/UNIX_AHTransformProvider.h>
#include <ESPTransform/UNIX_ESPTransformProvider.h>
#include <IPCOMPTransform/UNIX_IPCOMPTransformProvider.h>
#include <IPsecProposal/UNIX_IPsecProposalProvider.h>
#include <IKEProposal/UNIX_IKEProposalProvider.h>
#include <TimeoutsForNATTranslation/UNIX_TimeoutsForNATTranslationProvider.h>
#include <DatabaseParameter/UNIX_DatabaseParameterProvider.h>
#include <BootConfigSetting/UNIX_BootConfigSettingProvider.h>
#include <iSCSISessionSettings/UNIX_iSCSISessionSettingsProvider.h>
#include <SWRLimitSetting/UNIX_SWRLimitSettingProvider.h>
#include <MPLSQosPRTrfcProf/UNIX_MPLSQosPRTrfcProfProvider.h>
#include <MPLSCRLSPTrfcProf/UNIX_MPLSCRLSPTrfcProfProvider.h>
#include <SSHSettingData/UNIX_SSHSettingDataProvider.h>
#include <OSStorageNameBinding/UNIX_OSStorageNameBindingProvider.h>
#include <StorageBridgeNameBinding/UNIX_StorageBridgeNameBindingProvider.h>
#include <SynchronizationAspect/UNIX_SynchronizationAspectProvider.h>
#include <AccountSettingData/UNIX_AccountSettingDataProvider.h>
#include <LAGPortPartnerSettings/UNIX_LAGPortPartnerSettingsProvider.h>
#include <StorageSetting/UNIX_StorageSettingProvider.h>
#include <AdvancedStorageSetting/UNIX_AdvancedStorageSettingProvider.h>
#include <StorageSettingWithHints/UNIX_StorageSettingWithHintsProvider.h>
#include <NetworkPolicyActionSettingData/UNIX_NetworkPolicyActionSettingDataProvider.h>
#include <LoadBalancingActionSettingData/UNIX_LoadBalancingActionSettingDataProvider.h>
#include <VideoHeadResolution/UNIX_VideoHeadResolutionProvider.h>
#include <ImportedFileShareSetting/UNIX_ImportedFileShareSettingProvider.h>
#include <iSCSIConnectionSettings/UNIX_iSCSIConnectionSettingsProvider.h>
#include <TierSettingData/UNIX_TierSettingDataProvider.h>
#include <TierPolicySettingData/UNIX_TierPolicySettingDataProvider.h>
#include <IEEE8021xSettings/UNIX_IEEE8021xSettingsProvider.h>
#include <ZoneMembershipSettingData/UNIX_ZoneMembershipSettingDataProvider.h>
#include <GARPMembershipSettingData/UNIX_GARPMembershipSettingDataProvider.h>
#include <VLANMembershipSettingData/UNIX_VLANMembershipSettingDataProvider.h>
#include <EnabledLogicalElementSettingData/UNIX_EnabledLogicalElementSettingDataProvider.h>
#include <VLANSystemSettingData/UNIX_VLANSystemSettingDataProvider.h>
#include <RedundancySetSettingData/UNIX_RedundancySetSettingDataProvider.h>


#ifndef PROPERTY_DEFAULT_SETTING
#define PROPERTY_DEFAULT_SETTING \
					"DefaultSetting"
#endif



class CIM_SettingAssociatedToCapabilities :
	public CIM_Dependency
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getAntecedent(CIMProperty&) const=0;
	virtual CIMInstance getAntecedent() const=0;
	virtual void setAntecedent(CIMInstance&)=0;
	virtual Boolean getDependent(CIMProperty&) const=0;
	virtual CIMInstance getDependent() const=0;
	virtual void setDependent(CIMInstance&)=0;
	virtual Boolean getDefaultSetting(CIMProperty&) const=0;
	virtual Boolean getDefaultSetting() const=0;
	virtual void setDefaultSetting(Boolean&)=0;


private:

};

#endif /* CIM_SETTINGASSOCIATEDTOCAPABILITIES */
