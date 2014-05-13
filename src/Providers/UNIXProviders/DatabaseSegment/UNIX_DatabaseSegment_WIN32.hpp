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


UNIX_DatabaseSegment::UNIX_DatabaseSegment(void)
{
}

UNIX_DatabaseSegment::~UNIX_DatabaseSegment(void)
{
}

Boolean UNIX_DatabaseSegment::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseSegment::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DatabaseSegment::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DatabaseSegment::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseSegment::getCaption() const
{
	return _caption;
}

void UNIX_DatabaseSegment::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DatabaseSegment::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseSegment::getDescription() const
{
	return _description;
}

void UNIX_DatabaseSegment::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DatabaseSegment::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseSegment::getElementName() const
{
	return _elementName;
}

void UNIX_DatabaseSegment::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DatabaseSegment::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DatabaseSegment::getGeneration() const
{
	return _generation;
}

void UNIX_DatabaseSegment::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DatabaseSegment::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DatabaseSegment::getInstallDate() const
{
	return _installDate;
}

void UNIX_DatabaseSegment::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DatabaseSegment::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DatabaseSegment::getName() const
{
	return _name;
}

void UNIX_DatabaseSegment::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DatabaseSegment::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DatabaseSegment::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DatabaseSegment::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DatabaseSegment::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DatabaseSegment::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DatabaseSegment::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DatabaseSegment::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DatabaseSegment::getStatus() const
{
	return _status;
}

void UNIX_DatabaseSegment::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DatabaseSegment::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DatabaseSegment::getHealthState() const
{
	return _healthState;
}

void UNIX_DatabaseSegment::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DatabaseSegment::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DatabaseSegment::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DatabaseSegment::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DatabaseSegment::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DatabaseSegment::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DatabaseSegment::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DatabaseSegment::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DatabaseSegment::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DatabaseSegment::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DatabaseSegment::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DatabaseSegment::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DatabaseSegment::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DatabaseSegment::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DatabaseSegment::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DatabaseSegment::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DatabaseSegment::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DatabaseSegment::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DatabaseSegment::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DatabaseSegment::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DatabaseSegment::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DatabaseSegment::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DatabaseSegment::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DatabaseSegment::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DatabaseSegment::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DatabaseSegment::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DatabaseSegment::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DatabaseSegment::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DatabaseSegment::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DatabaseSegment::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DatabaseSegment::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DatabaseSegment::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DatabaseSegment::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DatabaseSegment::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DatabaseSegment::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_DatabaseSegment::getAllocationState() const
{
	return _allocationState;
}

void UNIX_DatabaseSegment::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_DatabaseSegment::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DatabaseSegment::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DatabaseSegment::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DatabaseSegment::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DatabaseSegment::getSystemName() const
{
	return _systemName;
}

void UNIX_DatabaseSegment::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DatabaseSegment::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DatabaseSegment::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DatabaseSegment::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DatabaseSegment::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DatabaseSegment::getDeviceID() const
{
	return _deviceID;
}

void UNIX_DatabaseSegment::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_DatabaseSegment::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DatabaseSegment::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_DatabaseSegment::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_DatabaseSegment::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DatabaseSegment::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_DatabaseSegment::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_DatabaseSegment::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DatabaseSegment::getAvailability() const
{
	return _availability;
}

void UNIX_DatabaseSegment::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_DatabaseSegment::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DatabaseSegment::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_DatabaseSegment::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_DatabaseSegment::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DatabaseSegment::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_DatabaseSegment::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_DatabaseSegment::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DatabaseSegment::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_DatabaseSegment::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_DatabaseSegment::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DatabaseSegment::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_DatabaseSegment::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_DatabaseSegment::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DatabaseSegment::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_DatabaseSegment::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_DatabaseSegment::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DatabaseSegment::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_DatabaseSegment::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_DatabaseSegment::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DatabaseSegment::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_DatabaseSegment::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_DatabaseSegment::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DatabaseSegment::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_DatabaseSegment::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_DatabaseSegment::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DatabaseSegment::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_DatabaseSegment::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_DatabaseSegment::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DatabaseSegment::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_DatabaseSegment::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_DatabaseSegment::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_DatabaseSegment::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_DatabaseSegment::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_DatabaseSegment::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_DatabaseSegment::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_DatabaseSegment::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_DatabaseSegment::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_DatabaseSegment::getPurpose() const
{
	return _purpose;
}

void UNIX_DatabaseSegment::setPurpose(String &value)
{
	_purpose = value;
}

Boolean UNIX_DatabaseSegment::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_DatabaseSegment::getAccess() const
{
	return _access;
}

void UNIX_DatabaseSegment::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_DatabaseSegment::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_DatabaseSegment::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_DatabaseSegment::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_DatabaseSegment::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_DatabaseSegment::getBlockSize() const
{
	return _blockSize;
}

void UNIX_DatabaseSegment::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_DatabaseSegment::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_DatabaseSegment::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_DatabaseSegment::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_DatabaseSegment::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_DatabaseSegment::getConsumableBlocks() const
{
	return _consumableBlocks;
}

void UNIX_DatabaseSegment::setConsumableBlocks(Uint64 &value)
{
	_consumableBlocks = value;
}

Boolean UNIX_DatabaseSegment::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_DatabaseSegment::getIsBasedOnUnderlyingRedundancy() const
{
	return _isBasedOnUnderlyingRedundancy;
}

void UNIX_DatabaseSegment::setIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_isBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_DatabaseSegment::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_DatabaseSegment::getSequentialAccess() const
{
	return _sequentialAccess;
}

void UNIX_DatabaseSegment::setSequentialAccess(Boolean &value)
{
	_sequentialAccess = value;
}

