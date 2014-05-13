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


UNIX_OOBAlertService::UNIX_OOBAlertService(void)
{
}

UNIX_OOBAlertService::~UNIX_OOBAlertService(void)
{
}

Boolean UNIX_OOBAlertService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OOBAlertService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OOBAlertService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OOBAlertService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OOBAlertService::getCaption() const
{
	return _caption;
}

void UNIX_OOBAlertService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OOBAlertService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OOBAlertService::getDescription() const
{
	return _description;
}

void UNIX_OOBAlertService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OOBAlertService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OOBAlertService::getElementName() const
{
	return _elementName;
}

void UNIX_OOBAlertService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OOBAlertService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OOBAlertService::getGeneration() const
{
	return _generation;
}

void UNIX_OOBAlertService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OOBAlertService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OOBAlertService::getInstallDate() const
{
	return _installDate;
}

void UNIX_OOBAlertService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_OOBAlertService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OOBAlertService::getName() const
{
	return _name;
}

void UNIX_OOBAlertService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OOBAlertService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OOBAlertService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_OOBAlertService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_OOBAlertService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OOBAlertService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_OOBAlertService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_OOBAlertService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OOBAlertService::getStatus() const
{
	return _status;
}

void UNIX_OOBAlertService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_OOBAlertService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OOBAlertService::getHealthState() const
{
	return _healthState;
}

void UNIX_OOBAlertService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_OOBAlertService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OOBAlertService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_OOBAlertService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_OOBAlertService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OOBAlertService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_OOBAlertService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_OOBAlertService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OOBAlertService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_OOBAlertService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_OOBAlertService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OOBAlertService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_OOBAlertService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_OOBAlertService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OOBAlertService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_OOBAlertService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_OOBAlertService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OOBAlertService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_OOBAlertService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_OOBAlertService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OOBAlertService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_OOBAlertService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_OOBAlertService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OOBAlertService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_OOBAlertService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_OOBAlertService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OOBAlertService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_OOBAlertService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_OOBAlertService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OOBAlertService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_OOBAlertService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_OOBAlertService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OOBAlertService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_OOBAlertService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_OOBAlertService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_OOBAlertService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_OOBAlertService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_OOBAlertService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_OOBAlertService::getSystemName() const
{
	return _systemName;
}

void UNIX_OOBAlertService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_OOBAlertService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OOBAlertService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OOBAlertService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OOBAlertService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_OOBAlertService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_OOBAlertService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_OOBAlertService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_OOBAlertService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_OOBAlertService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_OOBAlertService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_OOBAlertService::getStartMode() const
{
	return _startMode;
}

void UNIX_OOBAlertService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_OOBAlertService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_OOBAlertService::getStarted() const
{
	return _started;
}

void UNIX_OOBAlertService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_OOBAlertService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_OOBAlertService::getLoSID() const
{
	return _loSID;
}

void UNIX_OOBAlertService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_OOBAlertService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_OOBAlertService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_OOBAlertService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_OOBAlertService::getDestinationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_TYPE, getDestinationType());
	return true;
}

Uint16 UNIX_OOBAlertService::getDestinationType() const
{
	return _destinationType;
}

void UNIX_OOBAlertService::setDestinationType(Uint16 &value)
{
	_destinationType = value;
}

Boolean UNIX_OOBAlertService::getOtherDestinationTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DESTINATION_TYPE_DESCRIPTION, getOtherDestinationTypeDescription());
	return true;
}

String UNIX_OOBAlertService::getOtherDestinationTypeDescription() const
{
	return _otherDestinationTypeDescription;
}

void UNIX_OOBAlertService::setOtherDestinationTypeDescription(String &value)
{
	_otherDestinationTypeDescription = value;
}

Boolean UNIX_OOBAlertService::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_OOBAlertService::getDestinationAddress() const
{
	return _destinationAddress;
}

void UNIX_OOBAlertService::setDestinationAddress(String &value)
{
	_destinationAddress = value;
}

Boolean UNIX_OOBAlertService::getMessageFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_FORMAT, getMessageFormat());
	return true;
}

