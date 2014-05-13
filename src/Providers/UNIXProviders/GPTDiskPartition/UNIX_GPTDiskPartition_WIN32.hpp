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


UNIX_GPTDiskPartition::UNIX_GPTDiskPartition(void)
{
}

UNIX_GPTDiskPartition::~UNIX_GPTDiskPartition(void)
{
}

Boolean UNIX_GPTDiskPartition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_GPTDiskPartition::getInstanceID() const
{
	return _instanceID;
}

void UNIX_GPTDiskPartition::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_GPTDiskPartition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_GPTDiskPartition::getCaption() const
{
	return _caption;
}

void UNIX_GPTDiskPartition::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_GPTDiskPartition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_GPTDiskPartition::getDescription() const
{
	return _description;
}

void UNIX_GPTDiskPartition::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_GPTDiskPartition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_GPTDiskPartition::getElementName() const
{
	return _elementName;
}

void UNIX_GPTDiskPartition::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_GPTDiskPartition::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getGeneration() const
{
	return _generation;
}

void UNIX_GPTDiskPartition::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_GPTDiskPartition::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_GPTDiskPartition::getInstallDate() const
{
	return _installDate;
}

void UNIX_GPTDiskPartition::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_GPTDiskPartition::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_GPTDiskPartition::getName() const
{
	return _name;
}

void UNIX_GPTDiskPartition::setName(String &value)
{
	_name = value;
}

Boolean UNIX_GPTDiskPartition::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_GPTDiskPartition::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_GPTDiskPartition::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_GPTDiskPartition::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_GPTDiskPartition::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_GPTDiskPartition::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_GPTDiskPartition::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_GPTDiskPartition::getStatus() const
{
	return _status;
}

void UNIX_GPTDiskPartition::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_GPTDiskPartition::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getHealthState() const
{
	return _healthState;
}

void UNIX_GPTDiskPartition::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_GPTDiskPartition::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_GPTDiskPartition::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_GPTDiskPartition::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_GPTDiskPartition::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_GPTDiskPartition::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_GPTDiskPartition::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_GPTDiskPartition::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_GPTDiskPartition::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_GPTDiskPartition::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getEnabledState() const
{
	return _enabledState;
}

void UNIX_GPTDiskPartition::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_GPTDiskPartition::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_GPTDiskPartition::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_GPTDiskPartition::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_GPTDiskPartition::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getRequestedState() const
{
	return _requestedState;
}

void UNIX_GPTDiskPartition::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_GPTDiskPartition::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_GPTDiskPartition::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_GPTDiskPartition::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_GPTDiskPartition::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_GPTDiskPartition::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_GPTDiskPartition::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_GPTDiskPartition::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_GPTDiskPartition::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_GPTDiskPartition::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_GPTDiskPartition::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_GPTDiskPartition::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_GPTDiskPartition::getAllocationState() const
{
	return _allocationState;
}

void UNIX_GPTDiskPartition::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_GPTDiskPartition::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_GPTDiskPartition::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_GPTDiskPartition::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_GPTDiskPartition::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_GPTDiskPartition::getSystemName() const
{
	return _systemName;
}

void UNIX_GPTDiskPartition::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_GPTDiskPartition::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_GPTDiskPartition::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_GPTDiskPartition::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_GPTDiskPartition::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_GPTDiskPartition::getDeviceID() const
{
	return _deviceID;
}

void UNIX_GPTDiskPartition::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_GPTDiskPartition::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_GPTDiskPartition::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_GPTDiskPartition::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_GPTDiskPartition::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_GPTDiskPartition::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_GPTDiskPartition::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_GPTDiskPartition::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getAvailability() const
{
	return _availability;
}

void UNIX_GPTDiskPartition::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_GPTDiskPartition::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_GPTDiskPartition::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_GPTDiskPartition::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_GPTDiskPartition::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_GPTDiskPartition::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_GPTDiskPartition::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_GPTDiskPartition::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_GPTDiskPartition::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_GPTDiskPartition::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_GPTDiskPartition::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_GPTDiskPartition::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_GPTDiskPartition::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_GPTDiskPartition::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_GPTDiskPartition::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_GPTDiskPartition::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_GPTDiskPartition::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_GPTDiskPartition::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_GPTDiskPartition::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_GPTDiskPartition::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_GPTDiskPartition::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_GPTDiskPartition::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_GPTDiskPartition::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_GPTDiskPartition::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_GPTDiskPartition::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_GPTDiskPartition::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_GPTDiskPartition::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_GPTDiskPartition::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_GPTDiskPartition::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_GPTDiskPartition::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_GPTDiskPartition::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_GPTDiskPartition::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_GPTDiskPartition::getPurpose() const
{
	return _purpose;
}

void UNIX_GPTDiskPartition::setPurpose(String &value)
{
	_purpose = value;
}

Boolean UNIX_GPTDiskPartition::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getAccess() const
{
	return _access;
}

void UNIX_GPTDiskPartition::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_GPTDiskPartition::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_GPTDiskPartition::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_GPTDiskPartition::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_GPTDiskPartition::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getBlockSize() const
{
	return _blockSize;
}

