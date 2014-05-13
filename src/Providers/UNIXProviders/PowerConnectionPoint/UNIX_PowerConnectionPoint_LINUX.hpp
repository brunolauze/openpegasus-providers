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


UNIX_PowerConnectionPoint::UNIX_PowerConnectionPoint(void)
{
}

UNIX_PowerConnectionPoint::~UNIX_PowerConnectionPoint(void)
{
}

Boolean UNIX_PowerConnectionPoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PowerConnectionPoint::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PowerConnectionPoint::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PowerConnectionPoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PowerConnectionPoint::getCaption() const
{
	return _caption;
}

void UNIX_PowerConnectionPoint::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PowerConnectionPoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PowerConnectionPoint::getDescription() const
{
	return _description;
}

void UNIX_PowerConnectionPoint::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PowerConnectionPoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PowerConnectionPoint::getElementName() const
{
	return _elementName;
}

void UNIX_PowerConnectionPoint::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PowerConnectionPoint::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PowerConnectionPoint::getGeneration() const
{
	return _generation;
}

void UNIX_PowerConnectionPoint::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PowerConnectionPoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PowerConnectionPoint::getInstallDate() const
{
	return _installDate;
}

void UNIX_PowerConnectionPoint::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PowerConnectionPoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PowerConnectionPoint::getName() const
{
	return _name;
}

void UNIX_PowerConnectionPoint::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PowerConnectionPoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PowerConnectionPoint::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PowerConnectionPoint::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PowerConnectionPoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PowerConnectionPoint::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PowerConnectionPoint::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PowerConnectionPoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PowerConnectionPoint::getStatus() const
{
	return _status;
}

void UNIX_PowerConnectionPoint::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PowerConnectionPoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getHealthState() const
{
	return _healthState;
}

void UNIX_PowerConnectionPoint::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PowerConnectionPoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PowerConnectionPoint::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PowerConnectionPoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PowerConnectionPoint::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PowerConnectionPoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PowerConnectionPoint::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PowerConnectionPoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PowerConnectionPoint::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PowerConnectionPoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PowerConnectionPoint::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PowerConnectionPoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PowerConnectionPoint::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PowerConnectionPoint::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PowerConnectionPoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PowerConnectionPoint::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PowerConnectionPoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PowerConnectionPoint::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PowerConnectionPoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PowerConnectionPoint::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PowerConnectionPoint::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PowerConnectionPoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PowerConnectionPoint::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PowerConnectionPoint::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PowerConnectionPoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PowerConnectionPoint::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PowerConnectionPoint::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_PowerConnectionPoint::getAllocationState() const
{
	return _allocationState;
}

void UNIX_PowerConnectionPoint::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_PowerConnectionPoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PowerConnectionPoint::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PowerConnectionPoint::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PowerConnectionPoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PowerConnectionPoint::getSystemName() const
{
	return _systemName;
}

void UNIX_PowerConnectionPoint::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PowerConnectionPoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PowerConnectionPoint::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PowerConnectionPoint::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PowerConnectionPoint::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PowerConnectionPoint::getDeviceID() const
{
	return _deviceID;
}

void UNIX_PowerConnectionPoint::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_PowerConnectionPoint::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PowerConnectionPoint::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_PowerConnectionPoint::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_PowerConnectionPoint::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PowerConnectionPoint::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_PowerConnectionPoint::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_PowerConnectionPoint::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getAvailability() const
{
	return _availability;
}

void UNIX_PowerConnectionPoint::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_PowerConnectionPoint::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_PowerConnectionPoint::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_PowerConnectionPoint::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PowerConnectionPoint::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_PowerConnectionPoint::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_PowerConnectionPoint::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PowerConnectionPoint::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_PowerConnectionPoint::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_PowerConnectionPoint::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PowerConnectionPoint::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_PowerConnectionPoint::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_PowerConnectionPoint::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PowerConnectionPoint::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PowerConnectionPoint::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PowerConnectionPoint::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PowerConnectionPoint::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_PowerConnectionPoint::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_PowerConnectionPoint::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PowerConnectionPoint::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_PowerConnectionPoint::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_PowerConnectionPoint::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PowerConnectionPoint::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_PowerConnectionPoint::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_PowerConnectionPoint::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PowerConnectionPoint::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_PowerConnectionPoint::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_PowerConnectionPoint::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PowerConnectionPoint::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_PowerConnectionPoint::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_PowerConnectionPoint::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_PowerConnectionPoint::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_PowerConnectionPoint::getConnectionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_TYPE, getConnectionType());
	return true;
}

Uint8 UNIX_PowerConnectionPoint::getConnectionType() const
{
	return _connectionType;
}

void UNIX_PowerConnectionPoint::setConnectionType(Uint8 &value)
{
	_connectionType = value;
}

Boolean UNIX_PowerConnectionPoint::getBusID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_ID, getBusID());
	return true;
}

String UNIX_PowerConnectionPoint::getBusID() const
{
	return _busID;
}

void UNIX_PowerConnectionPoint::setBusID(String &value)
{
	_busID = value;
}

Boolean UNIX_PowerConnectionPoint::getLoadType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TYPE, getLoadType());
	return true;
}

Uint16 UNIX_PowerConnectionPoint::getLoadType() const
{
	return _loadType;
}

void UNIX_PowerConnectionPoint::setLoadType(Uint16 &value)
{
	_loadType = value;
}

