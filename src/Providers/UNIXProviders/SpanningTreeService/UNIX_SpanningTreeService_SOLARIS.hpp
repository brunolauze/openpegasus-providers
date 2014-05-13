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


UNIX_SpanningTreeService::UNIX_SpanningTreeService(void)
{
}

UNIX_SpanningTreeService::~UNIX_SpanningTreeService(void)
{
}

Boolean UNIX_SpanningTreeService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SpanningTreeService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SpanningTreeService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SpanningTreeService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SpanningTreeService::getCaption() const
{
	return _caption;
}

void UNIX_SpanningTreeService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SpanningTreeService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SpanningTreeService::getDescription() const
{
	return _description;
}

void UNIX_SpanningTreeService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SpanningTreeService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SpanningTreeService::getElementName() const
{
	return _elementName;
}

void UNIX_SpanningTreeService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SpanningTreeService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SpanningTreeService::getGeneration() const
{
	return _generation;
}

void UNIX_SpanningTreeService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SpanningTreeService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SpanningTreeService::getInstallDate() const
{
	return _installDate;
}

void UNIX_SpanningTreeService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SpanningTreeService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SpanningTreeService::getName() const
{
	return _name;
}

void UNIX_SpanningTreeService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SpanningTreeService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SpanningTreeService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SpanningTreeService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SpanningTreeService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SpanningTreeService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SpanningTreeService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SpanningTreeService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SpanningTreeService::getStatus() const
{
	return _status;
}

void UNIX_SpanningTreeService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SpanningTreeService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SpanningTreeService::getHealthState() const
{
	return _healthState;
}

void UNIX_SpanningTreeService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SpanningTreeService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SpanningTreeService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SpanningTreeService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SpanningTreeService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SpanningTreeService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SpanningTreeService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SpanningTreeService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SpanningTreeService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SpanningTreeService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SpanningTreeService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SpanningTreeService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SpanningTreeService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SpanningTreeService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SpanningTreeService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_SpanningTreeService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_SpanningTreeService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SpanningTreeService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_SpanningTreeService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_SpanningTreeService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SpanningTreeService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_SpanningTreeService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_SpanningTreeService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SpanningTreeService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_SpanningTreeService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_SpanningTreeService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SpanningTreeService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_SpanningTreeService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_SpanningTreeService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SpanningTreeService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_SpanningTreeService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_SpanningTreeService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SpanningTreeService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_SpanningTreeService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_SpanningTreeService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SpanningTreeService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SpanningTreeService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SpanningTreeService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SpanningTreeService::getSystemName() const
{
	return _systemName;
}

void UNIX_SpanningTreeService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SpanningTreeService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SpanningTreeService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SpanningTreeService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SpanningTreeService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_SpanningTreeService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_SpanningTreeService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_SpanningTreeService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_SpanningTreeService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_SpanningTreeService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_SpanningTreeService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_SpanningTreeService::getStartMode() const
{
	return _startMode;
}

void UNIX_SpanningTreeService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_SpanningTreeService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_SpanningTreeService::getStarted() const
{
	return _started;
}

void UNIX_SpanningTreeService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_SpanningTreeService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_SpanningTreeService::getLoSID() const
{
	return _loSID;
}

void UNIX_SpanningTreeService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_SpanningTreeService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_SpanningTreeService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_SpanningTreeService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_SpanningTreeService::getKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYWORDS, getKeywords());
	return true;
}

Array<String> UNIX_SpanningTreeService::getKeywords() const
{
	return _keywords;
}

void UNIX_SpanningTreeService::setKeywords(Array<String> &value)
{
	_keywords = value;
}

Boolean UNIX_SpanningTreeService::getServiceURL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_U_R_L, getServiceURL());
	return true;
}

String UNIX_SpanningTreeService::getServiceURL() const
{
	return _serviceURL;
}

void UNIX_SpanningTreeService::setServiceURL(String &value)
{
	_serviceURL = value;
}

