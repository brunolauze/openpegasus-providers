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


UNIX_VolatileStorage::UNIX_VolatileStorage(void)
{
}

UNIX_VolatileStorage::~UNIX_VolatileStorage(void)
{
}

Boolean UNIX_VolatileStorage::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VolatileStorage::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VolatileStorage::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VolatileStorage::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VolatileStorage::getCaption() const
{
	return _caption;
}

void UNIX_VolatileStorage::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VolatileStorage::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VolatileStorage::getDescription() const
{
	return _description;
}

void UNIX_VolatileStorage::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VolatileStorage::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VolatileStorage::getElementName() const
{
	return _elementName;
}

void UNIX_VolatileStorage::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VolatileStorage::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VolatileStorage::getGeneration() const
{
	return _generation;
}

void UNIX_VolatileStorage::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VolatileStorage::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VolatileStorage::getInstallDate() const
{
	return _installDate;
}

void UNIX_VolatileStorage::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_VolatileStorage::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VolatileStorage::getName() const
{
	return _name;
}

void UNIX_VolatileStorage::setName(String &value)
{
	_name = value;
}

Boolean UNIX_VolatileStorage::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_VolatileStorage::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_VolatileStorage::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VolatileStorage::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_VolatileStorage::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_VolatileStorage::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VolatileStorage::getStatus() const
{
	return _status;
}

void UNIX_VolatileStorage::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_VolatileStorage::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VolatileStorage::getHealthState() const
{
	return _healthState;
}

void UNIX_VolatileStorage::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_VolatileStorage::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VolatileStorage::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_VolatileStorage::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_VolatileStorage::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VolatileStorage::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_VolatileStorage::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_VolatileStorage::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VolatileStorage::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_VolatileStorage::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_VolatileStorage::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VolatileStorage::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_VolatileStorage::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_VolatileStorage::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VolatileStorage::getEnabledState() const
{
	return _enabledState;
}

void UNIX_VolatileStorage::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_VolatileStorage::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VolatileStorage::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_VolatileStorage::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_VolatileStorage::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VolatileStorage::getRequestedState() const
{
	return _requestedState;
}

void UNIX_VolatileStorage::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_VolatileStorage::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VolatileStorage::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_VolatileStorage::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_VolatileStorage::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VolatileStorage::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_VolatileStorage::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_VolatileStorage::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_VolatileStorage::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_VolatileStorage::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VolatileStorage::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_VolatileStorage::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_VolatileStorage::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_VolatileStorage::getAllocationState() const
{
	return _allocationState;
}

void UNIX_VolatileStorage::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_VolatileStorage::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VolatileStorage::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_VolatileStorage::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_VolatileStorage::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VolatileStorage::getSystemName() const
{
	return _systemName;
}

void UNIX_VolatileStorage::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_VolatileStorage::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VolatileStorage::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_VolatileStorage::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_VolatileStorage::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_VolatileStorage::getDeviceID() const
{
	return _deviceID;
}

void UNIX_VolatileStorage::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_VolatileStorage::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_VolatileStorage::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_VolatileStorage::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_VolatileStorage::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_VolatileStorage::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_VolatileStorage::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_VolatileStorage::getAvailability() const
{
	return _availability;
}

void UNIX_VolatileStorage::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_VolatileStorage::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_VolatileStorage::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_VolatileStorage::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_VolatileStorage::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_VolatileStorage::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_VolatileStorage::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_VolatileStorage::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_VolatileStorage::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_VolatileStorage::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_VolatileStorage::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_VolatileStorage::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_VolatileStorage::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_VolatileStorage::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VolatileStorage::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_VolatileStorage::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_VolatileStorage::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_VolatileStorage::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_VolatileStorage::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_VolatileStorage::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_VolatileStorage::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_VolatileStorage::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_VolatileStorage::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VolatileStorage::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_VolatileStorage::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_VolatileStorage::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_VolatileStorage::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_VolatileStorage::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_VolatileStorage::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_VolatileStorage::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_VolatileStorage::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_VolatileStorage::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_VolatileStorage::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_VolatileStorage::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_VolatileStorage::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_VolatileStorage::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_VolatileStorage::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_VolatileStorage::getPurpose() const
{
	return _purpose;
}

