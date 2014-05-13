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


UNIX_NonVolatileStorage::UNIX_NonVolatileStorage(void)
{
}

UNIX_NonVolatileStorage::~UNIX_NonVolatileStorage(void)
{
}

Boolean UNIX_NonVolatileStorage::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NonVolatileStorage::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NonVolatileStorage::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NonVolatileStorage::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NonVolatileStorage::getCaption() const
{
	return _caption;
}

void UNIX_NonVolatileStorage::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NonVolatileStorage::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NonVolatileStorage::getDescription() const
{
	return _description;
}

void UNIX_NonVolatileStorage::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NonVolatileStorage::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NonVolatileStorage::getElementName() const
{
	return _elementName;
}

void UNIX_NonVolatileStorage::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NonVolatileStorage::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getGeneration() const
{
	return _generation;
}

void UNIX_NonVolatileStorage::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NonVolatileStorage::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_NonVolatileStorage::getInstallDate() const
{
	return _installDate;
}

void UNIX_NonVolatileStorage::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_NonVolatileStorage::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_NonVolatileStorage::getName() const
{
	return _name;
}

void UNIX_NonVolatileStorage::setName(String &value)
{
	_name = value;
}

Boolean UNIX_NonVolatileStorage::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_NonVolatileStorage::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_NonVolatileStorage::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_NonVolatileStorage::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_NonVolatileStorage::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_NonVolatileStorage::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_NonVolatileStorage::getStatus() const
{
	return _status;
}

void UNIX_NonVolatileStorage::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_NonVolatileStorage::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getHealthState() const
{
	return _healthState;
}

void UNIX_NonVolatileStorage::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_NonVolatileStorage::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_NonVolatileStorage::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_NonVolatileStorage::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_NonVolatileStorage::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_NonVolatileStorage::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_NonVolatileStorage::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_NonVolatileStorage::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_NonVolatileStorage::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_NonVolatileStorage::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getEnabledState() const
{
	return _enabledState;
}

void UNIX_NonVolatileStorage::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_NonVolatileStorage::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_NonVolatileStorage::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_NonVolatileStorage::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_NonVolatileStorage::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getRequestedState() const
{
	return _requestedState;
}

void UNIX_NonVolatileStorage::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_NonVolatileStorage::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_NonVolatileStorage::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_NonVolatileStorage::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_NonVolatileStorage::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_NonVolatileStorage::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_NonVolatileStorage::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_NonVolatileStorage::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_NonVolatileStorage::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_NonVolatileStorage::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_NonVolatileStorage::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_NonVolatileStorage::getAllocationState() const
{
	return _allocationState;
}

void UNIX_NonVolatileStorage::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_NonVolatileStorage::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_NonVolatileStorage::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_NonVolatileStorage::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_NonVolatileStorage::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_NonVolatileStorage::getSystemName() const
{
	return _systemName;
}

void UNIX_NonVolatileStorage::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_NonVolatileStorage::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_NonVolatileStorage::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_NonVolatileStorage::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_NonVolatileStorage::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_NonVolatileStorage::getDeviceID() const
{
	return _deviceID;
}

void UNIX_NonVolatileStorage::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_NonVolatileStorage::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_NonVolatileStorage::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_NonVolatileStorage::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_NonVolatileStorage::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_NonVolatileStorage::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_NonVolatileStorage::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getAvailability() const
{
	return _availability;
}

void UNIX_NonVolatileStorage::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_NonVolatileStorage::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_NonVolatileStorage::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_NonVolatileStorage::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_NonVolatileStorage::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_NonVolatileStorage::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_NonVolatileStorage::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_NonVolatileStorage::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_NonVolatileStorage::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_NonVolatileStorage::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_NonVolatileStorage::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_NonVolatileStorage::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_NonVolatileStorage::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_NonVolatileStorage::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_NonVolatileStorage::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_NonVolatileStorage::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_NonVolatileStorage::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_NonVolatileStorage::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_NonVolatileStorage::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_NonVolatileStorage::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_NonVolatileStorage::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_NonVolatileStorage::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_NonVolatileStorage::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_NonVolatileStorage::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_NonVolatileStorage::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_NonVolatileStorage::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_NonVolatileStorage::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_NonVolatileStorage::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_NonVolatileStorage::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_NonVolatileStorage::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_NonVolatileStorage::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_NonVolatileStorage::getPurpose() const
{
	return _purpose;
}

void UNIX_NonVolatileStorage::setPurpose(String &value)
{
	_purpose = value;
}

Boolean UNIX_NonVolatileStorage::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getAccess() const
{
	return _access;
}

