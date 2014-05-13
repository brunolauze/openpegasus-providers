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


UNIX_ResourcePool::UNIX_ResourcePool(void)
{
}

UNIX_ResourcePool::~UNIX_ResourcePool(void)
{
}

Boolean UNIX_ResourcePool::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ResourcePool::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ResourcePool::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ResourcePool::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ResourcePool::getCaption() const
{
	return _caption;
}

void UNIX_ResourcePool::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ResourcePool::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ResourcePool::getDescription() const
{
	return _description;
}

void UNIX_ResourcePool::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ResourcePool::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ResourcePool::getElementName() const
{
	return _elementName;
}

void UNIX_ResourcePool::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ResourcePool::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ResourcePool::getGeneration() const
{
	return _generation;
}

void UNIX_ResourcePool::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ResourcePool::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ResourcePool::getInstallDate() const
{
	return _installDate;
}

void UNIX_ResourcePool::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ResourcePool::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ResourcePool::getName() const
{
	return _name;
}

void UNIX_ResourcePool::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ResourcePool::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ResourcePool::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ResourcePool::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ResourcePool::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ResourcePool::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ResourcePool::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ResourcePool::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ResourcePool::getStatus() const
{
	return _status;
}

void UNIX_ResourcePool::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ResourcePool::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ResourcePool::getHealthState() const
{
	return _healthState;
}

void UNIX_ResourcePool::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ResourcePool::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ResourcePool::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ResourcePool::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ResourcePool::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ResourcePool::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ResourcePool::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ResourcePool::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ResourcePool::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ResourcePool::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ResourcePool::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ResourcePool::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ResourcePool::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ResourcePool::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_ResourcePool::getPoolID() const
{
	return _poolID;
}

void UNIX_ResourcePool::setPoolID(String &value)
{
	_poolID = value;
}

Boolean UNIX_ResourcePool::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_ResourcePool::getPrimordial() const
{
	return _primordial;
}

void UNIX_ResourcePool::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_ResourcePool::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_ResourcePool::getCapacity() const
{
	return _capacity;
}

void UNIX_ResourcePool::setCapacity(Uint64 &value)
{
	_capacity = value;
}

Boolean UNIX_ResourcePool::getReserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVED, getReserved());
	return true;
}

Uint64 UNIX_ResourcePool::getReserved() const
{
	return _reserved;
}

void UNIX_ResourcePool::setReserved(Uint64 &value)
{
	_reserved = value;
}

Boolean UNIX_ResourcePool::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_ResourcePool::getResourceType() const
{
	return _resourceType;
}

void UNIX_ResourcePool::setResourceType(Uint16 &value)
{
	_resourceType = value;
}

Boolean UNIX_ResourcePool::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_ResourcePool::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_ResourcePool::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}

Boolean UNIX_ResourcePool::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_ResourcePool::getResourceSubType() const
{
	return _resourceSubType;
}

void UNIX_ResourcePool::setResourceSubType(String &value)
{
	_resourceSubType = value;
}

Boolean UNIX_ResourcePool::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_ResourcePool::getAllocationUnits() const
{
	return _allocationUnits;
}

void UNIX_ResourcePool::setAllocationUnits(String &value)
{
	_allocationUnits = value;
}

Boolean UNIX_ResourcePool::getConsumedResourceUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMED_RESOURCE_UNITS, getConsumedResourceUnits());
	return true;
}

String UNIX_ResourcePool::getConsumedResourceUnits() const
{
	return _consumedResourceUnits;
}

void UNIX_ResourcePool::setConsumedResourceUnits(String &value)
{
	_consumedResourceUnits = value;
}

Boolean UNIX_ResourcePool::getCurrentlyConsumedResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_CONSUMED_RESOURCE, getCurrentlyConsumedResource());
	return true;
}

Uint64 UNIX_ResourcePool::getCurrentlyConsumedResource() const
{
	return _currentlyConsumedResource;
}

