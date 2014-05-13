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


UNIX_PowerAllocationSettingData::UNIX_PowerAllocationSettingData(void)
{
}

UNIX_PowerAllocationSettingData::~UNIX_PowerAllocationSettingData(void)
{
}

Boolean UNIX_PowerAllocationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PowerAllocationSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PowerAllocationSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PowerAllocationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PowerAllocationSettingData::getCaption() const
{
	return _caption;
}

void UNIX_PowerAllocationSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PowerAllocationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PowerAllocationSettingData::getDescription() const
{
	return _description;
}

void UNIX_PowerAllocationSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PowerAllocationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PowerAllocationSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_PowerAllocationSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PowerAllocationSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PowerAllocationSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_PowerAllocationSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PowerAllocationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_PowerAllocationSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_PowerAllocationSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_PowerAllocationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_PowerAllocationSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_PowerAllocationSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_PowerAllocationSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_PowerAllocationSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_PowerAllocationSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_PowerAllocationSettingData::getSoID() const
{
	return _soID;
}

void UNIX_PowerAllocationSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_PowerAllocationSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_PowerAllocationSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_PowerAllocationSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_PowerAllocationSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getResourceType() const
{
	return _resourceType;
}

void UNIX_PowerAllocationSettingData::setResourceType(Uint16 &value)
{
	_resourceType = value;
}

Boolean UNIX_PowerAllocationSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_PowerAllocationSettingData::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_PowerAllocationSettingData::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}

Boolean UNIX_PowerAllocationSettingData::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_PowerAllocationSettingData::getResourceSubType() const
{
	return _resourceSubType;
}

void UNIX_PowerAllocationSettingData::setResourceSubType(String &value)
{
	_resourceSubType = value;
}

Boolean UNIX_PowerAllocationSettingData::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_PowerAllocationSettingData::getPoolID() const
{
	return _poolID;
}

void UNIX_PowerAllocationSettingData::setPoolID(String &value)
{
	_poolID = value;
}

Boolean UNIX_PowerAllocationSettingData::getConsumerVisibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMER_VISIBILITY, getConsumerVisibility());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getConsumerVisibility() const
{
	return _consumerVisibility;
}

void UNIX_PowerAllocationSettingData::setConsumerVisibility(Uint16 &value)
{
	_consumerVisibility = value;
}

Boolean UNIX_PowerAllocationSettingData::getHostResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE, getHostResource());
	return true;
}

Array<String> UNIX_PowerAllocationSettingData::getHostResource() const
{
	return _hostResource;
}

void UNIX_PowerAllocationSettingData::setHostResource(Array<String> &value)
{
	_hostResource = value;
}

Boolean UNIX_PowerAllocationSettingData::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_PowerAllocationSettingData::getAllocationUnits() const
{
	return _allocationUnits;
}

void UNIX_PowerAllocationSettingData::setAllocationUnits(String &value)
{
	_allocationUnits = value;
}

Boolean UNIX_PowerAllocationSettingData::getVirtualQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY, getVirtualQuantity());
	return true;
}

Uint64 UNIX_PowerAllocationSettingData::getVirtualQuantity() const
{
	return _virtualQuantity;
}

void UNIX_PowerAllocationSettingData::setVirtualQuantity(Uint64 &value)
{
	_virtualQuantity = value;
}

Boolean UNIX_PowerAllocationSettingData::getReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVATION, getReservation());
	return true;
}

Uint64 UNIX_PowerAllocationSettingData::getReservation() const
{
	return _reservation;
}

void UNIX_PowerAllocationSettingData::setReservation(Uint64 &value)
{
	_reservation = value;
}

Boolean UNIX_PowerAllocationSettingData::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_PowerAllocationSettingData::getLimit() const
{
	return _limit;
}

void UNIX_PowerAllocationSettingData::setLimit(Uint64 &value)
{
	_limit = value;
}

Boolean UNIX_PowerAllocationSettingData::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Uint32 UNIX_PowerAllocationSettingData::getWeight() const
{
	return _weight;
}

void UNIX_PowerAllocationSettingData::setWeight(Uint32 &value)
{
	_weight = value;
}

Boolean UNIX_PowerAllocationSettingData::getAutomaticAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_ALLOCATION, getAutomaticAllocation());
	return true;
}

Boolean UNIX_PowerAllocationSettingData::getAutomaticAllocation() const
{
	return _automaticAllocation;
}