void UNIX_VolatileStorage::setPurpose(String &value)
{
	_purpose = value;
}

Boolean UNIX_VolatileStorage::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_VolatileStorage::getAccess() const
{
	return _access;
}

void UNIX_VolatileStorage::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_VolatileStorage::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_VolatileStorage::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_VolatileStorage::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_VolatileStorage::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_VolatileStorage::getBlockSize() const
{
	return _blockSize;
}

void UNIX_VolatileStorage::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_VolatileStorage::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_VolatileStorage::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_VolatileStorage::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_VolatileStorage::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_VolatileStorage::getConsumableBlocks() const
{
	return _consumableBlocks;
}

void UNIX_VolatileStorage::setConsumableBlocks(Uint64 &value)
{
	_consumableBlocks = value;
}

Boolean UNIX_VolatileStorage::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_VolatileStorage::getIsBasedOnUnderlyingRedundancy() const
{
	return _isBasedOnUnderlyingRedundancy;
}

void UNIX_VolatileStorage::setIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_isBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_VolatileStorage::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_VolatileStorage::getSequentialAccess() const
{
	return _sequentialAccess;
}

void UNIX_VolatileStorage::setSequentialAccess(Boolean &value)
{
	_sequentialAccess = value;
}

Boolean UNIX_VolatileStorage::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getExtentStatus() const
{
	return _extentStatus;
}

void UNIX_VolatileStorage::setExtentStatus(Array<Uint16> &value)
{
	_extentStatus = value;
}

Boolean UNIX_VolatileStorage::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_VolatileStorage::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_VolatileStorage::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_VolatileStorage::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_VolatileStorage::getDataRedundancy() const
{
	return _dataRedundancy;
}

void UNIX_VolatileStorage::setDataRedundancy(Uint16 &value)
{
	_dataRedundancy = value;
}

Boolean UNIX_VolatileStorage::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_VolatileStorage::getPackageRedundancy() const
{
	return _packageRedundancy;
}

void UNIX_VolatileStorage::setPackageRedundancy(Uint16 &value)
{
	_packageRedundancy = value;
}

Boolean UNIX_VolatileStorage::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_VolatileStorage::getDeltaReservation() const
{
	return _deltaReservation;
}

void UNIX_VolatileStorage::setDeltaReservation(Uint8 &value)
{
	_deltaReservation = value;
}

Boolean UNIX_VolatileStorage::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_VolatileStorage::getPrimordial() const
{
	return _primordial;
}

void UNIX_VolatileStorage::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_VolatileStorage::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_VolatileStorage::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_VolatileStorage::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_VolatileStorage::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_VolatileStorage::getNameNamespace() const
{
	return _nameNamespace;
}

void UNIX_VolatileStorage::setNameNamespace(Uint16 &value)
{
	_nameNamespace = value;
}

Boolean UNIX_VolatileStorage::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_VolatileStorage::getOtherNameNamespace() const
{
	return _otherNameNamespace;
}

void UNIX_VolatileStorage::setOtherNameNamespace(String &value)
{
	_otherNameNamespace = value;
}

Boolean UNIX_VolatileStorage::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_VolatileStorage::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_VolatileStorage::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_VolatileStorage::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_VolatileStorage::getUsage() const
{
	return _usage;
}

void UNIX_VolatileStorage::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_VolatileStorage::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_VolatileStorage::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_VolatileStorage::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_VolatileStorage::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_VolatileStorage::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_VolatileStorage::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_VolatileStorage::getExtentInterleaveDepth() const
{
	return _extentInterleaveDepth;
}

void UNIX_VolatileStorage::setExtentInterleaveDepth(Uint64 &value)
{
	_extentInterleaveDepth = value;
}

Boolean UNIX_VolatileStorage::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_VolatileStorage::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_VolatileStorage::setExtentStripeLength(Uint64 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_VolatileStorage::getIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPOSITE, getIsComposite());
	return true;
}

