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


UNIX_StoragePool::UNIX_StoragePool(void)
{
}

UNIX_StoragePool::~UNIX_StoragePool(void)
{
}

Boolean UNIX_StoragePool::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StoragePool::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StoragePool::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StoragePool::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StoragePool::getCaption() const
{
	return _caption;
}

void UNIX_StoragePool::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StoragePool::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StoragePool::getDescription() const
{
	return _description;
}

void UNIX_StoragePool::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StoragePool::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StoragePool::getElementName() const
{
	return _elementName;
}

void UNIX_StoragePool::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StoragePool::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StoragePool::getGeneration() const
{
	return _generation;
}

void UNIX_StoragePool::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StoragePool::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StoragePool::getInstallDate() const
{
	return _installDate;
}

void UNIX_StoragePool::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_StoragePool::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StoragePool::getName() const
{
	return _name;
}

void UNIX_StoragePool::setName(String &value)
{
	_name = value;
}

Boolean UNIX_StoragePool::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StoragePool::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_StoragePool::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_StoragePool::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StoragePool::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_StoragePool::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_StoragePool::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StoragePool::getStatus() const
{
	return _status;
}

void UNIX_StoragePool::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_StoragePool::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StoragePool::getHealthState() const
{
	return _healthState;
}

void UNIX_StoragePool::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_StoragePool::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StoragePool::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_StoragePool::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_StoragePool::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StoragePool::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_StoragePool::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_StoragePool::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StoragePool::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_StoragePool::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_StoragePool::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StoragePool::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_StoragePool::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_StoragePool::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_StoragePool::getPoolID() const
{
	return _poolID;
}

void UNIX_StoragePool::setPoolID(String &value)
{
	_poolID = value;
}

Boolean UNIX_StoragePool::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_StoragePool::getPrimordial() const
{
	return _primordial;
}

void UNIX_StoragePool::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_StoragePool::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_StoragePool::getCapacity() const
{
	return _capacity;
}

void UNIX_StoragePool::setCapacity(Uint64 &value)
{
	_capacity = value;
}

Boolean UNIX_StoragePool::getReserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVED, getReserved());
	return true;
}

Uint64 UNIX_StoragePool::getReserved() const
{
	return _reserved;
}

void UNIX_StoragePool::setReserved(Uint64 &value)
{
	_reserved = value;
}

Boolean UNIX_StoragePool::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_StoragePool::getResourceType() const
{
	return _resourceType;
}

void UNIX_StoragePool::setResourceType(Uint16 &value)
{
	_resourceType = value;
}

Boolean UNIX_StoragePool::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_StoragePool::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_StoragePool::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}

Boolean UNIX_StoragePool::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_StoragePool::getResourceSubType() const
{
	return _resourceSubType;
}

void UNIX_StoragePool::setResourceSubType(String &value)
{
	_resourceSubType = value;
}

Boolean UNIX_StoragePool::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_StoragePool::getAllocationUnits() const
{
	return _allocationUnits;
}

void UNIX_StoragePool::setAllocationUnits(String &value)
{
	_allocationUnits = value;
}

Boolean UNIX_StoragePool::getConsumedResourceUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMED_RESOURCE_UNITS, getConsumedResourceUnits());
	return true;
}

String UNIX_StoragePool::getConsumedResourceUnits() const
{
	return _consumedResourceUnits;
}

void UNIX_StoragePool::setConsumedResourceUnits(String &value)
{
	_consumedResourceUnits = value;
}

Boolean UNIX_StoragePool::getCurrentlyConsumedResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_CONSUMED_RESOURCE, getCurrentlyConsumedResource());
	return true;
}

Uint64 UNIX_StoragePool::getCurrentlyConsumedResource() const
{
	return _currentlyConsumedResource;
}

void UNIX_StoragePool::setCurrentlyConsumedResource(Uint64 &value)
{
	_currentlyConsumedResource = value;
}

Boolean UNIX_StoragePool::getMaxConsumableResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONSUMABLE_RESOURCE, getMaxConsumableResource());
	return true;
}

Uint64 UNIX_StoragePool::getMaxConsumableResource() const
{
	return _maxConsumableResource;
}

void UNIX_StoragePool::setMaxConsumableResource(Uint64 &value)
{
	_maxConsumableResource = value;
}

Boolean UNIX_StoragePool::getTotalManagedSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MANAGED_SPACE, getTotalManagedSpace());
	return true;
}

Uint64 UNIX_StoragePool::getTotalManagedSpace() const
{
	return _totalManagedSpace;
}

void UNIX_StoragePool::setTotalManagedSpace(Uint64 &value)
{
	_totalManagedSpace = value;
}

Boolean UNIX_StoragePool::getRemainingManagedSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_MANAGED_SPACE, getRemainingManagedSpace());
	return true;
}

Uint64 UNIX_StoragePool::getRemainingManagedSpace() const
{
	return _remainingManagedSpace;
}

