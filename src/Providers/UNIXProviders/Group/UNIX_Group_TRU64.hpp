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


UNIX_Group::UNIX_Group(void)
{
}

UNIX_Group::~UNIX_Group(void)
{
}

Boolean UNIX_Group::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Group::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Group::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Group::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Group::getCaption() const
{
	return _caption;
}

void UNIX_Group::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Group::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Group::getDescription() const
{
	return _description;
}

void UNIX_Group::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Group::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Group::getElementName() const
{
	return _elementName;
}

void UNIX_Group::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Group::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Group::getGeneration() const
{
	return _generation;
}

void UNIX_Group::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Group::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Group::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Group::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Group::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Group::getName() const
{
	return _name;
}

void UNIX_Group::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Group::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

String UNIX_Group::getBusinessCategory() const
{
	return _businessCategory;
}

void UNIX_Group::setBusinessCategory(String &value)
{
	_businessCategory = value;
}

Boolean UNIX_Group::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_Group::getCommonName() const
{
	return _commonName;
}

void UNIX_Group::setCommonName(String &value)
{
	_commonName = value;
}


void UNIX_Group::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Group");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_Group");
	_name = String ("");
	_businessCategory = String ("");
	_commonName = String ("");

}

Boolean UNIX_Group::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_Group::initialize()
{
	return false;
}

Boolean UNIX_Group::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Group");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_Group");
	_name = String ("");
	_businessCategory = String ("");
	_commonName = String ("");
	
	return false;
}

Boolean UNIX_Group::finalize()
{
	return false;
}

Boolean UNIX_Group::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Group::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Group::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Group::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Group::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Group::validateInstance()
{
	return true;
}

