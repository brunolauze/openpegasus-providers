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


UNIX_Docked::UNIX_Docked(void)
{
}

UNIX_Docked::~UNIX_Docked(void)
{
}

Boolean UNIX_Docked::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_Docked::getAntecedent() const
{
	return _antecedent;
}

void UNIX_Docked::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_Docked::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_Docked::getDependent() const
{
	return _dependent;
}

void UNIX_Docked::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_Docked::clearInstance()
{

	_antecedent = _antecedentChassisProvider.constructInstance(
		CIMName("UNIX_Chassis"),
		CIMNamespaceName("root/cimv2"),
		_antecedentChassis);
	_dependent = _dependentChassisProvider.constructInstance(
		CIMName("UNIX_Chassis"),
		CIMNamespaceName("root/cimv2"),
		_dependentChassis);

}

Boolean UNIX_Docked::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_Docked::initialize()
{
	_antecedentChassis.initialize();
	_dependentChassis.initialize();
	return true;
}
Boolean UNIX_Docked::load(int &pIndex)
{

	_antecedent = _antecedentChassisProvider.constructInstance(
		CIMName("UNIX_Chassis"),
		CIMNamespaceName("root/cimv2"),
		_antecedentChassis);
	_dependent = _dependentChassisProvider.constructInstance(
		CIMName("UNIX_Chassis"),
		CIMNamespaceName("root/cimv2"),
		_dependentChassis);

	return false;
}

Boolean UNIX_Docked::finalize()
{
	_antecedentChassis.finalize();
	_dependentChassis.finalize();
	return true;
}


Boolean UNIX_Docked::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Docked::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Docked::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Docked::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Docked::validateInstance()
{
	return true;
}

