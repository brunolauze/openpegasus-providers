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


UNIX_LAGPort8023ad::UNIX_LAGPort8023ad(void)
{
}

UNIX_LAGPort8023ad::~UNIX_LAGPort8023ad(void)
{
}

Boolean UNIX_LAGPort8023ad::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LAGPort8023ad::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LAGPort8023ad::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LAGPort8023ad::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LAGPort8023ad::getCaption() const
{
	return _caption;
}

void UNIX_LAGPort8023ad::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LAGPort8023ad::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LAGPort8023ad::getDescription() const
{
	return _description;
}

void UNIX_LAGPort8023ad::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LAGPort8023ad::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LAGPort8023ad::getElementName() const
{
	return _elementName;
}

void UNIX_LAGPort8023ad::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LAGPort8023ad::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LAGPort8023ad::getGeneration() const
{
	return _generation;
}

void UNIX_LAGPort8023ad::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LAGPort8023ad::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LAGPort8023ad::getInstallDate() const
{
	return _installDate;
}

void UNIX_LAGPort8023ad::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_LAGPort8023ad::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LAGPort8023ad::getName() const
{
	return _name;
}

void UNIX_LAGPort8023ad::setName(String &value)
{
	_name = value;
}

Boolean UNIX_LAGPort8023ad::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LAGPort8023ad::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_LAGPort8023ad::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_LAGPort8023ad::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LAGPort8023ad::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_LAGPort8023ad::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_LAGPort8023ad::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LAGPort8023ad::getStatus() const
{
	return _status;
}

void UNIX_LAGPort8023ad::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_LAGPort8023ad::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getHealthState() const
{
	return _healthState;
}

void UNIX_LAGPort8023ad::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_LAGPort8023ad::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_LAGPort8023ad::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_LAGPort8023ad::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_LAGPort8023ad::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_LAGPort8023ad::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_LAGPort8023ad::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_LAGPort8023ad::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_LAGPort8023ad::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_LAGPort8023ad::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getEnabledState() const
{
	return _enabledState;
}

void UNIX_LAGPort8023ad::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_LAGPort8023ad::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LAGPort8023ad::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_LAGPort8023ad::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_LAGPort8023ad::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getRequestedState() const
{
	return _requestedState;
}

void UNIX_LAGPort8023ad::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_LAGPort8023ad::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_LAGPort8023ad::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_LAGPort8023ad::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LAGPort8023ad::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_LAGPort8023ad::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_LAGPort8023ad::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LAGPort8023ad::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_LAGPort8023ad::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_LAGPort8023ad::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_LAGPort8023ad::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_LAGPort8023ad::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LAGPort8023ad::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_LAGPort8023ad::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_LAGPort8023ad::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LAGPort8023ad::getSystemName() const
{
	return _systemName;
}

void UNIX_LAGPort8023ad::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_LAGPort8023ad::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LAGPort8023ad::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_LAGPort8023ad::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_LAGPort8023ad::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_LAGPort8023ad::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_LAGPort8023ad::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_LAGPort8023ad::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getProtocolType() const
{
	return _protocolType;
}

void UNIX_LAGPort8023ad::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_LAGPort8023ad::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_LAGPort8023ad::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_LAGPort8023ad::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_LAGPort8023ad::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_LAGPort8023ad::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_LAGPort8023ad::getBroadcastResetSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BROADCAST_RESET_SUPPORTED, getBroadcastResetSupported());
	return true;
}

Boolean UNIX_LAGPort8023ad::getBroadcastResetSupported() const
{
	return _broadcastResetSupported;
}

void UNIX_LAGPort8023ad::setBroadcastResetSupported(Boolean &value)
{
	_broadcastResetSupported = value;
}

Boolean UNIX_LAGPort8023ad::getActorSystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTOR_SYSTEM_ID, getActorSystemID());
	return true;
}

String UNIX_LAGPort8023ad::getActorSystemID() const
{
	return _actorSystemID;
}

void UNIX_LAGPort8023ad::setActorSystemID(String &value)
{
	_actorSystemID = value;
}

Boolean UNIX_LAGPort8023ad::getActorSystemPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTOR_SYSTEM_PRIORITY, getActorSystemPriority());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getActorSystemPriority() const
{
	return _actorSystemPriority;
}

void UNIX_LAGPort8023ad::setActorSystemPriority(Uint16 &value)
{
	_actorSystemPriority = value;
}

Boolean UNIX_LAGPort8023ad::getActorPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTOR_PORT, getActorPort());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getActorPort() const
{
	return _actorPort;
}

void UNIX_LAGPort8023ad::setActorPort(Uint16 &value)
{
	_actorPort = value;
}

Boolean UNIX_LAGPort8023ad::getActorPortPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTOR_PORT_PRIORITY, getActorPortPriority());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getActorPortPriority() const
{
	return _actorPortPriority;
}

void UNIX_LAGPort8023ad::setActorPortPriority(Uint16 &value)
{
	_actorPortPriority = value;
}

Boolean UNIX_LAGPort8023ad::getActorOperKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTOR_OPER_KEY, getActorOperKey());
	return true;
}

Uint16 UNIX_LAGPort8023ad::getActorOperKey() const
{
	return _actorOperKey;
}

void UNIX_LAGPort8023ad::setActorOperKey(Uint16 &value)
{
	_actorOperKey = value;
}

Boolean UNIX_LAGPort8023ad::getActorOperState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTOR_OPER_STATE, getActorOperState());
	return true;
}

Array<Uint16> UNIX_LAGPort8023ad::getActorOperState() const
{
	return _actorOperState;
}

void UNIX_LAGPort8023ad::setActorOperState(Array<Uint16> &value)
{
	_actorOperState = value;
}

