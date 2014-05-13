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


UNIX_SystemInNamespace::UNIX_SystemInNamespace(void)
{
}

UNIX_SystemInNamespace::~UNIX_SystemInNamespace(void)
{
}

Boolean UNIX_SystemInNamespace::getManagedNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_NAMESPACE, getManagedNamespace());
	return true;
}

CIMInstance UNIX_SystemInNamespace::getManagedNamespace() const
{
	return _managedNamespace;
}

void UNIX_SystemInNamespace::setManagedNamespace(CIMInstance &value)
{
	_managedNamespace = value;
}

Boolean UNIX_SystemInNamespace::getIdentification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION, getIdentification());
	return true;
}

CIMInstance UNIX_SystemInNamespace::getIdentification() const
{
	return _identification;
}

void UNIX_SystemInNamespace::setIdentification(CIMInstance &value)
{
	_identification = value;
}

Boolean UNIX_SystemInNamespace::getScopeOfContainedData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCOPE_OF_CONTAINED_DATA, getScopeOfContainedData());
	return true;
}

Array<Uint16> UNIX_SystemInNamespace::getScopeOfContainedData() const
{
	return _scopeOfContainedData;
}

void UNIX_SystemInNamespace::setScopeOfContainedData(Array<Uint16> &value)
{
	_scopeOfContainedData = value;
}

Boolean UNIX_SystemInNamespace::getDescriptionOfContainedData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION_OF_CONTAINED_DATA, getDescriptionOfContainedData());
	return true;
}

Array<String> UNIX_SystemInNamespace::getDescriptionOfContainedData() const
{
	return _descriptionOfContainedData;
}

void UNIX_SystemInNamespace::setDescriptionOfContainedData(Array<String> &value)
{
	_descriptionOfContainedData = value;
}


void UNIX_SystemInNamespace::clearInstance()
{

	_managedNamespace = CIMInstance(CIMName("CIM_Namespace"));
	_identification = CIMInstance(CIMName("CIM_SystemIdentification"));
	_scopeOfContainedData.clear();
	_descriptionOfContainedData.clear();

}

Boolean UNIX_SystemInNamespace::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ManagedNamespace"))
			{
				CIMInstance managedNamespaceValue;
				property.getValue().get(managedNamespaceValue);
				setManagedNamespace(managedNamespaceValue);
			}
			else if (String::equal(property.getName().getString(), "Identification"))
			{
				CIMInstance identificationValue;
				property.getValue().get(identificationValue);
				setIdentification(identificationValue);
			}
			else if (String::equal(property.getName().getString(), "ScopeOfContainedData"))
			{
				Array<Uint16> scopeOfContainedDataValue;
				property.getValue().get(scopeOfContainedDataValue);
				setScopeOfContainedData(scopeOfContainedDataValue);
			}
			else if (String::equal(property.getName().getString(), "DescriptionOfContainedData"))
			{
				Array<String> descriptionOfContainedDataValue;
				property.getValue().get(descriptionOfContainedDataValue);
				setDescriptionOfContainedData(descriptionOfContainedDataValue);
			}
	}
	return true;
}


Boolean UNIX_SystemInNamespace::initialize()
{
	return false;
}

Boolean UNIX_SystemInNamespace::load(int &pIndex)
{
	
	_managedNamespace = CIMInstance(CIMName("CIM_Namespace"));
	_identification = CIMInstance(CIMName("CIM_SystemIdentification"));
	_scopeOfContainedData.clear();
	_descriptionOfContainedData.clear();
	
	return false;
}

Boolean UNIX_SystemInNamespace::finalize()
{
	return false;
}


Boolean UNIX_SystemInNamespace::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String managedNamespaceKey;
	String identificationKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_MANAGED_NAMESPACE)) managedNamespaceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_IDENTIFICATION)) identificationKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getManagedNamespace().getPath().toString(), managedNamespaceKey)) && 
			(String::equalNoCase(getIdentification().getPath().toString(), identificationKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SystemInNamespace::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemInNamespace::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemInNamespace::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemInNamespace::validateInstance()
{
	return true;
}

