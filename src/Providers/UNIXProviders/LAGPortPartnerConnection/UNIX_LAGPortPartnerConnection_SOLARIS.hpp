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


UNIX_LAGPortPartnerConnection::UNIX_LAGPortPartnerConnection(void)
{
}

UNIX_LAGPortPartnerConnection::~UNIX_LAGPortPartnerConnection(void)
{
}

Boolean UNIX_LAGPortPartnerConnection::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_LAGPortPartnerConnection::getAntecedent() const
{
	return _antecedent;
}

void UNIX_LAGPortPartnerConnection::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_LAGPortPartnerConnection::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_LAGPortPartnerConnection::getDependent() const
{
	return _dependent;
}

void UNIX_LAGPortPartnerConnection::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_LAGPortPartnerConnection::getTrafficType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRAFFIC_TYPE, getTrafficType());
	return true;
}

Uint16 UNIX_LAGPortPartnerConnection::getTrafficType() const
{
	return _trafficType;
}

void UNIX_LAGPortPartnerConnection::setTrafficType(Uint16 &value)
{
	_trafficType = value;
}

Boolean UNIX_LAGPortPartnerConnection::getOtherTrafficDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRAFFIC_DESCRIPTION, getOtherTrafficDescription());
	return true;
}

String UNIX_LAGPortPartnerConnection::getOtherTrafficDescription() const
{
	return _otherTrafficDescription;
}

void UNIX_LAGPortPartnerConnection::setOtherTrafficDescription(String &value)
{
	_otherTrafficDescription = value;
}

Boolean UNIX_LAGPortPartnerConnection::getIsUnidirectional(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_UNIDIRECTIONAL, getIsUnidirectional());
	return true;
}

Boolean UNIX_LAGPortPartnerConnection::getIsUnidirectional() const
{
	return _isUnidirectional;
}

void UNIX_LAGPortPartnerConnection::setIsUnidirectional(Boolean &value)
{
	_isUnidirectional = value;
}

Boolean UNIX_LAGPortPartnerConnection::getPortPartnerOperSystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_OPER_SYSTEM_ID, getPortPartnerOperSystemID());
	return true;
}

String UNIX_LAGPortPartnerConnection::getPortPartnerOperSystemID() const
{
	return _portPartnerOperSystemID;
}

void UNIX_LAGPortPartnerConnection::setPortPartnerOperSystemID(String &value)
{
	_portPartnerOperSystemID = value;
}

Boolean UNIX_LAGPortPartnerConnection::getPortPartnerOperSystemPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_OPER_SYSTEM_PRIORITY, getPortPartnerOperSystemPriority());
	return true;
}

Uint16 UNIX_LAGPortPartnerConnection::getPortPartnerOperSystemPriority() const
{
	return _portPartnerOperSystemPriority;
}

void UNIX_LAGPortPartnerConnection::setPortPartnerOperSystemPriority(Uint16 &value)
{
	_portPartnerOperSystemPriority = value;
}

Boolean UNIX_LAGPortPartnerConnection::getPortPartnerOperKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_OPER_KEY, getPortPartnerOperKey());
	return true;
}

Uint16 UNIX_LAGPortPartnerConnection::getPortPartnerOperKey() const
{
	return _portPartnerOperKey;
}

void UNIX_LAGPortPartnerConnection::setPortPartnerOperKey(Uint16 &value)
{
	_portPartnerOperKey = value;
}

Boolean UNIX_LAGPortPartnerConnection::getPortPartnerOperPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_OPER_PORT, getPortPartnerOperPort());
	return true;
}

Uint16 UNIX_LAGPortPartnerConnection::getPortPartnerOperPort() const
{
	return _portPartnerOperPort;
}

void UNIX_LAGPortPartnerConnection::setPortPartnerOperPort(Uint16 &value)
{
	_portPartnerOperPort = value;
}

Boolean UNIX_LAGPortPartnerConnection::getPortPartnerOperPortPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_OPER_PORT_PRIORITY, getPortPartnerOperPortPriority());
	return true;
}

Uint16 UNIX_LAGPortPartnerConnection::getPortPartnerOperPortPriority() const
{
	return _portPartnerOperPortPriority;
}

void UNIX_LAGPortPartnerConnection::setPortPartnerOperPortPriority(Uint16 &value)
{
	_portPartnerOperPortPriority = value;
}

Boolean UNIX_LAGPortPartnerConnection::getPortPartnerAdminState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_ADMIN_STATE, getPortPartnerAdminState());
	return true;
}

Uint16 UNIX_LAGPortPartnerConnection::getPortPartnerAdminState() const
{
	return _portPartnerAdminState;
}

void UNIX_LAGPortPartnerConnection::setPortPartnerAdminState(Uint16 &value)
{
	_portPartnerAdminState = value;
}

Boolean UNIX_LAGPortPartnerConnection::getPortPartnerOperState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PARTNER_OPER_STATE, getPortPartnerOperState());
	return true;
}

Uint16 UNIX_LAGPortPartnerConnection::getPortPartnerOperState() const
{
	return _portPartnerOperState;
}

void UNIX_LAGPortPartnerConnection::setPortPartnerOperState(Uint16 &value)
{
	_portPartnerOperState = value;
}


