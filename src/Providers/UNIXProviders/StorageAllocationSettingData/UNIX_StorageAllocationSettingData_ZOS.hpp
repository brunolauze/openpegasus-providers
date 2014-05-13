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


UNIX_StorageAllocationSettingData::UNIX_StorageAllocationSettingData(void)
{
}

UNIX_StorageAllocationSettingData::~UNIX_StorageAllocationSettingData(void)
{
}

Boolean UNIX_StorageAllocationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageAllocationSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageAllocationSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageAllocationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageAllocationSettingData::getCaption() const
{
	return _caption;
}

void UNIX_StorageAllocationSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageAllocationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageAllocationSettingData::getDescription() const
{
	return _description;
}

void UNIX_StorageAllocationSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageAllocationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageAllocationSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_StorageAllocationSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageAllocationSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_StorageAllocationSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageAllocationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StorageAllocationSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_StorageAllocationSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_StorageAllocationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_StorageAllocationSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_StorageAllocationSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_StorageAllocationSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_StorageAllocationSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_StorageAllocationSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_StorageAllocationSettingData::getSoID() const
{
	return _soID;
}

void UNIX_StorageAllocationSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_StorageAllocationSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_StorageAllocationSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_StorageAllocationSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_StorageAllocationSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getResourceType() const
{
	return _resourceType;
}

void UNIX_StorageAllocationSettingData::setResourceType(Uint16 &value)
{
	_resourceType = value;
}

Boolean UNIX_StorageAllocationSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_StorageAllocationSettingData::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_StorageAllocationSettingData::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}

Boolean UNIX_StorageAllocationSettingData::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_StorageAllocationSettingData::getResourceSubType() const
{
	return _resourceSubType;
}

void UNIX_StorageAllocationSettingData::setResourceSubType(String &value)
{
	_resourceSubType = value;
}

Boolean UNIX_StorageAllocationSettingData::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_StorageAllocationSettingData::getPoolID() const
{
	return _poolID;
}

void UNIX_StorageAllocationSettingData::setPoolID(String &value)
{
	_poolID = value;
}

Boolean UNIX_StorageAllocationSettingData::getConsumerVisibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMER_VISIBILITY, getConsumerVisibility());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getConsumerVisibility() const
{
	return _consumerVisibility;
}

void UNIX_StorageAllocationSettingData::setConsumerVisibility(Uint16 &value)
{
	_consumerVisibility = value;
}

Boolean UNIX_StorageAllocationSettingData::getHostResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE, getHostResource());
	return true;
}

Array<String> UNIX_StorageAllocationSettingData::getHostResource() const
{
	return _hostResource;
}

void UNIX_StorageAllocationSettingData::setHostResource(Array<String> &value)
{
	_hostResource = value;
}

Boolean UNIX_StorageAllocationSettingData::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_StorageAllocationSettingData::getAllocationUnits() const
{
	return _allocationUnits;
}

void UNIX_StorageAllocationSettingData::setAllocationUnits(String &value)
{
	_allocationUnits = value;
}

Boolean UNIX_StorageAllocationSettingData::getVirtualQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY, getVirtualQuantity());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getVirtualQuantity() const
{
	return _virtualQuantity;
}

void UNIX_StorageAllocationSettingData::setVirtualQuantity(Uint64 &value)
{
	_virtualQuantity = value;
}

Boolean UNIX_StorageAllocationSettingData::getReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVATION, getReservation());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getReservation() const
{
	return _reservation;
}

void UNIX_StorageAllocationSettingData::setReservation(Uint64 &value)
{
	_reservation = value;
}

Boolean UNIX_StorageAllocationSettingData::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getLimit() const
{
	return _limit;
}

void UNIX_StorageAllocationSettingData::setLimit(Uint64 &value)
{
	_limit = value;
}

Boolean UNIX_StorageAllocationSettingData::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Uint32 UNIX_StorageAllocationSettingData::getWeight() const
{
	return _weight;
}

void UNIX_StorageAllocationSettingData::setWeight(Uint32 &value)
{
	_weight = value;
}

Boolean UNIX_StorageAllocationSettingData::getAutomaticAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_ALLOCATION, getAutomaticAllocation());
	return true;
}

Boolean UNIX_StorageAllocationSettingData::getAutomaticAllocation() const
{
	return _automaticAllocation;
}

void UNIX_StorageAllocationSettingData::setAutomaticAllocation(Boolean &value)
{
	_automaticAllocation = value;
}

Boolean UNIX_StorageAllocationSettingData::getAutomaticDeallocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_DEALLOCATION, getAutomaticDeallocation());
	return true;
}

