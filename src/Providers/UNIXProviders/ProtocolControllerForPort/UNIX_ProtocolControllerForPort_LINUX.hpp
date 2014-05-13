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


UNIX_ProtocolControllerForPort::UNIX_ProtocolControllerForPort(void)
{
}

UNIX_ProtocolControllerForPort::~UNIX_ProtocolControllerForPort(void)
{
}

Boolean UNIX_ProtocolControllerForPort::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ProtocolControllerForPort::getAntecedent() const
{
	return _antecedent;
}

void UNIX_ProtocolControllerForPort::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_ProtocolControllerForPort::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ProtocolControllerForPort::getDependent() const
{
	return _dependent;
}

void UNIX_ProtocolControllerForPort::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_ProtocolControllerForPort::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

String UNIX_ProtocolControllerForPort::getDeviceNumber() const
{
	return _deviceNumber;
}

void UNIX_ProtocolControllerForPort::setDeviceNumber(String &value)
{
	_deviceNumber = value;
}

Boolean UNIX_ProtocolControllerForPort::getAccessPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_PRIORITY, getAccessPriority());
	return true;
}

Uint16 UNIX_ProtocolControllerForPort::getAccessPriority() const
{
	return _accessPriority;
}

void UNIX_ProtocolControllerForPort::setAccessPriority(Uint16 &value)
{
	_accessPriority = value;
}

Boolean UNIX_ProtocolControllerForPort::getAccessState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_STATE, getAccessState());
	return true;
}

Uint16 UNIX_ProtocolControllerForPort::getAccessState() const
{
	return _accessState;
}

void UNIX_ProtocolControllerForPort::setAccessState(Uint16 &value)
{
	_accessState = value;
}


void UNIX_ProtocolControllerForPort::clearInstance()
{

	_antecedent = _antecedentProtocolControllerProvider.constructInstance(
		CIMName("UNIX_ProtocolController"),
		CIMNamespaceName("root/cimv2"),
		_antecedentProtocolController);
	_dependent = _dependentNetworkPortProvider.constructInstance(
		CIMName("UNIX_NetworkPort"),
		CIMNamespaceName("root/cimv2"),
		_dependentNetworkPort);
	_deviceNumber = String ("");
	_accessPriority = Uint16(0);
	_accessState = Uint16(0);

}

Boolean UNIX_ProtocolControllerForPort::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_ProtocolControllerForPort::initialize()
{
	_antecedentProtocolController.initialize();
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
	return true;
}
Boolean UNIX_ProtocolControllerForPort::load(int &pIndex)
{

	_antecedent = _antecedentProtocolControllerProvider.constructInstance(
		CIMName("UNIX_ProtocolController"),
		CIMNamespaceName("root/cimv2"),
		_antecedentProtocolController);
	_dependent = _dependentNetworkPortProvider.constructInstance(
		CIMName("UNIX_NetworkPort"),
		CIMNamespaceName("root/cimv2"),
		_dependentNetworkPort);
	_deviceNumber = String ("");
	_accessPriority = Uint16(0);
	_accessState = Uint16(0);

	return false;
}

Boolean UNIX_ProtocolControllerForPort::finalize()
{
	_antecedentProtocolController.finalize();
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
	return true;
}


Boolean UNIX_ProtocolControllerForPort::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ProtocolControllerForPort::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProtocolControllerForPort::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProtocolControllerForPort::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProtocolControllerForPort::validateInstance()
{
	return true;
}

