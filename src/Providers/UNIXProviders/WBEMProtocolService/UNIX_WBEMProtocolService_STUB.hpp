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


UNIX_WBEMProtocolService::UNIX_WBEMProtocolService(void)
{
}

UNIX_WBEMProtocolService::~UNIX_WBEMProtocolService(void)
{
}

Boolean UNIX_WBEMProtocolService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WBEMProtocolService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WBEMProtocolService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WBEMProtocolService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WBEMProtocolService::getCaption() const
{
	return _caption;
}

void UNIX_WBEMProtocolService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WBEMProtocolService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WBEMProtocolService::getDescription() const
{
	return _description;
}

void UNIX_WBEMProtocolService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WBEMProtocolService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WBEMProtocolService::getElementName() const
{
	return _elementName;
}

void UNIX_WBEMProtocolService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WBEMProtocolService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WBEMProtocolService::getGeneration() const
{
	return _generation;
}

void UNIX_WBEMProtocolService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WBEMProtocolService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_WBEMProtocolService::getInstallDate() const
{
	return _installDate;
}

void UNIX_WBEMProtocolService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_WBEMProtocolService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_WBEMProtocolService::getName() const
{
	return _name;
}

void UNIX_WBEMProtocolService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_WBEMProtocolService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_WBEMProtocolService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_WBEMProtocolService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_WBEMProtocolService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_WBEMProtocolService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_WBEMProtocolService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_WBEMProtocolService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_WBEMProtocolService::getStatus() const
{
	return _status;
}

void UNIX_WBEMProtocolService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_WBEMProtocolService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getHealthState() const
{
	return _healthState;
}

void UNIX_WBEMProtocolService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_WBEMProtocolService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_WBEMProtocolService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_WBEMProtocolService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_WBEMProtocolService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_WBEMProtocolService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_WBEMProtocolService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_WBEMProtocolService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_WBEMProtocolService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_WBEMProtocolService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_WBEMProtocolService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_WBEMProtocolService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_WBEMProtocolService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_WBEMProtocolService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_WBEMProtocolService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_WBEMProtocolService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_WBEMProtocolService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_WBEMProtocolService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_WBEMProtocolService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_WBEMProtocolService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_WBEMProtocolService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_WBEMProtocolService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_WBEMProtocolService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_WBEMProtocolService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_WBEMProtocolService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_WBEMProtocolService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_WBEMProtocolService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_WBEMProtocolService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_WBEMProtocolService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_WBEMProtocolService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_WBEMProtocolService::getSystemName() const
{
	return _systemName;
}

void UNIX_WBEMProtocolService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_WBEMProtocolService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_WBEMProtocolService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_WBEMProtocolService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_WBEMProtocolService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_WBEMProtocolService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_WBEMProtocolService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_WBEMProtocolService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_WBEMProtocolService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_WBEMProtocolService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_WBEMProtocolService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_WBEMProtocolService::getStartMode() const
{
	return _startMode;
}

void UNIX_WBEMProtocolService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_WBEMProtocolService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_WBEMProtocolService::getStarted() const
{
	return _started;
}

void UNIX_WBEMProtocolService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_WBEMProtocolService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_WBEMProtocolService::getLoSID() const
{
	return _loSID;
}

void UNIX_WBEMProtocolService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_WBEMProtocolService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_WBEMProtocolService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_WBEMProtocolService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_WBEMProtocolService::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getProtocol() const
{
	return _protocol;
}

void UNIX_WBEMProtocolService::setProtocol(Uint16 &value)
{
	_protocol = value;
}

Boolean UNIX_WBEMProtocolService::getOtherProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL, getOtherProtocol());
	return true;
}

String UNIX_WBEMProtocolService::getOtherProtocol() const
{
	return _otherProtocol;
}

void UNIX_WBEMProtocolService::setOtherProtocol(String &value)
{
	_otherProtocol = value;
}

Boolean UNIX_WBEMProtocolService::getMaxConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS, getMaxConnections());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getMaxConnections() const
{
	return _maxConnections;
}

void UNIX_WBEMProtocolService::setMaxConnections(Uint16 &value)
{
	_maxConnections = value;
}

Boolean UNIX_WBEMProtocolService::getCurrentActiveConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_ACTIVE_CONNECTIONS, getCurrentActiveConnections());
	return true;
}

