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


UNIX_DisketteDrive::UNIX_DisketteDrive(void)
{
}

UNIX_DisketteDrive::~UNIX_DisketteDrive(void)
{
}

Boolean UNIX_DisketteDrive::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DisketteDrive::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DisketteDrive::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DisketteDrive::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DisketteDrive::getCaption() const
{
	return _caption;
}

void UNIX_DisketteDrive::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DisketteDrive::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DisketteDrive::getDescription() const
{
	return _description;
}

void UNIX_DisketteDrive::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DisketteDrive::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DisketteDrive::getElementName() const
{
	return _elementName;
}

void UNIX_DisketteDrive::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DisketteDrive::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DisketteDrive::getGeneration() const
{
	return _generation;
}

void UNIX_DisketteDrive::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DisketteDrive::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DisketteDrive::getInstallDate() const
{
	return _installDate;
}

void UNIX_DisketteDrive::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DisketteDrive::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DisketteDrive::getName() const
{
	return _name;
}

void UNIX_DisketteDrive::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DisketteDrive::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DisketteDrive::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DisketteDrive::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DisketteDrive::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DisketteDrive::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DisketteDrive::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DisketteDrive::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DisketteDrive::getStatus() const
{
	return _status;
}

void UNIX_DisketteDrive::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DisketteDrive::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DisketteDrive::getHealthState() const
{
	return _healthState;
}

void UNIX_DisketteDrive::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DisketteDrive::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DisketteDrive::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DisketteDrive::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DisketteDrive::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DisketteDrive::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DisketteDrive::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DisketteDrive::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DisketteDrive::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DisketteDrive::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DisketteDrive::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DisketteDrive::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DisketteDrive::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DisketteDrive::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DisketteDrive::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DisketteDrive::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DisketteDrive::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DisketteDrive::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DisketteDrive::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DisketteDrive::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DisketteDrive::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DisketteDrive::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DisketteDrive::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DisketteDrive::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DisketteDrive::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DisketteDrive::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DisketteDrive::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DisketteDrive::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DisketteDrive::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DisketteDrive::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DisketteDrive::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DisketteDrive::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DisketteDrive::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DisketteDrive::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DisketteDrive::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_DisketteDrive::getAllocationState() const
{
	return _allocationState;
}

void UNIX_DisketteDrive::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_DisketteDrive::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DisketteDrive::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DisketteDrive::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DisketteDrive::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DisketteDrive::getSystemName() const
{
	return _systemName;
}

void UNIX_DisketteDrive::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DisketteDrive::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DisketteDrive::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DisketteDrive::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DisketteDrive::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DisketteDrive::getDeviceID() const
{
	return _deviceID;
}

void UNIX_DisketteDrive::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_DisketteDrive::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DisketteDrive::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_DisketteDrive::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_DisketteDrive::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DisketteDrive::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_DisketteDrive::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_DisketteDrive::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DisketteDrive::getAvailability() const
{
	return _availability;
}

void UNIX_DisketteDrive::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_DisketteDrive::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DisketteDrive::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_DisketteDrive::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_DisketteDrive::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DisketteDrive::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_DisketteDrive::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_DisketteDrive::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DisketteDrive::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_DisketteDrive::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_DisketteDrive::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DisketteDrive::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_DisketteDrive::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_DisketteDrive::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DisketteDrive::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_DisketteDrive::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_DisketteDrive::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DisketteDrive::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_DisketteDrive::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_DisketteDrive::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DisketteDrive::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_DisketteDrive::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_DisketteDrive::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DisketteDrive::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_DisketteDrive::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_DisketteDrive::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DisketteDrive::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_DisketteDrive::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_DisketteDrive::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DisketteDrive::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_DisketteDrive::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_DisketteDrive::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_DisketteDrive::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_DisketteDrive::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_DisketteDrive::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_DisketteDrive::getCapabilities() const
{
	return _capabilities;
}

void UNIX_DisketteDrive::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_DisketteDrive::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_DisketteDrive::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_DisketteDrive::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_DisketteDrive::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_DisketteDrive::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_DisketteDrive::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_DisketteDrive::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_DisketteDrive::getCompressionMethod() const
{
	return _compressionMethod;
}

void UNIX_DisketteDrive::setCompressionMethod(String &value)
{
	_compressionMethod = value;
}

Boolean UNIX_DisketteDrive::getNumberOfMediaSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_MEDIA_SUPPORTED, getNumberOfMediaSupported());
	return true;
}

Uint32 UNIX_DisketteDrive::getNumberOfMediaSupported() const
{
	return _numberOfMediaSupported;
}

