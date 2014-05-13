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


UNIX_PhysicalStatisticalInformation::UNIX_PhysicalStatisticalInformation(void)
{
}

UNIX_PhysicalStatisticalInformation::~UNIX_PhysicalStatisticalInformation(void)
{
}

Boolean UNIX_PhysicalStatisticalInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PhysicalStatisticalInformation::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PhysicalStatisticalInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getCaption() const
{
	return _caption;
}

void UNIX_PhysicalStatisticalInformation::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PhysicalStatisticalInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getDescription() const
{
	return _description;
}

void UNIX_PhysicalStatisticalInformation::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PhysicalStatisticalInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getElementName() const
{
	return _elementName;
}

void UNIX_PhysicalStatisticalInformation::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PhysicalStatisticalInformation::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PhysicalStatisticalInformation::getGeneration() const
{
	return _generation;
}

void UNIX_PhysicalStatisticalInformation::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PhysicalStatisticalInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getName() const
{
	return _name;
}

void UNIX_PhysicalStatisticalInformation::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PhysicalStatisticalInformation::getPhysicalCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_CREATION_CLASS_NAME, getPhysicalCreationClassName());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getPhysicalCreationClassName() const
{
	return _physicalCreationClassName;
}

void UNIX_PhysicalStatisticalInformation::setPhysicalCreationClassName(String &value)
{
	_physicalCreationClassName = value;
}

Boolean UNIX_PhysicalStatisticalInformation::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getTag() const
{
	return _tag;
}

void UNIX_PhysicalStatisticalInformation::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_PhysicalStatisticalInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PhysicalStatisticalInformation::setCreationClassName(String &value)
{
	_creationClassName = value;
}


void UNIX_PhysicalStatisticalInformation::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalStatisticalInformation");
	_generation = Uint64(0);
	_name = String ("");
	_physicalCreationClassName = String ("");
	_tag = String ("");
	_creationClassName = String("UNIX_PhysicalStatisticalInformation");

}

Boolean UNIX_PhysicalStatisticalInformation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "PhysicalCreationClassName"))
			{
				String physicalCreationClassNameValue;
				property.getValue().get(physicalCreationClassNameValue);
				setPhysicalCreationClassName(physicalCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Tag"))
			{
				String tagValue;
				property.getValue().get(tagValue);
				setTag(tagValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
	}
	return true;
}


Boolean UNIX_PhysicalStatisticalInformation::initialize()
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalStatisticalInformation");
	_generation = Uint64(0);
	_name = String ("");
	_physicalCreationClassName = String ("");
	_tag = String ("");
	_creationClassName = String("UNIX_PhysicalStatisticalInformation");
	
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::finalize()
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String physicalCreationClassNameKey;
	String tagKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PHYSICAL_CREATION_CLASS_NAME)) physicalCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TAG)) tagKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getPhysicalCreationClassName(), physicalCreationClassNameKey)) && 
			(String::equalNoCase(getTag(), tagKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::validateInstance()
{
	return true;
}

