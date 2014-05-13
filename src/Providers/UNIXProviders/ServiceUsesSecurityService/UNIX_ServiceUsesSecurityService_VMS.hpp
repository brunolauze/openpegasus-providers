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


UNIX_ServiceUsesSecurityService::UNIX_ServiceUsesSecurityService(void)
{
}

UNIX_ServiceUsesSecurityService::~UNIX_ServiceUsesSecurityService(void)
{
}

Boolean UNIX_ServiceUsesSecurityService::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ServiceUsesSecurityService::getAntecedent() const
{
	return _antecedent;
}

void UNIX_ServiceUsesSecurityService::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_ServiceUsesSecurityService::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ServiceUsesSecurityService::getDependent() const
{
	return _dependent;
}

void UNIX_ServiceUsesSecurityService::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_ServiceUsesSecurityService::getTypeOfDependency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_DEPENDENCY, getTypeOfDependency());
	return true;
}

Uint16 UNIX_ServiceUsesSecurityService::getTypeOfDependency() const
{
	return _typeOfDependency;
}

void UNIX_ServiceUsesSecurityService::setTypeOfDependency(Uint16 &value)
{
	_typeOfDependency = value;
}

Boolean UNIX_ServiceUsesSecurityService::getRestartService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESTART_SERVICE, getRestartService());
	return true;
}

Boolean UNIX_ServiceUsesSecurityService::getRestartService() const
{
	return _restartService;
}

void UNIX_ServiceUsesSecurityService::setRestartService(Boolean &value)
{
	_restartService = value;
}


void UNIX_ServiceUsesSecurityService::clearInstance()
{

	_antecedent = _antecedentAccountManagementServiceProvider.constructInstance(
		CIMName("UNIX_AccountManagementService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentAccountManagementService);
	_dependent = _dependentFibreProtocolServiceProvider.constructInstance(
		CIMName("UNIX_FibreProtocolService"),
		CIMNamespaceName("root/cimv2"),
		_dependentFibreProtocolService);
	_typeOfDependency = Uint16(0);
	_restartService = Boolean(false);

}

Boolean UNIX_ServiceUsesSecurityService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TypeOfDependency"))
			{
				Uint16 typeOfDependencyValue;
				property.getValue().get(typeOfDependencyValue);
				setTypeOfDependency(typeOfDependencyValue);
			}
			else if (String::equal(property.getName().getString(), "RestartService"))
			{
				Boolean restartServiceValue;
				property.getValue().get(restartServiceValue);
				setRestartService(restartServiceValue);
			}
	}
	return true;
}


