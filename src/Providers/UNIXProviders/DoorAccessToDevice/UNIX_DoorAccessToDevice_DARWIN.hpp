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


UNIX_DoorAccessToDevice::UNIX_DoorAccessToDevice(void)
{
}

UNIX_DoorAccessToDevice::~UNIX_DoorAccessToDevice(void)
{
}

Boolean UNIX_DoorAccessToDevice::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_DoorAccessToDevice::getAntecedent() const
{
	return _antecedent;
}

void UNIX_DoorAccessToDevice::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_DoorAccessToDevice::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_DoorAccessToDevice::getDependent() const
{
	return _dependent;
}

void UNIX_DoorAccessToDevice::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_DoorAccessToDevice::clearInstance()
{

	_antecedent = _antecedentDoorProvider.constructInstance(
		CIMName("UNIX_Door"),
		CIMNamespaceName("root/cimv2"),
		_antecedentDoor);
	_dependent = _dependentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_dependentSCSIArbitraryLogicalUnit);

}

Boolean UNIX_DoorAccessToDevice::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_DoorAccessToDevice::initialize()
{
	_antecedentDoor.initialize();
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
Boolean UNIX_DoorAccessToDevice::load(int &pIndex)
{

	_antecedent = _antecedentDoorProvider.constructInstance(
		CIMName("UNIX_Door"),
		CIMNamespaceName("root/cimv2"),
		_antecedentDoor);
	_dependent = _dependentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_dependentSCSIArbitraryLogicalUnit);

	return false;
}

Boolean UNIX_DoorAccessToDevice::finalize()
{
	_antecedentDoor.finalize();
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


Boolean UNIX_DoorAccessToDevice::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DoorAccessToDevice::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DoorAccessToDevice::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DoorAccessToDevice::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DoorAccessToDevice::validateInstance()
{
	return true;
}

