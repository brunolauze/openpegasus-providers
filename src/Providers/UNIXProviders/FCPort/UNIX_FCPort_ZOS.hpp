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


UNIX_FCPort::UNIX_FCPort(void)
{
}

UNIX_FCPort::~UNIX_FCPort(void)
{
}

Boolean UNIX_FCPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPort::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCPort::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPort::getCaption() const
{
	return _caption;
}

void UNIX_FCPort::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPort::getDescription() const
{
	return _description;
}

void UNIX_FCPort::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPort::getElementName() const
{
	return _elementName;
}

void UNIX_FCPort::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCPort::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCPort::getGeneration() const
{
	return _generation;
}

void UNIX_FCPort::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FCPort::getInstallDate() const
{
	return _installDate;
}

void UNIX_FCPort::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_FCPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FCPort::getName() const
{
	return _name;
}

void UNIX_FCPort::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FCPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FCPort::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_FCPort::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_FCPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FCPort::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_FCPort::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_FCPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FCPort::getStatus() const
{
	return _status;
}

void UNIX_FCPort::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_FCPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FCPort::getHealthState() const
{
	return _healthState;
}

void UNIX_FCPort::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_FCPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FCPort::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_FCPort::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_FCPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FCPort::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_FCPort::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_FCPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FCPort::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_FCPort::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_FCPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FCPort::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_FCPort::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_FCPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FCPort::getEnabledState() const
{
	return _enabledState;
}

void UNIX_FCPort::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_FCPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FCPort::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_FCPort::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_FCPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FCPort::getRequestedState() const
{
	return _requestedState;
}

void UNIX_FCPort::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_FCPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FCPort::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_FCPort::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_FCPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FCPort::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_FCPort::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_FCPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FCPort::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_FCPort::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_FCPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FCPort::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_FCPort::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_FCPort::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_FCPort::getAllocationState() const
{
	return _allocationState;
}

void UNIX_FCPort::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_FCPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FCPort::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FCPort::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FCPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FCPort::getSystemName() const
{
	return _systemName;
}

void UNIX_FCPort::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FCPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FCPort::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FCPort::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FCPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FCPort::getDeviceID() const
{
	return _deviceID;
}

void UNIX_FCPort::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_FCPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_FCPort::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_FCPort::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_FCPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_FCPort::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_FCPort::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_FCPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_FCPort::getAvailability() const
{
	return _availability;
}

void UNIX_FCPort::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_FCPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_FCPort::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_FCPort::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_FCPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_FCPort::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_FCPort::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_FCPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_FCPort::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_FCPort::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_FCPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_FCPort::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_FCPort::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_FCPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_FCPort::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_FCPort::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_FCPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_FCPort::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_FCPort::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_FCPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_FCPort::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_FCPort::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_FCPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_FCPort::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_FCPort::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_FCPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_FCPort::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_FCPort::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_FCPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_FCPort::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_FCPort::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_FCPort::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_FCPort::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_FCPort::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_FCPort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_FCPort::getSpeed() const
{
	return _speed;
}

void UNIX_FCPort::setSpeed(Uint64 &value)
{
	_speed = value;
}

Boolean UNIX_FCPort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_FCPort::getMaxSpeed() const
{
	return _maxSpeed;
}

void UNIX_FCPort::setMaxSpeed(Uint64 &value)
{
	_maxSpeed = value;
}

Boolean UNIX_FCPort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_FCPort::getRequestedSpeed() const
{
	return _requestedSpeed;
}

void UNIX_FCPort::setRequestedSpeed(Uint64 &value)
{
	_requestedSpeed = value;
}

Boolean UNIX_FCPort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_FCPort::getUsageRestriction() const
{
	return _usageRestriction;
}

void UNIX_FCPort::setUsageRestriction(Uint16 &value)
{
	_usageRestriction = value;
}

Boolean UNIX_FCPort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_FCPort::getPortType() const
{
	return _portType;
}

void UNIX_FCPort::setPortType(Uint16 &value)
{
	_portType = value;
}

Boolean UNIX_FCPort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_FCPort::getOtherPortType() const
{
	return _otherPortType;
}

void UNIX_FCPort::setOtherPortType(String &value)
{
	_otherPortType = value;
}

Boolean UNIX_FCPort::getOtherNetworkPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_TYPE, getOtherNetworkPortType());
	return true;
}

String UNIX_FCPort::getOtherNetworkPortType() const
{
	return _otherNetworkPortType;
}

void UNIX_FCPort::setOtherNetworkPortType(String &value)
{
	_otherNetworkPortType = value;
}

