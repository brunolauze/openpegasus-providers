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


UNIX_AverageRateMeterService::UNIX_AverageRateMeterService(void)
{
}

UNIX_AverageRateMeterService::~UNIX_AverageRateMeterService(void)
{
}

Boolean UNIX_AverageRateMeterService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AverageRateMeterService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AverageRateMeterService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AverageRateMeterService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AverageRateMeterService::getCaption() const
{
	return _caption;
}

void UNIX_AverageRateMeterService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AverageRateMeterService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AverageRateMeterService::getDescription() const
{
	return _description;
}

void UNIX_AverageRateMeterService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AverageRateMeterService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AverageRateMeterService::getElementName() const
{
	return _elementName;
}

void UNIX_AverageRateMeterService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AverageRateMeterService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AverageRateMeterService::getGeneration() const
{
	return _generation;
}

void UNIX_AverageRateMeterService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AverageRateMeterService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AverageRateMeterService::getInstallDate() const
{
	return _installDate;
}

void UNIX_AverageRateMeterService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_AverageRateMeterService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AverageRateMeterService::getName() const
{
	return _name;
}

void UNIX_AverageRateMeterService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_AverageRateMeterService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AverageRateMeterService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_AverageRateMeterService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_AverageRateMeterService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AverageRateMeterService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_AverageRateMeterService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_AverageRateMeterService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AverageRateMeterService::getStatus() const
{
	return _status;
}

void UNIX_AverageRateMeterService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_AverageRateMeterService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getHealthState() const
{
	return _healthState;
}

void UNIX_AverageRateMeterService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_AverageRateMeterService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_AverageRateMeterService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_AverageRateMeterService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_AverageRateMeterService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_AverageRateMeterService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_AverageRateMeterService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_AverageRateMeterService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_AverageRateMeterService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_AverageRateMeterService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_AverageRateMeterService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_AverageRateMeterService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_AverageRateMeterService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_AverageRateMeterService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_AverageRateMeterService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_AverageRateMeterService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_AverageRateMeterService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_AverageRateMeterService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_AverageRateMeterService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AverageRateMeterService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_AverageRateMeterService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_AverageRateMeterService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_AverageRateMeterService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_AverageRateMeterService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_AverageRateMeterService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_AverageRateMeterService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_AverageRateMeterService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AverageRateMeterService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_AverageRateMeterService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_AverageRateMeterService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AverageRateMeterService::getSystemName() const
{
	return _systemName;
}

void UNIX_AverageRateMeterService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_AverageRateMeterService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AverageRateMeterService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_AverageRateMeterService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_AverageRateMeterService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_AverageRateMeterService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_AverageRateMeterService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_AverageRateMeterService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_AverageRateMeterService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_AverageRateMeterService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_AverageRateMeterService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_AverageRateMeterService::getStartMode() const
{
	return _startMode;
}

void UNIX_AverageRateMeterService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_AverageRateMeterService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_AverageRateMeterService::getStarted() const
{
	return _started;
}

void UNIX_AverageRateMeterService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_AverageRateMeterService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_AverageRateMeterService::getLoSID() const
{
	return _loSID;
}

void UNIX_AverageRateMeterService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_AverageRateMeterService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_AverageRateMeterService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_AverageRateMeterService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_AverageRateMeterService::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_AverageRateMeterService::getEnabled() const
{
	return _enabled;
}

void UNIX_AverageRateMeterService::setEnabled(Boolean &value)
{
	_enabled = value;
}

Boolean UNIX_AverageRateMeterService::getMeterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METER_TYPE, getMeterType());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getMeterType() const
{
	return _meterType;
}

void UNIX_AverageRateMeterService::setMeterType(Uint16 &value)
{
	_meterType = value;
}

Boolean UNIX_AverageRateMeterService::getOtherMeterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_METER_TYPE, getOtherMeterType());
	return true;
}

String UNIX_AverageRateMeterService::getOtherMeterType() const
{
	return _otherMeterType;
}

void UNIX_AverageRateMeterService::setOtherMeterType(String &value)
{
	_otherMeterType = value;
}

Boolean UNIX_AverageRateMeterService::getConformanceLevels(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFORMANCE_LEVELS, getConformanceLevels());
	return true;
}

Uint16 UNIX_AverageRateMeterService::getConformanceLevels() const
{
	return _conformanceLevels;
}

void UNIX_AverageRateMeterService::setConformanceLevels(Uint16 &value)
{
	_conformanceLevels = value;
}

