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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_ProductServiceComponent::UNIX_ProductServiceComponent(void)
{
}

UNIX_ProductServiceComponent::~UNIX_ProductServiceComponent(void)
{
}

Boolean UNIX_ProductServiceComponent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_ProductServiceComponent::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_ProductServiceComponent::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_ProductServiceComponent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_ProductServiceComponent::getPartComponent() const
{
	return _partComponent;
}

void UNIX_ProductServiceComponent::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}


void UNIX_ProductServiceComponent::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_Product"));
	_partComponent = CIMInstance(CIMName("CIM_FibreProtocolService"));

}

Boolean UNIX_ProductServiceComponent::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "GroupComponent"))
			{
				CIMInstance groupComponentValue;
				property.getValue().get(groupComponentValue);
				setGroupComponent(groupComponentValue);
			}
			else if (String::equal(property.getName().getString(), "PartComponent"))
			{
				CIMInstance partComponentValue;
				property.getValue().get(partComponentValue);
				setPartComponent(partComponentValue);
			}
	}
	return true;
}


Boolean UNIX_ProductServiceComponent::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_Product_Index = -1;
	endOf_UNIX_Product_Group = !group_UNIX_Product_Component.initialize();
	part_UNIX_FibreProtocolService_Index = -1;
	endOf_UNIX_FibreProtocolService_Part = !part_UNIX_FibreProtocolService_Component.initialize();
	part_UNIX_WakeUpService_Index = -1;
	endOf_UNIX_WakeUpService_Part = !part_UNIX_WakeUpService_Component.initialize();
	part_UNIX_VirtualSystemSnapshotService_Index = -1;
	endOf_UNIX_VirtualSystemSnapshotService_Part = !part_UNIX_VirtualSystemSnapshotService_Component.initialize();
	part_UNIX_ResourcePoolConfigurationService_Index = -1;
	endOf_UNIX_ResourcePoolConfigurationService_Part = !part_UNIX_ResourcePoolConfigurationService_Component.initialize();
	part_UNIX_FileSystemConfigurationService_Index = -1;
	endOf_UNIX_FileSystemConfigurationService_Part = !part_UNIX_FileSystemConfigurationService_Component.initialize();
	part_UNIX_HelpService_Index = -1;
	endOf_UNIX_HelpService_Part = !part_UNIX_HelpService_Component.initialize();
	part_UNIX_StorageRelocationService_Index = -1;
	endOf_UNIX_StorageRelocationService_Part = !part_UNIX_StorageRelocationService_Component.initialize();
	part_UNIX_MPLSService_Index = -1;
	endOf_UNIX_MPLSService_Part = !part_UNIX_MPLSService_Component.initialize();
	part_UNIX_PolicyActivationService_Index = -1;
	endOf_UNIX_PolicyActivationService_Part = !part_UNIX_PolicyActivationService_Component.initialize();
	part_UNIX_SCSIPathConfigurationService_Index = -1;
	endOf_UNIX_SCSIPathConfigurationService_Part = !part_UNIX_SCSIPathConfigurationService_Component.initialize();
	part_UNIX_BIOSService_Index = -1;
	endOf_UNIX_BIOSService_Part = !part_UNIX_BIOSService_Component.initialize();
	part_UNIX_PowerManagementService_Index = -1;
	endOf_UNIX_PowerManagementService_Part = !part_UNIX_PowerManagementService_Component.initialize();
	part_UNIX_NetworkPortConfigurationService_Index = -1;
	endOf_UNIX_NetworkPortConfigurationService_Part = !part_UNIX_NetworkPortConfigurationService_Component.initialize();
	part_UNIX_WiFiPortConfigurationService_Index = -1;
	endOf_UNIX_WiFiPortConfigurationService_Part = !part_UNIX_WiFiPortConfigurationService_Component.initialize();
	part_UNIX_VRFConfigurationService_Index = -1;
	endOf_UNIX_VRFConfigurationService_Part = !part_UNIX_VRFConfigurationService_Component.initialize();
	part_UNIX_ReplicationService_Index = -1;
	endOf_UNIX_ReplicationService_Part = !part_UNIX_ReplicationService_Component.initialize();
	part_UNIX_AccountManagementService_Index = -1;
	endOf_UNIX_AccountManagementService_Part = !part_UNIX_AccountManagementService_Component.initialize();
	part_UNIX_VerificationService_Index = -1;
	endOf_UNIX_VerificationService_Part = !part_UNIX_VerificationService_Component.initialize();
	part_UNIX_CertificateAuthority_Index = -1;
	endOf_UNIX_CertificateAuthority_Part = !part_UNIX_CertificateAuthority_Component.initialize();
	part_UNIX_Notary_Index = -1;
	endOf_UNIX_Notary_Part = !part_UNIX_Notary_Component.initialize();
	part_UNIX_KeyBasedCredentialManagementService_Index = -1;
	endOf_UNIX_KeyBasedCredentialManagementService_Part = !part_UNIX_KeyBasedCredentialManagementService_Component.initialize();
	part_UNIX_CertificateManagementService_Index = -1;
	endOf_UNIX_CertificateManagementService_Part = !part_UNIX_CertificateManagementService_Component.initialize();
	part_UNIX_KerberosKeyDistributionCenter_Index = -1;
	endOf_UNIX_KerberosKeyDistributionCenter_Part = !part_UNIX_KerberosKeyDistributionCenter_Component.initialize();
	part_UNIX_PublicKeyManagementService_Index = -1;
	endOf_UNIX_PublicKeyManagementService_Part = !part_UNIX_PublicKeyManagementService_Component.initialize();
	part_UNIX_SharedSecretService_Index = -1;
	endOf_UNIX_SharedSecretService_Part = !part_UNIX_SharedSecretService_Component.initialize();
	part_UNIX_IdentityManagementService_Index = -1;
	endOf_UNIX_IdentityManagementService_Part = !part_UNIX_IdentityManagementService_Component.initialize();
	part_UNIX_StorageHardwareIDManagementService_Index = -1;
	endOf_UNIX_StorageHardwareIDManagementService_Part = !part_UNIX_StorageHardwareIDManagementService_Component.initialize();
	part_UNIX_AuthorizationService_Index = -1;
	endOf_UNIX_AuthorizationService_Part = !part_UNIX_AuthorizationService_Component.initialize();
	part_UNIX_PrivilegeManagementService_Index = -1;
	endOf_UNIX_PrivilegeManagementService_Part = !part_UNIX_PrivilegeManagementService_Component.initialize();
	part_UNIX_RoleBasedAuthorizationService_Index = -1;
	endOf_UNIX_RoleBasedAuthorizationService_Part = !part_UNIX_RoleBasedAuthorizationService_Component.initialize();
	part_UNIX_AccessControlService_Index = -1;
	endOf_UNIX_AccessControlService_Part = !part_UNIX_AccessControlService_Component.initialize();
	part_UNIX_WBEMServer_Index = -1;
	endOf_UNIX_WBEMServer_Part = !part_UNIX_WBEMServer_Component.initialize();
	part_UNIX_LaunchInContextService_Index = -1;
	endOf_UNIX_LaunchInContextService_Part = !part_UNIX_LaunchInContextService_Component.initialize();
	part_UNIX_VirtualSystemManagementService_Index = -1;
	endOf_UNIX_VirtualSystemManagementService_Part = !part_UNIX_VirtualSystemManagementService_Component.initialize();
	part_UNIX_MetricService_Index = -1;
	endOf_UNIX_MetricService_Part = !part_UNIX_MetricService_Component.initialize();
	part_UNIX_StorageNameBindingService_Index = -1;
	endOf_UNIX_StorageNameBindingService_Part = !part_UNIX_StorageNameBindingService_Component.initialize();
	part_UNIX_ZoneService_Index = -1;
	endOf_UNIX_ZoneService_Part = !part_UNIX_ZoneService_Component.initialize();
	part_UNIX_ControllerConfigurationService_Index = -1;
	endOf_UNIX_ControllerConfigurationService_Part = !part_UNIX_ControllerConfigurationService_Component.initialize();
	part_UNIX_GroupMaskingMappingService_Index = -1;
	endOf_UNIX_GroupMaskingMappingService_Part = !part_UNIX_GroupMaskingMappingService_Component.initialize();
	part_UNIX_DatabaseService_Index = -1;
	endOf_UNIX_DatabaseService_Part = !part_UNIX_DatabaseService_Component.initialize();
	part_UNIX_DiskPartitionConfigurationService_Index = -1;
	endOf_UNIX_DiskPartitionConfigurationService_Part = !part_UNIX_DiskPartitionConfigurationService_Component.initialize();
	part_UNIX_ConfigurationReportingService_Index = -1;
	endOf_UNIX_ConfigurationReportingService_Part = !part_UNIX_ConfigurationReportingService_Component.initialize();
	part_UNIX_PowerTopologyService_Index = -1;
	endOf_UNIX_PowerTopologyService_Part = !part_UNIX_PowerTopologyService_Component.initialize();
	part_UNIX_NetworkPolicyService_Index = -1;
	endOf_UNIX_NetworkPolicyService_Part = !part_UNIX_NetworkPolicyService_Component.initialize();
	part_UNIX_BasicExecutionService_Index = -1;
	endOf_UNIX_BasicExecutionService_Part = !part_UNIX_BasicExecutionService_Component.initialize();
	part_UNIX_SpareConfigurationService_Index = -1;
	endOf_UNIX_SpareConfigurationService_Part = !part_UNIX_SpareConfigurationService_Component.initialize();
	part_UNIX_StorageElementCompositionService_Index = -1;
	endOf_UNIX_StorageElementCompositionService_Part = !part_UNIX_StorageElementCompositionService_Component.initialize();
	part_UNIX_OpaqueManagementDataService_Index = -1;
	endOf_UNIX_OpaqueManagementDataService_Part = !part_UNIX_OpaqueManagementDataService_Component.initialize();
	part_UNIX_FingerprintMatchingService_Index = -1;
	endOf_UNIX_FingerprintMatchingService_Part = !part_UNIX_FingerprintMatchingService_Component.initialize();
	part_UNIX_ProtocolService_Index = -1;
	endOf_UNIX_ProtocolService_Part = !part_UNIX_ProtocolService_Component.initialize();
	part_UNIX_WBEMProtocolService_Index = -1;
	endOf_UNIX_WBEMProtocolService_Part = !part_UNIX_WBEMProtocolService_Component.initialize();
	part_UNIX_TierService_Index = -1;
	endOf_UNIX_TierService_Part = !part_UNIX_TierService_Component.initialize();
	part_UNIX_TierPolicyService_Index = -1;
	endOf_UNIX_TierPolicyService_Part = !part_UNIX_TierPolicyService_Component.initialize();
	part_UNIX_IndicationService_Index = -1;
	endOf_UNIX_IndicationService_Part = !part_UNIX_IndicationService_Component.initialize();
	part_UNIX_FileImportService_Index = -1;
	endOf_UNIX_FileImportService_Part = !part_UNIX_FileImportService_Component.initialize();
	part_UNIX_VTLStatisticalDataService_Index = -1;
	endOf_UNIX_VTLStatisticalDataService_Part = !part_UNIX_VTLStatisticalDataService_Component.initialize();
	part_UNIX_DropThresholdCalculationService_Index = -1;
	endOf_UNIX_DropThresholdCalculationService_Part = !part_UNIX_DropThresholdCalculationService_Component.initialize();
	part_UNIX_TokenBucketMeterService_Index = -1;
	endOf_UNIX_TokenBucketMeterService_Part = !part_UNIX_TokenBucketMeterService_Component.initialize();
	part_UNIX_EWMAMeterService_Index = -1;
	endOf_UNIX_EWMAMeterService_Part = !part_UNIX_EWMAMeterService_Component.initialize();
	part_UNIX_AverageRateMeterService_Index = -1;
	endOf_UNIX_AverageRateMeterService_Part = !part_UNIX_AverageRateMeterService_Component.initialize();
	part_UNIX_ToSMarkerService_Index = -1;
	endOf_UNIX_ToSMarkerService_Part = !part_UNIX_ToSMarkerService_Component.initialize();
	part_UNIX_Priority8021QMarkerService_Index = -1;
	endOf_UNIX_Priority8021QMarkerService_Part = !part_UNIX_Priority8021QMarkerService_Component.initialize();
	part_UNIX_DSCPMarkerService_Index = -1;
	endOf_UNIX_DSCPMarkerService_Part = !part_UNIX_DSCPMarkerService_Component.initialize();
	part_UNIX_PreambleMarkerService_Index = -1;
	endOf_UNIX_PreambleMarkerService_Part = !part_UNIX_PreambleMarkerService_Component.initialize();
	part_UNIX_ClassifierService_Index = -1;
	endOf_UNIX_ClassifierService_Part = !part_UNIX_ClassifierService_Component.initialize();
	part_UNIX_ClassifierElement_Index = -1;
	endOf_UNIX_ClassifierElement_Part = !part_UNIX_ClassifierElement_Component.initialize();
	part_UNIX_PacketSchedulingService_Index = -1;
	endOf_UNIX_PacketSchedulingService_Part = !part_UNIX_PacketSchedulingService_Component.initialize();
	part_UNIX_NonWorkConservingSchedulingService_Index = -1;
	endOf_UNIX_NonWorkConservingSchedulingService_Part = !part_UNIX_NonWorkConservingSchedulingService_Component.initialize();
	part_UNIX_REDDropperService_Index = -1;
	endOf_UNIX_REDDropperService_Part = !part_UNIX_REDDropperService_Component.initialize();
	part_UNIX_HeadTailDropper_Index = -1;
	endOf_UNIX_HeadTailDropper_Part = !part_UNIX_HeadTailDropper_Component.initialize();
	part_UNIX_WeightedREDDropperService_Index = -1;
	endOf_UNIX_WeightedREDDropperService_Part = !part_UNIX_WeightedREDDropperService_Component.initialize();
	part_UNIX_QueuingService_Index = -1;
	endOf_UNIX_QueuingService_Part = !part_UNIX_QueuingService_Component.initialize();
	part_UNIX_BootService_Index = -1;
	endOf_UNIX_BootService_Part = !part_UNIX_BootService_Component.initialize();
	part_UNIX_AFService_Index = -1;
	endOf_UNIX_AFService_Part = !part_UNIX_AFService_Component.initialize();
	part_UNIX_EFService_Index = -1;
	endOf_UNIX_EFService_Part = !part_UNIX_EFService_Component.initialize();
	part_UNIX_FlowService_Index = -1;
	endOf_UNIX_FlowService_Part = !part_UNIX_FlowService_Component.initialize();
	part_UNIX_Hdr8021PService_Index = -1;
	endOf_UNIX_Hdr8021PService_Part = !part_UNIX_Hdr8021PService_Component.initialize();
	part_UNIX_PrecedenceService_Index = -1;
	endOf_UNIX_PrecedenceService_Part = !part_UNIX_PrecedenceService_Component.initialize();
	part_UNIX_PrintService_Index = -1;
	endOf_UNIX_PrintService_Part = !part_UNIX_PrintService_Component.initialize();
	part_UNIX_TimeService_Index = -1;
	endOf_UNIX_TimeService_Part = !part_UNIX_TimeService_Component.initialize();
	part_UNIX_SoftwareInstallationService_Index = -1;
	endOf_UNIX_SoftwareInstallationService_Part = !part_UNIX_SoftwareInstallationService_Component.initialize();
	part_UNIX_VLANService_Index = -1;
	endOf_UNIX_VLANService_Part = !part_UNIX_VLANService_Component.initialize();
	part_UNIX_Specific802dot1QVLANService_Index = -1;
	endOf_UNIX_Specific802dot1QVLANService_Part = !part_UNIX_Specific802dot1QVLANService_Component.initialize();
	part_UNIX_PowerUtilizationManagementService_Index = -1;
	endOf_UNIX_PowerUtilizationManagementService_Part = !part_UNIX_PowerUtilizationManagementService_Component.initialize();
	part_UNIX_ClusteringService_Index = -1;
	endOf_UNIX_ClusteringService_Part = !part_UNIX_ClusteringService_Component.initialize();
	part_UNIX_SharedDeviceManagementService_Index = -1;
	endOf_UNIX_SharedDeviceManagementService_Part = !part_UNIX_SharedDeviceManagementService_Component.initialize();
	part_UNIX_BatchService_Index = -1;
	endOf_UNIX_BatchService_Part = !part_UNIX_BatchService_Component.initialize();
	part_UNIX_iSCSIConfigurationService_Index = -1;
	endOf_UNIX_iSCSIConfigurationService_Part = !part_UNIX_iSCSIConfigurationService_Component.initialize();
	part_UNIX_OOBAlertService_Index = -1;
	endOf_UNIX_OOBAlertService_Part = !part_UNIX_OOBAlertService_Component.initialize();
	part_UNIX_StorageConfigurationService_Index = -1;
	endOf_UNIX_StorageConfigurationService_Part = !part_UNIX_StorageConfigurationService_Component.initialize();
	part_UNIX_IPConfigurationService_Index = -1;
	endOf_UNIX_IPConfigurationService_Part = !part_UNIX_IPConfigurationService_Component.initialize();
	part_UNIX_VirtualSystemMigrationService_Index = -1;
	endOf_UNIX_VirtualSystemMigrationService_Part = !part_UNIX_VirtualSystemMigrationService_Component.initialize();
	part_UNIX_MPLSCrossConnect_Index = -1;
	endOf_UNIX_MPLSCrossConnect_Part = !part_UNIX_MPLSCrossConnect_Component.initialize();
	part_UNIX_PlatformWatchdogService_Index = -1;
	endOf_UNIX_PlatformWatchdogService_Part = !part_UNIX_PlatformWatchdogService_Component.initialize();
	part_UNIX_FCHBADiagnosticTest_Index = -1;
	endOf_UNIX_FCHBADiagnosticTest_Part = !part_UNIX_FCHBADiagnosticTest_Component.initialize();
	part_UNIX_RAIDDiagnosticTest_Index = -1;
	endOf_UNIX_RAIDDiagnosticTest_Part = !part_UNIX_RAIDDiagnosticTest_Component.initialize();
	part_UNIX_CPUDiagnosticTest_Index = -1;
	endOf_UNIX_CPUDiagnosticTest_Part = !part_UNIX_CPUDiagnosticTest_Component.initialize();
	part_UNIX_EthernetNICDiagnosticTest_Index = -1;
	endOf_UNIX_EthernetNICDiagnosticTest_Part = !part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
	part_UNIX_OpticalDriveDiagnosticTest_Index = -1;
	endOf_UNIX_OpticalDriveDiagnosticTest_Part = !part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
	part_UNIX_OpticalDriveDiagnosticSettingData_Index = -1;
	endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = !part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
	part_UNIX_DiskDriveDiagnosticTest_Index = -1;
	endOf_UNIX_DiskDriveDiagnosticTest_Part = !part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
	part_UNIX_IBSubnetManager_Index = -1;
	endOf_UNIX_IBSubnetManager_Part = !part_UNIX_IBSubnetManager_Component.initialize();
	part_UNIX_ObjectManager_Index = -1;
	endOf_UNIX_ObjectManager_Part = !part_UNIX_ObjectManager_Component.initialize();
	part_UNIX_ObjectManagerAdapter_Index = -1;
	endOf_UNIX_ObjectManagerAdapter_Part = !part_UNIX_ObjectManagerAdapter_Component.initialize();
	part_UNIX_ProviderObjectManagerAdapter_Index = -1;
	endOf_UNIX_ProviderObjectManagerAdapter_Part = !part_UNIX_ProviderObjectManagerAdapter_Component.initialize();
	part_UNIX_ProtocolAdapter_Index = -1;
	endOf_UNIX_ProtocolAdapter_Part = !part_UNIX_ProtocolAdapter_Component.initialize();
	part_UNIX_FileSystemStatisticsService_Index = -1;
	endOf_UNIX_FileSystemStatisticsService_Part = !part_UNIX_FileSystemStatisticsService_Component.initialize();
	part_UNIX_BlockStatisticsService_Index = -1;
	endOf_UNIX_BlockStatisticsService_Part = !part_UNIX_BlockStatisticsService_Component.initialize();
	part_UNIX_USBRedirectionService_Index = -1;
	endOf_UNIX_USBRedirectionService_Part = !part_UNIX_USBRedirectionService_Component.initialize();
	part_UNIX_TextRedirectionService_Index = -1;
	endOf_UNIX_TextRedirectionService_Part = !part_UNIX_TextRedirectionService_Component.initialize();
	part_UNIX_BGPService_Index = -1;
	endOf_UNIX_BGPService_Part = !part_UNIX_BGPService_Component.initialize();
	part_UNIX_OSPFService_Index = -1;
	endOf_UNIX_OSPFService_Part = !part_UNIX_OSPFService_Component.initialize();
	part_UNIX_NATService_Index = -1;
	endOf_UNIX_NATService_Part = !part_UNIX_NATService_Component.initialize();
	part_UNIX_TransparentBridgingService_Index = -1;
	endOf_UNIX_TransparentBridgingService_Part = !part_UNIX_TransparentBridgingService_Component.initialize();
	part_UNIX_SourceRoutingService_Index = -1;
	endOf_UNIX_SourceRoutingService_Part = !part_UNIX_SourceRoutingService_Component.initialize();
	part_UNIX_SpanningTreeService_Index = -1;
	endOf_UNIX_SpanningTreeService_Part = !part_UNIX_SpanningTreeService_Component.initialize();
	part_UNIX_SwitchService_Index = -1;
	endOf_UNIX_SwitchService_Part = !part_UNIX_SwitchService_Component.initialize();
	part_UNIX_FileExportService_Index = -1;
	endOf_UNIX_FileExportService_Part = !part_UNIX_FileExportService_Component.initialize();
	return true;
}