Boolean UNIX_VolatileStorage::getIsComposite() const
{
	return _isComposite;
}

void UNIX_VolatileStorage::setIsComposite(Boolean &value)
{
	_isComposite = value;
}

Boolean UNIX_VolatileStorage::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_VolatileStorage::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_VolatileStorage::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}

Boolean UNIX_VolatileStorage::getExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_DISCRIMINATOR, getExtentDiscriminator());
	return true;
}

Array<String> UNIX_VolatileStorage::getExtentDiscriminator() const
{
	return _extentDiscriminator;
}

void UNIX_VolatileStorage::setExtentDiscriminator(Array<String> &value)
{
	_extentDiscriminator = value;
}

Boolean UNIX_VolatileStorage::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_VolatileStorage::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_VolatileStorage::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_VolatileStorage::getCompressionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_STATE, getCompressionState());
	return true;
}

Uint16 UNIX_VolatileStorage::getCompressionState() const
{
	return _compressionState;
}

void UNIX_VolatileStorage::setCompressionState(Uint16 &value)
{
	_compressionState = value;
}

Boolean UNIX_VolatileStorage::getIsCompressed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPRESSED, getIsCompressed());
	return true;
}

Boolean UNIX_VolatileStorage::getIsCompressed() const
{
	return _isCompressed;
}

void UNIX_VolatileStorage::setIsCompressed(Boolean &value)
{
	_isCompressed = value;
}

Boolean UNIX_VolatileStorage::getVolatile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VOLATILE, getVolatile());
	return true;
}

Boolean UNIX_VolatileStorage::getVolatile() const
{
	return _volatile;
}

void UNIX_VolatileStorage::setVolatile(Boolean &value)
{
	_volatile = value;
}

Boolean UNIX_VolatileStorage::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_VolatileStorage::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_VolatileStorage::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_VolatileStorage::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_VolatileStorage::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_VolatileStorage::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}

Boolean UNIX_VolatileStorage::getErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFO, getErrorInfo());
	return true;
}

Uint16 UNIX_VolatileStorage::getErrorInfo() const
{
	return _errorInfo;
}

void UNIX_VolatileStorage::setErrorInfo(Uint16 &value)
{
	_errorInfo = value;
}

Boolean UNIX_VolatileStorage::getOtherErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_DESCRIPTION, getOtherErrorDescription());
	return true;
}

String UNIX_VolatileStorage::getOtherErrorDescription() const
{
	return _otherErrorDescription;
}

void UNIX_VolatileStorage::setOtherErrorDescription(String &value)
{
	_otherErrorDescription = value;
}

Boolean UNIX_VolatileStorage::getCorrectableError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRECTABLE_ERROR, getCorrectableError());
	return true;
}

Boolean UNIX_VolatileStorage::getCorrectableError() const
{
	return _correctableError;
}

void UNIX_VolatileStorage::setCorrectableError(Boolean &value)
{
	_correctableError = value;
}

Boolean UNIX_VolatileStorage::getErrorTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TIME, getErrorTime());
	return true;
}

CIMDateTime UNIX_VolatileStorage::getErrorTime() const
{
	return _errorTime;
}

void UNIX_VolatileStorage::setErrorTime(CIMDateTime &value)
{
	_errorTime = value;
}

Boolean UNIX_VolatileStorage::getErrorAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ACCESS, getErrorAccess());
	return true;
}

Uint16 UNIX_VolatileStorage::getErrorAccess() const
{
	return _errorAccess;
}

void UNIX_VolatileStorage::setErrorAccess(Uint16 &value)
{
	_errorAccess = value;
}

Boolean UNIX_VolatileStorage::getErrorTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TRANSFER_SIZE, getErrorTransferSize());
	return true;
}

Uint32 UNIX_VolatileStorage::getErrorTransferSize() const
{
	return _errorTransferSize;
}

void UNIX_VolatileStorage::setErrorTransferSize(Uint32 &value)
{
	_errorTransferSize = value;
}

Boolean UNIX_VolatileStorage::getErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA, getErrorData());
	return true;
}

Array<Uint8> UNIX_VolatileStorage::getErrorData() const
{
	return _errorData;
}

