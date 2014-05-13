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


UNIX_PrintService::UNIX_PrintService(void)
{
}

UNIX_PrintService::~UNIX_PrintService(void)
{
}

Boolean UNIX_PrintService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintService::getCaption() const
{
	return _caption;
}

void UNIX_PrintService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintService::getDescription() const
{
	return _description;
}

void UNIX_PrintService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintService::getElementName() const
{
	return _elementName;
}

void UNIX_PrintService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintService::getGeneration() const
{
	return _generation;
}

void UNIX_PrintService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintService::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintService::getName() const
{
	return _name;
}

void UNIX_PrintService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintService::getStatus() const
{
	return _status;
}

void UNIX_PrintService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintService::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PrintService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PrintService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PrintService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PrintService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PrintService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PrintService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PrintService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PrintService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PrintService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PrintService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PrintService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PrintService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PrintService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PrintService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PrintService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PrintService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PrintService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PrintService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PrintService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PrintService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PrintService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PrintService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PrintService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PrintService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PrintService::getSystemName() const
{
	return _systemName;
}

void UNIX_PrintService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PrintService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PrintService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PrintService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PrintService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_PrintService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_PrintService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_PrintService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_PrintService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_PrintService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_PrintService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_PrintService::getStartMode() const
{
	return _startMode;
}

void UNIX_PrintService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_PrintService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_PrintService::getStarted() const
{
	return _started;
}

void UNIX_PrintService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_PrintService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_PrintService::getLoSID() const
{
	return _loSID;
}

void UNIX_PrintService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_PrintService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_PrintService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_PrintService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_PrintService::getPaperTypesAvailable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAPER_TYPES_AVAILABLE, getPaperTypesAvailable());
	return true;
}

Array<String> UNIX_PrintService::getPaperTypesAvailable() const
{
	return _paperTypesAvailable;
}

void UNIX_PrintService::setPaperTypesAvailable(Array<String> &value)
{
	_paperTypesAvailable = value;
}

Boolean UNIX_PrintService::getLanguagesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGES_SUPPORTED, getLanguagesSupported());
	return true;
}

Array<Uint16> UNIX_PrintService::getLanguagesSupported() const
{
	return _languagesSupported;
}

void UNIX_PrintService::setLanguagesSupported(Array<Uint16> &value)
{
	_languagesSupported = value;
}

Boolean UNIX_PrintService::getMimeTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIME_TYPES_SUPPORTED, getMimeTypesSupported());
	return true;
}

Array<String> UNIX_PrintService::getMimeTypesSupported() const
{
	return _mimeTypesSupported;
}

void UNIX_PrintService::setMimeTypesSupported(Array<String> &value)
{
	_mimeTypesSupported = value;
}

Boolean UNIX_PrintService::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_PrintService::getCapabilities() const
{
	return _capabilities;
}

void UNIX_PrintService::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_PrintService::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_PrintService::getCapabilityDescriptions() const
{
	return _capabilityDescriptions;
}

void UNIX_PrintService::setCapabilityDescriptions(Array<String> &value)
{
	_capabilityDescriptions = value;
}

Boolean UNIX_PrintService::getAvailableFilters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_FILTERS, getAvailableFilters());
	return true;
}

Array<String> UNIX_PrintService::getAvailableFilters() const
{
	return _availableFilters;
}

void UNIX_PrintService::setAvailableFilters(Array<String> &value)
{
	_availableFilters = value;
}

Boolean UNIX_PrintService::getAuthenticationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_SUPPORTED, getAuthenticationSupported());
	return true;
}

Array<String> UNIX_PrintService::getAuthenticationSupported() const
{
	return _authenticationSupported;
}

void UNIX_PrintService::setAuthenticationSupported(Array<String> &value)
{
	_authenticationSupported = value;
}

Boolean UNIX_PrintService::getCharset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARSET, getCharset());
	return true;
}

String UNIX_PrintService::getCharset() const
{
	return _charset;
}

void UNIX_PrintService::setCharset(String &value)
{
	_charset = value;
}

Boolean UNIX_PrintService::getDriverInstallerURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DRIVER_INSTALLER_U_R_I, getDriverInstallerURI());
	return true;
}

String UNIX_PrintService::getDriverInstallerURI() const
{
	return _driverInstallerURI;
}

void UNIX_PrintService::setDriverInstallerURI(String &value)
{
	_driverInstallerURI = value;
}

Boolean UNIX_PrintService::getIsAcceptingJobs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ACCEPTING_JOBS, getIsAcceptingJobs());
	return true;
}

Boolean UNIX_PrintService::getIsAcceptingJobs() const
{
	return _isAcceptingJobs;
}

void UNIX_PrintService::setIsAcceptingJobs(Boolean &value)
{
	_isAcceptingJobs = value;
}

Boolean UNIX_PrintService::getLocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION, getLocation());
	return true;
}

String UNIX_PrintService::getLocation() const
{
	return _location;
}

void UNIX_PrintService::setLocation(String &value)
{
	_location = value;
}

