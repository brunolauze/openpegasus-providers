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


UNIX_ResourcePoolExtentDependency::UNIX_ResourcePoolExtentDependency(void)
{
}

UNIX_ResourcePoolExtentDependency::~UNIX_ResourcePoolExtentDependency(void)
{
}

Boolean UNIX_ResourcePoolExtentDependency::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ResourcePoolExtentDependency::getAntecedent() const
{
	return _antecedent;
}

void UNIX_ResourcePoolExtentDependency::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_ResourcePoolExtentDependency::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ResourcePoolExtentDependency::getDependent() const
{
	return _dependent;
}

void UNIX_ResourcePoolExtentDependency::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_ResourcePoolExtentDependency::clearInstance()
{

	_antecedent = _antecedentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLogicalDisk);
	_dependent = _dependentSqlSchemaProvider.constructInstance(
		CIMName("UNIX_SqlSchema"),
		CIMNamespaceName("root/cimv2"),
		_dependentSqlSchema);

}

Boolean UNIX_ResourcePoolExtentDependency::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_ResourcePoolExtentDependency::initialize()
{
	_antecedentLogicalDisk.initialize();
	_antecedentSnapshot.initialize();
	_antecedentVTOCDiskPartition.initialize();
	_antecedentGPTDiskPartition.initialize();
	_antecedentDiskPartition.initialize();
	_antecedentTapePartition.initialize();
	_antecedentCompositeExtent.initialize();
	_antecedentProtectedSpaceExtent.initialize();
	_antecedentPhysicalExtent.initialize();
	_antecedentDatabaseSegment.initialize();
	_antecedentAggregatePExtent.initialize();
	_antecedentVolumeSet.initialize();
	_antecedentOpaqueManagementData.initialize();
	_antecedentAggregatePSExtent.initialize();
	_antecedentCacheMemory.initialize();
	_antecedentVolatileStorage.initialize();
	_antecedentNonVolatileStorage.initialize();
	_dependentSqlSchema.initialize();
	_dependentSqlTable.initialize();
	_dependentSqlTrigger.initialize();
	_dependentSqlDomain.initialize();
	_dependentSqlDomainConstraint.initialize();
	_dependentSqlUserDefinedType.initialize();
	_dependentHdr8021Filter.initialize();
	_dependentPreambleFilter.initialize();
	_dependentX509CredentialFilterEntry.initialize();
	_dependentPeerIDPayloadFilterEntry.initialize();
	_dependentFilterEntry.initialize();
	_dependentIPHeadersFilter.initialize();
	_dependentIPSOFilterEntry.initialize();
	_dependentAuthenticationRequirement.initialize();
	_dependentDynamicForwardingEntry.initialize();
	_dependentSqlCharacterSet.initialize();
	_dependentMPLSInSegment.initialize();
	_dependentMPLSOutSegment.initialize();
	_dependentNextHopRouting.initialize();
	_dependentIPRoute.initialize();
	_dependentBGPIPRoute.initialize();
	_dependentMPLSLSP.initialize();
	_dependentCommonDatabase.initialize();
	_dependentMPLSTunnel.initialize();
	_dependentReplicationEntity.initialize();
	_dependentPrintQueue.initialize();
	_dependentJobQueue.initialize();
	_dependentReusablePolicyContainer.initialize();
	_dependentPolicyRepository.initialize();
	_dependentAutonomousSystem.initialize();
	_dependentRoutingProtocolDomain.initialize();
	_dependentOSPFArea.initialize();
	_dependentNetwork.initialize();
	_dependentVLANNetwork.initialize();
	_dependentTierDomain.initialize();
	_dependentApplicationSystem.initialize();
	_dependentDatabaseSystem.initialize();
	_dependentStorageLibrary.initialize();
	_dependentVirtualComputerSystem.initialize();
	_dependentCluster.initialize();
	_dependentComputerSystem.initialize();
	_dependentSCSIArbitraryLogicalUnit.initialize();
	_dependentButton.initialize();
	_dependentPowerSupply.initialize();
	_dependentUninterruptiblePowerSupply.initialize();
	_dependentBattery.initialize();
	_dependentTapeDrive.initialize();
	_dependentCDROMDrive.initialize();
	_dependentWORMDrive.initialize();
	_dependentDiskDrive.initialize();
	_dependentDVDDrive.initialize();
	_dependentDisketteDrive.initialize();
	_dependentMagnetoOpticalDrive.initialize();
	_dependentUSBDevice.initialize();
	_dependentUSBHub.initialize();
	_dependentPowerConnectionPoint.initialize();
	_dependentLabelReader.initialize();
	_dependentLogicalDisk.initialize();
	_dependentSnapshot.initialize();
	_dependentVTOCDiskPartition.initialize();
	_dependentGPTDiskPartition.initialize();
	_dependentDiskPartition.initialize();
	_dependentTapePartition.initialize();
	_dependentCompositeExtent.initialize();
	_dependentProtectedSpaceExtent.initialize();
	_dependentPhysicalExtent.initialize();
	_dependentDatabaseSegment.initialize();
	_dependentAggregatePExtent.initialize();
	_dependentVolumeSet.initialize();
	_dependentOpaqueManagementData.initialize();
	_dependentAggregatePSExtent.initialize();
	_dependentCacheMemory.initialize();
	_dependentVolatileStorage.initialize();
	_dependentNonVolatileStorage.initialize();
	_dependentPrinter.initialize();
	_dependentCurrentSensor.initialize();
	_dependentTemperatureSensor.initialize();
	_dependentVoltageSensor.initialize();
	_dependentTachometer.initialize();
	_dependentMultiStateSensor.initialize();
	_dependentBinarySensor.initialize();
	_dependentDiscreteSensor.initialize();
	_dependentCableModem.initialize();
	_dependentADSLModem.initialize();
	_dependentVDSLModem.initialize();
	_dependentHDSLModem.initialize();
	_dependentSDSLModem.initialize();
	_dependentUnimodem.initialize();
	_dependentISDNModem.initialize();
	_dependentKeyboard.initialize();
	_dependentPointingDevice.initialize();
	_dependentDesktopMonitor.initialize();
	_dependentFlatPanel.initialize();
	_dependentProcessor.initialize();
	_dependentVideoHead.initialize();
	_dependentFingerprintReader.initialize();
	_dependentDoor.initialize();
	_dependentSmartCard.initialize();
	_dependentNetworkPort.initialize();
	_dependentWiFiPort.initialize();
	_dependentEthernetPort.initialize();
	_dependentLLDPEthernetPort.initialize();
	_dependentDataCenterEthernetPort.initialize();
	_dependentSASPort.initialize();
	_dependentIBPort.initialize();
	_dependentFCPort.initialize();
	_dependentWirelessPort.initialize();
	_dependentTokenRingPort.initialize();
	_dependentDAPort.initialize();
	_dependentSerialPort.initialize();
	_dependentATAPort.initialize();
	_dependentUSBPort.initialize();
	_dependentPCIPort.initialize();
	_dependentSPIPort.initialize();
	_dependentParallelPort.initialize();
	_dependentFibrePort.initialize();
	_dependentWatchdog.initialize();
	_dependentEthernetAdapter.initialize();
	_dependentTokenRingAdapter.initialize();
	_dependentFibreChannelAdapter.initialize();
	_dependentIndicatorLED.initialize();
	_dependentElectricalSwitch.initialize();
	_dependentProtocolController.initialize();
	_dependentSCSIProtocolController.initialize();
	_dependentWiFiRadio.initialize();
	_dependentInterLibraryPort.initialize();
	_dependentLimitedAccessPort.initialize();
	_dependentSmartCardReader.initialize();
	_dependentPCIBridge.initialize();
	_dependentPCIeSwitch.initialize();
	_dependentPortController.initialize();
	_dependentIBPortController.initialize();
	_dependentParallelController.initialize();
	_dependentInfraredController.initialize();
	_dependentManagementController.initialize();
	_dependentSSAController.initialize();
	_dependentAGPVideoController.initialize();
	_dependentPCVideoController.initialize();
	_dependentSerialController.initialize();
	_dependentDisplayController.initialize();
	_dependentAGPVideoDisplayController.initialize();
	_dependentUSBController.initialize();
	_dependentIDEController.initialize();
	_dependentPCMCIAController.initialize();
	_dependentSCSIController.initialize();
	_dependentESCONController.initialize();
	_dependentDeviceTray.initialize();
	_dependentPassThroughModule.initialize();
	_dependentAlarmDevice.initialize();
	_dependentFan.initialize();
	_dependentRefrigeration.initialize();
	_dependentHeatPipe.initialize();
	_dependentTPM.initialize();
	_dependentScanner.initialize();
	_dependentProvider.initialize();
	_dependentIRQ.initialize();
	_dependentPortResource.initialize();
	_dependentMemoryResource.initialize();
	_dependentDMA.initialize();
	_dependentNFSShare.initialize();
	_dependentCIFSShare.initialize();
	_dependentMessageLog.initialize();
	_dependentDiagnosticLog.initialize();
	_dependentDiagnosticsLog.initialize();
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
	_dependentOperatingSystem.initialize();
	_dependentSWRFile.initialize();
	_dependentSWRPEP.initialize();
	_dependentSWRDatabase.initialize();
	_dependentProviderLibrary.initialize();
	_dependentClusteringSAP.initialize();
	_dependentCredentialManagementSAP.initialize();
	_dependentUSBRedirectionSAP.initialize();
	_dependentIPNetworkConnection.initialize();
	_dependentPolicyTransferServiceAccessPoint.initialize();
	_dependentLaunchInContextSAP.initialize();
	_dependentRemotePort.initialize();
	_dependentMPLSTunnelHop.initialize();
	_dependentSoftwareIdentityResource.initialize();
	_dependentKVMRedirectionSAP.initialize();
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
	_dependentBatchSAP.initialize();
	_dependentTextRedirectionSAP.initialize();
	_dependentMediaRedirectionSAP.initialize();
	_dependentPrintSAP.initialize();
	_dependentServiceAccessURI.initialize();
	_dependentObjectManagerCommunicationMechanism.initialize();
	_dependentCIMXMLCommunicationMechanism.initialize();
	_dependentVLAN.initialize();
	_dependentBootSAP.initialize();
	_dependentProcess.initialize();
	_dependentProcessorCore.initialize();
	_dependentiSCSISession.initialize();
	_dependentiSCSIConnection.initialize();
	_dependentHardwareThread.initialize();
	_dependentFileSystem.initialize();
	_dependentDatabaseStorageArea.initialize();
	_dependentLocalFileSystem.initialize();
	_dependentRemoteFileSystem.initialize();
	_dependentNFS.initialize();
	_dependentThread.initialize();
	_dependentAccount.initialize();
	_dependentBGPAttributes.initialize();
	_dependentResourcePool.initialize();
	_dependentStoragePool.initialize();
	_dependentAdministrativeDistance.initialize();
	_dependentSoftwareFeature.initialize();
	_dependentVideoBIOSFeature.initialize();
	_dependentBIOSFeature.initialize();
	_dependentAGPSoftwareFeature.initialize();
	_dependentBGPRouteMap.initialize();
	_dependentOSPFAreaConfiguration.initialize();
	_dependentFIFOPipeFile.initialize();
	_dependentDirectory.initialize();
	_dependentDataFile.initialize();
	_dependentSymbolicLink.initialize();
	_dependentDeviceFile.initialize();
	_dependentSpareGroup.initialize();
	_dependentExtraCapacityGroup.initialize();
	_dependentStorageRedundancyGroup.initialize();
	_dependentAccessControlInformation.initialize();
	_dependentPrintFinisher.initialize();
	_dependentPrintMarker.initialize();
	_dependentPrintSupply.initialize();
	_dependentPrintInterlock.initialize();
	_dependentPrintChannel.initialize();
	_dependentPrintInputTray.initialize();
	_dependentPrintOutputTray.initialize();
	_dependentPrintInterpreter.initialize();
	_dependentPrintMediaPath.initialize();
	_dependentSoftwareIdentity.initialize();
	_dependentSoftwareElement.initialize();
	_dependentBIOSElement.initialize();
	_dependentVideoBIOSElement.initialize();
	_dependentConcreteJob.initialize();
	_dependentBatchJob.initialize();
	_dependentPrintJob.initialize();
	_dependentFilterList.initialize();
	_dependentRoutingPolicy.initialize();
	_dependentStaticForwardingEntry.initialize();
	_dependentFile.initialize();
	_dependentBGPPathAttributes.initialize();
	return true;
}
Boolean UNIX_ResourcePoolExtentDependency::load(int &pIndex)
{

	_antecedent = _antecedentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLogicalDisk);
	_dependent = _dependentSqlSchemaProvider.constructInstance(
		CIMName("UNIX_SqlSchema"),
		CIMNamespaceName("root/cimv2"),
		_dependentSqlSchema);

	return false;
}