void UNIX_GPTDiskPartition::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_GPTDiskPartition::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_GPTDiskPartition::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_GPTDiskPartition::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getConsumableBlocks() const
{
	return _consumableBlocks;
}

void UNIX_GPTDiskPartition::setConsumableBlocks(Uint64 &value)
{
	_consumableBlocks = value;
}

Boolean UNIX_GPTDiskPartition::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_GPTDiskPartition::getIsBasedOnUnderlyingRedundancy() const
{
	return _isBasedOnUnderlyingRedundancy;
}

void UNIX_GPTDiskPartition::setIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_isBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_GPTDiskPartition::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_GPTDiskPartition::getSequentialAccess() const
{
	return _sequentialAccess;
}

void UNIX_GPTDiskPartition::setSequentialAccess(Boolean &value)
{
	_sequentialAccess = value;
}

Boolean UNIX_GPTDiskPartition::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_GPTDiskPartition::getExtentStatus() const
{
	return _extentStatus;
}

void UNIX_GPTDiskPartition::setExtentStatus(Array<Uint16> &value)
{
	_extentStatus = value;
}

Boolean UNIX_GPTDiskPartition::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_GPTDiskPartition::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_GPTDiskPartition::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_GPTDiskPartition::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getDataRedundancy() const
{
	return _dataRedundancy;
}

void UNIX_GPTDiskPartition::setDataRedundancy(Uint16 &value)
{
	_dataRedundancy = value;
}

Boolean UNIX_GPTDiskPartition::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getPackageRedundancy() const
{
	return _packageRedundancy;
}

void UNIX_GPTDiskPartition::setPackageRedundancy(Uint16 &value)
{
	_packageRedundancy = value;
}

Boolean UNIX_GPTDiskPartition::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_GPTDiskPartition::getDeltaReservation() const
{
	return _deltaReservation;
}

void UNIX_GPTDiskPartition::setDeltaReservation(Uint8 &value)
{
	_deltaReservation = value;
}

Boolean UNIX_GPTDiskPartition::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_GPTDiskPartition::getPrimordial() const
{
	return _primordial;
}

void UNIX_GPTDiskPartition::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_GPTDiskPartition::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_GPTDiskPartition::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_GPTDiskPartition::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getNameNamespace() const
{
	return _nameNamespace;
}

void UNIX_GPTDiskPartition::setNameNamespace(Uint16 &value)
{
	_nameNamespace = value;
}

Boolean UNIX_GPTDiskPartition::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_GPTDiskPartition::getOtherNameNamespace() const
{
	return _otherNameNamespace;
}

void UNIX_GPTDiskPartition::setOtherNameNamespace(String &value)
{
	_otherNameNamespace = value;
}

Boolean UNIX_GPTDiskPartition::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_GPTDiskPartition::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_GPTDiskPartition::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_GPTDiskPartition::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getUsage() const
{
	return _usage;
}

void UNIX_GPTDiskPartition::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_GPTDiskPartition::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_GPTDiskPartition::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_GPTDiskPartition::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_GPTDiskPartition::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_GPTDiskPartition::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_GPTDiskPartition::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_GPTDiskPartition::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getExtentInterleaveDepth() const
{
	return _extentInterleaveDepth;
}

void UNIX_GPTDiskPartition::setExtentInterleaveDepth(Uint64 &value)
{
	_extentInterleaveDepth = value;
}

Boolean UNIX_GPTDiskPartition::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_GPTDiskPartition::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_GPTDiskPartition::setExtentStripeLength(Uint64 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_GPTDiskPartition::getIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPOSITE, getIsComposite());
	return true;
}

Boolean UNIX_GPTDiskPartition::getIsComposite() const
{
	return _isComposite;
}

void UNIX_GPTDiskPartition::setIsComposite(Boolean &value)
{
	_isComposite = value;
}

Boolean UNIX_GPTDiskPartition::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_GPTDiskPartition::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_GPTDiskPartition::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}

Boolean UNIX_GPTDiskPartition::getExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_DISCRIMINATOR, getExtentDiscriminator());
	return true;
}

Array<String> UNIX_GPTDiskPartition::getExtentDiscriminator() const
{
	return _extentDiscriminator;
}

void UNIX_GPTDiskPartition::setExtentDiscriminator(Array<String> &value)
{
	_extentDiscriminator = value;
}

Boolean UNIX_GPTDiskPartition::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_GPTDiskPartition::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_GPTDiskPartition::getCompressionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_STATE, getCompressionState());
	return true;
}

Uint16 UNIX_GPTDiskPartition::getCompressionState() const
{
	return _compressionState;
}

void UNIX_GPTDiskPartition::setCompressionState(Uint16 &value)
{
	_compressionState = value;
}

Boolean UNIX_GPTDiskPartition::getIsCompressed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPRESSED, getIsCompressed());
	return true;
}

Boolean UNIX_GPTDiskPartition::getIsCompressed() const
{
	return _isCompressed;
}

