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


UNIX_DeviceSoftware::UNIX_DeviceSoftware(void)
{
}

UNIX_DeviceSoftware::~UNIX_DeviceSoftware(void)
{
}

Boolean UNIX_DeviceSoftware::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_DeviceSoftware::getAntecedent() const
{
	return _antecedent;
}

void UNIX_DeviceSoftware::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_DeviceSoftware::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_DeviceSoftware::getDependent() const
{
	return _dependent;
}

void UNIX_DeviceSoftware::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_DeviceSoftware::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

Uint16 UNIX_DeviceSoftware::getPurpose() const
{
	return _purpose;
}

void UNIX_DeviceSoftware::setPurpose(Uint16 &value)
{
	_purpose = value;
}

Boolean UNIX_DeviceSoftware::getPurposeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE_DESCRIPTION, getPurposeDescription());
	return true;
}

String UNIX_DeviceSoftware::getPurposeDescription() const
{
	return _purposeDescription;
}

void UNIX_DeviceSoftware::setPurposeDescription(String &value)
{
	_purposeDescription = value;
}

Boolean UNIX_DeviceSoftware::getLoadedOnDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOADED_ON_DEVICE, getLoadedOnDevice());
	return true;
}

Boolean UNIX_DeviceSoftware::getLoadedOnDevice() const
{
	return _loadedOnDevice;
}

void UNIX_DeviceSoftware::setLoadedOnDevice(Boolean &value)
{
	_loadedOnDevice = value;
}

Boolean UNIX_DeviceSoftware::getUpgradeableOnDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPGRADEABLE_ON_DEVICE, getUpgradeableOnDevice());
	return true;
}

Boolean UNIX_DeviceSoftware::getUpgradeableOnDevice() const
{
	return _upgradeableOnDevice;
}

void UNIX_DeviceSoftware::setUpgradeableOnDevice(Boolean &value)
{
	_upgradeableOnDevice = value;
}


void UNIX_DeviceSoftware::clearInstance()
{

	// _antecedent = CIMInstance(CIMName("CIM_SoftwareElement"));
	_dependent = _dependentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_dependentSCSIArbitraryLogicalUnit);
	_purpose = Uint16(0);
	_purposeDescription = String ("");
	_loadedOnDevice = Boolean(false);
	_upgradeableOnDevice = Boolean(false);

}

Boolean UNIX_DeviceSoftware::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Purpose"))
			{
				Uint16 purposeValue;
				property.getValue().get(purposeValue);
				setPurpose(purposeValue);
			}
			else if (String::equal(property.getName().getString(), "PurposeDescription"))
			{
				String purposeDescriptionValue;
				property.getValue().get(purposeDescriptionValue);
				setPurposeDescription(purposeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "LoadedOnDevice"))
			{
				Boolean loadedOnDeviceValue;
				property.getValue().get(loadedOnDeviceValue);
				setLoadedOnDevice(loadedOnDeviceValue);
			}
			else if (String::equal(property.getName().getString(), "UpgradeableOnDevice"))
			{
				Boolean upgradeableOnDeviceValue;
				property.getValue().get(upgradeableOnDeviceValue);
				setUpgradeableOnDevice(upgradeableOnDeviceValue);
			}
	}
	return true;
}


Boolean UNIX_DeviceSoftware::initialize()
{
	/* Related Instances are Abstract */
	return false;
	return true;
}
Boolean UNIX_DeviceSoftware::load(int &pIndex)
{

	// _antecedent = CIMInstance(CIMName("CIM_SoftwareElement"));
	_dependent = _dependentSCSIArbitraryLogicalUnitProvider.constructInstance(
		CIMName("UNIX_SCSIArbitraryLogicalUnit"),
		CIMNamespaceName("root/cimv2"),
		_dependentSCSIArbitraryLogicalUnit);
	_purpose = Uint16(0);
	_purposeDescription = String ("");
	_loadedOnDevice = Boolean(false);
	_upgradeableOnDevice = Boolean(false);

	return false;
}

Boolean UNIX_DeviceSoftware::finalize()
{
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


Boolean UNIX_DeviceSoftware::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DeviceSoftware::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSoftware::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSoftware::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSoftware::validateInstance()
{
	return true;
}

