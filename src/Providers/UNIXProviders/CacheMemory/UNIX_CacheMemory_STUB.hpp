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


UNIX_CacheMemory::UNIX_CacheMemory(void)
{
}

UNIX_CacheMemory::~UNIX_CacheMemory(void)
{
}

Boolean UNIX_CacheMemory::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CacheMemory::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CacheMemory::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CacheMemory::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CacheMemory::getCaption() const
{
	return _caption;
}

void UNIX_CacheMemory::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CacheMemory::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CacheMemory::getDescription() const
{
	return _description;
}

void UNIX_CacheMemory::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CacheMemory::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CacheMemory::getElementName() const
{
	return _elementName;
}

void UNIX_CacheMemory::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CacheMemory::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CacheMemory::getGeneration() const
{
	return _generation;
}

void UNIX_CacheMemory::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CacheMemory::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CacheMemory::getInstallDate() const
{
	return _installDate;
}

void UNIX_CacheMemory::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_CacheMemory::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CacheMemory::getName() const
{
	return _name;
}

void UNIX_CacheMemory::setName(String &value)
{
	_name = value;
}

Boolean UNIX_CacheMemory::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_CacheMemory::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_CacheMemory::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CacheMemory::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_CacheMemory::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_CacheMemory::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CacheMemory::getStatus() const
{
	return _status;
}

void UNIX_CacheMemory::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_CacheMemory::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CacheMemory::getHealthState() const
{
	return _healthState;
}

void UNIX_CacheMemory::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_CacheMemory::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CacheMemory::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_CacheMemory::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_CacheMemory::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CacheMemory::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_CacheMemory::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_CacheMemory::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CacheMemory::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_CacheMemory::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_CacheMemory::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CacheMemory::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_CacheMemory::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_CacheMemory::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CacheMemory::getEnabledState() const
{
	return _enabledState;
}

void UNIX_CacheMemory::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_CacheMemory::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CacheMemory::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_CacheMemory::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_CacheMemory::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CacheMemory::getRequestedState() const
{
	return _requestedState;
}

void UNIX_CacheMemory::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_CacheMemory::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CacheMemory::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_CacheMemory::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_CacheMemory::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CacheMemory::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_CacheMemory::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_CacheMemory::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_CacheMemory::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_CacheMemory::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CacheMemory::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_CacheMemory::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_CacheMemory::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_CacheMemory::getAllocationState() const
{
	return _allocationState;
}

void UNIX_CacheMemory::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_CacheMemory::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CacheMemory::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_CacheMemory::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_CacheMemory::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CacheMemory::getSystemName() const
{
	return _systemName;
}

void UNIX_CacheMemory::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_CacheMemory::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CacheMemory::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_CacheMemory::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_CacheMemory::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_CacheMemory::getDeviceID() const
{
	return _deviceID;
}

void UNIX_CacheMemory::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_CacheMemory::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_CacheMemory::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_CacheMemory::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_CacheMemory::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_CacheMemory::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_CacheMemory::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_CacheMemory::getAvailability() const
{
	return _availability;
}

void UNIX_CacheMemory::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_CacheMemory::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_CacheMemory::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_CacheMemory::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_CacheMemory::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_CacheMemory::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_CacheMemory::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_CacheMemory::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_CacheMemory::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_CacheMemory::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_CacheMemory::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_CacheMemory::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_CacheMemory::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_CacheMemory::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_CacheMemory::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_CacheMemory::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_CacheMemory::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_CacheMemory::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_CacheMemory::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_CacheMemory::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_CacheMemory::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_CacheMemory::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_CacheMemory::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_CacheMemory::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_CacheMemory::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_CacheMemory::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_CacheMemory::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_CacheMemory::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_CacheMemory::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_CacheMemory::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_CacheMemory::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_CacheMemory::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_CacheMemory::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_CacheMemory::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_CacheMemory::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_CacheMemory::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_CacheMemory::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_CacheMemory::getPurpose() const
{
	return _purpose;
}

void UNIX_CacheMemory::setPurpose(String &value)
{
	_purpose = value;
}

Boolean UNIX_CacheMemory::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_CacheMemory::getAccess() const
{
	return _access;
}

void UNIX_CacheMemory::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_CacheMemory::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_CacheMemory::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_CacheMemory::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_CacheMemory::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_CacheMemory::getBlockSize() const
{
	return _blockSize;
}

void UNIX_CacheMemory::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_CacheMemory::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_CacheMemory::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_CacheMemory::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_CacheMemory::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_CacheMemory::getConsumableBlocks() const
{
	return _consumableBlocks;
}

