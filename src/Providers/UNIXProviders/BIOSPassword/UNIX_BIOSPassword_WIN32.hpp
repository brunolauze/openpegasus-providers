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


UNIX_BIOSPassword::UNIX_BIOSPassword(void)
{
}

UNIX_BIOSPassword::~UNIX_BIOSPassword(void)
{
}

Boolean UNIX_BIOSPassword::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSPassword::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BIOSPassword::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BIOSPassword::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSPassword::getCaption() const
{
	return _caption;
}

void UNIX_BIOSPassword::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BIOSPassword::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSPassword::getDescription() const
{
	return _description;
}

void UNIX_BIOSPassword::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BIOSPassword::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSPassword::getElementName() const
{
	return _elementName;
}

void UNIX_BIOSPassword::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BIOSPassword::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BIOSPassword::getGeneration() const
{
	return _generation;
}

void UNIX_BIOSPassword::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BIOSPassword::getAttributeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_NAME, getAttributeName());
	return true;
}

String UNIX_BIOSPassword::getAttributeName() const
{
	return _attributeName;
}

void UNIX_BIOSPassword::setAttributeName(String &value)
{
	_attributeName = value;
}

Boolean UNIX_BIOSPassword::getCurrentValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VALUE, getCurrentValue());
	return true;
}

Array<String> UNIX_BIOSPassword::getCurrentValue() const
{
	return _currentValue;
}

void UNIX_BIOSPassword::setCurrentValue(Array<String> &value)
{
	_currentValue = value;
}

Boolean UNIX_BIOSPassword::getDefaultValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VALUE, getDefaultValue());
	return true;
}

Array<String> UNIX_BIOSPassword::getDefaultValue() const
{
	return _defaultValue;
}

void UNIX_BIOSPassword::setDefaultValue(Array<String> &value)
{
	_defaultValue = value;
}

Boolean UNIX_BIOSPassword::getPendingValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PENDING_VALUE, getPendingValue());
	return true;
}

Array<String> UNIX_BIOSPassword::getPendingValue() const
{
	return _pendingValue;
}

void UNIX_BIOSPassword::setPendingValue(Array<String> &value)
{
	_pendingValue = value;
}

Boolean UNIX_BIOSPassword::getIsOrderedList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ORDERED_LIST, getIsOrderedList());
	return true;
}

Boolean UNIX_BIOSPassword::getIsOrderedList() const
{
	return _isOrderedList;
}

void UNIX_BIOSPassword::setIsOrderedList(Boolean &value)
{
	_isOrderedList = value;
}

Boolean UNIX_BIOSPassword::getIsReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_READ_ONLY, getIsReadOnly());
	return true;
}

Boolean UNIX_BIOSPassword::getIsReadOnly() const
{
	return _isReadOnly;
}

void UNIX_BIOSPassword::setIsReadOnly(Boolean &value)
{
	_isReadOnly = value;
}

Boolean UNIX_BIOSPassword::getMinLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LENGTH, getMinLength());
	return true;
}

Uint64 UNIX_BIOSPassword::getMinLength() const
{
	return _minLength;
}

void UNIX_BIOSPassword::setMinLength(Uint64 &value)
{
	_minLength = value;
}

Boolean UNIX_BIOSPassword::getMaxLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LENGTH, getMaxLength());
	return true;
}

Uint64 UNIX_BIOSPassword::getMaxLength() const
{
	return _maxLength;
}

void UNIX_BIOSPassword::setMaxLength(Uint64 &value)
{
	_maxLength = value;
}

Boolean UNIX_BIOSPassword::getPasswordEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_ENCODING, getPasswordEncoding());
	return true;
}

Uint32 UNIX_BIOSPassword::getPasswordEncoding() const
{
	return _passwordEncoding;
}

void UNIX_BIOSPassword::setPasswordEncoding(Uint32 &value)
{
	_passwordEncoding = value;
}

Boolean UNIX_BIOSPassword::getIsSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SET, getIsSet());
	return true;
}

Boolean UNIX_BIOSPassword::getIsSet() const
{
	return _isSet;
}

void UNIX_BIOSPassword::setIsSet(Boolean &value)
{
	_isSet = value;
}


void UNIX_BIOSPassword::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BIOSPassword");
	_generation = Uint64(0);
	_attributeName = String ("");
	_currentValue.clear();
	_defaultValue.clear();
	_pendingValue.clear();
	_isOrderedList = Boolean(false);
	_isReadOnly = Boolean(false);
	_minLength = Uint64(0);
	_maxLength = Uint64(0);
	_passwordEncoding = Uint32(0);
	_isSet = Boolean(false);

}

Boolean UNIX_BIOSPassword::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AttributeName"))
			{
				String attributeNameValue;
				property.getValue().get(attributeNameValue);
				setAttributeName(attributeNameValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentValue"))
			{
				Array<String> currentValueValue;
				property.getValue().get(currentValueValue);
				setCurrentValue(currentValueValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultValue"))
			{
				Array<String> defaultValueValue;
				property.getValue().get(defaultValueValue);
				setDefaultValue(defaultValueValue);
			}
			else if (String::equal(property.getName().getString(), "PendingValue"))
			{
				Array<String> pendingValueValue;
				property.getValue().get(pendingValueValue);
				setPendingValue(pendingValueValue);
			}
			else if (String::equal(property.getName().getString(), "IsOrderedList"))
			{
				Boolean isOrderedListValue;
				property.getValue().get(isOrderedListValue);
				setIsOrderedList(isOrderedListValue);
			}
			else if (String::equal(property.getName().getString(), "IsReadOnly"))
			{
				Boolean isReadOnlyValue;
				property.getValue().get(isReadOnlyValue);
				setIsReadOnly(isReadOnlyValue);
			}
			else if (String::equal(property.getName().getString(), "MinLength"))
			{
				Uint64 minLengthValue;
				property.getValue().get(minLengthValue);
				setMinLength(minLengthValue);
			}
			else if (String::equal(property.getName().getString(), "MaxLength"))
			{
				Uint64 maxLengthValue;
				property.getValue().get(maxLengthValue);
				setMaxLength(maxLengthValue);
			}
			else if (String::equal(property.getName().getString(), "PasswordEncoding"))
			{
				Uint32 passwordEncodingValue;
				property.getValue().get(passwordEncodingValue);
				setPasswordEncoding(passwordEncodingValue);
			}
			else if (String::equal(property.getName().getString(), "IsSet"))
			{
				Boolean isSetValue;
				property.getValue().get(isSetValue);
				setIsSet(isSetValue);
			}
	}
	return true;
}


Boolean UNIX_BIOSPassword::initialize()
{
	return false;
}

Boolean UNIX_BIOSPassword::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BIOSPassword");
	_generation = Uint64(0);
	_attributeName = String ("");
	_currentValue.clear();
	_defaultValue.clear();
	_pendingValue.clear();
	_isOrderedList = Boolean(false);
	_isReadOnly = Boolean(false);
	_minLength = Uint64(0);
	_maxLength = Uint64(0);
	_passwordEncoding = Uint32(0);
	_isSet = Boolean(false);
	
	return false;
}

Boolean UNIX_BIOSPassword::finalize()
{
	return false;
}


Boolean UNIX_BIOSPassword::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_BIOSPassword::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSPassword::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSPassword::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSPassword::validateInstance()
{
	return true;
}

