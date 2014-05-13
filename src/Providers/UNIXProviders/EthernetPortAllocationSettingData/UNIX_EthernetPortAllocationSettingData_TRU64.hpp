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


UNIX_EthernetPortAllocationSettingData::UNIX_EthernetPortAllocationSettingData(void)
{
}

UNIX_EthernetPortAllocationSettingData::~UNIX_EthernetPortAllocationSettingData(void)
{
}

Boolean UNIX_EthernetPortAllocationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_EthernetPortAllocationSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getCaption() const
{
	return _caption;
}

void UNIX_EthernetPortAllocationSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getDescription() const
{
	return _description;
}

void UNIX_EthernetPortAllocationSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_EthernetPortAllocationSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_EthernetPortAllocationSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_EthernetPortAllocationSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_EthernetPortAllocationSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_EthernetPortAllocationSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getSoID() const
{
	return _soID;
}

void UNIX_EthernetPortAllocationSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_EthernetPortAllocationSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getResourceType() const
{
	return _resourceType;
}

void UNIX_EthernetPortAllocationSettingData::setResourceType(Uint16 &value)
{
	_resourceType = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_EthernetPortAllocationSettingData::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getResourceSubType() const
{
	return _resourceSubType;
}

void UNIX_EthernetPortAllocationSettingData::setResourceSubType(String &value)
{
	_resourceSubType = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getPoolID() const
{
	return _poolID;
}

void UNIX_EthernetPortAllocationSettingData::setPoolID(String &value)
{
	_poolID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getConsumerVisibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMER_VISIBILITY, getConsumerVisibility());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getConsumerVisibility() const
{
	return _consumerVisibility;
}

void UNIX_EthernetPortAllocationSettingData::setConsumerVisibility(Uint16 &value)
{
	_consumerVisibility = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getHostResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE, getHostResource());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getHostResource() const
{
	return _hostResource;
}

void UNIX_EthernetPortAllocationSettingData::setHostResource(Array<String> &value)
{
	_hostResource = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getAllocationUnits() const
{
	return _allocationUnits;
}

void UNIX_EthernetPortAllocationSettingData::setAllocationUnits(String &value)
{
	_allocationUnits = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getVirtualQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY, getVirtualQuantity());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getVirtualQuantity() const
{
	return _virtualQuantity;
}

void UNIX_EthernetPortAllocationSettingData::setVirtualQuantity(Uint64 &value)
{
	_virtualQuantity = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVATION, getReservation());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getReservation() const
{
	return _reservation;
}

void UNIX_EthernetPortAllocationSettingData::setReservation(Uint64 &value)
{
	_reservation = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getLimit() const
{
	return _limit;
}

void UNIX_EthernetPortAllocationSettingData::setLimit(Uint64 &value)
{
	_limit = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Uint32 UNIX_EthernetPortAllocationSettingData::getWeight() const
{
	return _weight;
}

void UNIX_EthernetPortAllocationSettingData::setWeight(Uint32 &value)
{
	_weight = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAutomaticAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_ALLOCATION, getAutomaticAllocation());
	return true;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAutomaticAllocation() const
{
	return _automaticAllocation;
}

void UNIX_EthernetPortAllocationSettingData::setAutomaticAllocation(Boolean &value)
{
	_automaticAllocation = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAutomaticDeallocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_DEALLOCATION, getAutomaticDeallocation());
	return true;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAutomaticDeallocation() const
{
	return _automaticDeallocation;
}

void UNIX_EthernetPortAllocationSettingData::setAutomaticDeallocation(Boolean &value)
{
	_automaticDeallocation = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getParent() const
{
	return _parent;
}

void UNIX_EthernetPortAllocationSettingData::setParent(String &value)
{
	_parent = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION, getConnection());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getConnection() const
{
	return _connection;
}

void UNIX_EthernetPortAllocationSettingData::setConnection(Array<String> &value)
{
	_connection = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getAddress() const
{
	return _address;
}

void UNIX_EthernetPortAllocationSettingData::setAddress(String &value)
{
	_address = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getMappingBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPING_BEHAVIOR, getMappingBehavior());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getMappingBehavior() const
{
	return _mappingBehavior;
}

void UNIX_EthernetPortAllocationSettingData::setMappingBehavior(Uint16 &value)
{
	_mappingBehavior = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAddressOnParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ON_PARENT, getAddressOnParent());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getAddressOnParent() const
{
	return _addressOnParent;
}

void UNIX_EthernetPortAllocationSettingData::setAddressOnParent(String &value)
{
	_addressOnParent = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getVirtualQuantityUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY_UNITS, getVirtualQuantityUnits());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getVirtualQuantityUnits() const
{
	return _virtualQuantityUnits;
}

void UNIX_EthernetPortAllocationSettingData::setVirtualQuantityUnits(String &value)
{
	_virtualQuantityUnits = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getDesiredVLANEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIRED_VLAN_ENDPOINT_MODE, getDesiredVLANEndpointMode());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getDesiredVLANEndpointMode() const
{
	return _desiredVLANEndpointMode;
}

void UNIX_EthernetPortAllocationSettingData::setDesiredVLANEndpointMode(Uint16 &value)
{
	_desiredVLANEndpointMode = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getOtherEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENDPOINT_MODE, getOtherEndpointMode());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getOtherEndpointMode() const
{
	return _otherEndpointMode;
}

void UNIX_EthernetPortAllocationSettingData::setOtherEndpointMode(String &value)
{
	_otherEndpointMode = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedPriorities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_PRIORITIES, getAllowedPriorities());
	return true;
}

Array<Uint16> UNIX_EthernetPortAllocationSettingData::getAllowedPriorities() const
{
	return _allowedPriorities;
}

void UNIX_EthernetPortAllocationSettingData::setAllowedPriorities(Array<Uint16> &value)
{
	_allowedPriorities = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedToReceiveMACAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_RECEIVE_M_A_C_ADDRESSES, getAllowedToReceiveMACAddresses());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getAllowedToReceiveMACAddresses() const
{
	return _allowedToReceiveMACAddresses;
}

void UNIX_EthernetPortAllocationSettingData::setAllowedToReceiveMACAddresses(Array<String> &value)
{
	_allowedToReceiveMACAddresses = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedToReceiveVLANs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_RECEIVE_VLANS, getAllowedToReceiveVLANs());
	return true;
}

Array<Uint16> UNIX_EthernetPortAllocationSettingData::getAllowedToReceiveVLANs() const
{
	return _allowedToReceiveVLANs;
}

void UNIX_EthernetPortAllocationSettingData::setAllowedToReceiveVLANs(Array<Uint16> &value)
{
	_allowedToReceiveVLANs = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedToTransmitMACAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_TRANSMIT_M_A_C_ADDRESSES, getAllowedToTransmitMACAddresses());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getAllowedToTransmitMACAddresses() const
{
	return _allowedToTransmitMACAddresses;
}

void UNIX_EthernetPortAllocationSettingData::setAllowedToTransmitMACAddresses(Array<String> &value)
{
	_allowedToTransmitMACAddresses = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedToTransmitVLANs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_TRANSMIT_VLANS, getAllowedToTransmitVLANs());
	return true;
}

Array<Uint16> UNIX_EthernetPortAllocationSettingData::getAllowedToTransmitVLANs() const
{
	return _allowedToTransmitVLANs;
}

void UNIX_EthernetPortAllocationSettingData::setAllowedToTransmitVLANs(Array<Uint16> &value)
{
	_allowedToTransmitVLANs = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getDefaultPortVID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_PORT_V_ID, getDefaultPortVID());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getDefaultPortVID() const
{
	return _defaultPortVID;
}

void UNIX_EthernetPortAllocationSettingData::setDefaultPortVID(Uint16 &value)
{
	_defaultPortVID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getDefaultPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_PRIORITY, getDefaultPriority());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getDefaultPriority() const
{
	return _defaultPriority;
}

void UNIX_EthernetPortAllocationSettingData::setDefaultPriority(Uint16 &value)
{
	_defaultPriority = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getNetworkPortProfileID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_PORT_PROFILE_ID, getNetworkPortProfileID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getNetworkPortProfileID() const
{
	return _networkPortProfileID;
}

void UNIX_EthernetPortAllocationSettingData::setNetworkPortProfileID(String &value)
{
	_networkPortProfileID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getNetworkPortProfileIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_PORT_PROFILE_ID_TYPE, getNetworkPortProfileIDType());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getNetworkPortProfileIDType() const
{
	return _networkPortProfileIDType;
}

void UNIX_EthernetPortAllocationSettingData::setNetworkPortProfileIDType(Uint16 &value)
{
	_networkPortProfileIDType = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getOtherNetworkPortProfileIDTypeInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_PROFILE_ID_TYPE_INFO, getOtherNetworkPortProfileIDTypeInfo());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getOtherNetworkPortProfileIDTypeInfo() const
{
	return _otherNetworkPortProfileIDTypeInfo;
}

void UNIX_EthernetPortAllocationSettingData::setOtherNetworkPortProfileIDTypeInfo(String &value)
{
	_otherNetworkPortProfileIDTypeInfo = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getPortCorrelationID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CORRELATION_ID, getPortCorrelationID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getPortCorrelationID() const
{
	return _portCorrelationID;
}

void UNIX_EthernetPortAllocationSettingData::setPortCorrelationID(String &value)
{
	_portCorrelationID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getPortVID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_V_ID, getPortVID());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getPortVID() const
{
	return _portVID;
}

void UNIX_EthernetPortAllocationSettingData::setPortVID(Uint16 &value)
{
	_portVID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getPromiscuous(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROMISCUOUS, getPromiscuous());
	return true;
}

Boolean UNIX_EthernetPortAllocationSettingData::getPromiscuous() const
{
	return _promiscuous;
}

void UNIX_EthernetPortAllocationSettingData::setPromiscuous(Boolean &value)
{
	_promiscuous = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getReceiveBandwidthLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_BANDWIDTH_LIMIT, getReceiveBandwidthLimit());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getReceiveBandwidthLimit() const
{
	return _receiveBandwidthLimit;
}

void UNIX_EthernetPortAllocationSettingData::setReceiveBandwidthLimit(Uint64 &value)
{
	_receiveBandwidthLimit = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getReceiveBandwidthReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_BANDWIDTH_RESERVATION, getReceiveBandwidthReservation());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getReceiveBandwidthReservation() const
{
	return _receiveBandwidthReservation;
}

void UNIX_EthernetPortAllocationSettingData::setReceiveBandwidthReservation(Uint64 &value)
{
	_receiveBandwidthReservation = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getSourceMACFilteringEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_M_A_C_FILTERING_ENABLED, getSourceMACFilteringEnabled());
	return true;
}

Boolean UNIX_EthernetPortAllocationSettingData::getSourceMACFilteringEnabled() const
{
	return _sourceMACFilteringEnabled;
}

void UNIX_EthernetPortAllocationSettingData::setSourceMACFilteringEnabled(Boolean &value)
{
	_sourceMACFilteringEnabled = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupID());
	return true;
}

Uint32 UNIX_EthernetPortAllocationSettingData::getGroupID() const
{
	return _groupID;
}

void UNIX_EthernetPortAllocationSettingData::setGroupID(Uint32 &value)
{
	_groupID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getManagerID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGER_ID, getManagerID());
	return true;
}

Uint32 UNIX_EthernetPortAllocationSettingData::getManagerID() const
{
	return _managerID;
}

void UNIX_EthernetPortAllocationSettingData::setManagerID(Uint32 &value)
{
	_managerID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getVSITypeID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_V_S_I_TYPE_ID, getVSITypeID());
	return true;
}

Uint32 UNIX_EthernetPortAllocationSettingData::getVSITypeID() const
{
	return _vSITypeID;
}

void UNIX_EthernetPortAllocationSettingData::setVSITypeID(Uint32 &value)
{
	_vSITypeID = value;
}

Boolean UNIX_EthernetPortAllocationSettingData::getVSITypeIDVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_V_S_I_TYPE_ID_VERSION, getVSITypeIDVersion());
	return true;
}