void UNIX_CacheMemory::setConsumableBlocks(Uint64 &value)
{
	_consumableBlocks = value;
}

Boolean UNIX_CacheMemory::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_CacheMemory::getIsBasedOnUnderlyingRedundancy() const
{
	return _isBasedOnUnderlyingRedundancy;
}

void UNIX_CacheMemory::setIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_isBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_CacheMemory::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_CacheMemory::getSequentialAccess() const
{
	return _sequentialAccess;
}

void UNIX_CacheMemory::setSequentialAccess(Boolean &value)
{
	_sequentialAccess = value;
}

Boolean UNIX_CacheMemory::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getExtentStatus() const
{
	return _extentStatus;
}

void UNIX_CacheMemory::setExtentStatus(Array<Uint16> &value)
{
	_extentStatus = value;
}

Boolean UNIX_CacheMemory::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_CacheMemory::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_CacheMemory::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_CacheMemory::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_CacheMemory::getDataRedundancy() const
{
	return _dataRedundancy;
}

void UNIX_CacheMemory::setDataRedundancy(Uint16 &value)
{
	_dataRedundancy = value;
}

Boolean UNIX_CacheMemory::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_CacheMemory::getPackageRedundancy() const
{
	return _packageRedundancy;
}

void UNIX_CacheMemory::setPackageRedundancy(Uint16 &value)
{
	_packageRedundancy = value;
}

Boolean UNIX_CacheMemory::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_CacheMemory::getDeltaReservation() const
{
	return _deltaReservation;
}

void UNIX_CacheMemory::setDeltaReservation(Uint8 &value)
{
	_deltaReservation = value;
}

Boolean UNIX_CacheMemory::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_CacheMemory::getPrimordial() const
{
	return _primordial;
}

void UNIX_CacheMemory::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_CacheMemory::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_CacheMemory::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_CacheMemory::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_CacheMemory::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_CacheMemory::getNameNamespace() const
{
	return _nameNamespace;
}

void UNIX_CacheMemory::setNameNamespace(Uint16 &value)
{
	_nameNamespace = value;
}

Boolean UNIX_CacheMemory::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_CacheMemory::getOtherNameNamespace() const
{
	return _otherNameNamespace;
}

void UNIX_CacheMemory::setOtherNameNamespace(String &value)
{
	_otherNameNamespace = value;
}

Boolean UNIX_CacheMemory::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_CacheMemory::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_CacheMemory::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_CacheMemory::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_CacheMemory::getUsage() const
{
	return _usage;
}

void UNIX_CacheMemory::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_CacheMemory::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_CacheMemory::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_CacheMemory::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_CacheMemory::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_CacheMemory::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_CacheMemory::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_CacheMemory::getExtentInterleaveDepth() const
{
	return _extentInterleaveDepth;
}

void UNIX_CacheMemory::setExtentInterleaveDepth(Uint64 &value)
{
	_extentInterleaveDepth = value;
}

Boolean UNIX_CacheMemory::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_CacheMemory::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_CacheMemory::setExtentStripeLength(Uint64 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_CacheMemory::getIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPOSITE, getIsComposite());
	return true;
}

Boolean UNIX_CacheMemory::getIsComposite() const
{
	return _isComposite;
}

void UNIX_CacheMemory::setIsComposite(Boolean &value)
{
	_isComposite = value;
}

Boolean UNIX_CacheMemory::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_CacheMemory::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_CacheMemory::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}

Boolean UNIX_CacheMemory::getExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_DISCRIMINATOR, getExtentDiscriminator());
	return true;
}

Array<String> UNIX_CacheMemory::getExtentDiscriminator() const
{
	return _extentDiscriminator;
}

void UNIX_CacheMemory::setExtentDiscriminator(Array<String> &value)
{
	_extentDiscriminator = value;
}

Boolean UNIX_CacheMemory::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_CacheMemory::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_CacheMemory::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_CacheMemory::getCompressionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_STATE, getCompressionState());
	return true;
}

Uint16 UNIX_CacheMemory::getCompressionState() const
{
	return _compressionState;
}

void UNIX_CacheMemory::setCompressionState(Uint16 &value)
{
	_compressionState = value;
}

Boolean UNIX_CacheMemory::getIsCompressed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPRESSED, getIsCompressed());
	return true;
}

Boolean UNIX_CacheMemory::getIsCompressed() const
{
	return _isCompressed;
}

void UNIX_CacheMemory::setIsCompressed(Boolean &value)
{
	_isCompressed = value;
}

Boolean UNIX_CacheMemory::getVolatile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VOLATILE, getVolatile());
	return true;
}

