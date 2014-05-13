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


UNIX_ProcessorAllocationSettingData::UNIX_ProcessorAllocationSettingData(void)
{
}

UNIX_ProcessorAllocationSettingData::~UNIX_ProcessorAllocationSettingData(void)
{
}

Boolean UNIX_ProcessorAllocationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ProcessorAllocationSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getCaption() const
{
	return _caption;
}

void UNIX_ProcessorAllocationSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getDescription() const
{
	return _description;
}

void UNIX_ProcessorAllocationSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_ProcessorAllocationSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ProcessorAllocationSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_ProcessorAllocationSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_ProcessorAllocationSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ProcessorAllocationSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_ProcessorAllocationSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_ProcessorAllocationSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getSoID() const
{
	return _soID;
}

void UNIX_ProcessorAllocationSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_ProcessorAllocationSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_ProcessorAllocationSettingData::getResourceType() const
{
	return _resourceType;
}

void UNIX_ProcessorAllocationSettingData::setResourceType(Uint16 &value)
{
	_resourceType = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_ProcessorAllocationSettingData::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getResourceSubType() const
{
	return _resourceSubType;
}

void UNIX_ProcessorAllocationSettingData::setResourceSubType(String &value)
{
	_resourceSubType = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getPoolID() const
{
	return _poolID;
}

void UNIX_ProcessorAllocationSettingData::setPoolID(String &value)
{
	_poolID = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getConsumerVisibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMER_VISIBILITY, getConsumerVisibility());
	return true;
}

Uint16 UNIX_ProcessorAllocationSettingData::getConsumerVisibility() const
{
	return _consumerVisibility;
}

void UNIX_ProcessorAllocationSettingData::setConsumerVisibility(Uint16 &value)
{
	_consumerVisibility = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getHostResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE, getHostResource());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getHostResource() const
{
	return _hostResource;
}

void UNIX_ProcessorAllocationSettingData::setHostResource(Array<String> &value)
{
	_hostResource = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getAllocationUnits() const
{
	return _allocationUnits;
}

void UNIX_ProcessorAllocationSettingData::setAllocationUnits(String &value)
{
	_allocationUnits = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getVirtualQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY, getVirtualQuantity());
	return true;
}

Uint64 UNIX_ProcessorAllocationSettingData::getVirtualQuantity() const
{
	return _virtualQuantity;
}

void UNIX_ProcessorAllocationSettingData::setVirtualQuantity(Uint64 &value)
{
	_virtualQuantity = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVATION, getReservation());
	return true;
}

Uint64 UNIX_ProcessorAllocationSettingData::getReservation() const
{
	return _reservation;
}

void UNIX_ProcessorAllocationSettingData::setReservation(Uint64 &value)
{
	_reservation = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_ProcessorAllocationSettingData::getLimit() const
{
	return _limit;
}

void UNIX_ProcessorAllocationSettingData::setLimit(Uint64 &value)
{
	_limit = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Uint32 UNIX_ProcessorAllocationSettingData::getWeight() const
{
	return _weight;
}

void UNIX_ProcessorAllocationSettingData::setWeight(Uint32 &value)
{
	_weight = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getAutomaticAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_ALLOCATION, getAutomaticAllocation());
	return true;
}

Boolean UNIX_ProcessorAllocationSettingData::getAutomaticAllocation() const
{
	return _automaticAllocation;
}

void UNIX_ProcessorAllocationSettingData::setAutomaticAllocation(Boolean &value)
{
	_automaticAllocation = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getAutomaticDeallocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_DEALLOCATION, getAutomaticDeallocation());
	return true;
}

Boolean UNIX_ProcessorAllocationSettingData::getAutomaticDeallocation() const
{
	return _automaticDeallocation;
}