Boolean UNIX_PrintService::getMakeAndModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAKE_AND_MODEL, getMakeAndModel());
	return true;
}

String UNIX_PrintService::getMakeAndModel() const
{
	return _makeAndModel;
}

void UNIX_PrintService::setMakeAndModel(String &value)
{
	_makeAndModel = value;
}

Boolean UNIX_PrintService::getMessageFromOperator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_FROM_OPERATOR, getMessageFromOperator());
	return true;
}

String UNIX_PrintService::getMessageFromOperator() const
{
	return _messageFromOperator;
}

void UNIX_PrintService::setMessageFromOperator(String &value)
{
	_messageFromOperator = value;
}

Boolean UNIX_PrintService::getMoreInfoManufacturerURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MORE_INFO_MANUFACTURER_U_R_I, getMoreInfoManufacturerURI());
	return true;
}

String UNIX_PrintService::getMoreInfoManufacturerURI() const
{
	return _moreInfoManufacturerURI;
}

void UNIX_PrintService::setMoreInfoManufacturerURI(String &value)
{
	_moreInfoManufacturerURI = value;
}

Boolean UNIX_PrintService::getMoreInfoURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MORE_INFO_U_R_I, getMoreInfoURI());
	return true;
}

String UNIX_PrintService::getMoreInfoURI() const
{
	return _moreInfoURI;
}

void UNIX_PrintService::setMoreInfoURI(String &value)
{
	_moreInfoURI = value;
}

Boolean UNIX_PrintService::getMultipleOperationTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_OPERATION_TIMEOUT, getMultipleOperationTimeout());
	return true;
}

Uint32 UNIX_PrintService::getMultipleOperationTimeout() const
{
	return _multipleOperationTimeout;
}

void UNIX_PrintService::setMultipleOperationTimeout(Uint32 &value)
{
	_multipleOperationTimeout = value;
}

Boolean UNIX_PrintService::getNaturalLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NATURAL_LANGUAGE, getNaturalLanguage());
	return true;
}

String UNIX_PrintService::getNaturalLanguage() const
{
	return _naturalLanguage;
}

void UNIX_PrintService::setNaturalLanguage(String &value)
{
	_naturalLanguage = value;
}

Boolean UNIX_PrintService::getSecuritySupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_SUPPORTED, getSecuritySupported());
	return true;
}

Array<String> UNIX_PrintService::getSecuritySupported() const
{
	return _securitySupported;
}

void UNIX_PrintService::setSecuritySupported(Array<String> &value)
{
	_securitySupported = value;
}

Boolean UNIX_PrintService::getState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE, getState());
	return true;
}

Uint16 UNIX_PrintService::getState() const
{
	return _state;
}

void UNIX_PrintService::setState(Uint16 &value)
{
	_state = value;
}

Boolean UNIX_PrintService::getStateMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_MESSAGE, getStateMessage());
	return true;
}

String UNIX_PrintService::getStateMessage() const
{
	return _stateMessage;
}

void UNIX_PrintService::setStateMessage(String &value)
{
	_stateMessage = value;
}

Boolean UNIX_PrintService::getStateReasons(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_REASONS, getStateReasons());
	return true;
}

Array<String> UNIX_PrintService::getStateReasons() const
{
	return _stateReasons;
}

void UNIX_PrintService::setStateReasons(Array<String> &value)
{
	_stateReasons = value;
}

Boolean UNIX_PrintService::getUptime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPTIME, getUptime());
	return true;
}

Uint32 UNIX_PrintService::getUptime() const
{
	return _uptime;
}

void UNIX_PrintService::setUptime(Uint32 &value)
{
	_uptime = value;
}


void UNIX_PrintService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintService");
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
	_creationClassName = String("UNIX_PrintService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_paperTypesAvailable.clear();
	_languagesSupported.clear();
	_mimeTypesSupported.clear();
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_availableFilters.clear();
	_authenticationSupported.clear();
	_charset = String ("");
	_driverInstallerURI = String ("");
	_isAcceptingJobs = Boolean(false);
	_location = String ("");
	_makeAndModel = String ("");
	_messageFromOperator = String ("");
	_moreInfoManufacturerURI = String ("");
	_moreInfoURI = String ("");
	_multipleOperationTimeout = Uint32(0);
	_naturalLanguage = String ("");
	_securitySupported.clear();
	_state = Uint16(0);
	_stateMessage = String ("");
	_stateReasons.clear();
	_uptime = Uint32(0);

}