Boolean UNIX_CacheMemory::getVolatile() const
{
	return _volatile;
}

void UNIX_CacheMemory::setVolatile(Boolean &value)
{
	_volatile = value;
}

Boolean UNIX_CacheMemory::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_CacheMemory::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_CacheMemory::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_CacheMemory::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_CacheMemory::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_CacheMemory::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}

Boolean UNIX_CacheMemory::getErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFO, getErrorInfo());
	return true;
}

Uint16 UNIX_CacheMemory::getErrorInfo() const
{
	return _errorInfo;
}

void UNIX_CacheMemory::setErrorInfo(Uint16 &value)
{
	_errorInfo = value;
}

Boolean UNIX_CacheMemory::getOtherErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_DESCRIPTION, getOtherErrorDescription());
	return true;
}

String UNIX_CacheMemory::getOtherErrorDescription() const
{
	return _otherErrorDescription;
}

void UNIX_CacheMemory::setOtherErrorDescription(String &value)
{
	_otherErrorDescription = value;
}

Boolean UNIX_CacheMemory::getCorrectableError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRECTABLE_ERROR, getCorrectableError());
	return true;
}

Boolean UNIX_CacheMemory::getCorrectableError() const
{
	return _correctableError;
}

void UNIX_CacheMemory::setCorrectableError(Boolean &value)
{
	_correctableError = value;
}

Boolean UNIX_CacheMemory::getErrorTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TIME, getErrorTime());
	return true;
}

CIMDateTime UNIX_CacheMemory::getErrorTime() const
{
	return _errorTime;
}

void UNIX_CacheMemory::setErrorTime(CIMDateTime &value)
{
	_errorTime = value;
}

Boolean UNIX_CacheMemory::getErrorAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ACCESS, getErrorAccess());
	return true;
}

Uint16 UNIX_CacheMemory::getErrorAccess() const
{
	return _errorAccess;
}

void UNIX_CacheMemory::setErrorAccess(Uint16 &value)
{
	_errorAccess = value;
}

Boolean UNIX_CacheMemory::getErrorTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TRANSFER_SIZE, getErrorTransferSize());
	return true;
}

Uint32 UNIX_CacheMemory::getErrorTransferSize() const
{
	return _errorTransferSize;
}

void UNIX_CacheMemory::setErrorTransferSize(Uint32 &value)
{
	_errorTransferSize = value;
}

Boolean UNIX_CacheMemory::getErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA, getErrorData());
	return true;
}

Array<Uint8> UNIX_CacheMemory::getErrorData() const
{
	return _errorData;
}

void UNIX_CacheMemory::setErrorData(Array<Uint8> &value)
{
	_errorData = value;
}

Boolean UNIX_CacheMemory::getErrorDataOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA_ORDER, getErrorDataOrder());
	return true;
}

Uint16 UNIX_CacheMemory::getErrorDataOrder() const
{
	return _errorDataOrder;
}

void UNIX_CacheMemory::setErrorDataOrder(Uint16 &value)
{
	_errorDataOrder = value;
}

Boolean UNIX_CacheMemory::getErrorAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ADDRESS, getErrorAddress());
	return true;
}

Uint64 UNIX_CacheMemory::getErrorAddress() const
{
	return _errorAddress;
}

void UNIX_CacheMemory::setErrorAddress(Uint64 &value)
{
	_errorAddress = value;
}

Boolean UNIX_CacheMemory::getSystemLevelAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_LEVEL_ADDRESS, getSystemLevelAddress());
	return true;
}

Boolean UNIX_CacheMemory::getSystemLevelAddress() const
{
	return _systemLevelAddress;
}

void UNIX_CacheMemory::setSystemLevelAddress(Boolean &value)
{
	_systemLevelAddress = value;
}

Boolean UNIX_CacheMemory::getErrorResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RESOLUTION, getErrorResolution());
	return true;
}

Uint64 UNIX_CacheMemory::getErrorResolution() const
{
	return _errorResolution;
}

void UNIX_CacheMemory::setErrorResolution(Uint64 &value)
{
	_errorResolution = value;
}

Boolean UNIX_CacheMemory::getAdditionalErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_ERROR_DATA, getAdditionalErrorData());
	return true;
}

Array<Uint8> UNIX_CacheMemory::getAdditionalErrorData() const
{
	return _additionalErrorData;
}

void UNIX_CacheMemory::setAdditionalErrorData(Array<Uint8> &value)
{
	_additionalErrorData = value;
}

Boolean UNIX_CacheMemory::getLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEVEL, getLevel());
	return true;
}

