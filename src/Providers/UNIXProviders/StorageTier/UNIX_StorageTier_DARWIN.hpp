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


UNIX_StorageTier::UNIX_StorageTier(void)
{
}

UNIX_StorageTier::~UNIX_StorageTier(void)
{
}

Boolean UNIX_StorageTier::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageTier::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageTier::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageTier::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageTier::getCaption() const
{
	return _caption;
}

void UNIX_StorageTier::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageTier::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageTier::getDescription() const
{
	return _description;
}

void UNIX_StorageTier::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageTier::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageTier::getElementName() const
{
	return _elementName;
}

void UNIX_StorageTier::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageTier::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageTier::getGeneration() const
{
	return _generation;
}

void UNIX_StorageTier::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageTier::getRelativePerformanceOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER, getRelativePerformanceOrder());
	return true;
}

Uint16 UNIX_StorageTier::getRelativePerformanceOrder() const
{
	return _relativePerformanceOrder;
}

void UNIX_StorageTier::setRelativePerformanceOrder(Uint16 &value)
{
	_relativePerformanceOrder = value;
}

Boolean UNIX_StorageTier::getStorageObjectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_OBJECT_TYPE, getStorageObjectType());
	return true;
}

Uint16 UNIX_StorageTier::getStorageObjectType() const
{
	return _storageObjectType;
}

void UNIX_StorageTier::setStorageObjectType(Uint16 &value)
{
	_storageObjectType = value;
}

Boolean UNIX_StorageTier::getTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TECHNOLOGY, getTechnology());
	return true;
}

Uint16 UNIX_StorageTier::getTechnology() const
{
	return _technology;
}

void UNIX_StorageTier::setTechnology(Uint16 &value)
{
	_technology = value;
}

Boolean UNIX_StorageTier::getState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE, getState());
	return true;
}

Uint16 UNIX_StorageTier::getState() const
{
	return _state;
}

void UNIX_StorageTier::setState(Uint16 &value)
{
	_state = value;
}

Boolean UNIX_StorageTier::getDynamic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DYNAMIC, getDynamic());
	return true;
}

Boolean UNIX_StorageTier::getDynamic() const
{
	return _dynamic;
}

void UNIX_StorageTier::setDynamic(Boolean &value)
{
	_dynamic = value;
}

Boolean UNIX_StorageTier::getDeleteOnEmptyStorageTier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_EMPTY_STORAGE_TIER, getDeleteOnEmptyStorageTier());
	return true;
}

Boolean UNIX_StorageTier::getDeleteOnEmptyStorageTier() const
{
	return _deleteOnEmptyStorageTier;
}

void UNIX_StorageTier::setDeleteOnEmptyStorageTier(Boolean &value)
{
	_deleteOnEmptyStorageTier = value;
}

Boolean UNIX_StorageTier::getPercentage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENTAGE, getPercentage());
	return true;
}

Uint16 UNIX_StorageTier::getPercentage() const
{
	return _percentage;
}

void UNIX_StorageTier::setPercentage(Uint16 &value)
{
	_percentage = value;
}

Boolean UNIX_StorageTier::getTotalCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_CAPACITY, getTotalCapacity());
	return true;
}

Uint64 UNIX_StorageTier::getTotalCapacity() const
{
	return _totalCapacity;
}

void UNIX_StorageTier::setTotalCapacity(Uint64 &value)
{
	_totalCapacity = value;
}


void UNIX_StorageTier::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageTier");
	_generation = Uint64(0);
	_relativePerformanceOrder = Uint16(0);
	_storageObjectType = Uint16(0);
	_technology = Uint16(0);
	_state = Uint16(0);
	_dynamic = Boolean(false);
	_deleteOnEmptyStorageTier = Boolean(false);
	_percentage = Uint16(0);
	_totalCapacity = Uint64(0);

}

Boolean UNIX_StorageTier::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RelativePerformanceOrder"))
			{
				Uint16 relativePerformanceOrderValue;
				property.getValue().get(relativePerformanceOrderValue);
				setRelativePerformanceOrder(relativePerformanceOrderValue);
			}
			else if (String::equal(property.getName().getString(), "StorageObjectType"))
			{
				Uint16 storageObjectTypeValue;
				property.getValue().get(storageObjectTypeValue);
				setStorageObjectType(storageObjectTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Technology"))
			{
				Uint16 technologyValue;
				property.getValue().get(technologyValue);
				setTechnology(technologyValue);
			}
			else if (String::equal(property.getName().getString(), "State"))
			{
				Uint16 stateValue;
				property.getValue().get(stateValue);
				setState(stateValue);
			}
			else if (String::equal(property.getName().getString(), "Dynamic"))
			{
				Boolean dynamicValue;
				property.getValue().get(dynamicValue);
				setDynamic(dynamicValue);
			}
			else if (String::equal(property.getName().getString(), "DeleteOnEmptyStorageTier"))
			{
				Boolean deleteOnEmptyStorageTierValue;
				property.getValue().get(deleteOnEmptyStorageTierValue);
				setDeleteOnEmptyStorageTier(deleteOnEmptyStorageTierValue);
			}
			else if (String::equal(property.getName().getString(), "Percentage"))
			{
				Uint16 percentageValue;
				property.getValue().get(percentageValue);
				setPercentage(percentageValue);
			}
			else if (String::equal(property.getName().getString(), "TotalCapacity"))
			{
				Uint64 totalCapacityValue;
				property.getValue().get(totalCapacityValue);
				setTotalCapacity(totalCapacityValue);
			}
	}
	return true;
}


Boolean UNIX_StorageTier::initialize()
{
	return false;
}

Boolean UNIX_StorageTier::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageTier");
	_generation = Uint64(0);
	_relativePerformanceOrder = Uint16(0);
	_storageObjectType = Uint16(0);
	_technology = Uint16(0);
	_state = Uint16(0);
	_dynamic = Boolean(false);
	_deleteOnEmptyStorageTier = Boolean(false);
	_percentage = Uint16(0);
	_totalCapacity = Uint64(0);
	
	return false;
}

Boolean UNIX_StorageTier::finalize()
{
	return false;
}


Boolean UNIX_StorageTier::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageTier::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageTier::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageTier::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageTier::validateInstance()
{
	return true;
}

