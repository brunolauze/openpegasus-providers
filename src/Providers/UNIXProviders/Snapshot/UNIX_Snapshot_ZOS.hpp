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


UNIX_Snapshot::UNIX_Snapshot(void)
{
}

UNIX_Snapshot::~UNIX_Snapshot(void)
{
}

Boolean UNIX_Snapshot::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Snapshot::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Snapshot::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Snapshot::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Snapshot::getCaption() const
{
	return _caption;
}

void UNIX_Snapshot::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Snapshot::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Snapshot::getDescription() const
{
	return _description;
}

void UNIX_Snapshot::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Snapshot::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Snapshot::getElementName() const
{
	return _elementName;
}

void UNIX_Snapshot::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Snapshot::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Snapshot::getGeneration() const
{
	return _generation;
}

void UNIX_Snapshot::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Snapshot::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Snapshot::getInstallDate() const
{
	return _installDate;
}

void UNIX_Snapshot::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Snapshot::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Snapshot::getName() const
{
	return _name;
}

void UNIX_Snapshot::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Snapshot::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Snapshot::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Snapshot::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Snapshot::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Snapshot::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Snapshot::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Snapshot::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Snapshot::getStatus() const
{
	return _status;
}

void UNIX_Snapshot::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Snapshot::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Snapshot::getHealthState() const
{
	return _healthState;
}

void UNIX_Snapshot::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Snapshot::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Snapshot::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Snapshot::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Snapshot::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Snapshot::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Snapshot::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Snapshot::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Snapshot::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Snapshot::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Snapshot::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Snapshot::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Snapshot::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Snapshot::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Snapshot::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Snapshot::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Snapshot::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Snapshot::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Snapshot::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Snapshot::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Snapshot::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Snapshot::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Snapshot::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Snapshot::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Snapshot::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Snapshot::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Snapshot::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Snapshot::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Snapshot::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Snapshot::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Snapshot::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Snapshot::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Snapshot::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Snapshot::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Snapshot::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_Snapshot::getAllocationState() const
{
	return _allocationState;
}

void UNIX_Snapshot::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_Snapshot::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Snapshot::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Snapshot::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Snapshot::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Snapshot::getSystemName() const
{
	return _systemName;
}

void UNIX_Snapshot::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Snapshot::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Snapshot::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Snapshot::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Snapshot::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Snapshot::getDeviceID() const
{
	return _deviceID;
}

void UNIX_Snapshot::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_Snapshot::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Snapshot::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_Snapshot::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_Snapshot::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Snapshot::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_Snapshot::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_Snapshot::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Snapshot::getAvailability() const
{
	return _availability;
}

void UNIX_Snapshot::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_Snapshot::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Snapshot::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_Snapshot::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_Snapshot::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Snapshot::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_Snapshot::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_Snapshot::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Snapshot::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_Snapshot::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_Snapshot::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Snapshot::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_Snapshot::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_Snapshot::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Snapshot::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Snapshot::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Snapshot::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Snapshot::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_Snapshot::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_Snapshot::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Snapshot::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_Snapshot::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_Snapshot::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Snapshot::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_Snapshot::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_Snapshot::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Snapshot::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_Snapshot::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_Snapshot::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Snapshot::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_Snapshot::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_Snapshot::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_Snapshot::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_Snapshot::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_Snapshot::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_Snapshot::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_Snapshot::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_Snapshot::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_Snapshot::getPurpose() const
{
	return _purpose;
}

void UNIX_Snapshot::setPurpose(String &value)
{
	_purpose = value;
}

Boolean UNIX_Snapshot::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_Snapshot::getAccess() const
{
	return _access;
}

void UNIX_Snapshot::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_Snapshot::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_Snapshot::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_Snapshot::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_Snapshot::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_Snapshot::getBlockSize() const
{
	return _blockSize;
}

void UNIX_Snapshot::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_Snapshot::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_Snapshot::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_Snapshot::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_Snapshot::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_Snapshot::getConsumableBlocks() const
{
	return _consumableBlocks;
}

void UNIX_Snapshot::setConsumableBlocks(Uint64 &value)
{
	_consumableBlocks = value;
}

Boolean UNIX_Snapshot::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_Snapshot::getIsBasedOnUnderlyingRedundancy() const
{
	return _isBasedOnUnderlyingRedundancy;
}

void UNIX_Snapshot::setIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_isBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_Snapshot::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_Snapshot::getSequentialAccess() const
{
	return _sequentialAccess;
}

void UNIX_Snapshot::setSequentialAccess(Boolean &value)
{
	_sequentialAccess = value;
}

Boolean UNIX_Snapshot::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_Snapshot::getExtentStatus() const
{
	return _extentStatus;
}

void UNIX_Snapshot::setExtentStatus(Array<Uint16> &value)
{
	_extentStatus = value;
}

Boolean UNIX_Snapshot::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_Snapshot::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_Snapshot::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_Snapshot::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_Snapshot::getDataRedundancy() const
{
	return _dataRedundancy;
}

void UNIX_Snapshot::setDataRedundancy(Uint16 &value)
{
	_dataRedundancy = value;
}

