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


UNIX_REDDropperService::UNIX_REDDropperService(void)
{
}

UNIX_REDDropperService::~UNIX_REDDropperService(void)
{
}

Boolean UNIX_REDDropperService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_REDDropperService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_REDDropperService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_REDDropperService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_REDDropperService::getCaption() const
{
	return _caption;
}

void UNIX_REDDropperService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_REDDropperService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_REDDropperService::getDescription() const
{
	return _description;
}

void UNIX_REDDropperService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_REDDropperService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_REDDropperService::getElementName() const
{
	return _elementName;
}

void UNIX_REDDropperService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_REDDropperService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_REDDropperService::getGeneration() const
{
	return _generation;
}

void UNIX_REDDropperService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_REDDropperService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_REDDropperService::getInstallDate() const
{
	return _installDate;
}

void UNIX_REDDropperService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_REDDropperService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_REDDropperService::getName() const
{
	return _name;
}

void UNIX_REDDropperService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_REDDropperService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_REDDropperService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_REDDropperService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_REDDropperService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_REDDropperService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_REDDropperService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_REDDropperService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_REDDropperService::getStatus() const
{
	return _status;
}

void UNIX_REDDropperService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_REDDropperService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_REDDropperService::getHealthState() const
{
	return _healthState;
}

void UNIX_REDDropperService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_REDDropperService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_REDDropperService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_REDDropperService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_REDDropperService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_REDDropperService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_REDDropperService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_REDDropperService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_REDDropperService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_REDDropperService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_REDDropperService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_REDDropperService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_REDDropperService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_REDDropperService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_REDDropperService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_REDDropperService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_REDDropperService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_REDDropperService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_REDDropperService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_REDDropperService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_REDDropperService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_REDDropperService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_REDDropperService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_REDDropperService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_REDDropperService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_REDDropperService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_REDDropperService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_REDDropperService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_REDDropperService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_REDDropperService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_REDDropperService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_REDDropperService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_REDDropperService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_REDDropperService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_REDDropperService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_REDDropperService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_REDDropperService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_REDDropperService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_REDDropperService::getSystemName() const
{
	return _systemName;
}

void UNIX_REDDropperService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_REDDropperService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_REDDropperService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_REDDropperService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_REDDropperService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_REDDropperService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_REDDropperService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_REDDropperService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_REDDropperService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_REDDropperService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_REDDropperService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_REDDropperService::getStartMode() const
{
	return _startMode;
}

void UNIX_REDDropperService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_REDDropperService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_REDDropperService::getStarted() const
{
	return _started;
}

void UNIX_REDDropperService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_REDDropperService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_REDDropperService::getLoSID() const
{
	return _loSID;
}

void UNIX_REDDropperService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_REDDropperService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_REDDropperService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_REDDropperService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_REDDropperService::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_REDDropperService::getEnabled() const
{
	return _enabled;
}

void UNIX_REDDropperService::setEnabled(Boolean &value)
{
	_enabled = value;
}

Boolean UNIX_REDDropperService::getDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROPPER_TYPE, getDropperType());
	return true;
}

Uint16 UNIX_REDDropperService::getDropperType() const
{
	return _dropperType;
}

void UNIX_REDDropperService::setDropperType(Uint16 &value)
{
	_dropperType = value;
}

Boolean UNIX_REDDropperService::getOtherDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DROPPER_TYPE, getOtherDropperType());
	return true;
}

String UNIX_REDDropperService::getOtherDropperType() const
{
	return _otherDropperType;
}

void UNIX_REDDropperService::setOtherDropperType(String &value)
{
	_otherDropperType = value;
}

Boolean UNIX_REDDropperService::getAlwaysDrop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALWAYS_DROP, getAlwaysDrop());
	return true;
}

Uint16 UNIX_REDDropperService::getAlwaysDrop() const
{
	return _alwaysDrop;
}

void UNIX_REDDropperService::setAlwaysDrop(Uint16 &value)
{
	_alwaysDrop = value;
}

Boolean UNIX_REDDropperService::getDropFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_FROM, getDropFrom());
	return true;
}

Uint16 UNIX_REDDropperService::getDropFrom() const
{
	return _dropFrom;
}

void UNIX_REDDropperService::setDropFrom(Uint16 &value)
{
	_dropFrom = value;
}

Boolean UNIX_REDDropperService::getDropStartMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_START_METRIC, getDropStartMetric());
	return true;
}

Uint16 UNIX_REDDropperService::getDropStartMetric() const
{
	return _dropStartMetric;
}

void UNIX_REDDropperService::setDropStartMetric(Uint16 &value)
{
	_dropStartMetric = value;
}

Boolean UNIX_REDDropperService::getDropMaintainMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_MAINTAIN_METRIC, getDropMaintainMetric());
	return true;
}

Uint16 UNIX_REDDropperService::getDropMaintainMetric() const
{
	return _dropMaintainMetric;
}

void UNIX_REDDropperService::setDropMaintainMetric(Uint16 &value)
{
	_dropMaintainMetric = value;
}

Boolean UNIX_REDDropperService::getMinQueueThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_QUEUE_THRESHOLD, getMinQueueThreshold());
	return true;
}

Uint32 UNIX_REDDropperService::getMinQueueThreshold() const
{
	return _minQueueThreshold;
}

void UNIX_REDDropperService::setMinQueueThreshold(Uint32 &value)
{
	_minQueueThreshold = value;
}

