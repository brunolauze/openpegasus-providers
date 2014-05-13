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


UNIX_Role::UNIX_Role(void)
{
}

UNIX_Role::~UNIX_Role(void)
{
}

Boolean UNIX_Role::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Role::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Role::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Role::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Role::getCaption() const
{
	return _caption;
}

void UNIX_Role::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Role::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Role::getDescription() const
{
	return _description;
}

void UNIX_Role::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Role::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Role::getElementName() const
{
	return _elementName;
}

void UNIX_Role::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Role::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Role::getGeneration() const
{
	return _generation;
}

void UNIX_Role::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Role::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Role::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Role::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Role::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Role::getName() const
{
	return _name;
}

void UNIX_Role::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Role::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

String UNIX_Role::getBusinessCategory() const
{
	return _businessCategory;
}

void UNIX_Role::setBusinessCategory(String &value)
{
	_businessCategory = value;
}

Boolean UNIX_Role::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_Role::getCommonName() const
{
	return _commonName;
}

void UNIX_Role::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_Role::getRoleCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLE_CHARACTERISTICS, getRoleCharacteristics());
	return true;
}

Array<Uint16> UNIX_Role::getRoleCharacteristics() const
{
	return _roleCharacteristics;
}

void UNIX_Role::setRoleCharacteristics(Array<Uint16> &value)
{
	_roleCharacteristics = value;
}


void UNIX_Role::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Role");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_Role");
	_name = String ("");
	_businessCategory = String ("");
	_commonName = String ("");
	_roleCharacteristics.clear();

}

Boolean UNIX_Role::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "BusinessCategory"))
			{
				String businessCategoryValue;
				property.getValue().get(businessCategoryValue);
				setBusinessCategory(businessCategoryValue);
			}
			else if (String::equal(property.getName().getString(), "CommonName"))
			{
				String commonNameValue;
				property.getValue().get(commonNameValue);
				setCommonName(commonNameValue);
			}
			else if (String::equal(property.getName().getString(), "RoleCharacteristics"))
			{
				Array<Uint16> roleCharacteristicsValue;
				property.getValue().get(roleCharacteristicsValue);
				setRoleCharacteristics(roleCharacteristicsValue);
			}
	}
	return true;
}


Boolean UNIX_Role::initialize()
{
	return false;
}

Boolean UNIX_Role::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Role");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_Role");
	_name = String ("");
	_businessCategory = String ("");
	_commonName = String ("");
	_roleCharacteristics.clear();
	
	return false;
}

Boolean UNIX_Role::finalize()
{
	return false;
}

Boolean UNIX_Role::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Role::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Role::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Role::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Role::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Role::validateInstance()
{
	return true;
}

