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


UNIX_SwitchService::UNIX_SwitchService(void)
{
}

UNIX_SwitchService::~UNIX_SwitchService(void)
{
}

Boolean UNIX_SwitchService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SwitchService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SwitchService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SwitchService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SwitchService::getCaption() const
{
	return _caption;
}

void UNIX_SwitchService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SwitchService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SwitchService::getDescription() const
{
	return _description;
}

void UNIX_SwitchService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SwitchService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SwitchService::getElementName() const
{
	return _elementName;
}

void UNIX_SwitchService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SwitchService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SwitchService::getGeneration() const
{
	return _generation;
}

void UNIX_SwitchService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SwitchService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SwitchService::getInstallDate() const
{
	return _installDate;
}

void UNIX_SwitchService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SwitchService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SwitchService::getName() const
{
	return _name;
}

void UNIX_SwitchService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SwitchService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SwitchService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SwitchService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SwitchService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SwitchService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SwitchService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SwitchService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SwitchService::getStatus() const
{
	return _status;
}

void UNIX_SwitchService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SwitchService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SwitchService::getHealthState() const
{
	return _healthState;
}

void UNIX_SwitchService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SwitchService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SwitchService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SwitchService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SwitchService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SwitchService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SwitchService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SwitchService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SwitchService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SwitchService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SwitchService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SwitchService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SwitchService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SwitchService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SwitchService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_SwitchService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_SwitchService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SwitchService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_SwitchService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_SwitchService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SwitchService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_SwitchService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_SwitchService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SwitchService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_SwitchService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_SwitchService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SwitchService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_SwitchService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_SwitchService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SwitchService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_SwitchService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_SwitchService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SwitchService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_SwitchService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_SwitchService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SwitchService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SwitchService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SwitchService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SwitchService::getSystemName() const
{
	return _systemName;
}

void UNIX_SwitchService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SwitchService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SwitchService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SwitchService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SwitchService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_SwitchService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_SwitchService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_SwitchService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_SwitchService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_SwitchService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_SwitchService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_SwitchService::getStartMode() const
{
	return _startMode;
}

void UNIX_SwitchService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_SwitchService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_SwitchService::getStarted() const
{
	return _started;
}

void UNIX_SwitchService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_SwitchService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_SwitchService::getLoSID() const
{
	return _loSID;
}

void UNIX_SwitchService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_SwitchService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_SwitchService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_SwitchService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_SwitchService::getKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYWORDS, getKeywords());
	return true;
}

Array<String> UNIX_SwitchService::getKeywords() const
{
	return _keywords;
}

void UNIX_SwitchService::setKeywords(Array<String> &value)
{
	_keywords = value;
}

Boolean UNIX_SwitchService::getServiceURL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_U_R_L, getServiceURL());
	return true;
}

String UNIX_SwitchService::getServiceURL() const
{
	return _serviceURL;
}

void UNIX_SwitchService::setServiceURL(String &value)
{
	_serviceURL = value;
}

Boolean UNIX_SwitchService::getStartupConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_CONDITIONS, getStartupConditions());
	return true;
}

Array<String> UNIX_SwitchService::getStartupConditions() const
{
	return _startupConditions;
}

void UNIX_SwitchService::setStartupConditions(Array<String> &value)
{
	_startupConditions = value;
}

Boolean UNIX_SwitchService::getStartupParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_PARAMETERS, getStartupParameters());
	return true;
}

Array<String> UNIX_SwitchService::getStartupParameters() const
{
	return _startupParameters;
}

void UNIX_SwitchService::setStartupParameters(Array<String> &value)
{
	_startupParameters = value;
}

Boolean UNIX_SwitchService::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_SwitchService::getProtocolType() const
{
	return _protocolType;
}

void UNIX_SwitchService::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_SwitchService::getOtherProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL_TYPE, getOtherProtocolType());
	return true;
}

String UNIX_SwitchService::getOtherProtocolType() const
{
	return _otherProtocolType;
}

void UNIX_SwitchService::setOtherProtocolType(String &value)
{
	_otherProtocolType = value;
}

Boolean UNIX_SwitchService::getBridgeAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_ADDRESS, getBridgeAddress());
	return true;
}

String UNIX_SwitchService::getBridgeAddress() const
{
	return _bridgeAddress;
}

void UNIX_SwitchService::setBridgeAddress(String &value)
{
	_bridgeAddress = value;
}

Boolean UNIX_SwitchService::getNumPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUM_PORTS, getNumPorts());
	return true;
}

Uint16 UNIX_SwitchService::getNumPorts() const
{
	return _numPorts;
}

void UNIX_SwitchService::setNumPorts(Uint16 &value)
{
	_numPorts = value;
}

Boolean UNIX_SwitchService::getBridgeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_TYPE, getBridgeType());
	return true;
}

Uint8 UNIX_SwitchService::getBridgeType() const
{
	return _bridgeType;
}

void UNIX_SwitchService::setBridgeType(Uint8 &value)
{
	_bridgeType = value;
}

Boolean UNIX_SwitchService::getBridgeAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_ADDRESS_TYPE, getBridgeAddressType());
	return true;
}

Uint16 UNIX_SwitchService::getBridgeAddressType() const
{
	return _bridgeAddressType;
}

void UNIX_SwitchService::setBridgeAddressType(Uint16 &value)
{
	_bridgeAddressType = value;
}


void UNIX_SwitchService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SwitchService");
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
	_creationClassName = String("UNIX_SwitchService");
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
	_bridgeAddress = String ("");
	_numPorts = Uint16(0);
	_bridgeType = Uint8(0);
	_bridgeAddressType = Uint16(0);

}

Boolean UNIX_SwitchService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BridgeAddress"))
			{
				String bridgeAddressValue;
				property.getValue().get(bridgeAddressValue);
				setBridgeAddress(bridgeAddressValue);
			}
			else if (String::equal(property.getName().getString(), "NumPorts"))
			{
				Uint16 numPortsValue;
				property.getValue().get(numPortsValue);
				setNumPorts(numPortsValue);
			}
			else if (String::equal(property.getName().getString(), "BridgeType"))
			{
				Uint8 bridgeTypeValue;
				property.getValue().get(bridgeTypeValue);
				setBridgeType(bridgeTypeValue);
			}
			else if (String::equal(property.getName().getString(), "BridgeAddressType"))
			{
				Uint16 bridgeAddressTypeValue;
				property.getValue().get(bridgeAddressTypeValue);
				setBridgeAddressType(bridgeAddressTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_SwitchService::invokeRequestStateChange(
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

Uint32 UNIX_SwitchService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_SwitchService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_SwitchService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_SwitchService::initialize()
{
	return false;
}

Boolean UNIX_SwitchService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SwitchService");
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
	_creationClassName = String("UNIX_SwitchService");
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
	_bridgeAddress = String ("");
	_numPorts = Uint16(0);
	_bridgeType = Uint8(0);
	_bridgeAddressType = Uint16(0);
	
	return false;
}

Boolean UNIX_SwitchService::finalize()
{
	return false;
}

Boolean UNIX_SwitchService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SwitchService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SwitchService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchService::validateInstance()
{
	return true;
}