void UNIX_DisketteDrive::setNumberOfMediaSupported(Uint32 &value)
{
	_numberOfMediaSupported = value;
}

Boolean UNIX_DisketteDrive::getMaxMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE, getMaxMediaSize());
	return true;
}

Uint64 UNIX_DisketteDrive::getMaxMediaSize() const
{
	return _maxMediaSize;
}

void UNIX_DisketteDrive::setMaxMediaSize(Uint64 &value)
{
	_maxMediaSize = value;
}

Boolean UNIX_DisketteDrive::getDefaultBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_BLOCK_SIZE, getDefaultBlockSize());
	return true;
}

Uint64 UNIX_DisketteDrive::getDefaultBlockSize() const
{
	return _defaultBlockSize;
}

void UNIX_DisketteDrive::setDefaultBlockSize(Uint64 &value)
{
	_defaultBlockSize = value;
}

Boolean UNIX_DisketteDrive::getMaxBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BLOCK_SIZE, getMaxBlockSize());
	return true;
}

Uint64 UNIX_DisketteDrive::getMaxBlockSize() const
{
	return _maxBlockSize;
}

void UNIX_DisketteDrive::setMaxBlockSize(Uint64 &value)
{
	_maxBlockSize = value;
}

Boolean UNIX_DisketteDrive::getMinBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BLOCK_SIZE, getMinBlockSize());
	return true;
}

Uint64 UNIX_DisketteDrive::getMinBlockSize() const
{
	return _minBlockSize;
}

void UNIX_DisketteDrive::setMinBlockSize(Uint64 &value)
{
	_minBlockSize = value;
}

Boolean UNIX_DisketteDrive::getNeedsCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEEDS_CLEANING, getNeedsCleaning());
	return true;
}

Boolean UNIX_DisketteDrive::getNeedsCleaning() const
{
	return _needsCleaning;
}

void UNIX_DisketteDrive::setNeedsCleaning(Boolean &value)
{
	_needsCleaning = value;
}

Boolean UNIX_DisketteDrive::getMediaIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_IS_LOCKED, getMediaIsLocked());
	return true;
}

Boolean UNIX_DisketteDrive::getMediaIsLocked() const
{
	return _mediaIsLocked;
}

void UNIX_DisketteDrive::setMediaIsLocked(Boolean &value)
{
	_mediaIsLocked = value;
}

Boolean UNIX_DisketteDrive::getSecurity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY, getSecurity());
	return true;
}

Uint16 UNIX_DisketteDrive::getSecurity() const
{
	return _security;
}

void UNIX_DisketteDrive::setSecurity(Uint16 &value)
{
	_security = value;
}

Boolean UNIX_DisketteDrive::getLastCleaned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CLEANED, getLastCleaned());
	return true;
}

CIMDateTime UNIX_DisketteDrive::getLastCleaned() const
{
	return _lastCleaned;
}

void UNIX_DisketteDrive::setLastCleaned(CIMDateTime &value)
{
	_lastCleaned = value;
}

Boolean UNIX_DisketteDrive::getMaxAccessTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACCESS_TIME, getMaxAccessTime());
	return true;
}

Uint64 UNIX_DisketteDrive::getMaxAccessTime() const
{
	return _maxAccessTime;
}

void UNIX_DisketteDrive::setMaxAccessTime(Uint64 &value)
{
	_maxAccessTime = value;
}

Boolean UNIX_DisketteDrive::getUncompressedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNCOMPRESSED_DATA_RATE, getUncompressedDataRate());
	return true;
}

Uint32 UNIX_DisketteDrive::getUncompressedDataRate() const
{
	return _uncompressedDataRate;
}

void UNIX_DisketteDrive::setUncompressedDataRate(Uint32 &value)
{
	_uncompressedDataRate = value;
}

Boolean UNIX_DisketteDrive::getLoadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TIME, getLoadTime());
	return true;
}

Uint64 UNIX_DisketteDrive::getLoadTime() const
{
	return _loadTime;
}

void UNIX_DisketteDrive::setLoadTime(Uint64 &value)
{
	_loadTime = value;
}

Boolean UNIX_DisketteDrive::getUnloadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_TIME, getUnloadTime());
	return true;
}

Uint64 UNIX_DisketteDrive::getUnloadTime() const
{
	return _unloadTime;
}

void UNIX_DisketteDrive::setUnloadTime(Uint64 &value)
{
	_unloadTime = value;
}

Boolean UNIX_DisketteDrive::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_DisketteDrive::getMountCount() const
{
	return _mountCount;
}

void UNIX_DisketteDrive::setMountCount(Uint64 &value)
{
	_mountCount = value;
}

