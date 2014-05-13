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


UNIX_IPAddressRange::UNIX_IPAddressRange(void)
{
}

UNIX_IPAddressRange::~UNIX_IPAddressRange(void)
{
}

Boolean UNIX_IPAddressRange::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPAddressRange::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPAddressRange::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPAddressRange::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPAddressRange::getCaption() const
{
	return _caption;
}

void UNIX_IPAddressRange::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPAddressRange::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPAddressRange::getDescription() const
{
	return _description;
}

void UNIX_IPAddressRange::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPAddressRange::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPAddressRange::getElementName() const
{
	return _elementName;
}

void UNIX_IPAddressRange::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPAddressRange::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPAddressRange::getGeneration() const
{
	return _generation;
}

void UNIX_IPAddressRange::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPAddressRange::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_IPAddressRange::getCollectionID() const
{
	return _collectionID;
}

void UNIX_IPAddressRange::setCollectionID(String &value)
{
	_collectionID = value;
}

Boolean UNIX_IPAddressRange::getStartAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_ADDRESS, getStartAddress());
	return true;
}

String UNIX_IPAddressRange::getStartAddress() const
{
	return _startAddress;
}

void UNIX_IPAddressRange::setStartAddress(String &value)
{
	_startAddress = value;
}

Boolean UNIX_IPAddressRange::getEndAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_END_ADDRESS, getEndAddress());
	return true;
}

String UNIX_IPAddressRange::getEndAddress() const
{
	return _endAddress;
}

void UNIX_IPAddressRange::setEndAddress(String &value)
{
	_endAddress = value;
}

Boolean UNIX_IPAddressRange::getTypeOfAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ADDRESS, getTypeOfAddress());
	return true;
}

Uint16 UNIX_IPAddressRange::getTypeOfAddress() const
{
	return _typeOfAddress;
}

void UNIX_IPAddressRange::setTypeOfAddress(Uint16 &value)
{
	_typeOfAddress = value;
}

Boolean UNIX_IPAddressRange::getAllocationRegion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_REGION, getAllocationRegion());
	return true;
}

Uint16 UNIX_IPAddressRange::getAllocationRegion() const
{
	return _allocationRegion;
}

void UNIX_IPAddressRange::setAllocationRegion(Uint16 &value)
{
	_allocationRegion = value;
}


void UNIX_IPAddressRange::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPAddressRange");
	_generation = Uint64(0);
	_collectionID = String ("");
	_startAddress = String ("");
	_endAddress = String ("");
	_typeOfAddress = Uint16(0);
	_allocationRegion = Uint16(0);

}

Boolean UNIX_IPAddressRange::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CollectionID"))
			{
				String collectionIDValue;
				property.getValue().get(collectionIDValue);
				setCollectionID(collectionIDValue);
			}
			else if (String::equal(property.getName().getString(), "StartAddress"))
			{
				String startAddressValue;
				property.getValue().get(startAddressValue);
				setStartAddress(startAddressValue);
			}
			else if (String::equal(property.getName().getString(), "EndAddress"))
			{
				String endAddressValue;
				property.getValue().get(endAddressValue);
				setEndAddress(endAddressValue);
			}
			else if (String::equal(property.getName().getString(), "TypeOfAddress"))
			{
				Uint16 typeOfAddressValue;
				property.getValue().get(typeOfAddressValue);
				setTypeOfAddress(typeOfAddressValue);
			}
			else if (String::equal(property.getName().getString(), "AllocationRegion"))
			{
				Uint16 allocationRegionValue;
				property.getValue().get(allocationRegionValue);
				setAllocationRegion(allocationRegionValue);
			}
	}
	return true;
}


Boolean UNIX_IPAddressRange::initialize()
{
	return false;
}

Boolean UNIX_IPAddressRange::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPAddressRange");
	_generation = Uint64(0);
	_collectionID = String ("");
	_startAddress = String ("");
	_endAddress = String ("");
	_typeOfAddress = Uint16(0);
	_allocationRegion = Uint16(0);
	
	return false;
}

Boolean UNIX_IPAddressRange::finalize()
{
	return false;
}


Boolean UNIX_IPAddressRange::find(const Array<CIMKeyBinding> &kbArray)
{
	return true;
}

Boolean UNIX_IPAddressRange::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPAddressRange::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPAddressRange::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPAddressRange::validateInstance()
{
	return true;
}