Boolean UNIX_StorageAllocationSettingData::getAutomaticDeallocation() const
{
	return _automaticDeallocation;
}

void UNIX_StorageAllocationSettingData::setAutomaticDeallocation(Boolean &value)
{
	_automaticDeallocation = value;
}

Boolean UNIX_StorageAllocationSettingData::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

String UNIX_StorageAllocationSettingData::getParent() const
{
	return _parent;
}

void UNIX_StorageAllocationSettingData::setParent(String &value)
{
	_parent = value;
}

Boolean UNIX_StorageAllocationSettingData::getConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION, getConnection());
	return true;
}

Array<String> UNIX_StorageAllocationSettingData::getConnection() const
{
	return _connection;
}

void UNIX_StorageAllocationSettingData::setConnection(Array<String> &value)
{
	_connection = value;
}

Boolean UNIX_StorageAllocationSettingData::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_StorageAllocationSettingData::getAddress() const
{
	return _address;
}

void UNIX_StorageAllocationSettingData::setAddress(String &value)
{
	_address = value;
}

Boolean UNIX_StorageAllocationSettingData::getMappingBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPING_BEHAVIOR, getMappingBehavior());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getMappingBehavior() const
{
	return _mappingBehavior;
}

void UNIX_StorageAllocationSettingData::setMappingBehavior(Uint16 &value)
{
	_mappingBehavior = value;
}

Boolean UNIX_StorageAllocationSettingData::getAddressOnParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ON_PARENT, getAddressOnParent());
	return true;
}

String UNIX_StorageAllocationSettingData::getAddressOnParent() const
{
	return _addressOnParent;
}

void UNIX_StorageAllocationSettingData::setAddressOnParent(String &value)
{
	_addressOnParent = value;
}

Boolean UNIX_StorageAllocationSettingData::getVirtualQuantityUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY_UNITS, getVirtualQuantityUnits());
	return true;
}

String UNIX_StorageAllocationSettingData::getVirtualQuantityUnits() const
{
	return _virtualQuantityUnits;
}

void UNIX_StorageAllocationSettingData::setVirtualQuantityUnits(String &value)
{
	_virtualQuantityUnits = value;
}

Boolean UNIX_StorageAllocationSettingData::getVirtualResourceBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_RESOURCE_BLOCK_SIZE, getVirtualResourceBlockSize());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getVirtualResourceBlockSize() const
{
	return _virtualResourceBlockSize;
}

void UNIX_StorageAllocationSettingData::setVirtualResourceBlockSize(Uint64 &value)
{
	_virtualResourceBlockSize = value;
}

Boolean UNIX_StorageAllocationSettingData::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getAccess() const
{
	return _access;
}

void UNIX_StorageAllocationSettingData::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_StorageAllocationSettingData::getHostResourceBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE_BLOCK_SIZE, getHostResourceBlockSize());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getHostResourceBlockSize() const
{
	return _hostResourceBlockSize;
}

void UNIX_StorageAllocationSettingData::setHostResourceBlockSize(Uint64 &value)
{
	_hostResourceBlockSize = value;
}

Boolean UNIX_StorageAllocationSettingData::getHostExtentStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_EXTENT_STARTING_ADDRESS, getHostExtentStartingAddress());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getHostExtentStartingAddress() const
{
	return _hostExtentStartingAddress;
}

void UNIX_StorageAllocationSettingData::setHostExtentStartingAddress(Uint64 &value)
{
	_hostExtentStartingAddress = value;
}

Boolean UNIX_StorageAllocationSettingData::getHostExtentName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_EXTENT_NAME, getHostExtentName());
	return true;
}

String UNIX_StorageAllocationSettingData::getHostExtentName() const
{
	return _hostExtentName;
}

void UNIX_StorageAllocationSettingData::setHostExtentName(String &value)
{
	_hostExtentName = value;
}

Boolean UNIX_StorageAllocationSettingData::getHostExtentNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_EXTENT_NAME_FORMAT, getHostExtentNameFormat());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getHostExtentNameFormat() const
{
	return _hostExtentNameFormat;
}

void UNIX_StorageAllocationSettingData::setHostExtentNameFormat(Uint16 &value)
{
	_hostExtentNameFormat = value;
}

Boolean UNIX_StorageAllocationSettingData::getOtherHostExtentNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HOST_EXTENT_NAME_FORMAT, getOtherHostExtentNameFormat());
	return true;
}

String UNIX_StorageAllocationSettingData::getOtherHostExtentNameFormat() const
{
	return _otherHostExtentNameFormat;
}

