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


UNIX_DVDDrive::UNIX_DVDDrive(void)
{
}

UNIX_DVDDrive::~UNIX_DVDDrive(void)
{
}

Boolean UNIX_DVDDrive::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DVDDrive::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DVDDrive::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DVDDrive::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DVDDrive::getCaption() const
{
	return _caption;
}

void UNIX_DVDDrive::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DVDDrive::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DVDDrive::getDescription() const
{
	return _description;
}

void UNIX_DVDDrive::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DVDDrive::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DVDDrive::getElementName() const
{
	return _elementName;
}

void UNIX_DVDDrive::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DVDDrive::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DVDDrive::getGeneration() const
{
	return _generation;
}

void UNIX_DVDDrive::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DVDDrive::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DVDDrive::getInstallDate() const
{
	return _installDate;
}

void UNIX_DVDDrive::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DVDDrive::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DVDDrive::getName() const
{
	return _name;
}

void UNIX_DVDDrive::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DVDDrive::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DVDDrive::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DVDDrive::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DVDDrive::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DVDDrive::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DVDDrive::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DVDDrive::getStatus() const
{
	return _status;
}

void UNIX_DVDDrive::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DVDDrive::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DVDDrive::getHealthState() const
{
	return _healthState;
}

void UNIX_DVDDrive::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DVDDrive::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DVDDrive::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DVDDrive::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DVDDrive::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DVDDrive::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DVDDrive::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DVDDrive::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DVDDrive::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DVDDrive::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DVDDrive::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DVDDrive::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DVDDrive::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DVDDrive::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DVDDrive::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DVDDrive::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DVDDrive::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DVDDrive::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DVDDrive::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DVDDrive::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DVDDrive::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DVDDrive::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DVDDrive::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DVDDrive::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DVDDrive::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DVDDrive::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DVDDrive::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DVDDrive::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DVDDrive::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DVDDrive::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DVDDrive::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DVDDrive::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DVDDrive::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DVDDrive::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_DVDDrive::getAllocationState() const
{
	return _allocationState;
}

void UNIX_DVDDrive::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_DVDDrive::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DVDDrive::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DVDDrive::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DVDDrive::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DVDDrive::getSystemName() const
{
	return _systemName;
}

void UNIX_DVDDrive::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DVDDrive::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DVDDrive::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DVDDrive::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DVDDrive::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DVDDrive::getDeviceID() const
{
	return _deviceID;
}

void UNIX_DVDDrive::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_DVDDrive::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DVDDrive::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_DVDDrive::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_DVDDrive::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_DVDDrive::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_DVDDrive::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DVDDrive::getAvailability() const
{
	return _availability;
}

void UNIX_DVDDrive::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_DVDDrive::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DVDDrive::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_DVDDrive::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_DVDDrive::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DVDDrive::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_DVDDrive::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_DVDDrive::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DVDDrive::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_DVDDrive::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_DVDDrive::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DVDDrive::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_DVDDrive::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_DVDDrive::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DVDDrive::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_DVDDrive::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_DVDDrive::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DVDDrive::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_DVDDrive::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_DVDDrive::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DVDDrive::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_DVDDrive::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_DVDDrive::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DVDDrive::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_DVDDrive::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_DVDDrive::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_DVDDrive::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_DVDDrive::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_DVDDrive::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_DVDDrive::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_DVDDrive::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_DVDDrive::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_DVDDrive::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getCapabilities() const
{
	return _capabilities;
}

void UNIX_DVDDrive::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_DVDDrive::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_DVDDrive::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_DVDDrive::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_DVDDrive::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_DVDDrive::getErrorMethodology() const
{
	return _errorMethodology;
}

void UNIX_DVDDrive::setErrorMethodology(String &value)
{
	_errorMethodology = value;
}

Boolean UNIX_DVDDrive::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_DVDDrive::getCompressionMethod() const
{
	return _compressionMethod;
}

void UNIX_DVDDrive::setCompressionMethod(String &value)
{
	_compressionMethod = value;
}