Boolean UNIX_FCPort::getPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_NUMBER, getPortNumber());
	return true;
}

Uint16 UNIX_FCPort::getPortNumber() const
{
	return _portNumber;
}

void UNIX_FCPort::setPortNumber(Uint16 &value)
{
	_portNumber = value;
}

Boolean UNIX_FCPort::getLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGY, getLinkTechnology());
	return true;
}

Uint16 UNIX_FCPort::getLinkTechnology() const
{
	return _linkTechnology;
}

void UNIX_FCPort::setLinkTechnology(Uint16 &value)
{
	_linkTechnology = value;
}

Boolean UNIX_FCPort::getOtherLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGY, getOtherLinkTechnology());
	return true;
}

String UNIX_FCPort::getOtherLinkTechnology() const
{
	return _otherLinkTechnology;
}

void UNIX_FCPort::setOtherLinkTechnology(String &value)
{
	_otherLinkTechnology = value;
}

Boolean UNIX_FCPort::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_FCPort::getPermanentAddress() const
{
	return _permanentAddress;
}

void UNIX_FCPort::setPermanentAddress(String &value)
{
	_permanentAddress = value;
}

Boolean UNIX_FCPort::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_FCPort::getNetworkAddresses() const
{
	return _networkAddresses;
}

void UNIX_FCPort::setNetworkAddresses(Array<String> &value)
{
	_networkAddresses = value;
}

Boolean UNIX_FCPort::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_FCPort::getFullDuplex() const
{
	return _fullDuplex;
}

void UNIX_FCPort::setFullDuplex(Boolean &value)
{
	_fullDuplex = value;
}

Boolean UNIX_FCPort::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_FCPort::getAutoSense() const
{
	return _autoSense;
}

void UNIX_FCPort::setAutoSense(Boolean &value)
{
	_autoSense = value;
}

Boolean UNIX_FCPort::getSupportedMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MAXIMUM_TRANSMISSION_UNIT, getSupportedMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_FCPort::getSupportedMaximumTransmissionUnit() const
{
	return _supportedMaximumTransmissionUnit;
}

void UNIX_FCPort::setSupportedMaximumTransmissionUnit(Uint64 &value)
{
	_supportedMaximumTransmissionUnit = value;
}

Boolean UNIX_FCPort::getActiveMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_MAXIMUM_TRANSMISSION_UNIT, getActiveMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_FCPort::getActiveMaximumTransmissionUnit() const
{
	return _activeMaximumTransmissionUnit;
}

void UNIX_FCPort::setActiveMaximumTransmissionUnit(Uint64 &value)
{
	_activeMaximumTransmissionUnit = value;
}

Boolean UNIX_FCPort::getSupportedCOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_C_OS, getSupportedCOS());
	return true;
}

Array<Uint16> UNIX_FCPort::getSupportedCOS() const
{
	return _supportedCOS;
}

void UNIX_FCPort::setSupportedCOS(Array<Uint16> &value)
{
	_supportedCOS = value;
}

Boolean UNIX_FCPort::getActiveCOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_C_OS, getActiveCOS());
	return true;
}

Array<Uint16> UNIX_FCPort::getActiveCOS() const
{
	return _activeCOS;
}

void UNIX_FCPort::setActiveCOS(Array<Uint16> &value)
{
	_activeCOS = value;
}

Boolean UNIX_FCPort::getSupportedFC4Types(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FC_4_TYPES, getSupportedFC4Types());
	return true;
}

Array<Uint16> UNIX_FCPort::getSupportedFC4Types() const
{
	return _supportedFC4Types;
}

void UNIX_FCPort::setSupportedFC4Types(Array<Uint16> &value)
{
	_supportedFC4Types = value;
}

Boolean UNIX_FCPort::getActiveFC4Types(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_FC_4_TYPES, getActiveFC4Types());
	return true;
}

Array<Uint16> UNIX_FCPort::getActiveFC4Types() const
{
	return _activeFC4Types;
}

void UNIX_FCPort::setActiveFC4Types(Array<Uint16> &value)
{
	_activeFC4Types = value;
}

Boolean UNIX_FCPort::getDetailedPortState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_PORT_STATE, getDetailedPortState());
	return true;
}

Uint16 UNIX_FCPort::getDetailedPortState() const
{
	return _detailedPortState;
}

void UNIX_FCPort::setDetailedPortState(Uint16 &value)
{
	_detailedPortState = value;
}

Boolean UNIX_FCPort::getDomainPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_PORT_NUMBER, getDomainPortNumber());
	return true;
}

