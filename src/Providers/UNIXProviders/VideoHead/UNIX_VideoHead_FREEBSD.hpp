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


UNIX_VideoHead::UNIX_VideoHead(void)
{
}

UNIX_VideoHead::~UNIX_VideoHead(void)
{
}

Boolean UNIX_VideoHead::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VideoHead::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VideoHead::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VideoHead::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VideoHead::getCaption() const
{
	return _caption;
}

void UNIX_VideoHead::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VideoHead::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VideoHead::getDescription() const
{
	return _description;
}

void UNIX_VideoHead::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VideoHead::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VideoHead::getElementName() const
{
	return _elementName;
}

void UNIX_VideoHead::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VideoHead::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VideoHead::getGeneration() const
{
	return _generation;
}

void UNIX_VideoHead::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VideoHead::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VideoHead::getInstallDate() const
{
	return _installDate;
}

void UNIX_VideoHead::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_VideoHead::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VideoHead::getName() const
{
	return _name;
}

void UNIX_VideoHead::setName(String &value)
{
	_name = value;
}

Boolean UNIX_VideoHead::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VideoHead::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_VideoHead::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_VideoHead::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VideoHead::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_VideoHead::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_VideoHead::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VideoHead::getStatus() const
{
	return _status;
}

void UNIX_VideoHead::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_VideoHead::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VideoHead::getHealthState() const
{
	return _healthState;
}

void UNIX_VideoHead::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_VideoHead::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VideoHead::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_VideoHead::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_VideoHead::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VideoHead::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_VideoHead::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_VideoHead::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VideoHead::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_VideoHead::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_VideoHead::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VideoHead::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_VideoHead::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_VideoHead::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VideoHead::getEnabledState() const
{
	return _enabledState;
}

void UNIX_VideoHead::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_VideoHead::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VideoHead::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_VideoHead::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_VideoHead::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VideoHead::getRequestedState() const
{
	return _requestedState;
}

void UNIX_VideoHead::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_VideoHead::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VideoHead::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_VideoHead::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_VideoHead::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VideoHead::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_VideoHead::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_VideoHead::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VideoHead::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_VideoHead::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_VideoHead::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VideoHead::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_VideoHead::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_VideoHead::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_VideoHead::getAllocationState() const
{
	return _allocationState;
}

void UNIX_VideoHead::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_VideoHead::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VideoHead::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_VideoHead::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_VideoHead::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VideoHead::getSystemName() const
{
	return _systemName;
}

void UNIX_VideoHead::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_VideoHead::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VideoHead::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_VideoHead::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_VideoHead::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_VideoHead::getDeviceID() const
{
	return _deviceID;
}

void UNIX_VideoHead::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_VideoHead::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_VideoHead::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_VideoHead::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_VideoHead::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_VideoHead::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_VideoHead::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_VideoHead::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_VideoHead::getAvailability() const
{
	return _availability;
}

void UNIX_VideoHead::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_VideoHead::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_VideoHead::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_VideoHead::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_VideoHead::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_VideoHead::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_VideoHead::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_VideoHead::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_VideoHead::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_VideoHead::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_VideoHead::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_VideoHead::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_VideoHead::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_VideoHead::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VideoHead::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_VideoHead::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_VideoHead::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_VideoHead::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_VideoHead::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_VideoHead::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_VideoHead::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_VideoHead::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_VideoHead::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VideoHead::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_VideoHead::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_VideoHead::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_VideoHead::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_VideoHead::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_VideoHead::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_VideoHead::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_VideoHead::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_VideoHead::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_VideoHead::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_VideoHead::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_VideoHead::getCurrentBitsPerPixel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BITS_PER_PIXEL, getCurrentBitsPerPixel());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentBitsPerPixel() const
{
	return _currentBitsPerPixel;
}

void UNIX_VideoHead::setCurrentBitsPerPixel(Uint32 &value)
{
	_currentBitsPerPixel = value;
}

Boolean UNIX_VideoHead::getCurrentHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_HORIZONTAL_RESOLUTION, getCurrentHorizontalResolution());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentHorizontalResolution() const
{
	return _currentHorizontalResolution;
}

void UNIX_VideoHead::setCurrentHorizontalResolution(Uint32 &value)
{
	_currentHorizontalResolution = value;
}

Boolean UNIX_VideoHead::getCurrentVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VERTICAL_RESOLUTION, getCurrentVerticalResolution());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentVerticalResolution() const
{
	return _currentVerticalResolution;
}

void UNIX_VideoHead::setCurrentVerticalResolution(Uint32 &value)
{
	_currentVerticalResolution = value;
}

Boolean UNIX_VideoHead::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_VideoHead::getMaxRefreshRate() const
{
	return _maxRefreshRate;
}

void UNIX_VideoHead::setMaxRefreshRate(Uint32 &value)
{
	_maxRefreshRate = value;
}

Boolean UNIX_VideoHead::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_VideoHead::getMinRefreshRate() const
{
	return _minRefreshRate;
}

void UNIX_VideoHead::setMinRefreshRate(Uint32 &value)
{
	_minRefreshRate = value;
}

Boolean UNIX_VideoHead::getCurrentRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_REFRESH_RATE, getCurrentRefreshRate());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentRefreshRate() const
{
	return _currentRefreshRate;
}

void UNIX_VideoHead::setCurrentRefreshRate(Uint32 &value)
{
	_currentRefreshRate = value;
}

Boolean UNIX_VideoHead::getCurrentScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_SCAN_MODE, getCurrentScanMode());
	return true;
}