Boolean UNIX_DVDDrive::getNumberOfMediaSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_MEDIA_SUPPORTED, getNumberOfMediaSupported());
	return true;
}

Uint32 UNIX_DVDDrive::getNumberOfMediaSupported() const
{
	return _numberOfMediaSupported;
}

void UNIX_DVDDrive::setNumberOfMediaSupported(Uint32 &value)
{
	_numberOfMediaSupported = value;
}

Boolean UNIX_DVDDrive::getMaxMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE, getMaxMediaSize());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxMediaSize() const
{
	return _maxMediaSize;
}

void UNIX_DVDDrive::setMaxMediaSize(Uint64 &value)
{
	_maxMediaSize = value;
}

Boolean UNIX_DVDDrive::getDefaultBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_BLOCK_SIZE, getDefaultBlockSize());
	return true;
}

Uint64 UNIX_DVDDrive::getDefaultBlockSize() const
{
	return _defaultBlockSize;
}

void UNIX_DVDDrive::setDefaultBlockSize(Uint64 &value)
{
	_defaultBlockSize = value;
}

Boolean UNIX_DVDDrive::getMaxBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BLOCK_SIZE, getMaxBlockSize());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxBlockSize() const
{
	return _maxBlockSize;
}

void UNIX_DVDDrive::setMaxBlockSize(Uint64 &value)
{
	_maxBlockSize = value;
}

Boolean UNIX_DVDDrive::getMinBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BLOCK_SIZE, getMinBlockSize());
	return true;
}

Uint64 UNIX_DVDDrive::getMinBlockSize() const
{
	return _minBlockSize;
}

void UNIX_DVDDrive::setMinBlockSize(Uint64 &value)
{
	_minBlockSize = value;
}

Boolean UNIX_DVDDrive::getNeedsCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEEDS_CLEANING, getNeedsCleaning());
	return true;
}

Boolean UNIX_DVDDrive::getNeedsCleaning() const
{
	return _needsCleaning;
}

void UNIX_DVDDrive::setNeedsCleaning(Boolean &value)
{
	_needsCleaning = value;
}

Boolean UNIX_DVDDrive::getMediaIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_IS_LOCKED, getMediaIsLocked());
	return true;
}

Boolean UNIX_DVDDrive::getMediaIsLocked() const
{
	return _mediaIsLocked;
}

void UNIX_DVDDrive::setMediaIsLocked(Boolean &value)
{
	_mediaIsLocked = value;
}

Boolean UNIX_DVDDrive::getSecurity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY, getSecurity());
	return true;
}

Uint16 UNIX_DVDDrive::getSecurity() const
{
	return _security;
}

void UNIX_DVDDrive::setSecurity(Uint16 &value)
{
	_security = value;
}

Boolean UNIX_DVDDrive::getLastCleaned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CLEANED, getLastCleaned());
	return true;
}

CIMDateTime UNIX_DVDDrive::getLastCleaned() const
{
	return _lastCleaned;
}

void UNIX_DVDDrive::setLastCleaned(CIMDateTime &value)
{
	_lastCleaned = value;
}

Boolean UNIX_DVDDrive::getMaxAccessTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACCESS_TIME, getMaxAccessTime());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxAccessTime() const
{
	return _maxAccessTime;
}

void UNIX_DVDDrive::setMaxAccessTime(Uint64 &value)
{
	_maxAccessTime = value;
}

Boolean UNIX_DVDDrive::getUncompressedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNCOMPRESSED_DATA_RATE, getUncompressedDataRate());
	return true;
}

Uint32 UNIX_DVDDrive::getUncompressedDataRate() const
{
	return _uncompressedDataRate;
}

void UNIX_DVDDrive::setUncompressedDataRate(Uint32 &value)
{
	_uncompressedDataRate = value;
}

Boolean UNIX_DVDDrive::getLoadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TIME, getLoadTime());
	return true;
}