void UNIX_ProcessorAllocationSettingData::setAutomaticDeallocation(Boolean &value)
{
	_automaticDeallocation = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getParent() const
{
	return _parent;
}

void UNIX_ProcessorAllocationSettingData::setParent(String &value)
{
	_parent = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION, getConnection());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getConnection() const
{
	return _connection;
}

void UNIX_ProcessorAllocationSettingData::setConnection(Array<String> &value)
{
	_connection = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getAddress() const
{
	return _address;
}

void UNIX_ProcessorAllocationSettingData::setAddress(String &value)
{
	_address = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getMappingBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPING_BEHAVIOR, getMappingBehavior());
	return true;
}

Uint16 UNIX_ProcessorAllocationSettingData::getMappingBehavior() const
{
	return _mappingBehavior;
}

void UNIX_ProcessorAllocationSettingData::setMappingBehavior(Uint16 &value)
{
	_mappingBehavior = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getAddressOnParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ON_PARENT, getAddressOnParent());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getAddressOnParent() const
{
	return _addressOnParent;
}

void UNIX_ProcessorAllocationSettingData::setAddressOnParent(String &value)
{
	_addressOnParent = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getVirtualQuantityUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY_UNITS, getVirtualQuantityUnits());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getVirtualQuantityUnits() const
{
	return _virtualQuantityUnits;
}

void UNIX_ProcessorAllocationSettingData::setVirtualQuantityUnits(String &value)
{
	_virtualQuantityUnits = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getProcessorArchitecture(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESSOR_ARCHITECTURE, getProcessorArchitecture());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getProcessorArchitecture() const
{
	return _processorArchitecture;
}

void UNIX_ProcessorAllocationSettingData::setProcessorArchitecture(String &value)
{
	_processorArchitecture = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getInstructionSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTRUCTION_SET, getInstructionSet());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getInstructionSet() const
{
	return _instructionSet;
}

void UNIX_ProcessorAllocationSettingData::setInstructionSet(String &value)
{
	_instructionSet = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getInstructionSetExtensionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTRUCTION_SET_EXTENSION_NAME, getInstructionSetExtensionName());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getInstructionSetExtensionName() const
{
	return _instructionSetExtensionName;
}

void UNIX_ProcessorAllocationSettingData::setInstructionSetExtensionName(Array<String> &value)
{
	_instructionSetExtensionName = value;
}

Boolean UNIX_ProcessorAllocationSettingData::getInstructionSetExtensionStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTRUCTION_SET_EXTENSION_STATUS, getInstructionSetExtensionStatus());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getInstructionSetExtensionStatus() const
{
	return _instructionSetExtensionStatus;
}

void UNIX_ProcessorAllocationSettingData::setInstructionSetExtensionStatus(Array<String> &value)
{
	_instructionSetExtensionStatus = value;
}


void UNIX_ProcessorAllocationSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProcessorAllocationSettingData");
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
	_processorArchitecture = String ("");
	_instructionSet = String ("");
	_instructionSetExtensionName.clear();
	_instructionSetExtensionStatus.clear();

}

Boolean UNIX_ProcessorAllocationSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ProcessorArchitecture"))
			{
				String processorArchitectureValue;
				property.getValue().get(processorArchitectureValue);
				setProcessorArchitecture(processorArchitectureValue);
			}
			else if (String::equal(property.getName().getString(), "InstructionSet"))
			{
				String instructionSetValue;
				property.getValue().get(instructionSetValue);
				setInstructionSet(instructionSetValue);
			}
			else if (String::equal(property.getName().getString(), "InstructionSetExtensionName"))
			{
				Array<String> instructionSetExtensionNameValue;
				property.getValue().get(instructionSetExtensionNameValue);
				setInstructionSetExtensionName(instructionSetExtensionNameValue);
			}
			else if (String::equal(property.getName().getString(), "InstructionSetExtensionStatus"))
			{
				Array<String> instructionSetExtensionStatusValue;
				property.getValue().get(instructionSetExtensionStatusValue);
				setInstructionSetExtensionStatus(instructionSetExtensionStatusValue);
			}
	}
	return true;
}


Boolean UNIX_ProcessorAllocationSettingData::initialize()
{
	return false;
}

Boolean UNIX_ProcessorAllocationSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProcessorAllocationSettingData");
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
	_processorArchitecture = String ("");
	_instructionSet = String ("");
	_instructionSetExtensionName.clear();
	_instructionSetExtensionStatus.clear();
	
	return false;
}

Boolean UNIX_ProcessorAllocationSettingData::finalize()
{
	return false;
}


Boolean UNIX_ProcessorAllocationSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ProcessorAllocationSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessorAllocationSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessorAllocationSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessorAllocationSettingData::validateInstance()
{
	return true;
}