void UNIX_StorageAllocationSettingData::setOtherHostExtentNameFormat(String &value)
{
	_otherHostExtentNameFormat = value;
}

Boolean UNIX_StorageAllocationSettingData::getHostExtentNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_EXTENT_NAME_NAMESPACE, getHostExtentNameNamespace());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getHostExtentNameNamespace() const
{
	return _hostExtentNameNamespace;
}

void UNIX_StorageAllocationSettingData::setHostExtentNameNamespace(Uint16 &value)
{
	_hostExtentNameNamespace = value;
}

Boolean UNIX_StorageAllocationSettingData::getOtherHostExtentNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HOST_EXTENT_NAME_NAMESPACE, getOtherHostExtentNameNamespace());
	return true;
}

String UNIX_StorageAllocationSettingData::getOtherHostExtentNameNamespace() const
{
	return _otherHostExtentNameNamespace;
}

void UNIX_StorageAllocationSettingData::setOtherHostExtentNameNamespace(String &value)
{
	_otherHostExtentNameNamespace = value;
}


void UNIX_StorageAllocationSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageAllocationSettingData");
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
	_virtualResourceBlockSize = Uint64(0);
	_access = Uint16(0);
	_hostResourceBlockSize = Uint64(0);
	_hostExtentStartingAddress = Uint64(0);
	_hostExtentName = String ("");
	_hostExtentNameFormat = Uint16(0);
	_otherHostExtentNameFormat = String ("");
	_hostExtentNameNamespace = Uint16(0);
	_otherHostExtentNameNamespace = String ("");

}

Boolean UNIX_StorageAllocationSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "VirtualResourceBlockSize"))
			{
				Uint64 virtualResourceBlockSizeValue;
				property.getValue().get(virtualResourceBlockSizeValue);
				setVirtualResourceBlockSize(virtualResourceBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "Access"))
			{
				Uint16 accessValue;
				property.getValue().get(accessValue);
				setAccess(accessValue);
			}
			else if (String::equal(property.getName().getString(), "HostResourceBlockSize"))
			{
				Uint64 hostResourceBlockSizeValue;
				property.getValue().get(hostResourceBlockSizeValue);
				setHostResourceBlockSize(hostResourceBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "HostExtentStartingAddress"))
			{
				Uint64 hostExtentStartingAddressValue;
				property.getValue().get(hostExtentStartingAddressValue);
				setHostExtentStartingAddress(hostExtentStartingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "HostExtentName"))
			{
				String hostExtentNameValue;
				property.getValue().get(hostExtentNameValue);
				setHostExtentName(hostExtentNameValue);
			}
			else if (String::equal(property.getName().getString(), "HostExtentNameFormat"))
			{
				Uint16 hostExtentNameFormatValue;
				property.getValue().get(hostExtentNameFormatValue);
				setHostExtentNameFormat(hostExtentNameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherHostExtentNameFormat"))
			{
				String otherHostExtentNameFormatValue;
				property.getValue().get(otherHostExtentNameFormatValue);
				setOtherHostExtentNameFormat(otherHostExtentNameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "HostExtentNameNamespace"))
			{
				Uint16 hostExtentNameNamespaceValue;
				property.getValue().get(hostExtentNameNamespaceValue);
				setHostExtentNameNamespace(hostExtentNameNamespaceValue);
			}
			else if (String::equal(property.getName().getString(), "OtherHostExtentNameNamespace"))
			{
				String otherHostExtentNameNamespaceValue;
				property.getValue().get(otherHostExtentNameNamespaceValue);
				setOtherHostExtentNameNamespace(otherHostExtentNameNamespaceValue);
			}
	}
	return true;
}


Boolean UNIX_StorageAllocationSettingData::initialize()
{
	return false;
}

Boolean UNIX_StorageAllocationSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageAllocationSettingData");
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
	_virtualResourceBlockSize = Uint64(0);
	_access = Uint16(0);
	_hostResourceBlockSize = Uint64(0);
	_hostExtentStartingAddress = Uint64(0);
	_hostExtentName = String ("");
	_hostExtentNameFormat = Uint16(0);
	_otherHostExtentNameFormat = String ("");
	_hostExtentNameNamespace = Uint16(0);
	_otherHostExtentNameNamespace = String ("");
	
	return false;
}

Boolean UNIX_StorageAllocationSettingData::finalize()
{
	return false;
}


Boolean UNIX_StorageAllocationSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageAllocationSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageAllocationSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageAllocationSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageAllocationSettingData::validateInstance()
{
	return true;
}