void UNIX_PowerAllocationSettingData::setAutomaticAllocation(Boolean &value)
{
	_automaticAllocation = value;
}

Boolean UNIX_PowerAllocationSettingData::getAutomaticDeallocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_DEALLOCATION, getAutomaticDeallocation());
	return true;
}

Boolean UNIX_PowerAllocationSettingData::getAutomaticDeallocation() const
{
	return _automaticDeallocation;
}

void UNIX_PowerAllocationSettingData::setAutomaticDeallocation(Boolean &value)
{
	_automaticDeallocation = value;
}

Boolean UNIX_PowerAllocationSettingData::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

String UNIX_PowerAllocationSettingData::getParent() const
{
	return _parent;
}

void UNIX_PowerAllocationSettingData::setParent(String &value)
{
	_parent = value;
}

Boolean UNIX_PowerAllocationSettingData::getConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION, getConnection());
	return true;
}

Array<String> UNIX_PowerAllocationSettingData::getConnection() const
{
	return _connection;
}

void UNIX_PowerAllocationSettingData::setConnection(Array<String> &value)
{
	_connection = value;
}

Boolean UNIX_PowerAllocationSettingData::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_PowerAllocationSettingData::getAddress() const
{
	return _address;
}

void UNIX_PowerAllocationSettingData::setAddress(String &value)
{
	_address = value;
}

Boolean UNIX_PowerAllocationSettingData::getMappingBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPING_BEHAVIOR, getMappingBehavior());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getMappingBehavior() const
{
	return _mappingBehavior;
}

void UNIX_PowerAllocationSettingData::setMappingBehavior(Uint16 &value)
{
	_mappingBehavior = value;
}

Boolean UNIX_PowerAllocationSettingData::getAddressOnParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ON_PARENT, getAddressOnParent());
	return true;
}

String UNIX_PowerAllocationSettingData::getAddressOnParent() const
{
	return _addressOnParent;
}

void UNIX_PowerAllocationSettingData::setAddressOnParent(String &value)
{
	_addressOnParent = value;
}

Boolean UNIX_PowerAllocationSettingData::getVirtualQuantityUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY_UNITS, getVirtualQuantityUnits());
	return true;
}

String UNIX_PowerAllocationSettingData::getVirtualQuantityUnits() const
{
	return _virtualQuantityUnits;
}

void UNIX_PowerAllocationSettingData::setVirtualQuantityUnits(String &value)
{
	_virtualQuantityUnits = value;
}

Boolean UNIX_PowerAllocationSettingData::getPowerAllocationSettingPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ALLOCATION_SETTING_PURPOSE, getPowerAllocationSettingPurpose());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getPowerAllocationSettingPurpose() const
{
	return _powerAllocationSettingPurpose;
}

void UNIX_PowerAllocationSettingData::setPowerAllocationSettingPurpose(Uint16 &value)
{
	_powerAllocationSettingPurpose = value;
}

Boolean UNIX_PowerAllocationSettingData::getOtherSettingPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SETTING_PURPOSE, getOtherSettingPurpose());
	return true;
}

String UNIX_PowerAllocationSettingData::getOtherSettingPurpose() const
{
	return _otherSettingPurpose;
}

void UNIX_PowerAllocationSettingData::setOtherSettingPurpose(String &value)
{
	_otherSettingPurpose = value;
}


void UNIX_PowerAllocationSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PowerAllocationSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_resourceType = Uint16(0);
	_otherResourceType = String ("");
	_resourceSubType = String ("");
	_poolID = String ("");
	_consumerVisibility = Uint16(0);
	_hostResource.clear();
	_allocationUnits = String ("");
	_virtualQuantity = Uint64(0);
	_reservation = Uint64(0);
	_limit = Uint64(0);
	_weight = Uint32(0);
	_automaticAllocation = Boolean(false);
	_automaticDeallocation = Boolean(false);
	_parent = String ("");
	_connection.clear();
	_address = String ("");
	_mappingBehavior = Uint16(0);
	_addressOnParent = String ("");
	_virtualQuantityUnits = String ("");
	_powerAllocationSettingPurpose = Uint16(0);
	_otherSettingPurpose = String ("");

}

