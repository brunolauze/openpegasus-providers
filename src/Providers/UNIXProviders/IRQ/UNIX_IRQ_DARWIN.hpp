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


UNIX_IRQ::UNIX_IRQ(void)
{
}

UNIX_IRQ::~UNIX_IRQ(void)
{
}

Boolean UNIX_IRQ::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IRQ::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IRQ::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IRQ::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IRQ::getCaption() const
{
	return _caption;
}

void UNIX_IRQ::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IRQ::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IRQ::getDescription() const
{
	return _description;
}

void UNIX_IRQ::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IRQ::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IRQ::getElementName() const
{
	return _elementName;
}

void UNIX_IRQ::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IRQ::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IRQ::getGeneration() const
{
	return _generation;
}

void UNIX_IRQ::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IRQ::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IRQ::getInstallDate() const
{
	return _installDate;
}

void UNIX_IRQ::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_IRQ::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IRQ::getName() const
{
	return _name;
}

void UNIX_IRQ::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IRQ::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IRQ::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_IRQ::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_IRQ::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IRQ::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_IRQ::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_IRQ::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IRQ::getStatus() const
{
	return _status;
}

void UNIX_IRQ::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_IRQ::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IRQ::getHealthState() const
{
	return _healthState;
}

void UNIX_IRQ::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_IRQ::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IRQ::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_IRQ::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_IRQ::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IRQ::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_IRQ::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_IRQ::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IRQ::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_IRQ::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_IRQ::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IRQ::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_IRQ::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_IRQ::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IRQ::getEnabledState() const
{
	return _enabledState;
}

void UNIX_IRQ::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_IRQ::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IRQ::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_IRQ::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_IRQ::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IRQ::getRequestedState() const
{
	return _requestedState;
}

void UNIX_IRQ::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_IRQ::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IRQ::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_IRQ::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_IRQ::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IRQ::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_IRQ::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_IRQ::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IRQ::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_IRQ::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_IRQ::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IRQ::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_IRQ::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_IRQ::getShareable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHAREABLE, getShareable());
	return true;
}

Boolean UNIX_IRQ::getShareable() const
{
	return _shareable;
}

void UNIX_IRQ::setShareable(Boolean &value)
{
	_shareable = value;
}

Boolean UNIX_IRQ::getImplementationInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPLEMENTATION_INFO, getImplementationInfo());
	return true;
}

Uint16 UNIX_IRQ::getImplementationInfo() const
{
	return _implementationInfo;
}

void UNIX_IRQ::setImplementationInfo(Uint16 &value)
{
	_implementationInfo = value;
}

Boolean UNIX_IRQ::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_IRQ::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_IRQ::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_IRQ::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_IRQ::getCSName() const
{
	return _cSName;
}

void UNIX_IRQ::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_IRQ::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IRQ::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IRQ::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IRQ::getIRQNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IRQ_NUMBER, getIRQNumber());
	return true;
}

Uint32 UNIX_IRQ::getIRQNumber() const
{
	return _iRQNumber;
}

void UNIX_IRQ::setIRQNumber(Uint32 &value)
{
	_iRQNumber = value;
}

Boolean UNIX_IRQ::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_IRQ::getAvailability() const
{
	return _availability;
}

void UNIX_IRQ::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_IRQ::getTriggerType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRIGGER_TYPE, getTriggerType());
	return true;
}

Uint16 UNIX_IRQ::getTriggerType() const
{
	return _triggerType;
}

void UNIX_IRQ::setTriggerType(Uint16 &value)
{
	_triggerType = value;
}

Boolean UNIX_IRQ::getTriggerLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRIGGER_LEVEL, getTriggerLevel());
	return true;
}

Uint16 UNIX_IRQ::getTriggerLevel() const
{
	return _triggerLevel;
}

void UNIX_IRQ::setTriggerLevel(Uint16 &value)
{
	_triggerLevel = value;
}

Boolean UNIX_IRQ::getHardware(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HARDWARE, getHardware());
	return true;
}

Boolean UNIX_IRQ::getHardware() const
{
	return _hardware;
}

void UNIX_IRQ::setHardware(Boolean &value)
{
	_hardware = value;
}


void UNIX_IRQ::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IRQ");
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
	_shareable = Boolean(false);
	_implementationInfo = Uint16(0);
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IRQ");
	_iRQNumber = Uint32(0);
	_availability = Uint16(0);
	_triggerType = Uint16(0);
	_triggerLevel = Uint16(0);
	_hardware = Boolean(false);

}

Boolean UNIX_IRQ::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Shareable"))
			{
				Boolean shareableValue;
				property.getValue().get(shareableValue);
				setShareable(shareableValue);
			}
			else if (String::equal(property.getName().getString(), "ImplementationInfo"))
			{
				Uint16 implementationInfoValue;
				property.getValue().get(implementationInfoValue);
				setImplementationInfo(implementationInfoValue);
			}
			else if (String::equal(property.getName().getString(), "CSCreationClassName"))
			{
				String cSCreationClassNameValue;
				property.getValue().get(cSCreationClassNameValue);
				setCSCreationClassName(cSCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "CSName"))
			{
				String cSNameValue;
				property.getValue().get(cSNameValue);
				setCSName(cSNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "IRQNumber"))
			{
				Uint32 iRQNumberValue;
				property.getValue().get(iRQNumberValue);
				setIRQNumber(iRQNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Availability"))
			{
				Uint16 availabilityValue;
				property.getValue().get(availabilityValue);
				setAvailability(availabilityValue);
			}
			else if (String::equal(property.getName().getString(), "TriggerType"))
			{
				Uint16 triggerTypeValue;
				property.getValue().get(triggerTypeValue);
				setTriggerType(triggerTypeValue);
			}
			else if (String::equal(property.getName().getString(), "TriggerLevel"))
			{
				Uint16 triggerLevelValue;
				property.getValue().get(triggerLevelValue);
				setTriggerLevel(triggerLevelValue);
			}
			else if (String::equal(property.getName().getString(), "Hardware"))
			{
				Boolean hardwareValue;
				property.getValue().get(hardwareValue);
				setHardware(hardwareValue);
			}
	}
	return true;
}

Uint32 UNIX_IRQ::invokeRequestStateChange(
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


Boolean UNIX_IRQ::initialize()
{
	return false;
}

Boolean UNIX_IRQ::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IRQ");
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
	_shareable = Boolean(false);
	_implementationInfo = Uint16(0);
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IRQ");
	_iRQNumber = Uint32(0);
	_availability = Uint16(0);
	_triggerType = Uint16(0);
	_triggerLevel = Uint16(0);
	_hardware = Boolean(false);
	
	return false;
}

Boolean UNIX_IRQ::finalize()
{
	return false;
}

Boolean UNIX_IRQ::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IRQ::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String iRQNumberKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_IRQ_NUMBER)) iRQNumberKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(String(std::to_string(getIRQNumber()).c_str()), iRQNumberKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_IRQ::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IRQ::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IRQ::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IRQ::validateInstance()
{
	return true;
}

