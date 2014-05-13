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


UNIX_VTOCDiskPartition::UNIX_VTOCDiskPartition(void)
{
}

UNIX_VTOCDiskPartition::~UNIX_VTOCDiskPartition(void)
{
}

Boolean UNIX_VTOCDiskPartition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VTOCDiskPartition::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VTOCDiskPartition::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VTOCDiskPartition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VTOCDiskPartition::getCaption() const
{
	return _caption;
}

void UNIX_VTOCDiskPartition::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VTOCDiskPartition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VTOCDiskPartition::getDescription() const
{
	return _description;
}

void UNIX_VTOCDiskPartition::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VTOCDiskPartition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VTOCDiskPartition::getElementName() const
{
	return _elementName;
}

void UNIX_VTOCDiskPartition::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VTOCDiskPartition::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getGeneration() const
{
	return _generation;
}

void UNIX_VTOCDiskPartition::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VTOCDiskPartition::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VTOCDiskPartition::getInstallDate() const
{
	return _installDate;
}

void UNIX_VTOCDiskPartition::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_VTOCDiskPartition::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VTOCDiskPartition::getName() const
{
	return _name;
}

void UNIX_VTOCDiskPartition::setName(String &value)
{
	_name = value;
}

Boolean UNIX_VTOCDiskPartition::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VTOCDiskPartition::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_VTOCDiskPartition::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_VTOCDiskPartition::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VTOCDiskPartition::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_VTOCDiskPartition::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_VTOCDiskPartition::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VTOCDiskPartition::getStatus() const
{
	return _status;
}

void UNIX_VTOCDiskPartition::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_VTOCDiskPartition::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getHealthState() const
{
	return _healthState;
}

void UNIX_VTOCDiskPartition::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_VTOCDiskPartition::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_VTOCDiskPartition::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_VTOCDiskPartition::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_VTOCDiskPartition::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_VTOCDiskPartition::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_VTOCDiskPartition::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_VTOCDiskPartition::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_VTOCDiskPartition::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_VTOCDiskPartition::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getEnabledState() const
{
	return _enabledState;
}

void UNIX_VTOCDiskPartition::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_VTOCDiskPartition::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VTOCDiskPartition::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_VTOCDiskPartition::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_VTOCDiskPartition::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getRequestedState() const
{
	return _requestedState;
}

void UNIX_VTOCDiskPartition::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_VTOCDiskPartition::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_VTOCDiskPartition::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_VTOCDiskPartition::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VTOCDiskPartition::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_VTOCDiskPartition::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_VTOCDiskPartition::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VTOCDiskPartition::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_VTOCDiskPartition::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_VTOCDiskPartition::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_VTOCDiskPartition::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_VTOCDiskPartition::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_VTOCDiskPartition::getAllocationState() const
{
	return _allocationState;
}

void UNIX_VTOCDiskPartition::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_VTOCDiskPartition::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VTOCDiskPartition::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_VTOCDiskPartition::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_VTOCDiskPartition::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VTOCDiskPartition::getSystemName() const
{
	return _systemName;
}

void UNIX_VTOCDiskPartition::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_VTOCDiskPartition::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VTOCDiskPartition::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_VTOCDiskPartition::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_VTOCDiskPartition::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_VTOCDiskPartition::getDeviceID() const
{
	return _deviceID;
}

void UNIX_VTOCDiskPartition::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_VTOCDiskPartition::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_VTOCDiskPartition::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_VTOCDiskPartition::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_VTOCDiskPartition::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_VTOCDiskPartition::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_VTOCDiskPartition::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getAvailability() const
{
	return _availability;
}