void UNIX_StoragePool::setRemainingManagedSpace(Uint64 &value)
{
	_remainingManagedSpace = value;
}

Boolean UNIX_StoragePool::getLowSpaceWarningThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOW_SPACE_WARNING_THRESHOLD, getLowSpaceWarningThreshold());
	return true;
}

Uint16 UNIX_StoragePool::getLowSpaceWarningThreshold() const
{
	return _lowSpaceWarningThreshold;
}

void UNIX_StoragePool::setLowSpaceWarningThreshold(Uint16 &value)
{
	_lowSpaceWarningThreshold = value;
}

Boolean UNIX_StoragePool::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_StoragePool::getUsage() const
{
	return _usage;
}

void UNIX_StoragePool::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_StoragePool::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_StoragePool::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_StoragePool::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_StoragePool::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_StoragePool::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_StoragePool::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_StoragePool::getCapacityInMigratingSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY_IN_MIGRATING_SOURCE, getCapacityInMigratingSource());
	return true;
}

Uint64 UNIX_StoragePool::getCapacityInMigratingSource() const
{
	return _capacityInMigratingSource;
}

void UNIX_StoragePool::setCapacityInMigratingSource(Uint64 &value)
{
	_capacityInMigratingSource = value;
}

Boolean UNIX_StoragePool::getCapacityInMigratingTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY_IN_MIGRATING_TARGET, getCapacityInMigratingTarget());
	return true;
}

Uint64 UNIX_StoragePool::getCapacityInMigratingTarget() const
{
	return _capacityInMigratingTarget;
}

void UNIX_StoragePool::setCapacityInMigratingTarget(Uint64 &value)
{
	_capacityInMigratingTarget = value;
}

Boolean UNIX_StoragePool::getSpaceLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT, getSpaceLimit());
	return true;
}

Uint64 UNIX_StoragePool::getSpaceLimit() const
{
	return _spaceLimit;
}

void UNIX_StoragePool::setSpaceLimit(Uint64 &value)
{
	_spaceLimit = value;
}

Boolean UNIX_StoragePool::getSpaceLimitDetermination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_DETERMINATION, getSpaceLimitDetermination());
	return true;
}

Uint16 UNIX_StoragePool::getSpaceLimitDetermination() const
{
	return _spaceLimitDetermination;
}

void UNIX_StoragePool::setSpaceLimitDetermination(Uint16 &value)
{
	_spaceLimitDetermination = value;
}

Boolean UNIX_StoragePool::getThinProvisionMetaDataSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THIN_PROVISION_META_DATA_SPACE, getThinProvisionMetaDataSpace());
	return true;
}

Uint64 UNIX_StoragePool::getThinProvisionMetaDataSpace() const
{
	return _thinProvisionMetaDataSpace;
}

void UNIX_StoragePool::setThinProvisionMetaDataSpace(Uint64 &value)
{
	_thinProvisionMetaDataSpace = value;
}

Boolean UNIX_StoragePool::getElementsShareSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENTS_SHARE_SPACE, getElementsShareSpace());
	return true;
}

Boolean UNIX_StoragePool::getElementsShareSpace() const
{
	return _elementsShareSpace;
}

void UNIX_StoragePool::setElementsShareSpace(Boolean &value)
{
	_elementsShareSpace = value;
}

Boolean UNIX_StoragePool::getReservedSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVED_SPACE, getReservedSpace());
	return true;
}

Uint64 UNIX_StoragePool::getReservedSpace() const
{
	return _reservedSpace;
}

void UNIX_StoragePool::setReservedSpace(Uint64 &value)
{
	_reservedSpace = value;
}


void UNIX_StoragePool::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StoragePool");
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
	_totalManagedSpace = Uint64(0);
	_remainingManagedSpace = Uint64(0);
	_lowSpaceWarningThreshold = Uint16(0);
	_usage = Uint16(0);
	_otherUsageDescription = String ("");
	_clientSettableUsage.clear();
	_capacityInMigratingSource = Uint64(0);
	_capacityInMigratingTarget = Uint64(0);
	_spaceLimit = Uint64(0);
	_spaceLimitDetermination = Uint16(0);
	_thinProvisionMetaDataSpace = Uint64(0);
	_elementsShareSpace = Boolean(false);
	_reservedSpace = Uint64(0);

}

