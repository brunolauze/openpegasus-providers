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


UNIX_DeviceSAPImplementation::UNIX_DeviceSAPImplementation(void)
{
}

UNIX_DeviceSAPImplementation::~UNIX_DeviceSAPImplementation(void)
{
}

Boolean UNIX_DeviceSAPImplementation::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_DeviceSAPImplementation::getAntecedent() const
{
	return _antecedent;
}

void UNIX_DeviceSAPImplementation::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_DeviceSAPImplementation::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_DeviceSAPImplementation::getDependent() const
{
	return _dependent;
}

void UNIX_DeviceSAPImplementation::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_DeviceSAPImplementation::clearInstance()
{

	_antecedent = _antecedentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSCSIArbitraryLogicalUnit);
	_dependent = _dependentClusteringSAPProvider.constructInstance(
		CIMName("UNIX_ClusteringSAP"),
		CIMNamespaceName("root/cimv2"),
		_dependentClusteringSAP);

}

Boolean UNIX_DeviceSAPImplementation::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_DeviceSAPImplementation::initialize()
{
	_antecedentSCSIArbitraryLogicalUnit.initialize();
	_antecedentButton.initialize();
	_antecedentPowerSupply.initialize();
	_antecedentUninterruptiblePowerSupply.initialize();
	_antecedentBattery.initialize();
	_antecedentTapeDrive.initialize();
	_antecedentCDROMDrive.initialize();
	_antecedentWORMDrive.initialize();
	_antecedentDiskDrive.initialize();
	_antecedentDVDDrive.initialize();
	_antecedentDisketteDrive.initialize();
	_antecedentMagnetoOpticalDrive.initialize();
	_antecedentUSBDevice.initialize();
	_antecedentUSBHub.initialize();
	_antecedentPowerConnectionPoint.initialize();
	_antecedentLabelReader.initialize();
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
	_antecedentPrinter.initialize();
	_antecedentCurrentSensor.initialize();
	_antecedentTemperatureSensor.initialize();
	_antecedentVoltageSensor.initialize();
	_antecedentTachometer.initialize();
	_antecedentMultiStateSensor.initialize();
	_antecedentBinarySensor.initialize();
	_antecedentDiscreteSensor.initialize();
	_antecedentCableModem.initialize();
	_antecedentADSLModem.initialize();
	_antecedentVDSLModem.initialize();
	_antecedentHDSLModem.initialize();
	_antecedentSDSLModem.initialize();
	_antecedentUnimodem.initialize();
	_antecedentISDNModem.initialize();
	_antecedentKeyboard.initialize();
	_antecedentPointingDevice.initialize();
	_antecedentDesktopMonitor.initialize();
	_antecedentFlatPanel.initialize();
	_antecedentProcessor.initialize();
	_antecedentVideoHead.initialize();
	_antecedentFingerprintReader.initialize();
	_antecedentDoor.initialize();
	_antecedentSmartCard.initialize();
	_antecedentNetworkPort.initialize();
	_antecedentWiFiPort.initialize();
	_antecedentEthernetPort.initialize();
	_antecedentLLDPEthernetPort.initialize();
	_antecedentDataCenterEthernetPort.initialize();
	_antecedentSASPort.initialize();
	_antecedentIBPort.initialize();
	_antecedentFCPort.initialize();
	_antecedentWirelessPort.initialize();
	_antecedentTokenRingPort.initialize();
	_antecedentDAPort.initialize();
	_antecedentSerialPort.initialize();
	_antecedentATAPort.initialize();
	_antecedentUSBPort.initialize();
	_antecedentPCIPort.initialize();
	_antecedentSPIPort.initialize();
	_antecedentParallelPort.initialize();
	_antecedentFibrePort.initialize();
	_antecedentWatchdog.initialize();
	_antecedentEthernetAdapter.initialize();
	_antecedentTokenRingAdapter.initialize();
	_antecedentFibreChannelAdapter.initialize();
	_antecedentIndicatorLED.initialize();
	_antecedentElectricalSwitch.initialize();
	_antecedentProtocolController.initialize();
	_antecedentSCSIProtocolController.initialize();
	_antecedentWiFiRadio.initialize();
	_antecedentInterLibraryPort.initialize();
	_antecedentLimitedAccessPort.initialize();
	_antecedentSmartCardReader.initialize();
	_antecedentPCIBridge.initialize();
	_antecedentPCIeSwitch.initialize();
	_antecedentPortController.initialize();
	_antecedentIBPortController.initialize();
	_antecedentParallelController.initialize();
	_antecedentInfraredController.initialize();
	_antecedentManagementController.initialize();
	_antecedentSSAController.initialize();
	_antecedentAGPVideoController.initialize();
	_antecedentPCVideoController.initialize();
	_antecedentSerialController.initialize();
	_antecedentDisplayController.initialize();
	_antecedentAGPVideoDisplayController.initialize();
	_antecedentUSBController.initialize();
	_antecedentIDEController.initialize();
	_antecedentPCMCIAController.initialize();
	_antecedentSCSIController.initialize();
	_antecedentESCONController.initialize();
	_antecedentDeviceTray.initialize();
	_antecedentPassThroughModule.initialize();
	_antecedentAlarmDevice.initialize();
	_antecedentFan.initialize();
	_antecedentRefrigeration.initialize();
	_antecedentHeatPipe.initialize();
	_antecedentTPM.initialize();
	_antecedentScanner.initialize();
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
	return true;
}
Boolean UNIX_DeviceSAPImplementation::load(int &pIndex)
{

	_antecedent = _antecedentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSCSIArbitraryLogicalUnit);
	_dependent = _dependentClusteringSAPProvider.constructInstance(
		CIMName("UNIX_ClusteringSAP"),
		CIMNamespaceName("root/cimv2"),
		_dependentClusteringSAP);

	return false;
}