Boolean UNIX_Snapshot::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_Snapshot::getPackageRedundancy() const
{
	return _packageRedundancy;
}

void UNIX_Snapshot::setPackageRedundancy(Uint16 &value)
{
	_packageRedundancy = value;
}

Boolean UNIX_Snapshot::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_Snapshot::getDeltaReservation() const
{
	return _deltaReservation;
}

void UNIX_Snapshot::setDeltaReservation(Uint8 &value)
{
	_deltaReservation = value;
}

Boolean UNIX_Snapshot::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_Snapshot::getPrimordial() const
{
	return _primordial;
}

void UNIX_Snapshot::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_Snapshot::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_Snapshot::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_Snapshot::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_Snapshot::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_Snapshot::getNameNamespace() const
{
	return _nameNamespace;
}

void UNIX_Snapshot::setNameNamespace(Uint16 &value)
{
	_nameNamespace = value;
}

Boolean UNIX_Snapshot::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_Snapshot::getOtherNameNamespace() const
{
	return _otherNameNamespace;
}

void UNIX_Snapshot::setOtherNameNamespace(String &value)
{
	_otherNameNamespace = value;
}

Boolean UNIX_Snapshot::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_Snapshot::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_Snapshot::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_Snapshot::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_Snapshot::getUsage() const
{
	return _usage;
}

void UNIX_Snapshot::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_Snapshot::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_Snapshot::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_Snapshot::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_Snapshot::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_Snapshot::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_Snapshot::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_Snapshot::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_Snapshot::getExtentInterleaveDepth() const
{
	return _extentInterleaveDepth;
}

void UNIX_Snapshot::setExtentInterleaveDepth(Uint64 &value)
{
	_extentInterleaveDepth = value;
}

Boolean UNIX_Snapshot::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_Snapshot::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_Snapshot::setExtentStripeLength(Uint64 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_Snapshot::getIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPOSITE, getIsComposite());
	return true;
}

Boolean UNIX_Snapshot::getIsComposite() const
{
	return _isComposite;
}

void UNIX_Snapshot::setIsComposite(Boolean &value)
{
	_isComposite = value;
}

Boolean UNIX_Snapshot::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_Snapshot::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_Snapshot::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}

Boolean UNIX_Snapshot::getExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_DISCRIMINATOR, getExtentDiscriminator());
	return true;
}

Array<String> UNIX_Snapshot::getExtentDiscriminator() const
{
	return _extentDiscriminator;
}

void UNIX_Snapshot::setExtentDiscriminator(Array<String> &value)
{
	_extentDiscriminator = value;
}

Boolean UNIX_Snapshot::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_Snapshot::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_Snapshot::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_Snapshot::getCompressionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_STATE, getCompressionState());
	return true;
}

Uint16 UNIX_Snapshot::getCompressionState() const
{
	return _compressionState;
}

void UNIX_Snapshot::setCompressionState(Uint16 &value)
{
	_compressionState = value;
}

Boolean UNIX_Snapshot::getIsCompressed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPRESSED, getIsCompressed());
	return true;
}

Boolean UNIX_Snapshot::getIsCompressed() const
{
	return _isCompressed;
}

void UNIX_Snapshot::setIsCompressed(Boolean &value)
{
	_isCompressed = value;
}

Boolean UNIX_Snapshot::getIsSynced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SYNCED, getIsSynced());
	return true;
}

Boolean UNIX_Snapshot::getIsSynced() const
{
	return _isSynced;
}

void UNIX_Snapshot::setIsSynced(Boolean &value)
{
	_isSynced = value;
}

Boolean UNIX_Snapshot::getSyncTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNC_TIME, getSyncTime());
	return true;
}

CIMDateTime UNIX_Snapshot::getSyncTime() const
{
	return _syncTime;
}

void UNIX_Snapshot::setSyncTime(CIMDateTime &value)
{
	_syncTime = value;
}


void UNIX_Snapshot::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Snapshot");
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
	_creationClassName = String("UNIX_Snapshot");
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
	_isSynced = Boolean(false);
	_syncTime = CIMHelper::getCurrentTime();

}

Boolean UNIX_Snapshot::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsSynced"))
			{
				Boolean isSyncedValue;
				property.getValue().get(isSyncedValue);
				setIsSynced(isSyncedValue);
			}
			else if (String::equal(property.getName().getString(), "SyncTime"))
			{
				CIMDateTime syncTimeValue;
				property.getValue().get(syncTimeValue);
				setSyncTime(syncTimeValue);
			}
	}
	return true;
}

Uint32 UNIX_Snapshot::invokeRequestStateChange(
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

Uint32 UNIX_Snapshot::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_Snapshot::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_Snapshot::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Snapshot::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Snapshot::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Snapshot::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Snapshot::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_Snapshot::initialize()
{
	return false;
}

Boolean UNIX_Snapshot::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Snapshot");
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
	_creationClassName = String("UNIX_Snapshot");
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
	_isSynced = Boolean(false);
	_syncTime = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_Snapshot::finalize()
{
	return false;
}

Boolean UNIX_Snapshot::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Snapshot::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Snapshot::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Snapshot::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Snapshot::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Snapshot::validateInstance()
{
	return true;
}

