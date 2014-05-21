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

#include <sys/sysctl.h>

UNIX_Processor::UNIX_Processor(void)
{
}

UNIX_Processor::~UNIX_Processor(void)
{
}

Boolean UNIX_Processor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Processor::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Processor::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Processor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Processor::getCaption() const
{
	return _caption;
}

void UNIX_Processor::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Processor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Processor::getDescription() const
{
	return _description;
}

void UNIX_Processor::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Processor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Processor::getElementName() const
{
	return _elementName;
}

void UNIX_Processor::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Processor::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Processor::getGeneration() const
{
	return _generation;
}

void UNIX_Processor::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Processor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Processor::getInstallDate() const
{
	return _installDate;
}

void UNIX_Processor::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Processor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Processor::getName() const
{
	return _name;
}

void UNIX_Processor::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Processor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Processor::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Processor::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Processor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Processor::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Processor::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Processor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Processor::getStatus() const
{
	return _status;
}

void UNIX_Processor::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Processor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Processor::getHealthState() const
{
	return _healthState;
}

void UNIX_Processor::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Processor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Processor::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Processor::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Processor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Processor::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Processor::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Processor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Processor::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Processor::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Processor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Processor::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Processor::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Processor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Processor::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Processor::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Processor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Processor::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Processor::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Processor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Processor::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Processor::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Processor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Processor::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Processor::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Processor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Processor::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Processor::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Processor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Processor::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Processor::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Processor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Processor::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Processor::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Processor::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_Processor::getAllocationState() const
{
	return _allocationState;
}

void UNIX_Processor::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_Processor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Processor::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Processor::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Processor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Processor::getSystemName() const
{
	return _systemName;
}

void UNIX_Processor::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Processor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Processor::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Processor::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Processor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Processor::getDeviceID() const
{
	return _deviceID;
}

void UNIX_Processor::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_Processor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Processor::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_Processor::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_Processor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Processor::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_Processor::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_Processor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Processor::getAvailability() const
{
	return _availability;
}

void UNIX_Processor::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_Processor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Processor::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_Processor::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_Processor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Processor::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_Processor::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_Processor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Processor::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_Processor::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_Processor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Processor::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_Processor::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_Processor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Processor::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Processor::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Processor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Processor::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_Processor::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_Processor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Processor::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_Processor::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_Processor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Processor::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_Processor::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_Processor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Processor::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_Processor::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_Processor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Processor::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_Processor::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_Processor::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_Processor::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_Processor::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_Processor::getRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLE, getRole());
	return true;
}

String UNIX_Processor::getRole() const
{
	return _role;
}

void UNIX_Processor::setRole(String &value)
{
	_role = value;
}

Boolean UNIX_Processor::getFamily(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAMILY, getFamily());
	return true;
}

Uint16 UNIX_Processor::getFamily() const
{
	return _family;
}

void UNIX_Processor::setFamily(Uint16 &value)
{
	_family = value;
}

Boolean UNIX_Processor::getOtherFamilyDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_FAMILY_DESCRIPTION, getOtherFamilyDescription());
	return true;
}

String UNIX_Processor::getOtherFamilyDescription() const
{
	return _otherFamilyDescription;
}

void UNIX_Processor::setOtherFamilyDescription(String &value)
{
	_otherFamilyDescription = value;
}

Boolean UNIX_Processor::getUpgradeMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPGRADE_METHOD, getUpgradeMethod());
	return true;
}

Uint16 UNIX_Processor::getUpgradeMethod() const
{
	return _upgradeMethod;
}

void UNIX_Processor::setUpgradeMethod(Uint16 &value)
{
	_upgradeMethod = value;
}

Boolean UNIX_Processor::getMaxClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CLOCK_SPEED, getMaxClockSpeed());
	return true;
}

Uint32 UNIX_Processor::getMaxClockSpeed() const
{
	return _maxClockSpeed;
}

void UNIX_Processor::setMaxClockSpeed(Uint32 &value)
{
	_maxClockSpeed = value;
}

Boolean UNIX_Processor::getCurrentClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CLOCK_SPEED, getCurrentClockSpeed());
	return true;
}

Uint32 UNIX_Processor::getCurrentClockSpeed() const
{
	return _currentClockSpeed;
}

void UNIX_Processor::setCurrentClockSpeed(Uint32 &value)
{
	_currentClockSpeed = value;
}

Boolean UNIX_Processor::getDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_WIDTH, getDataWidth());
	return true;
}

Uint16 UNIX_Processor::getDataWidth() const
{
	return _dataWidth;
}

void UNIX_Processor::setDataWidth(Uint16 &value)
{
	_dataWidth = value;
}