Boolean UNIX_PowerAllocationSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
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
			else if (String::equal(property.getName().getString(), "PoolID"))
			{
				String poolIDValue;
				property.getValue().get(poolIDValue);
				setPoolID(poolIDValue);
			}
			else if (String::equal(property.getName().getString(), "ConsumerVisibility"))
			{
				Uint16 consumerVisibilityValue;
				property.getValue().get(consumerVisibilityValue);
				setConsumerVisibility(consumerVisibilityValue);
			}
			else if (String::equal(property.getName().getString(), "HostResource"))
			{
				Array<String> hostResourceValue;
				property.getValue().get(hostResourceValue);
				setHostResource(hostResourceValue);
			}
			else if (String::equal(property.getName().getString(), "AllocationUnits"))
			{
				String allocationUnitsValue;
				property.getValue().get(allocationUnitsValue);
				setAllocationUnits(allocationUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualQuantity"))
			{
				Uint64 virtualQuantityValue;
				property.getValue().get(virtualQuantityValue);
				setVirtualQuantity(virtualQuantityValue);
			}
			else if (String::equal(property.getName().getString(), "Reservation"))
			{
				Uint64 reservationValue;
				property.getValue().get(reservationValue);
				setReservation(reservationValue);
			}
			else if (String::equal(property.getName().getString(), "Limit"))
			{
				Uint64 limitValue;
				property.getValue().get(limitValue);
				setLimit(limitValue);
			}
			else if (String::equal(property.getName().getString(), "Weight"))
			{
				Uint32 weightValue;
				property.getValue().get(weightValue);
				setWeight(weightValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticAllocation"))
			{
				Boolean automaticAllocationValue;
				property.getValue().get(automaticAllocationValue);
				setAutomaticAllocation(automaticAllocationValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticDeallocation"))
			{
				Boolean automaticDeallocationValue;
				property.getValue().get(automaticDeallocationValue);
				setAutomaticDeallocation(automaticDeallocationValue);
			}
			else if (String::equal(property.getName().getString(), "Parent"))
			{
				String parentValue;
				property.getValue().get(parentValue);
				setParent(parentValue);
			}
			else if (String::equal(property.getName().getString(), "Connection"))
			{
				Array<String> connectionValue;
				property.getValue().get(connectionValue);
				setConnection(connectionValue);
			}
			else if (String::equal(property.getName().getString(), "Address"))
			{
				String addressValue;
				property.getValue().get(addressValue);
				setAddress(addressValue);
			}
			else if (String::equal(property.getName().getString(), "MappingBehavior"))
			{
				Uint16 mappingBehaviorValue;
				property.getValue().get(mappingBehaviorValue);
				setMappingBehavior(mappingBehaviorValue);
			}
			else if (String::equal(property.getName().getString(), "AddressOnParent"))
			{
				String addressOnParentValue;
				property.getValue().get(addressOnParentValue);
				setAddressOnParent(addressOnParentValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualQuantityUnits"))
			{
				String virtualQuantityUnitsValue;
				property.getValue().get(virtualQuantityUnitsValue);
				setVirtualQuantityUnits(virtualQuantityUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "PowerAllocationSettingPurpose"))
			{
				Uint16 powerAllocationSettingPurposeValue;
				property.getValue().get(powerAllocationSettingPurposeValue);
				setPowerAllocationSettingPurpose(powerAllocationSettingPurposeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSettingPurpose"))
			{
				String otherSettingPurposeValue;
				property.getValue().get(otherSettingPurposeValue);
				setOtherSettingPurpose(otherSettingPurposeValue);
			}
	}
	return true;
}


Boolean UNIX_PowerAllocationSettingData::initialize()
{
	return false;
}

Boolean UNIX_PowerAllocationSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PowerAllocationSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_resourceType = Uint16(0);
	_otherResourceType = String ("");
	_resourceSubType = String ("");
	_poolID = String ("");
	_consumerVisibility = Uint16(0);
	_hostResource.clear();
	_allocationUnits = String ("");
	_virtualQuantity = Uint64(0);
	_reservation = Uint64(0);
	_limit = Uint64(0);
	_weight = Uint32(0);
	_automaticAllocation = Boolean(false);
	_automaticDeallocation = Boolean(false);
	_parent = String ("");
	_connection.clear();
	_address = String ("");
	_mappingBehavior = Uint16(0);
	_addressOnParent = String ("");
	_virtualQuantityUnits = String ("");
	_powerAllocationSettingPurpose = Uint16(0);
	_otherSettingPurpose = String ("");
	
	return false;
}

Boolean UNIX_PowerAllocationSettingData::finalize()
{
	return false;
}


Boolean UNIX_PowerAllocationSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PowerAllocationSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerAllocationSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerAllocationSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerAllocationSettingData::validateInstance()
{
	return true;
}

