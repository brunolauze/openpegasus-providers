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


UNIX_TransparentBridgingService::UNIX_TransparentBridgingService(void)
{
}

UNIX_TransparentBridgingService::~UNIX_TransparentBridgingService(void)
{
}

Boolean UNIX_TransparentBridgingService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TransparentBridgingService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TransparentBridgingService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TransparentBridgingService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TransparentBridgingService::getCaption() const
{
	return _caption;
}

void UNIX_TransparentBridgingService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TransparentBridgingService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TransparentBridgingService::getDescription() const
{
	return _description;
}

void UNIX_TransparentBridgingService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TransparentBridgingService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TransparentBridgingService::getElementName() const
{
	return _elementName;
}

void UNIX_TransparentBridgingService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TransparentBridgingService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TransparentBridgingService::getGeneration() const
{
	return _generation;
}

void UNIX_TransparentBridgingService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TransparentBridgingService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TransparentBridgingService::getInstallDate() const
{
	return _installDate;
}

void UNIX_TransparentBridgingService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_TransparentBridgingService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TransparentBridgingService::getName() const
{
	return _name;
}

void UNIX_TransparentBridgingService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_TransparentBridgingService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TransparentBridgingService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_TransparentBridgingService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_TransparentBridgingService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TransparentBridgingService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_TransparentBridgingService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_TransparentBridgingService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TransparentBridgingService::getStatus() const
{
	return _status;
}

void UNIX_TransparentBridgingService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_TransparentBridgingService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getHealthState() const
{
	return _healthState;
}

void UNIX_TransparentBridgingService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_TransparentBridgingService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_TransparentBridgingService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_TransparentBridgingService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_TransparentBridgingService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_TransparentBridgingService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_TransparentBridgingService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_TransparentBridgingService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_TransparentBridgingService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_TransparentBridgingService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_TransparentBridgingService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_TransparentBridgingService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TransparentBridgingService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_TransparentBridgingService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_TransparentBridgingService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_TransparentBridgingService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_TransparentBridgingService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_TransparentBridgingService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_TransparentBridgingService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TransparentBridgingService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_TransparentBridgingService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_TransparentBridgingService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TransparentBridgingService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_TransparentBridgingService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_TransparentBridgingService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_TransparentBridgingService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_TransparentBridgingService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TransparentBridgingService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_TransparentBridgingService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_TransparentBridgingService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TransparentBridgingService::getSystemName() const
{
	return _systemName;
}

void UNIX_TransparentBridgingService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_TransparentBridgingService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TransparentBridgingService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_TransparentBridgingService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_TransparentBridgingService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_TransparentBridgingService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_TransparentBridgingService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_TransparentBridgingService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_TransparentBridgingService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_TransparentBridgingService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_TransparentBridgingService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_TransparentBridgingService::getStartMode() const
{
	return _startMode;
}

void UNIX_TransparentBridgingService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_TransparentBridgingService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_TransparentBridgingService::getStarted() const
{
	return _started;
}

void UNIX_TransparentBridgingService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_TransparentBridgingService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_TransparentBridgingService::getLoSID() const
{
	return _loSID;
}

void UNIX_TransparentBridgingService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_TransparentBridgingService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_TransparentBridgingService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_TransparentBridgingService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_TransparentBridgingService::getKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYWORDS, getKeywords());
	return true;
}

Array<String> UNIX_TransparentBridgingService::getKeywords() const
{
	return _keywords;
}

void UNIX_TransparentBridgingService::setKeywords(Array<String> &value)
{
	_keywords = value;
}

Boolean UNIX_TransparentBridgingService::getServiceURL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_U_R_L, getServiceURL());
	return true;
}

String UNIX_TransparentBridgingService::getServiceURL() const
{
	return _serviceURL;
}

void UNIX_TransparentBridgingService::setServiceURL(String &value)
{
	_serviceURL = value;
}

Boolean UNIX_TransparentBridgingService::getStartupConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_CONDITIONS, getStartupConditions());
	return true;
}

Array<String> UNIX_TransparentBridgingService::getStartupConditions() const
{
	return _startupConditions;
}

void UNIX_TransparentBridgingService::setStartupConditions(Array<String> &value)
{
	_startupConditions = value;
}

Boolean UNIX_TransparentBridgingService::getStartupParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_PARAMETERS, getStartupParameters());
	return true;
}

Array<String> UNIX_TransparentBridgingService::getStartupParameters() const
{
	return _startupParameters;
}

void UNIX_TransparentBridgingService::setStartupParameters(Array<String> &value)
{
	_startupParameters = value;
}

Boolean UNIX_TransparentBridgingService::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_TransparentBridgingService::getProtocolType() const
{
	return _protocolType;
}

void UNIX_TransparentBridgingService::setProtocolType(Uint16 &value)
{
	_protocolType = value;
}

Boolean UNIX_TransparentBridgingService::getOtherProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL_TYPE, getOtherProtocolType());
	return true;
}

String UNIX_TransparentBridgingService::getOtherProtocolType() const
{
	return _otherProtocolType;
}

void UNIX_TransparentBridgingService::setOtherProtocolType(String &value)
{
	_otherProtocolType = value;
}

Boolean UNIX_TransparentBridgingService::getAgingTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGING_TIME, getAgingTime());
	return true;
}

Uint32 UNIX_TransparentBridgingService::getAgingTime() const
{
	return _agingTime;
}

void UNIX_TransparentBridgingService::setAgingTime(Uint32 &value)
{
	_agingTime = value;
}

Boolean UNIX_TransparentBridgingService::getFID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_ID, getFID());
	return true;
}

Uint32 UNIX_TransparentBridgingService::getFID() const
{
	return _fID;
}

void UNIX_TransparentBridgingService::setFID(Uint32 &value)
{
	_fID = value;
}


void UNIX_TransparentBridgingService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TransparentBridgingService");
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
	_creationClassName = String("UNIX_TransparentBridgingService");
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
	_agingTime = Uint32(0);
	_fID = Uint32(0);

}

Boolean UNIX_TransparentBridgingService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AgingTime"))
			{
				Uint32 agingTimeValue;
				property.getValue().get(agingTimeValue);
				setAgingTime(agingTimeValue);
			}
			else if (String::equal(property.getName().getString(), "FID"))
			{
				Uint32 fIDValue;
				property.getValue().get(fIDValue);
				setFID(fIDValue);
			}
	}
	return true;
}

Uint32 UNIX_TransparentBridgingService::invokeRequestStateChange(
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

Uint32 UNIX_TransparentBridgingService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_TransparentBridgingService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_TransparentBridgingService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_TransparentBridgingService::initialize()
{
	return false;
}

Boolean UNIX_TransparentBridgingService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TransparentBridgingService");
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
	_creationClassName = String("UNIX_TransparentBridgingService");
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
	_agingTime = Uint32(0);
	_fID = Uint32(0);
	
	return false;
}

Boolean UNIX_TransparentBridgingService::finalize()
{
	return false;
}

Boolean UNIX_TransparentBridgingService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_TransparentBridgingService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TransparentBridgingService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransparentBridgingService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransparentBridgingService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransparentBridgingService::validateInstance()
{
	return true;
}

