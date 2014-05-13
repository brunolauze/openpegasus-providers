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


UNIX_BIOSEnumeration::UNIX_BIOSEnumeration(void)
{
}

UNIX_BIOSEnumeration::~UNIX_BIOSEnumeration(void)
{
}

Boolean UNIX_BIOSEnumeration::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSEnumeration::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BIOSEnumeration::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BIOSEnumeration::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSEnumeration::getCaption() const
{
	return _caption;
}

void UNIX_BIOSEnumeration::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BIOSEnumeration::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSEnumeration::getDescription() const
{
	return _description;
}

void UNIX_BIOSEnumeration::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BIOSEnumeration::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSEnumeration::getElementName() const
{
	return _elementName;
}

void UNIX_BIOSEnumeration::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BIOSEnumeration::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BIOSEnumeration::getGeneration() const
{
	return _generation;
}

void UNIX_BIOSEnumeration::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BIOSEnumeration::getAttributeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_NAME, getAttributeName());
	return true;
}

String UNIX_BIOSEnumeration::getAttributeName() const
{
	return _attributeName;
}

void UNIX_BIOSEnumeration::setAttributeName(String &value)
{
	_attributeName = value;
}

Boolean UNIX_BIOSEnumeration::getCurrentValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VALUE, getCurrentValue());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getCurrentValue() const
{
	return _currentValue;
}

void UNIX_BIOSEnumeration::setCurrentValue(Array<String> &value)
{
	_currentValue = value;
}

Boolean UNIX_BIOSEnumeration::getDefaultValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VALUE, getDefaultValue());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getDefaultValue() const
{
	return _defaultValue;
}

void UNIX_BIOSEnumeration::setDefaultValue(Array<String> &value)
{
	_defaultValue = value;
}

Boolean UNIX_BIOSEnumeration::getPendingValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PENDING_VALUE, getPendingValue());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getPendingValue() const
{
	return _pendingValue;
}

void UNIX_BIOSEnumeration::setPendingValue(Array<String> &value)
{
	_pendingValue = value;
}

Boolean UNIX_BIOSEnumeration::getIsOrderedList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ORDERED_LIST, getIsOrderedList());
	return true;
}

Boolean UNIX_BIOSEnumeration::getIsOrderedList() const
{
	return _isOrderedList;
}

void UNIX_BIOSEnumeration::setIsOrderedList(Boolean &value)
{
	_isOrderedList = value;
}

Boolean UNIX_BIOSEnumeration::getIsReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_READ_ONLY, getIsReadOnly());
	return true;
}

Boolean UNIX_BIOSEnumeration::getIsReadOnly() const
{
	return _isReadOnly;
}

void UNIX_BIOSEnumeration::setIsReadOnly(Boolean &value)
{
	_isReadOnly = value;
}

Boolean UNIX_BIOSEnumeration::getPossibleValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_VALUES, getPossibleValues());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getPossibleValues() const
{
	return _possibleValues;
}

void UNIX_BIOSEnumeration::setPossibleValues(Array<String> &value)
{
	_possibleValues = value;
}

Boolean UNIX_BIOSEnumeration::getPossibleValuesDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_VALUES_DESCRIPTION, getPossibleValuesDescription());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getPossibleValuesDescription() const
{
	return _possibleValuesDescription;
}

void UNIX_BIOSEnumeration::setPossibleValuesDescription(Array<String> &value)
{
	_possibleValuesDescription = value;
}


void UNIX_BIOSEnumeration::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BIOSEnumeration");
	_generation = Uint64(0);
	_attributeName = String ("");
	_currentValue.clear();
	_defaultValue.clear();
	_pendingValue.clear();
	_isOrderedList = Boolean(false);
	_isReadOnly = Boolean(false);
	_possibleValues.clear();
	_possibleValuesDescription.clear();

}

Boolean UNIX_BIOSEnumeration::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PossibleValues"))
			{
				Array<String> possibleValuesValue;
				property.getValue().get(possibleValuesValue);
				setPossibleValues(possibleValuesValue);
			}
			else if (String::equal(property.getName().getString(), "PossibleValuesDescription"))
			{
				Array<String> possibleValuesDescriptionValue;
				property.getValue().get(possibleValuesDescriptionValue);
				setPossibleValuesDescription(possibleValuesDescriptionValue);
			}
	}
	return true;
}


Boolean UNIX_BIOSEnumeration::initialize()
{
	return false;
}

Boolean UNIX_BIOSEnumeration::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BIOSEnumeration");
	_generation = Uint64(0);
	_attributeName = String ("");
	_currentValue.clear();
	_defaultValue.clear();
	_pendingValue.clear();
	_isOrderedList = Boolean(false);
	_isReadOnly = Boolean(false);
	_possibleValues.clear();
	_possibleValuesDescription.clear();
	
	return false;
}

Boolean UNIX_BIOSEnumeration::finalize()
{
	return false;
}


Boolean UNIX_BIOSEnumeration::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BIOSEnumeration::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSEnumeration::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSEnumeration::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSEnumeration::validateInstance()
{
	return true;
}

