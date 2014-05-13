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


UNIX_FingerprintMatchingService::UNIX_FingerprintMatchingService(void)
{
}

UNIX_FingerprintMatchingService::~UNIX_FingerprintMatchingService(void)
{
}

Boolean UNIX_FingerprintMatchingService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FingerprintMatchingService::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FingerprintMatchingService::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FingerprintMatchingService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FingerprintMatchingService::getCaption() const
{
	return _caption;
}

void UNIX_FingerprintMatchingService::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FingerprintMatchingService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FingerprintMatchingService::getDescription() const
{
	return _description;
}

void UNIX_FingerprintMatchingService::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FingerprintMatchingService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FingerprintMatchingService::getElementName() const
{
	return _elementName;
}

void UNIX_FingerprintMatchingService::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FingerprintMatchingService::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FingerprintMatchingService::getGeneration() const
{
	return _generation;
}

void UNIX_FingerprintMatchingService::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FingerprintMatchingService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FingerprintMatchingService::getInstallDate() const
{
	return _installDate;
}

void UNIX_FingerprintMatchingService::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_FingerprintMatchingService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FingerprintMatchingService::getName() const
{
	return _name;
}

void UNIX_FingerprintMatchingService::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FingerprintMatchingService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FingerprintMatchingService::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_FingerprintMatchingService::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_FingerprintMatchingService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FingerprintMatchingService::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_FingerprintMatchingService::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_FingerprintMatchingService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FingerprintMatchingService::getStatus() const
{
	return _status;
}

void UNIX_FingerprintMatchingService::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_FingerprintMatchingService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getHealthState() const
{
	return _healthState;
}

void UNIX_FingerprintMatchingService::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_FingerprintMatchingService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_FingerprintMatchingService::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_FingerprintMatchingService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_FingerprintMatchingService::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_FingerprintMatchingService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_FingerprintMatchingService::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_FingerprintMatchingService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_FingerprintMatchingService::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_FingerprintMatchingService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getEnabledState() const
{
	return _enabledState;
}

void UNIX_FingerprintMatchingService::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_FingerprintMatchingService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FingerprintMatchingService::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_FingerprintMatchingService::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_FingerprintMatchingService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getRequestedState() const
{
	return _requestedState;
}

void UNIX_FingerprintMatchingService::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_FingerprintMatchingService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_FingerprintMatchingService::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_FingerprintMatchingService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FingerprintMatchingService::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_FingerprintMatchingService::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_FingerprintMatchingService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FingerprintMatchingService::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_FingerprintMatchingService::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_FingerprintMatchingService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_FingerprintMatchingService::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_FingerprintMatchingService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FingerprintMatchingService::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FingerprintMatchingService::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FingerprintMatchingService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FingerprintMatchingService::getSystemName() const
{
	return _systemName;
}

void UNIX_FingerprintMatchingService::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FingerprintMatchingService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FingerprintMatchingService::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FingerprintMatchingService::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FingerprintMatchingService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_FingerprintMatchingService::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_FingerprintMatchingService::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_FingerprintMatchingService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_FingerprintMatchingService::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_FingerprintMatchingService::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_FingerprintMatchingService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_FingerprintMatchingService::getStartMode() const
{
	return _startMode;
}

void UNIX_FingerprintMatchingService::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_FingerprintMatchingService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_FingerprintMatchingService::getStarted() const
{
	return _started;
}

void UNIX_FingerprintMatchingService::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_FingerprintMatchingService::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_FingerprintMatchingService::getLoSID() const
{
	return _loSID;
}

void UNIX_FingerprintMatchingService::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_FingerprintMatchingService::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_FingerprintMatchingService::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_FingerprintMatchingService::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_FingerprintMatchingService::getCompressionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_ALGORITHM, getCompressionAlgorithm());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getCompressionAlgorithm() const
{
	return _compressionAlgorithm;
}

void UNIX_FingerprintMatchingService::setCompressionAlgorithm(Uint16 &value)
{
	_compressionAlgorithm = value;
}

Boolean UNIX_FingerprintMatchingService::getMatchingAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCHING_ALGORITHM, getMatchingAlgorithm());
	return true;
}

String UNIX_FingerprintMatchingService::getMatchingAlgorithm() const
{
	return _matchingAlgorithm;
}

void UNIX_FingerprintMatchingService::setMatchingAlgorithm(String &value)
{
	_matchingAlgorithm = value;
}

Boolean UNIX_FingerprintMatchingService::getTemplateFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEMPLATE_FORMAT, getTemplateFormat());
	return true;
}

Uint16 UNIX_FingerprintMatchingService::getTemplateFormat() const
{
	return _templateFormat;
}

void UNIX_FingerprintMatchingService::setTemplateFormat(Uint16 &value)
{
	_templateFormat = value;
}

Boolean UNIX_FingerprintMatchingService::getOtherTemplateFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TEMPLATE_FORMAT, getOtherTemplateFormat());
	return true;
}

String UNIX_FingerprintMatchingService::getOtherTemplateFormat() const
{
	return _otherTemplateFormat;
}

void UNIX_FingerprintMatchingService::setOtherTemplateFormat(String &value)
{
	_otherTemplateFormat = value;
}