Uint16 UNIX_CacheMemory::getLevel() const
{
	return _level;
}

void UNIX_CacheMemory::setLevel(Uint16 &value)
{
	_level = value;
}

Boolean UNIX_CacheMemory::getWritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_POLICY, getWritePolicy());
	return true;
}

Uint16 UNIX_CacheMemory::getWritePolicy() const
{
	return _writePolicy;
}

void UNIX_CacheMemory::setWritePolicy(Uint16 &value)
{
	_writePolicy = value;
}

Boolean UNIX_CacheMemory::getCacheType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_TYPE, getCacheType());
	return true;
}

Uint16 UNIX_CacheMemory::getCacheType() const
{
	return _cacheType;
}

void UNIX_CacheMemory::setCacheType(Uint16 &value)
{
	_cacheType = value;
}

Boolean UNIX_CacheMemory::getLineSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINE_SIZE, getLineSize());
	return true;
}

Uint32 UNIX_CacheMemory::getLineSize() const
{
	return _lineSize;
}

void UNIX_CacheMemory::setLineSize(Uint32 &value)
{
	_lineSize = value;
}

Boolean UNIX_CacheMemory::getReplacementPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEMENT_POLICY, getReplacementPolicy());
	return true;
}

Uint16 UNIX_CacheMemory::getReplacementPolicy() const
{
	return _replacementPolicy;
}

void UNIX_CacheMemory::setReplacementPolicy(Uint16 &value)
{
	_replacementPolicy = value;
}

Boolean UNIX_CacheMemory::getReadPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_POLICY, getReadPolicy());
	return true;
}

Uint16 UNIX_CacheMemory::getReadPolicy() const
{
	return _readPolicy;
}

void UNIX_CacheMemory::setReadPolicy(Uint16 &value)
{
	_readPolicy = value;
}

Boolean UNIX_CacheMemory::getFlushTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FLUSH_TIMER, getFlushTimer());
	return true;
}

Uint32 UNIX_CacheMemory::getFlushTimer() const
{
	return _flushTimer;
}

void UNIX_CacheMemory::setFlushTimer(Uint32 &value)
{
	_flushTimer = value;
}

Boolean UNIX_CacheMemory::getAssociativity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSOCIATIVITY, getAssociativity());
	return true;
}

Uint16 UNIX_CacheMemory::getAssociativity() const
{
	return _associativity;
}

void UNIX_CacheMemory::setAssociativity(Uint16 &value)
{
	_associativity = value;
}


void UNIX_CacheMemory::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CacheMemory");
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
	_creationClassName = String("UNIX_CacheMemory");
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
	_volatile = Boolean(false);
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_errorInfo = Uint16(0);
	_otherErrorDescription = String ("");
	_correctableError = Boolean(false);
	_errorTime = CIMHelper::getCurrentTime();
	_errorAccess = Uint16(0);
	_errorTransferSize = Uint32(0);
	_errorData.clear();
	_errorDataOrder = Uint16(0);
	_errorAddress = Uint64(0);
	_systemLevelAddress = Boolean(false);
	_errorResolution = Uint64(0);
	_additionalErrorData.clear();
	_level = Uint16(0);
	_writePolicy = Uint16(0);
	_cacheType = Uint16(0);
	_lineSize = Uint32(0);
	_replacementPolicy = Uint16(0);
	_readPolicy = Uint16(0);
	_flushTimer = Uint32(0);
	_associativity = Uint16(0);

}

