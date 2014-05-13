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


UNIX_AllocationSchedulingElement::UNIX_AllocationSchedulingElement(void)
{
}

UNIX_AllocationSchedulingElement::~UNIX_AllocationSchedulingElement(void)
{
}

Boolean UNIX_AllocationSchedulingElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AllocationSchedulingElement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AllocationSchedulingElement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AllocationSchedulingElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AllocationSchedulingElement::getCaption() const
{
	return _caption;
}

void UNIX_AllocationSchedulingElement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AllocationSchedulingElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AllocationSchedulingElement::getDescription() const
{
	return _description;
}

void UNIX_AllocationSchedulingElement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AllocationSchedulingElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AllocationSchedulingElement::getElementName() const
{
	return _elementName;
}

void UNIX_AllocationSchedulingElement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AllocationSchedulingElement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AllocationSchedulingElement::getGeneration() const
{
	return _generation;
}

void UNIX_AllocationSchedulingElement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AllocationSchedulingElement::getWorkConserving(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_CONSERVING, getWorkConserving());
	return true;
}

Boolean UNIX_AllocationSchedulingElement::getWorkConserving() const
{
	return _workConserving;
}

void UNIX_AllocationSchedulingElement::setWorkConserving(Boolean &value)
{
	_workConserving = value;
}

Boolean UNIX_AllocationSchedulingElement::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

Uint16 UNIX_AllocationSchedulingElement::getAllocationUnits() const
{
	return _allocationUnits;
}

void UNIX_AllocationSchedulingElement::setAllocationUnits(Uint16 &value)
{
	_allocationUnits = value;
}

Boolean UNIX_AllocationSchedulingElement::getBandwidthAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH_ALLOCATION, getBandwidthAllocation());
	return true;
}

Uint32 UNIX_AllocationSchedulingElement::getBandwidthAllocation() const
{
	return _bandwidthAllocation;
}

void UNIX_AllocationSchedulingElement::setBandwidthAllocation(Uint32 &value)
{
	_bandwidthAllocation = value;
}

Boolean UNIX_AllocationSchedulingElement::getBurstAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_ALLOCATION, getBurstAllocation());
	return true;
}

Uint32 UNIX_AllocationSchedulingElement::getBurstAllocation() const
{
	return _burstAllocation;
}

void UNIX_AllocationSchedulingElement::setBurstAllocation(Uint32 &value)
{
	_burstAllocation = value;
}

Boolean UNIX_AllocationSchedulingElement::getCanShare(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_SHARE, getCanShare());
	return true;
}

Boolean UNIX_AllocationSchedulingElement::getCanShare() const
{
	return _canShare;
}

void UNIX_AllocationSchedulingElement::setCanShare(Boolean &value)
{
	_canShare = value;
}

Boolean UNIX_AllocationSchedulingElement::getWorkFlexible(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_FLEXIBLE, getWorkFlexible());
	return true;
}

Boolean UNIX_AllocationSchedulingElement::getWorkFlexible() const
{
	return _workFlexible;
}

void UNIX_AllocationSchedulingElement::setWorkFlexible(Boolean &value)
{
	_workFlexible = value;
}


void UNIX_AllocationSchedulingElement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AllocationSchedulingElement");
	_generation = Uint64(0);
	_workConserving = Boolean(false);
	_allocationUnits = Uint16(0);
	_bandwidthAllocation = Uint32(0);
	_burstAllocation = Uint32(0);
	_canShare = Boolean(false);
	_workFlexible = Boolean(false);

}

Boolean UNIX_AllocationSchedulingElement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AllocationUnits"))
			{
				Uint16 allocationUnitsValue;
				property.getValue().get(allocationUnitsValue);
				setAllocationUnits(allocationUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "BandwidthAllocation"))
			{
				Uint32 bandwidthAllocationValue;
				property.getValue().get(bandwidthAllocationValue);
				setBandwidthAllocation(bandwidthAllocationValue);
			}
			else if (String::equal(property.getName().getString(), "BurstAllocation"))
			{
				Uint32 burstAllocationValue;
				property.getValue().get(burstAllocationValue);
				setBurstAllocation(burstAllocationValue);
			}
			else if (String::equal(property.getName().getString(), "CanShare"))
			{
				Boolean canShareValue;
				property.getValue().get(canShareValue);
				setCanShare(canShareValue);
			}
			else if (String::equal(property.getName().getString(), "WorkFlexible"))
			{
				Boolean workFlexibleValue;
				property.getValue().get(workFlexibleValue);
				setWorkFlexible(workFlexibleValue);
			}
	}
	return true;
}


Boolean UNIX_AllocationSchedulingElement::initialize()
{
	return false;
}

Boolean UNIX_AllocationSchedulingElement::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AllocationSchedulingElement");
	_generation = Uint64(0);
	_workConserving = Boolean(false);
	_allocationUnits = Uint16(0);
	_bandwidthAllocation = Uint32(0);
	_burstAllocation = Uint32(0);
	_canShare = Boolean(false);
	_workFlexible = Boolean(false);
	
	return false;
}

Boolean UNIX_AllocationSchedulingElement::finalize()
{
	return false;
}


Boolean UNIX_AllocationSchedulingElement::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AllocationSchedulingElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AllocationSchedulingElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AllocationSchedulingElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AllocationSchedulingElement::validateInstance()
{
	return true;
}