void UNIX_NonVolatileStorage::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_NonVolatileStorage::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_NonVolatileStorage::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_NonVolatileStorage::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_NonVolatileStorage::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getBlockSize() const
{
	return _blockSize;
}

void UNIX_NonVolatileStorage::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_NonVolatileStorage::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_NonVolatileStorage::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_NonVolatileStorage::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getConsumableBlocks() const
{
	return _consumableBlocks;
}

void UNIX_NonVolatileStorage::setConsumableBlocks(Uint64 &value)
{
	_consumableBlocks = value;
}

Boolean UNIX_NonVolatileStorage::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_NonVolatileStorage::getIsBasedOnUnderlyingRedundancy() const
{
	return _isBasedOnUnderlyingRedundancy;
}

void UNIX_NonVolatileStorage::setIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_isBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_NonVolatileStorage::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_NonVolatileStorage::getSequentialAccess() const
{
	return _sequentialAccess;
}

void UNIX_NonVolatileStorage::setSequentialAccess(Boolean &value)
{
	_sequentialAccess = value;
}

Boolean UNIX_NonVolatileStorage::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getExtentStatus() const
{
	return _extentStatus;
}

void UNIX_NonVolatileStorage::setExtentStatus(Array<Uint16> &value)
{
	_extentStatus = value;
}

Boolean UNIX_NonVolatileStorage::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_NonVolatileStorage::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_NonVolatileStorage::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_NonVolatileStorage::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getDataRedundancy() const
{
	return _dataRedundancy;
}

void UNIX_NonVolatileStorage::setDataRedundancy(Uint16 &value)
{
	_dataRedundancy = value;
}

Boolean UNIX_NonVolatileStorage::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getPackageRedundancy() const
{
	return _packageRedundancy;
}

void UNIX_NonVolatileStorage::setPackageRedundancy(Uint16 &value)
{
	_packageRedundancy = value;
}

Boolean UNIX_NonVolatileStorage::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_NonVolatileStorage::getDeltaReservation() const
{
	return _deltaReservation;
}

void UNIX_NonVolatileStorage::setDeltaReservation(Uint8 &value)
{
	_deltaReservation = value;
}

Boolean UNIX_NonVolatileStorage::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_NonVolatileStorage::getPrimordial() const
{
	return _primordial;
}

void UNIX_NonVolatileStorage::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_NonVolatileStorage::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_NonVolatileStorage::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_NonVolatileStorage::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getNameNamespace() const
{
	return _nameNamespace;
}

void UNIX_NonVolatileStorage::setNameNamespace(Uint16 &value)
{
	_nameNamespace = value;
}

Boolean UNIX_NonVolatileStorage::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_NonVolatileStorage::getOtherNameNamespace() const
{
	return _otherNameNamespace;
}

void UNIX_NonVolatileStorage::setOtherNameNamespace(String &value)
{
	_otherNameNamespace = value;
}

Boolean UNIX_NonVolatileStorage::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_NonVolatileStorage::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_NonVolatileStorage::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_NonVolatileStorage::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getUsage() const
{
	return _usage;
}

void UNIX_NonVolatileStorage::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_NonVolatileStorage::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_NonVolatileStorage::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_NonVolatileStorage::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_NonVolatileStorage::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_NonVolatileStorage::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_NonVolatileStorage::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getExtentInterleaveDepth() const
{
	return _extentInterleaveDepth;
}

void UNIX_NonVolatileStorage::setExtentInterleaveDepth(Uint64 &value)
{
	_extentInterleaveDepth = value;
}

Boolean UNIX_NonVolatileStorage::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_NonVolatileStorage::setExtentStripeLength(Uint64 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_NonVolatileStorage::getIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPOSITE, getIsComposite());
	return true;
}

Boolean UNIX_NonVolatileStorage::getIsComposite() const
{
	return _isComposite;
}

void UNIX_NonVolatileStorage::setIsComposite(Boolean &value)
{
	_isComposite = value;
}

Boolean UNIX_NonVolatileStorage::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_NonVolatileStorage::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_NonVolatileStorage::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}

Boolean UNIX_NonVolatileStorage::getExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_DISCRIMINATOR, getExtentDiscriminator());
	return true;
}

Array<String> UNIX_NonVolatileStorage::getExtentDiscriminator() const
{
	return _extentDiscriminator;
}

void UNIX_NonVolatileStorage::setExtentDiscriminator(Array<String> &value)
{
	_extentDiscriminator = value;
}

Boolean UNIX_NonVolatileStorage::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_NonVolatileStorage::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_NonVolatileStorage::getCompressionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_STATE, getCompressionState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getCompressionState() const
{
	return _compressionState;
}

