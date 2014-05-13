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


UNIX_HeadTailDropper::UNIX_HeadTailDropper(void)
{
}

UNIX_HeadTailDropper::~UNIX_HeadTailDropper(void)
{
}

Boolean UNIX_HeadTailDropper::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_HeadTailDropper::getInstanceID() const
{
	return _instanceID;
}

void UNIX_HeadTailDropper::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_HeadTailDropper::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_HeadTailDropper::getCaption() const
{
	return _caption;
}

void UNIX_HeadTailDropper::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_HeadTailDropper::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_HeadTailDropper::getDescription() const
{
	return _description;
}

void UNIX_HeadTailDropper::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_HeadTailDropper::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_HeadTailDropper::getElementName() const
{
	return _elementName;
}

void UNIX_HeadTailDropper::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_HeadTailDropper::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_HeadTailDropper::getGeneration() const
{
	return _generation;
}

void UNIX_HeadTailDropper::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_HeadTailDropper::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_HeadTailDropper::getInstallDate() const
{
	return _installDate;
}

void UNIX_HeadTailDropper::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_HeadTailDropper::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_HeadTailDropper::getName() const
{
	return _name;
}

void UNIX_HeadTailDropper::setName(String &value)
{
	_name = value;
}

Boolean UNIX_HeadTailDropper::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_HeadTailDropper::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_HeadTailDropper::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_HeadTailDropper::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_HeadTailDropper::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_HeadTailDropper::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_HeadTailDropper::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_HeadTailDropper::getStatus() const
{
	return _status;
}

void UNIX_HeadTailDropper::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_HeadTailDropper::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_HeadTailDropper::getHealthState() const
{
	return _healthState;
}

void UNIX_HeadTailDropper::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_HeadTailDropper::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_HeadTailDropper::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_HeadTailDropper::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_HeadTailDropper::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_HeadTailDropper::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_HeadTailDropper::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_HeadTailDropper::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_HeadTailDropper::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_HeadTailDropper::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_HeadTailDropper::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_HeadTailDropper::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_HeadTailDropper::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_HeadTailDropper::getEnabledState() const
{
	return _enabledState;
}

void UNIX_HeadTailDropper::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_HeadTailDropper::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_HeadTailDropper::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_HeadTailDropper::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_HeadTailDropper::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_HeadTailDropper::getRequestedState() const
{
	return _requestedState;
}

void UNIX_HeadTailDropper::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_HeadTailDropper::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_HeadTailDropper::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_HeadTailDropper::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_HeadTailDropper::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_HeadTailDropper::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_HeadTailDropper::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_HeadTailDropper::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_HeadTailDropper::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_HeadTailDropper::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_HeadTailDropper::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_HeadTailDropper::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_HeadTailDropper::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_HeadTailDropper::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_HeadTailDropper::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_HeadTailDropper::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_HeadTailDropper::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_HeadTailDropper::getSystemName() const
{
	return _systemName;
}

void UNIX_HeadTailDropper::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_HeadTailDropper::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_HeadTailDropper::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_HeadTailDropper::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_HeadTailDropper::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_HeadTailDropper::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_HeadTailDropper::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_HeadTailDropper::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_HeadTailDropper::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_HeadTailDropper::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_HeadTailDropper::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_HeadTailDropper::getStartMode() const
{
	return _startMode;
}

void UNIX_HeadTailDropper::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_HeadTailDropper::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_HeadTailDropper::getStarted() const
{
	return _started;
}

void UNIX_HeadTailDropper::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_HeadTailDropper::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_HeadTailDropper::getLoSID() const
{
	return _loSID;
}

void UNIX_HeadTailDropper::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_HeadTailDropper::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_HeadTailDropper::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_HeadTailDropper::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_HeadTailDropper::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_HeadTailDropper::getEnabled() const
{
	return _enabled;
}

void UNIX_HeadTailDropper::setEnabled(Boolean &value)
{
	_enabled = value;
}

Boolean UNIX_HeadTailDropper::getDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROPPER_TYPE, getDropperType());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDropperType() const
{
	return _dropperType;
}

void UNIX_HeadTailDropper::setDropperType(Uint16 &value)
{
	_dropperType = value;
}

Boolean UNIX_HeadTailDropper::getOtherDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DROPPER_TYPE, getOtherDropperType());
	return true;
}

String UNIX_HeadTailDropper::getOtherDropperType() const
{
	return _otherDropperType;
}

void UNIX_HeadTailDropper::setOtherDropperType(String &value)
{
	_otherDropperType = value;
}

Boolean UNIX_HeadTailDropper::getAlwaysDrop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALWAYS_DROP, getAlwaysDrop());
	return true;
}

Uint16 UNIX_HeadTailDropper::getAlwaysDrop() const
{
	return _alwaysDrop;
}

void UNIX_HeadTailDropper::setAlwaysDrop(Uint16 &value)
{
	_alwaysDrop = value;
}

Boolean UNIX_HeadTailDropper::getDropFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_FROM, getDropFrom());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDropFrom() const
{
	return _dropFrom;
}

void UNIX_HeadTailDropper::setDropFrom(Uint16 &value)
{
	_dropFrom = value;
}

Boolean UNIX_HeadTailDropper::getDropStartMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_START_METRIC, getDropStartMetric());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDropStartMetric() const
{
	return _dropStartMetric;
}

void UNIX_HeadTailDropper::setDropStartMetric(Uint16 &value)
{
	_dropStartMetric = value;
}

Boolean UNIX_HeadTailDropper::getDropMaintainMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_MAINTAIN_METRIC, getDropMaintainMetric());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDropMaintainMetric() const
{
	return _dropMaintainMetric;
}

void UNIX_HeadTailDropper::setDropMaintainMetric(Uint16 &value)
{
	_dropMaintainMetric = value;
}

Boolean UNIX_HeadTailDropper::getQueueThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_THRESHOLD, getQueueThreshold());
	return true;
}

Uint32 UNIX_HeadTailDropper::getQueueThreshold() const
{
	return _queueThreshold;
}

void UNIX_HeadTailDropper::setQueueThreshold(Uint32 &value)
{
	_queueThreshold = value;
}


void UNIX_HeadTailDropper::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("HeadTailDropper");
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
	_creationClassName = String("UNIX_HeadTailDropper");
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
	_queueThreshold = Uint32(0);

}

Boolean UNIX_HeadTailDropper::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "QueueThreshold"))
			{
				Uint32 queueThresholdValue;
				property.getValue().get(queueThresholdValue);
				setQueueThreshold(queueThresholdValue);
			}
	}
	return true;
}

Uint32 UNIX_HeadTailDropper::invokeRequestStateChange(
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

Uint32 UNIX_HeadTailDropper::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_HeadTailDropper::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_HeadTailDropper::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_HeadTailDropper::initialize()
{
	return false;
}

Boolean UNIX_HeadTailDropper::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("HeadTailDropper");
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
	_creationClassName = String("UNIX_HeadTailDropper");
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
	_queueThreshold = Uint32(0);
	
	return false;
}

Boolean UNIX_HeadTailDropper::finalize()
{
	return false;
}

Boolean UNIX_HeadTailDropper::loadByName(const String name)
{
	return false;
}

Boolean UNIX_HeadTailDropper::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_HeadTailDropper::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HeadTailDropper::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HeadTailDropper::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_HeadTailDropper::validateInstance()
{
	return true;
}