void UNIX_GPTDiskPartition::setIsCompressed(Boolean &value)
{
	_isCompressed = value;
}

Boolean UNIX_GPTDiskPartition::getBootable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOTABLE, getBootable());
	return true;
}

Boolean UNIX_GPTDiskPartition::getBootable() const
{
	return _bootable;
}

void UNIX_GPTDiskPartition::setBootable(Boolean &value)
{
	_bootable = value;
}

Boolean UNIX_GPTDiskPartition::getAllocatable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATABLE, getAllocatable());
	return true;
}

Boolean UNIX_GPTDiskPartition::getAllocatable() const
{
	return _allocatable;
}

void UNIX_GPTDiskPartition::setAllocatable(Boolean &value)
{
	_allocatable = value;
}

Boolean UNIX_GPTDiskPartition::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

String UNIX_GPTDiskPartition::getSignature() const
{
	return _signature;
}

void UNIX_GPTDiskPartition::setSignature(String &value)
{
	_signature = value;
}

Boolean UNIX_GPTDiskPartition::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

String UNIX_GPTDiskPartition::getSignatureAlgorithm() const
{
	return _signatureAlgorithm;
}

void UNIX_GPTDiskPartition::setSignatureAlgorithm(String &value)
{
	_signatureAlgorithm = value;
}

Boolean UNIX_GPTDiskPartition::getSignatureState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_STATE, getSignatureState());
	return true;
}

String UNIX_GPTDiskPartition::getSignatureState() const
{
	return _signatureState;
}

void UNIX_GPTDiskPartition::setSignatureState(String &value)
{
	_signatureState = value;
}

Boolean UNIX_GPTDiskPartition::getExtendable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDABLE, getExtendable());
	return true;
}

Boolean UNIX_GPTDiskPartition::getExtendable() const
{
	return _extendable;
}

void UNIX_GPTDiskPartition::setExtendable(Boolean &value)
{
	_extendable = value;
}

Boolean UNIX_GPTDiskPartition::getPartitionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARTITION_TYPE, getPartitionType());
	return true;
}

String UNIX_GPTDiskPartition::getPartitionType() const
{
	return _partitionType;
}

void UNIX_GPTDiskPartition::setPartitionType(String &value)
{
	_partitionType = value;
}


void UNIX_GPTDiskPartition::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("GPTDiskPartition");
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
	_creationClassName = String("UNIX_GPTDiskPartition");
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
	_bootable = Boolean(false);
	_allocatable = Boolean(false);
	_signature = String ("");
	_signatureAlgorithm = String ("");
	_signatureState = String ("");
	_extendable = Boolean(false);
	_partitionType = String ("");

}

Boolean UNIX_GPTDiskPartition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Bootable"))
			{
				Boolean bootableValue;
				property.getValue().get(bootableValue);
				setBootable(bootableValue);
			}
			else if (String::equal(property.getName().getString(), "Allocatable"))
			{
				Boolean allocatableValue;
				property.getValue().get(allocatableValue);
				setAllocatable(allocatableValue);
			}
			else if (String::equal(property.getName().getString(), "Signature"))
			{
				String signatureValue;
				property.getValue().get(signatureValue);
				setSignature(signatureValue);
			}
			else if (String::equal(property.getName().getString(), "SignatureAlgorithm"))
			{
				String signatureAlgorithmValue;
				property.getValue().get(signatureAlgorithmValue);
				setSignatureAlgorithm(signatureAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "SignatureState"))
			{
				String signatureStateValue;
				property.getValue().get(signatureStateValue);
				setSignatureState(signatureStateValue);
			}
			else if (String::equal(property.getName().getString(), "Extendable"))
			{
				Boolean extendableValue;
				property.getValue().get(extendableValue);
				setExtendable(extendableValue);
			}
			else if (String::equal(property.getName().getString(), "PartitionType"))
			{
				String partitionTypeValue;
				property.getValue().get(partitionTypeValue);
				setPartitionType(partitionTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_GPTDiskPartition::invokeRequestStateChange(
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

Uint32 UNIX_GPTDiskPartition::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_GPTDiskPartition::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_GPTDiskPartition::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_GPTDiskPartition::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_GPTDiskPartition::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_GPTDiskPartition::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_GPTDiskPartition::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_GPTDiskPartition::initialize()
{
	return false;
}

Boolean UNIX_GPTDiskPartition::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("GPTDiskPartition");
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
	_creationClassName = String("UNIX_GPTDiskPartition");
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
	_bootable = Boolean(false);
	_allocatable = Boolean(false);
	_signature = String ("");
	_signatureAlgorithm = String ("");
	_signatureState = String ("");
	_extendable = Boolean(false);
	_partitionType = String ("");
	
	return false;
}

Boolean UNIX_GPTDiskPartition::finalize()
{
	return false;
}

Boolean UNIX_GPTDiskPartition::loadByName(const String name)
{
	return false;
}

Boolean UNIX_GPTDiskPartition::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_GPTDiskPartition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GPTDiskPartition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GPTDiskPartition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GPTDiskPartition::validateInstance()
{
	return true;
}

