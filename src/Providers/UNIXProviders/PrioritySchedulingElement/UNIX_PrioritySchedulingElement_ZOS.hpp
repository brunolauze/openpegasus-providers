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


UNIX_PrioritySchedulingElement::UNIX_PrioritySchedulingElement(void)
{
}

UNIX_PrioritySchedulingElement::~UNIX_PrioritySchedulingElement(void)
{
}

Boolean UNIX_PrioritySchedulingElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrioritySchedulingElement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrioritySchedulingElement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrioritySchedulingElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrioritySchedulingElement::getCaption() const
{
	return _caption;
}

void UNIX_PrioritySchedulingElement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrioritySchedulingElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrioritySchedulingElement::getDescription() const
{
	return _description;
}

void UNIX_PrioritySchedulingElement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrioritySchedulingElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrioritySchedulingElement::getElementName() const
{
	return _elementName;
}

void UNIX_PrioritySchedulingElement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrioritySchedulingElement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrioritySchedulingElement::getGeneration() const
{
	return _generation;
}

void UNIX_PrioritySchedulingElement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrioritySchedulingElement::getWorkConserving(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_CONSERVING, getWorkConserving());
	return true;
}

Boolean UNIX_PrioritySchedulingElement::getWorkConserving() const
{
	return _workConserving;
}

void UNIX_PrioritySchedulingElement::setWorkConserving(Boolean &value)
{
	_workConserving = value;
}

Boolean UNIX_PrioritySchedulingElement::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_PrioritySchedulingElement::getPriority() const
{
	return _priority;
}

void UNIX_PrioritySchedulingElement::setPriority(Uint16 &value)
{
	_priority = value;
}


void UNIX_PrioritySchedulingElement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrioritySchedulingElement");
	_generation = Uint64(0);
	_workConserving = Boolean(false);
	_priority = Uint16(0);

}

Boolean UNIX_PrioritySchedulingElement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint16 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
	}
	return true;
}


Boolean UNIX_PrioritySchedulingElement::initialize()
{
	return false;
}

Boolean UNIX_PrioritySchedulingElement::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrioritySchedulingElement");
	_generation = Uint64(0);
	_workConserving = Boolean(false);
	_priority = Uint16(0);
	
	return false;
}

Boolean UNIX_PrioritySchedulingElement::finalize()
{
	return false;
}


Boolean UNIX_PrioritySchedulingElement::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrioritySchedulingElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrioritySchedulingElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrioritySchedulingElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrioritySchedulingElement::validateInstance()
{
	return true;
}

