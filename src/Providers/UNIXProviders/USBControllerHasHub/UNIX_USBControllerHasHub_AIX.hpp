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


UNIX_USBControllerHasHub::UNIX_USBControllerHasHub(void)
{
}

UNIX_USBControllerHasHub::~UNIX_USBControllerHasHub(void)
{
}

Boolean UNIX_USBControllerHasHub::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_USBControllerHasHub::getAntecedent() const
{
	return _antecedent;
}

void UNIX_USBControllerHasHub::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_USBControllerHasHub::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_USBControllerHasHub::getDependent() const
{
	return _dependent;
}

void UNIX_USBControllerHasHub::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_USBControllerHasHub::getNegotiatedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_SPEED, getNegotiatedSpeed());
	return true;
}

Uint64 UNIX_USBControllerHasHub::getNegotiatedSpeed() const
{
	return _negotiatedSpeed;
}

void UNIX_USBControllerHasHub::setNegotiatedSpeed(Uint64 &value)
{
	_negotiatedSpeed = value;
}

Boolean UNIX_USBControllerHasHub::getNegotiatedDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_DATA_WIDTH, getNegotiatedDataWidth());
	return true;
}

Uint32 UNIX_USBControllerHasHub::getNegotiatedDataWidth() const
{
	return _negotiatedDataWidth;
}

void UNIX_USBControllerHasHub::setNegotiatedDataWidth(Uint32 &value)
{
	_negotiatedDataWidth = value;
}

Boolean UNIX_USBControllerHasHub::getAccessState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_STATE, getAccessState());
	return true;
}

Uint16 UNIX_USBControllerHasHub::getAccessState() const
{
	return _accessState;
}

void UNIX_USBControllerHasHub::setAccessState(Uint16 &value)
{
	_accessState = value;
}

Boolean UNIX_USBControllerHasHub::getTimeOfDeviceReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_DEVICE_RESET, getTimeOfDeviceReset());
	return true;
}

CIMDateTime UNIX_USBControllerHasHub::getTimeOfDeviceReset() const
{
	return _timeOfDeviceReset;
}

void UNIX_USBControllerHasHub::setTimeOfDeviceReset(CIMDateTime &value)
{
	_timeOfDeviceReset = value;
}

Boolean UNIX_USBControllerHasHub::getNumberOfHardResets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_HARD_RESETS, getNumberOfHardResets());
	return true;
}

Uint32 UNIX_USBControllerHasHub::getNumberOfHardResets() const
{
	return _numberOfHardResets;
}

void UNIX_USBControllerHasHub::setNumberOfHardResets(Uint32 &value)
{
	_numberOfHardResets = value;
}

Boolean UNIX_USBControllerHasHub::getNumberOfSoftResets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_SOFT_RESETS, getNumberOfSoftResets());
	return true;
}

Uint32 UNIX_USBControllerHasHub::getNumberOfSoftResets() const
{
	return _numberOfSoftResets;
}

void UNIX_USBControllerHasHub::setNumberOfSoftResets(Uint32 &value)
{
	_numberOfSoftResets = value;
}

Boolean UNIX_USBControllerHasHub::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

String UNIX_USBControllerHasHub::getDeviceNumber() const
{
	return _deviceNumber;
}

void UNIX_USBControllerHasHub::setDeviceNumber(String &value)
{
	_deviceNumber = value;
}

Boolean UNIX_USBControllerHasHub::getAccessMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_MODE, getAccessMode());
	return true;
}

Uint16 UNIX_USBControllerHasHub::getAccessMode() const
{
	return _accessMode;
}

void UNIX_USBControllerHasHub::setAccessMode(Uint16 &value)
{
	_accessMode = value;
}

Boolean UNIX_USBControllerHasHub::getAccessPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_PRIORITY, getAccessPriority());
	return true;
}

Uint16 UNIX_USBControllerHasHub::getAccessPriority() const
{
	return _accessPriority;
}

void UNIX_USBControllerHasHub::setAccessPriority(Uint16 &value)
{
	_accessPriority = value;
}


void UNIX_USBControllerHasHub::clearInstance()
{

	_antecedent = _antecedentUSBControllerProvider.constructInstance(
		CIMName("UNIX_USBController"),
		CIMNamespaceName("root/cimv2"),
		_antecedentUSBController);
	_dependent = _dependentUSBHubProvider.constructInstance(
		CIMName("UNIX_USBHub"),
		CIMNamespaceName("root/cimv2"),
		_dependentUSBHub);
	_negotiatedSpeed = Uint64(0);
	_negotiatedDataWidth = Uint32(0);
	_accessState = Uint16(0);
	_timeOfDeviceReset = CIMHelper::getCurrentTime();
	_numberOfHardResets = Uint32(0);
	_numberOfSoftResets = Uint32(0);
	_deviceNumber = String ("");
	_accessMode = Uint16(0);
	_accessPriority = Uint16(0);

}

Boolean UNIX_USBControllerHasHub::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_USBControllerHasHub::initialize()
{
	_antecedentUSBController.initialize();
	_dependentUSBHub.initialize();
	return true;
}
Boolean UNIX_USBControllerHasHub::load(int &pIndex)
{

	_antecedent = _antecedentUSBControllerProvider.constructInstance(
		CIMName("UNIX_USBController"),
		CIMNamespaceName("root/cimv2"),
		_antecedentUSBController);
	_dependent = _dependentUSBHubProvider.constructInstance(
		CIMName("UNIX_USBHub"),
		CIMNamespaceName("root/cimv2"),
		_dependentUSBHub);
	_negotiatedSpeed = Uint64(0);
	_negotiatedDataWidth = Uint32(0);
	_accessState = Uint16(0);
	_timeOfDeviceReset = CIMHelper::getCurrentTime();
	_numberOfHardResets = Uint32(0);
	_numberOfSoftResets = Uint32(0);
	_deviceNumber = String ("");
	_accessMode = Uint16(0);
	_accessPriority = Uint16(0);

	return false;
}

Boolean UNIX_USBControllerHasHub::finalize()
{
	_antecedentUSBController.finalize();
	_dependentUSBHub.finalize();
	return true;
}


Boolean UNIX_USBControllerHasHub::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_USBControllerHasHub::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBControllerHasHub::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBControllerHasHub::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBControllerHasHub::validateInstance()
{
	return true;
}

