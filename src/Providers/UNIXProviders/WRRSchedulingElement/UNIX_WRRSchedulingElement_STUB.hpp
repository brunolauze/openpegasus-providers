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


UNIX_WRRSchedulingElement::UNIX_WRRSchedulingElement(void)
{
}

UNIX_WRRSchedulingElement::~UNIX_WRRSchedulingElement(void)
{
}

Boolean UNIX_WRRSchedulingElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WRRSchedulingElement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WRRSchedulingElement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WRRSchedulingElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WRRSchedulingElement::getCaption() const
{
	return _caption;
}

void UNIX_WRRSchedulingElement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WRRSchedulingElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WRRSchedulingElement::getDescription() const
{
	return _description;
}

void UNIX_WRRSchedulingElement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WRRSchedulingElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WRRSchedulingElement::getElementName() const
{
	return _elementName;
}

void UNIX_WRRSchedulingElement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WRRSchedulingElement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WRRSchedulingElement::getGeneration() const
{
	return _generation;
}

void UNIX_WRRSchedulingElement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WRRSchedulingElement::getWorkConserving(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_CONSERVING, getWorkConserving());
	return true;
}

Boolean UNIX_WRRSchedulingElement::getWorkConserving() const
{
	return _workConserving;
}

void UNIX_WRRSchedulingElement::setWorkConserving(Boolean &value)
{
	_workConserving = value;
}

Boolean UNIX_WRRSchedulingElement::getWeightingFactor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHTING_FACTOR, getWeightingFactor());
	return true;
}

Uint32 UNIX_WRRSchedulingElement::getWeightingFactor() const
{
	return _weightingFactor;
}

void UNIX_WRRSchedulingElement::setWeightingFactor(Uint32 &value)
{
	_weightingFactor = value;
}

Boolean UNIX_WRRSchedulingElement::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_WRRSchedulingElement::getPriority() const
{
	return _priority;
}

void UNIX_WRRSchedulingElement::setPriority(Uint16 &value)
{
	_priority = value;
}


void UNIX_WRRSchedulingElement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WRRSchedulingElement");
	_generation = Uint64(0);
	_workConserving = Boolean(false);
	_weightingFactor = Uint32(0);
	_priority = Uint16(0);

}

Boolean UNIX_WRRSchedulingElement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "WorkConserving"))
			{
				Boolean workConservingValue;
				property.getValue().get(workConservingValue);
				setWorkConserving(workConservingValue);
			}
			else if (String::equal(property.getName().getString(), "WeightingFactor"))
			{
				Uint32 weightingFactorValue;
				property.getValue().get(weightingFactorValue);
				setWeightingFactor(weightingFactorValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint16 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
	}
	return true;
}


Boolean UNIX_WRRSchedulingElement::initialize()
{
	return false;
}

Boolean UNIX_WRRSchedulingElement::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WRRSchedulingElement");
	_generation = Uint64(0);
	_workConserving = Boolean(false);
	_weightingFactor = Uint32(0);
	_priority = Uint16(0);
	
	return false;
}

Boolean UNIX_WRRSchedulingElement::finalize()
{
	return false;
}


Boolean UNIX_WRRSchedulingElement::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WRRSchedulingElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WRRSchedulingElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WRRSchedulingElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WRRSchedulingElement::validateInstance()
{
	return true;
}