void UNIX_ResourcePool::setCurrentlyConsumedResource(Uint64 &value)
{
	_currentlyConsumedResource = value;
}

Boolean UNIX_ResourcePool::getMaxConsumableResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONSUMABLE_RESOURCE, getMaxConsumableResource());
	return true;
}

Uint64 UNIX_ResourcePool::getMaxConsumableResource() const
{
	return _maxConsumableResource;
}

void UNIX_ResourcePool::setMaxConsumableResource(Uint64 &value)
{
	_maxConsumableResource = value;
}


void UNIX_ResourcePool::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ResourcePool");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_poolID = String ("");
	_primordial = Boolean(false);
	_capacity = Uint64(0);
	_reserved = Uint64(0);
	_resourceType = Uint16(0);
	_otherResourceType = String ("");
	_resourceSubType = String ("");
	_allocationUnits = String ("");
	_consumedResourceUnits = String ("");
	_currentlyConsumedResource = Uint64(0);
	_maxConsumableResource = Uint64(0);

}

Boolean UNIX_ResourcePool::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PoolID"))
			{
				String poolIDValue;
				property.getValue().get(poolIDValue);
				setPoolID(poolIDValue);
			}
			else if (String::equal(property.getName().getString(), "Primordial"))
			{
				Boolean primordialValue;
				property.getValue().get(primordialValue);
				setPrimordial(primordialValue);
			}
			else if (String::equal(property.getName().getString(), "Capacity"))
			{
				Uint64 capacityValue;
				property.getValue().get(capacityValue);
				setCapacity(capacityValue);
			}
			else if (String::equal(property.getName().getString(), "Reserved"))
			{
				Uint64 reservedValue;
				property.getValue().get(reservedValue);
				setReserved(reservedValue);
			}
			else if (String::equal(property.getName().getString(), "ResourceType"))
			{
				Uint16 resourceTypeValue;
				property.getValue().get(resourceTypeValue);
				setResourceType(resourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherResourceType"))
			{
				String otherResourceTypeValue;
				property.getValue().get(otherResourceTypeValue);
				setOtherResourceType(otherResourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ResourceSubType"))
			{
				String resourceSubTypeValue;
				property.getValue().get(resourceSubTypeValue);
				setResourceSubType(resourceSubTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AllocationUnits"))
			{
				String allocationUnitsValue;
				property.getValue().get(allocationUnitsValue);
				setAllocationUnits(allocationUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "ConsumedResourceUnits"))
			{
				String consumedResourceUnitsValue;
				property.getValue().get(consumedResourceUnitsValue);
				setConsumedResourceUnits(consumedResourceUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentlyConsumedResource"))
			{
				Uint64 currentlyConsumedResourceValue;
				property.getValue().get(currentlyConsumedResourceValue);
				setCurrentlyConsumedResource(currentlyConsumedResourceValue);
			}
			else if (String::equal(property.getName().getString(), "MaxConsumableResource"))
			{
				Uint64 maxConsumableResourceValue;
				property.getValue().get(maxConsumableResourceValue);
				setMaxConsumableResource(maxConsumableResourceValue);
			}
	}
	return true;
}


Boolean UNIX_ResourcePool::initialize()
{
	return false;
}

Boolean UNIX_ResourcePool::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ResourcePool");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_poolID = String ("");
	_primordial = Boolean(false);
	_capacity = Uint64(0);
	_reserved = Uint64(0);
	_resourceType = Uint16(0);
	_otherResourceType = String ("");
	_resourceSubType = String ("");
	_allocationUnits = String ("");
	_consumedResourceUnits = String ("");
	_currentlyConsumedResource = Uint64(0);
	_maxConsumableResource = Uint64(0);
	
	return false;
}

Boolean UNIX_ResourcePool::finalize()
{
	return false;
}

Boolean UNIX_ResourcePool::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ResourcePool::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ResourcePool::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ResourcePool::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ResourcePool::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ResourcePool::validateInstance()
{
	return true;
}