Boolean UNIX_PowerConnectionPoint::getOtherLoadType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOAD_TYPE, getOtherLoadType());
	return true;
}

String UNIX_PowerConnectionPoint::getOtherLoadType() const
{
	return _otherLoadType;
}

void UNIX_PowerConnectionPoint::setOtherLoadType(String &value)
{
	_otherLoadType = value;
}

Boolean UNIX_PowerConnectionPoint::getDCIENumeratorFactor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_C_I_E_NUMERATOR_FACTOR, getDCIENumeratorFactor());
	return true;
}

Sint8 UNIX_PowerConnectionPoint::getDCIENumeratorFactor() const
{
	return _dCIENumeratorFactor;
}

void UNIX_PowerConnectionPoint::setDCIENumeratorFactor(Sint8 &value)
{
	_dCIENumeratorFactor = value;
}

Boolean UNIX_PowerConnectionPoint::getDCIEDenominatorFactor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_C_I_E_DENOMINATOR_FACTOR, getDCIEDenominatorFactor());
	return true;
}

Sint8 UNIX_PowerConnectionPoint::getDCIEDenominatorFactor() const
{
	return _dCIEDenominatorFactor;
}

void UNIX_PowerConnectionPoint::setDCIEDenominatorFactor(Sint8 &value)
{
	_dCIEDenominatorFactor = value;
}

Boolean UNIX_PowerConnectionPoint::getCircuitType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIRCUIT_TYPE, getCircuitType());
	return true;
}

Uint8 UNIX_PowerConnectionPoint::getCircuitType() const
{
	return _circuitType;
}

void UNIX_PowerConnectionPoint::setCircuitType(Uint8 &value)
{
	_circuitType = value;
}

Boolean UNIX_PowerConnectionPoint::getReportedPhase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORTED_PHASE, getReportedPhase());
	return true;
}

Uint8 UNIX_PowerConnectionPoint::getReportedPhase() const
{
	return _reportedPhase;
}

void UNIX_PowerConnectionPoint::setReportedPhase(Uint8 &value)
{
	_reportedPhase = value;
}


void UNIX_PowerConnectionPoint::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PowerConnectionPoint");
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
	_creationClassName = String("UNIX_PowerConnectionPoint");
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
	_connectionType = Uint8(0);
	_busID = String ("");
	_loadType = Uint16(0);
	_otherLoadType = String ("");
	_dCIENumeratorFactor = Sint8(0);
	_dCIEDenominatorFactor = Sint8(0);
	_circuitType = Uint8(0);
	_reportedPhase = Uint8(0);

}

Boolean UNIX_PowerConnectionPoint::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConnectionType"))
			{
				Uint8 connectionTypeValue;
				property.getValue().get(connectionTypeValue);
				setConnectionType(connectionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "BusID"))
			{
				String busIDValue;
				property.getValue().get(busIDValue);
				setBusID(busIDValue);
			}
			else if (String::equal(property.getName().getString(), "LoadType"))
			{
				Uint16 loadTypeValue;
				property.getValue().get(loadTypeValue);
				setLoadType(loadTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLoadType"))
			{
				String otherLoadTypeValue;
				property.getValue().get(otherLoadTypeValue);
				setOtherLoadType(otherLoadTypeValue);
			}
			else if (String::equal(property.getName().getString(), "DCIENumeratorFactor"))
			{
				Sint8 dCIENumeratorFactorValue;
				property.getValue().get(dCIENumeratorFactorValue);
				setDCIENumeratorFactor(dCIENumeratorFactorValue);
			}
			else if (String::equal(property.getName().getString(), "DCIEDenominatorFactor"))
			{
				Sint8 dCIEDenominatorFactorValue;
				property.getValue().get(dCIEDenominatorFactorValue);
				setDCIEDenominatorFactor(dCIEDenominatorFactorValue);
			}
			else if (String::equal(property.getName().getString(), "CircuitType"))
			{
				Uint8 circuitTypeValue;
				property.getValue().get(circuitTypeValue);
				setCircuitType(circuitTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ReportedPhase"))
			{
				Uint8 reportedPhaseValue;
				property.getValue().get(reportedPhaseValue);
				setReportedPhase(reportedPhaseValue);
			}
	}
	return true;
}

Uint32 UNIX_PowerConnectionPoint::invokeRequestStateChange(
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

Uint32 UNIX_PowerConnectionPoint::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerConnectionPoint::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerConnectionPoint::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerConnectionPoint::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerConnectionPoint::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerConnectionPoint::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_PowerConnectionPoint::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}


Boolean UNIX_PowerConnectionPoint::initialize()
{
	return false;
}

Boolean UNIX_PowerConnectionPoint::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PowerConnectionPoint");
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
	_creationClassName = String("UNIX_PowerConnectionPoint");
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
	_connectionType = Uint8(0);
	_busID = String ("");
	_loadType = Uint16(0);
	_otherLoadType = String ("");
	_dCIENumeratorFactor = Sint8(0);
	_dCIEDenominatorFactor = Sint8(0);
	_circuitType = Uint8(0);
	_reportedPhase = Uint8(0);
	
	return false;
}

Boolean UNIX_PowerConnectionPoint::finalize()
{
	return false;
}

Boolean UNIX_PowerConnectionPoint::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PowerConnectionPoint::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PowerConnectionPoint::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerConnectionPoint::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerConnectionPoint::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PowerConnectionPoint::validateInstance()
{
	return true;
}