void UNIX_NonVolatileStorage::setCompressionState(Uint16 &value)
{
	_compressionState = value;
}

Boolean UNIX_NonVolatileStorage::getIsCompressed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPRESSED, getIsCompressed());
	return true;
}

Boolean UNIX_NonVolatileStorage::getIsCompressed() const
{
	return _isCompressed;
}

void UNIX_NonVolatileStorage::setIsCompressed(Boolean &value)
{
	_isCompressed = value;
}

Boolean UNIX_NonVolatileStorage::getVolatile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VOLATILE, getVolatile());
	return true;
}

Boolean UNIX_NonVolatileStorage::getVolatile() const
{
	return _volatile;
}

void UNIX_NonVolatileStorage::setVolatile(Boolean &value)
{
	_volatile = value;
}

Boolean UNIX_NonVolatileStorage::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_NonVolatileStorage::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_NonVolatileStorage::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_NonVolatileStorage::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}

Boolean UNIX_NonVolatileStorage::getErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFO, getErrorInfo());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getErrorInfo() const
{
	return _errorInfo;
}

void UNIX_NonVolatileStorage::setErrorInfo(Uint16 &value)
{
	_errorInfo = value;
}

Boolean UNIX_NonVolatileStorage::getOtherErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_DESCRIPTION, getOtherErrorDescription());
	return true;
}

String UNIX_NonVolatileStorage::getOtherErrorDescription() const
{
	return _otherErrorDescription;
}

void UNIX_NonVolatileStorage::setOtherErrorDescription(String &value)
{
	_otherErrorDescription = value;
}

Boolean UNIX_NonVolatileStorage::getCorrectableError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRECTABLE_ERROR, getCorrectableError());
	return true;
}

Boolean UNIX_NonVolatileStorage::getCorrectableError() const
{
	return _correctableError;
}

void UNIX_NonVolatileStorage::setCorrectableError(Boolean &value)
{
	_correctableError = value;
}

Boolean UNIX_NonVolatileStorage::getErrorTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TIME, getErrorTime());
	return true;
}

CIMDateTime UNIX_NonVolatileStorage::getErrorTime() const
{
	return _errorTime;
}

void UNIX_NonVolatileStorage::setErrorTime(CIMDateTime &value)
{
	_errorTime = value;
}

Boolean UNIX_NonVolatileStorage::getErrorAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ACCESS, getErrorAccess());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getErrorAccess() const
{
	return _errorAccess;
}

void UNIX_NonVolatileStorage::setErrorAccess(Uint16 &value)
{
	_errorAccess = value;
}

Boolean UNIX_NonVolatileStorage::getErrorTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TRANSFER_SIZE, getErrorTransferSize());
	return true;
}

Uint32 UNIX_NonVolatileStorage::getErrorTransferSize() const
{
	return _errorTransferSize;
}

void UNIX_NonVolatileStorage::setErrorTransferSize(Uint32 &value)
{
	_errorTransferSize = value;
}

Boolean UNIX_NonVolatileStorage::getErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA, getErrorData());
	return true;
}

Array<Uint8> UNIX_NonVolatileStorage::getErrorData() const
{
	return _errorData;
}

void UNIX_NonVolatileStorage::setErrorData(Array<Uint8> &value)
{
	_errorData = value;
}

Boolean UNIX_NonVolatileStorage::getErrorDataOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA_ORDER, getErrorDataOrder());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getErrorDataOrder() const
{
	return _errorDataOrder;
}

void UNIX_NonVolatileStorage::setErrorDataOrder(Uint16 &value)
{
	_errorDataOrder = value;
}

Boolean UNIX_NonVolatileStorage::getErrorAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ADDRESS, getErrorAddress());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getErrorAddress() const
{
	return _errorAddress;
}

void UNIX_NonVolatileStorage::setErrorAddress(Uint64 &value)
{
	_errorAddress = value;
}

Boolean UNIX_NonVolatileStorage::getSystemLevelAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_LEVEL_ADDRESS, getSystemLevelAddress());
	return true;
}

Boolean UNIX_NonVolatileStorage::getSystemLevelAddress() const
{
	return _systemLevelAddress;
}

void UNIX_NonVolatileStorage::setSystemLevelAddress(Boolean &value)
{
	_systemLevelAddress = value;
}

Boolean UNIX_NonVolatileStorage::getErrorResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RESOLUTION, getErrorResolution());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getErrorResolution() const
{
	return _errorResolution;
}

