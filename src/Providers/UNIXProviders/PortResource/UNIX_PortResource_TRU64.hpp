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


UNIX_PortResource::UNIX_PortResource(void)
{
}

UNIX_PortResource::~UNIX_PortResource(void)
{
}

Boolean UNIX_PortResource::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PortResource::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PortResource::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PortResource::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PortResource::getCaption() const
{
	return _caption;
}

void UNIX_PortResource::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PortResource::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PortResource::getDescription() const
{
	return _description;
}

void UNIX_PortResource::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PortResource::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PortResource::getElementName() const
{
	return _elementName;
}

void UNIX_PortResource::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PortResource::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PortResource::getGeneration() const
{
	return _generation;
}

void UNIX_PortResource::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PortResource::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PortResource::getInstallDate() const
{
	return _installDate;
}

void UNIX_PortResource::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PortResource::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PortResource::getName() const
{
	return _name;
}

void UNIX_PortResource::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PortResource::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PortResource::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PortResource::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PortResource::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PortResource::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PortResource::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PortResource::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PortResource::getStatus() const
{
	return _status;
}

void UNIX_PortResource::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PortResource::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PortResource::getHealthState() const
{
	return _healthState;
}

void UNIX_PortResource::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PortResource::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PortResource::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PortResource::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PortResource::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PortResource::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PortResource::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PortResource::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PortResource::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PortResource::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PortResource::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PortResource::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PortResource::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PortResource::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PortResource::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PortResource::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PortResource::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PortResource::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PortResource::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PortResource::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PortResource::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PortResource::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PortResource::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PortResource::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PortResource::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PortResource::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PortResource::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PortResource::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PortResource::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PortResource::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PortResource::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PortResource::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PortResource::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PortResource::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PortResource::getShareable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHAREABLE, getShareable());
	return true;
}

Boolean UNIX_PortResource::getShareable() const
{
	return _shareable;
}

void UNIX_PortResource::setShareable(Boolean &value)
{
	_shareable = value;
}

Boolean UNIX_PortResource::getImplementationInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPLEMENTATION_INFO, getImplementationInfo());
	return true;
}

Uint16 UNIX_PortResource::getImplementationInfo() const
{
	return _implementationInfo;
}

void UNIX_PortResource::setImplementationInfo(Uint16 &value)
{
	_implementationInfo = value;
}

Boolean UNIX_PortResource::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_PortResource::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_PortResource::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_PortResource::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_PortResource::getCSName() const
{
	return _cSName;
}

void UNIX_PortResource::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_PortResource::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PortResource::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PortResource::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PortResource::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_PortResource::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_PortResource::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_PortResource::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_PortResource::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_PortResource::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}

Boolean UNIX_PortResource::getMappedResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPED_RESOURCE, getMappedResource());
	return true;
}

Uint16 UNIX_PortResource::getMappedResource() const
{
	return _mappedResource;
}

void UNIX_PortResource::setMappedResource(Uint16 &value)
{
	_mappedResource = value;
}


void UNIX_PortResource::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PortResource");
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
	_creationClassName = String("UNIX_PortResource");
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_mappedResource = Uint16(0);

}

Boolean UNIX_PortResource::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "StartingAddress"))
			{
				Uint64 startingAddressValue;
				property.getValue().get(startingAddressValue);
				setStartingAddress(startingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "EndingAddress"))
			{
				Uint64 endingAddressValue;
				property.getValue().get(endingAddressValue);
				setEndingAddress(endingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "MappedResource"))
			{
				Uint16 mappedResourceValue;
				property.getValue().get(mappedResourceValue);
				setMappedResource(mappedResourceValue);
			}
	}
	return true;
}

Uint32 UNIX_PortResource::invokeRequestStateChange(
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


Boolean UNIX_PortResource::initialize()
{
	return false;
}

Boolean UNIX_PortResource::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PortResource");
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
	_creationClassName = String("UNIX_PortResource");
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_mappedResource = Uint16(0);
	
	return false;
}

Boolean UNIX_PortResource::finalize()
{
	return false;
}

Boolean UNIX_PortResource::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PortResource::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String startingAddressKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_STARTING_ADDRESS)) startingAddressKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(String(std::to_string(getStartingAddress()).c_str()), startingAddressKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PortResource::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PortResource::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PortResource::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PortResource::validateInstance()
{
	return true;
}