Boolean UNIX_REDDropperService::getMaxQueueThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUEUE_THRESHOLD, getMaxQueueThreshold());
	return true;
}

Uint32 UNIX_REDDropperService::getMaxQueueThreshold() const
{
	return _maxQueueThreshold;
}

void UNIX_REDDropperService::setMaxQueueThreshold(Uint32 &value)
{
	_maxQueueThreshold = value;
}

Boolean UNIX_REDDropperService::getStartProbability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_PROBABILITY, getStartProbability());
	return true;
}

Uint32 UNIX_REDDropperService::getStartProbability() const
{
	return _startProbability;
}

void UNIX_REDDropperService::setStartProbability(Uint32 &value)
{
	_startProbability = value;
}

Boolean UNIX_REDDropperService::getStopProbability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STOP_PROBABILITY, getStopProbability());
	return true;
}

Uint32 UNIX_REDDropperService::getStopProbability() const
{
	return _stopProbability;
}

void UNIX_REDDropperService::setStopProbability(Uint32 &value)
{
	_stopProbability = value;
}

Boolean UNIX_REDDropperService::getThresholdUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THRESHOLD_UNITS, getThresholdUnits());
	return true;
}

Uint16 UNIX_REDDropperService::getThresholdUnits() const
{
	return _thresholdUnits;
}

void UNIX_REDDropperService::setThresholdUnits(Uint16 &value)
{
	_thresholdUnits = value;
}


void UNIX_REDDropperService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("REDDropperService");
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
	_creationClassName = String("UNIX_REDDropperService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_enabled = Boolean(false);
	_dropperType = Uint16(0);
	_otherDropperType = String ("");
	_alwaysDrop = Uint16(0);
	_dropFrom = Uint16(0);
	_dropStartMetric = Uint16(0);
	_dropMaintainMetric = Uint16(0);
	_minQueueThreshold = Uint32(0);
	_maxQueueThreshold = Uint32(0);
	_startProbability = Uint32(0);
	_stopProbability = Uint32(0);
	_thresholdUnits = Uint16(0);

}

Boolean UNIX_REDDropperService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DropperType"))
			{
				Uint16 dropperTypeValue;
				property.getValue().get(dropperTypeValue);
				setDropperType(dropperTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDropperType"))
			{
				String otherDropperTypeValue;
				property.getValue().get(otherDropperTypeValue);
				setOtherDropperType(otherDropperTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AlwaysDrop"))
			{
				Uint16 alwaysDropValue;
				property.getValue().get(alwaysDropValue);
				setAlwaysDrop(alwaysDropValue);
			}
			else if (String::equal(property.getName().getString(), "DropFrom"))
			{
				Uint16 dropFromValue;
				property.getValue().get(dropFromValue);
				setDropFrom(dropFromValue);
			}
			else if (String::equal(property.getName().getString(), "DropStartMetric"))
			{
				Uint16 dropStartMetricValue;
				property.getValue().get(dropStartMetricValue);
				setDropStartMetric(dropStartMetricValue);
			}
			else if (String::equal(property.getName().getString(), "DropMaintainMetric"))
			{
				Uint16 dropMaintainMetricValue;
				property.getValue().get(dropMaintainMetricValue);
				setDropMaintainMetric(dropMaintainMetricValue);
			}
			else if (String::equal(property.getName().getString(), "MinQueueThreshold"))
			{
				Uint32 minQueueThresholdValue;
				property.getValue().get(minQueueThresholdValue);
				setMinQueueThreshold(minQueueThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "MaxQueueThreshold"))
			{
				Uint32 maxQueueThresholdValue;
				property.getValue().get(maxQueueThresholdValue);
				setMaxQueueThreshold(maxQueueThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "StartProbability"))
			{
				Uint32 startProbabilityValue;
				property.getValue().get(startProbabilityValue);
				setStartProbability(startProbabilityValue);
			}
			else if (String::equal(property.getName().getString(), "StopProbability"))
			{
				Uint32 stopProbabilityValue;
				property.getValue().get(stopProbabilityValue);
				setStopProbability(stopProbabilityValue);
			}
			else if (String::equal(property.getName().getString(), "ThresholdUnits"))
			{
				Uint16 thresholdUnitsValue;
				property.getValue().get(thresholdUnitsValue);
				setThresholdUnits(thresholdUnitsValue);
			}
	}
	return true;
}

Uint32 UNIX_REDDropperService::invokeRequestStateChange(
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

Uint32 UNIX_REDDropperService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_REDDropperService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_REDDropperService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_REDDropperService::initialize()
{
	return false;
}

Boolean UNIX_REDDropperService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("REDDropperService");
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
	_creationClassName = String("UNIX_REDDropperService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_enabled = Boolean(false);
	_dropperType = Uint16(0);
	_otherDropperType = String ("");
	_alwaysDrop = Uint16(0);
	_dropFrom = Uint16(0);
	_dropStartMetric = Uint16(0);
	_dropMaintainMetric = Uint16(0);
	_minQueueThreshold = Uint32(0);
	_maxQueueThreshold = Uint32(0);
	_startProbability = Uint32(0);
	_stopProbability = Uint32(0);
	_thresholdUnits = Uint16(0);
	
	return false;
}

Boolean UNIX_REDDropperService::finalize()
{
	return false;
}

Boolean UNIX_REDDropperService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_REDDropperService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_REDDropperService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_REDDropperService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_REDDropperService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_REDDropperService::validateInstance()
{
	return true;
}