Uint8 UNIX_EthernetPortAllocationSettingData::getVSITypeIDVersion() const
{
	return _vSITypeIDVersion;
}

void UNIX_EthernetPortAllocationSettingData::setVSITypeIDVersion(Uint8 &value)
{
	_vSITypeIDVersion = value;
}


void UNIX_EthernetPortAllocationSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetPortAllocationSettingData");
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
	_desiredVLANEndpointMode = Uint16(0);
	_otherEndpointMode = String ("");
	_allowedPriorities.clear();
	_allowedToReceiveMACAddresses.clear();
	_allowedToReceiveVLANs.clear();
	_allowedToTransmitMACAddresses.clear();
	_allowedToTransmitVLANs.clear();
	_defaultPortVID = Uint16(0);
	_defaultPriority = Uint16(0);
	_networkPortProfileID = String ("");
	_networkPortProfileIDType = Uint16(0);
	_otherNetworkPortProfileIDTypeInfo = String ("");
	_portCorrelationID = String ("");
	_portVID = Uint16(0);
	_promiscuous = Boolean(false);
	_receiveBandwidthLimit = Uint64(0);
	_receiveBandwidthReservation = Uint64(0);
	_sourceMACFilteringEnabled = Boolean(false);
	_groupID = Uint32(0);
	_managerID = Uint32(0);
	_vSITypeID = Uint32(0);
	_vSITypeIDVersion = Uint8(0);

}

