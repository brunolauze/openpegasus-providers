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


UNIX_PhysicalExtent::UNIX_PhysicalExtent(void)
{
}

UNIX_PhysicalExtent::~UNIX_PhysicalExtent(void)
{
}

Boolean UNIX_PhysicalExtent::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalExtent::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PhysicalExtent::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PhysicalExtent::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalExtent::getCaption() const
{
	return _caption;
}

void UNIX_PhysicalExtent::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PhysicalExtent::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalExtent::getDescription() const
{
	return _description;
}

void UNIX_PhysicalExtent::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PhysicalExtent::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalExtent::getElementName() const
{
	return _elementName;
}

void UNIX_PhysicalExtent::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PhysicalExtent::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PhysicalExtent::getGeneration() const
{
	return _generation;
}

void UNIX_PhysicalExtent::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PhysicalExtent::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalExtent::getInstallDate() const
{
	return _installDate;
}

void UNIX_PhysicalExtent::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PhysicalExtent::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalExtent::getName() const
{
	return _name;
}

void UNIX_PhysicalExtent::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PhysicalExtent::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PhysicalExtent::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PhysicalExtent::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalExtent::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PhysicalExtent::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PhysicalExtent::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalExtent::getStatus() const
{
	return _status;
}

void UNIX_PhysicalExtent::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PhysicalExtent::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getHealthState() const
{
	return _healthState;
}

void UNIX_PhysicalExtent::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PhysicalExtent::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalExtent::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PhysicalExtent::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PhysicalExtent::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalExtent::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PhysicalExtent::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PhysicalExtent::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalExtent::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PhysicalExtent::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PhysicalExtent::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalExtent::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PhysicalExtent::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PhysicalExtent::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PhysicalExtent::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PhysicalExtent::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PhysicalExtent::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PhysicalExtent::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PhysicalExtent::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PhysicalExtent::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PhysicalExtent::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PhysicalExtent::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PhysicalExtent::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PhysicalExtent::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PhysicalExtent::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PhysicalExtent::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PhysicalExtent::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PhysicalExtent::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PhysicalExtent::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PhysicalExtent::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PhysicalExtent::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_PhysicalExtent::getAllocationState() const
{
	return _allocationState;
}

void UNIX_PhysicalExtent::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_PhysicalExtent::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PhysicalExtent::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PhysicalExtent::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PhysicalExtent::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PhysicalExtent::getSystemName() const
{
	return _systemName;
}

void UNIX_PhysicalExtent::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PhysicalExtent::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalExtent::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PhysicalExtent::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PhysicalExtent::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PhysicalExtent::getDeviceID() const
{
	return _deviceID;
}

void UNIX_PhysicalExtent::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_PhysicalExtent::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PhysicalExtent::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_PhysicalExtent::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_PhysicalExtent::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_PhysicalExtent::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_PhysicalExtent::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PhysicalExtent::getAvailability() const
{
	return _availability;
}

void UNIX_PhysicalExtent::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_PhysicalExtent::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PhysicalExtent::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_PhysicalExtent::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_PhysicalExtent::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PhysicalExtent::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_PhysicalExtent::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_PhysicalExtent::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PhysicalExtent::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_PhysicalExtent::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_PhysicalExtent::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PhysicalExtent::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_PhysicalExtent::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_PhysicalExtent::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PhysicalExtent::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PhysicalExtent::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PhysicalExtent::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PhysicalExtent::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_PhysicalExtent::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_PhysicalExtent::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PhysicalExtent::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_PhysicalExtent::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_PhysicalExtent::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PhysicalExtent::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_PhysicalExtent::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_PhysicalExtent::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_PhysicalExtent::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_PhysicalExtent::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PhysicalExtent::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_PhysicalExtent::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_PhysicalExtent::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_PhysicalExtent::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_PhysicalExtent::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_PhysicalExtent::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_PhysicalExtent::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_PhysicalExtent::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_PhysicalExtent::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_PhysicalExtent::getPurpose() const
{
	return _purpose;
}

void UNIX_PhysicalExtent::setPurpose(String &value)
{
	_purpose = value;
}

Boolean UNIX_PhysicalExtent::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_PhysicalExtent::getAccess() const
{
	return _access;
}

