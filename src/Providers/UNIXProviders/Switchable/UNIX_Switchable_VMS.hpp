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


UNIX_Switchable::UNIX_Switchable(void)
{
}

UNIX_Switchable::~UNIX_Switchable(void)
{
}

Boolean UNIX_Switchable::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_Switchable::getAntecedent() const
{
	return _antecedent;
}

void UNIX_Switchable::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_Switchable::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_Switchable::getDependent() const
{
	return _dependent;
}

void UNIX_Switchable::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_Switchable::getFrameType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TYPE, getFrameType());
	return true;
}

Uint16 UNIX_Switchable::getFrameType() const
{
	return _frameType;
}

void UNIX_Switchable::setFrameType(Uint16 &value)
{
	_frameType = value;
}


void UNIX_Switchable::clearInstance()
{

	_antecedent = _antecedentLANEndpointProvider.constructInstance(
		CIMName("UNIX_LANEndpoint"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLANEndpoint);
	_dependent = _dependentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_dependentSwitchPort);
	_frameType = Uint16(0);

}

Boolean UNIX_Switchable::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FrameType"))
			{
				Uint16 frameTypeValue;
				property.getValue().get(frameTypeValue);
				setFrameType(frameTypeValue);
			}
	}
	return true;
}


Boolean UNIX_Switchable::initialize()
{
	_antecedentLANEndpoint.initialize();
	_dependentSwitchPort.initialize();
	return true;
}
Boolean UNIX_Switchable::load(int &pIndex)
{

	_antecedent = _antecedentLANEndpointProvider.constructInstance(
		CIMName("UNIX_LANEndpoint"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLANEndpoint);
	_dependent = _dependentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_dependentSwitchPort);
	_frameType = Uint16(0);

	return false;
}

Boolean UNIX_Switchable::finalize()
{
	_antecedentLANEndpoint.finalize();
	_dependentSwitchPort.finalize();
	return true;
}


Boolean UNIX_Switchable::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Switchable::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Switchable::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Switchable::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Switchable::validateInstance()
{
	return true;
}

