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


UNIX_BIOSInteger::UNIX_BIOSInteger(void)
{
}

UNIX_BIOSInteger::~UNIX_BIOSInteger(void)
{
}

Boolean UNIX_BIOSInteger::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSInteger::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BIOSInteger::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BIOSInteger::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSInteger::getCaption() const
{
	return _caption;
}

void UNIX_BIOSInteger::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BIOSInteger::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSInteger::getDescription() const
{
	return _description;
}

void UNIX_BIOSInteger::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BIOSInteger::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSInteger::getElementName() const
{
	return _elementName;
}

void UNIX_BIOSInteger::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BIOSInteger::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BIOSInteger::getGeneration() const
{
	return _generation;
}

void UNIX_BIOSInteger::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BIOSInteger::getAttributeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_NAME, getAttributeName());
	return true;
}

String UNIX_BIOSInteger::getAttributeName() const
{
	return _attributeName;
}

void UNIX_BIOSInteger::setAttributeName(String &value)
{
	_attributeName = value;
}

Boolean UNIX_BIOSInteger::getCurrentValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VALUE, getCurrentValue());
	return true;
}

Array<String> UNIX_BIOSInteger::getCurrentValue() const
{
	return _currentValue;
}

void UNIX_BIOSInteger::setCurrentValue(Array<String> &value)
{
	_currentValue = value;
}

Boolean UNIX_BIOSInteger::getDefaultValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VALUE, getDefaultValue());
	return true;
}

Array<String> UNIX_BIOSInteger::getDefaultValue() const
{
	return _defaultValue;
}

void UNIX_BIOSInteger::setDefaultValue(Array<String> &value)
{
	_defaultValue = value;
}

Boolean UNIX_BIOSInteger::getPendingValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PENDING_VALUE, getPendingValue());
	return true;
}

Array<String> UNIX_BIOSInteger::getPendingValue() const
{
	return _pendingValue;
}

void UNIX_BIOSInteger::setPendingValue(Array<String> &value)
{
	_pendingValue = value;
}

Boolean UNIX_BIOSInteger::getIsOrderedList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ORDERED_LIST, getIsOrderedList());
	return true;
}

Boolean UNIX_BIOSInteger::getIsOrderedList() const
{
	return _isOrderedList;
}

void UNIX_BIOSInteger::setIsOrderedList(Boolean &value)
{
	_isOrderedList = value;
}

Boolean UNIX_BIOSInteger::getIsReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_READ_ONLY, getIsReadOnly());
	return true;
}

Boolean UNIX_BIOSInteger::getIsReadOnly() const
{
	return _isReadOnly;
}

void UNIX_BIOSInteger::setIsReadOnly(Boolean &value)
{
	_isReadOnly = value;
}

Boolean UNIX_BIOSInteger::getLowerBound(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_BOUND, getLowerBound());
	return true;
}

Uint64 UNIX_BIOSInteger::getLowerBound() const
{
	return _lowerBound;
}

void UNIX_BIOSInteger::setLowerBound(Uint64 &value)
{
	_lowerBound = value;
}

Boolean UNIX_BIOSInteger::getUpperBound(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_BOUND, getUpperBound());
	return true;
}

Uint64 UNIX_BIOSInteger::getUpperBound() const
{
	return _upperBound;
}

void UNIX_BIOSInteger::setUpperBound(Uint64 &value)
{
	_upperBound = value;
}

Boolean UNIX_BIOSInteger::getProgrammaticUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRAMMATIC_UNIT, getProgrammaticUnit());
	return true;
}

String UNIX_BIOSInteger::getProgrammaticUnit() const
{
	return _programmaticUnit;
}

void UNIX_BIOSInteger::setProgrammaticUnit(String &value)
{
	_programmaticUnit = value;
}

Boolean UNIX_BIOSInteger::getScalarIncrement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCALAR_INCREMENT, getScalarIncrement());
	return true;
}

Uint32 UNIX_BIOSInteger::getScalarIncrement() const
{
	return _scalarIncrement;
}

void UNIX_BIOSInteger::setScalarIncrement(Uint32 &value)
{
	_scalarIncrement = value;
}


void UNIX_BIOSInteger::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BIOSInteger");
	_generation = Uint64(0);
	_attributeName = String ("");
	_currentValue.clear();
	_defaultValue.clear();
	_pendingValue.clear();
	_isOrderedList = Boolean(false);
	_isReadOnly = Boolean(false);
	_lowerBound = Uint64(0);
	_upperBound = Uint64(0);
	_programmaticUnit = String ("");
	_scalarIncrement = Uint32(0);

}

Boolean UNIX_BIOSInteger::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LowerBound"))
			{
				Uint64 lowerBoundValue;
				property.getValue().get(lowerBoundValue);
				setLowerBound(lowerBoundValue);
			}
			else if (String::equal(property.getName().getString(), "UpperBound"))
			{
				Uint64 upperBoundValue;
				property.getValue().get(upperBoundValue);
				setUpperBound(upperBoundValue);
			}
			else if (String::equal(property.getName().getString(), "ProgrammaticUnit"))
			{
				String programmaticUnitValue;
				property.getValue().get(programmaticUnitValue);
				setProgrammaticUnit(programmaticUnitValue);
			}
			else if (String::equal(property.getName().getString(), "ScalarIncrement"))
			{
				Uint32 scalarIncrementValue;
				property.getValue().get(scalarIncrementValue);
				setScalarIncrement(scalarIncrementValue);
			}
	}
	return true;
}


Boolean UNIX_BIOSInteger::initialize()
{
	return false;
}

Boolean UNIX_BIOSInteger::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BIOSInteger");
	_generation = Uint64(0);
	_attributeName = String ("");
	_currentValue.clear();
	_defaultValue.clear();
	_pendingValue.clear();
	_isOrderedList = Boolean(false);
	_isReadOnly = Boolean(false);
	_lowerBound = Uint64(0);
	_upperBound = Uint64(0);
	_programmaticUnit = String ("");
	_scalarIncrement = Uint32(0);
	
	return false;
}

Boolean UNIX_BIOSInteger::finalize()
{
	return false;
}


Boolean UNIX_BIOSInteger::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BIOSInteger::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSInteger::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSInteger::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSInteger::validateInstance()
{
	return true;
}

