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


UNIX_SCSIInterface::UNIX_SCSIInterface(void)
{
}

UNIX_SCSIInterface::~UNIX_SCSIInterface(void)
{
}

Boolean UNIX_SCSIInterface::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SCSIInterface::getAntecedent() const
{
	return _antecedent;
}

void UNIX_SCSIInterface::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_SCSIInterface::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SCSIInterface::getDependent() const
{
	return _dependent;
}

void UNIX_SCSIInterface::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_SCSIInterface::getNegotiatedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_SPEED, getNegotiatedSpeed());
	return true;
}

Uint64 UNIX_SCSIInterface::getNegotiatedSpeed() const
{
	return _negotiatedSpeed;
}

void UNIX_SCSIInterface::setNegotiatedSpeed(Uint64 &value)
{
	_negotiatedSpeed = value;
}

Boolean UNIX_SCSIInterface::getNegotiatedDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_DATA_WIDTH, getNegotiatedDataWidth());
	return true;
}

Uint32 UNIX_SCSIInterface::getNegotiatedDataWidth() const
{
	return _negotiatedDataWidth;
}

void UNIX_SCSIInterface::setNegotiatedDataWidth(Uint32 &value)
{
	_negotiatedDataWidth = value;
}

Boolean UNIX_SCSIInterface::getAccessState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_STATE, getAccessState());
	return true;
}

Uint16 UNIX_SCSIInterface::getAccessState() const
{
	return _accessState;
}

void UNIX_SCSIInterface::setAccessState(Uint16 &value)
{
	_accessState = value;
}

Boolean UNIX_SCSIInterface::getTimeOfDeviceReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_DEVICE_RESET, getTimeOfDeviceReset());
	return true;
}

CIMDateTime UNIX_SCSIInterface::getTimeOfDeviceReset() const
{
	return _timeOfDeviceReset;
}

void UNIX_SCSIInterface::setTimeOfDeviceReset(CIMDateTime &value)
{
	_timeOfDeviceReset = value;
}

Boolean UNIX_SCSIInterface::getNumberOfHardResets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_HARD_RESETS, getNumberOfHardResets());
	return true;
}

Uint32 UNIX_SCSIInterface::getNumberOfHardResets() const
{
	return _numberOfHardResets;
}

void UNIX_SCSIInterface::setNumberOfHardResets(Uint32 &value)
{
	_numberOfHardResets = value;
}

Boolean UNIX_SCSIInterface::getNumberOfSoftResets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_SOFT_RESETS, getNumberOfSoftResets());
	return true;
}

Uint32 UNIX_SCSIInterface::getNumberOfSoftResets() const
{
	return _numberOfSoftResets;
}

void UNIX_SCSIInterface::setNumberOfSoftResets(Uint32 &value)
{
	_numberOfSoftResets = value;
}

Boolean UNIX_SCSIInterface::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

String UNIX_SCSIInterface::getDeviceNumber() const
{
	return _deviceNumber;
}

void UNIX_SCSIInterface::setDeviceNumber(String &value)
{
	_deviceNumber = value;
}

Boolean UNIX_SCSIInterface::getAccessMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_MODE, getAccessMode());
	return true;
}

Uint16 UNIX_SCSIInterface::getAccessMode() const
{
	return _accessMode;
}

void UNIX_SCSIInterface::setAccessMode(Uint16 &value)
{
	_accessMode = value;
}

Boolean UNIX_SCSIInterface::getAccessPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_PRIORITY, getAccessPriority());
	return true;
}

Uint16 UNIX_SCSIInterface::getAccessPriority() const
{
	return _accessPriority;
}

void UNIX_SCSIInterface::setAccessPriority(Uint16 &value)
{
	_accessPriority = value;
}

Boolean UNIX_SCSIInterface::getSCSITimeouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_CS_I_TIMEOUTS, getSCSITimeouts());
	return true;
}

Uint32 UNIX_SCSIInterface::getSCSITimeouts() const
{
	return _sCSITimeouts;
}

void UNIX_SCSIInterface::setSCSITimeouts(Uint32 &value)
{
	_sCSITimeouts = value;
}

Boolean UNIX_SCSIInterface::getSCSIRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_CS_I_RETRIES, getSCSIRetries());
	return true;
}

Uint32 UNIX_SCSIInterface::getSCSIRetries() const
{
	return _sCSIRetries;
}

void UNIX_SCSIInterface::setSCSIRetries(Uint32 &value)
{
	_sCSIRetries = value;
}