Boolean UNIX_StoragePool::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TotalManagedSpace"))
			{
				Uint64 totalManagedSpaceValue;
				property.getValue().get(totalManagedSpaceValue);
				setTotalManagedSpace(totalManagedSpaceValue);
			}
			else if (String::equal(property.getName().getString(), "RemainingManagedSpace"))
			{
				Uint64 remainingManagedSpaceValue;
				property.getValue().get(remainingManagedSpaceValue);
				setRemainingManagedSpace(remainingManagedSpaceValue);
			}
			else if (String::equal(property.getName().getString(), "LowSpaceWarningThreshold"))
			{
				Uint16 lowSpaceWarningThresholdValue;
				property.getValue().get(lowSpaceWarningThresholdValue);
				setLowSpaceWarningThreshold(lowSpaceWarningThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "Usage"))
			{
				Uint16 usageValue;
				property.getValue().get(usageValue);
				setUsage(usageValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUsageDescription"))
			{
				String otherUsageDescriptionValue;
				property.getValue().get(otherUsageDescriptionValue);
				setOtherUsageDescription(otherUsageDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ClientSettableUsage"))
			{
				Array<Uint16> clientSettableUsageValue;
				property.getValue().get(clientSettableUsageValue);
				setClientSettableUsage(clientSettableUsageValue);
			}
			else if (String::equal(property.getName().getString(), "CapacityInMigratingSource"))
			{
				Uint64 capacityInMigratingSourceValue;
				property.getValue().get(capacityInMigratingSourceValue);
				setCapacityInMigratingSource(capacityInMigratingSourceValue);
			}
			else if (String::equal(property.getName().getString(), "CapacityInMigratingTarget"))
			{
				Uint64 capacityInMigratingTargetValue;
				property.getValue().get(capacityInMigratingTargetValue);
				setCapacityInMigratingTarget(capacityInMigratingTargetValue);
			}
			else if (String::equal(property.getName().getString(), "SpaceLimit"))
			{
				Uint64 spaceLimitValue;
				property.getValue().get(spaceLimitValue);
				setSpaceLimit(spaceLimitValue);
			}
			else if (String::equal(property.getName().getString(), "SpaceLimitDetermination"))
			{
				Uint16 spaceLimitDeterminationValue;
				property.getValue().get(spaceLimitDeterminationValue);
				setSpaceLimitDetermination(spaceLimitDeterminationValue);
			}
			else if (String::equal(property.getName().getString(), "ThinProvisionMetaDataSpace"))
			{
				Uint64 thinProvisionMetaDataSpaceValue;
				property.getValue().get(thinProvisionMetaDataSpaceValue);
				setThinProvisionMetaDataSpace(thinProvisionMetaDataSpaceValue);
			}
			else if (String::equal(property.getName().getString(), "ElementsShareSpace"))
			{
				Boolean elementsShareSpaceValue;
				property.getValue().get(elementsShareSpaceValue);
				setElementsShareSpace(elementsShareSpaceValue);
			}
			else if (String::equal(property.getName().getString(), "ReservedSpace"))
			{
				Uint64 reservedSpaceValue;
				property.getValue().get(reservedSpaceValue);
				setReservedSpace(reservedSpaceValue);
			}
	}
	return true;
}

Uint32 UNIX_StoragePool::invokeGetSupportedSizes(
		Uint16 &inElementType,
		CIMInstance &inGoal,
		Array<Uint64> &inSizes
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_StorageSetting inGoalObject;
	inGoalObject.loadInstance(inGoal);
	
	/* Execute method GetSupportedSizes */
	
	
	
	return returnValue;
}

Uint32 UNIX_StoragePool::invokeGetSupportedSizeRange(
		Uint16 &inElementType,
		CIMInstance &inGoal,
		Uint64 &inMinimumVolumeSize,
		Uint64 &inMaximumVolumeSize,
		Uint64 &inVolumeSizeDivisor
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_StorageSetting inGoalObject;
	inGoalObject.loadInstance(inGoal);
	
	/* Execute method GetSupportedSizeRange */
	
	
	
	return returnValue;
}

Uint32 UNIX_StoragePool::invokeGetAvailableExtents(
		CIMInstance &inGoal,
		CIMInstance &inAvailableExtents
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_StorageSetting inGoalObject;
	inGoalObject.loadInstance(inGoal);
	
	/* Execute method GetAvailableExtents */
	
	
	
	return returnValue;
}


Boolean UNIX_StoragePool::initialize()
{
	return false;
}

Boolean UNIX_StoragePool::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StoragePool");
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
	_totalManagedSpace = Uint64(0);
	_remainingManagedSpace = Uint64(0);
	_lowSpaceWarningThreshold = Uint16(0);
	_usage = Uint16(0);
	_otherUsageDescription = String ("");
	_clientSettableUsage.clear();
	_capacityInMigratingSource = Uint64(0);
	_capacityInMigratingTarget = Uint64(0);
	_spaceLimit = Uint64(0);
	_spaceLimitDetermination = Uint16(0);
	_thinProvisionMetaDataSpace = Uint64(0);
	_elementsShareSpace = Boolean(false);
	_reservedSpace = Uint64(0);
	
	return false;
}

Boolean UNIX_StoragePool::finalize()
{
	return false;
}

Boolean UNIX_StoragePool::loadByName(const String name)
{
	return false;
}

Boolean UNIX_StoragePool::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StoragePool::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StoragePool::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StoragePool::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StoragePool::validateInstance()
{
	return true;
}

