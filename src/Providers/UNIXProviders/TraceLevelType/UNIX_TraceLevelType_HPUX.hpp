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


UNIX_TraceLevelType::UNIX_TraceLevelType(void)
{
}

UNIX_TraceLevelType::~UNIX_TraceLevelType(void)
{
}

Boolean UNIX_TraceLevelType::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TraceLevelType::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TraceLevelType::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TraceLevelType::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TraceLevelType::getCaption() const
{
	return _caption;
}

void UNIX_TraceLevelType::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TraceLevelType::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TraceLevelType::getDescription() const
{
	return _description;
}

void UNIX_TraceLevelType::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TraceLevelType::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TraceLevelType::getElementName() const
{
	return _elementName;
}

void UNIX_TraceLevelType::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TraceLevelType::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TraceLevelType::getGeneration() const
{
	return _generation;
}

void UNIX_TraceLevelType::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TraceLevelType::getBaseType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_TYPE, getBaseType());
	return true;
}

Uint16 UNIX_TraceLevelType::getBaseType() const
{
	return _baseType;
}

void UNIX_TraceLevelType::setBaseType(Uint16 &value)
{
	_baseType = value;
}

Boolean UNIX_TraceLevelType::getTraceValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRACE_VALUES, getTraceValues());
	return true;
}

Array<Uint32> UNIX_TraceLevelType::getTraceValues() const
{
	return _traceValues;
}

void UNIX_TraceLevelType::setTraceValues(Array<Uint32> &value)
{
	_traceValues = value;
}

Boolean UNIX_TraceLevelType::getValueDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALUE_DESCRIPTIONS, getValueDescriptions());
	return true;
}

Array<String> UNIX_TraceLevelType::getValueDescriptions() const
{
	return _valueDescriptions;
}

void UNIX_TraceLevelType::setValueDescriptions(Array<String> &value)
{
	_valueDescriptions = value;
}


void UNIX_TraceLevelType::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TraceLevelType");
	_generation = Uint64(0);
	_baseType = Uint16(0);
	_traceValues.clear();
	_valueDescriptions.clear();

}

Boolean UNIX_TraceLevelType::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BaseType"))
			{
				Uint16 baseTypeValue;
				property.getValue().get(baseTypeValue);
				setBaseType(baseTypeValue);
			}
			else if (String::equal(property.getName().getString(), "TraceValues"))
			{
				Array<Uint32> traceValuesValue;
				property.getValue().get(traceValuesValue);
				setTraceValues(traceValuesValue);
			}
			else if (String::equal(property.getName().getString(), "ValueDescriptions"))
			{
				Array<String> valueDescriptionsValue;
				property.getValue().get(valueDescriptionsValue);
				setValueDescriptions(valueDescriptionsValue);
			}
	}
	return true;
}


Boolean UNIX_TraceLevelType::initialize()
{
	return false;
}

Boolean UNIX_TraceLevelType::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TraceLevelType");
	_generation = Uint64(0);
	_baseType = Uint16(0);
	_traceValues.clear();
	_valueDescriptions.clear();
	
	return false;
}

Boolean UNIX_TraceLevelType::finalize()
{
	return false;
}


Boolean UNIX_TraceLevelType::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TraceLevelType::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TraceLevelType::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TraceLevelType::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TraceLevelType::validateInstance()
{
	return true;
}