Boolean UNIX_FingerprintMatchingService::getFalseRejectRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FALSE_REJECT_RATE, getFalseRejectRate());
	return true;
}

Uint32 UNIX_FingerprintMatchingService::getFalseRejectRate() const
{
	return _falseRejectRate;
}

void UNIX_FingerprintMatchingService::setFalseRejectRate(Uint32 &value)
{
	_falseRejectRate = value;
}

Boolean UNIX_FingerprintMatchingService::getFalseAcceptRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FALSE_ACCEPT_RATE, getFalseAcceptRate());
	return true;
}

Uint32 UNIX_FingerprintMatchingService::getFalseAcceptRate() const
{
	return _falseAcceptRate;
}

void UNIX_FingerprintMatchingService::setFalseAcceptRate(Uint32 &value)
{
	_falseAcceptRate = value;
}

Boolean UNIX_FingerprintMatchingService::getCrossoverErrorRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CROSSOVER_ERROR_RATE, getCrossoverErrorRate());
	return true;
}

Uint32 UNIX_FingerprintMatchingService::getCrossoverErrorRate() const
{
	return _crossoverErrorRate;
}

void UNIX_FingerprintMatchingService::setCrossoverErrorRate(Uint32 &value)
{
	_crossoverErrorRate = value;
}

Boolean UNIX_FingerprintMatchingService::getNumberOfEnrolledUsers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_ENROLLED_USERS, getNumberOfEnrolledUsers());
	return true;
}

Uint32 UNIX_FingerprintMatchingService::getNumberOfEnrolledUsers() const
{
	return _numberOfEnrolledUsers;
}

void UNIX_FingerprintMatchingService::setNumberOfEnrolledUsers(Uint32 &value)
{
	_numberOfEnrolledUsers = value;
}


void UNIX_FingerprintMatchingService::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintMatchingService");
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
	_creationClassName = String("UNIX_FingerprintMatchingService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_compressionAlgorithm = Uint16(0);
	_matchingAlgorithm = String ("");
	_templateFormat = Uint16(0);
	_otherTemplateFormat = String ("");
	_falseRejectRate = Uint32(0);
	_falseAcceptRate = Uint32(0);
	_crossoverErrorRate = Uint32(0);
	_numberOfEnrolledUsers = Uint32(0);

}

Boolean UNIX_FingerprintMatchingService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CompressionAlgorithm"))
			{
				Uint16 compressionAlgorithmValue;
				property.getValue().get(compressionAlgorithmValue);
				setCompressionAlgorithm(compressionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "MatchingAlgorithm"))
			{
				String matchingAlgorithmValue;
				property.getValue().get(matchingAlgorithmValue);
				setMatchingAlgorithm(matchingAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "TemplateFormat"))
			{
				Uint16 templateFormatValue;
				property.getValue().get(templateFormatValue);
				setTemplateFormat(templateFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTemplateFormat"))
			{
				String otherTemplateFormatValue;
				property.getValue().get(otherTemplateFormatValue);
				setOtherTemplateFormat(otherTemplateFormatValue);
			}
			else if (String::equal(property.getName().getString(), "FalseRejectRate"))
			{
				Uint32 falseRejectRateValue;
				property.getValue().get(falseRejectRateValue);
				setFalseRejectRate(falseRejectRateValue);
			}
			else if (String::equal(property.getName().getString(), "FalseAcceptRate"))
			{
				Uint32 falseAcceptRateValue;
				property.getValue().get(falseAcceptRateValue);
				setFalseAcceptRate(falseAcceptRateValue);
			}
			else if (String::equal(property.getName().getString(), "CrossoverErrorRate"))
			{
				Uint32 crossoverErrorRateValue;
				property.getValue().get(crossoverErrorRateValue);
				setCrossoverErrorRate(crossoverErrorRateValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfEnrolledUsers"))
			{
				Uint32 numberOfEnrolledUsersValue;
				property.getValue().get(numberOfEnrolledUsersValue);
				setNumberOfEnrolledUsers(numberOfEnrolledUsersValue);
			}
	}
	return true;
}

Uint32 UNIX_FingerprintMatchingService::invokeRequestStateChange(
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

Uint32 UNIX_FingerprintMatchingService::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_FingerprintMatchingService::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_FingerprintMatchingService::invokeChangeAffectedElementsAssignedSequence(
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


Boolean UNIX_FingerprintMatchingService::initialize()
{
	return false;
}

Boolean UNIX_FingerprintMatchingService::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintMatchingService");
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
	_creationClassName = String("UNIX_FingerprintMatchingService");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_compressionAlgorithm = Uint16(0);
	_matchingAlgorithm = String ("");
	_templateFormat = Uint16(0);
	_otherTemplateFormat = String ("");
	_falseRejectRate = Uint32(0);
	_falseAcceptRate = Uint32(0);
	_crossoverErrorRate = Uint32(0);
	_numberOfEnrolledUsers = Uint32(0);
	
	return false;
}

Boolean UNIX_FingerprintMatchingService::finalize()
{
	return false;
}

Boolean UNIX_FingerprintMatchingService::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FingerprintMatchingService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FingerprintMatchingService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintMatchingService::validateInstance()
{
	return true;
}