Boolean UNIX_ServiceUsesSecurityService::initialize()
{
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
	_dependentFibreProtocolService.initialize();
	_dependentWakeUpService.initialize();
	_dependentVirtualSystemSnapshotService.initialize();
	_dependentResourcePoolConfigurationService.initialize();
	_dependentFileSystemConfigurationService.initialize();
	_dependentHelpService.initialize();
	_dependentStorageRelocationService.initialize();
	_dependentMPLSService.initialize();
	_dependentPolicyActivationService.initialize();
	_dependentSCSIPathConfigurationService.initialize();
	_dependentBIOSService.initialize();
	_dependentPowerManagementService.initialize();
	_dependentNetworkPortConfigurationService.initialize();
	_dependentWiFiPortConfigurationService.initialize();
	_dependentVRFConfigurationService.initialize();
	_dependentReplicationService.initialize();
	_dependentAccountManagementService.initialize();
	_dependentVerificationService.initialize();
	_dependentCertificateAuthority.initialize();
	_dependentNotary.initialize();
	_dependentKeyBasedCredentialManagementService.initialize();
	_dependentCertificateManagementService.initialize();
	_dependentKerberosKeyDistributionCenter.initialize();
	_dependentPublicKeyManagementService.initialize();
	_dependentSharedSecretService.initialize();
	_dependentIdentityManagementService.initialize();
	_dependentStorageHardwareIDManagementService.initialize();
	_dependentAuthorizationService.initialize();
	_dependentPrivilegeManagementService.initialize();
	_dependentRoleBasedAuthorizationService.initialize();
	_dependentAccessControlService.initialize();
	_dependentWBEMServer.initialize();
	_dependentLaunchInContextService.initialize();
	_dependentVirtualSystemManagementService.initialize();
	_dependentMetricService.initialize();
	_dependentStorageNameBindingService.initialize();
	_dependentZoneService.initialize();
	_dependentControllerConfigurationService.initialize();
	_dependentGroupMaskingMappingService.initialize();
	_dependentDatabaseService.initialize();
	_dependentDiskPartitionConfigurationService.initialize();
	_dependentConfigurationReportingService.initialize();
	_dependentPowerTopologyService.initialize();
	_dependentNetworkPolicyService.initialize();
	_dependentBasicExecutionService.initialize();
	_dependentSpareConfigurationService.initialize();
	_dependentStorageElementCompositionService.initialize();
	_dependentOpaqueManagementDataService.initialize();
	_dependentFingerprintMatchingService.initialize();
	_dependentProtocolService.initialize();
	_dependentWBEMProtocolService.initialize();
	_dependentTierService.initialize();
	_dependentTierPolicyService.initialize();
	_dependentIndicationService.initialize();
	_dependentFileImportService.initialize();
	_dependentVTLStatisticalDataService.initialize();
	_dependentDropThresholdCalculationService.initialize();
	_dependentTokenBucketMeterService.initialize();
	_dependentEWMAMeterService.initialize();
	_dependentAverageRateMeterService.initialize();
	_dependentToSMarkerService.initialize();
	_dependentPriority8021QMarkerService.initialize();
	_dependentDSCPMarkerService.initialize();
	_dependentPreambleMarkerService.initialize();
	_dependentClassifierService.initialize();
	_dependentClassifierElement.initialize();
	_dependentPacketSchedulingService.initialize();
	_dependentNonWorkConservingSchedulingService.initialize();
	_dependentREDDropperService.initialize();
	_dependentHeadTailDropper.initialize();
	_dependentWeightedREDDropperService.initialize();
	_dependentQueuingService.initialize();
	_dependentBootService.initialize();
	_dependentAFService.initialize();
	_dependentEFService.initialize();
	_dependentFlowService.initialize();
	_dependentHdr8021PService.initialize();
	_dependentPrecedenceService.initialize();
	_dependentPrintService.initialize();
	_dependentTimeService.initialize();
	_dependentSoftwareInstallationService.initialize();
	_dependentVLANService.initialize();
	_dependentSpecific802dot1QVLANService.initialize();
	_dependentPowerUtilizationManagementService.initialize();
	_dependentClusteringService.initialize();
	_dependentSharedDeviceManagementService.initialize();
	_dependentBatchService.initialize();
	_dependentiSCSIConfigurationService.initialize();
	_dependentOOBAlertService.initialize();
	_dependentStorageConfigurationService.initialize();
	_dependentIPConfigurationService.initialize();
	_dependentVirtualSystemMigrationService.initialize();
	_dependentMPLSCrossConnect.initialize();
	_dependentPlatformWatchdogService.initialize();
	_dependentFCHBADiagnosticTest.initialize();
	_dependentRAIDDiagnosticTest.initialize();
	_dependentCPUDiagnosticTest.initialize();
	_dependentEthernetNICDiagnosticTest.initialize();
	_dependentOpticalDriveDiagnosticTest.initialize();
	_dependentOpticalDriveDiagnosticSettingData.initialize();
	_dependentDiskDriveDiagnosticTest.initialize();
	_dependentIBSubnetManager.initialize();
	_dependentObjectManager.initialize();
	_dependentObjectManagerAdapter.initialize();
	_dependentProviderObjectManagerAdapter.initialize();
	_dependentProtocolAdapter.initialize();
	_dependentFileSystemStatisticsService.initialize();
	_dependentBlockStatisticsService.initialize();
	_dependentUSBRedirectionService.initialize();
	_dependentTextRedirectionService.initialize();
	_dependentBGPService.initialize();
	_dependentOSPFService.initialize();
	_dependentNATService.initialize();
	_dependentTransparentBridgingService.initialize();
	_dependentSourceRoutingService.initialize();
	_dependentSpanningTreeService.initialize();
	_dependentSwitchService.initialize();
	_dependentFileExportService.initialize();
	return true;
}
Boolean UNIX_ServiceUsesSecurityService::load(int &pIndex)
{

	_antecedent = _antecedentAccountManagementServiceProvider.constructInstance(
		CIMName("UNIX_AccountManagementService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentAccountManagementService);
	_dependent = _dependentFibreProtocolServiceProvider.constructInstance(
		CIMName("UNIX_FibreProtocolService"),
		CIMNamespaceName("root/cimv2"),
		_dependentFibreProtocolService);
	_typeOfDependency = Uint16(0);
	_restartService = Boolean(false);

	return false;
}

Boolean UNIX_ServiceUsesSecurityService::finalize()
{
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
	_dependentFibreProtocolService.finalize();
	_dependentWakeUpService.finalize();
	_dependentVirtualSystemSnapshotService.finalize();
	_dependentResourcePoolConfigurationService.finalize();
	_dependentFileSystemConfigurationService.finalize();
	_dependentHelpService.finalize();
	_dependentStorageRelocationService.finalize();
	_dependentMPLSService.finalize();
	_dependentPolicyActivationService.finalize();
	_dependentSCSIPathConfigurationService.finalize();
	_dependentBIOSService.finalize();
	_dependentPowerManagementService.finalize();
	_dependentNetworkPortConfigurationService.finalize();
	_dependentWiFiPortConfigurationService.finalize();
	_dependentVRFConfigurationService.finalize();
	_dependentReplicationService.finalize();
	_dependentAccountManagementService.finalize();
	_dependentVerificationService.finalize();
	_dependentCertificateAuthority.finalize();
	_dependentNotary.finalize();
	_dependentKeyBasedCredentialManagementService.finalize();
	_dependentCertificateManagementService.finalize();
	_dependentKerberosKeyDistributionCenter.finalize();
	_dependentPublicKeyManagementService.finalize();
	_dependentSharedSecretService.finalize();
	_dependentIdentityManagementService.finalize();
	_dependentStorageHardwareIDManagementService.finalize();
	_dependentAuthorizationService.finalize();
	_dependentPrivilegeManagementService.finalize();
	_dependentRoleBasedAuthorizationService.finalize();
	_dependentAccessControlService.finalize();
	_dependentWBEMServer.finalize();
	_dependentLaunchInContextService.finalize();
	_dependentVirtualSystemManagementService.finalize();
	_dependentMetricService.finalize();
	_dependentStorageNameBindingService.finalize();
	_dependentZoneService.finalize();
	_dependentControllerConfigurationService.finalize();
	_dependentGroupMaskingMappingService.finalize();
	_dependentDatabaseService.finalize();
	_dependentDiskPartitionConfigurationService.finalize();
	_dependentConfigurationReportingService.finalize();
	_dependentPowerTopologyService.finalize();
	_dependentNetworkPolicyService.finalize();
	_dependentBasicExecutionService.finalize();
	_dependentSpareConfigurationService.finalize();
	_dependentStorageElementCompositionService.finalize();
	_dependentOpaqueManagementDataService.finalize();
	_dependentFingerprintMatchingService.finalize();
	_dependentProtocolService.finalize();
	_dependentWBEMProtocolService.finalize();
	_dependentTierService.finalize();
	_dependentTierPolicyService.finalize();
	_dependentIndicationService.finalize();
	_dependentFileImportService.finalize();
	_dependentVTLStatisticalDataService.finalize();
	_dependentDropThresholdCalculationService.finalize();
	_dependentTokenBucketMeterService.finalize();
	_dependentEWMAMeterService.finalize();
	_dependentAverageRateMeterService.finalize();
	_dependentToSMarkerService.finalize();
	_dependentPriority8021QMarkerService.finalize();
	_dependentDSCPMarkerService.finalize();
	_dependentPreambleMarkerService.finalize();
	_dependentClassifierService.finalize();
	_dependentClassifierElement.finalize();
	_dependentPacketSchedulingService.finalize();
	_dependentNonWorkConservingSchedulingService.finalize();
	_dependentREDDropperService.finalize();
	_dependentHeadTailDropper.finalize();
	_dependentWeightedREDDropperService.finalize();
	_dependentQueuingService.finalize();
	_dependentBootService.finalize();
	_dependentAFService.finalize();
	_dependentEFService.finalize();
	_dependentFlowService.finalize();
	_dependentHdr8021PService.finalize();
	_dependentPrecedenceService.finalize();
	_dependentPrintService.finalize();
	_dependentTimeService.finalize();
	_dependentSoftwareInstallationService.finalize();
	_dependentVLANService.finalize();
	_dependentSpecific802dot1QVLANService.finalize();
	_dependentPowerUtilizationManagementService.finalize();
	_dependentClusteringService.finalize();
	_dependentSharedDeviceManagementService.finalize();
	_dependentBatchService.finalize();
	_dependentiSCSIConfigurationService.finalize();
	_dependentOOBAlertService.finalize();
	_dependentStorageConfigurationService.finalize();
	_dependentIPConfigurationService.finalize();
	_dependentVirtualSystemMigrationService.finalize();
	_dependentMPLSCrossConnect.finalize();
	_dependentPlatformWatchdogService.finalize();
	_dependentFCHBADiagnosticTest.finalize();
	_dependentRAIDDiagnosticTest.finalize();
	_dependentCPUDiagnosticTest.finalize();
	_dependentEthernetNICDiagnosticTest.finalize();
	_dependentOpticalDriveDiagnosticTest.finalize();
	_dependentOpticalDriveDiagnosticSettingData.finalize();
	_dependentDiskDriveDiagnosticTest.finalize();
	_dependentIBSubnetManager.finalize();
	_dependentObjectManager.finalize();
	_dependentObjectManagerAdapter.finalize();
	_dependentProviderObjectManagerAdapter.finalize();
	_dependentProtocolAdapter.finalize();
	_dependentFileSystemStatisticsService.finalize();
	_dependentBlockStatisticsService.finalize();
	_dependentUSBRedirectionService.finalize();
	_dependentTextRedirectionService.finalize();
	_dependentBGPService.finalize();
	_dependentOSPFService.finalize();
	_dependentNATService.finalize();
	_dependentTransparentBridgingService.finalize();
	_dependentSourceRoutingService.finalize();
	_dependentSpanningTreeService.finalize();
	_dependentSwitchService.finalize();
	_dependentFileExportService.finalize();
	return true;
}


Boolean UNIX_ServiceUsesSecurityService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ServiceUsesSecurityService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceUsesSecurityService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceUsesSecurityService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceUsesSecurityService::validateInstance()
{
	return true;
}