void UNIX_VTOCDiskPartition::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_VTOCDiskPartition::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_VTOCDiskPartition::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_VTOCDiskPartition::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_VTOCDiskPartition::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_VTOCDiskPartition::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_VTOCDiskPartition::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_VTOCDiskPartition::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_VTOCDiskPartition::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_VTOCDiskPartition::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_VTOCDiskPartition::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_VTOCDiskPartition::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VTOCDiskPartition::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_VTOCDiskPartition::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_VTOCDiskPartition::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_VTOCDiskPartition::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_VTOCDiskPartition::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_VTOCDiskPartition::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_VTOCDiskPartition::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VTOCDiskPartition::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_VTOCDiskPartition::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_VTOCDiskPartition::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_VTOCDiskPartition::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_VTOCDiskPartition::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_VTOCDiskPartition::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_VTOCDiskPartition::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_VTOCDiskPartition::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_VTOCDiskPartition::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_VTOCDiskPartition::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getDataOrganization() const
{
	return _dataOrganization;
}

void UNIX_VTOCDiskPartition::setDataOrganization(Uint16 &value)
{
	_dataOrganization = value;
}

Boolean UNIX_VTOCDiskPartition::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_VTOCDiskPartition::getPurpose() const
{
	return _purpose;
}

void UNIX_VTOCDiskPartition::setPurpose(String &value)
{
	_purpose = value;
}

Boolean UNIX_VTOCDiskPartition::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getAccess() const
{
	return _access;
}

void UNIX_VTOCDiskPartition::setAccess(Uint16 &value)
{
	_access = value;
}

Boolean UNIX_VTOCDiskPartition::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_VTOCDiskPartition::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_VTOCDiskPartition::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_VTOCDiskPartition::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getBlockSize() const
{
	return _blockSize;
}

void UNIX_VTOCDiskPartition::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_VTOCDiskPartition::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_VTOCDiskPartition::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_VTOCDiskPartition::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getConsumableBlocks() const
{
	return _consumableBlocks;
}

void UNIX_VTOCDiskPartition::setConsumableBlocks(Uint64 &value)
{
	_consumableBlocks = value;
}

Boolean UNIX_VTOCDiskPartition::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getIsBasedOnUnderlyingRedundancy() const
{
	return _isBasedOnUnderlyingRedundancy;
}

void UNIX_VTOCDiskPartition::setIsBasedOnUnderlyingRedundancy(Boolean &value)
{
	_isBasedOnUnderlyingRedundancy = value;
}

Boolean UNIX_VTOCDiskPartition::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getSequentialAccess() const
{
	return _sequentialAccess;
}

void UNIX_VTOCDiskPartition::setSequentialAccess(Boolean &value)
{
	_sequentialAccess = value;
}

Boolean UNIX_VTOCDiskPartition::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_VTOCDiskPartition::getExtentStatus() const
{
	return _extentStatus;
}

void UNIX_VTOCDiskPartition::setExtentStatus(Array<Uint16> &value)
{
	_extentStatus = value;
}

Boolean UNIX_VTOCDiskPartition::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_VTOCDiskPartition::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_VTOCDiskPartition::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getDataRedundancy() const
{
	return _dataRedundancy;
}

void UNIX_VTOCDiskPartition::setDataRedundancy(Uint16 &value)
{
	_dataRedundancy = value;
}

Boolean UNIX_VTOCDiskPartition::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getPackageRedundancy() const
{
	return _packageRedundancy;
}

void UNIX_VTOCDiskPartition::setPackageRedundancy(Uint16 &value)
{
	_packageRedundancy = value;
}

Boolean UNIX_VTOCDiskPartition::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_VTOCDiskPartition::getDeltaReservation() const
{
	return _deltaReservation;
}

void UNIX_VTOCDiskPartition::setDeltaReservation(Uint8 &value)
{
	_deltaReservation = value;
}

Boolean UNIX_VTOCDiskPartition::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getPrimordial() const
{
	return _primordial;
}

void UNIX_VTOCDiskPartition::setPrimordial(Boolean &value)
{
	_primordial = value;
}

Boolean UNIX_VTOCDiskPartition::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_VTOCDiskPartition::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_VTOCDiskPartition::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getNameNamespace() const
{
	return _nameNamespace;
}

void UNIX_VTOCDiskPartition::setNameNamespace(Uint16 &value)
{
	_nameNamespace = value;
}

Boolean UNIX_VTOCDiskPartition::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_VTOCDiskPartition::getOtherNameNamespace() const
{
	return _otherNameNamespace;
}