Boolean UNIX_Processor::getAddressWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_WIDTH, getAddressWidth());
	return true;
}

Uint16 UNIX_Processor::getAddressWidth() const
{
	return _addressWidth;
}

void UNIX_Processor::setAddressWidth(Uint16 &value)
{
	_addressWidth = value;
}

Boolean UNIX_Processor::getLoadPercentage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_PERCENTAGE, getLoadPercentage());
	return true;
}

Uint16 UNIX_Processor::getLoadPercentage() const
{
	return _loadPercentage;
}

void UNIX_Processor::setLoadPercentage(Uint16 &value)
{
	_loadPercentage = value;
}

Boolean UNIX_Processor::getStepping(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STEPPING, getStepping());
	return true;
}

String UNIX_Processor::getStepping() const
{
	return _stepping;
}

void UNIX_Processor::setStepping(String &value)
{
	_stepping = value;
}

Boolean UNIX_Processor::getUniqueID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_ID, getUniqueID());
	return true;
}

String UNIX_Processor::getUniqueID() const
{
	return _uniqueID;
}

void UNIX_Processor::setUniqueID(String &value)
{
	_uniqueID = value;
}

Boolean UNIX_Processor::getCPUStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CPU_STATUS, getCPUStatus());
	return true;
}

Uint16 UNIX_Processor::getCPUStatus() const
{
	return _cPUStatus;
}

void UNIX_Processor::setCPUStatus(Uint16 &value)
{
	_cPUStatus = value;
}

Boolean UNIX_Processor::getExternalBusClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTERNAL_BUS_CLOCK_SPEED, getExternalBusClockSpeed());
	return true;
}

Uint32 UNIX_Processor::getExternalBusClockSpeed() const
{
	return _externalBusClockSpeed;
}

void UNIX_Processor::setExternalBusClockSpeed(Uint32 &value)
{
	_externalBusClockSpeed = value;
}

Boolean UNIX_Processor::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_Processor::getCharacteristics() const
{
	return _characteristics;
}

void UNIX_Processor::setCharacteristics(Array<Uint16> &value)
{
	_characteristics = value;
}

Boolean UNIX_Processor::getEnabledProcessorCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_PROCESSOR_CHARACTERISTICS, getEnabledProcessorCharacteristics());
	return true;
}

Array<Uint16> UNIX_Processor::getEnabledProcessorCharacteristics() const
{
	return _enabledProcessorCharacteristics;
}

void UNIX_Processor::setEnabledProcessorCharacteristics(Array<Uint16> &value)
{
	_enabledProcessorCharacteristics = value;
}

Boolean UNIX_Processor::getNumberOfEnabledCores(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_ENABLED_CORES, getNumberOfEnabledCores());
	return true;
}

Uint16 UNIX_Processor::getNumberOfEnabledCores() const
{
	return _numberOfEnabledCores;
}

void UNIX_Processor::setNumberOfEnabledCores(Uint16 &value)
{
	_numberOfEnabledCores = value;
}

void UNIX_Processor::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Processor");
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
	_creationClassName = String("UNIX_Processor");
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
	_role = String ("");
	_family = Uint16(0);
	_otherFamilyDescription = String ("");
	_upgradeMethod = Uint16(0);
	_maxClockSpeed = Uint32(0);
	_currentClockSpeed = Uint32(0);
	_dataWidth = Uint16(0);
	_addressWidth = Uint16(0);
	_loadPercentage = Uint16(0);
	_stepping = String ("");
	_uniqueID = String ("");
	_cPUStatus = Uint16(0);
	_externalBusClockSpeed = Uint32(0);
	_characteristics.clear();
	_enabledProcessorCharacteristics.clear();
	_numberOfEnabledCores = Uint16(0);

}

