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


UNIX_ProvidesEndpoint::UNIX_ProvidesEndpoint(void)
{
}

UNIX_ProvidesEndpoint::~UNIX_ProvidesEndpoint(void)
{
}

Boolean UNIX_ProvidesEndpoint::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ProvidesEndpoint::getAntecedent() const
{
	return _antecedent;
}

void UNIX_ProvidesEndpoint::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_ProvidesEndpoint::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ProvidesEndpoint::getDependent() const
{
	return _dependent;
}

void UNIX_ProvidesEndpoint::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_ProvidesEndpoint::clearInstance()
{

	_antecedent = _antecedentFibreProtocolServiceProvider.constructInstance(
		CIMName("UNIX_FibreProtocolService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentFibreProtocolService);
	_dependent = _dependentDHCPProtocolEndpointProvider.constructInstance(
		CIMName("UNIX_DHCPProtocolEndpoint"),
		CIMNamespaceName("root/cimv2"),
		_dependentDHCPProtocolEndpoint);

}

Boolean UNIX_ProvidesEndpoint::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Antecedent"))
			{
				CIMInstance antecedentValue;
				property.getValue().get(antecedentValue);
				setAntecedent(antecedentValue);
			}
			else if (String::equal(property.getName().getString(), "Dependent"))
			{
				CIMInstance dependentValue;
				property.getValue().get(dependentValue);
				setDependent(dependentValue);
			}
	}
	return true;
}