Boolean UNIX_SCSIInterface::getInitiatorId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIATOR_ID, getInitiatorId());
	return true;
}

Uint32 UNIX_SCSIInterface::getInitiatorId() const
{
	return _initiatorId;
}

void UNIX_SCSIInterface::setInitiatorId(Uint32 &value)
{
	_initiatorId = value;
}

Boolean UNIX_SCSIInterface::getTargetId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_ID, getTargetId());
	return true;
}

Uint32 UNIX_SCSIInterface::getTargetId() const
{
	return _targetId;
}

void UNIX_SCSIInterface::setTargetId(Uint32 &value)
{
	_targetId = value;
}

Boolean UNIX_SCSIInterface::getTargetLUN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_L_U_N, getTargetLUN());
	return true;
}

Uint64 UNIX_SCSIInterface::getTargetLUN() const
{
	return _targetLUN;
}

void UNIX_SCSIInterface::setTargetLUN(Uint64 &value)
{
	_targetLUN = value;
}

Boolean UNIX_SCSIInterface::getSCSIReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_CS_I_RESERVATION, getSCSIReservation());
	return true;
}

Uint16 UNIX_SCSIInterface::getSCSIReservation() const
{
	return _sCSIReservation;
}

void UNIX_SCSIInterface::setSCSIReservation(Uint16 &value)
{
	_sCSIReservation = value;
}

Boolean UNIX_SCSIInterface::getSCSISignal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_CS_I_SIGNAL, getSCSISignal());
	return true;
}

Uint16 UNIX_SCSIInterface::getSCSISignal() const
{
	return _sCSISignal;
}

void UNIX_SCSIInterface::setSCSISignal(Uint16 &value)
{
	_sCSISignal = value;
}

Boolean UNIX_SCSIInterface::getMaxQueueDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUEUE_DEPTH, getMaxQueueDepth());
	return true;
}

Uint32 UNIX_SCSIInterface::getMaxQueueDepth() const
{
	return _maxQueueDepth;
}

void UNIX_SCSIInterface::setMaxQueueDepth(Uint32 &value)
{
	_maxQueueDepth = value;
}

Boolean UNIX_SCSIInterface::getQueueDepthLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_DEPTH_LIMIT, getQueueDepthLimit());
	return true;
}

Uint32 UNIX_SCSIInterface::getQueueDepthLimit() const
{
	return _queueDepthLimit;
}

void UNIX_SCSIInterface::setQueueDepthLimit(Uint32 &value)
{
	_queueDepthLimit = value;
}


void UNIX_SCSIInterface::clearInstance()
{

	_antecedent = _antecedentSCSIControllerProvider.constructInstance(
		CIMName("UNIX_SCSIController"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSCSIController);
	_dependent = _dependentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_dependentSCSIArbitraryLogicalUnit);
	_negotiatedSpeed = Uint64(0);
	_negotiatedDataWidth = Uint32(0);
	_accessState = Uint16(0);
	_timeOfDeviceReset = CIMHelper::getCurrentTime();
	_numberOfHardResets = Uint32(0);
	_numberOfSoftResets = Uint32(0);
	_deviceNumber = String ("");
	_accessMode = Uint16(0);
	_accessPriority = Uint16(0);
	_sCSITimeouts = Uint32(0);
	_sCSIRetries = Uint32(0);
	_initiatorId = Uint32(0);
	_targetId = Uint32(0);
	_targetLUN = Uint64(0);
	_sCSIReservation = Uint16(0);
	_sCSISignal = Uint16(0);
	_maxQueueDepth = Uint32(0);
	_queueDepthLimit = Uint32(0);

}