Boolean UNIX_DatabaseSegment::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_DatabaseSegment::getExtentStatus() const
{
	return _extentStatus;
}

void UNIX_DatabaseSegment::setExtentStatus(Array<Uint16> &value)
{
	_extentStatus = value;
}

Boolean UNIX_DatabaseSegment::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_DatabaseSegment::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_DatabaseSegment::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_DatabaseSegment::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_DatabaseSegment::getDataRedundancy() const
{
	return _dataRedundancy;
}

void UNIX_DatabaseSegment::setDataRedundancy(Uint16 &value)
{
	_dataRedundancy = value;
}

Boolean UNIX_DatabaseSegment::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_DatabaseSegment::getPackageRedundancy() const
{
	return _packageRedundancy;
}

void UNIX_DatabaseSegment::setPackageRedundancy(Uint16 &value)
{
	_packageRedundancy = value;
}

Boolean UNIX_DatabaseSegment::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_DatabaseSegment::getDeltaReservation() const
{
	return _deltaReservation;
}

void UNIX_DatabaseSegment::setDeltaReservation(Uint8 &value)
{
	_deltaReservation = value;
}

Boolean UNIX_DatabaseSegment::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_DatabaseSegment::getPrimordial() const
{
	return _primordial;
}

void UNIX_DatabaseSegment::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_DatabaseSegment::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_DatabaseSegment::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_DatabaseSegment::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_DatabaseSegment::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_DatabaseSegment::getNameNamespace() const
{
	return _nameNamespace;
}

void UNIX_DatabaseSegment::setNameNamespace(Uint16 &value)
{
	_nameNamespace = value;
}

Boolean UNIX_DatabaseSegment::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_DatabaseSegment::getOtherNameNamespace() const
{
	return _otherNameNamespace;
}

void UNIX_DatabaseSegment::setOtherNameNamespace(String &value)
{
	_otherNameNamespace = value;
}

Boolean UNIX_DatabaseSegment::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_DatabaseSegment::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_DatabaseSegment::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_DatabaseSegment::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_DatabaseSegment::getUsage() const
{
	return _usage;
}

void UNIX_DatabaseSegment::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_DatabaseSegment::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_DatabaseSegment::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_DatabaseSegment::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_DatabaseSegment::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_DatabaseSegment::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_DatabaseSegment::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_DatabaseSegment::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_DatabaseSegment::getExtentInterleaveDepth() const
{
	return _extentInterleaveDepth;
}

void UNIX_DatabaseSegment::setExtentInterleaveDepth(Uint64 &value)
{
	_extentInterleaveDepth = value;
}

Boolean UNIX_DatabaseSegment::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_DatabaseSegment::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_DatabaseSegment::setExtentStripeLength(Uint64 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_DatabaseSegment::getIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPOSITE, getIsComposite());
	return true;
}

Boolean UNIX_DatabaseSegment::getIsComposite() const
{
	return _isComposite;
}

void UNIX_DatabaseSegment::setIsComposite(Boolean &value)
{
	_isComposite = value;
}

Boolean UNIX_DatabaseSegment::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_DatabaseSegment::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_DatabaseSegment::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}

Boolean UNIX_DatabaseSegment::getExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_DISCRIMINATOR, getExtentDiscriminator());
	return true;
}

Array<String> UNIX_DatabaseSegment::getExtentDiscriminator() const
{
	return _extentDiscriminator;
}

void UNIX_DatabaseSegment::setExtentDiscriminator(Array<String> &value)
{
	_extentDiscriminator = value;
}

Boolean UNIX_DatabaseSegment::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_DatabaseSegment::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_DatabaseSegment::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_DatabaseSegment::getCompressionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_STATE, getCompressionState());
	return true;
}

Uint16 UNIX_DatabaseSegment::getCompressionState() const
{
	return _compressionState;
}

void UNIX_DatabaseSegment::setCompressionState(Uint16 &value)
{
	_compressionState = value;
}

Boolean UNIX_DatabaseSegment::getIsCompressed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPRESSED, getIsCompressed());
	return true;
}

Boolean UNIX_DatabaseSegment::getIsCompressed() const
{
	return _isCompressed;
}

void UNIX_DatabaseSegment::setIsCompressed(Boolean &value)
{
	_isCompressed = value;
}

Boolean UNIX_DatabaseSegment::getOtherPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PURPOSE, getOtherPurpose());
	return true;
}

String UNIX_DatabaseSegment::getOtherPurpose() const
{
	return _otherPurpose;
}

void UNIX_DatabaseSegment::setOtherPurpose(String &value)
{
	_otherPurpose = value;
}


void UNIX_DatabaseSegment::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseSegment");
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
	_creationClassName = String("UNIX_DatabaseSegment");
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
	_otherPurpose = String ("");

}

Boolean UNIX_DatabaseSegment::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "OtherPurpose"))
			{
				String otherPurposeValue;
				property.getValue().get(otherPurposeValue);
				setOtherPurpose(otherPurposeValue);
			}
	}
	return true;
}

Uint32 UNIX_DatabaseSegment::invokeRequestStateChange(
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

Uint32 UNIX_DatabaseSegment::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_DatabaseSegment::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_DatabaseSegment::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DatabaseSegment::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DatabaseSegment::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DatabaseSegment::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_DatabaseSegment::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_DatabaseSegment::initialize()
{
	return false;
}

Boolean UNIX_DatabaseSegment::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseSegment");
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
	_creationClassName = String("UNIX_DatabaseSegment");
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
	_otherPurpose = String ("");
	
	return false;
}

Boolean UNIX_DatabaseSegment::finalize()
{
	return false;
}

Boolean UNIX_DatabaseSegment::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DatabaseSegment::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DatabaseSegment::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSegment::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSegment::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseSegment::validateInstance()
{
	return true;
}