Uint16 UNIX_OOBAlertService::getMessageFormat() const
{
	return _messageFormat;
}

void UNIX_OOBAlertService::setMessageFormat(Uint16 &value)
{
	_messageFormat = value;
}

Boolean UNIX_OOBAlertService::getOtherMessageFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MESSAGE_FORMAT_DESCRIPTION, getOtherMessageFormatDescription());
	return true;
}

String UNIX_OOBAlertService::getOtherMessageFormatDescription() const
{
	return _otherMessageFormatDescription;
}

void UNIX_OOBAlertService::setOtherMessageFormatDescription(String &value)
{
	_otherMessageFormatDescription = value;
}

Boolean UNIX_OOBAlertService::getOnlySendsFixedMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONLY_SENDS_FIXED_MESSAGE, getOnlySendsFixedMessage());
	return true;
}

Boolean UNIX_OOBAlertService::getOnlySendsFixedMessage() const
{
	return _onlySendsFixedMessage;
}

void UNIX_OOBAlertService::setOnlySendsFixedMessage(Boolean &value)
{
	_onlySendsFixedMessage = value;
}

Boolean UNIX_OOBAlertService::getFixedPartOfMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FIXED_PART_OF_MESSAGE, getFixedPartOfMessage());
	return true;
}

String UNIX_OOBAlertService::getFixedPartOfMessage() const
{
	return _fixedPartOfMessage;
}

void UNIX_OOBAlertService::setFixedPartOfMessage(String &value)
{
	_fixedPartOfMessage = value;
}

Boolean UNIX_OOBAlertService::getDestinationIsAckCapable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_IS_ACK_CAPABLE, getDestinationIsAckCapable());
	return true;
}

Boolean UNIX_OOBAlertService::getDestinationIsAckCapable() const
{
	return _destinationIsAckCapable;
}

void UNIX_OOBAlertService::setDestinationIsAckCapable(Boolean &value)
{
	_destinationIsAckCapable = value;
}

Boolean UNIX_OOBAlertService::getRetryCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRY_COUNT, getRetryCount());
	return true;
}

Uint16 UNIX_OOBAlertService::getRetryCount() const
{
	return _retryCount;
}

void UNIX_OOBAlertService::setRetryCount(Uint16 &value)
{
	_retryCount = value;
}

Boolean UNIX_OOBAlertService::getRetryInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRY_INTERVAL, getRetryInterval());
	return true;
}

Uint16 UNIX_OOBAlertService::getRetryInterval() const
{
	return _retryInterval;
}

void UNIX_OOBAlertService::setRetryInterval(Uint16 &value)
{
	_retryInterval = value;
}

Boolean UNIX_OOBAlertService::getPresenceHeartbeatCapable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRESENCE_HEARTBEAT_CAPABLE, getPresenceHeartbeatCapable());
	return true;
}

Boolean UNIX_OOBAlertService::getPresenceHeartbeatCapable() const
{
	return _presenceHeartbeatCapable;
}

void UNIX_OOBAlertService::setPresenceHeartbeatCapable(Boolean &value)
{
	_presenceHeartbeatCapable = value;
}

Boolean UNIX_OOBAlertService::getEnablePresenceHeartbeats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLE_PRESENCE_HEARTBEATS, getEnablePresenceHeartbeats());
	return true;
}

Boolean UNIX_OOBAlertService::getEnablePresenceHeartbeats() const
{
	return _enablePresenceHeartbeats;
}

void UNIX_OOBAlertService::setEnablePresenceHeartbeats(Boolean &value)
{
	_enablePresenceHeartbeats = value;
}


void UNIX_OOBAlertService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OOBAlertService");
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
	_creationClassName = String("UNIX_OOBAlertService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_destinationType = Uint16(0);
	_otherDestinationTypeDescription = String ("");
	_destinationAddress = String ("");
	_messageFormat = Uint16(0);
	_otherMessageFormatDescription = String ("");
	_onlySendsFixedMessage = Boolean(false);
	_fixedPartOfMessage = String ("");
	_destinationIsAckCapable = Boolean(false);
	_retryCount = Uint16(0);
	_retryInterval = Uint16(0);
	_presenceHeartbeatCapable = Boolean(false);
	_enablePresenceHeartbeats = Boolean(false);

}