Boolean UNIX_SpanningTreeService::getStartupConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_CONDITIONS, getStartupConditions());
	return true;
}

Array<String> UNIX_SpanningTreeService::getStartupConditions() const
{
	return _startupConditions;
}

void UNIX_SpanningTreeService::setStartupConditions(Array<String> &value)
{
	_startupConditions = value;
}

Boolean UNIX_SpanningTreeService::getStartupParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_PARAMETERS, getStartupParameters());
	return true;
}

Array<String> UNIX_SpanningTreeService::getStartupParameters() const
{
	return _startupParameters;
}

void UNIX_SpanningTreeService::setStartupParameters(Array<String> &value)
{
	_startupParameters = value;
}

Boolean UNIX_SpanningTreeService::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_SpanningTreeService::getProtocolType() const
{
	return _protocolType;
}

void UNIX_SpanningTreeService::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_SpanningTreeService::getOtherProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL_TYPE, getOtherProtocolType());
	return true;
}

String UNIX_SpanningTreeService::getOtherProtocolType() const
{
	return _otherProtocolType;
}

void UNIX_SpanningTreeService::setOtherProtocolType(String &value)
{
	_otherProtocolType = value;
}

Boolean UNIX_SpanningTreeService::getProtocolSpec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SPEC, getProtocolSpec());
	return true;
}

Uint16 UNIX_SpanningTreeService::getProtocolSpec() const
{
	return _protocolSpec;
}

void UNIX_SpanningTreeService::setProtocolSpec(Uint16 &value)
{
	_protocolSpec = value;
}

Boolean UNIX_SpanningTreeService::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_SpanningTreeService::getPriority() const
{
	return _priority;
}

void UNIX_SpanningTreeService::setPriority(Uint16 &value)
{
	_priority = value;
}

Boolean UNIX_SpanningTreeService::getSpanningTreeBridgeAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPANNING_TREE_BRIDGE_ADDRESS, getSpanningTreeBridgeAddress());
	return true;
}

String UNIX_SpanningTreeService::getSpanningTreeBridgeAddress() const
{
	return _spanningTreeBridgeAddress;
}

void UNIX_SpanningTreeService::setSpanningTreeBridgeAddress(String &value)
{
	_spanningTreeBridgeAddress = value;
}

Boolean UNIX_SpanningTreeService::getDesignatedRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_ROOT, getDesignatedRoot());
	return true;
}

String UNIX_SpanningTreeService::getDesignatedRoot() const
{
	return _designatedRoot;
}

void UNIX_SpanningTreeService::setDesignatedRoot(String &value)
{
	_designatedRoot = value;
}

Boolean UNIX_SpanningTreeService::getRootCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT_COST, getRootCost());
	return true;
}

Uint16 UNIX_SpanningTreeService::getRootCost() const
{
	return _rootCost;
}

void UNIX_SpanningTreeService::setRootCost(Uint16 &value)
{
	_rootCost = value;
}

Boolean UNIX_SpanningTreeService::getRootPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT_PORT, getRootPort());
	return true;
}

Uint16 UNIX_SpanningTreeService::getRootPort() const
{
	return _rootPort;
}

void UNIX_SpanningTreeService::setRootPort(Uint16 &value)
{
	_rootPort = value;
}

Boolean UNIX_SpanningTreeService::getMaxAge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_AGE, getMaxAge());
	return true;
}

Uint32 UNIX_SpanningTreeService::getMaxAge() const
{
	return _maxAge;
}

void UNIX_SpanningTreeService::setMaxAge(Uint32 &value)
{
	_maxAge = value;
}

Boolean UNIX_SpanningTreeService::getHelloTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HELLO_TIME, getHelloTime());
	return true;
}

Uint32 UNIX_SpanningTreeService::getHelloTime() const
{
	return _helloTime;
}

void UNIX_SpanningTreeService::setHelloTime(Uint32 &value)
{
	_helloTime = value;
}