Boolean UNIX_EthernetPortAllocationSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DesiredVLANEndpointMode"))
			{
				Uint16 desiredVLANEndpointModeValue;
				property.getValue().get(desiredVLANEndpointModeValue);
				setDesiredVLANEndpointMode(desiredVLANEndpointModeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEndpointMode"))
			{
				String otherEndpointModeValue;
				property.getValue().get(otherEndpointModeValue);
				setOtherEndpointMode(otherEndpointModeValue);
			}
			else if (String::equal(property.getName().getString(), "AllowedPriorities"))
			{
				Array<Uint16> allowedPrioritiesValue;
				property.getValue().get(allowedPrioritiesValue);
				setAllowedPriorities(allowedPrioritiesValue);
			}
			else if (String::equal(property.getName().getString(), "AllowedToReceiveMACAddresses"))
			{
				Array<String> allowedToReceiveMACAddressesValue;
				property.getValue().get(allowedToReceiveMACAddressesValue);
				setAllowedToReceiveMACAddresses(allowedToReceiveMACAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "AllowedToReceiveVLANs"))
			{
				Array<Uint16> allowedToReceiveVLANsValue;
				property.getValue().get(allowedToReceiveVLANsValue);
				setAllowedToReceiveVLANs(allowedToReceiveVLANsValue);
			}
			else if (String::equal(property.getName().getString(), "AllowedToTransmitMACAddresses"))
			{
				Array<String> allowedToTransmitMACAddressesValue;
				property.getValue().get(allowedToTransmitMACAddressesValue);
				setAllowedToTransmitMACAddresses(allowedToTransmitMACAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "AllowedToTransmitVLANs"))
			{
				Array<Uint16> allowedToTransmitVLANsValue;
				property.getValue().get(allowedToTransmitVLANsValue);
				setAllowedToTransmitVLANs(allowedToTransmitVLANsValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultPortVID"))
			{
				Uint16 defaultPortVIDValue;
				property.getValue().get(defaultPortVIDValue);
				setDefaultPortVID(defaultPortVIDValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultPriority"))
			{
				Uint16 defaultPriorityValue;
				property.getValue().get(defaultPriorityValue);
				setDefaultPriority(defaultPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "NetworkPortProfileID"))
			{
				String networkPortProfileIDValue;
				property.getValue().get(networkPortProfileIDValue);
				setNetworkPortProfileID(networkPortProfileIDValue);
			}
			else if (String::equal(property.getName().getString(), "NetworkPortProfileIDType"))
			{
				Uint16 networkPortProfileIDTypeValue;
				property.getValue().get(networkPortProfileIDTypeValue);
				setNetworkPortProfileIDType(networkPortProfileIDTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherNetworkPortProfileIDTypeInfo"))
			{
				String otherNetworkPortProfileIDTypeInfoValue;
				property.getValue().get(otherNetworkPortProfileIDTypeInfoValue);
				setOtherNetworkPortProfileIDTypeInfo(otherNetworkPortProfileIDTypeInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PortCorrelationID"))
			{
				String portCorrelationIDValue;
				property.getValue().get(portCorrelationIDValue);
				setPortCorrelationID(portCorrelationIDValue);
			}
			else if (String::equal(property.getName().getString(), "PortVID"))
			{
				Uint16 portVIDValue;
				property.getValue().get(portVIDValue);
				setPortVID(portVIDValue);
			}
			else if (String::equal(property.getName().getString(), "Promiscuous"))
			{
				Boolean promiscuousValue;
				property.getValue().get(promiscuousValue);
				setPromiscuous(promiscuousValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveBandwidthLimit"))
			{
				Uint64 receiveBandwidthLimitValue;
				property.getValue().get(receiveBandwidthLimitValue);
				setReceiveBandwidthLimit(receiveBandwidthLimitValue);
			}
			else if (String::equal(property.getName().getString(), "ReceiveBandwidthReservation"))
			{
				Uint64 receiveBandwidthReservationValue;
				property.getValue().get(receiveBandwidthReservationValue);
				setReceiveBandwidthReservation(receiveBandwidthReservationValue);
			}
			else if (String::equal(property.getName().getString(), "SourceMACFilteringEnabled"))
			{
				Boolean sourceMACFilteringEnabledValue;
				property.getValue().get(sourceMACFilteringEnabledValue);
				setSourceMACFilteringEnabled(sourceMACFilteringEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "GroupID"))
			{
				Uint32 groupIDValue;
				property.getValue().get(groupIDValue);
				setGroupID(groupIDValue);
			}
			else if (String::equal(property.getName().getString(), "ManagerID"))
			{
				Uint32 managerIDValue;
				property.getValue().get(managerIDValue);
				setManagerID(managerIDValue);
			}
			else if (String::equal(property.getName().getString(), "VSITypeID"))
			{
				Uint32 vSITypeIDValue;
				property.getValue().get(vSITypeIDValue);
				setVSITypeID(vSITypeIDValue);
			}
			else if (String::equal(property.getName().getString(), "VSITypeIDVersion"))
			{
				Uint8 vSITypeIDVersionValue;
				property.getValue().get(vSITypeIDVersionValue);
				setVSITypeIDVersion(vSITypeIDVersionValue);
			}
	}
	return true;
}


Boolean UNIX_EthernetPortAllocationSettingData::initialize()
{
	return false;
}

Boolean UNIX_EthernetPortAllocationSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetPortAllocationSettingData");
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
	_desiredVLANEndpointMode = Uint16(0);
	_otherEndpointMode = String ("");
	_allowedPriorities.clear();
	_allowedToReceiveMACAddresses.clear();
	_allowedToReceiveVLANs.clear();
	_allowedToTransmitMACAddresses.clear();
	_allowedToTransmitVLANs.clear();
	_defaultPortVID = Uint16(0);
	_defaultPriority = Uint16(0);
	_networkPortProfileID = String ("");
	_networkPortProfileIDType = Uint16(0);
	_otherNetworkPortProfileIDTypeInfo = String ("");
	_portCorrelationID = String ("");
	_portVID = Uint16(0);
	_promiscuous = Boolean(false);
	_receiveBandwidthLimit = Uint64(0);
	_receiveBandwidthReservation = Uint64(0);
	_sourceMACFilteringEnabled = Boolean(false);
	_groupID = Uint32(0);
	_managerID = Uint32(0);
	_vSITypeID = Uint32(0);
	_vSITypeIDVersion = Uint8(0);
	
	return false;
}

Boolean UNIX_EthernetPortAllocationSettingData::finalize()
{
	return false;
}


Boolean UNIX_EthernetPortAllocationSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EthernetPortAllocationSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetPortAllocationSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetPortAllocationSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetPortAllocationSettingData::validateInstance()
{
	return true;
}

