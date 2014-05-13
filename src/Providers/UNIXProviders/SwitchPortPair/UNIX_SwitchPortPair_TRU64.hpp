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


UNIX_SwitchPortPair::UNIX_SwitchPortPair(void)
{
}

UNIX_SwitchPortPair::~UNIX_SwitchPortPair(void)
{
}

Boolean UNIX_SwitchPortPair::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SwitchPortPair::getAntecedent() const
{
	return _antecedent;
}

void UNIX_SwitchPortPair::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_SwitchPortPair::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SwitchPortPair::getDependent() const
{
	return _dependent;
}

void UNIX_SwitchPortPair::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_SwitchPortPair::getBridgeNum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_NUM, getBridgeNum());
	return true;
}

Uint16 UNIX_SwitchPortPair::getBridgeNum() const
{
	return _bridgeNum;
}

void UNIX_SwitchPortPair::setBridgeNum(Uint16 &value)
{
	_bridgeNum = value;
}

Boolean UNIX_SwitchPortPair::getBridgeState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_STATE, getBridgeState());
	return true;
}

Uint16 UNIX_SwitchPortPair::getBridgeState() const
{
	return _bridgeState;
}

void UNIX_SwitchPortPair::setBridgeState(Uint16 &value)
{
	_bridgeState = value;
}


void UNIX_SwitchPortPair::clearInstance()
{

	_antecedent = _antecedentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSwitchPort);
	_dependent = _dependentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_dependentSwitchPort);
	_bridgeNum = Uint16(0);
	_bridgeState = Uint16(0);

}

Boolean UNIX_SwitchPortPair::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BridgeNum"))
			{
				Uint16 bridgeNumValue;
				property.getValue().get(bridgeNumValue);
				setBridgeNum(bridgeNumValue);
			}
			else if (String::equal(property.getName().getString(), "BridgeState"))
			{
				Uint16 bridgeStateValue;
				property.getValue().get(bridgeStateValue);
				setBridgeState(bridgeStateValue);
			}
	}
	return true;
}


Boolean UNIX_SwitchPortPair::initialize()
{
	_antecedentSwitchPort.initialize();
	_dependentSwitchPort.initialize();
	return true;
}
Boolean UNIX_SwitchPortPair::load(int &pIndex)
{

	_antecedent = _antecedentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSwitchPort);
	_dependent = _dependentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_dependentSwitchPort);
	_bridgeNum = Uint16(0);
	_bridgeState = Uint16(0);

	return false;
}

Boolean UNIX_SwitchPortPair::finalize()
{
	_antecedentSwitchPort.finalize();
	_dependentSwitchPort.finalize();
	return true;
}


Boolean UNIX_SwitchPortPair::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SwitchPortPair::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortPair::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortPair::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortPair::validateInstance()
{
	return true;
}

