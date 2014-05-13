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


UNIX_ConfigurationCapacity::UNIX_ConfigurationCapacity(void)
{
}

UNIX_ConfigurationCapacity::~UNIX_ConfigurationCapacity(void)
{
}

Boolean UNIX_ConfigurationCapacity::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ConfigurationCapacity::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ConfigurationCapacity::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ConfigurationCapacity::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ConfigurationCapacity::getCaption() const
{
	return _caption;
}

void UNIX_ConfigurationCapacity::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ConfigurationCapacity::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ConfigurationCapacity::getDescription() const
{
	return _description;
}

void UNIX_ConfigurationCapacity::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ConfigurationCapacity::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ConfigurationCapacity::getElementName() const
{
	return _elementName;
}

void UNIX_ConfigurationCapacity::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ConfigurationCapacity::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ConfigurationCapacity::getGeneration() const
{
	return _generation;
}

void UNIX_ConfigurationCapacity::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ConfigurationCapacity::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ConfigurationCapacity::getName() const
{
	return _name;
}

void UNIX_ConfigurationCapacity::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ConfigurationCapacity::getObjectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_TYPE, getObjectType());
	return true;
}

Uint16 UNIX_ConfigurationCapacity::getObjectType() const
{
	return _objectType;
}

void UNIX_ConfigurationCapacity::setObjectType(Uint16 &value)
{
	_objectType = value;
}

Boolean UNIX_ConfigurationCapacity::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_ConfigurationCapacity::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_ConfigurationCapacity::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_ConfigurationCapacity::getMinimumCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_CAPACITY, getMinimumCapacity());
	return true;
}

Uint64 UNIX_ConfigurationCapacity::getMinimumCapacity() const
{
	return _minimumCapacity;
}

void UNIX_ConfigurationCapacity::setMinimumCapacity(Uint64 &value)
{
	_minimumCapacity = value;
}

Boolean UNIX_ConfigurationCapacity::getMaximumCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_CAPACITY, getMaximumCapacity());
	return true;
}

Uint64 UNIX_ConfigurationCapacity::getMaximumCapacity() const
{
	return _maximumCapacity;
}

void UNIX_ConfigurationCapacity::setMaximumCapacity(Uint64 &value)
{
	_maximumCapacity = value;
}

Boolean UNIX_ConfigurationCapacity::getIncrement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCREMENT, getIncrement());
	return true;
}

Uint32 UNIX_ConfigurationCapacity::getIncrement() const
{
	return _increment;
}

void UNIX_ConfigurationCapacity::setIncrement(Uint32 &value)
{
	_increment = value;
}

Boolean UNIX_ConfigurationCapacity::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_ConfigurationCapacity::getVendorCompatibilityStrings() const
{
	return _vendorCompatibilityStrings;
}

void UNIX_ConfigurationCapacity::setVendorCompatibilityStrings(Array<String> &value)
{
	_vendorCompatibilityStrings = value;
}


void UNIX_ConfigurationCapacity::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ConfigurationCapacity");
	_generation = Uint64(0);
	_name = String ("");
	_objectType = Uint16(0);
	_otherTypeDescription = String ("");
	_minimumCapacity = Uint64(0);
	_maximumCapacity = Uint64(0);
	_increment = Uint32(0);
	_vendorCompatibilityStrings.clear();

}

Boolean UNIX_ConfigurationCapacity::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ObjectType"))
			{
				Uint16 objectTypeValue;
				property.getValue().get(objectTypeValue);
				setObjectType(objectTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "MinimumCapacity"))
			{
				Uint64 minimumCapacityValue;
				property.getValue().get(minimumCapacityValue);
				setMinimumCapacity(minimumCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumCapacity"))
			{
				Uint64 maximumCapacityValue;
				property.getValue().get(maximumCapacityValue);
				setMaximumCapacity(maximumCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "Increment"))
			{
				Uint32 incrementValue;
				property.getValue().get(incrementValue);
				setIncrement(incrementValue);
			}
			else if (String::equal(property.getName().getString(), "VendorCompatibilityStrings"))
			{
				Array<String> vendorCompatibilityStringsValue;
				property.getValue().get(vendorCompatibilityStringsValue);
				setVendorCompatibilityStrings(vendorCompatibilityStringsValue);
			}
	}
	return true;
}


Boolean UNIX_ConfigurationCapacity::initialize()
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ConfigurationCapacity");
	_generation = Uint64(0);
	_name = String ("");
	_objectType = Uint16(0);
	_otherTypeDescription = String ("");
	_minimumCapacity = Uint64(0);
	_maximumCapacity = Uint64(0);
	_increment = Uint32(0);
	_vendorCompatibilityStrings.clear();
	
	return false;
}

Boolean UNIX_ConfigurationCapacity::finalize()
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String objectTypeKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OBJECT_TYPE)) objectTypeKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getName(), nameKey)) && 
			(String::equalNoCase(String(std::to_string(getObjectType()).c_str()), objectTypeKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ConfigurationCapacity::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::validateInstance()
{
	return true;
}

