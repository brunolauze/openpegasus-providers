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


UNIX_OtherGroupInformation::UNIX_OtherGroupInformation(void)
{
}

UNIX_OtherGroupInformation::~UNIX_OtherGroupInformation(void)
{
}

Boolean UNIX_OtherGroupInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherGroupInformation::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OtherGroupInformation::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OtherGroupInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherGroupInformation::getCaption() const
{
	return _caption;
}

void UNIX_OtherGroupInformation::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OtherGroupInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherGroupInformation::getDescription() const
{
	return _description;
}

void UNIX_OtherGroupInformation::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OtherGroupInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherGroupInformation::getElementName() const
{
	return _elementName;
}

void UNIX_OtherGroupInformation::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OtherGroupInformation::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OtherGroupInformation::getGeneration() const
{
	return _generation;
}

void UNIX_OtherGroupInformation::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OtherGroupInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherGroupInformation::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OtherGroupInformation::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OtherGroupInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherGroupInformation::getName() const
{
	return _name;
}

void UNIX_OtherGroupInformation::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OtherGroupInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getObjectClass() const
{
	return _objectClass;
}

void UNIX_OtherGroupInformation::setObjectClass(Array<String> &value)
{
	_objectClass = value;
}

Boolean UNIX_OtherGroupInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getBusinessCategory() const
{
	return _businessCategory;
}

void UNIX_OtherGroupInformation::setBusinessCategory(Array<String> &value)
{
	_businessCategory = value;
}

Boolean UNIX_OtherGroupInformation::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getCommonName() const
{
	return _commonName;
}

void UNIX_OtherGroupInformation::setCommonName(Array<String> &value)
{
	_commonName = value;
}

Boolean UNIX_OtherGroupInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getDescriptions() const
{
	return _descriptions;
}

void UNIX_OtherGroupInformation::setDescriptions(Array<String> &value)
{
	_descriptions = value;
}

Boolean UNIX_OtherGroupInformation::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getOrganizationName() const
{
	return _organizationName;
}

void UNIX_OtherGroupInformation::setOrganizationName(Array<String> &value)
{
	_organizationName = value;
}

Boolean UNIX_OtherGroupInformation::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OU, getOU());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getOU() const
{
	return _oU;
}

void UNIX_OtherGroupInformation::setOU(Array<String> &value)
{
	_oU = value;
}

Boolean UNIX_OtherGroupInformation::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getOwner() const
{
	return _owner;
}

void UNIX_OtherGroupInformation::setOwner(Array<String> &value)
{
	_owner = value;
}

Boolean UNIX_OtherGroupInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getSeeAlso() const
{
	return _seeAlso;
}

void UNIX_OtherGroupInformation::setSeeAlso(Array<String> &value)
{
	_seeAlso = value;
}


void UNIX_OtherGroupInformation::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OtherGroupInformation");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OtherGroupInformation");
	_name = String ("");
	_objectClass.clear();
	_businessCategory.clear();
	_commonName.clear();
	_descriptions.clear();
	_organizationName.clear();
	_oU.clear();
	_owner.clear();
	_seeAlso.clear();

}

Boolean UNIX_OtherGroupInformation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ObjectClass"))
			{
				Array<String> objectClassValue;
				property.getValue().get(objectClassValue);
				setObjectClass(objectClassValue);
			}
			else if (String::equal(property.getName().getString(), "BusinessCategory"))
			{
				Array<String> businessCategoryValue;
				property.getValue().get(businessCategoryValue);
				setBusinessCategory(businessCategoryValue);
			}
			else if (String::equal(property.getName().getString(), "CommonName"))
			{
				Array<String> commonNameValue;
				property.getValue().get(commonNameValue);
				setCommonName(commonNameValue);
			}
			else if (String::equal(property.getName().getString(), "Descriptions"))
			{
				Array<String> descriptionsValue;
				property.getValue().get(descriptionsValue);
				setDescriptions(descriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OrganizationName"))
			{
				Array<String> organizationNameValue;
				property.getValue().get(organizationNameValue);
				setOrganizationName(organizationNameValue);
			}
			else if (String::equal(property.getName().getString(), "OU"))
			{
				Array<String> oUValue;
				property.getValue().get(oUValue);
				setOU(oUValue);
			}
			else if (String::equal(property.getName().getString(), "Owner"))
			{
				Array<String> ownerValue;
				property.getValue().get(ownerValue);
				setOwner(ownerValue);
			}
			else if (String::equal(property.getName().getString(), "SeeAlso"))
			{
				Array<String> seeAlsoValue;
				property.getValue().get(seeAlsoValue);
				setSeeAlso(seeAlsoValue);
			}
	}
	return true;
}


Boolean UNIX_OtherGroupInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherGroupInformation::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OtherGroupInformation");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OtherGroupInformation");
	_name = String ("");
	_objectClass.clear();
	_businessCategory.clear();
	_commonName.clear();
	_descriptions.clear();
	_organizationName.clear();
	_oU.clear();
	_owner.clear();
	_seeAlso.clear();
	
	return false;
}

Boolean UNIX_OtherGroupInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherGroupInformation::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OtherGroupInformation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OtherGroupInformation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherGroupInformation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherGroupInformation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherGroupInformation::validateInstance()
{
	return true;
}