void UNIX_VTOCDiskPartition::setOtherNameNamespace(String &value)
{
	_otherNameNamespace = value;
}

Boolean UNIX_VTOCDiskPartition::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_VTOCDiskPartition::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_VTOCDiskPartition::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}

Boolean UNIX_VTOCDiskPartition::getUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE, getUsage());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getUsage() const
{
	return _usage;
}

void UNIX_VTOCDiskPartition::setUsage(Uint16 &value)
{
	_usage = value;
}

Boolean UNIX_VTOCDiskPartition::getOtherUsageDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USAGE_DESCRIPTION, getOtherUsageDescription());
	return true;
}

String UNIX_VTOCDiskPartition::getOtherUsageDescription() const
{
	return _otherUsageDescription;
}

void UNIX_VTOCDiskPartition::setOtherUsageDescription(String &value)
{
	_otherUsageDescription = value;
}

Boolean UNIX_VTOCDiskPartition::getClientSettableUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SETTABLE_USAGE, getClientSettableUsage());
	return true;
}

Array<Uint16> UNIX_VTOCDiskPartition::getClientSettableUsage() const
{
	return _clientSettableUsage;
}

void UNIX_VTOCDiskPartition::setClientSettableUsage(Array<Uint16> &value)
{
	_clientSettableUsage = value;
}

Boolean UNIX_VTOCDiskPartition::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getExtentInterleaveDepth() const
{
	return _extentInterleaveDepth;
}

void UNIX_VTOCDiskPartition::setExtentInterleaveDepth(Uint64 &value)
{
	_extentInterleaveDepth = value;
}

Boolean UNIX_VTOCDiskPartition::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_VTOCDiskPartition::getExtentStripeLength() const
{
	return _extentStripeLength;
}

void UNIX_VTOCDiskPartition::setExtentStripeLength(Uint64 &value)
{
	_extentStripeLength = value;
}

Boolean UNIX_VTOCDiskPartition::getIsComposite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPOSITE, getIsComposite());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getIsComposite() const
{
	return _isComposite;
}

void UNIX_VTOCDiskPartition::setIsComposite(Boolean &value)
{
	_isComposite = value;
}

Boolean UNIX_VTOCDiskPartition::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_VTOCDiskPartition::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}

Boolean UNIX_VTOCDiskPartition::getExtentDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_DISCRIMINATOR, getExtentDiscriminator());
	return true;
}

Array<String> UNIX_VTOCDiskPartition::getExtentDiscriminator() const
{
	return _extentDiscriminator;
}

void UNIX_VTOCDiskPartition::setExtentDiscriminator(Array<String> &value)
{
	_extentDiscriminator = value;
}

Boolean UNIX_VTOCDiskPartition::getCompressionRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_RATE, getCompressionRate());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getCompressionRate() const
{
	return _compressionRate;
}

void UNIX_VTOCDiskPartition::setCompressionRate(Uint16 &value)
{
	_compressionRate = value;
}

Boolean UNIX_VTOCDiskPartition::getCompressionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_STATE, getCompressionState());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getCompressionState() const
{
	return _compressionState;
}

void UNIX_VTOCDiskPartition::setCompressionState(Uint16 &value)
{
	_compressionState = value;
}

Boolean UNIX_VTOCDiskPartition::getIsCompressed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_COMPRESSED, getIsCompressed());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getIsCompressed() const
{
	return _isCompressed;
}

void UNIX_VTOCDiskPartition::setIsCompressed(Boolean &value)
{
	_isCompressed = value;
}

Boolean UNIX_VTOCDiskPartition::getBootable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOTABLE, getBootable());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getBootable() const
{
	return _bootable;
}

void UNIX_VTOCDiskPartition::setBootable(Boolean &value)
{
	_bootable = value;
}

Boolean UNIX_VTOCDiskPartition::getAllocatable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATABLE, getAllocatable());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getAllocatable() const
{
	return _allocatable;
}

void UNIX_VTOCDiskPartition::setAllocatable(Boolean &value)
{
	_allocatable = value;
}

