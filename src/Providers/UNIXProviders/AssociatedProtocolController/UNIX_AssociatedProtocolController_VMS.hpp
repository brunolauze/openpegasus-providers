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


UNIX_AssociatedProtocolController::UNIX_AssociatedProtocolController(void)
{
}

UNIX_AssociatedProtocolController::~UNIX_AssociatedProtocolController(void)
{
}

Boolean UNIX_AssociatedProtocolController::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_AssociatedProtocolController::getAntecedent() const
{
	return _antecedent;
}

void UNIX_AssociatedProtocolController::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_AssociatedProtocolController::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_AssociatedProtocolController::getDependent() const
{
	return _dependent;
}

void UNIX_AssociatedProtocolController::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_AssociatedProtocolController::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

String UNIX_AssociatedProtocolController::getDeviceNumber() const
{
	return _deviceNumber;
}

void UNIX_AssociatedProtocolController::setDeviceNumber(String &value)
{
	_deviceNumber = value;
}

Boolean UNIX_AssociatedProtocolController::getAccessPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_PRIORITY, getAccessPriority());
	return true;
}

Uint16 UNIX_AssociatedProtocolController::getAccessPriority() const
{
	return _accessPriority;
}

void UNIX_AssociatedProtocolController::setAccessPriority(Uint16 &value)
{
	_accessPriority = value;
}

Boolean UNIX_AssociatedProtocolController::getAccessState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_STATE, getAccessState());
	return true;
}

Uint16 UNIX_AssociatedProtocolController::getAccessState() const
{
	return _accessState;
}

void UNIX_AssociatedProtocolController::setAccessState(Uint16 &value)
{
	_accessState = value;
}


void UNIX_AssociatedProtocolController::clearInstance()
{

	_antecedent = _antecedentProtocolControllerProvider.constructInstance(
		CIMName("UNIX_ProtocolController"),
		CIMNamespaceName("root/cimv2"),
		_antecedentProtocolController);
	_dependent = _dependentProtocolControllerProvider.constructInstance(
		CIMName("UNIX_ProtocolController"),
		CIMNamespaceName("root/cimv2"),
		_dependentProtocolController);
	_deviceNumber = String ("");
	_accessPriority = Uint16(0);
	_accessState = Uint16(0);

}

Boolean UNIX_AssociatedProtocolController::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DeviceNumber"))
			{
				String deviceNumberValue;
				property.getValue().get(deviceNumberValue);
				setDeviceNumber(deviceNumberValue);
			}
			else if (String::equal(property.getName().getString(), "AccessPriority"))
			{
				Uint16 accessPriorityValue;
				property.getValue().get(accessPriorityValue);
				setAccessPriority(accessPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "AccessState"))
			{
				Uint16 accessStateValue;
				property.getValue().get(accessStateValue);
				setAccessState(accessStateValue);
			}
	}
	return true;
}


Boolean UNIX_AssociatedProtocolController::initialize()
{
	_antecedentProtocolController.initialize();
	_dependentProtocolController.initialize();
	return true;
}
Boolean UNIX_AssociatedProtocolController::load(int &pIndex)
{

	_antecedent = _antecedentProtocolControllerProvider.constructInstance(
		CIMName("UNIX_ProtocolController"),
		CIMNamespaceName("root/cimv2"),
		_antecedentProtocolController);
	_dependent = _dependentProtocolControllerProvider.constructInstance(
		CIMName("UNIX_ProtocolController"),
		CIMNamespaceName("root/cimv2"),
		_dependentProtocolController);
	_deviceNumber = String ("");
	_accessPriority = Uint16(0);
	_accessState = Uint16(0);

	return false;
}

Boolean UNIX_AssociatedProtocolController::finalize()
{
	_antecedentProtocolController.finalize();
	_dependentProtocolController.finalize();
	return true;
}


Boolean UNIX_AssociatedProtocolController::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AssociatedProtocolController::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedProtocolController::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedProtocolController::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedProtocolController::validateInstance()
{
	return true;
}

