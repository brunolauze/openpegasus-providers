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


UNIX_BGPService::UNIX_BGPService(void)
{
}

UNIX_BGPService::~UNIX_BGPService(void)
{
}

Boolean UNIX_BGPService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPService::getCaption() const
{
	return _caption;
}

void UNIX_BGPService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPService::getDescription() const
{
	return _description;
}

void UNIX_BGPService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPService::getElementName() const
{
	return _elementName;
}

void UNIX_BGPService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPService::getGeneration() const
{
	return _generation;
}

void UNIX_BGPService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPService::getInstallDate() const
{
	return _installDate;
}

void UNIX_BGPService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BGPService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPService::getName() const
{
	return _name;
}

void UNIX_BGPService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BGPService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BGPService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BGPService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BGPService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BGPService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPService::getStatus() const
{
	return _status;
}

void UNIX_BGPService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BGPService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPService::getHealthState() const
{
	return _healthState;
}

void UNIX_BGPService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BGPService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BGPService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BGPService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BGPService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BGPService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BGPService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BGPService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BGPService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BGPService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_BGPService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_BGPService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_BGPService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_BGPService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_BGPService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_BGPService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_BGPService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_BGPService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_BGPService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_BGPService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_BGPService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_BGPService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_BGPService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_BGPService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_BGPService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_BGPService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_BGPService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_BGPService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_BGPService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_BGPService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_BGPService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_BGPService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_BGPService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPService::getSystemName() const
{
	return _systemName;
}

void UNIX_BGPService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_BGPService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_BGPService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_BGPService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_BGPService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_BGPService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_BGPService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_BGPService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_BGPService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_BGPService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_BGPService::getStartMode() const
{
	return _startMode;
}

void UNIX_BGPService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_BGPService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_BGPService::getStarted() const
{
	return _started;
}

void UNIX_BGPService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_BGPService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_BGPService::getLoSID() const
{
	return _loSID;
}

void UNIX_BGPService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_BGPService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_BGPService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_BGPService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_BGPService::getKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYWORDS, getKeywords());
	return true;
}

Array<String> UNIX_BGPService::getKeywords() const
{
	return _keywords;
}

void UNIX_BGPService::setKeywords(Array<String> &value)
{
	_keywords = value;
}

Boolean UNIX_BGPService::getServiceURL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_U_R_L, getServiceURL());
	return true;
}

String UNIX_BGPService::getServiceURL() const
{
	return _serviceURL;
}

void UNIX_BGPService::setServiceURL(String &value)
{
	_serviceURL = value;
}

Boolean UNIX_BGPService::getStartupConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_CONDITIONS, getStartupConditions());
	return true;
}

Array<String> UNIX_BGPService::getStartupConditions() const
{
	return _startupConditions;
}

void UNIX_BGPService::setStartupConditions(Array<String> &value)
{
	_startupConditions = value;
}

Boolean UNIX_BGPService::getStartupParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_PARAMETERS, getStartupParameters());
	return true;
}

Array<String> UNIX_BGPService::getStartupParameters() const
{
	return _startupParameters;
}

void UNIX_BGPService::setStartupParameters(Array<String> &value)
{
	_startupParameters = value;
}

Boolean UNIX_BGPService::getRouterID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTER_ID, getRouterID());
	return true;
}

String UNIX_BGPService::getRouterID() const
{
	return _routerID;
}

void UNIX_BGPService::setRouterID(String &value)
{
	_routerID = value;
}

Boolean UNIX_BGPService::getAlgorithmType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALGORITHM_TYPE, getAlgorithmType());
	return true;
}

Uint16 UNIX_BGPService::getAlgorithmType() const
{
	return _algorithmType;
}

void UNIX_BGPService::setAlgorithmType(Uint16 &value)
{
	_algorithmType = value;
}

Boolean UNIX_BGPService::getBGPVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BGP_VERSION, getBGPVersion());
	return true;
}

Uint8 UNIX_BGPService::getBGPVersion() const
{
	return _bGPVersion;
}

void UNIX_BGPService::setBGPVersion(Uint8 &value)
{
	_bGPVersion = value;
}

Boolean UNIX_BGPService::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint16 UNIX_BGPService::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_BGPService::setLastErrorCode(Uint16 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_BGPService::getLastMessageErrorSubCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MESSAGE_ERROR_SUB_CODE, getLastMessageErrorSubCode());
	return true;
}