Uint16 UNIX_FCPort::getDomainPortNumber() const
{
	return _domainPortNumber;
}

void UNIX_FCPort::setDomainPortNumber(Uint16 &value)
{
	_domainPortNumber = value;
}

Boolean UNIX_FCPort::getLogicalModulePortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_MODULE_PORT_NUMBER, getLogicalModulePortNumber());
	return true;
}

Uint16 UNIX_FCPort::getLogicalModulePortNumber() const
{
	return _logicalModulePortNumber;
}

void UNIX_FCPort::setLogicalModulePortNumber(Uint16 &value)
{
	_logicalModulePortNumber = value;
}

Boolean UNIX_FCPort::getPortAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_AVAILABILITY, getPortAvailability());
	return true;
}

Uint16 UNIX_FCPort::getPortAvailability() const
{
	return _portAvailability;
}

void UNIX_FCPort::setPortAvailability(Uint16 &value)
{
	_portAvailability = value;
}

Boolean UNIX_FCPort::getPortDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_DISCRIMINATOR, getPortDiscriminator());
	return true;
}

Array<Uint16> UNIX_FCPort::getPortDiscriminator() const
{
	return _portDiscriminator;
}

void UNIX_FCPort::setPortDiscriminator(Array<Uint16> &value)
{
	_portDiscriminator = value;
}


void UNIX_FCPort::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPort");
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
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_allocationState = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_FCPort");
	_deviceID = String ("");
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String ("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	_powerOnHours = Uint64(0);
	_totalPowerOnHours = Uint64(0);
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_speed = Uint64(0);
	_maxSpeed = Uint64(0);
	_requestedSpeed = Uint64(0);
	_usageRestriction = Uint16(0);
	_portType = Uint16(0);
	_otherPortType = String ("");
	_otherNetworkPortType = String ("");
	_portNumber = Uint16(0);
	_linkTechnology = Uint16(0);
	_otherLinkTechnology = String ("");
	_permanentAddress = String ("");
	_networkAddresses.clear();
	_fullDuplex = Boolean(false);
	_autoSense = Boolean(false);
	_supportedMaximumTransmissionUnit = Uint64(0);
	_activeMaximumTransmissionUnit = Uint64(0);
	_supportedCOS.clear();
	_activeCOS.clear();
	_supportedFC4Types.clear();
	_activeFC4Types.clear();
	_detailedPortState = Uint16(0);
	_domainPortNumber = Uint16(0);
	_logicalModulePortNumber = Uint16(0);
	_portAvailability = Uint16(0);
	_portDiscriminator.clear();

}