Boolean UNIX_VTOCDiskPartition::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

String UNIX_VTOCDiskPartition::getSignature() const
{
	return _signature;
}

void UNIX_VTOCDiskPartition::setSignature(String &value)
{
	_signature = value;
}

Boolean UNIX_VTOCDiskPartition::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

String UNIX_VTOCDiskPartition::getSignatureAlgorithm() const
{
	return _signatureAlgorithm;
}

void UNIX_VTOCDiskPartition::setSignatureAlgorithm(String &value)
{
	_signatureAlgorithm = value;
}

Boolean UNIX_VTOCDiskPartition::getSignatureState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_STATE, getSignatureState());
	return true;
}

String UNIX_VTOCDiskPartition::getSignatureState() const
{
	return _signatureState;
}

void UNIX_VTOCDiskPartition::setSignatureState(String &value)
{
	_signatureState = value;
}

Boolean UNIX_VTOCDiskPartition::getExtendable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDABLE, getExtendable());
	return true;
}

Boolean UNIX_VTOCDiskPartition::getExtendable() const
{
	return _extendable;
}

void UNIX_VTOCDiskPartition::setExtendable(Boolean &value)
{
	_extendable = value;
}

Boolean UNIX_VTOCDiskPartition::getFlags(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FLAGS, getFlags());
	return true;
}

Array<Uint16> UNIX_VTOCDiskPartition::getFlags() const
{
	return _flags;
}

void UNIX_VTOCDiskPartition::setFlags(Array<Uint16> &value)
{
	_flags = value;
}

Boolean UNIX_VTOCDiskPartition::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

Uint16 UNIX_VTOCDiskPartition::getTag() const
{
	return _tag;
}

void UNIX_VTOCDiskPartition::setTag(Uint16 &value)
{
	_tag = value;
}

Boolean UNIX_VTOCDiskPartition::getAsciiLabel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASCII_LABEL, getAsciiLabel());
	return true;
}

String UNIX_VTOCDiskPartition::getAsciiLabel() const
{
	return _asciiLabel;
}

void UNIX_VTOCDiskPartition::setAsciiLabel(String &value)
{
	_asciiLabel = value;
}


void UNIX_VTOCDiskPartition::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VTOCDiskPartition");
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
	_creationClassName = String("UNIX_VTOCDiskPartition");
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
	_flags.clear();
	_tag = Uint16(0);
	_asciiLabel = String ("");

}

Boolean UNIX_VTOCDiskPartition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Flags"))
			{
				Array<Uint16> flagsValue;
				property.getValue().get(flagsValue);
				setFlags(flagsValue);
			}
			else if (String::equal(property.getName().getString(), "Tag"))
			{
				Uint16 tagValue;
				property.getValue().get(tagValue);
				setTag(tagValue);
			}
			else if (String::equal(property.getName().getString(), "AsciiLabel"))
			{
				String asciiLabelValue;
				property.getValue().get(asciiLabelValue);
				setAsciiLabel(asciiLabelValue);
			}
	}
	return true;
}

Uint32 UNIX_VTOCDiskPartition::invokeRequestStateChange(
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

Uint32 UNIX_VTOCDiskPartition::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_VTOCDiskPartition::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_VTOCDiskPartition::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VTOCDiskPartition::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VTOCDiskPartition::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VTOCDiskPartition::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_VTOCDiskPartition::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_VTOCDiskPartition::initialize()
{
	return false;
}

Boolean UNIX_VTOCDiskPartition::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VTOCDiskPartition");
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
	_creationClassName = String("UNIX_VTOCDiskPartition");
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
	_flags.clear();
	_tag = Uint16(0);
	_asciiLabel = String ("");
	
	return false;
}

Boolean UNIX_VTOCDiskPartition::finalize()
{
	return false;
}

Boolean UNIX_VTOCDiskPartition::loadByName(const String name)
{
	return false;
}

Boolean UNIX_VTOCDiskPartition::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VTOCDiskPartition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTOCDiskPartition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTOCDiskPartition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTOCDiskPartition::validateInstance()
{
	return true;
}