void UNIX_PhysicalExtent::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_PhysicalExtent::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_PhysicalExtent::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_PhysicalExtent::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_PhysicalExtent::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_PhysicalExtent::getBlockSize() const
{
	return _blockSize;
}

void UNIX_PhysicalExtent::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_PhysicalExtent::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_PhysicalExtent::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_PhysicalExtent::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_PhysicalExtent::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_PhysicalExtent::getConsumableBlocks() const
{
	return _consumableBlocks;
}

void UNIX_PhysicalExtent::setConsumableBlocks(Uint64 &value)
{
	_consumableBlocks = value;
}

Boolean UNIX_PhysicalExtent::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_PhysicalExtent::getIsBasedOnUnderlyingRedundancy() const
{
	return _isBasedOnUnderlyingRedundancy;
}

void UNIX_PhysicalExtent::setIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_isBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_PhysicalExtent::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_PhysicalExtent::getSequentialAccess() const
{
	return _sequentialAccess;
}

void UNIX_PhysicalExtent::setSequentialAccess(Boolean &value)
{
	_sequentialAccess = value;
}

Boolean UNIX_PhysicalExtent::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getExtentStatus() const
{
	return _extentStatus;
}

void UNIX_PhysicalExtent::setExtentStatus(Array<Uint16> &value)
{
	_extentStatus = value;
}

Boolean UNIX_PhysicalExtent::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_PhysicalExtent::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_PhysicalExtent::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_PhysicalExtent::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_PhysicalExtent::getDataRedundancy() const
{
	return _dataRedundancy;
}

void UNIX_PhysicalExtent::setDataRedundancy(Uint16 &value)
{
	_dataRedundancy = value;
}

Boolean UNIX_PhysicalExtent::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_PhysicalExtent::getPackageRedundancy() const
{
	return _packageRedundancy;
}

void UNIX_PhysicalExtent::setPackageRedundancy(Uint16 &value)
{
	_packageRedundancy = value;
}

Boolean UNIX_PhysicalExtent::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_PhysicalExtent::getDeltaReservation() const
{
	return _deltaReservation;
}

void UNIX_PhysicalExtent::setDeltaReservation(Uint8 &value)
{
	_deltaReservation = value;
}

Boolean UNIX_PhysicalExtent::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_PhysicalExtent::getPrimordial() const
{
	return _primordial;
}

void UNIX_PhysicalExtent::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_PhysicalExtent::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_PhysicalExtent::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_PhysicalExtent::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_PhysicalExtent::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_PhysicalExtent::getNameNamespace() const
{
	return _nameNamespace;
}

void UNIX_PhysicalExtent::setNameNamespace(Uint16 &value)
{
	_nameNamespace = value;
}

Boolean UNIX_PhysicalExtent::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_PhysicalExtent::getOtherNameNamespace() const
{
	return _otherNameNamespace;
}

void UNIX_PhysicalExtent::setOtherNameNamespace(String &value)
{
	_otherNameNamespace = value;
}

Boolean UNIX_PhysicalExtent::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_PhysicalExtent::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_PhysicalExtent::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_PhysicalExtent::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_PhysicalExtent::getUsage() const
{
	return _usage;
}

void UNIX_PhysicalExtent::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_PhysicalExtent::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_PhysicalExtent::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_PhysicalExtent::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_PhysicalExtent::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_PhysicalExtent::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_PhysicalExtent::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_PhysicalExtent::getExtentInterleaveDepth() const
{
	return _extentInterleaveDepth;
}

void UNIX_PhysicalExtent::setExtentInterleaveDepth(Uint64 &value)
{
	_extentInterleaveDepth = value;
}

Boolean UNIX_PhysicalExtent::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_PhysicalExtent::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_PhysicalExtent::setExtentStripeLength(Uint64 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_PhysicalExtent::getIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPOSITE, getIsComposite());
	return true;
}

Boolean UNIX_PhysicalExtent::getIsComposite() const
{
	return _isComposite;
}

void UNIX_PhysicalExtent::setIsComposite(Boolean &value)
{
	_isComposite = value;
}

Boolean UNIX_PhysicalExtent::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_PhysicalExtent::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_PhysicalExtent::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}

