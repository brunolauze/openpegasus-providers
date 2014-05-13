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


UNIX_SharingDependency::UNIX_SharingDependency(void)
{
}

UNIX_SharingDependency::~UNIX_SharingDependency(void)
{
}

Boolean UNIX_SharingDependency::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SharingDependency::getAntecedent() const
{
	return _antecedent;
}

void UNIX_SharingDependency::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_SharingDependency::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SharingDependency::getDependent() const
{
	return _dependent;
}

void UNIX_SharingDependency::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_SharingDependency::getCurrentAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_ACCESS, getCurrentAccess());
	return true;
}

Uint16 UNIX_SharingDependency::getCurrentAccess() const
{
	return _currentAccess;
}

void UNIX_SharingDependency::setCurrentAccess(Uint16 &value)
{
	_currentAccess = value;
}

Boolean UNIX_SharingDependency::getOtherCurrentAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CURRENT_ACCESS, getOtherCurrentAccess());
	return true;
}

String UNIX_SharingDependency::getOtherCurrentAccess() const
{
	return _otherCurrentAccess;
}

void UNIX_SharingDependency::setOtherCurrentAccess(String &value)
{
	_otherCurrentAccess = value;
}


void UNIX_SharingDependency::clearInstance()
{

	_antecedent = _antecedentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSCSIArbitraryLogicalUnit);
	_dependent = _dependentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_dependentSCSIArbitraryLogicalUnit);
	_currentAccess = Uint16(0);
	_otherCurrentAccess = String ("");

}

Boolean UNIX_SharingDependency::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentAccess"))
			{
				Uint16 currentAccessValue;
				property.getValue().get(currentAccessValue);
				setCurrentAccess(currentAccessValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCurrentAccess"))
			{
				String otherCurrentAccessValue;
				property.getValue().get(otherCurrentAccessValue);
				setOtherCurrentAccess(otherCurrentAccessValue);
			}
	}
	return true;
}


Boolean UNIX_SharingDependency::initialize()
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
	return true;
}
Boolean UNIX_SharingDependency::load(int &pIndex)
{

	_antecedent = _antecedentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSCSIArbitraryLogicalUnit);
	_dependent = _dependentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_dependentSCSIArbitraryLogicalUnit);
	_currentAccess = Uint16(0);
	_otherCurrentAccess = String ("");

	return false;
}

Boolean UNIX_SharingDependency::finalize()
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
	return true;
}


Boolean UNIX_SharingDependency::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SharingDependency::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharingDependency::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharingDependency::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharingDependency::validateInstance()
{
	return true;
}