Boolean UNIX_DisketteDrive::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_DisketteDrive::getTimeOfLastMount() const
{
	return _timeOfLastMount;
}

void UNIX_DisketteDrive::setTimeOfLastMount(CIMDateTime &value)
{
	_timeOfLastMount = value;
}

Boolean UNIX_DisketteDrive::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_DisketteDrive::getTotalMountTime() const
{
	return _totalMountTime;
}

void UNIX_DisketteDrive::setTotalMountTime(Uint64 &value)
{
	_totalMountTime = value;
}

Boolean UNIX_DisketteDrive::getUnitsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_DESCRIPTION, getUnitsDescription());
	return true;
}

String UNIX_DisketteDrive::getUnitsDescription() const
{
	return _unitsDescription;
}

void UNIX_DisketteDrive::setUnitsDescription(String &value)
{
	_unitsDescription = value;
}

Boolean UNIX_DisketteDrive::getMaxUnitsBeforeCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_BEFORE_CLEANING, getMaxUnitsBeforeCleaning());
	return true;
}

Uint64 UNIX_DisketteDrive::getMaxUnitsBeforeCleaning() const
{
	return _maxUnitsBeforeCleaning;
}

void UNIX_DisketteDrive::setMaxUnitsBeforeCleaning(Uint64 &value)
{
	_maxUnitsBeforeCleaning = value;
}

Boolean UNIX_DisketteDrive::getUnitsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_USED, getUnitsUsed());
	return true;
}

Uint64 UNIX_DisketteDrive::getUnitsUsed() const
{
	return _unitsUsed;
}

void UNIX_DisketteDrive::setUnitsUsed(Uint64 &value)
{
	_unitsUsed = value;
}


void UNIX_DisketteDrive::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DisketteDrive");
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
	_creationClassName = String("UNIX_DisketteDrive");
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
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_errorMethodology = String ("");
	_compressionMethod = String ("");
	_numberOfMediaSupported = Uint32(0);
	_maxMediaSize = Uint64(0);
	_defaultBlockSize = Uint64(0);
	_maxBlockSize = Uint64(0);
	_minBlockSize = Uint64(0);
	_needsCleaning = Boolean(false);
	_mediaIsLocked = Boolean(false);
	_security = Uint16(0);
	_lastCleaned = CIMHelper::getCurrentTime();
	_maxAccessTime = Uint64(0);
	_uncompressedDataRate = Uint32(0);
	_loadTime = Uint64(0);
	_unloadTime = Uint64(0);
	_mountCount = Uint64(0);
	_timeOfLastMount = CIMHelper::getCurrentTime();
	_totalMountTime = Uint64(0);
	_unitsDescription = String ("");
	_maxUnitsBeforeCleaning = Uint64(0);
	_unitsUsed = Uint64(0);

}

