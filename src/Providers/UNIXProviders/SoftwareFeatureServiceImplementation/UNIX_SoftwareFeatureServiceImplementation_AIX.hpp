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


UNIX_SoftwareFeatureServiceImplementation::UNIX_SoftwareFeatureServiceImplementation(void)
{
}

UNIX_SoftwareFeatureServiceImplementation::~UNIX_SoftwareFeatureServiceImplementation(void)
{
}

Boolean UNIX_SoftwareFeatureServiceImplementation::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SoftwareFeatureServiceImplementation::getAntecedent() const
{
	return _antecedent;
}

void UNIX_SoftwareFeatureServiceImplementation::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_SoftwareFeatureServiceImplementation::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SoftwareFeatureServiceImplementation::getDependent() const
{
	return _dependent;
}

void UNIX_SoftwareFeatureServiceImplementation::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_SoftwareFeatureServiceImplementation::clearInstance()
{

	// _antecedent = CIMInstance(CIMName("CIM_SoftwareFeature"));
	_dependent = _dependentFibreProtocolServiceProvider.constructInstance(
		CIMName("UNIX_FibreProtocolService"),
		CIMNamespaceName("root/cimv2"),
		_dependentFibreProtocolService);

}

Boolean UNIX_SoftwareFeatureServiceImplementation::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_SoftwareFeatureServiceImplementation::initialize()
{
	/* Related Instances are Abstract */
	return false;
	return true;
}
Boolean UNIX_SoftwareFeatureServiceImplementation::load(int &pIndex)
{

	// _antecedent = CIMInstance(CIMName("CIM_SoftwareFeature"));
	_dependent = _dependentFibreProtocolServiceProvider.constructInstance(
		CIMName("UNIX_FibreProtocolService"),
		CIMNamespaceName("root/cimv2"),
		_dependentFibreProtocolService);

	return false;
}

Boolean UNIX_SoftwareFeatureServiceImplementation::finalize()
{
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


Boolean UNIX_SoftwareFeatureServiceImplementation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SoftwareFeatureServiceImplementation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareFeatureServiceImplementation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareFeatureServiceImplementation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareFeatureServiceImplementation::validateInstance()
{
	return true;
}