Uint16 UNIX_BGPService::getLastMessageErrorSubCode() const
{
	return _lastMessageErrorSubCode;
}

void UNIX_BGPService::setLastMessageErrorSubCode(Uint16 &value)
{
	_lastMessageErrorSubCode = value;
}

Boolean UNIX_BGPService::getLastOpenErrorSubCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_OPEN_ERROR_SUB_CODE, getLastOpenErrorSubCode());
	return true;
}

Uint16 UNIX_BGPService::getLastOpenErrorSubCode() const
{
	return _lastOpenErrorSubCode;
}

void UNIX_BGPService::setLastOpenErrorSubCode(Uint16 &value)
{
	_lastOpenErrorSubCode = value;
}

Boolean UNIX_BGPService::getLastUpdateErrorSubCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_UPDATE_ERROR_SUB_CODE, getLastUpdateErrorSubCode());
	return true;
}

Uint16 UNIX_BGPService::getLastUpdateErrorSubCode() const
{
	return _lastUpdateErrorSubCode;
}

void UNIX_BGPService::setLastUpdateErrorSubCode(Uint16 &value)
{
	_lastUpdateErrorSubCode = value;
}


void UNIX_BGPService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPService");
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
	_creationClassName = String("UNIX_BGPService");
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
	_routerID = String ("");
	_algorithmType = Uint16(0);
	_bGPVersion = Uint8(0);
	_lastErrorCode = Uint16(0);
	_lastMessageErrorSubCode = Uint16(0);
	_lastOpenErrorSubCode = Uint16(0);
	_lastUpdateErrorSubCode = Uint16(0);

}

Boolean UNIX_BGPService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RouterID"))
			{
				String routerIDValue;
				property.getValue().get(routerIDValue);
				setRouterID(routerIDValue);
			}
			else if (String::equal(property.getName().getString(), "AlgorithmType"))
			{
				Uint16 algorithmTypeValue;
				property.getValue().get(algorithmTypeValue);
				setAlgorithmType(algorithmTypeValue);
			}
			else if (String::equal(property.getName().getString(), "BGPVersion"))
			{
				Uint8 bGPVersionValue;
				property.getValue().get(bGPVersionValue);
				setBGPVersion(bGPVersionValue);
			}
			else if (String::equal(property.getName().getString(), "LastErrorCode"))
			{
				Uint16 lastErrorCodeValue;
				property.getValue().get(lastErrorCodeValue);
				setLastErrorCode(lastErrorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "LastMessageErrorSubCode"))
			{
				Uint16 lastMessageErrorSubCodeValue;
				property.getValue().get(lastMessageErrorSubCodeValue);
				setLastMessageErrorSubCode(lastMessageErrorSubCodeValue);
			}
			else if (String::equal(property.getName().getString(), "LastOpenErrorSubCode"))
			{
				Uint16 lastOpenErrorSubCodeValue;
				property.getValue().get(lastOpenErrorSubCodeValue);
				setLastOpenErrorSubCode(lastOpenErrorSubCodeValue);
			}
			else if (String::equal(property.getName().getString(), "LastUpdateErrorSubCode"))
			{
				Uint16 lastUpdateErrorSubCodeValue;
				property.getValue().get(lastUpdateErrorSubCodeValue);
				setLastUpdateErrorSubCode(lastUpdateErrorSubCodeValue);
			}
	}
	return true;
}

Uint32 UNIX_BGPService::invokeRequestStateChange(
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

Uint32 UNIX_BGPService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_BGPService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_BGPService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_BGPService::initialize()
{
	return false;
}

Boolean UNIX_BGPService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPService");
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
	_creationClassName = String("UNIX_BGPService");
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
	_routerID = String ("");
	_algorithmType = Uint16(0);
	_bGPVersion = Uint8(0);
	_lastErrorCode = Uint16(0);
	_lastMessageErrorSubCode = Uint16(0);
	_lastOpenErrorSubCode = Uint16(0);
	_lastUpdateErrorSubCode = Uint16(0);
	
	return false;
}

Boolean UNIX_BGPService::finalize()
{
	return false;
}

Boolean UNIX_BGPService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BGPService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BGPService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPService::validateInstance()
{
	return true;
}