Boolean UNIX_SpanningTreeService::getHoldTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLD_TIME, getHoldTime());
	return true;
}

Uint32 UNIX_SpanningTreeService::getHoldTime() const
{
	return _holdTime;
}

void UNIX_SpanningTreeService::setHoldTime(Uint32 &value)
{
	_holdTime = value;
}

Boolean UNIX_SpanningTreeService::getForwardDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORWARD_DELAY, getForwardDelay());
	return true;
}

Uint32 UNIX_SpanningTreeService::getForwardDelay() const
{
	return _forwardDelay;
}

void UNIX_SpanningTreeService::setForwardDelay(Uint32 &value)
{
	_forwardDelay = value;
}

Boolean UNIX_SpanningTreeService::getBridgeMaxAge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_MAX_AGE, getBridgeMaxAge());
	return true;
}

Uint32 UNIX_SpanningTreeService::getBridgeMaxAge() const
{
	return _bridgeMaxAge;
}

void UNIX_SpanningTreeService::setBridgeMaxAge(Uint32 &value)
{
	_bridgeMaxAge = value;
}

Boolean UNIX_SpanningTreeService::getBridgeHelloTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_HELLO_TIME, getBridgeHelloTime());
	return true;
}

Uint32 UNIX_SpanningTreeService::getBridgeHelloTime() const
{
	return _bridgeHelloTime;
}

void UNIX_SpanningTreeService::setBridgeHelloTime(Uint32 &value)
{
	_bridgeHelloTime = value;
}

Boolean UNIX_SpanningTreeService::getBridgeForwardDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_FORWARD_DELAY, getBridgeForwardDelay());
	return true;
}

Uint32 UNIX_SpanningTreeService::getBridgeForwardDelay() const
{
	return _bridgeForwardDelay;
}

void UNIX_SpanningTreeService::setBridgeForwardDelay(Uint32 &value)
{
	_bridgeForwardDelay = value;
}


void UNIX_SpanningTreeService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SpanningTreeService");
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
	_creationClassName = String("UNIX_SpanningTreeService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_keywords.clear();
	_serviceURL = String ("");
	_startupConditions.clear();
	_startupParameters.clear();
	_protocolType = Uint16(0);
	_otherProtocolType = String ("");
	_protocolSpec = Uint16(0);
	_priority = Uint16(0);
	_spanningTreeBridgeAddress = String ("");
	_designatedRoot = String ("");
	_rootCost = Uint16(0);
	_rootPort = Uint16(0);
	_maxAge = Uint32(0);
	_helloTime = Uint32(0);
	_holdTime = Uint32(0);
	_forwardDelay = Uint32(0);
	_bridgeMaxAge = Uint32(0);
	_bridgeHelloTime = Uint32(0);
	_bridgeForwardDelay = Uint32(0);

}