void UNIX_LAGPortPartnerConnection::clearInstance()
{

	_antecedent = _antecedentLAGPort8023adProvider.constructInstance(
		CIMName("UNIX_LAGPort8023ad"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLAGPort8023ad);
	_dependent = _dependentPolicyTransferServiceAccessPointProvider.constructInstance(
		CIMName("UNIX_PolicyTransferServiceAccessPoint"),
		CIMNamespaceName("root/cimv2"),
		_dependentPolicyTransferServiceAccessPoint);
	_trafficType = Uint16(0);
	_otherTrafficDescription = String ("");
	_isUnidirectional = Boolean(false);
	_portPartnerOperSystemID = String ("");
	_portPartnerOperSystemPriority = Uint16(0);
	_portPartnerOperKey = Uint16(0);
	_portPartnerOperPort = Uint16(0);
	_portPartnerOperPortPriority = Uint16(0);
	_portPartnerAdminState = Uint16(0);
	_portPartnerOperState = Uint16(0);

}

Boolean UNIX_LAGPortPartnerConnection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TrafficType"))
			{
				Uint16 trafficTypeValue;
				property.getValue().get(trafficTypeValue);
				setTrafficType(trafficTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTrafficDescription"))
			{
				String otherTrafficDescriptionValue;
				property.getValue().get(otherTrafficDescriptionValue);
				setOtherTrafficDescription(otherTrafficDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "IsUnidirectional"))
			{
				Boolean isUnidirectionalValue;
				property.getValue().get(isUnidirectionalValue);
				setIsUnidirectional(isUnidirectionalValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerOperSystemID"))
			{
				String portPartnerOperSystemIDValue;
				property.getValue().get(portPartnerOperSystemIDValue);
				setPortPartnerOperSystemID(portPartnerOperSystemIDValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerOperSystemPriority"))
			{
				Uint16 portPartnerOperSystemPriorityValue;
				property.getValue().get(portPartnerOperSystemPriorityValue);
				setPortPartnerOperSystemPriority(portPartnerOperSystemPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerOperKey"))
			{
				Uint16 portPartnerOperKeyValue;
				property.getValue().get(portPartnerOperKeyValue);
				setPortPartnerOperKey(portPartnerOperKeyValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerOperPort"))
			{
				Uint16 portPartnerOperPortValue;
				property.getValue().get(portPartnerOperPortValue);
				setPortPartnerOperPort(portPartnerOperPortValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerOperPortPriority"))
			{
				Uint16 portPartnerOperPortPriorityValue;
				property.getValue().get(portPartnerOperPortPriorityValue);
				setPortPartnerOperPortPriority(portPartnerOperPortPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerAdminState"))
			{
				Uint16 portPartnerAdminStateValue;
				property.getValue().get(portPartnerAdminStateValue);
				setPortPartnerAdminState(portPartnerAdminStateValue);
			}
			else if (String::equal(property.getName().getString(), "PortPartnerOperState"))
			{
				Uint16 portPartnerOperStateValue;
				property.getValue().get(portPartnerOperStateValue);
				setPortPartnerOperState(portPartnerOperStateValue);
			}
	}
	return true;
}


Boolean UNIX_LAGPortPartnerConnection::initialize()
{
	_antecedentLAGPort8023ad.initialize();
	_dependentPolicyTransferServiceAccessPoint.initialize();
	_dependentLaunchInContextSAP.initialize();
	_dependentRemotePort.initialize();
	_dependentMPLSTunnelHop.initialize();
	_dependentSoftwareIdentityResource.initialize();
	return true;
}
Boolean UNIX_LAGPortPartnerConnection::load(int &pIndex)
{

	_antecedent = _antecedentLAGPort8023adProvider.constructInstance(
		CIMName("UNIX_LAGPort8023ad"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLAGPort8023ad);
	_dependent = _dependentPolicyTransferServiceAccessPointProvider.constructInstance(
		CIMName("UNIX_PolicyTransferServiceAccessPoint"),
		CIMNamespaceName("root/cimv2"),
		_dependentPolicyTransferServiceAccessPoint);
	_trafficType = Uint16(0);
	_otherTrafficDescription = String ("");
	_isUnidirectional = Boolean(false);
	_portPartnerOperSystemID = String ("");
	_portPartnerOperSystemPriority = Uint16(0);
	_portPartnerOperKey = Uint16(0);
	_portPartnerOperPort = Uint16(0);
	_portPartnerOperPortPriority = Uint16(0);
	_portPartnerAdminState = Uint16(0);
	_portPartnerOperState = Uint16(0);

	return false;
}

Boolean UNIX_LAGPortPartnerConnection::finalize()
{
	_antecedentLAGPort8023ad.finalize();
	_dependentPolicyTransferServiceAccessPoint.finalize();
	_dependentLaunchInContextSAP.finalize();
	_dependentRemotePort.finalize();
	_dependentMPLSTunnelHop.finalize();
	_dependentSoftwareIdentityResource.finalize();
	return true;
}


Boolean UNIX_LAGPortPartnerConnection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LAGPortPartnerConnection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPortPartnerConnection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPortPartnerConnection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPortPartnerConnection::validateInstance()
{
	return true;
}