Boolean UNIX_PrintService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PaperTypesAvailable"))
			{
				Array<String> paperTypesAvailableValue;
				property.getValue().get(paperTypesAvailableValue);
				setPaperTypesAvailable(paperTypesAvailableValue);
			}
			else if (String::equal(property.getName().getString(), "LanguagesSupported"))
			{
				Array<Uint16> languagesSupportedValue;
				property.getValue().get(languagesSupportedValue);
				setLanguagesSupported(languagesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MimeTypesSupported"))
			{
				Array<String> mimeTypesSupportedValue;
				property.getValue().get(mimeTypesSupportedValue);
				setMimeTypesSupported(mimeTypesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "Capabilities"))
			{
				Array<Uint16> capabilitiesValue;
				property.getValue().get(capabilitiesValue);
				setCapabilities(capabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "CapabilityDescriptions"))
			{
				Array<String> capabilityDescriptionsValue;
				property.getValue().get(capabilityDescriptionsValue);
				setCapabilityDescriptions(capabilityDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableFilters"))
			{
				Array<String> availableFiltersValue;
				property.getValue().get(availableFiltersValue);
				setAvailableFilters(availableFiltersValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationSupported"))
			{
				Array<String> authenticationSupportedValue;
				property.getValue().get(authenticationSupportedValue);
				setAuthenticationSupported(authenticationSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "Charset"))
			{
				String charsetValue;
				property.getValue().get(charsetValue);
				setCharset(charsetValue);
			}
			else if (String::equal(property.getName().getString(), "DriverInstallerURI"))
			{
				String driverInstallerURIValue;
				property.getValue().get(driverInstallerURIValue);
				setDriverInstallerURI(driverInstallerURIValue);
			}
			else if (String::equal(property.getName().getString(), "IsAcceptingJobs"))
			{
				Boolean isAcceptingJobsValue;
				property.getValue().get(isAcceptingJobsValue);
				setIsAcceptingJobs(isAcceptingJobsValue);
			}
			else if (String::equal(property.getName().getString(), "Location"))
			{
				String locationValue;
				property.getValue().get(locationValue);
				setLocation(locationValue);
			}
			else if (String::equal(property.getName().getString(), "MakeAndModel"))
			{
				String makeAndModelValue;
				property.getValue().get(makeAndModelValue);
				setMakeAndModel(makeAndModelValue);
			}
			else if (String::equal(property.getName().getString(), "MessageFromOperator"))
			{
				String messageFromOperatorValue;
				property.getValue().get(messageFromOperatorValue);
				setMessageFromOperator(messageFromOperatorValue);
			}
			else if (String::equal(property.getName().getString(), "MoreInfoManufacturerURI"))
			{
				String moreInfoManufacturerURIValue;
				property.getValue().get(moreInfoManufacturerURIValue);
				setMoreInfoManufacturerURI(moreInfoManufacturerURIValue);
			}
			else if (String::equal(property.getName().getString(), "MoreInfoURI"))
			{
				String moreInfoURIValue;
				property.getValue().get(moreInfoURIValue);
				setMoreInfoURI(moreInfoURIValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleOperationTimeout"))
			{
				Uint32 multipleOperationTimeoutValue;
				property.getValue().get(multipleOperationTimeoutValue);
				setMultipleOperationTimeout(multipleOperationTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "NaturalLanguage"))
			{
				String naturalLanguageValue;
				property.getValue().get(naturalLanguageValue);
				setNaturalLanguage(naturalLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "SecuritySupported"))
			{
				Array<String> securitySupportedValue;
				property.getValue().get(securitySupportedValue);
				setSecuritySupported(securitySupportedValue);
			}
			else if (String::equal(property.getName().getString(), "State"))
			{
				Uint16 stateValue;
				property.getValue().get(stateValue);
				setState(stateValue);
			}
			else if (String::equal(property.getName().getString(), "StateMessage"))
			{
				String stateMessageValue;
				property.getValue().get(stateMessageValue);
				setStateMessage(stateMessageValue);
			}
			else if (String::equal(property.getName().getString(), "StateReasons"))
			{
				Array<String> stateReasonsValue;
				property.getValue().get(stateReasonsValue);
				setStateReasons(stateReasonsValue);
			}
			else if (String::equal(property.getName().getString(), "Uptime"))
			{
				Uint32 uptimeValue;
				property.getValue().get(uptimeValue);
				setUptime(uptimeValue);
			}
	}
	return true;
}

Uint32 UNIX_PrintService::invokeRequestStateChange(
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

Uint32 UNIX_PrintService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_PrintService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_PrintService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_PrintService::initialize()
{
	return false;
}

Boolean UNIX_PrintService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintService");
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
	_creationClassName = String("UNIX_PrintService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_paperTypesAvailable.clear();
	_languagesSupported.clear();
	_mimeTypesSupported.clear();
	_capabilities.clear();
	_capabilityDescriptions.clear();
	_availableFilters.clear();
	_authenticationSupported.clear();
	_charset = String ("");
	_driverInstallerURI = String ("");
	_isAcceptingJobs = Boolean(false);
	_location = String ("");
	_makeAndModel = String ("");
	_messageFromOperator = String ("");
	_moreInfoManufacturerURI = String ("");
	_moreInfoURI = String ("");
	_multipleOperationTimeout = Uint32(0);
	_naturalLanguage = String ("");
	_securitySupported.clear();
	_state = Uint16(0);
	_stateMessage = String ("");
	_stateReasons.clear();
	_uptime = Uint32(0);
	
	return false;
}

Boolean UNIX_PrintService::finalize()
{
	return false;
}

Boolean UNIX_PrintService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintService::validateInstance()
{
	return true;
}

