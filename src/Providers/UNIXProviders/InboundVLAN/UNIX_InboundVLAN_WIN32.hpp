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


UNIX_InboundVLAN::UNIX_InboundVLAN(void)
{
}

UNIX_InboundVLAN::~UNIX_InboundVLAN(void)
{
}

Boolean UNIX_InboundVLAN::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_InboundVLAN::getAntecedent() const
{
	return _antecedent;
}

void UNIX_InboundVLAN::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_InboundVLAN::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_InboundVLAN::getDependent() const
{
	return _dependent;
}

void UNIX_InboundVLAN::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_InboundVLAN::getTagged(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAGGED, getTagged());
	return true;
}

Boolean UNIX_InboundVLAN::getTagged() const
{
	return _tagged;
}

void UNIX_InboundVLAN::setTagged(Boolean &value)
{
	_tagged = value;
}

Boolean UNIX_InboundVLAN::getDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT, getDefault());
	return true;
}

Boolean UNIX_InboundVLAN::getDefault() const
{
	return _default;
}

void UNIX_InboundVLAN::setDefault(Boolean &value)
{
	_default = value;
}


void UNIX_InboundVLAN::clearInstance()
{

	_antecedent = _antecedentVLANProvider.constructInstance(
		CIMName("UNIX_VLAN"),
		CIMNamespaceName("root/cimv2"),
		_antecedentVLAN);
	_dependent = _dependentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_dependentSwitchPort);
	_tagged = Boolean(false);
	_default = Boolean(false);

}

Boolean UNIX_InboundVLAN::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Tagged"))
			{
				Boolean taggedValue;
				property.getValue().get(taggedValue);
				setTagged(taggedValue);
			}
			else if (String::equal(property.getName().getString(), "Default"))
			{
				Boolean defaultValue;
				property.getValue().get(defaultValue);
				setDefault(defaultValue);
			}
	}
	return true;
}


Boolean UNIX_InboundVLAN::initialize()
{
	_antecedentVLAN.initialize();
	_dependentSwitchPort.initialize();
	return true;
}
Boolean UNIX_InboundVLAN::load(int &pIndex)
{

	_antecedent = _antecedentVLANProvider.constructInstance(
		CIMName("UNIX_VLAN"),
		CIMNamespaceName("root/cimv2"),
		_antecedentVLAN);
	_dependent = _dependentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_dependentSwitchPort);
	_tagged = Boolean(false);
	_default = Boolean(false);

	return false;
}

Boolean UNIX_InboundVLAN::finalize()
{
	_antecedentVLAN.finalize();
	_dependentSwitchPort.finalize();
	return true;
}


Boolean UNIX_InboundVLAN::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_InboundVLAN::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InboundVLAN::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InboundVLAN::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InboundVLAN::validateInstance()
{
	return true;
}

