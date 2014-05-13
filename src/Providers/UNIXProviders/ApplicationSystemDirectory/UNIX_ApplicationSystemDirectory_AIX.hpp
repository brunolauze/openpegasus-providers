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


UNIX_ApplicationSystemDirectory::UNIX_ApplicationSystemDirectory(void)
{
}

UNIX_ApplicationSystemDirectory::~UNIX_ApplicationSystemDirectory(void)
{
}

Boolean UNIX_ApplicationSystemDirectory::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ApplicationSystemDirectory::getAntecedent() const
{
	return _antecedent;
}

void UNIX_ApplicationSystemDirectory::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_ApplicationSystemDirectory::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ApplicationSystemDirectory::getDependent() const
{
	return _dependent;
}

void UNIX_ApplicationSystemDirectory::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_ApplicationSystemDirectory::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ApplicationSystemDirectory::getName() const
{
	return _name;
}

void UNIX_ApplicationSystemDirectory::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ApplicationSystemDirectory::getApplicationDirectoryUses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICATION_DIRECTORY_USES, getApplicationDirectoryUses());
	return true;
}

Array<Uint16> UNIX_ApplicationSystemDirectory::getApplicationDirectoryUses() const
{
	return _applicationDirectoryUses;
}

void UNIX_ApplicationSystemDirectory::setApplicationDirectoryUses(Array<Uint16> &value)
{
	_applicationDirectoryUses = value;
}

Boolean UNIX_ApplicationSystemDirectory::getOtherUseDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USE_DESCRIPTIONS, getOtherUseDescriptions());
	return true;
}

Array<String> UNIX_ApplicationSystemDirectory::getOtherUseDescriptions() const
{
	return _otherUseDescriptions;
}

void UNIX_ApplicationSystemDirectory::setOtherUseDescriptions(Array<String> &value)
{
	_otherUseDescriptions = value;
}


void UNIX_ApplicationSystemDirectory::clearInstance()
{

	_antecedent = CIMInstance(CIMName("CIM_Directory"));
	// _dependent = CIMInstance(CIMName("CIM_ApplicationSystem"));
	_name = String ("");
	_applicationDirectoryUses.clear();
	_otherUseDescriptions.clear();

}

Boolean UNIX_ApplicationSystemDirectory::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "ApplicationDirectoryUses"))
			{
				Array<Uint16> applicationDirectoryUsesValue;
				property.getValue().get(applicationDirectoryUsesValue);
				setApplicationDirectoryUses(applicationDirectoryUsesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUseDescriptions"))
			{
				Array<String> otherUseDescriptionsValue;
				property.getValue().get(otherUseDescriptionsValue);
				setOtherUseDescriptions(otherUseDescriptionsValue);
			}
	}
	return true;
}


Boolean UNIX_ApplicationSystemDirectory::initialize()
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::load(int &pIndex)
{
	
	_antecedent = CIMInstance(CIMName("CIM_Directory"));
	// _dependent = CIMInstance(CIMName("CIM_ApplicationSystem"));
	_name = String ("");
	_applicationDirectoryUses.clear();
	_otherUseDescriptions.clear();
	
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::finalize()
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAntecedent().getPath().toString(), antecedentKey)) && 
			(String::equalNoCase(getDependent().getPath().toString(), dependentKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::validateInstance()
{
	return true;
}