Boolean UNIX_CacheMemory::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Volatile"))
			{
				Boolean volatileValue;
				property.getValue().get(volatileValue);
				setVolatile(volatileValue);
			}
			else if (String::equal(property.getName().getString(), "StartingAddress"))
			{
				Uint64 startingAddressValue;
				property.getValue().get(startingAddressValue);
				setStartingAddress(startingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "EndingAddress"))
			{
				Uint64 endingAddressValue;
				property.getValue().get(endingAddressValue);
				setEndingAddress(endingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorInfo"))
			{
				Uint16 errorInfoValue;
				property.getValue().get(errorInfoValue);
				setErrorInfo(errorInfoValue);
			}
			else if (String::equal(property.getName().getString(), "OtherErrorDescription"))
			{
				String otherErrorDescriptionValue;
				property.getValue().get(otherErrorDescriptionValue);
				setOtherErrorDescription(otherErrorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CorrectableError"))
			{
				Boolean correctableErrorValue;
				property.getValue().get(correctableErrorValue);
				setCorrectableError(correctableErrorValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorTime"))
			{
				CIMDateTime errorTimeValue;
				property.getValue().get(errorTimeValue);
				setErrorTime(errorTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorAccess"))
			{
				Uint16 errorAccessValue;
				property.getValue().get(errorAccessValue);
				setErrorAccess(errorAccessValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorTransferSize"))
			{
				Uint32 errorTransferSizeValue;
				property.getValue().get(errorTransferSizeValue);
				setErrorTransferSize(errorTransferSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorData"))
			{
				Array<Uint8> errorDataValue;
				property.getValue().get(errorDataValue);
				setErrorData(errorDataValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDataOrder"))
			{
				Uint16 errorDataOrderValue;
				property.getValue().get(errorDataOrderValue);
				setErrorDataOrder(errorDataOrderValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorAddress"))
			{
				Uint64 errorAddressValue;
				property.getValue().get(errorAddressValue);
				setErrorAddress(errorAddressValue);
			}
			else if (String::equal(property.getName().getString(), "SystemLevelAddress"))
			{
				Boolean systemLevelAddressValue;
				property.getValue().get(systemLevelAddressValue);
				setSystemLevelAddress(systemLevelAddressValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorResolution"))
			{
				Uint64 errorResolutionValue;
				property.getValue().get(errorResolutionValue);
				setErrorResolution(errorResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "AdditionalErrorData"))
			{
				Array<Uint8> additionalErrorDataValue;
				property.getValue().get(additionalErrorDataValue);
				setAdditionalErrorData(additionalErrorDataValue);
			}
			else if (String::equal(property.getName().getString(), "Level"))
			{
				Uint16 levelValue;
				property.getValue().get(levelValue);
				setLevel(levelValue);
			}
			else if (String::equal(property.getName().getString(), "WritePolicy"))
			{
				Uint16 writePolicyValue;
				property.getValue().get(writePolicyValue);
				setWritePolicy(writePolicyValue);
			}
			else if (String::equal(property.getName().getString(), "CacheType"))
			{
				Uint16 cacheTypeValue;
				property.getValue().get(cacheTypeValue);
				setCacheType(cacheTypeValue);
			}
			else if (String::equal(property.getName().getString(), "LineSize"))
			{
				Uint32 lineSizeValue;
				property.getValue().get(lineSizeValue);
				setLineSize(lineSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ReplacementPolicy"))
			{
				Uint16 replacementPolicyValue;
				property.getValue().get(replacementPolicyValue);
				setReplacementPolicy(replacementPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "ReadPolicy"))
			{
				Uint16 readPolicyValue;
				property.getValue().get(readPolicyValue);
				setReadPolicy(readPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "FlushTimer"))
			{
				Uint32 flushTimerValue;
				property.getValue().get(flushTimerValue);
				setFlushTimer(flushTimerValue);
			}
			else if (String::equal(property.getName().getString(), "Associativity"))
			{
				Uint16 associativityValue;
				property.getValue().get(associativityValue);
				setAssociativity(associativityValue);
			}
	}
	return true;
}

Uint32 UNIX_CacheMemory::invokeRequestStateChange(
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

Uint32 UNIX_CacheMemory::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_CacheMemory::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_CacheMemory::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_CacheMemory::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_CacheMemory::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_CacheMemory::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_CacheMemory::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_CacheMemory::initialize()
{
	return false;
}

Boolean UNIX_CacheMemory::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CacheMemory");
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
	_creationClassName = String("UNIX_CacheMemory");
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
	_volatile = Boolean(false);
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_errorInfo = Uint16(0);
	_otherErrorDescription = String ("");
	_correctableError = Boolean(false);
	_errorTime = CIMHelper::getCurrentTime();
	_errorAccess = Uint16(0);
	_errorTransferSize = Uint32(0);
	_errorData.clear();
	_errorDataOrder = Uint16(0);
	_errorAddress = Uint64(0);
	_systemLevelAddress = Boolean(false);
	_errorResolution = Uint64(0);
	_additionalErrorData.clear();
	_level = Uint16(0);
	_writePolicy = Uint16(0);
	_cacheType = Uint16(0);
	_lineSize = Uint32(0);
	_replacementPolicy = Uint16(0);
	_readPolicy = Uint16(0);
	_flushTimer = Uint32(0);
	_associativity = Uint16(0);
	
	return false;
}

Boolean UNIX_CacheMemory::finalize()
{
	return false;
}

Boolean UNIX_CacheMemory::loadByName(const String name)
{
	return false;
}

Boolean UNIX_CacheMemory::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CacheMemory::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CacheMemory::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CacheMemory::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CacheMemory::validateInstance()
{
	return true;
}

