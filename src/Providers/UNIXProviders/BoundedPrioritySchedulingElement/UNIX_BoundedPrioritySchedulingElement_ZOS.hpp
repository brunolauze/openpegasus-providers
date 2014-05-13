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


UNIX_BoundedPrioritySchedulingElement::UNIX_BoundedPrioritySchedulingElement(void)
{
}

UNIX_BoundedPrioritySchedulingElement::~UNIX_BoundedPrioritySchedulingElement(void)
{
}

Boolean UNIX_BoundedPrioritySchedulingElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BoundedPrioritySchedulingElement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BoundedPrioritySchedulingElement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BoundedPrioritySchedulingElement::getCaption() const
{
	return _caption;
}

void UNIX_BoundedPrioritySchedulingElement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BoundedPrioritySchedulingElement::getDescription() const
{
	return _description;
}

void UNIX_BoundedPrioritySchedulingElement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BoundedPrioritySchedulingElement::getElementName() const
{
	return _elementName;
}

void UNIX_BoundedPrioritySchedulingElement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BoundedPrioritySchedulingElement::getGeneration() const
{
	return _generation;
}

void UNIX_BoundedPrioritySchedulingElement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getWorkConserving(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_CONSERVING, getWorkConserving());
	return true;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getWorkConserving() const
{
	return _workConserving;
}

void UNIX_BoundedPrioritySchedulingElement::setWorkConserving(Boolean &value)
{
	_workConserving = value;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_BoundedPrioritySchedulingElement::getPriority() const
{
	return _priority;
}

void UNIX_BoundedPrioritySchedulingElement::setPriority(Uint16 &value)
{
	_priority = value;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getBandwidthBound(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH_BOUND, getBandwidthBound());
	return true;
}

Uint32 UNIX_BoundedPrioritySchedulingElement::getBandwidthBound() const
{
	return _bandwidthBound;
}

void UNIX_BoundedPrioritySchedulingElement::setBandwidthBound(Uint32 &value)
{
	_bandwidthBound = value;
}


void UNIX_BoundedPrioritySchedulingElement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BoundedPrioritySchedulingElement");
	_generation = Uint64(0);
	_workConserving = Boolean(false);
	_priority = Uint16(0);
	_bandwidthBound = Uint32(0);

}

Boolean UNIX_BoundedPrioritySchedulingElement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BandwidthBound"))
			{
				Uint32 bandwidthBoundValue;
				property.getValue().get(bandwidthBoundValue);
				setBandwidthBound(bandwidthBoundValue);
			}
	}
	return true;
}


Boolean UNIX_BoundedPrioritySchedulingElement::initialize()
{
	return false;
}

Boolean UNIX_BoundedPrioritySchedulingElement::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BoundedPrioritySchedulingElement");
	_generation = Uint64(0);
	_workConserving = Boolean(false);
	_priority = Uint16(0);
	_bandwidthBound = Uint32(0);
	
	return false;
}

Boolean UNIX_BoundedPrioritySchedulingElement::finalize()
{
	return false;
}


Boolean UNIX_BoundedPrioritySchedulingElement::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BoundedPrioritySchedulingElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BoundedPrioritySchedulingElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BoundedPrioritySchedulingElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BoundedPrioritySchedulingElement::validateInstance()
{
	return true;
}