void UNIX_NonVolatileStorage::setErrorResolution(Uint64 &value)
{
	_errorResolution = value;
}

Boolean UNIX_NonVolatileStorage::getAdditionalErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_ERROR_DATA, getAdditionalErrorData());
	return true;
}

Array<Uint8> UNIX_NonVolatileStorage::getAdditionalErrorData() const
{
	return _additionalErrorData;
}

void UNIX_NonVolatileStorage::setAdditionalErrorData(Array<Uint8> &value)
{
	_additionalErrorData = value;
}

Boolean UNIX_NonVolatileStorage::getIsWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_WRITEABLE, getIsWriteable());
	return true;
}

Boolean UNIX_NonVolatileStorage::getIsWriteable() const
{
	return _isWriteable;
}

void UNIX_NonVolatileStorage::setIsWriteable(Boolean &value)
{
	_isWriteable = value;
}

Boolean UNIX_NonVolatileStorage::getApplicationWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICATION_WRITEABLE, getApplicationWriteable());
	return true;
}

Boolean UNIX_NonVolatileStorage::getApplicationWriteable() const
{
	return _applicationWriteable;
}

void UNIX_NonVolatileStorage::setApplicationWriteable(Boolean &value)
{
	_applicationWriteable = value;
}

Boolean UNIX_NonVolatileStorage::getStartAddressForApplicationWrite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_ADDRESS_FOR_APPLICATION_WRITE, getStartAddressForApplicationWrite());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getStartAddressForApplicationWrite() const
{
	return _startAddressForApplicationWrite;
}

void UNIX_NonVolatileStorage::setStartAddressForApplicationWrite(Uint64 &value)
{
	_startAddressForApplicationWrite = value;
}

Boolean UNIX_NonVolatileStorage::getApplicationWriteableSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICATION_WRITEABLE_SIZE, getApplicationWriteableSize());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getApplicationWriteableSize() const
{
	return _applicationWriteableSize;
}

void UNIX_NonVolatileStorage::setApplicationWriteableSize(Uint64 &value)
{
	_applicationWriteableSize = value;
}


void UNIX_NonVolatileStorage::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NonVolatileStorage");
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
	_creationClassName = String("UNIX_NonVolatileStorage");
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
	_isWriteable = Boolean(false);
	_applicationWriteable = Boolean(false);
	_startAddressForApplicationWrite = Uint64(0);
	_applicationWriteableSize = Uint64(0);

}

Boolean UNIX_NonVolatileStorage::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsWriteable"))
			{
				Boolean isWriteableValue;
				property.getValue().get(isWriteableValue);
				setIsWriteable(isWriteableValue);
			}
			else if (String::equal(property.getName().getString(), "ApplicationWriteable"))
			{
				Boolean applicationWriteableValue;
				property.getValue().get(applicationWriteableValue);
				setApplicationWriteable(applicationWriteableValue);
			}
			else if (String::equal(property.getName().getString(), "StartAddressForApplicationWrite"))
			{
				Uint64 startAddressForApplicationWriteValue;
				property.getValue().get(startAddressForApplicationWriteValue);
				setStartAddressForApplicationWrite(startAddressForApplicationWriteValue);
			}
			else if (String::equal(property.getName().getString(), "ApplicationWriteableSize"))
			{
				Uint64 applicationWriteableSizeValue;
				property.getValue().get(applicationWriteableSizeValue);
				setApplicationWriteableSize(applicationWriteableSizeValue);
			}
	}
	return true;
}

Uint32 UNIX_NonVolatileStorage::invokeRequestStateChange(
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

Uint32 UNIX_NonVolatileStorage::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_NonVolatileStorage::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_NonVolatileStorage::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_NonVolatileStorage::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_NonVolatileStorage::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_NonVolatileStorage::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_NonVolatileStorage::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_NonVolatileStorage::initialize()
{
	return false;
}

Boolean UNIX_NonVolatileStorage::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NonVolatileStorage");
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
	_creationClassName = String("UNIX_NonVolatileStorage");
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
	_isWriteable = Boolean(false);
	_applicationWriteable = Boolean(false);
	_startAddressForApplicationWrite = Uint64(0);
	_applicationWriteableSize = Uint64(0);
	
	return false;
}

Boolean UNIX_NonVolatileStorage::finalize()
{
	return false;
}

Boolean UNIX_NonVolatileStorage::loadByName(const String name)
{
	return false;
}

Boolean UNIX_NonVolatileStorage::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NonVolatileStorage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NonVolatileStorage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NonVolatileStorage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NonVolatileStorage::validateInstance()
{
	return true;
}