Uint64 UNIX_DVDDrive::getLoadTime() const
{
	return _loadTime;
}

void UNIX_DVDDrive::setLoadTime(Uint64 &value)
{
	_loadTime = value;
}

Boolean UNIX_DVDDrive::getUnloadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_TIME, getUnloadTime());
	return true;
}

Uint64 UNIX_DVDDrive::getUnloadTime() const
{
	return _unloadTime;
}

void UNIX_DVDDrive::setUnloadTime(Uint64 &value)
{
	_unloadTime = value;
}

Boolean UNIX_DVDDrive::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_DVDDrive::getMountCount() const
{
	return _mountCount;
}

void UNIX_DVDDrive::setMountCount(Uint64 &value)
{
	_mountCount = value;
}

Boolean UNIX_DVDDrive::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_DVDDrive::getTimeOfLastMount() const
{
	return _timeOfLastMount;
}

void UNIX_DVDDrive::setTimeOfLastMount(CIMDateTime &value)
{
	_timeOfLastMount = value;
}

Boolean UNIX_DVDDrive::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_DVDDrive::getTotalMountTime() const
{
	return _totalMountTime;
}

void UNIX_DVDDrive::setTotalMountTime(Uint64 &value)
{
	_totalMountTime = value;
}

Boolean UNIX_DVDDrive::getUnitsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_DESCRIPTION, getUnitsDescription());
	return true;
}

String UNIX_DVDDrive::getUnitsDescription() const
{
	return _unitsDescription;
}

void UNIX_DVDDrive::setUnitsDescription(String &value)
{
	_unitsDescription = value;
}

Boolean UNIX_DVDDrive::getMaxUnitsBeforeCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_BEFORE_CLEANING, getMaxUnitsBeforeCleaning());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxUnitsBeforeCleaning() const
{
	return _maxUnitsBeforeCleaning;
}

void UNIX_DVDDrive::setMaxUnitsBeforeCleaning(Uint64 &value)
{
	_maxUnitsBeforeCleaning = value;
}

Boolean UNIX_DVDDrive::getUnitsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_USED, getUnitsUsed());
	return true;
}

Uint64 UNIX_DVDDrive::getUnitsUsed() const
{
	return _unitsUsed;
}

void UNIX_DVDDrive::setUnitsUsed(Uint64 &value)
{
	_unitsUsed = value;
}

Boolean UNIX_DVDDrive::getFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORMATS_SUPPORTED, getFormatsSupported());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getFormatsSupported() const
{
	return _formatsSupported;
}

void UNIX_DVDDrive::setFormatsSupported(Array<Uint16> &value)
{
	_formatsSupported = value;
}


void UNIX_DVDDrive::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DVDDrive");
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
	_creationClassName = String("UNIX_DVDDrive");
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
	_formatsSupported.clear();

}

Boolean UNIX_DVDDrive::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FormatsSupported"))
			{
				Array<Uint16> formatsSupportedValue;
				property.getValue().get(formatsSupportedValue);
				setFormatsSupported(formatsSupportedValue);
			}
	}
	return true;
}

Uint32 UNIX_DVDDrive::invokeRequestStateChange(
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

Uint32 UNIX_DVDDrive::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_DVDDrive::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_DVDDrive::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DVDDrive::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DVDDrive::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_DVDDrive::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_DVDDrive::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_DVDDrive::invokeLockMedia(
		Boolean &inLock
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method LockMedia */
	
	
	
	return returnValue;
}


Boolean UNIX_DVDDrive::initialize()
{
	return false;
}

Boolean UNIX_DVDDrive::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DVDDrive");
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
	_creationClassName = String("UNIX_DVDDrive");
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
	_formatsSupported.clear();
	
	return false;
}

Boolean UNIX_DVDDrive::finalize()
{
	return false;
}

Boolean UNIX_DVDDrive::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DVDDrive::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DVDDrive::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DVDDrive::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DVDDrive::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DVDDrive::validateInstance()
{
	return true;
}