Boolean UNIX_LAGPort8023ad::getActorAdminState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTOR_ADMIN_STATE, getActorAdminState());
	return true;
}

Array<Uint16> UNIX_LAGPort8023ad::getActorAdminState() const
{
	return _actorAdminState;
}

void UNIX_LAGPort8023ad::setActorAdminState(Array<Uint16> &value)
{
	_actorAdminState = value;
}

Boolean UNIX_LAGPort8023ad::getRepresentsAggregate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPRESENTS_AGGREGATE, getRepresentsAggregate());
	return true;
}

Boolean UNIX_LAGPort8023ad::getRepresentsAggregate() const
{
	return _representsAggregate;
}

void UNIX_LAGPort8023ad::setRepresentsAggregate(Boolean &value)
{
	_representsAggregate = value;
}

Boolean UNIX_LAGPort8023ad::getSelectedAggID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELECTED_AGG_ID, getSelectedAggID());
	return true;
}

Uint32 UNIX_LAGPort8023ad::getSelectedAggID() const
{
	return _selectedAggID;
}

void UNIX_LAGPort8023ad::setSelectedAggID(Uint32 &value)
{
	_selectedAggID = value;
}


void UNIX_LAGPort8023ad::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LAGPort8023ad");
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
	_creationClassName = String("UNIX_LAGPort8023ad");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_actorSystemID = String ("");
	_actorSystemPriority = Uint16(0);
	_actorPort = Uint16(0);
	_actorPortPriority = Uint16(0);
	_actorOperKey = Uint16(0);
	_actorOperState.clear();
	_actorAdminState.clear();
	_representsAggregate = Boolean(false);
	_selectedAggID = Uint32(0);

}

Boolean UNIX_LAGPort8023ad::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NameFormat"))
			{
				String nameFormatValue;
				property.getValue().get(nameFormatValue);
				setNameFormat(nameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolType"))
			{
				Uint16 protocolTypeValue;
				property.getValue().get(protocolTypeValue);
				setProtocolType(protocolTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolIFType"))
			{
				Uint16 protocolIFTypeValue;
				property.getValue().get(protocolIFTypeValue);
				setProtocolIFType(protocolIFTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "BroadcastResetSupported"))
			{
				Boolean broadcastResetSupportedValue;
				property.getValue().get(broadcastResetSupportedValue);
				setBroadcastResetSupported(broadcastResetSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ActorSystemID"))
			{
				String actorSystemIDValue;
				property.getValue().get(actorSystemIDValue);
				setActorSystemID(actorSystemIDValue);
			}
			else if (String::equal(property.getName().getString(), "ActorSystemPriority"))
			{
				Uint16 actorSystemPriorityValue;
				property.getValue().get(actorSystemPriorityValue);
				setActorSystemPriority(actorSystemPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "ActorPort"))
			{
				Uint16 actorPortValue;
				property.getValue().get(actorPortValue);
				setActorPort(actorPortValue);
			}
			else if (String::equal(property.getName().getString(), "ActorPortPriority"))
			{
				Uint16 actorPortPriorityValue;
				property.getValue().get(actorPortPriorityValue);
				setActorPortPriority(actorPortPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "ActorOperKey"))
			{
				Uint16 actorOperKeyValue;
				property.getValue().get(actorOperKeyValue);
				setActorOperKey(actorOperKeyValue);
			}
			else if (String::equal(property.getName().getString(), "ActorOperState"))
			{
				Array<Uint16> actorOperStateValue;
				property.getValue().get(actorOperStateValue);
				setActorOperState(actorOperStateValue);
			}
			else if (String::equal(property.getName().getString(), "ActorAdminState"))
			{
				Array<Uint16> actorAdminStateValue;
				property.getValue().get(actorAdminStateValue);
				setActorAdminState(actorAdminStateValue);
			}
			else if (String::equal(property.getName().getString(), "RepresentsAggregate"))
			{
				Boolean representsAggregateValue;
				property.getValue().get(representsAggregateValue);
				setRepresentsAggregate(representsAggregateValue);
			}
			else if (String::equal(property.getName().getString(), "SelectedAggID"))
			{
				Uint32 selectedAggIDValue;
				property.getValue().get(selectedAggIDValue);
				setSelectedAggID(selectedAggIDValue);
			}
	}
	return true;
}

Uint32 UNIX_LAGPort8023ad::invokeRequestStateChange(
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

Uint32 UNIX_LAGPort8023ad::invokeBroadcastReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method BroadcastReset */
	
	
	
	return returnValue;
}


Boolean UNIX_LAGPort8023ad::initialize()
{
	return false;
}

Boolean UNIX_LAGPort8023ad::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LAGPort8023ad");
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
	_creationClassName = String("UNIX_LAGPort8023ad");
	_nameFormat = String ("");
	_protocolType = Uint16(0);
	_protocolIFType = Uint16(0);
	_otherTypeDescription = String ("");
	_broadcastResetSupported = Boolean(false);
	_actorSystemID = String ("");
	_actorSystemPriority = Uint16(0);
	_actorPort = Uint16(0);
	_actorPortPriority = Uint16(0);
	_actorOperKey = Uint16(0);
	_actorOperState.clear();
	_actorAdminState.clear();
	_representsAggregate = Boolean(false);
	_selectedAggID = Uint32(0);
	
	return false;
}

Boolean UNIX_LAGPort8023ad::finalize()
{
	return false;
}

Boolean UNIX_LAGPort8023ad::loadByName(const String name)
{
	return false;
}

Boolean UNIX_LAGPort8023ad::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LAGPort8023ad::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPort8023ad::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPort8023ad::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LAGPort8023ad::validateInstance()
{
	return true;
}