Boolean UNIX_DisketteDrive::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Capabilities"))
			{
				Array<Uint16> capabilitiesValue;
				property.getValue().get(capabilitiesValue);
				setCapabilities(capabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "CapabilityDescriptions"))
			{
				Array<String> capabilityDescriptionsValue;
				property.getValue().get(capabilityDescriptionsValue);
				setCapabilityDescriptions(capabilityDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorMethodology"))
			{
				String errorMethodologyValue;
				property.getValue().get(errorMethodologyValue);
				setErrorMethodology(errorMethodologyValue);
			}
			else if (String::equal(property.getName().getString(), "CompressionMethod"))
			{
				String compressionMethodValue;
				property.getValue().get(compressionMethodValue);
				setCompressionMethod(compressionMethodValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfMediaSupported"))
			{
				Uint32 numberOfMediaSupportedValue;
				property.getValue().get(numberOfMediaSupportedValue);
				setNumberOfMediaSupported(numberOfMediaSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxMediaSize"))
			{
				Uint64 maxMediaSizeValue;
				property.getValue().get(maxMediaSizeValue);
				setMaxMediaSize(maxMediaSizeValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultBlockSize"))
			{
				Uint64 defaultBlockSizeValue;
				property.getValue().get(defaultBlockSizeValue);
				setDefaultBlockSize(defaultBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxBlockSize"))
			{
				Uint64 maxBlockSizeValue;
				property.getValue().get(maxBlockSizeValue);
				setMaxBlockSize(maxBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MinBlockSize"))
			{
				Uint64 minBlockSizeValue;
				property.getValue().get(minBlockSizeValue);
				setMinBlockSize(minBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "NeedsCleaning"))
			{
				Boolean needsCleaningValue;
				property.getValue().get(needsCleaningValue);
				setNeedsCleaning(needsCleaningValue);
			}
			else if (String::equal(property.getName().getString(), "MediaIsLocked"))
			{
				Boolean mediaIsLockedValue;
				property.getValue().get(mediaIsLockedValue);
				setMediaIsLocked(mediaIsLockedValue);
			}
			else if (String::equal(property.getName().getString(), "Security"))
			{
				Uint16 securityValue;
				property.getValue().get(securityValue);
				setSecurity(securityValue);
			}
			else if (String::equal(property.getName().getString(), "LastCleaned"))
			{
				CIMDateTime lastCleanedValue;
				property.getValue().get(lastCleanedValue);
				setLastCleaned(lastCleanedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxAccessTime"))
			{
				Uint64 maxAccessTimeValue;
				property.getValue().get(maxAccessTimeValue);
				setMaxAccessTime(maxAccessTimeValue);
			}
			else if (String::equal(property.getName().getString(), "UncompressedDataRate"))
			{
				Uint32 uncompressedDataRateValue;
				property.getValue().get(uncompressedDataRateValue);
				setUncompressedDataRate(uncompressedDataRateValue);
			}
			else if (String::equal(property.getName().getString(), "LoadTime"))
			{
				Uint64 loadTimeValue;
				property.getValue().get(loadTimeValue);
				setLoadTime(loadTimeValue);
			}
			else if (String::equal(property.getName().getString(), "UnloadTime"))
			{
				Uint64 unloadTimeValue;
				property.getValue().get(unloadTimeValue);
				setUnloadTime(unloadTimeValue);
			}
			else if (String::equal(property.getName().getString(), "MountCount"))
			{
				Uint64 mountCountValue;
				property.getValue().get(mountCountValue);
				setMountCount(mountCountValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastMount"))
			{
				CIMDateTime timeOfLastMountValue;
				property.getValue().get(timeOfLastMountValue);
				setTimeOfLastMount(timeOfLastMountValue);
			}
			else if (String::equal(property.getName().getString(), "TotalMountTime"))
			{
				Uint64 totalMountTimeValue;
				property.getValue().get(totalMountTimeValue);
				setTotalMountTime(totalMountTimeValue);
			}
			else if (String::equal(property.getName().getString(), "UnitsDescription"))
			{
				String unitsDescriptionValue;
				property.getValue().get(unitsDescriptionValue);
				setUnitsDescription(unitsDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "MaxUnitsBeforeCleaning"))
			{
				Uint64 maxUnitsBeforeCleaningValue;
				property.getValue().get(maxUnitsBeforeCleaningValue);
				setMaxUnitsBeforeCleaning(maxUnitsBeforeCleaningValue);
			}
			else if (String::equal(property.getName().getString(), "UnitsUsed"))
			{
				Uint64 unitsUsedValue;
				property.getValue().get(unitsUsedValue);
				setUnitsUsed(unitsUsedValue);
			}
	}
	return true;
}

Uint32 UNIX_DisketteDrive::invokeRequestStateChange(
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

Uint32 UNIX_DisketteDrive::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_DisketteDrive::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_DisketteDrive::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DisketteDrive::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DisketteDrive::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DisketteDrive::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_DisketteDrive::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_DisketteDrive::invokeLockMedia(
		Boolean &inLock
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method LockMedia */
	
	
	
	return returnValue;
}


Boolean UNIX_DisketteDrive::initialize()
{
	return false;
}

Boolean UNIX_DisketteDrive::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DisketteDrive");
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
	_creationClassName = String("UNIX_DisketteDrive");
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
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_errorMethodology = String ("");
	_compressionMethod = String ("");
	_numberOfMediaSupported = Uint32(0);
	_maxMediaSize = Uint64(0);
	_defaultBlockSize = Uint64(0);
	_maxBlockSize = Uint64(0);
	_minBlockSize = Uint64(0);
	_needsCleaning = Boolean(false);
	_mediaIsLocked = Boolean(false);
	_security = Uint16(0);
	_lastCleaned = CIMHelper::getCurrentTime();
	_maxAccessTime = Uint64(0);
	_uncompressedDataRate = Uint32(0);
	_loadTime = Uint64(0);
	_unloadTime = Uint64(0);
	_mountCount = Uint64(0);
	_timeOfLastMount = CIMHelper::getCurrentTime();
	_totalMountTime = Uint64(0);
	_unitsDescription = String ("");
	_maxUnitsBeforeCleaning = Uint64(0);
	_unitsUsed = Uint64(0);
	
	return false;
}

Boolean UNIX_DisketteDrive::finalize()
{
	return false;
}

Boolean UNIX_DisketteDrive::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DisketteDrive::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DisketteDrive::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DisketteDrive::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DisketteDrive::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DisketteDrive::validateInstance()
{
	return true;
}

