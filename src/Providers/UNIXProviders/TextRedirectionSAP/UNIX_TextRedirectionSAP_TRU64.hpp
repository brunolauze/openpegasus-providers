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


UNIX_TextRedirectionSAP::UNIX_TextRedirectionSAP(void)
{
}

UNIX_TextRedirectionSAP::~UNIX_TextRedirectionSAP(void)
{
}

Boolean UNIX_TextRedirectionSAP::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TextRedirectionSAP::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TextRedirectionSAP::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TextRedirectionSAP::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TextRedirectionSAP::getCaption() const
{
	return _caption;
}

void UNIX_TextRedirectionSAP::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TextRedirectionSAP::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TextRedirectionSAP::getDescription() const
{
	return _description;
}

void UNIX_TextRedirectionSAP::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TextRedirectionSAP::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TextRedirectionSAP::getElementName() const
{
	return _elementName;
}

void UNIX_TextRedirectionSAP::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TextRedirectionSAP::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TextRedirectionSAP::getGeneration() const
{
	return _generation;
}

void UNIX_TextRedirectionSAP::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TextRedirectionSAP::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TextRedirectionSAP::getInstallDate() const
{
	return _installDate;
}

void UNIX_TextRedirectionSAP::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_TextRedirectionSAP::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TextRedirectionSAP::getName() const
{
	return _name;
}

void UNIX_TextRedirectionSAP::setName(String &value)
{
	_name = value;
}

Boolean UNIX_TextRedirectionSAP::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TextRedirectionSAP::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_TextRedirectionSAP::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_TextRedirectionSAP::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TextRedirectionSAP::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_TextRedirectionSAP::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_TextRedirectionSAP::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TextRedirectionSAP::getStatus() const
{
	return _status;
}

void UNIX_TextRedirectionSAP::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_TextRedirectionSAP::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getHealthState() const
{
	return _healthState;
}

void UNIX_TextRedirectionSAP::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_TextRedirectionSAP::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_TextRedirectionSAP::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_TextRedirectionSAP::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_TextRedirectionSAP::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_TextRedirectionSAP::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_TextRedirectionSAP::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_TextRedirectionSAP::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_TextRedirectionSAP::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_TextRedirectionSAP::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getEnabledState() const
{
	return _enabledState;
}

void UNIX_TextRedirectionSAP::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_TextRedirectionSAP::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TextRedirectionSAP::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_TextRedirectionSAP::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_TextRedirectionSAP::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getRequestedState() const
{
	return _requestedState;
}

void UNIX_TextRedirectionSAP::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_TextRedirectionSAP::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_TextRedirectionSAP::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_TextRedirectionSAP::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TextRedirectionSAP::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_TextRedirectionSAP::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_TextRedirectionSAP::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TextRedirectionSAP::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_TextRedirectionSAP::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_TextRedirectionSAP::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_TextRedirectionSAP::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_TextRedirectionSAP::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TextRedirectionSAP::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_TextRedirectionSAP::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_TextRedirectionSAP::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TextRedirectionSAP::getSystemName() const
{
	return _systemName;
}

void UNIX_TextRedirectionSAP::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_TextRedirectionSAP::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TextRedirectionSAP::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_TextRedirectionSAP::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_TextRedirectionSAP::getSessionTerminateSequence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_TERMINATE_SEQUENCE, getSessionTerminateSequence());
	return true;
}

String UNIX_TextRedirectionSAP::getSessionTerminateSequence() const
{
	return _sessionTerminateSequence;
}

void UNIX_TextRedirectionSAP::setSessionTerminateSequence(String &value)
{
	_sessionTerminateSequence = value;
}

Boolean UNIX_TextRedirectionSAP::getTextFlowType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEXT_FLOW_TYPE, getTextFlowType());
	return true;
}

Uint16 UNIX_TextRedirectionSAP::getTextFlowType() const
{
	return _textFlowType;
}

void UNIX_TextRedirectionSAP::setTextFlowType(Uint16 &value)
{
	_textFlowType = value;
}

Boolean UNIX_TextRedirectionSAP::getOtherTextFlowType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TEXT_FLOW_TYPE, getOtherTextFlowType());
	return true;
}

String UNIX_TextRedirectionSAP::getOtherTextFlowType() const
{
	return _otherTextFlowType;
}

void UNIX_TextRedirectionSAP::setOtherTextFlowType(String &value)
{
	_otherTextFlowType = value;
}


void UNIX_TextRedirectionSAP::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TextRedirectionSAP");
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
	_creationClassName = String("UNIX_TextRedirectionSAP");
	_sessionTerminateSequence = String ("");
	_textFlowType = Uint16(0);
	_otherTextFlowType = String ("");

}

Boolean UNIX_TextRedirectionSAP::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SessionTerminateSequence"))
			{
				String sessionTerminateSequenceValue;
				property.getValue().get(sessionTerminateSequenceValue);
				setSessionTerminateSequence(sessionTerminateSequenceValue);
			}
			else if (String::equal(property.getName().getString(), "TextFlowType"))
			{
				Uint16 textFlowTypeValue;
				property.getValue().get(textFlowTypeValue);
				setTextFlowType(textFlowTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTextFlowType"))
			{
				String otherTextFlowTypeValue;
				property.getValue().get(otherTextFlowTypeValue);
				setOtherTextFlowType(otherTextFlowTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_TextRedirectionSAP::invokeRequestStateChange(
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


Boolean UNIX_TextRedirectionSAP::initialize()
{
	return false;
}

Boolean UNIX_TextRedirectionSAP::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TextRedirectionSAP");
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
	_creationClassName = String("UNIX_TextRedirectionSAP");
	_sessionTerminateSequence = String ("");
	_textFlowType = Uint16(0);
	_otherTextFlowType = String ("");
	
	return false;
}

Boolean UNIX_TextRedirectionSAP::finalize()
{
	return false;
}

Boolean UNIX_TextRedirectionSAP::loadByName(const String name)
{
	return false;
}

Boolean UNIX_TextRedirectionSAP::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TextRedirectionSAP::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TextRedirectionSAP::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TextRedirectionSAP::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TextRedirectionSAP::validateInstance()
{
	return true;
}