Uint16 UNIX_WBEMProtocolService::getCurrentActiveConnections() const
{
	return _currentActiveConnections;
}

void UNIX_WBEMProtocolService::setCurrentActiveConnections(Uint16 &value)
{
	_currentActiveConnections = value;
}

Boolean UNIX_WBEMProtocolService::getGenericOperationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERIC_OPERATIONS_SUPPORTED, getGenericOperationsSupported());
	return true;
}

Array<Uint8> UNIX_WBEMProtocolService::getGenericOperationsSupported() const
{
	return _genericOperationsSupported;
}

void UNIX_WBEMProtocolService::setGenericOperationsSupported(Array<Uint8> &value)
{
	_genericOperationsSupported = value;
}

Boolean UNIX_WBEMProtocolService::getProtocolVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSION, getProtocolVersion());
	return true;
}

String UNIX_WBEMProtocolService::getProtocolVersion() const
{
	return _protocolVersion;
}

void UNIX_WBEMProtocolService::setProtocolVersion(String &value)
{
	_protocolVersion = value;
}


void UNIX_WBEMProtocolService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WBEMProtocolService");
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
	_creationClassName = String("UNIX_WBEMProtocolService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_protocol = Uint16(0);
	_otherProtocol = String ("");
	_maxConnections = Uint16(0);
	_currentActiveConnections = Uint16(0);
	_genericOperationsSupported.clear();
	_protocolVersion = String ("");

}

Boolean UNIX_WBEMProtocolService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Protocol"))
			{
				Uint16 protocolValue;
				property.getValue().get(protocolValue);
				setProtocol(protocolValue);
			}
			else if (String::equal(property.getName().getString(), "OtherProtocol"))
			{
				String otherProtocolValue;
				property.getValue().get(otherProtocolValue);
				setOtherProtocol(otherProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "MaxConnections"))
			{
				Uint16 maxConnectionsValue;
				property.getValue().get(maxConnectionsValue);
				setMaxConnections(maxConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentActiveConnections"))
			{
				Uint16 currentActiveConnectionsValue;
				property.getValue().get(currentActiveConnectionsValue);
				setCurrentActiveConnections(currentActiveConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "GenericOperationsSupported"))
			{
				Array<Uint8> genericOperationsSupportedValue;
				property.getValue().get(genericOperationsSupportedValue);
				setGenericOperationsSupported(genericOperationsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolVersion"))
			{
				String protocolVersionValue;
				property.getValue().get(protocolVersionValue);
				setProtocolVersion(protocolVersionValue);
			}
	}
	return true;
}

Uint32 UNIX_WBEMProtocolService::invokeRequestStateChange(
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

Uint32 UNIX_WBEMProtocolService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_WBEMProtocolService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_WBEMProtocolService::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_WBEMProtocolService::invokeListenOnPort(
		Uint32 &inPortNumber,
		CIMInstance &inIPEndpoint,
		CIMInstance &inTCPEndpoint
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_TCPProtocolEndpoint inTCPEndpointObject;
	inTCPEndpointObject.loadInstance(inTCPEndpoint);
	
	/* Execute method ListenOnPort */
	
	
	
	return returnValue;
}

Uint32 UNIX_WBEMProtocolService::invokeListenOnPortIF(
		Uint32 &inPortNumber,
		CIMInstance &inIPEndpoint,
		CIMInstance &inTCPEndpoint,
		Uint32 &inProtocolIFType
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_TCPProtocolEndpoint inTCPEndpointObject;
	inTCPEndpointObject.loadInstance(inTCPEndpoint);
	
	/* Execute method ListenOnPortIF */
	
	
	
	return returnValue;
}


Boolean UNIX_WBEMProtocolService::initialize()
{
	return false;
}

Boolean UNIX_WBEMProtocolService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WBEMProtocolService");
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
	_creationClassName = String("UNIX_WBEMProtocolService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_protocol = Uint16(0);
	_otherProtocol = String ("");
	_maxConnections = Uint16(0);
	_currentActiveConnections = Uint16(0);
	_genericOperationsSupported.clear();
	_protocolVersion = String ("");
	
	return false;
}

Boolean UNIX_WBEMProtocolService::finalize()
{
	return false;
}

Boolean UNIX_WBEMProtocolService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_WBEMProtocolService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WBEMProtocolService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WBEMProtocolService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WBEMProtocolService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WBEMProtocolService::validateInstance()
{
	return true;
}