Boolean UNIX_ProvidesEndpoint::initialize()
{
	_antecedentFibreProtocolService.initialize();
	_antecedentWakeUpService.initialize();
	_antecedentVirtualSystemSnapshotService.initialize();
	_antecedentResourcePoolConfigurationService.initialize();
	_antecedentFileSystemConfigurationService.initialize();
	_antecedentHelpService.initialize();
	_antecedentStorageRelocationService.initialize();
	_antecedentMPLSService.initialize();
	_antecedentPolicyActivationService.initialize();
	_antecedentSCSIPathConfigurationService.initialize();
	_antecedentBIOSService.initialize();
	_antecedentPowerManagementService.initialize();
	_antecedentNetworkPortConfigurationService.initialize();
	_antecedentWiFiPortConfigurationService.initialize();
	_antecedentVRFConfigurationService.initialize();
	_antecedentReplicationService.initialize();
	_antecedentAccountManagementService.initialize();
	_antecedentVerificationService.initialize();
	_antecedentCertificateAuthority.initialize();
	_antecedentNotary.initialize();
	_antecedentKeyBasedCredentialManagementService.initialize();
	_antecedentCertificateManagementService.initialize();
	_antecedentKerberosKeyDistributionCenter.initialize();
	_antecedentPublicKeyManagementService.initialize();
	_antecedentSharedSecretService.initialize();
	_antecedentIdentityManagementService.initialize();
	_antecedentStorageHardwareIDManagementService.initialize();
	_antecedentAuthorizationService.initialize();
	_antecedentPrivilegeManagementService.initialize();
	_antecedentRoleBasedAuthorizationService.initialize();
	_antecedentAccessControlService.initialize();
	_antecedentWBEMServer.initialize();
	_antecedentLaunchInContextService.initialize();
	_antecedentVirtualSystemManagementService.initialize();
	_antecedentMetricService.initialize();
	_antecedentStorageNameBindingService.initialize();
	_antecedentZoneService.initialize();
	_antecedentControllerConfigurationService.initialize();
	_antecedentGroupMaskingMappingService.initialize();
	_antecedentDatabaseService.initialize();
	_antecedentDiskPartitionConfigurationService.initialize();
	_antecedentConfigurationReportingService.initialize();
	_antecedentPowerTopologyService.initialize();
	_antecedentNetworkPolicyService.initialize();
	_antecedentBasicExecutionService.initialize();
	_antecedentSpareConfigurationService.initialize();
	_antecedentStorageElementCompositionService.initialize();
	_antecedentOpaqueManagementDataService.initialize();
	_antecedentFingerprintMatchingService.initialize();
	_antecedentProtocolService.initialize();
	_antecedentWBEMProtocolService.initialize();
	_antecedentTierService.initialize();
	_antecedentTierPolicyService.initialize();
	_antecedentIndicationService.initialize();
	_antecedentFileImportService.initialize();
	_antecedentVTLStatisticalDataService.initialize();
	_antecedentDropThresholdCalculationService.initialize();
	_antecedentTokenBucketMeterService.initialize();
	_antecedentEWMAMeterService.initialize();
	_antecedentAverageRateMeterService.initialize();
	_antecedentToSMarkerService.initialize();
	_antecedentPriority8021QMarkerService.initialize();
	_antecedentDSCPMarkerService.initialize();
	_antecedentPreambleMarkerService.initialize();
	_antecedentClassifierService.initialize();
	_antecedentClassifierElement.initialize();
	_antecedentPacketSchedulingService.initialize();
	_antecedentNonWorkConservingSchedulingService.initialize();
	_antecedentREDDropperService.initialize();
	_antecedentHeadTailDropper.initialize();
	_antecedentWeightedREDDropperService.initialize();
	_antecedentQueuingService.initialize();
	_antecedentBootService.initialize();
	_antecedentAFService.initialize();
	_antecedentEFService.initialize();
	_antecedentFlowService.initialize();
	_antecedentHdr8021PService.initialize();
	_antecedentPrecedenceService.initialize();
	_antecedentPrintService.initialize();
	_antecedentTimeService.initialize();
	_antecedentSoftwareInstallationService.initialize();
	_antecedentVLANService.initialize();
	_antecedentSpecific802dot1QVLANService.initialize();
	_antecedentPowerUtilizationManagementService.initialize();
	_antecedentClusteringService.initialize();
	_antecedentSharedDeviceManagementService.initialize();
	_antecedentBatchService.initialize();
	_antecedentiSCSIConfigurationService.initialize();
	_antecedentOOBAlertService.initialize();
	_antecedentStorageConfigurationService.initialize();
	_antecedentIPConfigurationService.initialize();
	_antecedentVirtualSystemMigrationService.initialize();
	_antecedentMPLSCrossConnect.initialize();
	_antecedentPlatformWatchdogService.initialize();
	_antecedentFCHBADiagnosticTest.initialize();
	_antecedentRAIDDiagnosticTest.initialize();
	_antecedentCPUDiagnosticTest.initialize();
	_antecedentEthernetNICDiagnosticTest.initialize();
	_antecedentOpticalDriveDiagnosticTest.initialize();
	_antecedentOpticalDriveDiagnosticSettingData.initialize();
	_antecedentDiskDriveDiagnosticTest.initialize();
	_antecedentIBSubnetManager.initialize();
	_antecedentObjectManager.initialize();
	_antecedentObjectManagerAdapter.initialize();
	_antecedentProviderObjectManagerAdapter.initialize();
	_antecedentProtocolAdapter.initialize();
	_antecedentFileSystemStatisticsService.initialize();
	_antecedentBlockStatisticsService.initialize();
	_antecedentUSBRedirectionService.initialize();
	_antecedentTextRedirectionService.initialize();
	_antecedentBGPService.initialize();
	_antecedentOSPFService.initialize();
	_antecedentNATService.initialize();
	_antecedentTransparentBridgingService.initialize();
	_antecedentSourceRoutingService.initialize();
	_antecedentSpanningTreeService.initialize();
	_antecedentSwitchService.initialize();
	_antecedentFileExportService.initialize();
	_dependentDHCPProtocolEndpoint.initialize();
	_dependentSSHProtocolEndpoint.initialize();
	_dependentSCSIProtocolEndpoint.initialize();
	_dependentiSCSIProtocolEndpoint.initialize();
	_dependentCLPProtocolEndpoint.initialize();
	_dependentIPXProtocolEndpoint.initialize();
	_dependentIPsecSAEndpoint.initialize();
	_dependentIKESAEndpoint.initialize();
	_dependentLANEndpoint.initialize();
	_dependentWiFiEndpoint.initialize();
	_dependentMPLSProtocolEndpoint.initialize();
	_dependentWirelessLANEndpoint.initialize();
	_dependentUDPProtocolEndpoint.initialize();
	_dependentTCPProtocolEndpoint.initialize();
	_dependentOSPFVirtualInterface.initialize();
	_dependentOSPFProtocolEndpoint.initialize();
	_dependentVLANEndpoint.initialize();
	_dependentLinkAggregator8023ad.initialize();
	_dependentATAProtocolEndpoint.initialize();
	_dependentIPEncapsulationInterface.initialize();
	_dependentIPSubinterface.initialize();
	_dependentSwitchVirtualInterface.initialize();
	_dependentIPLoopback.initialize();
	_dependentBGPProtocolEndpoint.initialize();
	_dependentSwitchPort.initialize();
	_dependentDNSProtocolEndpoint.initialize();
	_dependentLAGPort8023ad.initialize();
	return true;
}
Boolean UNIX_ProvidesEndpoint::load(int &pIndex)
{

	_antecedent = _antecedentFibreProtocolServiceProvider.constructInstance(
		CIMName("UNIX_FibreProtocolService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentFibreProtocolService);
	_dependent = _dependentDHCPProtocolEndpointProvider.constructInstance(
		CIMName("UNIX_DHCPProtocolEndpoint"),
		CIMNamespaceName("root/cimv2"),
		_dependentDHCPProtocolEndpoint);

	return false;
}

Boolean UNIX_ProvidesEndpoint::finalize()
{
	_antecedentFibreProtocolService.finalize();
	_antecedentWakeUpService.finalize();
	_antecedentVirtualSystemSnapshotService.finalize();
	_antecedentResourcePoolConfigurationService.finalize();
	_antecedentFileSystemConfigurationService.finalize();
	_antecedentHelpService.finalize();
	_antecedentStorageRelocationService.finalize();
	_antecedentMPLSService.finalize();
	_antecedentPolicyActivationService.finalize();
	_antecedentSCSIPathConfigurationService.finalize();
	_antecedentBIOSService.finalize();
	_antecedentPowerManagementService.finalize();
	_antecedentNetworkPortConfigurationService.finalize();
	_antecedentWiFiPortConfigurationService.finalize();
	_antecedentVRFConfigurationService.finalize();
	_antecedentReplicationService.finalize();
	_antecedentAccountManagementService.finalize();
	_antecedentVerificationService.finalize();
	_antecedentCertificateAuthority.finalize();
	_antecedentNotary.finalize();
	_antecedentKeyBasedCredentialManagementService.finalize();
	_antecedentCertificateManagementService.finalize();
	_antecedentKerberosKeyDistributionCenter.finalize();
	_antecedentPublicKeyManagementService.finalize();
	_antecedentSharedSecretService.finalize();
	_antecedentIdentityManagementService.finalize();
	_antecedentStorageHardwareIDManagementService.finalize();
	_antecedentAuthorizationService.finalize();
	_antecedentPrivilegeManagementService.finalize();
	_antecedentRoleBasedAuthorizationService.finalize();
	_antecedentAccessControlService.finalize();
	_antecedentWBEMServer.finalize();
	_antecedentLaunchInContextService.finalize();
	_antecedentVirtualSystemManagementService.finalize();
	_antecedentMetricService.finalize();
	_antecedentStorageNameBindingService.finalize();
	_antecedentZoneService.finalize();
	_antecedentControllerConfigurationService.finalize();
	_antecedentGroupMaskingMappingService.finalize();
	_antecedentDatabaseService.finalize();
	_antecedentDiskPartitionConfigurationService.finalize();
	_antecedentConfigurationReportingService.finalize();
	_antecedentPowerTopologyService.finalize();
	_antecedentNetworkPolicyService.finalize();
	_antecedentBasicExecutionService.finalize();
	_antecedentSpareConfigurationService.finalize();
	_antecedentStorageElementCompositionService.finalize();
	_antecedentOpaqueManagementDataService.finalize();
	_antecedentFingerprintMatchingService.finalize();
	_antecedentProtocolService.finalize();
	_antecedentWBEMProtocolService.finalize();
	_antecedentTierService.finalize();
	_antecedentTierPolicyService.finalize();
	_antecedentIndicationService.finalize();
	_antecedentFileImportService.finalize();
	_antecedentVTLStatisticalDataService.finalize();
	_antecedentDropThresholdCalculationService.finalize();
	_antecedentTokenBucketMeterService.finalize();
	_antecedentEWMAMeterService.finalize();
	_antecedentAverageRateMeterService.finalize();
	_antecedentToSMarkerService.finalize();
	_antecedentPriority8021QMarkerService.finalize();
	_antecedentDSCPMarkerService.finalize();
	_antecedentPreambleMarkerService.finalize();
	_antecedentClassifierService.finalize();
	_antecedentClassifierElement.finalize();
	_antecedentPacketSchedulingService.finalize();
	_antecedentNonWorkConservingSchedulingService.finalize();
	_antecedentREDDropperService.finalize();
	_antecedentHeadTailDropper.finalize();
	_antecedentWeightedREDDropperService.finalize();
	_antecedentQueuingService.finalize();
	_antecedentBootService.finalize();
	_antecedentAFService.finalize();
	_antecedentEFService.finalize();
	_antecedentFlowService.finalize();
	_antecedentHdr8021PService.finalize();
	_antecedentPrecedenceService.finalize();
	_antecedentPrintService.finalize();
	_antecedentTimeService.finalize();
	_antecedentSoftwareInstallationService.finalize();
	_antecedentVLANService.finalize();
	_antecedentSpecific802dot1QVLANService.finalize();
	_antecedentPowerUtilizationManagementService.finalize();
	_antecedentClusteringService.finalize();
	_antecedentSharedDeviceManagementService.finalize();
	_antecedentBatchService.finalize();
	_antecedentiSCSIConfigurationService.finalize();
	_antecedentOOBAlertService.finalize();
	_antecedentStorageConfigurationService.finalize();
	_antecedentIPConfigurationService.finalize();
	_antecedentVirtualSystemMigrationService.finalize();
	_antecedentMPLSCrossConnect.finalize();
	_antecedentPlatformWatchdogService.finalize();
	_antecedentFCHBADiagnosticTest.finalize();
	_antecedentRAIDDiagnosticTest.finalize();
	_antecedentCPUDiagnosticTest.finalize();
	_antecedentEthernetNICDiagnosticTest.finalize();
	_antecedentOpticalDriveDiagnosticTest.finalize();
	_antecedentOpticalDriveDiagnosticSettingData.finalize();
	_antecedentDiskDriveDiagnosticTest.finalize();
	_antecedentIBSubnetManager.finalize();
	_antecedentObjectManager.finalize();
	_antecedentObjectManagerAdapter.finalize();
	_antecedentProviderObjectManagerAdapter.finalize();
	_antecedentProtocolAdapter.finalize();
	_antecedentFileSystemStatisticsService.finalize();
	_antecedentBlockStatisticsService.finalize();
	_antecedentUSBRedirectionService.finalize();
	_antecedentTextRedirectionService.finalize();
	_antecedentBGPService.finalize();
	_antecedentOSPFService.finalize();
	_antecedentNATService.finalize();
	_antecedentTransparentBridgingService.finalize();
	_antecedentSourceRoutingService.finalize();
	_antecedentSpanningTreeService.finalize();
	_antecedentSwitchService.finalize();
	_antecedentFileExportService.finalize();
	_dependentDHCPProtocolEndpoint.finalize();
	_dependentSSHProtocolEndpoint.finalize();
	_dependentSCSIProtocolEndpoint.finalize();
	_dependentiSCSIProtocolEndpoint.finalize();
	_dependentCLPProtocolEndpoint.finalize();
	_dependentIPXProtocolEndpoint.finalize();
	_dependentIPsecSAEndpoint.finalize();
	_dependentIKESAEndpoint.finalize();
	_dependentLANEndpoint.finalize();
	_dependentWiFiEndpoint.finalize();
	_dependentMPLSProtocolEndpoint.finalize();
	_dependentWirelessLANEndpoint.finalize();
	_dependentUDPProtocolEndpoint.finalize();
	_dependentTCPProtocolEndpoint.finalize();
	_dependentOSPFVirtualInterface.finalize();
	_dependentOSPFProtocolEndpoint.finalize();
	_dependentVLANEndpoint.finalize();
	_dependentLinkAggregator8023ad.finalize();
	_dependentATAProtocolEndpoint.finalize();
	_dependentIPEncapsulationInterface.finalize();
	_dependentIPSubinterface.finalize();
	_dependentSwitchVirtualInterface.finalize();
	_dependentIPLoopback.finalize();
	_dependentBGPProtocolEndpoint.finalize();
	_dependentSwitchPort.finalize();
	_dependentDNSProtocolEndpoint.finalize();
	_dependentLAGPort8023ad.finalize();
	return true;
}


Boolean UNIX_ProvidesEndpoint::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAntecedent().getPath().toString(), antecedentKey)) && 
			(String::equalNoCase(getDependent().getPath().toString(), dependentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ProvidesEndpoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProvidesEndpoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProvidesEndpoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProvidesEndpoint::validateInstance()
{
	return true;
}