Boolean UNIX_AverageRateMeterService::getAverageRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_RATE, getAverageRate());
	return true;
}

Uint32 UNIX_AverageRateMeterService::getAverageRate() const
{
	return _averageRate;
}

void UNIX_AverageRateMeterService::setAverageRate(Uint32 &value)
{
	_averageRate = value;
}

Boolean UNIX_AverageRateMeterService::getDeltaInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_INTERVAL, getDeltaInterval());
	return true;
}

Uint64 UNIX_AverageRateMeterService::getDeltaInterval() const
{
	return _deltaInterval;
}

void UNIX_AverageRateMeterService::setDeltaInterval(Uint64 &value)
{
	_deltaInterval = value;
}


void UNIX_AverageRateMeterService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AverageRateMeterService");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_AverageRateMeterService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_enabled = Boolean(false);
	_meterType = Uint16(0);
	_otherMeterType = String ("");
	_conformanceLevels = Uint16(0);
	_averageRate = Uint32(0);
	_deltaInterval = Uint64(0);

}

Boolean UNIX_AverageRateMeterService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PrimaryOwnerName"))
			{
				String primaryOwnerNameValue;
				property.getValue().get(primaryOwnerNameValue);
				setPrimaryOwnerName(primaryOwnerNameValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryOwnerContact"))
			{
				String primaryOwnerContactValue;
				property.getValue().get(primaryOwnerContactValue);
				setPrimaryOwnerContact(primaryOwnerContactValue);
			}
			else if (String::equal(property.getName().getString(), "StartMode"))
			{
				String startModeValue;
				property.getValue().get(startModeValue);
				setStartMode(startModeValue);
			}
			else if (String::equal(property.getName().getString(), "Started"))
			{
				Boolean startedValue;
				property.getValue().get(startedValue);
				setStarted(startedValue);
			}
			else if (String::equal(property.getName().getString(), "LoSID"))
			{
				String loSIDValue;
				property.getValue().get(loSIDValue);
				setLoSID(loSIDValue);
			}
			else if (String::equal(property.getName().getString(), "LoSOrgID"))
			{
				String loSOrgIDValue;
				property.getValue().get(loSOrgIDValue);
				setLoSOrgID(loSOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "Enabled"))
			{
				Boolean enabledValue;
				property.getValue().get(enabledValue);
				setEnabled(enabledValue);
			}
			else if (String::equal(property.getName().getString(), "MeterType"))
			{
				Uint16 meterTypeValue;
				property.getValue().get(meterTypeValue);
				setMeterType(meterTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherMeterType"))
			{
				String otherMeterTypeValue;
				property.getValue().get(otherMeterTypeValue);
				setOtherMeterType(otherMeterTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ConformanceLevels"))
			{
				Uint16 conformanceLevelsValue;
				property.getValue().get(conformanceLevelsValue);
				setConformanceLevels(conformanceLevelsValue);
			}
			else if (String::equal(property.getName().getString(), "AverageRate"))
			{
				Uint32 averageRateValue;
				property.getValue().get(averageRateValue);
				setAverageRate(averageRateValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaInterval"))
			{
				Uint64 deltaIntervalValue;
				property.getValue().get(deltaIntervalValue);
				setDeltaInterval(deltaIntervalValue);
			}
	}
	return true;
}

Uint32 UNIX_AverageRateMeterService::invokeRequestStateChange(
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

Uint32 UNIX_AverageRateMeterService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_AverageRateMeterService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_AverageRateMeterService::invokeChangeAffectedElementsAssignedSequence(
		CIMInstance &inManagedElements,
		Array<Uint16> &inAssignedSequence,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ChangeAffectedElementsAssignedSequence */
	
	
	
	return returnValue;
}


Boolean UNIX_AverageRateMeterService::initialize()
{
	return false;
}

Boolean UNIX_AverageRateMeterService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AverageRateMeterService");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_AverageRateMeterService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_enabled = Boolean(false);
	_meterType = Uint16(0);
	_otherMeterType = String ("");
	_conformanceLevels = Uint16(0);
	_averageRate = Uint32(0);
	_deltaInterval = Uint64(0);
	
	return false;
}

Boolean UNIX_AverageRateMeterService::finalize()
{
	return false;
}

Boolean UNIX_AverageRateMeterService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_AverageRateMeterService::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AverageRateMeterService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AverageRateMeterService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AverageRateMeterService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AverageRateMeterService::validateInstance()
{
	return true;
}