Boolean UNIX_OOBAlertService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DestinationType"))
			{
				Uint16 destinationTypeValue;
				property.getValue().get(destinationTypeValue);
				setDestinationType(destinationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDestinationTypeDescription"))
			{
				String otherDestinationTypeDescriptionValue;
				property.getValue().get(otherDestinationTypeDescriptionValue);
				setOtherDestinationTypeDescription(otherDestinationTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "DestinationAddress"))
			{
				String destinationAddressValue;
				property.getValue().get(destinationAddressValue);
				setDestinationAddress(destinationAddressValue);
			}
			else if (String::equal(property.getName().getString(), "MessageFormat"))
			{
				Uint16 messageFormatValue;
				property.getValue().get(messageFormatValue);
				setMessageFormat(messageFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherMessageFormatDescription"))
			{
				String otherMessageFormatDescriptionValue;
				property.getValue().get(otherMessageFormatDescriptionValue);
				setOtherMessageFormatDescription(otherMessageFormatDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "OnlySendsFixedMessage"))
			{
				Boolean onlySendsFixedMessageValue;
				property.getValue().get(onlySendsFixedMessageValue);
				setOnlySendsFixedMessage(onlySendsFixedMessageValue);
			}
			else if (String::equal(property.getName().getString(), "FixedPartOfMessage"))
			{
				String fixedPartOfMessageValue;
				property.getValue().get(fixedPartOfMessageValue);
				setFixedPartOfMessage(fixedPartOfMessageValue);
			}
			else if (String::equal(property.getName().getString(), "DestinationIsAckCapable"))
			{
				Boolean destinationIsAckCapableValue;
				property.getValue().get(destinationIsAckCapableValue);
				setDestinationIsAckCapable(destinationIsAckCapableValue);
			}
			else if (String::equal(property.getName().getString(), "RetryCount"))
			{
				Uint16 retryCountValue;
				property.getValue().get(retryCountValue);
				setRetryCount(retryCountValue);
			}
			else if (String::equal(property.getName().getString(), "RetryInterval"))
			{
				Uint16 retryIntervalValue;
				property.getValue().get(retryIntervalValue);
				setRetryInterval(retryIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "PresenceHeartbeatCapable"))
			{
				Boolean presenceHeartbeatCapableValue;
				property.getValue().get(presenceHeartbeatCapableValue);
				setPresenceHeartbeatCapable(presenceHeartbeatCapableValue);
			}
			else if (String::equal(property.getName().getString(), "EnablePresenceHeartbeats"))
			{
				Boolean enablePresenceHeartbeatsValue;
				property.getValue().get(enablePresenceHeartbeatsValue);
				setEnablePresenceHeartbeats(enablePresenceHeartbeatsValue);
			}
	}
	return true;
}

Uint32 UNIX_OOBAlertService::invokeRequestStateChange(
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

Uint32 UNIX_OOBAlertService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_OOBAlertService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_OOBAlertService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_OOBAlertService::initialize()
{
	return false;
}

Boolean UNIX_OOBAlertService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OOBAlertService");
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
	_creationClassName = String("UNIX_OOBAlertService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_destinationType = Uint16(0);
	_otherDestinationTypeDescription = String ("");
	_destinationAddress = String ("");
	_messageFormat = Uint16(0);
	_otherMessageFormatDescription = String ("");
	_onlySendsFixedMessage = Boolean(false);
	_fixedPartOfMessage = String ("");
	_destinationIsAckCapable = Boolean(false);
	_retryCount = Uint16(0);
	_retryInterval = Uint16(0);
	_presenceHeartbeatCapable = Boolean(false);
	_enablePresenceHeartbeats = Boolean(false);
	
	return false;
}

Boolean UNIX_OOBAlertService::finalize()
{
	return false;
}

Boolean UNIX_OOBAlertService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OOBAlertService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OOBAlertService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OOBAlertService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OOBAlertService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OOBAlertService::validateInstance()
{
	return true;
}