Uint16 UNIX_VideoHead::getCurrentScanMode() const
{
	return _currentScanMode;
}

void UNIX_VideoHead::setCurrentScanMode(Uint16 &value)
{
	_currentScanMode = value;
}

Boolean UNIX_VideoHead::getOtherCurrentScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CURRENT_SCAN_MODE, getOtherCurrentScanMode());
	return true;
}

String UNIX_VideoHead::getOtherCurrentScanMode() const
{
	return _otherCurrentScanMode;
}

void UNIX_VideoHead::setOtherCurrentScanMode(String &value)
{
	_otherCurrentScanMode = value;
}

Boolean UNIX_VideoHead::getCurrentNumberOfRows(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_ROWS, getCurrentNumberOfRows());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentNumberOfRows() const
{
	return _currentNumberOfRows;
}

void UNIX_VideoHead::setCurrentNumberOfRows(Uint32 &value)
{
	_currentNumberOfRows = value;
}

Boolean UNIX_VideoHead::getCurrentNumberOfColumns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLUMNS, getCurrentNumberOfColumns());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentNumberOfColumns() const
{
	return _currentNumberOfColumns;
}

void UNIX_VideoHead::setCurrentNumberOfColumns(Uint32 &value)
{
	_currentNumberOfColumns = value;
}

Boolean UNIX_VideoHead::getCurrentNumberOfColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLORS, getCurrentNumberOfColors());
	return true;
}

Uint64 UNIX_VideoHead::getCurrentNumberOfColors() const
{
	return _currentNumberOfColors;
}

void UNIX_VideoHead::setCurrentNumberOfColors(Uint64 &value)
{
	_currentNumberOfColors = value;
}


void UNIX_VideoHead::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoHead");
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
	_creationClassName = String("UNIX_VideoHead");
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
	_currentBitsPerPixel = Uint32(0);
	_currentHorizontalResolution = Uint32(0);
	_currentVerticalResolution = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_currentRefreshRate = Uint32(0);
	_currentScanMode = Uint16(0);
	_otherCurrentScanMode = String ("");
	_currentNumberOfRows = Uint32(0);
	_currentNumberOfColumns = Uint32(0);
	_currentNumberOfColors = Uint64(0);

}

Boolean UNIX_VideoHead::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentBitsPerPixel"))
			{
				Uint32 currentBitsPerPixelValue;
				property.getValue().get(currentBitsPerPixelValue);
				setCurrentBitsPerPixel(currentBitsPerPixelValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentHorizontalResolution"))
			{
				Uint32 currentHorizontalResolutionValue;
				property.getValue().get(currentHorizontalResolutionValue);
				setCurrentHorizontalResolution(currentHorizontalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentVerticalResolution"))
			{
				Uint32 currentVerticalResolutionValue;
				property.getValue().get(currentVerticalResolutionValue);
				setCurrentVerticalResolution(currentVerticalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "MaxRefreshRate"))
			{
				Uint32 maxRefreshRateValue;
				property.getValue().get(maxRefreshRateValue);
				setMaxRefreshRate(maxRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "MinRefreshRate"))
			{
				Uint32 minRefreshRateValue;
				property.getValue().get(minRefreshRateValue);
				setMinRefreshRate(minRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentRefreshRate"))
			{
				Uint32 currentRefreshRateValue;
				property.getValue().get(currentRefreshRateValue);
				setCurrentRefreshRate(currentRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentScanMode"))
			{
				Uint16 currentScanModeValue;
				property.getValue().get(currentScanModeValue);
				setCurrentScanMode(currentScanModeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCurrentScanMode"))
			{
				String otherCurrentScanModeValue;
				property.getValue().get(otherCurrentScanModeValue);
				setOtherCurrentScanMode(otherCurrentScanModeValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentNumberOfRows"))
			{
				Uint32 currentNumberOfRowsValue;
				property.getValue().get(currentNumberOfRowsValue);
				setCurrentNumberOfRows(currentNumberOfRowsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentNumberOfColumns"))
			{
				Uint32 currentNumberOfColumnsValue;
				property.getValue().get(currentNumberOfColumnsValue);
				setCurrentNumberOfColumns(currentNumberOfColumnsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentNumberOfColors"))
			{
				Uint64 currentNumberOfColorsValue;
				property.getValue().get(currentNumberOfColorsValue);
				setCurrentNumberOfColors(currentNumberOfColorsValue);
			}
	}
	return true;
}

Uint32 UNIX_VideoHead::invokeRequestStateChange(
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

Uint32 UNIX_VideoHead::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_VideoHead::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_VideoHead::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VideoHead::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VideoHead::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_VideoHead::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_VideoHead::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_VideoHead::initialize()
{
	return false;
}

Boolean UNIX_VideoHead::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoHead");
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
	_creationClassName = String("UNIX_VideoHead");
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
	_currentBitsPerPixel = Uint32(0);
	_currentHorizontalResolution = Uint32(0);
	_currentVerticalResolution = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_currentRefreshRate = Uint32(0);
	_currentScanMode = Uint16(0);
	_otherCurrentScanMode = String ("");
	_currentNumberOfRows = Uint32(0);
	_currentNumberOfColumns = Uint32(0);
	_currentNumberOfColors = Uint64(0);
	
	return false;
}

Boolean UNIX_VideoHead::finalize()
{
	return false;
}

Boolean UNIX_VideoHead::loadByName(const String name)
{
	return false;
}

Boolean UNIX_VideoHead::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VideoHead::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoHead::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoHead::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoHead::validateInstance()
{
	return true;
}