void UNIX_VolatileStorage::setErrorData(Array<Uint8> &value)
{
	_errorData = value;
}

Boolean UNIX_VolatileStorage::getErrorDataOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA_ORDER, getErrorDataOrder());
	return true;
}

Uint16 UNIX_VolatileStorage::getErrorDataOrder() const
{
	return _errorDataOrder;
}

void UNIX_VolatileStorage::setErrorDataOrder(Uint16 &value)
{
	_errorDataOrder = value;
}

Boolean UNIX_VolatileStorage::getErrorAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ADDRESS, getErrorAddress());
	return true;
}

Uint64 UNIX_VolatileStorage::getErrorAddress() const
{
	return _errorAddress;
}

void UNIX_VolatileStorage::setErrorAddress(Uint64 &value)
{
	_errorAddress = value;
}

Boolean UNIX_VolatileStorage::getSystemLevelAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_LEVEL_ADDRESS, getSystemLevelAddress());
	return true;
}

Boolean UNIX_VolatileStorage::getSystemLevelAddress() const
{
	return _systemLevelAddress;
}

void UNIX_VolatileStorage::setSystemLevelAddress(Boolean &value)
{
	_systemLevelAddress = value;
}

Boolean UNIX_VolatileStorage::getErrorResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RESOLUTION, getErrorResolution());
	return true;
}

Uint64 UNIX_VolatileStorage::getErrorResolution() const
{
	return _errorResolution;
}

void UNIX_VolatileStorage::setErrorResolution(Uint64 &value)
{
	_errorResolution = value;
}

Boolean UNIX_VolatileStorage::getAdditionalErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_ERROR_DATA, getAdditionalErrorData());
	return true;
}

Array<Uint8> UNIX_VolatileStorage::getAdditionalErrorData() const
{
	return _additionalErrorData;
}

void UNIX_VolatileStorage::setAdditionalErrorData(Array<Uint8> &value)
{
	_additionalErrorData = value;
}

Boolean UNIX_VolatileStorage::getCacheable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHEABLE, getCacheable());
	return true;
}

Boolean UNIX_VolatileStorage::getCacheable() const
{
	return _cacheable;
}

void UNIX_VolatileStorage::setCacheable(Boolean &value)
{
	_cacheable = value;
}

Boolean UNIX_VolatileStorage::getCacheType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_TYPE, getCacheType());
	return true;
}

Uint16 UNIX_VolatileStorage::getCacheType() const
{
	return _cacheType;
}

void UNIX_VolatileStorage::setCacheType(Uint16 &value)
{
	_cacheType = value;
}


void UNIX_VolatileStorage::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VolatileStorage");
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
	_creationClassName = String("UNIX_VolatileStorage");
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
	_cacheable = Boolean(false);
	_cacheType = Uint16(0);

}

Boolean UNIX_VolatileStorage::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Cacheable"))
			{
				Boolean cacheableValue;
				property.getValue().get(cacheableValue);
				setCacheable(cacheableValue);
			}
			else if (String::equal(property.getName().getString(), "CacheType"))
			{
				Uint16 cacheTypeValue;
				property.getValue().get(cacheTypeValue);
				setCacheType(cacheTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_VolatileStorage::invokeRequestStateChange(
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

Uint32 UNIX_VolatileStorage::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_VolatileStorage::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_VolatileStorage::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VolatileStorage::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VolatileStorage::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VolatileStorage::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_VolatileStorage::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_VolatileStorage::initialize()
{
	return false;
}

Boolean UNIX_VolatileStorage::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VolatileStorage");
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
	_creationClassName = String("UNIX_VolatileStorage");
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
	_cacheable = Boolean(false);
	_cacheType = Uint16(0);
	
	return false;
}

Boolean UNIX_VolatileStorage::finalize()
{
	return false;
}

Boolean UNIX_VolatileStorage::loadByName(const String name)
{
	return false;
}

Boolean UNIX_VolatileStorage::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VolatileStorage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VolatileStorage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VolatileStorage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VolatileStorage::validateInstance()
{
	return true;
}

