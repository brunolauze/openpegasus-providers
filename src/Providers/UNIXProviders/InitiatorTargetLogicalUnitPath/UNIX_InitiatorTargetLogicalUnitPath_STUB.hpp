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


UNIX_InitiatorTargetLogicalUnitPath::UNIX_InitiatorTargetLogicalUnitPath(void)
{
}

UNIX_InitiatorTargetLogicalUnitPath::~UNIX_InitiatorTargetLogicalUnitPath(void)
{
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::getInitiator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIATOR, getInitiator());
	return true;
}

CIMInstance UNIX_InitiatorTargetLogicalUnitPath::getInitiator() const
{
	return _initiator;
}

void UNIX_InitiatorTargetLogicalUnitPath::setInitiator(CIMInstance &value)
{
	_initiator = value;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::getTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET, getTarget());
	return true;
}

CIMInstance UNIX_InitiatorTargetLogicalUnitPath::getTarget() const
{
	return _target;
}

void UNIX_InitiatorTargetLogicalUnitPath::setTarget(CIMInstance &value)
{
	_target = value;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::getLogicalUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_UNIT, getLogicalUnit());
	return true;
}

CIMInstance UNIX_InitiatorTargetLogicalUnitPath::getLogicalUnit() const
{
	return _logicalUnit;
}

void UNIX_InitiatorTargetLogicalUnitPath::setLogicalUnit(CIMInstance &value)
{
	_logicalUnit = value;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::getState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE, getState());
	return true;
}

Uint32 UNIX_InitiatorTargetLogicalUnitPath::getState() const
{
	return _state;
}

void UNIX_InitiatorTargetLogicalUnitPath::setState(Uint32 &value)
{
	_state = value;
}


void UNIX_InitiatorTargetLogicalUnitPath::clearInstance()
{

	_initiator = CIMInstance(CIMName("CIM_DHCPProtocolEndpoint"));
	_target = CIMInstance(CIMName("CIM_DHCPProtocolEndpoint"));
	_logicalUnit = CIMInstance(CIMName("CIM_SCSIArbitraryLogicalUnit"));
	_state = Uint32(0);

}

Boolean UNIX_InitiatorTargetLogicalUnitPath::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Initiator"))
			{
				CIMInstance initiatorValue;
				property.getValue().get(initiatorValue);
				setInitiator(initiatorValue);
			}
			else if (String::equal(property.getName().getString(), "Target"))
			{
				CIMInstance targetValue;
				property.getValue().get(targetValue);
				setTarget(targetValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalUnit"))
			{
				CIMInstance logicalUnitValue;
				property.getValue().get(logicalUnitValue);
				setLogicalUnit(logicalUnitValue);
			}
			else if (String::equal(property.getName().getString(), "State"))
			{
				Uint32 stateValue;
				property.getValue().get(stateValue);
				setState(stateValue);
			}
	}
	return true;
}


Boolean UNIX_InitiatorTargetLogicalUnitPath::initialize()
{
	return false;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::load(int &pIndex)
{
	
	_initiator = CIMInstance(CIMName("CIM_DHCPProtocolEndpoint"));
	_target = CIMInstance(CIMName("CIM_DHCPProtocolEndpoint"));
	_logicalUnit = CIMInstance(CIMName("CIM_SCSIArbitraryLogicalUnit"));
	_state = Uint32(0);
	
	return false;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::finalize()
{
	return false;
}


Boolean UNIX_InitiatorTargetLogicalUnitPath::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String initiatorKey;
	String targetKey;
	String logicalUnitKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INITIATOR)) initiatorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET)) targetKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOGICAL_UNIT)) logicalUnitKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInitiator().getPath().toString(), initiatorKey)) && 
			(String::equalNoCase(getTarget().getPath().toString(), targetKey)) && 
			(String::equalNoCase(getLogicalUnit().getPath().toString(), logicalUnitKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InitiatorTargetLogicalUnitPath::validateInstance()
{
	return true;
}