Boolean UNIX_SpanningTreeService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Keywords"))
			{
				Array<String> keywordsValue;
				property.getValue().get(keywordsValue);
				setKeywords(keywordsValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceURL"))
			{
				String serviceURLValue;
				property.getValue().get(serviceURLValue);
				setServiceURL(serviceURLValue);
			}
			else if (String::equal(property.getName().getString(), "StartupConditions"))
			{
				Array<String> startupConditionsValue;
				property.getValue().get(startupConditionsValue);
				setStartupConditions(startupConditionsValue);
			}
			else if (String::equal(property.getName().getString(), "StartupParameters"))
			{
				Array<String> startupParametersValue;
				property.getValue().get(startupParametersValue);
				setStartupParameters(startupParametersValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolType"))
			{
				Uint16 protocolTypeValue;
				property.getValue().get(protocolTypeValue);
				setProtocolType(protocolTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherProtocolType"))
			{
				String otherProtocolTypeValue;
				property.getValue().get(otherProtocolTypeValue);
				setOtherProtocolType(otherProtocolTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolSpec"))
			{
				Uint16 protocolSpecValue;
				property.getValue().get(protocolSpecValue);
				setProtocolSpec(protocolSpecValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint16 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "SpanningTreeBridgeAddress"))
			{
				String spanningTreeBridgeAddressValue;
				property.getValue().get(spanningTreeBridgeAddressValue);
				setSpanningTreeBridgeAddress(spanningTreeBridgeAddressValue);
			}
			else if (String::equal(property.getName().getString(), "DesignatedRoot"))
			{
				String designatedRootValue;
				property.getValue().get(designatedRootValue);
				setDesignatedRoot(designatedRootValue);
			}
			else if (String::equal(property.getName().getString(), "RootCost"))
			{
				Uint16 rootCostValue;
				property.getValue().get(rootCostValue);
				setRootCost(rootCostValue);
			}
			else if (String::equal(property.getName().getString(), "RootPort"))
			{
				Uint16 rootPortValue;
				property.getValue().get(rootPortValue);
				setRootPort(rootPortValue);
			}
			else if (String::equal(property.getName().getString(), "MaxAge"))
			{
				Uint32 maxAgeValue;
				property.getValue().get(maxAgeValue);
				setMaxAge(maxAgeValue);
			}
			else if (String::equal(property.getName().getString(), "HelloTime"))
			{
				Uint32 helloTimeValue;
				property.getValue().get(helloTimeValue);
				setHelloTime(helloTimeValue);
			}
			else if (String::equal(property.getName().getString(), "HoldTime"))
			{
				Uint32 holdTimeValue;
				property.getValue().get(holdTimeValue);
				setHoldTime(holdTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ForwardDelay"))
			{
				Uint32 forwardDelayValue;
				property.getValue().get(forwardDelayValue);
				setForwardDelay(forwardDelayValue);
			}
			else if (String::equal(property.getName().getString(), "BridgeMaxAge"))
			{
				Uint32 bridgeMaxAgeValue;
				property.getValue().get(bridgeMaxAgeValue);
				setBridgeMaxAge(bridgeMaxAgeValue);
			}
			else if (String::equal(property.getName().getString(), "BridgeHelloTime"))
			{
				Uint32 bridgeHelloTimeValue;
				property.getValue().get(bridgeHelloTimeValue);
				setBridgeHelloTime(bridgeHelloTimeValue);
			}
			else if (String::equal(property.getName().getString(), "BridgeForwardDelay"))
			{
				Uint32 bridgeForwardDelayValue;
				property.getValue().get(bridgeForwardDelayValue);
				setBridgeForwardDelay(bridgeForwardDelayValue);
			}
	}
	return true;
}

Uint32 UNIX_SpanningTreeService::invokeRequestStateChange(
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

Uint32 UNIX_SpanningTreeService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_SpanningTreeService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_SpanningTreeService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_SpanningTreeService::initialize()
{
	return false;
}

Boolean UNIX_SpanningTreeService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SpanningTreeService");
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
	_creationClassName = String("UNIX_SpanningTreeService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_keywords.clear();
	_serviceURL = String ("");
	_startupConditions.clear();
	_startupParameters.clear();
	_protocolType = Uint16(0);
	_otherProtocolType = String ("");
	_protocolSpec = Uint16(0);
	_priority = Uint16(0);
	_spanningTreeBridgeAddress = String ("");
	_designatedRoot = String ("");
	_rootCost = Uint16(0);
	_rootPort = Uint16(0);
	_maxAge = Uint32(0);
	_helloTime = Uint32(0);
	_holdTime = Uint32(0);
	_forwardDelay = Uint32(0);
	_bridgeMaxAge = Uint32(0);
	_bridgeHelloTime = Uint32(0);
	_bridgeForwardDelay = Uint32(0);
	
	return false;
}

Boolean UNIX_SpanningTreeService::finalize()
{
	return false;
}

Boolean UNIX_SpanningTreeService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SpanningTreeService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SpanningTreeService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpanningTreeService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpanningTreeService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpanningTreeService::validateInstance()
{
	return true;
}