Boolean UNIX_PhysicalExtent::getExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_DISCRIMINATOR, getExtentDiscriminator());
	return true;
}

Array<String> UNIX_PhysicalExtent::getExtentDiscriminator() const
{
	return _extentDiscriminator;
}

void UNIX_PhysicalExtent::setExtentDiscriminator(Array<String> &value)
{
	_extentDiscriminator = value;
}

Boolean UNIX_PhysicalExtent::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_PhysicalExtent::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_PhysicalExtent::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_PhysicalExtent::getCompressionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_STATE, getCompressionState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getCompressionState() const
{
	return _compressionState;
}

void UNIX_PhysicalExtent::setCompressionState(Uint16 &value)
{
	_compressionState = value;
}

Boolean UNIX_PhysicalExtent::getIsCompressed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPRESSED, getIsCompressed());
	return true;
}

Boolean UNIX_PhysicalExtent::getIsCompressed() const
{
	return _isCompressed;
}

void UNIX_PhysicalExtent::setIsCompressed(Boolean &value)
{
	_isCompressed = value;
}

Boolean UNIX_PhysicalExtent::getUnitsBeforeCheckDataInterleave(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_BEFORE_CHECK_DATA_INTERLEAVE, getUnitsBeforeCheckDataInterleave());
	return true;
}

Uint64 UNIX_PhysicalExtent::getUnitsBeforeCheckDataInterleave() const
{
	return _unitsBeforeCheckDataInterleave;
}

void UNIX_PhysicalExtent::setUnitsBeforeCheckDataInterleave(Uint64 &value)
{
	_unitsBeforeCheckDataInterleave = value;
}

Boolean UNIX_PhysicalExtent::getUnitsOfCheckData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_OF_CHECK_DATA, getUnitsOfCheckData());
	return true;
}

Uint64 UNIX_PhysicalExtent::getUnitsOfCheckData() const
{
	return _unitsOfCheckData;
}

void UNIX_PhysicalExtent::setUnitsOfCheckData(Uint64 &value)
{
	_unitsOfCheckData = value;
}

Boolean UNIX_PhysicalExtent::getUnitsOfUserData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_OF_USER_DATA, getUnitsOfUserData());
	return true;
}

Uint64 UNIX_PhysicalExtent::getUnitsOfUserData() const
{
	return _unitsOfUserData;
}

void UNIX_PhysicalExtent::setUnitsOfUserData(Uint64 &value)
{
	_unitsOfUserData = value;
}


void UNIX_PhysicalExtent::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalExtent");
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
	_creationClassName = String("UNIX_PhysicalExtent");
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
	_dataOrganization = Uint16(0);
	_purpose = String ("");
	_access = Uint16(0);
	_errorMethodology = String ("");
	_blockSize = Uint64(0);
	_numberOfBlocks = Uint64(0);
	_consumableBlocks = Uint64(0);
	_isBasedOnUnderlyingRedundancy = Boolean(false);
	_sequentialAccess = Boolean(false);
	_extentStatus.clear();
	_noSinglePointOfFailure = Boolean(false);
	_dataRedundancy = Uint16(0);
	_packageRedundancy = Uint16(0);
	_deltaReservation = Uint8(0);
	_primordial = Boolean(false);
	_nameFormat = Uint16(0);
	_nameNamespace = Uint16(0);
	_otherNameNamespace = String ("");
	_otherNameFormat = String ("");
	_usage = Uint16(0);
	_otherUsageDescription = String ("");
	_clientSettableUsage.clear();
	_extentInterleaveDepth = Uint64(0);
	_extentStripeLength = Uint64(0);
	_isComposite = Boolean(false);
	_isConcatenated = Boolean(false);
	_extentDiscriminator.clear();
	_compressionRate = Uint16(0);
	_compressionState = Uint16(0);
	_isCompressed = Boolean(false);
	_unitsBeforeCheckDataInterleave = Uint64(0);
	_unitsOfCheckData = Uint64(0);
	_unitsOfUserData = Uint64(0);

}