Boolean UNIX_ProductServiceComponent::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_FibreProtocolService_Part &&
			endOf_UNIX_WakeUpService_Part &&
			endOf_UNIX_VirtualSystemSnapshotService_Part &&
			endOf_UNIX_ResourcePoolConfigurationService_Part &&
			endOf_UNIX_FileSystemConfigurationService_Part &&
			endOf_UNIX_HelpService_Part &&
			endOf_UNIX_StorageRelocationService_Part &&
			endOf_UNIX_MPLSService_Part &&
			endOf_UNIX_PolicyActivationService_Part &&
			endOf_UNIX_SCSIPathConfigurationService_Part &&
			endOf_UNIX_BIOSService_Part &&
			endOf_UNIX_PowerManagementService_Part &&
			endOf_UNIX_NetworkPortConfigurationService_Part &&
			endOf_UNIX_WiFiPortConfigurationService_Part &&
			endOf_UNIX_VRFConfigurationService_Part &&
			endOf_UNIX_ReplicationService_Part &&
			endOf_UNIX_AccountManagementService_Part &&
			endOf_UNIX_VerificationService_Part &&
			endOf_UNIX_CertificateAuthority_Part &&
			endOf_UNIX_Notary_Part &&
			endOf_UNIX_KeyBasedCredentialManagementService_Part &&
			endOf_UNIX_CertificateManagementService_Part &&
			endOf_UNIX_KerberosKeyDistributionCenter_Part &&
			endOf_UNIX_PublicKeyManagementService_Part &&
			endOf_UNIX_SharedSecretService_Part &&
			endOf_UNIX_IdentityManagementService_Part &&
			endOf_UNIX_StorageHardwareIDManagementService_Part &&
			endOf_UNIX_AuthorizationService_Part &&
			endOf_UNIX_PrivilegeManagementService_Part &&
			endOf_UNIX_RoleBasedAuthorizationService_Part &&
			endOf_UNIX_AccessControlService_Part &&
			endOf_UNIX_WBEMServer_Part &&
			endOf_UNIX_LaunchInContextService_Part &&
			endOf_UNIX_VirtualSystemManagementService_Part &&
			endOf_UNIX_MetricService_Part &&
			endOf_UNIX_StorageNameBindingService_Part &&
			endOf_UNIX_ZoneService_Part &&
			endOf_UNIX_ControllerConfigurationService_Part &&
			endOf_UNIX_GroupMaskingMappingService_Part &&
			endOf_UNIX_DatabaseService_Part &&
			endOf_UNIX_DiskPartitionConfigurationService_Part &&
			endOf_UNIX_ConfigurationReportingService_Part &&
			endOf_UNIX_PowerTopologyService_Part &&
			endOf_UNIX_NetworkPolicyService_Part &&
			endOf_UNIX_BasicExecutionService_Part &&
			endOf_UNIX_SpareConfigurationService_Part &&
			endOf_UNIX_StorageElementCompositionService_Part &&
			endOf_UNIX_OpaqueManagementDataService_Part &&
			endOf_UNIX_FingerprintMatchingService_Part &&
			endOf_UNIX_ProtocolService_Part &&
			endOf_UNIX_WBEMProtocolService_Part &&
			endOf_UNIX_TierService_Part &&
			endOf_UNIX_TierPolicyService_Part &&
			endOf_UNIX_IndicationService_Part &&
			endOf_UNIX_FileImportService_Part &&
			endOf_UNIX_VTLStatisticalDataService_Part &&
			endOf_UNIX_DropThresholdCalculationService_Part &&
			endOf_UNIX_TokenBucketMeterService_Part &&
			endOf_UNIX_EWMAMeterService_Part &&
			endOf_UNIX_AverageRateMeterService_Part &&
			endOf_UNIX_ToSMarkerService_Part &&
			endOf_UNIX_Priority8021QMarkerService_Part &&
			endOf_UNIX_DSCPMarkerService_Part &&
			endOf_UNIX_PreambleMarkerService_Part &&
			endOf_UNIX_ClassifierService_Part &&
			endOf_UNIX_ClassifierElement_Part &&
			endOf_UNIX_PacketSchedulingService_Part &&
			endOf_UNIX_NonWorkConservingSchedulingService_Part &&
			endOf_UNIX_REDDropperService_Part &&
			endOf_UNIX_HeadTailDropper_Part &&
			endOf_UNIX_WeightedREDDropperService_Part &&
			endOf_UNIX_QueuingService_Part &&
			endOf_UNIX_BootService_Part &&
			endOf_UNIX_AFService_Part &&
			endOf_UNIX_EFService_Part &&
			endOf_UNIX_FlowService_Part &&
			endOf_UNIX_Hdr8021PService_Part &&
			endOf_UNIX_PrecedenceService_Part &&
			endOf_UNIX_PrintService_Part &&
			endOf_UNIX_TimeService_Part &&
			endOf_UNIX_SoftwareInstallationService_Part &&
			endOf_UNIX_VLANService_Part &&
			endOf_UNIX_Specific802dot1QVLANService_Part &&
			endOf_UNIX_PowerUtilizationManagementService_Part &&
			endOf_UNIX_ClusteringService_Part &&
			endOf_UNIX_SharedDeviceManagementService_Part &&
			endOf_UNIX_BatchService_Part &&
			endOf_UNIX_iSCSIConfigurationService_Part &&
			endOf_UNIX_OOBAlertService_Part &&
			endOf_UNIX_StorageConfigurationService_Part &&
			endOf_UNIX_IPConfigurationService_Part &&
			endOf_UNIX_VirtualSystemMigrationService_Part &&
			endOf_UNIX_MPLSCrossConnect_Part &&
			endOf_UNIX_PlatformWatchdogService_Part &&
			endOf_UNIX_FCHBADiagnosticTest_Part &&
			endOf_UNIX_RAIDDiagnosticTest_Part &&
			endOf_UNIX_CPUDiagnosticTest_Part &&
			endOf_UNIX_EthernetNICDiagnosticTest_Part &&
			endOf_UNIX_OpticalDriveDiagnosticTest_Part &&
			endOf_UNIX_OpticalDriveDiagnosticSettingData_Part &&
			endOf_UNIX_DiskDriveDiagnosticTest_Part &&
			endOf_UNIX_IBSubnetManager_Part &&
			endOf_UNIX_ObjectManager_Part &&
			endOf_UNIX_ObjectManagerAdapter_Part &&
			endOf_UNIX_ProviderObjectManagerAdapter_Part &&
			endOf_UNIX_ProtocolAdapter_Part &&
			endOf_UNIX_FileSystemStatisticsService_Part &&
			endOf_UNIX_BlockStatisticsService_Part &&
			endOf_UNIX_USBRedirectionService_Part &&
			endOf_UNIX_TextRedirectionService_Part &&
			endOf_UNIX_BGPService_Part &&
			endOf_UNIX_OSPFService_Part &&
			endOf_UNIX_NATService_Part &&
			endOf_UNIX_TransparentBridgingService_Part &&
			endOf_UNIX_SourceRoutingService_Part &&
			endOf_UNIX_SpanningTreeService_Part &&
			endOf_UNIX_SwitchService_Part &&
			endOf_UNIX_FileExportService_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_Product_Index++;
			endOf_UNIX_Product_Group = !group_UNIX_Product_Component.load(group_UNIX_Product_Index);
			if (endOf_UNIX_Product_Group)
			{
				endOf_UNIX_FibreProtocolService_Part = false;
				part_UNIX_FibreProtocolService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_FibreProtocolService_Component.initialize();
				endOf_UNIX_WakeUpService_Part = false;
				part_UNIX_WakeUpService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_WakeUpService_Component.initialize();
				endOf_UNIX_VirtualSystemSnapshotService_Part = false;
				part_UNIX_VirtualSystemSnapshotService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_VirtualSystemSnapshotService_Component.initialize();
				endOf_UNIX_ResourcePoolConfigurationService_Part = false;
				part_UNIX_ResourcePoolConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ResourcePoolConfigurationService_Component.initialize();
				endOf_UNIX_FileSystemConfigurationService_Part = false;
				part_UNIX_FileSystemConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_FileSystemConfigurationService_Component.initialize();
				endOf_UNIX_HelpService_Part = false;
				part_UNIX_HelpService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_HelpService_Component.initialize();
				endOf_UNIX_StorageRelocationService_Part = false;
				part_UNIX_StorageRelocationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_StorageRelocationService_Component.initialize();
				endOf_UNIX_MPLSService_Part = false;
				part_UNIX_MPLSService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_MPLSService_Component.initialize();
				endOf_UNIX_PolicyActivationService_Part = false;
				part_UNIX_PolicyActivationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PolicyActivationService_Component.initialize();
				endOf_UNIX_SCSIPathConfigurationService_Part = false;
				part_UNIX_SCSIPathConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_SCSIPathConfigurationService_Component.initialize();
				endOf_UNIX_BIOSService_Part = false;
				part_UNIX_BIOSService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_BIOSService_Component.initialize();
				endOf_UNIX_PowerManagementService_Part = false;
				part_UNIX_PowerManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PowerManagementService_Component.initialize();
				endOf_UNIX_NetworkPortConfigurationService_Part = false;
				part_UNIX_NetworkPortConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_NetworkPortConfigurationService_Component.initialize();
				endOf_UNIX_WiFiPortConfigurationService_Part = false;
				part_UNIX_WiFiPortConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_WiFiPortConfigurationService_Component.initialize();
				endOf_UNIX_VRFConfigurationService_Part = false;
				part_UNIX_VRFConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_VRFConfigurationService_Component.initialize();
				endOf_UNIX_ReplicationService_Part = false;
				part_UNIX_ReplicationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ReplicationService_Component.initialize();
				endOf_UNIX_AccountManagementService_Part = false;
				part_UNIX_AccountManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_AccountManagementService_Component.initialize();
				endOf_UNIX_VerificationService_Part = false;
				part_UNIX_VerificationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_VerificationService_Component.initialize();
				endOf_UNIX_CertificateAuthority_Part = false;
				part_UNIX_CertificateAuthority_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_CertificateAuthority_Component.initialize();
				endOf_UNIX_Notary_Part = false;
				part_UNIX_Notary_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_Notary_Component.initialize();
				endOf_UNIX_KeyBasedCredentialManagementService_Part = false;
				part_UNIX_KeyBasedCredentialManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_KeyBasedCredentialManagementService_Component.initialize();
				endOf_UNIX_CertificateManagementService_Part = false;
				part_UNIX_CertificateManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_CertificateManagementService_Component.initialize();
				endOf_UNIX_KerberosKeyDistributionCenter_Part = false;
				part_UNIX_KerberosKeyDistributionCenter_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_KerberosKeyDistributionCenter_Component.initialize();
				endOf_UNIX_PublicKeyManagementService_Part = false;
				part_UNIX_PublicKeyManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PublicKeyManagementService_Component.initialize();
				endOf_UNIX_SharedSecretService_Part = false;
				part_UNIX_SharedSecretService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_SharedSecretService_Component.initialize();
				endOf_UNIX_IdentityManagementService_Part = false;
				part_UNIX_IdentityManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_IdentityManagementService_Component.initialize();
				endOf_UNIX_StorageHardwareIDManagementService_Part = false;
				part_UNIX_StorageHardwareIDManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_StorageHardwareIDManagementService_Component.initialize();
				endOf_UNIX_AuthorizationService_Part = false;
				part_UNIX_AuthorizationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_AuthorizationService_Component.initialize();
				endOf_UNIX_PrivilegeManagementService_Part = false;
				part_UNIX_PrivilegeManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PrivilegeManagementService_Component.initialize();
				endOf_UNIX_RoleBasedAuthorizationService_Part = false;
				part_UNIX_RoleBasedAuthorizationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_RoleBasedAuthorizationService_Component.initialize();
				endOf_UNIX_AccessControlService_Part = false;
				part_UNIX_AccessControlService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_AccessControlService_Component.initialize();
				endOf_UNIX_WBEMServer_Part = false;
				part_UNIX_WBEMServer_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_WBEMServer_Component.initialize();
				endOf_UNIX_LaunchInContextService_Part = false;
				part_UNIX_LaunchInContextService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_LaunchInContextService_Component.initialize();
				endOf_UNIX_VirtualSystemManagementService_Part = false;
				part_UNIX_VirtualSystemManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_VirtualSystemManagementService_Component.initialize();
				endOf_UNIX_MetricService_Part = false;
				part_UNIX_MetricService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_MetricService_Component.initialize();
				endOf_UNIX_StorageNameBindingService_Part = false;
				part_UNIX_StorageNameBindingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_StorageNameBindingService_Component.initialize();
				endOf_UNIX_ZoneService_Part = false;
				part_UNIX_ZoneService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ZoneService_Component.initialize();
				endOf_UNIX_ControllerConfigurationService_Part = false;
				part_UNIX_ControllerConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ControllerConfigurationService_Component.initialize();
				endOf_UNIX_GroupMaskingMappingService_Part = false;
				part_UNIX_GroupMaskingMappingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_GroupMaskingMappingService_Component.initialize();
				endOf_UNIX_DatabaseService_Part = false;
				part_UNIX_DatabaseService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_DatabaseService_Component.initialize();
				endOf_UNIX_DiskPartitionConfigurationService_Part = false;
				part_UNIX_DiskPartitionConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_DiskPartitionConfigurationService_Component.initialize();
				endOf_UNIX_ConfigurationReportingService_Part = false;
				part_UNIX_ConfigurationReportingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ConfigurationReportingService_Component.initialize();
				endOf_UNIX_PowerTopologyService_Part = false;
				part_UNIX_PowerTopologyService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PowerTopologyService_Component.initialize();
				endOf_UNIX_NetworkPolicyService_Part = false;
				part_UNIX_NetworkPolicyService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_NetworkPolicyService_Component.initialize();
				endOf_UNIX_BasicExecutionService_Part = false;
				part_UNIX_BasicExecutionService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_BasicExecutionService_Component.initialize();
				endOf_UNIX_SpareConfigurationService_Part = false;
				part_UNIX_SpareConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_SpareConfigurationService_Component.initialize();
				endOf_UNIX_StorageElementCompositionService_Part = false;
				part_UNIX_StorageElementCompositionService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_StorageElementCompositionService_Component.initialize();
				endOf_UNIX_OpaqueManagementDataService_Part = false;
				part_UNIX_OpaqueManagementDataService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_OpaqueManagementDataService_Component.initialize();
				endOf_UNIX_FingerprintMatchingService_Part = false;
				part_UNIX_FingerprintMatchingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_FingerprintMatchingService_Component.initialize();
				endOf_UNIX_ProtocolService_Part = false;
				part_UNIX_ProtocolService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ProtocolService_Component.initialize();
				endOf_UNIX_WBEMProtocolService_Part = false;
				part_UNIX_WBEMProtocolService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_WBEMProtocolService_Component.initialize();
				endOf_UNIX_TierService_Part = false;
				part_UNIX_TierService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_TierService_Component.initialize();
				endOf_UNIX_TierPolicyService_Part = false;
				part_UNIX_TierPolicyService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_TierPolicyService_Component.initialize();
				endOf_UNIX_IndicationService_Part = false;
				part_UNIX_IndicationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_IndicationService_Component.initialize();
				endOf_UNIX_FileImportService_Part = false;
				part_UNIX_FileImportService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_FileImportService_Component.initialize();
				endOf_UNIX_VTLStatisticalDataService_Part = false;
				part_UNIX_VTLStatisticalDataService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_VTLStatisticalDataService_Component.initialize();
				endOf_UNIX_DropThresholdCalculationService_Part = false;
				part_UNIX_DropThresholdCalculationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_DropThresholdCalculationService_Component.initialize();
				endOf_UNIX_TokenBucketMeterService_Part = false;
				part_UNIX_TokenBucketMeterService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_TokenBucketMeterService_Component.initialize();
				endOf_UNIX_EWMAMeterService_Part = false;
				part_UNIX_EWMAMeterService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_EWMAMeterService_Component.initialize();
				endOf_UNIX_AverageRateMeterService_Part = false;
				part_UNIX_AverageRateMeterService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_AverageRateMeterService_Component.initialize();
				endOf_UNIX_ToSMarkerService_Part = false;
				part_UNIX_ToSMarkerService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ToSMarkerService_Component.initialize();
				endOf_UNIX_Priority8021QMarkerService_Part = false;
				part_UNIX_Priority8021QMarkerService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_Priority8021QMarkerService_Component.initialize();
				endOf_UNIX_DSCPMarkerService_Part = false;
				part_UNIX_DSCPMarkerService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_DSCPMarkerService_Component.initialize();
				endOf_UNIX_PreambleMarkerService_Part = false;
				part_UNIX_PreambleMarkerService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PreambleMarkerService_Component.initialize();
				endOf_UNIX_ClassifierService_Part = false;
				part_UNIX_ClassifierService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ClassifierService_Component.initialize();
				endOf_UNIX_ClassifierElement_Part = false;
				part_UNIX_ClassifierElement_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ClassifierElement_Component.initialize();
				endOf_UNIX_PacketSchedulingService_Part = false;
				part_UNIX_PacketSchedulingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PacketSchedulingService_Component.initialize();
				endOf_UNIX_NonWorkConservingSchedulingService_Part = false;
				part_UNIX_NonWorkConservingSchedulingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_NonWorkConservingSchedulingService_Component.initialize();
				endOf_UNIX_REDDropperService_Part = false;
				part_UNIX_REDDropperService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_REDDropperService_Component.initialize();
				endOf_UNIX_HeadTailDropper_Part = false;
				part_UNIX_HeadTailDropper_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_HeadTailDropper_Component.initialize();
				endOf_UNIX_WeightedREDDropperService_Part = false;
				part_UNIX_WeightedREDDropperService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_WeightedREDDropperService_Component.initialize();
				endOf_UNIX_QueuingService_Part = false;
				part_UNIX_QueuingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_QueuingService_Component.initialize();
				endOf_UNIX_BootService_Part = false;
				part_UNIX_BootService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_BootService_Component.initialize();
				endOf_UNIX_AFService_Part = false;
				part_UNIX_AFService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_AFService_Component.initialize();
				endOf_UNIX_EFService_Part = false;
				part_UNIX_EFService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_EFService_Component.initialize();
				endOf_UNIX_FlowService_Part = false;
				part_UNIX_FlowService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_FlowService_Component.initialize();
				endOf_UNIX_Hdr8021PService_Part = false;
				part_UNIX_Hdr8021PService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_Hdr8021PService_Component.initialize();
				endOf_UNIX_PrecedenceService_Part = false;
				part_UNIX_PrecedenceService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PrecedenceService_Component.initialize();
				endOf_UNIX_PrintService_Part = false;
				part_UNIX_PrintService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PrintService_Component.initialize();
				endOf_UNIX_TimeService_Part = false;
				part_UNIX_TimeService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_TimeService_Component.initialize();
				endOf_UNIX_SoftwareInstallationService_Part = false;
				part_UNIX_SoftwareInstallationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_SoftwareInstallationService_Component.initialize();
				endOf_UNIX_VLANService_Part = false;
				part_UNIX_VLANService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_VLANService_Component.initialize();
				endOf_UNIX_Specific802dot1QVLANService_Part = false;
				part_UNIX_Specific802dot1QVLANService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_Specific802dot1QVLANService_Component.initialize();
				endOf_UNIX_PowerUtilizationManagementService_Part = false;
				part_UNIX_PowerUtilizationManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PowerUtilizationManagementService_Component.initialize();
				endOf_UNIX_ClusteringService_Part = false;
				part_UNIX_ClusteringService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ClusteringService_Component.initialize();
				endOf_UNIX_SharedDeviceManagementService_Part = false;
				part_UNIX_SharedDeviceManagementService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_SharedDeviceManagementService_Component.initialize();
				endOf_UNIX_BatchService_Part = false;
				part_UNIX_BatchService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_BatchService_Component.initialize();
				endOf_UNIX_iSCSIConfigurationService_Part = false;
				part_UNIX_iSCSIConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_iSCSIConfigurationService_Component.initialize();
				endOf_UNIX_OOBAlertService_Part = false;
				part_UNIX_OOBAlertService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_OOBAlertService_Component.initialize();
				endOf_UNIX_StorageConfigurationService_Part = false;
				part_UNIX_StorageConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_StorageConfigurationService_Component.initialize();
				endOf_UNIX_IPConfigurationService_Part = false;
				part_UNIX_IPConfigurationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_IPConfigurationService_Component.initialize();
				endOf_UNIX_VirtualSystemMigrationService_Part = false;
				part_UNIX_VirtualSystemMigrationService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_VirtualSystemMigrationService_Component.initialize();
				endOf_UNIX_MPLSCrossConnect_Part = false;
				part_UNIX_MPLSCrossConnect_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_MPLSCrossConnect_Component.initialize();
				endOf_UNIX_PlatformWatchdogService_Part = false;
				part_UNIX_PlatformWatchdogService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_PlatformWatchdogService_Component.initialize();
				endOf_UNIX_FCHBADiagnosticTest_Part = false;
				part_UNIX_FCHBADiagnosticTest_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_FCHBADiagnosticTest_Component.initialize();
				endOf_UNIX_RAIDDiagnosticTest_Part = false;
				part_UNIX_RAIDDiagnosticTest_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_RAIDDiagnosticTest_Component.initialize();
				endOf_UNIX_CPUDiagnosticTest_Part = false;
				part_UNIX_CPUDiagnosticTest_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_CPUDiagnosticTest_Component.initialize();
				endOf_UNIX_EthernetNICDiagnosticTest_Part = false;
				part_UNIX_EthernetNICDiagnosticTest_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticTest_Part = false;
				part_UNIX_OpticalDriveDiagnosticTest_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = false;
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
				endOf_UNIX_DiskDriveDiagnosticTest_Part = false;
				part_UNIX_DiskDriveDiagnosticTest_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_IBSubnetManager_Part = false;
				part_UNIX_IBSubnetManager_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_IBSubnetManager_Component.initialize();
				endOf_UNIX_ObjectManager_Part = false;
				part_UNIX_ObjectManager_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ObjectManager_Component.initialize();
				endOf_UNIX_ObjectManagerAdapter_Part = false;
				part_UNIX_ObjectManagerAdapter_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ObjectManagerAdapter_Component.initialize();
				endOf_UNIX_ProviderObjectManagerAdapter_Part = false;
				part_UNIX_ProviderObjectManagerAdapter_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ProviderObjectManagerAdapter_Component.initialize();
				endOf_UNIX_ProtocolAdapter_Part = false;
				part_UNIX_ProtocolAdapter_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_ProtocolAdapter_Component.initialize();
				endOf_UNIX_FileSystemStatisticsService_Part = false;
				part_UNIX_FileSystemStatisticsService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_FileSystemStatisticsService_Component.initialize();
				endOf_UNIX_BlockStatisticsService_Part = false;
				part_UNIX_BlockStatisticsService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_BlockStatisticsService_Component.initialize();
				endOf_UNIX_USBRedirectionService_Part = false;
				part_UNIX_USBRedirectionService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_USBRedirectionService_Component.initialize();
				endOf_UNIX_TextRedirectionService_Part = false;
				part_UNIX_TextRedirectionService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_TextRedirectionService_Component.initialize();
				endOf_UNIX_BGPService_Part = false;
				part_UNIX_BGPService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_BGPService_Component.initialize();
				endOf_UNIX_OSPFService_Part = false;
				part_UNIX_OSPFService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_OSPFService_Component.initialize();
				endOf_UNIX_NATService_Part = false;
				part_UNIX_NATService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_NATService_Component.initialize();
				endOf_UNIX_TransparentBridgingService_Part = false;
				part_UNIX_TransparentBridgingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_TransparentBridgingService_Component.initialize();
				endOf_UNIX_SourceRoutingService_Part = false;
				part_UNIX_SourceRoutingService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_SourceRoutingService_Component.initialize();
				endOf_UNIX_SpanningTreeService_Part = false;
				part_UNIX_SpanningTreeService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_SpanningTreeService_Component.initialize();
				endOf_UNIX_SwitchService_Part = false;
				part_UNIX_SwitchService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_SwitchService_Component.initialize();
				endOf_UNIX_FileExportService_Part = false;
				part_UNIX_FileExportService_Component.setScope(CIMName("UNIX_Product"));
				part_UNIX_FileExportService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_FibreProtocolService_Index++;
	endOf_UNIX_FibreProtocolService_Part = !part_UNIX_FibreProtocolService_Component.load(part_UNIX_FibreProtocolService_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_WakeUpService_Index++;
	endOf_UNIX_WakeUpService_Part = !part_UNIX_WakeUpService_Component.load(part_UNIX_WakeUpService_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_VirtualSystemSnapshotService_Index++;
	endOf_UNIX_VirtualSystemSnapshotService_Part = !part_UNIX_VirtualSystemSnapshotService_Component.load(part_UNIX_VirtualSystemSnapshotService_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_ResourcePoolConfigurationService_Index++;
	endOf_UNIX_ResourcePoolConfigurationService_Part = !part_UNIX_ResourcePoolConfigurationService_Component.load(part_UNIX_ResourcePoolConfigurationService_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_FileSystemConfigurationService_Index++;
	endOf_UNIX_FileSystemConfigurationService_Part = !part_UNIX_FileSystemConfigurationService_Component.load(part_UNIX_FileSystemConfigurationService_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_HelpService_Index++;
	endOf_UNIX_HelpService_Part = !part_UNIX_HelpService_Component.load(part_UNIX_HelpService_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_StorageRelocationService_Index++;
	endOf_UNIX_StorageRelocationService_Part = !part_UNIX_StorageRelocationService_Component.load(part_UNIX_StorageRelocationService_Index);
	}
	if (partIndex == 7)
	{
		part_UNIX_MPLSService_Index++;
	endOf_UNIX_MPLSService_Part = !part_UNIX_MPLSService_Component.load(part_UNIX_MPLSService_Index);
	}
	if (partIndex == 8)
	{
		part_UNIX_PolicyActivationService_Index++;
	endOf_UNIX_PolicyActivationService_Part = !part_UNIX_PolicyActivationService_Component.load(part_UNIX_PolicyActivationService_Index);
	}
	if (partIndex == 9)
	{
		part_UNIX_SCSIPathConfigurationService_Index++;
	endOf_UNIX_SCSIPathConfigurationService_Part = !part_UNIX_SCSIPathConfigurationService_Component.load(part_UNIX_SCSIPathConfigurationService_Index);
	}
	if (partIndex == 10)
	{
		part_UNIX_BIOSService_Index++;
	endOf_UNIX_BIOSService_Part = !part_UNIX_BIOSService_Component.load(part_UNIX_BIOSService_Index);
	}
	if (partIndex == 11)
	{
		part_UNIX_PowerManagementService_Index++;
	endOf_UNIX_PowerManagementService_Part = !part_UNIX_PowerManagementService_Component.load(part_UNIX_PowerManagementService_Index);
	}
	if (partIndex == 12)
	{
		part_UNIX_NetworkPortConfigurationService_Index++;
	endOf_UNIX_NetworkPortConfigurationService_Part = !part_UNIX_NetworkPortConfigurationService_Component.load(part_UNIX_NetworkPortConfigurationService_Index);
	}
	if (partIndex == 13)
	{
		part_UNIX_WiFiPortConfigurationService_Index++;
	endOf_UNIX_WiFiPortConfigurationService_Part = !part_UNIX_WiFiPortConfigurationService_Component.load(part_UNIX_WiFiPortConfigurationService_Index);
	}
	if (partIndex == 14)
	{
		part_UNIX_VRFConfigurationService_Index++;
	endOf_UNIX_VRFConfigurationService_Part = !part_UNIX_VRFConfigurationService_Component.load(part_UNIX_VRFConfigurationService_Index);
	}
	if (partIndex == 15)
	{
		part_UNIX_ReplicationService_Index++;
	endOf_UNIX_ReplicationService_Part = !part_UNIX_ReplicationService_Component.load(part_UNIX_ReplicationService_Index);
	}
	if (partIndex == 16)
	{
		part_UNIX_AccountManagementService_Index++;
	endOf_UNIX_AccountManagementService_Part = !part_UNIX_AccountManagementService_Component.load(part_UNIX_AccountManagementService_Index);
	}
	if (partIndex == 17)
	{
		part_UNIX_VerificationService_Index++;
	endOf_UNIX_VerificationService_Part = !part_UNIX_VerificationService_Component.load(part_UNIX_VerificationService_Index);
	}
	if (partIndex == 18)
	{
		part_UNIX_CertificateAuthority_Index++;
	endOf_UNIX_CertificateAuthority_Part = !part_UNIX_CertificateAuthority_Component.load(part_UNIX_CertificateAuthority_Index);
	}
	if (partIndex == 19)
	{
		part_UNIX_Notary_Index++;
	endOf_UNIX_Notary_Part = !part_UNIX_Notary_Component.load(part_UNIX_Notary_Index);
	}
	if (partIndex == 20)
	{
		part_UNIX_KeyBasedCredentialManagementService_Index++;
	endOf_UNIX_KeyBasedCredentialManagementService_Part = !part_UNIX_KeyBasedCredentialManagementService_Component.load(part_UNIX_KeyBasedCredentialManagementService_Index);
	}
	if (partIndex == 21)
	{
		part_UNIX_CertificateManagementService_Index++;
	endOf_UNIX_CertificateManagementService_Part = !part_UNIX_CertificateManagementService_Component.load(part_UNIX_CertificateManagementService_Index);
	}
	if (partIndex == 22)
	{
		part_UNIX_KerberosKeyDistributionCenter_Index++;
	endOf_UNIX_KerberosKeyDistributionCenter_Part = !part_UNIX_KerberosKeyDistributionCenter_Component.load(part_UNIX_KerberosKeyDistributionCenter_Index);
	}
	if (partIndex == 23)
	{
		part_UNIX_PublicKeyManagementService_Index++;
	endOf_UNIX_PublicKeyManagementService_Part = !part_UNIX_PublicKeyManagementService_Component.load(part_UNIX_PublicKeyManagementService_Index);
	}
	if (partIndex == 24)
	{
		part_UNIX_SharedSecretService_Index++;
	endOf_UNIX_SharedSecretService_Part = !part_UNIX_SharedSecretService_Component.load(part_UNIX_SharedSecretService_Index);
	}
	if (partIndex == 25)
	{
		part_UNIX_IdentityManagementService_Index++;
	endOf_UNIX_IdentityManagementService_Part = !part_UNIX_IdentityManagementService_Component.load(part_UNIX_IdentityManagementService_Index);
	}
	if (partIndex == 26)
	{
		part_UNIX_StorageHardwareIDManagementService_Index++;
	endOf_UNIX_StorageHardwareIDManagementService_Part = !part_UNIX_StorageHardwareIDManagementService_Component.load(part_UNIX_StorageHardwareIDManagementService_Index);
	}
	if (partIndex == 27)
	{
		part_UNIX_AuthorizationService_Index++;
	endOf_UNIX_AuthorizationService_Part = !part_UNIX_AuthorizationService_Component.load(part_UNIX_AuthorizationService_Index);
	}
	if (partIndex == 28)
	{
		part_UNIX_PrivilegeManagementService_Index++;
	endOf_UNIX_PrivilegeManagementService_Part = !part_UNIX_PrivilegeManagementService_Component.load(part_UNIX_PrivilegeManagementService_Index);
	}
	if (partIndex == 29)
	{
		part_UNIX_RoleBasedAuthorizationService_Index++;
	endOf_UNIX_RoleBasedAuthorizationService_Part = !part_UNIX_RoleBasedAuthorizationService_Component.load(part_UNIX_RoleBasedAuthorizationService_Index);
	}
	if (partIndex == 30)
	{
		part_UNIX_AccessControlService_Index++;
	endOf_UNIX_AccessControlService_Part = !part_UNIX_AccessControlService_Component.load(part_UNIX_AccessControlService_Index);
	}
	if (partIndex == 31)
	{
		part_UNIX_WBEMServer_Index++;
	endOf_UNIX_WBEMServer_Part = !part_UNIX_WBEMServer_Component.load(part_UNIX_WBEMServer_Index);
	}
	if (partIndex == 32)
	{
		part_UNIX_LaunchInContextService_Index++;
	endOf_UNIX_LaunchInContextService_Part = !part_UNIX_LaunchInContextService_Component.load(part_UNIX_LaunchInContextService_Index);
	}
	if (partIndex == 33)
	{
		part_UNIX_VirtualSystemManagementService_Index++;
	endOf_UNIX_VirtualSystemManagementService_Part = !part_UNIX_VirtualSystemManagementService_Component.load(part_UNIX_VirtualSystemManagementService_Index);
	}
	if (partIndex == 34)
	{
		part_UNIX_MetricService_Index++;
	endOf_UNIX_MetricService_Part = !part_UNIX_MetricService_Component.load(part_UNIX_MetricService_Index);
	}
	if (partIndex == 35)
	{
		part_UNIX_StorageNameBindingService_Index++;
	endOf_UNIX_StorageNameBindingService_Part = !part_UNIX_StorageNameBindingService_Component.load(part_UNIX_StorageNameBindingService_Index);
	}
	if (partIndex == 36)
	{
		part_UNIX_ZoneService_Index++;
	endOf_UNIX_ZoneService_Part = !part_UNIX_ZoneService_Component.load(part_UNIX_ZoneService_Index);
	}
	if (partIndex == 37)
	{
		part_UNIX_ControllerConfigurationService_Index++;
	endOf_UNIX_ControllerConfigurationService_Part = !part_UNIX_ControllerConfigurationService_Component.load(part_UNIX_ControllerConfigurationService_Index);
	}
	if (partIndex == 38)
	{
		part_UNIX_GroupMaskingMappingService_Index++;
	endOf_UNIX_GroupMaskingMappingService_Part = !part_UNIX_GroupMaskingMappingService_Component.load(part_UNIX_GroupMaskingMappingService_Index);
	}
	if (partIndex == 39)
	{
		part_UNIX_DatabaseService_Index++;
	endOf_UNIX_DatabaseService_Part = !part_UNIX_DatabaseService_Component.load(part_UNIX_DatabaseService_Index);
	}
	if (partIndex == 40)
	{
		part_UNIX_DiskPartitionConfigurationService_Index++;
	endOf_UNIX_DiskPartitionConfigurationService_Part = !part_UNIX_DiskPartitionConfigurationService_Component.load(part_UNIX_DiskPartitionConfigurationService_Index);
	}
	if (partIndex == 41)
	{
		part_UNIX_ConfigurationReportingService_Index++;
	endOf_UNIX_ConfigurationReportingService_Part = !part_UNIX_ConfigurationReportingService_Component.load(part_UNIX_ConfigurationReportingService_Index);
	}
	if (partIndex == 42)
	{
		part_UNIX_PowerTopologyService_Index++;
	endOf_UNIX_PowerTopologyService_Part = !part_UNIX_PowerTopologyService_Component.load(part_UNIX_PowerTopologyService_Index);
	}
	if (partIndex == 43)
	{
		part_UNIX_NetworkPolicyService_Index++;
	endOf_UNIX_NetworkPolicyService_Part = !part_UNIX_NetworkPolicyService_Component.load(part_UNIX_NetworkPolicyService_Index);
	}
	if (partIndex == 44)
	{
		part_UNIX_BasicExecutionService_Index++;
	endOf_UNIX_BasicExecutionService_Part = !part_UNIX_BasicExecutionService_Component.load(part_UNIX_BasicExecutionService_Index);
	}
	if (partIndex == 45)
	{
		part_UNIX_SpareConfigurationService_Index++;
	endOf_UNIX_SpareConfigurationService_Part = !part_UNIX_SpareConfigurationService_Component.load(part_UNIX_SpareConfigurationService_Index);
	}
	if (partIndex == 46)
	{
		part_UNIX_StorageElementCompositionService_Index++;
	endOf_UNIX_StorageElementCompositionService_Part = !part_UNIX_StorageElementCompositionService_Component.load(part_UNIX_StorageElementCompositionService_Index);
	}
	if (partIndex == 47)
	{
		part_UNIX_OpaqueManagementDataService_Index++;
	endOf_UNIX_OpaqueManagementDataService_Part = !part_UNIX_OpaqueManagementDataService_Component.load(part_UNIX_OpaqueManagementDataService_Index);
	}
	if (partIndex == 48)
	{
		part_UNIX_FingerprintMatchingService_Index++;
	endOf_UNIX_FingerprintMatchingService_Part = !part_UNIX_FingerprintMatchingService_Component.load(part_UNIX_FingerprintMatchingService_Index);
	}
	if (partIndex == 49)
	{
		part_UNIX_ProtocolService_Index++;
	endOf_UNIX_ProtocolService_Part = !part_UNIX_ProtocolService_Component.load(part_UNIX_ProtocolService_Index);
	}
	if (partIndex == 50)
	{
		part_UNIX_WBEMProtocolService_Index++;
	endOf_UNIX_WBEMProtocolService_Part = !part_UNIX_WBEMProtocolService_Component.load(part_UNIX_WBEMProtocolService_Index);
	}
	if (partIndex == 51)
	{
		part_UNIX_TierService_Index++;
	endOf_UNIX_TierService_Part = !part_UNIX_TierService_Component.load(part_UNIX_TierService_Index);
	}
	if (partIndex == 52)
	{
		part_UNIX_TierPolicyService_Index++;
	endOf_UNIX_TierPolicyService_Part = !part_UNIX_TierPolicyService_Component.load(part_UNIX_TierPolicyService_Index);
	}
	if (partIndex == 53)
	{
		part_UNIX_IndicationService_Index++;
	endOf_UNIX_IndicationService_Part = !part_UNIX_IndicationService_Component.load(part_UNIX_IndicationService_Index);
	}
	if (partIndex == 54)
	{
		part_UNIX_FileImportService_Index++;
	endOf_UNIX_FileImportService_Part = !part_UNIX_FileImportService_Component.load(part_UNIX_FileImportService_Index);
	}
	if (partIndex == 55)
	{
		part_UNIX_VTLStatisticalDataService_Index++;
	endOf_UNIX_VTLStatisticalDataService_Part = !part_UNIX_VTLStatisticalDataService_Component.load(part_UNIX_VTLStatisticalDataService_Index);
	}
	if (partIndex == 56)
	{
		part_UNIX_DropThresholdCalculationService_Index++;
	endOf_UNIX_DropThresholdCalculationService_Part = !part_UNIX_DropThresholdCalculationService_Component.load(part_UNIX_DropThresholdCalculationService_Index);
	}
	if (partIndex == 57)
	{
		part_UNIX_TokenBucketMeterService_Index++;
	endOf_UNIX_TokenBucketMeterService_Part = !part_UNIX_TokenBucketMeterService_Component.load(part_UNIX_TokenBucketMeterService_Index);
	}
	if (partIndex == 58)
	{
		part_UNIX_EWMAMeterService_Index++;
	endOf_UNIX_EWMAMeterService_Part = !part_UNIX_EWMAMeterService_Component.load(part_UNIX_EWMAMeterService_Index);
	}
	if (partIndex == 59)
	{
		part_UNIX_AverageRateMeterService_Index++;
	endOf_UNIX_AverageRateMeterService_Part = !part_UNIX_AverageRateMeterService_Component.load(part_UNIX_AverageRateMeterService_Index);
	}
	if (partIndex == 60)
	{
		part_UNIX_ToSMarkerService_Index++;
	endOf_UNIX_ToSMarkerService_Part = !part_UNIX_ToSMarkerService_Component.load(part_UNIX_ToSMarkerService_Index);
	}
	if (partIndex == 61)
	{
		part_UNIX_Priority8021QMarkerService_Index++;
	endOf_UNIX_Priority8021QMarkerService_Part = !part_UNIX_Priority8021QMarkerService_Component.load(part_UNIX_Priority8021QMarkerService_Index);
	}
	if (partIndex == 62)
	{
		part_UNIX_DSCPMarkerService_Index++;
	endOf_UNIX_DSCPMarkerService_Part = !part_UNIX_DSCPMarkerService_Component.load(part_UNIX_DSCPMarkerService_Index);
	}
	if (partIndex == 63)
	{
		part_UNIX_PreambleMarkerService_Index++;
	endOf_UNIX_PreambleMarkerService_Part = !part_UNIX_PreambleMarkerService_Component.load(part_UNIX_PreambleMarkerService_Index);
	}
	if (partIndex == 64)
	{
		part_UNIX_ClassifierService_Index++;
	endOf_UNIX_ClassifierService_Part = !part_UNIX_ClassifierService_Component.load(part_UNIX_ClassifierService_Index);
	}
	if (partIndex == 65)
	{
		part_UNIX_ClassifierElement_Index++;
	endOf_UNIX_ClassifierElement_Part = !part_UNIX_ClassifierElement_Component.load(part_UNIX_ClassifierElement_Index);
	}
	if (partIndex == 66)
	{
		part_UNIX_PacketSchedulingService_Index++;
	endOf_UNIX_PacketSchedulingService_Part = !part_UNIX_PacketSchedulingService_Component.load(part_UNIX_PacketSchedulingService_Index);
	}
	if (partIndex == 67)
	{
		part_UNIX_NonWorkConservingSchedulingService_Index++;
	endOf_UNIX_NonWorkConservingSchedulingService_Part = !part_UNIX_NonWorkConservingSchedulingService_Component.load(part_UNIX_NonWorkConservingSchedulingService_Index);
	}
	if (partIndex == 68)
	{
		part_UNIX_REDDropperService_Index++;
	endOf_UNIX_REDDropperService_Part = !part_UNIX_REDDropperService_Component.load(part_UNIX_REDDropperService_Index);
	}
	if (partIndex == 69)
	{
		part_UNIX_HeadTailDropper_Index++;
	endOf_UNIX_HeadTailDropper_Part = !part_UNIX_HeadTailDropper_Component.load(part_UNIX_HeadTailDropper_Index);
	}
	if (partIndex == 70)
	{
		part_UNIX_WeightedREDDropperService_Index++;
	endOf_UNIX_WeightedREDDropperService_Part = !part_UNIX_WeightedREDDropperService_Component.load(part_UNIX_WeightedREDDropperService_Index);
	}
	if (partIndex == 71)
	{
		part_UNIX_QueuingService_Index++;
	endOf_UNIX_QueuingService_Part = !part_UNIX_QueuingService_Component.load(part_UNIX_QueuingService_Index);
	}
	if (partIndex == 72)
	{
		part_UNIX_BootService_Index++;
	endOf_UNIX_BootService_Part = !part_UNIX_BootService_Component.load(part_UNIX_BootService_Index);
	}
	if (partIndex == 73)
	{
		part_UNIX_AFService_Index++;
	endOf_UNIX_AFService_Part = !part_UNIX_AFService_Component.load(part_UNIX_AFService_Index);
	}
	if (partIndex == 74)
	{
		part_UNIX_EFService_Index++;
	endOf_UNIX_EFService_Part = !part_UNIX_EFService_Component.load(part_UNIX_EFService_Index);
	}
	if (partIndex == 75)
	{
		part_UNIX_FlowService_Index++;
	endOf_UNIX_FlowService_Part = !part_UNIX_FlowService_Component.load(part_UNIX_FlowService_Index);
	}
	if (partIndex == 76)
	{
		part_UNIX_Hdr8021PService_Index++;
	endOf_UNIX_Hdr8021PService_Part = !part_UNIX_Hdr8021PService_Component.load(part_UNIX_Hdr8021PService_Index);
	}
	if (partIndex == 77)
	{
		part_UNIX_PrecedenceService_Index++;
	endOf_UNIX_PrecedenceService_Part = !part_UNIX_PrecedenceService_Component.load(part_UNIX_PrecedenceService_Index);
	}
	if (partIndex == 78)
	{
		part_UNIX_PrintService_Index++;
	endOf_UNIX_PrintService_Part = !part_UNIX_PrintService_Component.load(part_UNIX_PrintService_Index);
	}
	if (partIndex == 79)
	{
		part_UNIX_TimeService_Index++;
	endOf_UNIX_TimeService_Part = !part_UNIX_TimeService_Component.load(part_UNIX_TimeService_Index);
	}
	if (partIndex == 80)
	{
		part_UNIX_SoftwareInstallationService_Index++;
	endOf_UNIX_SoftwareInstallationService_Part = !part_UNIX_SoftwareInstallationService_Component.load(part_UNIX_SoftwareInstallationService_Index);
	}
	if (partIndex == 81)
	{
		part_UNIX_VLANService_Index++;
	endOf_UNIX_VLANService_Part = !part_UNIX_VLANService_Component.load(part_UNIX_VLANService_Index);
	}
	if (partIndex == 82)
	{
		part_UNIX_Specific802dot1QVLANService_Index++;
	endOf_UNIX_Specific802dot1QVLANService_Part = !part_UNIX_Specific802dot1QVLANService_Component.load(part_UNIX_Specific802dot1QVLANService_Index);
	}
	if (partIndex == 83)
	{
		part_UNIX_PowerUtilizationManagementService_Index++;
	endOf_UNIX_PowerUtilizationManagementService_Part = !part_UNIX_PowerUtilizationManagementService_Component.load(part_UNIX_PowerUtilizationManagementService_Index);
	}
	if (partIndex == 84)
	{
		part_UNIX_ClusteringService_Index++;
	endOf_UNIX_ClusteringService_Part = !part_UNIX_ClusteringService_Component.load(part_UNIX_ClusteringService_Index);
	}
	if (partIndex == 85)
	{
		part_UNIX_SharedDeviceManagementService_Index++;
	endOf_UNIX_SharedDeviceManagementService_Part = !part_UNIX_SharedDeviceManagementService_Component.load(part_UNIX_SharedDeviceManagementService_Index);
	}
	if (partIndex == 86)
	{
		part_UNIX_BatchService_Index++;
	endOf_UNIX_BatchService_Part = !part_UNIX_BatchService_Component.load(part_UNIX_BatchService_Index);
	}
	if (partIndex == 87)
	{
		part_UNIX_iSCSIConfigurationService_Index++;
	endOf_UNIX_iSCSIConfigurationService_Part = !part_UNIX_iSCSIConfigurationService_Component.load(part_UNIX_iSCSIConfigurationService_Index);
	}
	if (partIndex == 88)
	{
		part_UNIX_OOBAlertService_Index++;
	endOf_UNIX_OOBAlertService_Part = !part_UNIX_OOBAlertService_Component.load(part_UNIX_OOBAlertService_Index);
	}
	if (partIndex == 89)
	{
		part_UNIX_StorageConfigurationService_Index++;
	endOf_UNIX_StorageConfigurationService_Part = !part_UNIX_StorageConfigurationService_Component.load(part_UNIX_StorageConfigurationService_Index);
	}
	if (partIndex == 90)
	{
		part_UNIX_IPConfigurationService_Index++;
	endOf_UNIX_IPConfigurationService_Part = !part_UNIX_IPConfigurationService_Component.load(part_UNIX_IPConfigurationService_Index);
	}
	if (partIndex == 91)
	{
		part_UNIX_VirtualSystemMigrationService_Index++;
	endOf_UNIX_VirtualSystemMigrationService_Part = !part_UNIX_VirtualSystemMigrationService_Component.load(part_UNIX_VirtualSystemMigrationService_Index);
	}
	if (partIndex == 92)
	{
		part_UNIX_MPLSCrossConnect_Index++;
	endOf_UNIX_MPLSCrossConnect_Part = !part_UNIX_MPLSCrossConnect_Component.load(part_UNIX_MPLSCrossConnect_Index);
	}
	if (partIndex == 93)
	{
		part_UNIX_PlatformWatchdogService_Index++;
	endOf_UNIX_PlatformWatchdogService_Part = !part_UNIX_PlatformWatchdogService_Component.load(part_UNIX_PlatformWatchdogService_Index);
	}
	if (partIndex == 94)
	{
		part_UNIX_FCHBADiagnosticTest_Index++;
	endOf_UNIX_FCHBADiagnosticTest_Part = !part_UNIX_FCHBADiagnosticTest_Component.load(part_UNIX_FCHBADiagnosticTest_Index);
	}
	if (partIndex == 95)
	{
		part_UNIX_RAIDDiagnosticTest_Index++;
	endOf_UNIX_RAIDDiagnosticTest_Part = !part_UNIX_RAIDDiagnosticTest_Component.load(part_UNIX_RAIDDiagnosticTest_Index);
	}
	if (partIndex == 96)
	{
		part_UNIX_CPUDiagnosticTest_Index++;
	endOf_UNIX_CPUDiagnosticTest_Part = !part_UNIX_CPUDiagnosticTest_Component.load(part_UNIX_CPUDiagnosticTest_Index);
	}
	if (partIndex == 97)
	{
		part_UNIX_EthernetNICDiagnosticTest_Index++;
	endOf_UNIX_EthernetNICDiagnosticTest_Part = !part_UNIX_EthernetNICDiagnosticTest_Component.load(part_UNIX_EthernetNICDiagnosticTest_Index);
	}
	if (partIndex == 98)
	{
		part_UNIX_OpticalDriveDiagnosticTest_Index++;
	endOf_UNIX_OpticalDriveDiagnosticTest_Part = !part_UNIX_OpticalDriveDiagnosticTest_Component.load(part_UNIX_OpticalDriveDiagnosticTest_Index);
	}
	if (partIndex == 99)
	{
		part_UNIX_OpticalDriveDiagnosticSettingData_Index++;
	endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = !part_UNIX_OpticalDriveDiagnosticSettingData_Component.load(part_UNIX_OpticalDriveDiagnosticSettingData_Index);
	}
	if (partIndex == 100)
	{
		part_UNIX_DiskDriveDiagnosticTest_Index++;
	endOf_UNIX_DiskDriveDiagnosticTest_Part = !part_UNIX_DiskDriveDiagnosticTest_Component.load(part_UNIX_DiskDriveDiagnosticTest_Index);
	}
	if (partIndex == 101)
	{
		part_UNIX_IBSubnetManager_Index++;
	endOf_UNIX_IBSubnetManager_Part = !part_UNIX_IBSubnetManager_Component.load(part_UNIX_IBSubnetManager_Index);
	}
	if (partIndex == 102)
	{
		part_UNIX_ObjectManager_Index++;
	endOf_UNIX_ObjectManager_Part = !part_UNIX_ObjectManager_Component.load(part_UNIX_ObjectManager_Index);
	}
	if (partIndex == 103)
	{
		part_UNIX_ObjectManagerAdapter_Index++;
	endOf_UNIX_ObjectManagerAdapter_Part = !part_UNIX_ObjectManagerAdapter_Component.load(part_UNIX_ObjectManagerAdapter_Index);
	}
	if (partIndex == 104)
	{
		part_UNIX_ProviderObjectManagerAdapter_Index++;
	endOf_UNIX_ProviderObjectManagerAdapter_Part = !part_UNIX_ProviderObjectManagerAdapter_Component.load(part_UNIX_ProviderObjectManagerAdapter_Index);
	}
	if (partIndex == 105)
	{
		part_UNIX_ProtocolAdapter_Index++;
	endOf_UNIX_ProtocolAdapter_Part = !part_UNIX_ProtocolAdapter_Component.load(part_UNIX_ProtocolAdapter_Index);
	}
	if (partIndex == 106)
	{
		part_UNIX_FileSystemStatisticsService_Index++;
	endOf_UNIX_FileSystemStatisticsService_Part = !part_UNIX_FileSystemStatisticsService_Component.load(part_UNIX_FileSystemStatisticsService_Index);
	}
	if (partIndex == 107)
	{
		part_UNIX_BlockStatisticsService_Index++;
	endOf_UNIX_BlockStatisticsService_Part = !part_UNIX_BlockStatisticsService_Component.load(part_UNIX_BlockStatisticsService_Index);
	}
	if (partIndex == 108)
	{
		part_UNIX_USBRedirectionService_Index++;
	endOf_UNIX_USBRedirectionService_Part = !part_UNIX_USBRedirectionService_Component.load(part_UNIX_USBRedirectionService_Index);
	}
	if (partIndex == 109)
	{
		part_UNIX_TextRedirectionService_Index++;
	endOf_UNIX_TextRedirectionService_Part = !part_UNIX_TextRedirectionService_Component.load(part_UNIX_TextRedirectionService_Index);
	}
	if (partIndex == 110)
	{
		part_UNIX_BGPService_Index++;
	endOf_UNIX_BGPService_Part = !part_UNIX_BGPService_Component.load(part_UNIX_BGPService_Index);
	}
	if (partIndex == 111)
	{
		part_UNIX_OSPFService_Index++;
	endOf_UNIX_OSPFService_Part = !part_UNIX_OSPFService_Component.load(part_UNIX_OSPFService_Index);
	}
	if (partIndex == 112)
	{
		part_UNIX_NATService_Index++;
	endOf_UNIX_NATService_Part = !part_UNIX_NATService_Component.load(part_UNIX_NATService_Index);
	}
	if (partIndex == 113)
	{
		part_UNIX_TransparentBridgingService_Index++;
	endOf_UNIX_TransparentBridgingService_Part = !part_UNIX_TransparentBridgingService_Component.load(part_UNIX_TransparentBridgingService_Index);
	}
	if (partIndex == 114)
	{
		part_UNIX_SourceRoutingService_Index++;
	endOf_UNIX_SourceRoutingService_Part = !part_UNIX_SourceRoutingService_Component.load(part_UNIX_SourceRoutingService_Index);
	}
	if (partIndex == 115)
	{
		part_UNIX_SpanningTreeService_Index++;
	endOf_UNIX_SpanningTreeService_Part = !part_UNIX_SpanningTreeService_Component.load(part_UNIX_SpanningTreeService_Index);
	}
	if (partIndex == 116)
	{
		part_UNIX_SwitchService_Index++;
	endOf_UNIX_SwitchService_Part = !part_UNIX_SwitchService_Component.load(part_UNIX_SwitchService_Index);
	}
	if (partIndex == 117)
	{
		part_UNIX_FileExportService_Index++;
	endOf_UNIX_FileExportService_Part = !part_UNIX_FileExportService_Component.load(part_UNIX_FileExportService_Index);
	}
	if (partIndex == 0 && endOf_UNIX_FibreProtocolService_Part)
	{
		part_UNIX_FibreProtocolService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_WakeUpService_Part)
	{
		part_UNIX_WakeUpService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_VirtualSystemSnapshotService_Part)
	{
		part_UNIX_VirtualSystemSnapshotService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_ResourcePoolConfigurationService_Part)
	{
		part_UNIX_ResourcePoolConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_FileSystemConfigurationService_Part)
	{
		part_UNIX_FileSystemConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_HelpService_Part)
	{
		part_UNIX_HelpService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_StorageRelocationService_Part)
	{
		part_UNIX_StorageRelocationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 7 && endOf_UNIX_MPLSService_Part)
	{
		part_UNIX_MPLSService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 8 && endOf_UNIX_PolicyActivationService_Part)
	{
		part_UNIX_PolicyActivationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 9 && endOf_UNIX_SCSIPathConfigurationService_Part)
	{
		part_UNIX_SCSIPathConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 10 && endOf_UNIX_BIOSService_Part)
	{
		part_UNIX_BIOSService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 11 && endOf_UNIX_PowerManagementService_Part)
	{
		part_UNIX_PowerManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 12 && endOf_UNIX_NetworkPortConfigurationService_Part)
	{
		part_UNIX_NetworkPortConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 13 && endOf_UNIX_WiFiPortConfigurationService_Part)
	{
		part_UNIX_WiFiPortConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 14 && endOf_UNIX_VRFConfigurationService_Part)
	{
		part_UNIX_VRFConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 15 && endOf_UNIX_ReplicationService_Part)
	{
		part_UNIX_ReplicationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 16 && endOf_UNIX_AccountManagementService_Part)
	{
		part_UNIX_AccountManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 17 && endOf_UNIX_VerificationService_Part)
	{
		part_UNIX_VerificationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 18 && endOf_UNIX_CertificateAuthority_Part)
	{
		part_UNIX_CertificateAuthority_Component.finalize();
		partIndex++;
	}
	if (partIndex == 19 && endOf_UNIX_Notary_Part)
	{
		part_UNIX_Notary_Component.finalize();
		partIndex++;
	}
	if (partIndex == 20 && endOf_UNIX_KeyBasedCredentialManagementService_Part)
	{
		part_UNIX_KeyBasedCredentialManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 21 && endOf_UNIX_CertificateManagementService_Part)
	{
		part_UNIX_CertificateManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 22 && endOf_UNIX_KerberosKeyDistributionCenter_Part)
	{
		part_UNIX_KerberosKeyDistributionCenter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 23 && endOf_UNIX_PublicKeyManagementService_Part)
	{
		part_UNIX_PublicKeyManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 24 && endOf_UNIX_SharedSecretService_Part)
	{
		part_UNIX_SharedSecretService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 25 && endOf_UNIX_IdentityManagementService_Part)
	{
		part_UNIX_IdentityManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 26 && endOf_UNIX_StorageHardwareIDManagementService_Part)
	{
		part_UNIX_StorageHardwareIDManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 27 && endOf_UNIX_AuthorizationService_Part)
	{
		part_UNIX_AuthorizationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 28 && endOf_UNIX_PrivilegeManagementService_Part)
	{
		part_UNIX_PrivilegeManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 29 && endOf_UNIX_RoleBasedAuthorizationService_Part)
	{
		part_UNIX_RoleBasedAuthorizationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 30 && endOf_UNIX_AccessControlService_Part)
	{
		part_UNIX_AccessControlService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 31 && endOf_UNIX_WBEMServer_Part)
	{
		part_UNIX_WBEMServer_Component.finalize();
		partIndex++;
	}
	if (partIndex == 32 && endOf_UNIX_LaunchInContextService_Part)
	{
		part_UNIX_LaunchInContextService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 33 && endOf_UNIX_VirtualSystemManagementService_Part)
	{
		part_UNIX_VirtualSystemManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 34 && endOf_UNIX_MetricService_Part)
	{
		part_UNIX_MetricService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 35 && endOf_UNIX_StorageNameBindingService_Part)
	{
		part_UNIX_StorageNameBindingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 36 && endOf_UNIX_ZoneService_Part)
	{
		part_UNIX_ZoneService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 37 && endOf_UNIX_ControllerConfigurationService_Part)
	{
		part_UNIX_ControllerConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 38 && endOf_UNIX_GroupMaskingMappingService_Part)
	{
		part_UNIX_GroupMaskingMappingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 39 && endOf_UNIX_DatabaseService_Part)
	{
		part_UNIX_DatabaseService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 40 && endOf_UNIX_DiskPartitionConfigurationService_Part)
	{
		part_UNIX_DiskPartitionConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 41 && endOf_UNIX_ConfigurationReportingService_Part)
	{
		part_UNIX_ConfigurationReportingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 42 && endOf_UNIX_PowerTopologyService_Part)
	{
		part_UNIX_PowerTopologyService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 43 && endOf_UNIX_NetworkPolicyService_Part)
	{
		part_UNIX_NetworkPolicyService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 44 && endOf_UNIX_BasicExecutionService_Part)
	{
		part_UNIX_BasicExecutionService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 45 && endOf_UNIX_SpareConfigurationService_Part)
	{
		part_UNIX_SpareConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 46 && endOf_UNIX_StorageElementCompositionService_Part)
	{
		part_UNIX_StorageElementCompositionService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 47 && endOf_UNIX_OpaqueManagementDataService_Part)
	{
		part_UNIX_OpaqueManagementDataService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 48 && endOf_UNIX_FingerprintMatchingService_Part)
	{
		part_UNIX_FingerprintMatchingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 49 && endOf_UNIX_ProtocolService_Part)
	{
		part_UNIX_ProtocolService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 50 && endOf_UNIX_WBEMProtocolService_Part)
	{
		part_UNIX_WBEMProtocolService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 51 && endOf_UNIX_TierService_Part)
	{
		part_UNIX_TierService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 52 && endOf_UNIX_TierPolicyService_Part)
	{
		part_UNIX_TierPolicyService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 53 && endOf_UNIX_IndicationService_Part)
	{
		part_UNIX_IndicationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 54 && endOf_UNIX_FileImportService_Part)
	{
		part_UNIX_FileImportService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 55 && endOf_UNIX_VTLStatisticalDataService_Part)
	{
		part_UNIX_VTLStatisticalDataService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 56 && endOf_UNIX_DropThresholdCalculationService_Part)
	{
		part_UNIX_DropThresholdCalculationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 57 && endOf_UNIX_TokenBucketMeterService_Part)
	{
		part_UNIX_TokenBucketMeterService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 58 && endOf_UNIX_EWMAMeterService_Part)
	{
		part_UNIX_EWMAMeterService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 59 && endOf_UNIX_AverageRateMeterService_Part)
	{
		part_UNIX_AverageRateMeterService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 60 && endOf_UNIX_ToSMarkerService_Part)
	{
		part_UNIX_ToSMarkerService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 61 && endOf_UNIX_Priority8021QMarkerService_Part)
	{
		part_UNIX_Priority8021QMarkerService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 62 && endOf_UNIX_DSCPMarkerService_Part)
	{
		part_UNIX_DSCPMarkerService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 63 && endOf_UNIX_PreambleMarkerService_Part)
	{
		part_UNIX_PreambleMarkerService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 64 && endOf_UNIX_ClassifierService_Part)
	{
		part_UNIX_ClassifierService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 65 && endOf_UNIX_ClassifierElement_Part)
	{
		part_UNIX_ClassifierElement_Component.finalize();
		partIndex++;
	}
	if (partIndex == 66 && endOf_UNIX_PacketSchedulingService_Part)
	{
		part_UNIX_PacketSchedulingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 67 && endOf_UNIX_NonWorkConservingSchedulingService_Part)
	{
		part_UNIX_NonWorkConservingSchedulingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 68 && endOf_UNIX_REDDropperService_Part)
	{
		part_UNIX_REDDropperService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 69 && endOf_UNIX_HeadTailDropper_Part)
	{
		part_UNIX_HeadTailDropper_Component.finalize();
		partIndex++;
	}
	if (partIndex == 70 && endOf_UNIX_WeightedREDDropperService_Part)
	{
		part_UNIX_WeightedREDDropperService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 71 && endOf_UNIX_QueuingService_Part)
	{
		part_UNIX_QueuingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 72 && endOf_UNIX_BootService_Part)
	{
		part_UNIX_BootService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 73 && endOf_UNIX_AFService_Part)
	{
		part_UNIX_AFService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 74 && endOf_UNIX_EFService_Part)
	{
		part_UNIX_EFService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 75 && endOf_UNIX_FlowService_Part)
	{
		part_UNIX_FlowService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 76 && endOf_UNIX_Hdr8021PService_Part)
	{
		part_UNIX_Hdr8021PService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 77 && endOf_UNIX_PrecedenceService_Part)
	{
		part_UNIX_PrecedenceService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 78 && endOf_UNIX_PrintService_Part)
	{
		part_UNIX_PrintService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 79 && endOf_UNIX_TimeService_Part)
	{
		part_UNIX_TimeService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 80 && endOf_UNIX_SoftwareInstallationService_Part)
	{
		part_UNIX_SoftwareInstallationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 81 && endOf_UNIX_VLANService_Part)
	{
		part_UNIX_VLANService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 82 && endOf_UNIX_Specific802dot1QVLANService_Part)
	{
		part_UNIX_Specific802dot1QVLANService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 83 && endOf_UNIX_PowerUtilizationManagementService_Part)
	{
		part_UNIX_PowerUtilizationManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 84 && endOf_UNIX_ClusteringService_Part)
	{
		part_UNIX_ClusteringService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 85 && endOf_UNIX_SharedDeviceManagementService_Part)
	{
		part_UNIX_SharedDeviceManagementService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 86 && endOf_UNIX_BatchService_Part)
	{
		part_UNIX_BatchService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 87 && endOf_UNIX_iSCSIConfigurationService_Part)
	{
		part_UNIX_iSCSIConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 88 && endOf_UNIX_OOBAlertService_Part)
	{
		part_UNIX_OOBAlertService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 89 && endOf_UNIX_StorageConfigurationService_Part)
	{
		part_UNIX_StorageConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 90 && endOf_UNIX_IPConfigurationService_Part)
	{
		part_UNIX_IPConfigurationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 91 && endOf_UNIX_VirtualSystemMigrationService_Part)
	{
		part_UNIX_VirtualSystemMigrationService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 92 && endOf_UNIX_MPLSCrossConnect_Part)
	{
		part_UNIX_MPLSCrossConnect_Component.finalize();
		partIndex++;
	}
	if (partIndex == 93 && endOf_UNIX_PlatformWatchdogService_Part)
	{
		part_UNIX_PlatformWatchdogService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 94 && endOf_UNIX_FCHBADiagnosticTest_Part)
	{
		part_UNIX_FCHBADiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 95 && endOf_UNIX_RAIDDiagnosticTest_Part)
	{
		part_UNIX_RAIDDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 96 && endOf_UNIX_CPUDiagnosticTest_Part)
	{
		part_UNIX_CPUDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 97 && endOf_UNIX_EthernetNICDiagnosticTest_Part)
	{
		part_UNIX_EthernetNICDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 98 && endOf_UNIX_OpticalDriveDiagnosticTest_Part)
	{
		part_UNIX_OpticalDriveDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 99 && endOf_UNIX_OpticalDriveDiagnosticSettingData_Part)
	{
		part_UNIX_OpticalDriveDiagnosticSettingData_Component.finalize();
		partIndex++;
	}
	if (partIndex == 100 && endOf_UNIX_DiskDriveDiagnosticTest_Part)
	{
		part_UNIX_DiskDriveDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 101 && endOf_UNIX_IBSubnetManager_Part)
	{
		part_UNIX_IBSubnetManager_Component.finalize();
		partIndex++;
	}
	if (partIndex == 102 && endOf_UNIX_ObjectManager_Part)
	{
		part_UNIX_ObjectManager_Component.finalize();
		partIndex++;
	}
	if (partIndex == 103 && endOf_UNIX_ObjectManagerAdapter_Part)
	{
		part_UNIX_ObjectManagerAdapter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 104 && endOf_UNIX_ProviderObjectManagerAdapter_Part)
	{
		part_UNIX_ProviderObjectManagerAdapter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 105 && endOf_UNIX_ProtocolAdapter_Part)
	{
		part_UNIX_ProtocolAdapter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 106 && endOf_UNIX_FileSystemStatisticsService_Part)
	{
		part_UNIX_FileSystemStatisticsService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 107 && endOf_UNIX_BlockStatisticsService_Part)
	{
		part_UNIX_BlockStatisticsService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 108 && endOf_UNIX_USBRedirectionService_Part)
	{
		part_UNIX_USBRedirectionService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 109 && endOf_UNIX_TextRedirectionService_Part)
	{
		part_UNIX_TextRedirectionService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 110 && endOf_UNIX_BGPService_Part)
	{
		part_UNIX_BGPService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 111 && endOf_UNIX_OSPFService_Part)
	{
		part_UNIX_OSPFService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 112 && endOf_UNIX_NATService_Part)
	{
		part_UNIX_NATService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 113 && endOf_UNIX_TransparentBridgingService_Part)
	{
		part_UNIX_TransparentBridgingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 114 && endOf_UNIX_SourceRoutingService_Part)
	{
		part_UNIX_SourceRoutingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 115 && endOf_UNIX_SpanningTreeService_Part)
	{
		part_UNIX_SpanningTreeService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 116 && endOf_UNIX_SwitchService_Part)
	{
		part_UNIX_SwitchService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 117 && endOf_UNIX_FileExportService_Part)
	{
		part_UNIX_FileExportService_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_Product_Group &&
		endOf_UNIX_FibreProtocolService_Part &&
		endOf_UNIX_WakeUpService_Part &&
		endOf_UNIX_VirtualSystemSnapshotService_Part &&
		endOf_UNIX_ResourcePoolConfigurationService_Part &&
		endOf_UNIX_FileSystemConfigurationService_Part &&
		endOf_UNIX_HelpService_Part &&
		endOf_UNIX_StorageRelocationService_Part &&
		endOf_UNIX_MPLSService_Part &&
		endOf_UNIX_PolicyActivationService_Part &&
		endOf_UNIX_SCSIPathConfigurationService_Part &&
		endOf_UNIX_BIOSService_Part &&
		endOf_UNIX_PowerManagementService_Part &&
		endOf_UNIX_NetworkPortConfigurationService_Part &&
		endOf_UNIX_WiFiPortConfigurationService_Part &&
		endOf_UNIX_VRFConfigurationService_Part &&
		endOf_UNIX_ReplicationService_Part &&
		endOf_UNIX_AccountManagementService_Part &&
		endOf_UNIX_VerificationService_Part &&
		endOf_UNIX_CertificateAuthority_Part &&
		endOf_UNIX_Notary_Part &&
		endOf_UNIX_KeyBasedCredentialManagementService_Part &&
		endOf_UNIX_CertificateManagementService_Part &&
		endOf_UNIX_KerberosKeyDistributionCenter_Part &&
		endOf_UNIX_PublicKeyManagementService_Part &&
		endOf_UNIX_SharedSecretService_Part &&
		endOf_UNIX_IdentityManagementService_Part &&
		endOf_UNIX_StorageHardwareIDManagementService_Part &&
		endOf_UNIX_AuthorizationService_Part &&
		endOf_UNIX_PrivilegeManagementService_Part &&
		endOf_UNIX_RoleBasedAuthorizationService_Part &&
		endOf_UNIX_AccessControlService_Part &&
		endOf_UNIX_WBEMServer_Part &&
		endOf_UNIX_LaunchInContextService_Part &&
		endOf_UNIX_VirtualSystemManagementService_Part &&
		endOf_UNIX_MetricService_Part &&
		endOf_UNIX_StorageNameBindingService_Part &&
		endOf_UNIX_ZoneService_Part &&
		endOf_UNIX_ControllerConfigurationService_Part &&
		endOf_UNIX_GroupMaskingMappingService_Part &&
		endOf_UNIX_DatabaseService_Part &&
		endOf_UNIX_DiskPartitionConfigurationService_Part &&
		endOf_UNIX_ConfigurationReportingService_Part &&
		endOf_UNIX_PowerTopologyService_Part &&
		endOf_UNIX_NetworkPolicyService_Part &&
		endOf_UNIX_BasicExecutionService_Part &&
		endOf_UNIX_SpareConfigurationService_Part &&
		endOf_UNIX_StorageElementCompositionService_Part &&
		endOf_UNIX_OpaqueManagementDataService_Part &&
		endOf_UNIX_FingerprintMatchingService_Part &&
		endOf_UNIX_ProtocolService_Part &&
		endOf_UNIX_WBEMProtocolService_Part &&
		endOf_UNIX_TierService_Part &&
		endOf_UNIX_TierPolicyService_Part &&
		endOf_UNIX_IndicationService_Part &&
		endOf_UNIX_FileImportService_Part &&
		endOf_UNIX_VTLStatisticalDataService_Part &&
		endOf_UNIX_DropThresholdCalculationService_Part &&
		endOf_UNIX_TokenBucketMeterService_Part &&
		endOf_UNIX_EWMAMeterService_Part &&
		endOf_UNIX_AverageRateMeterService_Part &&
		endOf_UNIX_ToSMarkerService_Part &&
		endOf_UNIX_Priority8021QMarkerService_Part &&
		endOf_UNIX_DSCPMarkerService_Part &&
		endOf_UNIX_PreambleMarkerService_Part &&
		endOf_UNIX_ClassifierService_Part &&
		endOf_UNIX_ClassifierElement_Part &&
		endOf_UNIX_PacketSchedulingService_Part &&
		endOf_UNIX_NonWorkConservingSchedulingService_Part &&
		endOf_UNIX_REDDropperService_Part &&
		endOf_UNIX_HeadTailDropper_Part &&
		endOf_UNIX_WeightedREDDropperService_Part &&
		endOf_UNIX_QueuingService_Part &&
		endOf_UNIX_BootService_Part &&
		endOf_UNIX_AFService_Part &&
		endOf_UNIX_EFService_Part &&
		endOf_UNIX_FlowService_Part &&
		endOf_UNIX_Hdr8021PService_Part &&
		endOf_UNIX_PrecedenceService_Part &&
		endOf_UNIX_PrintService_Part &&
		endOf_UNIX_TimeService_Part &&
		endOf_UNIX_SoftwareInstallationService_Part &&
		endOf_UNIX_VLANService_Part &&
		endOf_UNIX_Specific802dot1QVLANService_Part &&
		endOf_UNIX_PowerUtilizationManagementService_Part &&
		endOf_UNIX_ClusteringService_Part &&
		endOf_UNIX_SharedDeviceManagementService_Part &&
		endOf_UNIX_BatchService_Part &&
		endOf_UNIX_iSCSIConfigurationService_Part &&
		endOf_UNIX_OOBAlertService_Part &&
		endOf_UNIX_StorageConfigurationService_Part &&
		endOf_UNIX_IPConfigurationService_Part &&
		endOf_UNIX_VirtualSystemMigrationService_Part &&
		endOf_UNIX_MPLSCrossConnect_Part &&
		endOf_UNIX_PlatformWatchdogService_Part &&
		endOf_UNIX_FCHBADiagnosticTest_Part &&
		endOf_UNIX_RAIDDiagnosticTest_Part &&
		endOf_UNIX_CPUDiagnosticTest_Part &&
		endOf_UNIX_EthernetNICDiagnosticTest_Part &&
		endOf_UNIX_OpticalDriveDiagnosticTest_Part &&
		endOf_UNIX_OpticalDriveDiagnosticSettingData_Part &&
		endOf_UNIX_DiskDriveDiagnosticTest_Part &&
		endOf_UNIX_IBSubnetManager_Part &&
		endOf_UNIX_ObjectManager_Part &&
		endOf_UNIX_ObjectManagerAdapter_Part &&
		endOf_UNIX_ProviderObjectManagerAdapter_Part &&
		endOf_UNIX_ProtocolAdapter_Part &&
		endOf_UNIX_FileSystemStatisticsService_Part &&
		endOf_UNIX_BlockStatisticsService_Part &&
		endOf_UNIX_USBRedirectionService_Part &&
		endOf_UNIX_TextRedirectionService_Part &&
		endOf_UNIX_BGPService_Part &&
		endOf_UNIX_OSPFService_Part &&
		endOf_UNIX_NATService_Part &&
		endOf_UNIX_TransparentBridgingService_Part &&
		endOf_UNIX_SourceRoutingService_Part &&
		endOf_UNIX_SpanningTreeService_Part &&
		endOf_UNIX_SwitchService_Part &&
		endOf_UNIX_FileExportService_Part)		return false;
	return true;
}

Boolean UNIX_ProductServiceComponent::finalize()
{
	group_UNIX_Product_Component.finalize();
	part_UNIX_FibreProtocolService_Component.finalize();
	part_UNIX_WakeUpService_Component.finalize();
	part_UNIX_VirtualSystemSnapshotService_Component.finalize();
	part_UNIX_ResourcePoolConfigurationService_Component.finalize();
	part_UNIX_FileSystemConfigurationService_Component.finalize();
	part_UNIX_HelpService_Component.finalize();
	part_UNIX_StorageRelocationService_Component.finalize();
	part_UNIX_MPLSService_Component.finalize();
	part_UNIX_PolicyActivationService_Component.finalize();
	part_UNIX_SCSIPathConfigurationService_Component.finalize();
	part_UNIX_BIOSService_Component.finalize();
	part_UNIX_PowerManagementService_Component.finalize();
	part_UNIX_NetworkPortConfigurationService_Component.finalize();
	part_UNIX_WiFiPortConfigurationService_Component.finalize();
	part_UNIX_VRFConfigurationService_Component.finalize();
	part_UNIX_ReplicationService_Component.finalize();
	part_UNIX_AccountManagementService_Component.finalize();
	part_UNIX_VerificationService_Component.finalize();
	part_UNIX_CertificateAuthority_Component.finalize();
	part_UNIX_Notary_Component.finalize();
	part_UNIX_KeyBasedCredentialManagementService_Component.finalize();
	part_UNIX_CertificateManagementService_Component.finalize();
	part_UNIX_KerberosKeyDistributionCenter_Component.finalize();
	part_UNIX_PublicKeyManagementService_Component.finalize();
	part_UNIX_SharedSecretService_Component.finalize();
	part_UNIX_IdentityManagementService_Component.finalize();
	part_UNIX_StorageHardwareIDManagementService_Component.finalize();
	part_UNIX_AuthorizationService_Component.finalize();
	part_UNIX_PrivilegeManagementService_Component.finalize();
	part_UNIX_RoleBasedAuthorizationService_Component.finalize();
	part_UNIX_AccessControlService_Component.finalize();
	part_UNIX_WBEMServer_Component.finalize();
	part_UNIX_LaunchInContextService_Component.finalize();
	part_UNIX_VirtualSystemManagementService_Component.finalize();
	part_UNIX_MetricService_Component.finalize();
	part_UNIX_StorageNameBindingService_Component.finalize();
	part_UNIX_ZoneService_Component.finalize();
	part_UNIX_ControllerConfigurationService_Component.finalize();
	part_UNIX_GroupMaskingMappingService_Component.finalize();
	part_UNIX_DatabaseService_Component.finalize();
	part_UNIX_DiskPartitionConfigurationService_Component.finalize();
	part_UNIX_ConfigurationReportingService_Component.finalize();
	part_UNIX_PowerTopologyService_Component.finalize();
	part_UNIX_NetworkPolicyService_Component.finalize();
	part_UNIX_BasicExecutionService_Component.finalize();
	part_UNIX_SpareConfigurationService_Component.finalize();
	part_UNIX_StorageElementCompositionService_Component.finalize();
	part_UNIX_OpaqueManagementDataService_Component.finalize();
	part_UNIX_FingerprintMatchingService_Component.finalize();
	part_UNIX_ProtocolService_Component.finalize();
	part_UNIX_WBEMProtocolService_Component.finalize();
	part_UNIX_TierService_Component.finalize();
	part_UNIX_TierPolicyService_Component.finalize();
	part_UNIX_IndicationService_Component.finalize();
	part_UNIX_FileImportService_Component.finalize();
	part_UNIX_VTLStatisticalDataService_Component.finalize();
	part_UNIX_DropThresholdCalculationService_Component.finalize();
	part_UNIX_TokenBucketMeterService_Component.finalize();
	part_UNIX_EWMAMeterService_Component.finalize();
	part_UNIX_AverageRateMeterService_Component.finalize();
	part_UNIX_ToSMarkerService_Component.finalize();
	part_UNIX_Priority8021QMarkerService_Component.finalize();
	part_UNIX_DSCPMarkerService_Component.finalize();
	part_UNIX_PreambleMarkerService_Component.finalize();
	part_UNIX_ClassifierService_Component.finalize();
	part_UNIX_ClassifierElement_Component.finalize();
	part_UNIX_PacketSchedulingService_Component.finalize();
	part_UNIX_NonWorkConservingSchedulingService_Component.finalize();
	part_UNIX_REDDropperService_Component.finalize();
	part_UNIX_HeadTailDropper_Component.finalize();
	part_UNIX_WeightedREDDropperService_Component.finalize();
	part_UNIX_QueuingService_Component.finalize();
	part_UNIX_BootService_Component.finalize();
	part_UNIX_AFService_Component.finalize();
	part_UNIX_EFService_Component.finalize();
	part_UNIX_FlowService_Component.finalize();
	part_UNIX_Hdr8021PService_Component.finalize();
	part_UNIX_PrecedenceService_Component.finalize();
	part_UNIX_PrintService_Component.finalize();
	part_UNIX_TimeService_Component.finalize();
	part_UNIX_SoftwareInstallationService_Component.finalize();
	part_UNIX_VLANService_Component.finalize();
	part_UNIX_Specific802dot1QVLANService_Component.finalize();
	part_UNIX_PowerUtilizationManagementService_Component.finalize();
	part_UNIX_ClusteringService_Component.finalize();
	part_UNIX_SharedDeviceManagementService_Component.finalize();
	part_UNIX_BatchService_Component.finalize();
	part_UNIX_iSCSIConfigurationService_Component.finalize();
	part_UNIX_OOBAlertService_Component.finalize();
	part_UNIX_StorageConfigurationService_Component.finalize();
	part_UNIX_IPConfigurationService_Component.finalize();
	part_UNIX_VirtualSystemMigrationService_Component.finalize();
	part_UNIX_MPLSCrossConnect_Component.finalize();
	part_UNIX_PlatformWatchdogService_Component.finalize();
	part_UNIX_FCHBADiagnosticTest_Component.finalize();
	part_UNIX_RAIDDiagnosticTest_Component.finalize();
	part_UNIX_CPUDiagnosticTest_Component.finalize();
	part_UNIX_EthernetNICDiagnosticTest_Component.finalize();
	part_UNIX_OpticalDriveDiagnosticTest_Component.finalize();
	part_UNIX_OpticalDriveDiagnosticSettingData_Component.finalize();
	part_UNIX_DiskDriveDiagnosticTest_Component.finalize();
	part_UNIX_IBSubnetManager_Component.finalize();
	part_UNIX_ObjectManager_Component.finalize();
	part_UNIX_ObjectManagerAdapter_Component.finalize();
	part_UNIX_ProviderObjectManagerAdapter_Component.finalize();
	part_UNIX_ProtocolAdapter_Component.finalize();
	part_UNIX_FileSystemStatisticsService_Component.finalize();
	part_UNIX_BlockStatisticsService_Component.finalize();
	part_UNIX_USBRedirectionService_Component.finalize();
	part_UNIX_TextRedirectionService_Component.finalize();
	part_UNIX_BGPService_Component.finalize();
	part_UNIX_OSPFService_Component.finalize();
	part_UNIX_NATService_Component.finalize();
	part_UNIX_TransparentBridgingService_Component.finalize();
	part_UNIX_SourceRoutingService_Component.finalize();
	part_UNIX_SpanningTreeService_Component.finalize();
	part_UNIX_SwitchService_Component.finalize();
	part_UNIX_FileExportService_Component.finalize();
	return true;
}


Boolean UNIX_ProductServiceComponent::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupComponentKey;
	String partComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_COMPONENT)) groupComponentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_COMPONENT)) partComponentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getGroupComponent().getPath().toString(), groupComponentKey)) && 
			(String::equalNoCase(getPartComponent().getPath().toString(), partComponentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ProductServiceComponent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductServiceComponent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductServiceComponent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductServiceComponent::validateInstance()
{
	return true;
}