Boolean UNIX_Processor::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Role"))
			{
				String roleValue;
				property.getValue().get(roleValue);
				setRole(roleValue);
			}
			else if (String::equal(property.getName().getString(), "Family"))
			{
				Uint16 familyValue;
				property.getValue().get(familyValue);
				setFamily(familyValue);
			}
			else if (String::equal(property.getName().getString(), "OtherFamilyDescription"))
			{
				String otherFamilyDescriptionValue;
				property.getValue().get(otherFamilyDescriptionValue);
				setOtherFamilyDescription(otherFamilyDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "UpgradeMethod"))
			{
				Uint16 upgradeMethodValue;
				property.getValue().get(upgradeMethodValue);
				setUpgradeMethod(upgradeMethodValue);
			}
			else if (String::equal(property.getName().getString(), "MaxClockSpeed"))
			{
				Uint32 maxClockSpeedValue;
				property.getValue().get(maxClockSpeedValue);
				setMaxClockSpeed(maxClockSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentClockSpeed"))
			{
				Uint32 currentClockSpeedValue;
				property.getValue().get(currentClockSpeedValue);
				setCurrentClockSpeed(currentClockSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "DataWidth"))
			{
				Uint16 dataWidthValue;
				property.getValue().get(dataWidthValue);
				setDataWidth(dataWidthValue);
			}
			else if (String::equal(property.getName().getString(), "AddressWidth"))
			{
				Uint16 addressWidthValue;
				property.getValue().get(addressWidthValue);
				setAddressWidth(addressWidthValue);
			}
			else if (String::equal(property.getName().getString(), "LoadPercentage"))
			{
				Uint16 loadPercentageValue;
				property.getValue().get(loadPercentageValue);
				setLoadPercentage(loadPercentageValue);
			}
			else if (String::equal(property.getName().getString(), "Stepping"))
			{
				String steppingValue;
				property.getValue().get(steppingValue);
				setStepping(steppingValue);
			}
			else if (String::equal(property.getName().getString(), "UniqueID"))
			{
				String uniqueIDValue;
				property.getValue().get(uniqueIDValue);
				setUniqueID(uniqueIDValue);
			}
			else if (String::equal(property.getName().getString(), "CPUStatus"))
			{
				Uint16 cPUStatusValue;
				property.getValue().get(cPUStatusValue);
				setCPUStatus(cPUStatusValue);
			}
			else if (String::equal(property.getName().getString(), "ExternalBusClockSpeed"))
			{
				Uint32 externalBusClockSpeedValue;
				property.getValue().get(externalBusClockSpeedValue);
				setExternalBusClockSpeed(externalBusClockSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "Characteristics"))
			{
				Array<Uint16> characteristicsValue;
				property.getValue().get(characteristicsValue);
				setCharacteristics(characteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledProcessorCharacteristics"))
			{
				Array<Uint16> enabledProcessorCharacteristicsValue;
				property.getValue().get(enabledProcessorCharacteristicsValue);
				setEnabledProcessorCharacteristics(enabledProcessorCharacteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfEnabledCores"))
			{
				Uint16 numberOfEnabledCoresValue;
				property.getValue().get(numberOfEnabledCoresValue);
				setNumberOfEnabledCores(numberOfEnabledCoresValue);
			}
	}
	return true;
}

Uint32 UNIX_Processor::invokeRequestStateChange(
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

Uint32 UNIX_Processor::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_Processor::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_Processor::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Processor::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Processor::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_Processor::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_Processor::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_Processor::initialize()
{
	dmidecode decoder;
	processors = decoder.getProcessors();
	processors_iterator = processors->begin();
	return false;
}

Boolean UNIX_Processor::load(int &pIndex)
{
	if (processors_iterator == processors->end()) return false;
	dmi_proc p = *processors_iterator;

	_instanceID = String(p.version);
	_caption = String(p.familydesc);
	_description = String(p.version);
	_elementName = String("Processor");

	_generation = Uint64(0);
	_installDate = CIMHelper::getOSInstallDate();
	_name = String(p.familydesc);
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_allocationState = String("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_Processor");
	_deviceID = String(p.id);
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	int mib[2] = { CTL_KERN, KERN_BOOTTIME };
	struct timeval tv;
	size_t len = sizeof(tv);
	if (sysctl(mib, 2, &tv, &len, NULL, 0) == -1)
	{
		_powerOnHours = Uint64(0);
	}
	else _powerOnHours = Uint64((tv.tv_sec / 60) / 60);
	_totalPowerOnHours = _powerOnHours;
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_role = String(p.role);
	_family = Uint16(p.family);
	_otherFamilyDescription = String(p.familydesc);
	_upgradeMethod = Uint16(p.upgradeMethod);
	_maxClockSpeed = Uint32(p.maxClockSpeed);
	_currentClockSpeed = Uint32(p.currentClockSpeed);
	_dataWidth = Uint16(0);
	_addressWidth = Uint16(0);
	_loadPercentage = Uint16(0);
	_stepping = String(p.stepping);
	_uniqueID = String(p.id);
	_cPUStatus = Uint16(2); //Uint16(p.status);
	_externalBusClockSpeed = Uint32(p.externalBusClockSpeed);
	_characteristics.clear();
	_enabledProcessorCharacteristics.clear();
	_numberOfEnabledCores = Uint16(p.enabledcores);
	++processors_iterator;
	return true;
}

Boolean UNIX_Processor::finalize()
{
	return true;
}

Boolean UNIX_Processor::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Processor::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Processor::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Processor::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Processor::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Processor::validateInstance()
{
	return true;
}