Boolean UNIX_PhysicalExtent::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DataOrganization"))
			{
				Uint16 dataOrganizationValue;
				property.getValue().get(dataOrganizationValue);
				setDataOrganization(dataOrganizationValue);
			}
			else if (String::equal(property.getName().getString(), "Purpose"))
			{
				String purposeValue;
				property.getValue().get(purposeValue);
				setPurpose(purposeValue);
			}
			else if (String::equal(property.getName().getString(), "Access"))
			{
				Uint16 accessValue;
				property.getValue().get(accessValue);
				setAccess(accessValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorMethodology"))
			{
				String errorMethodologyValue;
				property.getValue().get(errorMethodologyValue);
				setErrorMethodology(errorMethodologyValue);
			}
			else if (String::equal(property.getName().getString(), "BlockSize"))
			{
				Uint64 blockSizeValue;
				property.getValue().get(blockSizeValue);
				setBlockSize(blockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfBlocks"))
			{
				Uint64 numberOfBlocksValue;
				property.getValue().get(numberOfBlocksValue);
				setNumberOfBlocks(numberOfBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "ConsumableBlocks"))
			{
				Uint64 consumableBlocksValue;
				property.getValue().get(consumableBlocksValue);
				setConsumableBlocks(consumableBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "IsBasedOnUnderlyingRedundancy"))
			{
				Boolean isBasedOnUnderlyingRedundancyValue;
				property.getValue().get(isBasedOnUnderlyingRedundancyValue);
				setIsBasedOnUnderlyingRedundancy(isBasedOnUnderlyingRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "SequentialAccess"))
			{
				Boolean sequentialAccessValue;
				property.getValue().get(sequentialAccessValue);
				setSequentialAccess(sequentialAccessValue);
			}
			else if (String::equal(property.getName().getString(), "ExtentStatus"))
			{
				Array<Uint16> extentStatusValue;
				property.getValue().get(extentStatusValue);
				setExtentStatus(extentStatusValue);
			}
			else if (String::equal(property.getName().getString(), "NoSinglePointOfFailure"))
			{
				Boolean noSinglePointOfFailureValue;
				property.getValue().get(noSinglePointOfFailureValue);
				setNoSinglePointOfFailure(noSinglePointOfFailureValue);
			}
			else if (String::equal(property.getName().getString(), "DataRedundancy"))
			{
				Uint16 dataRedundancyValue;
				property.getValue().get(dataRedundancyValue);
				setDataRedundancy(dataRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "PackageRedundancy"))
			{
				Uint16 packageRedundancyValue;
				property.getValue().get(packageRedundancyValue);
				setPackageRedundancy(packageRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaReservation"))
			{
				Uint8 deltaReservationValue;
				property.getValue().get(deltaReservationValue);
				setDeltaReservation(deltaReservationValue);
			}
			else if (String::equal(property.getName().getString(), "Primordial"))
			{
				Boolean primordialValue;
				property.getValue().get(primordialValue);
				setPrimordial(primordialValue);
			}
			else if (String::equal(property.getName().getString(), "NameFormat"))
			{
				Uint16 nameFormatValue;
				property.getValue().get(nameFormatValue);
				setNameFormat(nameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "NameNamespace"))
			{
				Uint16 nameNamespaceValue;
				property.getValue().get(nameNamespaceValue);
				setNameNamespace(nameNamespaceValue);
			}
			else if (String::equal(property.getName().getString(), "OtherNameNamespace"))
			{
				String otherNameNamespaceValue;
				property.getValue().get(otherNameNamespaceValue);
				setOtherNameNamespace(otherNameNamespaceValue);
			}
			else if (String::equal(property.getName().getString(), "OtherNameFormat"))
			{
				String otherNameFormatValue;
				property.getValue().get(otherNameFormatValue);
				setOtherNameFormat(otherNameFormatValue);
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
			else if (String::equal(property.getName().getString(), "ExtentInterleaveDepth"))
			{
				Uint64 extentInterleaveDepthValue;
				property.getValue().get(extentInterleaveDepthValue);
				setExtentInterleaveDepth(extentInterleaveDepthValue);
			}
			else if (String::equal(property.getName().getString(), "ExtentStripeLength"))
			{
				Uint64 extentStripeLengthValue;
				property.getValue().get(extentStripeLengthValue);
				setExtentStripeLength(extentStripeLengthValue);
			}
			else if (String::equal(property.getName().getString(), "IsComposite"))
			{
				Boolean isCompositeValue;
				property.getValue().get(isCompositeValue);
				setIsComposite(isCompositeValue);
			}
			else if (String::equal(property.getName().getString(), "IsConcatenated"))
			{
				Boolean isConcatenatedValue;
				property.getValue().get(isConcatenatedValue);
				setIsConcatenated(isConcatenatedValue);
			}
			else if (String::equal(property.getName().getString(), "ExtentDiscriminator"))
			{
				Array<String> extentDiscriminatorValue;
				property.getValue().get(extentDiscriminatorValue);
				setExtentDiscriminator(extentDiscriminatorValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionRate"))
			{
				Uint16 compressionRateValue;
				property.getValue().get(compressionRateValue);
				setCompressionRate(compressionRateValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionState"))
			{
				Uint16 compressionStateValue;
				property.getValue().get(compressionStateValue);
				setCompressionState(compressionStateValue);
			}
			else if (String::equal(property.getName().getString(), "IsCompressed"))
			{
				Boolean isCompressedValue;
				property.getValue().get(isCompressedValue);
				setIsCompressed(isCompressedValue);
			}
			else if (String::equal(property.getName().getString(), "UnitsBeforeCheckDataInterleave"))
			{
				Uint64 unitsBeforeCheckDataInterleaveValue;
				property.getValue().get(unitsBeforeCheckDataInterleaveValue);
				setUnitsBeforeCheckDataInterleave(unitsBeforeCheckDataInterleaveValue);
			}
			else if (String::equal(property.getName().getString(), "UnitsOfCheckData"))
			{
				Uint64 unitsOfCheckDataValue;
				property.getValue().get(unitsOfCheckDataValue);
				setUnitsOfCheckData(unitsOfCheckDataValue);
			}
			else if (String::equal(property.getName().getString(), "UnitsOfUserData"))
			{
				Uint64 unitsOfUserDataValue;
				property.getValue().get(unitsOfUserDataValue);
				setUnitsOfUserData(unitsOfUserDataValue);
			}
	}
	return true;
}

Uint32 UNIX_PhysicalExtent::invokeRequestStateChange(
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

Uint32 UNIX_PhysicalExtent::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalExtent::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalExtent::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalExtent::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalExtent::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalExtent::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalExtent::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_PhysicalExtent::initialize()
{
	return false;
}

Boolean UNIX_PhysicalExtent::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalExtent");
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
	_creationClassName = String("UNIX_PhysicalExtent");
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
	_dataOrganization = Uint16(0);
	_purpose = String ("");
	_access = Uint16(0);
	_errorMethodology = String ("");
	_blockSize = Uint64(0);
	_numberOfBlocks = Uint64(0);
	_consumableBlocks = Uint64(0);
	_isBasedOnUnderlyingRedundancy = Boolean(false);
	_sequentialAccess = Boolean(false);
	_extentStatus.clear();
	_noSinglePointOfFailure = Boolean(false);
	_dataRedundancy = Uint16(0);
	_packageRedundancy = Uint16(0);
	_deltaReservation = Uint8(0);
	_primordial = Boolean(false);
	_nameFormat = Uint16(0);
	_nameNamespace = Uint16(0);
	_otherNameNamespace = String ("");
	_otherNameFormat = String ("");
	_usage = Uint16(0);
	_otherUsageDescription = String ("");
	_clientSettableUsage.clear();
	_extentInterleaveDepth = Uint64(0);
	_extentStripeLength = Uint64(0);
	_isComposite = Boolean(false);
	_isConcatenated = Boolean(false);
	_extentDiscriminator.clear();
	_compressionRate = Uint16(0);
	_compressionState = Uint16(0);
	_isCompressed = Boolean(false);
	_unitsBeforeCheckDataInterleave = Uint64(0);
	_unitsOfCheckData = Uint64(0);
	_unitsOfUserData = Uint64(0);
	
	return false;
}

Boolean UNIX_PhysicalExtent::finalize()
{
	return false;
}

Boolean UNIX_PhysicalExtent::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PhysicalExtent::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PhysicalExtent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalExtent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalExtent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalExtent::validateInstance()
{
	return true;
}

