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


UNIX_SWRFile::UNIX_SWRFile(void)
{
}

UNIX_SWRFile::~UNIX_SWRFile(void)
{
}

Boolean UNIX_SWRFile::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SWRFile::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SWRFile::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SWRFile::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SWRFile::getCaption() const
{
	return _caption;
}

void UNIX_SWRFile::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SWRFile::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SWRFile::getDescription() const
{
	return _description;
}

void UNIX_SWRFile::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SWRFile::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SWRFile::getElementName() const
{
	return _elementName;
}

void UNIX_SWRFile::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SWRFile::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SWRFile::getGeneration() const
{
	return _generation;
}

void UNIX_SWRFile::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SWRFile::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SWRFile::getInstallDate() const
{
	return _installDate;
}

void UNIX_SWRFile::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SWRFile::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SWRFile::getName() const
{
	return _name;
}

void UNIX_SWRFile::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SWRFile::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SWRFile::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SWRFile::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SWRFile::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SWRFile::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SWRFile::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SWRFile::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SWRFile::getStatus() const
{
	return _status;
}

void UNIX_SWRFile::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SWRFile::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SWRFile::getHealthState() const
{
	return _healthState;
}

void UNIX_SWRFile::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SWRFile::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SWRFile::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SWRFile::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SWRFile::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SWRFile::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SWRFile::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SWRFile::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SWRFile::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SWRFile::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SWRFile::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SWRFile::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SWRFile::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SWRFile::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SWRFile::getEnabledState() const
{
	return _enabledState;
}

void UNIX_SWRFile::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_SWRFile::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SWRFile::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_SWRFile::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_SWRFile::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SWRFile::getRequestedState() const
{
	return _requestedState;
}

void UNIX_SWRFile::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_SWRFile::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SWRFile::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_SWRFile::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_SWRFile::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SWRFile::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_SWRFile::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_SWRFile::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SWRFile::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_SWRFile::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_SWRFile::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SWRFile::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_SWRFile::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_SWRFile::getIsAspect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ASPECT, getIsAspect());
	return true;
}

Uint16 UNIX_SWRFile::getIsAspect() const
{
	return _isAspect;
}

void UNIX_SWRFile::setIsAspect(Uint16 &value)
{
	_isAspect = value;
}

Boolean UNIX_SWRFile::getAspectInUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASPECT_IN_USE, getAspectInUse());
	return true;
}

Uint16 UNIX_SWRFile::getAspectInUse() const
{
	return _aspectInUse;
}

void UNIX_SWRFile::setAspectInUse(Uint16 &value)
{
	_aspectInUse = value;
}

Boolean UNIX_SWRFile::getByReference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BY_REFERENCE, getByReference());
	return true;
}

Uint16 UNIX_SWRFile::getByReference() const
{
	return _byReference;
}

void UNIX_SWRFile::setByReference(Uint16 &value)
{
	_byReference = value;
}

Boolean UNIX_SWRFile::getSoftwareResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_RESOURCE_TYPE, getSoftwareResourceType());
	return true;
}

Uint16 UNIX_SWRFile::getSoftwareResourceType() const
{
	return _softwareResourceType;
}

void UNIX_SWRFile::setSoftwareResourceType(Uint16 &value)
{
	_softwareResourceType = value;
}


void UNIX_SWRFile::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SWRFile");
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
	_isAspect = Uint16(0);
	_aspectInUse = Uint16(0);
	_byReference = Uint16(0);
	_softwareResourceType = Uint16(0);

}

Boolean UNIX_SWRFile::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsAspect"))
			{
				Uint16 isAspectValue;
				property.getValue().get(isAspectValue);
				setIsAspect(isAspectValue);
			}
			else if (String::equal(property.getName().getString(), "AspectInUse"))
			{
				Uint16 aspectInUseValue;
				property.getValue().get(aspectInUseValue);
				setAspectInUse(aspectInUseValue);
			}
			else if (String::equal(property.getName().getString(), "ByReference"))
			{
				Uint16 byReferenceValue;
				property.getValue().get(byReferenceValue);
				setByReference(byReferenceValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareResourceType"))
			{
				Uint16 softwareResourceTypeValue;
				property.getValue().get(softwareResourceTypeValue);
				setSoftwareResourceType(softwareResourceTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_SWRFile::invokeRequestStateChange(
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

Uint32 UNIX_SWRFile::invokeReinitialize()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reinitialize */
	
	
	
	return returnValue;
}


Boolean UNIX_SWRFile::initialize()
{
	return false;
}

Boolean UNIX_SWRFile::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SWRFile");
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
	_isAspect = Uint16(0);
	_aspectInUse = Uint16(0);
	_byReference = Uint16(0);
	_softwareResourceType = Uint16(0);
	
	return false;
}

Boolean UNIX_SWRFile::finalize()
{
	return false;
}

Boolean UNIX_SWRFile::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SWRFile::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SWRFile::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRFile::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRFile::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SWRFile::validateInstance()
{
	return true;
}