Boolean UNIX_FCPort::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EnabledState"))
			{
				Uint16 enabledStateValue;
				property.getValue().get(enabledStateValue);
				setEnabledState(enabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledState"))
			{
				String otherEnabledStateValue;
				property.getValue().get(otherEnabledStateValue);
				setOtherEnabledState(otherEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedState"))
			{
				Uint16 requestedStateValue;
				property.getValue().get(requestedStateValue);
				setRequestedState(requestedStateValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledDefault"))
			{
				Uint16 enabledDefaultValue;
				property.getValue().get(enabledDefaultValue);
				setEnabledDefault(enabledDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastStateChange"))
			{
				CIMDateTime timeOfLastStateChangeValue;
				property.getValue().get(timeOfLastStateChangeValue);
				setTimeOfLastStateChange(timeOfLastStateChangeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableRequestedStates"))
			{
				Array<Uint16> availableRequestedStatesValue;
				property.getValue().get(availableRequestedStatesValue);
				setAvailableRequestedStates(availableRequestedStatesValue);
			}
			else if (String::equal(property.getName().getString(), "TransitioningToState"))
			{
				Uint16 transitioningToStateValue;
				property.getValue().get(transitioningToStateValue);
				setTransitioningToState(transitioningToStateValue);
			}
			else if (String::equal(property.getName().getString(), "AllocationState"))
			{
				String allocationStateValue;
				property.getValue().get(allocationStateValue);
				setAllocationState(allocationStateValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceID"))
			{
				String deviceIDValue;
				property.getValue().get(deviceIDValue);
				setDeviceID(deviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementSupported"))
			{
				Boolean powerManagementSupportedValue;
				property.getValue().get(powerManagementSupportedValue);
				setPowerManagementSupported(powerManagementSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementCapabilities"))
			{
				Array<Uint16> powerManagementCapabilitiesValue;
				property.getValue().get(powerManagementCapabilitiesValue);
				setPowerManagementCapabilities(powerManagementCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "Availability"))
			{
				Uint16 availabilityValue;
				property.getValue().get(availabilityValue);
				setAvailability(availabilityValue);
			}
			else if (String::equal(property.getName().getString(), "StatusInfo"))
			{
				Uint16 statusInfoValue;
				property.getValue().get(statusInfoValue);
				setStatusInfo(statusInfoValue);
			}
			else if (String::equal(property.getName().getString(), "LastErrorCode"))
			{
				Uint32 lastErrorCodeValue;
				property.getValue().get(lastErrorCodeValue);
				setLastErrorCode(lastErrorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDescription"))
			{
				String errorDescriptionValue;
				property.getValue().get(errorDescriptionValue);
				setErrorDescription(errorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCleared"))
			{
				Boolean errorClearedValue;
				property.getValue().get(errorClearedValue);
				setErrorCleared(errorClearedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				Array<String> otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PowerOnHours"))
			{
				Uint64 powerOnHoursValue;
				property.getValue().get(powerOnHoursValue);
				setPowerOnHours(powerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "TotalPowerOnHours"))
			{
				Uint64 totalPowerOnHoursValue;
				property.getValue().get(totalPowerOnHoursValue);
				setTotalPowerOnHours(totalPowerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifyingDescriptions"))
			{
				Array<String> identifyingDescriptionsValue;
				property.getValue().get(identifyingDescriptionsValue);
				setIdentifyingDescriptions(identifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "AdditionalAvailability"))
			{
				Array<Uint16> additionalAvailabilityValue;
				property.getValue().get(additionalAvailabilityValue);
				setAdditionalAvailability(additionalAvailabilityValue);
			}
			else if (String::equal(property.getName().getString(), "MaxQuiesceTime"))
			{
				Uint64 maxQuiesceTimeValue;
				property.getValue().get(maxQuiesceTimeValue);
				setMaxQuiesceTime(maxQuiesceTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LocationIndicator"))
			{
				Uint16 locationIndicatorValue;
				property.getValue().get(locationIndicatorValue);
				setLocationIndicator(locationIndicatorValue);
			}
			else if (String::equal(property.getName().getString(), "Speed"))
			{
				Uint64 speedValue;
				property.getValue().get(speedValue);
				setSpeed(speedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxSpeed"))
			{
				Uint64 maxSpeedValue;
				property.getValue().get(maxSpeedValue);
				setMaxSpeed(maxSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedSpeed"))
			{
				Uint64 requestedSpeedValue;
				property.getValue().get(requestedSpeedValue);
				setRequestedSpeed(requestedSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "UsageRestriction"))
			{
				Uint16 usageRestrictionValue;
				property.getValue().get(usageRestrictionValue);
				setUsageRestriction(usageRestrictionValue);
			}
			else if (String::equal(property.getName().getString(), "PortType"))
			{
				Uint16 portTypeValue;
				property.getValue().get(portTypeValue);
				setPortType(portTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPortType"))
			{
				String otherPortTypeValue;
				property.getValue().get(otherPortTypeValue);
				setOtherPortType(otherPortTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherNetworkPortType"))
			{
				String otherNetworkPortTypeValue;
				property.getValue().get(otherNetworkPortTypeValue);
				setOtherNetworkPortType(otherNetworkPortTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PortNumber"))
			{
				Uint16 portNumberValue;
				property.getValue().get(portNumberValue);
				setPortNumber(portNumberValue);
			}
			else if (String::equal(property.getName().getString(), "LinkTechnology"))
			{
				Uint16 linkTechnologyValue;
				property.getValue().get(linkTechnologyValue);
				setLinkTechnology(linkTechnologyValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLinkTechnology"))
			{
				String otherLinkTechnologyValue;
				property.getValue().get(otherLinkTechnologyValue);
				setOtherLinkTechnology(otherLinkTechnologyValue);
			}
			else if (String::equal(property.getName().getString(), "PermanentAddress"))
			{
				String permanentAddressValue;
				property.getValue().get(permanentAddressValue);
				setPermanentAddress(permanentAddressValue);
			}
			else if (String::equal(property.getName().getString(), "NetworkAddresses"))
			{
				Array<String> networkAddressesValue;
				property.getValue().get(networkAddressesValue);
				setNetworkAddresses(networkAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "FullDuplex"))
			{
				Boolean fullDuplexValue;
				property.getValue().get(fullDuplexValue);
				setFullDuplex(fullDuplexValue);
			}
			else if (String::equal(property.getName().getString(), "AutoSense"))
			{
				Boolean autoSenseValue;
				property.getValue().get(autoSenseValue);
				setAutoSense(autoSenseValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedMaximumTransmissionUnit"))
			{
				Uint64 supportedMaximumTransmissionUnitValue;
				property.getValue().get(supportedMaximumTransmissionUnitValue);
				setSupportedMaximumTransmissionUnit(supportedMaximumTransmissionUnitValue);
			}
			else if (String::equal(property.getName().getString(), "ActiveMaximumTransmissionUnit"))
			{
				Uint64 activeMaximumTransmissionUnitValue;
				property.getValue().get(activeMaximumTransmissionUnitValue);
				setActiveMaximumTransmissionUnit(activeMaximumTransmissionUnitValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedCOS"))
			{
				Array<Uint16> supportedCOSValue;
				property.getValue().get(supportedCOSValue);
				setSupportedCOS(supportedCOSValue);
			}
			else if (String::equal(property.getName().getString(), "ActiveCOS"))
			{
				Array<Uint16> activeCOSValue;
				property.getValue().get(activeCOSValue);
				setActiveCOS(activeCOSValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedFC4Types"))
			{
				Array<Uint16> supportedFC4TypesValue;
				property.getValue().get(supportedFC4TypesValue);
				setSupportedFC4Types(supportedFC4TypesValue);
			}
			else if (String::equal(property.getName().getString(), "ActiveFC4Types"))
			{
				Array<Uint16> activeFC4TypesValue;
				property.getValue().get(activeFC4TypesValue);
				setActiveFC4Types(activeFC4TypesValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedPortState"))
			{
				Uint16 detailedPortStateValue;
				property.getValue().get(detailedPortStateValue);
				setDetailedPortState(detailedPortStateValue);
			}
			else if (String::equal(property.getName().getString(), "DomainPortNumber"))
			{
				Uint16 domainPortNumberValue;
				property.getValue().get(domainPortNumberValue);
				setDomainPortNumber(domainPortNumberValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalModulePortNumber"))
			{
				Uint16 logicalModulePortNumberValue;
				property.getValue().get(logicalModulePortNumberValue);
				setLogicalModulePortNumber(logicalModulePortNumberValue);
			}
			else if (String::equal(property.getName().getString(), "PortAvailability"))
			{
				Uint16 portAvailabilityValue;
				property.getValue().get(portAvailabilityValue);
				setPortAvailability(portAvailabilityValue);
			}
			else if (String::equal(property.getName().getString(), "PortDiscriminator"))
			{
				Array<Uint16> portDiscriminatorValue;
				property.getValue().get(portDiscriminatorValue);
				setPortDiscriminator(portDiscriminatorValue);
			}
	}
	return true;
}

Uint32 UNIX_FCPort::invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RequestStateChange */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeDecommission(
		Boolean &inForce,
		Array<String> &inMessages
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Decommission */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCPort::invokeRecommission(
		Array<String> &inMessages
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Recommission */
	
	
	
	return returnValue;
}


Boolean UNIX_FCPort::initialize()
{
	return false;
}

Boolean UNIX_FCPort::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPort");
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
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_allocationState = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_FCPort");
	_deviceID = String ("");
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String ("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	_powerOnHours = Uint64(0);
	_totalPowerOnHours = Uint64(0);
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_speed = Uint64(0);
	_maxSpeed = Uint64(0);
	_requestedSpeed = Uint64(0);
	_usageRestriction = Uint16(0);
	_portType = Uint16(0);
	_otherPortType = String ("");
	_otherNetworkPortType = String ("");
	_portNumber = Uint16(0);
	_linkTechnology = Uint16(0);
	_otherLinkTechnology = String ("");
	_permanentAddress = String ("");
	_networkAddresses.clear();
	_fullDuplex = Boolean(false);
	_autoSense = Boolean(false);
	_supportedMaximumTransmissionUnit = Uint64(0);
	_activeMaximumTransmissionUnit = Uint64(0);
	_supportedCOS.clear();
	_activeCOS.clear();
	_supportedFC4Types.clear();
	_activeFC4Types.clear();
	_detailedPortState = Uint16(0);
	_domainPortNumber = Uint16(0);
	_logicalModulePortNumber = Uint16(0);
	_portAvailability = Uint16(0);
	_portDiscriminator.clear();
	
	return false;
}

Boolean UNIX_FCPort::finalize()
{
	return false;
}

Boolean UNIX_FCPort::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FCPort::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getDeviceID(), deviceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FCPort::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPort::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPort::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPort::validateInstance()
{
	return true;
}