Boolean UNIX_ResourcePoolExtentDependency::finalize()
{
	_antecedentLogicalDisk.finalize();
	_antecedentSnapshot.finalize();
	_antecedentVTOCDiskPartition.finalize();
	_antecedentGPTDiskPartition.finalize();
	_antecedentDiskPartition.finalize();
	_antecedentTapePartition.finalize();
	_antecedentCompositeExtent.finalize();
	_antecedentProtectedSpaceExtent.finalize();
	_antecedentPhysicalExtent.finalize();
	_antecedentDatabaseSegment.finalize();
	_antecedentAggregatePExtent.finalize();
	_antecedentVolumeSet.finalize();
	_antecedentOpaqueManagementData.finalize();
	_antecedentAggregatePSExtent.finalize();
	_antecedentCacheMemory.finalize();
	_antecedentVolatileStorage.finalize();
	_antecedentNonVolatileStorage.finalize();
	_dependentSqlSchema.finalize();
	_dependentSqlTable.finalize();
	_dependentSqlTrigger.finalize();
	_dependentSqlDomain.finalize();
	_dependentSqlDomainConstraint.finalize();
	_dependentSqlUserDefinedType.finalize();
	_dependentHdr8021Filter.finalize();
	_dependentPreambleFilter.finalize();
	_dependentX509CredentialFilterEntry.finalize();
	_dependentPeerIDPayloadFilterEntry.finalize();
	_dependentFilterEntry.finalize();
	_dependentIPHeadersFilter.finalize();
	_dependentIPSOFilterEntry.finalize();
	_dependentAuthenticationRequirement.finalize();
	_dependentDynamicForwardingEntry.finalize();
	_dependentSqlCharacterSet.finalize();
	_dependentMPLSInSegment.finalize();
	_dependentMPLSOutSegment.finalize();
	_dependentNextHopRouting.finalize();
	_dependentIPRoute.finalize();
	_dependentBGPIPRoute.finalize();
	_dependentMPLSLSP.finalize();
	_dependentCommonDatabase.finalize();
	_dependentMPLSTunnel.finalize();
	_dependentReplicationEntity.finalize();
	_dependentPrintQueue.finalize();
	_dependentJobQueue.finalize();
	_dependentReusablePolicyContainer.finalize();
	_dependentPolicyRepository.finalize();
	_dependentAutonomousSystem.finalize();
	_dependentRoutingProtocolDomain.finalize();
	_dependentOSPFArea.finalize();
	_dependentNetwork.finalize();
	_dependentVLANNetwork.finalize();
	_dependentTierDomain.finalize();
	_dependentApplicationSystem.finalize();
	_dependentDatabaseSystem.finalize();
	_dependentStorageLibrary.finalize();
	_dependentVirtualComputerSystem.finalize();
	_dependentCluster.finalize();
	_dependentComputerSystem.finalize();
	_dependentSCSIArbitraryLogicalUnit.finalize();
	_dependentButton.finalize();
	_dependentPowerSupply.finalize();
	_dependentUninterruptiblePowerSupply.finalize();
	_dependentBattery.finalize();
	_dependentTapeDrive.finalize();
	_dependentCDROMDrive.finalize();
	_dependentWORMDrive.finalize();
	_dependentDiskDrive.finalize();
	_dependentDVDDrive.finalize();
	_dependentDisketteDrive.finalize();
	_dependentMagnetoOpticalDrive.finalize();
	_dependentUSBDevice.finalize();
	_dependentUSBHub.finalize();
	_dependentPowerConnectionPoint.finalize();
	_dependentLabelReader.finalize();
	_dependentLogicalDisk.finalize();
	_dependentSnapshot.finalize();
	_dependentVTOCDiskPartition.finalize();
	_dependentGPTDiskPartition.finalize();
	_dependentDiskPartition.finalize();
	_dependentTapePartition.finalize();
	_dependentCompositeExtent.finalize();
	_dependentProtectedSpaceExtent.finalize();
	_dependentPhysicalExtent.finalize();
	_dependentDatabaseSegment.finalize();
	_dependentAggregatePExtent.finalize();
	_dependentVolumeSet.finalize();
	_dependentOpaqueManagementData.finalize();
	_dependentAggregatePSExtent.finalize();
	_dependentCacheMemory.finalize();
	_dependentVolatileStorage.finalize();
	_dependentNonVolatileStorage.finalize();
	_dependentPrinter.finalize();
	_dependentCurrentSensor.finalize();
	_dependentTemperatureSensor.finalize();
	_dependentVoltageSensor.finalize();
	_dependentTachometer.finalize();
	_dependentMultiStateSensor.finalize();
	_dependentBinarySensor.finalize();
	_dependentDiscreteSensor.finalize();
	_dependentCableModem.finalize();
	_dependentADSLModem.finalize();
	_dependentVDSLModem.finalize();
	_dependentHDSLModem.finalize();
	_dependentSDSLModem.finalize();
	_dependentUnimodem.finalize();
	_dependentISDNModem.finalize();
	_dependentKeyboard.finalize();
	_dependentPointingDevice.finalize();
	_dependentDesktopMonitor.finalize();
	_dependentFlatPanel.finalize();
	_dependentProcessor.finalize();
	_dependentVideoHead.finalize();
	_dependentFingerprintReader.finalize();
	_dependentDoor.finalize();
	_dependentSmartCard.finalize();
	_dependentNetworkPort.finalize();
	_dependentWiFiPort.finalize();
	_dependentEthernetPort.finalize();
	_dependentLLDPEthernetPort.finalize();
	_dependentDataCenterEthernetPort.finalize();
	_dependentSASPort.finalize();
	_dependentIBPort.finalize();
	_dependentFCPort.finalize();
	_dependentWirelessPort.finalize();
	_dependentTokenRingPort.finalize();
	_dependentDAPort.finalize();
	_dependentSerialPort.finalize();
	_dependentATAPort.finalize();
	_dependentUSBPort.finalize();
	_dependentPCIPort.finalize();
	_dependentSPIPort.finalize();
	_dependentParallelPort.finalize();
	_dependentFibrePort.finalize();
	_dependentWatchdog.finalize();
	_dependentEthernetAdapter.finalize();
	_dependentTokenRingAdapter.finalize();
	_dependentFibreChannelAdapter.finalize();
	_dependentIndicatorLED.finalize();
	_dependentElectricalSwitch.finalize();
	_dependentProtocolController.finalize();
	_dependentSCSIProtocolController.finalize();
	_dependentWiFiRadio.finalize();
	_dependentInterLibraryPort.finalize();
	_dependentLimitedAccessPort.finalize();
	_dependentSmartCardReader.finalize();
	_dependentPCIBridge.finalize();
	_dependentPCIeSwitch.finalize();
	_dependentPortController.finalize();
	_dependentIBPortController.finalize();
	_dependentParallelController.finalize();
	_dependentInfraredController.finalize();
	_dependentManagementController.finalize();
	_dependentSSAController.finalize();
	_dependentAGPVideoController.finalize();
	_dependentPCVideoController.finalize();
	_dependentSerialController.finalize();
	_dependentDisplayController.finalize();
	_dependentAGPVideoDisplayController.finalize();
	_dependentUSBController.finalize();
	_dependentIDEController.finalize();
	_dependentPCMCIAController.finalize();
	_dependentSCSIController.finalize();
	_dependentESCONController.finalize();
	_dependentDeviceTray.finalize();
	_dependentPassThroughModule.finalize();
	_dependentAlarmDevice.finalize();
	_dependentFan.finalize();
	_dependentRefrigeration.finalize();
	_dependentHeatPipe.finalize();
	_dependentTPM.finalize();
	_dependentScanner.finalize();
	_dependentProvider.finalize();
	_dependentIRQ.finalize();
	_dependentPortResource.finalize();
	_dependentMemoryResource.finalize();
	_dependentDMA.finalize();
	_dependentNFSShare.finalize();
	_dependentCIFSShare.finalize();
	_dependentMessageLog.finalize();
	_dependentDiagnosticLog.finalize();
	_dependentDiagnosticsLog.finalize();
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
	_dependentOperatingSystem.finalize();
	_dependentSWRFile.finalize();
	_dependentSWRPEP.finalize();
	_dependentSWRDatabase.finalize();
	_dependentProviderLibrary.finalize();
	_dependentClusteringSAP.finalize();
	_dependentCredentialManagementSAP.finalize();
	_dependentUSBRedirectionSAP.finalize();
	_dependentIPNetworkConnection.finalize();
	_dependentPolicyTransferServiceAccessPoint.finalize();
	_dependentLaunchInContextSAP.finalize();
	_dependentRemotePort.finalize();
	_dependentMPLSTunnelHop.finalize();
	_dependentSoftwareIdentityResource.finalize();
	_dependentKVMRedirectionSAP.finalize();
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
	_dependentBatchSAP.finalize();
	_dependentTextRedirectionSAP.finalize();
	_dependentMediaRedirectionSAP.finalize();
	_dependentPrintSAP.finalize();
	_dependentServiceAccessURI.finalize();
	_dependentObjectManagerCommunicationMechanism.finalize();
	_dependentCIMXMLCommunicationMechanism.finalize();
	_dependentVLAN.finalize();
	_dependentBootSAP.finalize();
	_dependentProcess.finalize();
	_dependentProcessorCore.finalize();
	_dependentiSCSISession.finalize();
	_dependentiSCSIConnection.finalize();
	_dependentHardwareThread.finalize();
	_dependentFileSystem.finalize();
	_dependentDatabaseStorageArea.finalize();
	_dependentLocalFileSystem.finalize();
	_dependentRemoteFileSystem.finalize();
	_dependentNFS.finalize();
	_dependentThread.finalize();
	_dependentAccount.finalize();
	_dependentBGPAttributes.finalize();
	_dependentResourcePool.finalize();
	_dependentStoragePool.finalize();
	_dependentAdministrativeDistance.finalize();
	_dependentSoftwareFeature.finalize();
	_dependentVideoBIOSFeature.finalize();
	_dependentBIOSFeature.finalize();
	_dependentAGPSoftwareFeature.finalize();
	_dependentBGPRouteMap.finalize();
	_dependentOSPFAreaConfiguration.finalize();
	_dependentFIFOPipeFile.finalize();
	_dependentDirectory.finalize();
	_dependentDataFile.finalize();
	_dependentSymbolicLink.finalize();
	_dependentDeviceFile.finalize();
	_dependentSpareGroup.finalize();
	_dependentExtraCapacityGroup.finalize();
	_dependentStorageRedundancyGroup.finalize();
	_dependentAccessControlInformation.finalize();
	_dependentPrintFinisher.finalize();
	_dependentPrintMarker.finalize();
	_dependentPrintSupply.finalize();
	_dependentPrintInterlock.finalize();
	_dependentPrintChannel.finalize();
	_dependentPrintInputTray.finalize();
	_dependentPrintOutputTray.finalize();
	_dependentPrintInterpreter.finalize();
	_dependentPrintMediaPath.finalize();
	_dependentSoftwareIdentity.finalize();
	_dependentSoftwareElement.finalize();
	_dependentBIOSElement.finalize();
	_dependentVideoBIOSElement.finalize();
	_dependentConcreteJob.finalize();
	_dependentBatchJob.finalize();
	_dependentPrintJob.finalize();
	_dependentFilterList.finalize();
	_dependentRoutingPolicy.finalize();
	_dependentStaticForwardingEntry.finalize();
	_dependentFile.finalize();
	_dependentBGPPathAttributes.finalize();
	return true;
}


Boolean UNIX_ResourcePoolExtentDependency::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ResourcePoolExtentDependency::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ResourcePoolExtentDependency::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ResourcePoolExtentDependency::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ResourcePoolExtentDependency::validateInstance()
{
	return true;
}