Boolean UNIX_SCSIInterface::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NegotiatedSpeed"))
			{
				Uint64 negotiatedSpeedValue;
				property.getValue().get(negotiatedSpeedValue);
				setNegotiatedSpeed(negotiatedSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "NegotiatedDataWidth"))
			{
				Uint32 negotiatedDataWidthValue;
				property.getValue().get(negotiatedDataWidthValue);
				setNegotiatedDataWidth(negotiatedDataWidthValue);
			}
			else if (String::equal(property.getName().getString(), "AccessState"))
			{
				Uint16 accessStateValue;
				property.getValue().get(accessStateValue);
				setAccessState(accessStateValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfDeviceReset"))
			{
				CIMDateTime timeOfDeviceResetValue;
				property.getValue().get(timeOfDeviceResetValue);
				setTimeOfDeviceReset(timeOfDeviceResetValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfHardResets"))
			{
				Uint32 numberOfHardResetsValue;
				property.getValue().get(numberOfHardResetsValue);
				setNumberOfHardResets(numberOfHardResetsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfSoftResets"))
			{
				Uint32 numberOfSoftResetsValue;
				property.getValue().get(numberOfSoftResetsValue);
				setNumberOfSoftResets(numberOfSoftResetsValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceNumber"))
			{
				String deviceNumberValue;
				property.getValue().get(deviceNumberValue);
				setDeviceNumber(deviceNumberValue);
			}
			else if (String::equal(property.getName().getString(), "AccessMode"))
			{
				Uint16 accessModeValue;
				property.getValue().get(accessModeValue);
				setAccessMode(accessModeValue);
			}
			else if (String::equal(property.getName().getString(), "AccessPriority"))
			{
				Uint16 accessPriorityValue;
				property.getValue().get(accessPriorityValue);
				setAccessPriority(accessPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "SCSITimeouts"))
			{
				Uint32 sCSITimeoutsValue;
				property.getValue().get(sCSITimeoutsValue);
				setSCSITimeouts(sCSITimeoutsValue);
			}
			else if (String::equal(property.getName().getString(), "SCSIRetries"))
			{
				Uint32 sCSIRetriesValue;
				property.getValue().get(sCSIRetriesValue);
				setSCSIRetries(sCSIRetriesValue);
			}
			else if (String::equal(property.getName().getString(), "InitiatorId"))
			{
				Uint32 initiatorIdValue;
				property.getValue().get(initiatorIdValue);
				setInitiatorId(initiatorIdValue);
			}
			else if (String::equal(property.getName().getString(), "TargetId"))
			{
				Uint32 targetIdValue;
				property.getValue().get(targetIdValue);
				setTargetId(targetIdValue);
			}
			else if (String::equal(property.getName().getString(), "TargetLUN"))
			{
				Uint64 targetLUNValue;
				property.getValue().get(targetLUNValue);
				setTargetLUN(targetLUNValue);
			}
			else if (String::equal(property.getName().getString(), "SCSIReservation"))
			{
				Uint16 sCSIReservationValue;
				property.getValue().get(sCSIReservationValue);
				setSCSIReservation(sCSIReservationValue);
			}
			else if (String::equal(property.getName().getString(), "SCSISignal"))
			{
				Uint16 sCSISignalValue;
				property.getValue().get(sCSISignalValue);
				setSCSISignal(sCSISignalValue);
			}
			else if (String::equal(property.getName().getString(), "MaxQueueDepth"))
			{
				Uint32 maxQueueDepthValue;
				property.getValue().get(maxQueueDepthValue);
				setMaxQueueDepth(maxQueueDepthValue);
			}
			else if (String::equal(property.getName().getString(), "QueueDepthLimit"))
			{
				Uint32 queueDepthLimitValue;
				property.getValue().get(queueDepthLimitValue);
				setQueueDepthLimit(queueDepthLimitValue);
			}
	}
	return true;
}


Boolean UNIX_SCSIInterface::initialize()
{
	_antecedentSCSIController.initialize();
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
Boolean UNIX_SCSIInterface::load(int &pIndex)
{

	_antecedent = _antecedentSCSIControllerProvider.constructInstance(
		CIMName("UNIX_SCSIController"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSCSIController);
	_dependent = _dependentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_dependentSCSIArbitraryLogicalUnit);
	_negotiatedSpeed = Uint64(0);
	_negotiatedDataWidth = Uint32(0);
	_accessState = Uint16(0);
	_timeOfDeviceReset = CIMHelper::getCurrentTime();
	_numberOfHardResets = Uint32(0);
	_numberOfSoftResets = Uint32(0);
	_deviceNumber = String ("");
	_accessMode = Uint16(0);
	_accessPriority = Uint16(0);
	_sCSITimeouts = Uint32(0);
	_sCSIRetries = Uint32(0);
	_initiatorId = Uint32(0);
	_targetId = Uint32(0);
	_targetLUN = Uint64(0);
	_sCSIReservation = Uint16(0);
	_sCSISignal = Uint16(0);
	_maxQueueDepth = Uint32(0);
	_queueDepthLimit = Uint32(0);

	return false;
}

Boolean UNIX_SCSIInterface::finalize()
{
	_antecedentSCSIController.finalize();
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


Boolean UNIX_SCSIInterface::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SCSIInterface::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIInterface::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIInterface::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIInterface::validateInstance()
{
	return true;
}