Boolean UNIX_DeviceSAPImplementation::finalize()
{
	_antecedentSCSIArbitraryLogicalUnit.finalize();
	_antecedentButton.finalize();
	_antecedentPowerSupply.finalize();
	_antecedentUninterruptiblePowerSupply.finalize();
	_antecedentBattery.finalize();
	_antecedentTapeDrive.finalize();
	_antecedentCDROMDrive.finalize();
	_antecedentWORMDrive.finalize();
	_antecedentDiskDrive.finalize();
	_antecedentDVDDrive.finalize();
	_antecedentDisketteDrive.finalize();
	_antecedentMagnetoOpticalDrive.finalize();
	_antecedentUSBDevice.finalize();
	_antecedentUSBHub.finalize();
	_antecedentPowerConnectionPoint.finalize();
	_antecedentLabelReader.finalize();
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
	_antecedentPrinter.finalize();
	_antecedentCurrentSensor.finalize();
	_antecedentTemperatureSensor.finalize();
	_antecedentVoltageSensor.finalize();
	_antecedentTachometer.finalize();
	_antecedentMultiStateSensor.finalize();
	_antecedentBinarySensor.finalize();
	_antecedentDiscreteSensor.finalize();
	_antecedentCableModem.finalize();
	_antecedentADSLModem.finalize();
	_antecedentVDSLModem.finalize();
	_antecedentHDSLModem.finalize();
	_antecedentSDSLModem.finalize();
	_antecedentUnimodem.finalize();
	_antecedentISDNModem.finalize();
	_antecedentKeyboard.finalize();
	_antecedentPointingDevice.finalize();
	_antecedentDesktopMonitor.finalize();
	_antecedentFlatPanel.finalize();
	_antecedentProcessor.finalize();
	_antecedentVideoHead.finalize();
	_antecedentFingerprintReader.finalize();
	_antecedentDoor.finalize();
	_antecedentSmartCard.finalize();
	_antecedentNetworkPort.finalize();
	_antecedentWiFiPort.finalize();
	_antecedentEthernetPort.finalize();
	_antecedentLLDPEthernetPort.finalize();
	_antecedentDataCenterEthernetPort.finalize();
	_antecedentSASPort.finalize();
	_antecedentIBPort.finalize();
	_antecedentFCPort.finalize();
	_antecedentWirelessPort.finalize();
	_antecedentTokenRingPort.finalize();
	_antecedentDAPort.finalize();
	_antecedentSerialPort.finalize();
	_antecedentATAPort.finalize();
	_antecedentUSBPort.finalize();
	_antecedentPCIPort.finalize();
	_antecedentSPIPort.finalize();
	_antecedentParallelPort.finalize();
	_antecedentFibrePort.finalize();
	_antecedentWatchdog.finalize();
	_antecedentEthernetAdapter.finalize();
	_antecedentTokenRingAdapter.finalize();
	_antecedentFibreChannelAdapter.finalize();
	_antecedentIndicatorLED.finalize();
	_antecedentElectricalSwitch.finalize();
	_antecedentProtocolController.finalize();
	_antecedentSCSIProtocolController.finalize();
	_antecedentWiFiRadio.finalize();
	_antecedentInterLibraryPort.finalize();
	_antecedentLimitedAccessPort.finalize();
	_antecedentSmartCardReader.finalize();
	_antecedentPCIBridge.finalize();
	_antecedentPCIeSwitch.finalize();
	_antecedentPortController.finalize();
	_antecedentIBPortController.finalize();
	_antecedentParallelController.finalize();
	_antecedentInfraredController.finalize();
	_antecedentManagementController.finalize();
	_antecedentSSAController.finalize();
	_antecedentAGPVideoController.finalize();
	_antecedentPCVideoController.finalize();
	_antecedentSerialController.finalize();
	_antecedentDisplayController.finalize();
	_antecedentAGPVideoDisplayController.finalize();
	_antecedentUSBController.finalize();
	_antecedentIDEController.finalize();
	_antecedentPCMCIAController.finalize();
	_antecedentSCSIController.finalize();
	_antecedentESCONController.finalize();
	_antecedentDeviceTray.finalize();
	_antecedentPassThroughModule.finalize();
	_antecedentAlarmDevice.finalize();
	_antecedentFan.finalize();
	_antecedentRefrigeration.finalize();
	_antecedentHeatPipe.finalize();
	_antecedentTPM.finalize();
	_antecedentScanner.finalize();
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
	return true;
}


Boolean UNIX_DeviceSAPImplementation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DeviceSAPImplementation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSAPImplementation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSAPImplementation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSAPImplementation::validateInstance()
{
	return true;
}

