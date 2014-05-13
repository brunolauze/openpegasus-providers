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


UNIX_HostedBGPAttributes::UNIX_HostedBGPAttributes(void)
{
}

UNIX_HostedBGPAttributes::~UNIX_HostedBGPAttributes(void)
{
}

Boolean UNIX_HostedBGPAttributes::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_HostedBGPAttributes::getAntecedent() const
{
	return _antecedent;
}

void UNIX_HostedBGPAttributes::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_HostedBGPAttributes::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_HostedBGPAttributes::getDependent() const
{
	return _dependent;
}

void UNIX_HostedBGPAttributes::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_HostedBGPAttributes::clearInstance()
{

	_antecedent = _antecedentAutonomousSystemProvider.constructInstance(
		CIMName("UNIX_AutonomousSystem"),
		CIMNamespaceName("root/cimv2"),
		_antecedentAutonomousSystem);
	_dependent = _dependentBGPAttributesProvider.constructInstance(
		CIMName("UNIX_BGPAttributes"),
		CIMNamespaceName("root/cimv2"),
		_dependentBGPAttributes);

}

Boolean UNIX_HostedBGPAttributes::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_HostedBGPAttributes::initialize()
{
	_antecedentAutonomousSystem.initialize();
	_dependentBGPAttributes.initialize();
	return true;
}
Boolean UNIX_HostedBGPAttributes::load(int &pIndex)
{

	_antecedent = _antecedentAutonomousSystemProvider.constructInstance(
		CIMName("UNIX_AutonomousSystem"),
		CIMNamespaceName("root/cimv2"),
		_antecedentAutonomousSystem);
	_dependent = _dependentBGPAttributesProvider.constructInstance(
		CIMName("UNIX_BGPAttributes"),
		CIMNamespaceName("root/cimv2"),
		_dependentBGPAttributes);

	return false;
}

Boolean UNIX_HostedBGPAttributes::finalize()
{
	_antecedentAutonomousSystem.finalize();
	_dependentBGPAttributes.finalize();
	return true;
}


Boolean UNIX_HostedBGPAttributes::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_HostedBGPAttributes::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HostedBGPAttributes::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HostedBGPAttributes::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HostedBGPAttributes::validateInstance()
{
	return true;
}

