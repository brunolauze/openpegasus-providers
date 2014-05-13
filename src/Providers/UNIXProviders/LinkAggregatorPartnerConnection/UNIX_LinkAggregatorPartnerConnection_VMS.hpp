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


UNIX_LinkAggregatorPartnerConnection::UNIX_LinkAggregatorPartnerConnection(void)
{
}

UNIX_LinkAggregatorPartnerConnection::~UNIX_LinkAggregatorPartnerConnection(void)
{
}

Boolean UNIX_LinkAggregatorPartnerConnection::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_LinkAggregatorPartnerConnection::getAntecedent() const
{
	return _antecedent;
}

void UNIX_LinkAggregatorPartnerConnection::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_LinkAggregatorPartnerConnection::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_LinkAggregatorPartnerConnection::getDependent() const
{
	return _dependent;
}

void UNIX_LinkAggregatorPartnerConnection::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_LinkAggregatorPartnerConnection::getTrafficType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRAFFIC_TYPE, getTrafficType());
	return true;
}

Uint16 UNIX_LinkAggregatorPartnerConnection::getTrafficType() const
{
	return _trafficType;
}

void UNIX_LinkAggregatorPartnerConnection::setTrafficType(Uint16 &value)
{
	_trafficType = value;
}

Boolean UNIX_LinkAggregatorPartnerConnection::getOtherTrafficDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRAFFIC_DESCRIPTION, getOtherTrafficDescription());
	return true;
}

String UNIX_LinkAggregatorPartnerConnection::getOtherTrafficDescription() const
{
	return _otherTrafficDescription;
}

void UNIX_LinkAggregatorPartnerConnection::setOtherTrafficDescription(String &value)
{
	_otherTrafficDescription = value;
}

Boolean UNIX_LinkAggregatorPartnerConnection::getIsUnidirectional(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_UNIDIRECTIONAL, getIsUnidirectional());
	return true;
}

Boolean UNIX_LinkAggregatorPartnerConnection::getIsUnidirectional() const
{
	return _isUnidirectional;
}

void UNIX_LinkAggregatorPartnerConnection::setIsUnidirectional(Boolean &value)
{
	_isUnidirectional = value;
}

Boolean UNIX_LinkAggregatorPartnerConnection::getPartnerSystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARTNER_SYSTEM_ID, getPartnerSystemID());
	return true;
}

String UNIX_LinkAggregatorPartnerConnection::getPartnerSystemID() const
{
	return _partnerSystemID;
}

void UNIX_LinkAggregatorPartnerConnection::setPartnerSystemID(String &value)
{
	_partnerSystemID = value;
}

Boolean UNIX_LinkAggregatorPartnerConnection::getPartnerSystemPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARTNER_SYSTEM_PRIORITY, getPartnerSystemPriority());
	return true;
}

Uint16 UNIX_LinkAggregatorPartnerConnection::getPartnerSystemPriority() const
{
	return _partnerSystemPriority;
}

void UNIX_LinkAggregatorPartnerConnection::setPartnerSystemPriority(Uint16 &value)
{
	_partnerSystemPriority = value;
}

Boolean UNIX_LinkAggregatorPartnerConnection::getPartnerOperKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARTNER_OPER_KEY, getPartnerOperKey());
	return true;
}

Uint16 UNIX_LinkAggregatorPartnerConnection::getPartnerOperKey() const
{
	return _partnerOperKey;
}

void UNIX_LinkAggregatorPartnerConnection::setPartnerOperKey(Uint16 &value)
{
	_partnerOperKey = value;
}


void UNIX_LinkAggregatorPartnerConnection::clearInstance()
{

	_antecedent = _antecedentLinkAggregator8023adProvider.constructInstance(
		CIMName("UNIX_LinkAggregator8023ad"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLinkAggregator8023ad);
	_dependent = _dependentPolicyTransferServiceAccessPointProvider.constructInstance(
		CIMName("UNIX_PolicyTransferServiceAccessPoint"),
		CIMNamespaceName("root/cimv2"),
		_dependentPolicyTransferServiceAccessPoint);
	_trafficType = Uint16(0);
	_otherTrafficDescription = String ("");
	_isUnidirectional = Boolean(false);
	_partnerSystemID = String ("");
	_partnerSystemPriority = Uint16(0);
	_partnerOperKey = Uint16(0);

}

Boolean UNIX_LinkAggregatorPartnerConnection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PartnerSystemID"))
			{
				String partnerSystemIDValue;
				property.getValue().get(partnerSystemIDValue);
				setPartnerSystemID(partnerSystemIDValue);
			}
			else if (String::equal(property.getName().getString(), "PartnerSystemPriority"))
			{
				Uint16 partnerSystemPriorityValue;
				property.getValue().get(partnerSystemPriorityValue);
				setPartnerSystemPriority(partnerSystemPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "PartnerOperKey"))
			{
				Uint16 partnerOperKeyValue;
				property.getValue().get(partnerOperKeyValue);
				setPartnerOperKey(partnerOperKeyValue);
			}
	}
	return true;
}


Boolean UNIX_LinkAggregatorPartnerConnection::initialize()
{
	_antecedentLinkAggregator8023ad.initialize();
	_dependentPolicyTransferServiceAccessPoint.initialize();
	_dependentLaunchInContextSAP.initialize();
	_dependentRemotePort.initialize();
	_dependentMPLSTunnelHop.initialize();
	_dependentSoftwareIdentityResource.initialize();
	return true;
}
Boolean UNIX_LinkAggregatorPartnerConnection::load(int &pIndex)
{

	_antecedent = _antecedentLinkAggregator8023adProvider.constructInstance(
		CIMName("UNIX_LinkAggregator8023ad"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLinkAggregator8023ad);
	_dependent = _dependentPolicyTransferServiceAccessPointProvider.constructInstance(
		CIMName("UNIX_PolicyTransferServiceAccessPoint"),
		CIMNamespaceName("root/cimv2"),
		_dependentPolicyTransferServiceAccessPoint);
	_trafficType = Uint16(0);
	_otherTrafficDescription = String ("");
	_isUnidirectional = Boolean(false);
	_partnerSystemID = String ("");
	_partnerSystemPriority = Uint16(0);
	_partnerOperKey = Uint16(0);

	return false;
}

Boolean UNIX_LinkAggregatorPartnerConnection::finalize()
{
	_antecedentLinkAggregator8023ad.finalize();
	_dependentPolicyTransferServiceAccessPoint.finalize();
	_dependentLaunchInContextSAP.finalize();
	_dependentRemotePort.finalize();
	_dependentMPLSTunnelHop.finalize();
	_dependentSoftwareIdentityResource.finalize();
	return true;
}


Boolean UNIX_LinkAggregatorPartnerConnection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LinkAggregatorPartnerConnection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LinkAggregatorPartnerConnection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LinkAggregatorPartnerConnection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LinkAggregatorPartnerConnection::validateInstance()
{
	return true;
}

