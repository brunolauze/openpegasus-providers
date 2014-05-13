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


UNIX_Provider::UNIX_Provider(void)
{
}

UNIX_Provider::~UNIX_Provider(void)
{
}

Boolean UNIX_Provider::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Provider::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Provider::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Provider::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Provider::getCaption() const
{
	return _caption;
}

void UNIX_Provider::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Provider::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Provider::getDescription() const
{
	return _description;
}

void UNIX_Provider::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Provider::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Provider::getElementName() const
{
	return _elementName;
}

void UNIX_Provider::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Provider::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Provider::getGeneration() const
{
	return _generation;
}

void UNIX_Provider::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Provider::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Provider::getInstallDate() const
{
	return _installDate;
}

void UNIX_Provider::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Provider::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Provider::getName() const
{
	return _name;
}

void UNIX_Provider::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Provider::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Provider::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Provider::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Provider::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Provider::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Provider::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Provider::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Provider::getStatus() const
{
	return _status;
}

void UNIX_Provider::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Provider::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Provider::getHealthState() const
{
	return _healthState;
}

void UNIX_Provider::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Provider::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Provider::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Provider::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Provider::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Provider::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Provider::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Provider::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Provider::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Provider::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Provider::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Provider::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Provider::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Provider::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Provider::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Provider::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Provider::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Provider::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Provider::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Provider::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Provider::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Provider::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Provider::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Provider::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Provider::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Provider::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Provider::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Provider::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Provider::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Provider::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Provider::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Provider::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Provider::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Provider::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Provider::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_Provider::getHandle() const
{
	return _handle;
}

void UNIX_Provider::setHandle(String &value)
{
	_handle = value;
}

Boolean UNIX_Provider::getClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_NAME, getClassName());
	return true;
}

Array<String> UNIX_Provider::getClassName() const
{
	return _className;
}

void UNIX_Provider::setClassName(Array<String> &value)
{
	_className = value;
}

Boolean UNIX_Provider::getNamespaces(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAMESPACES, getNamespaces());
	return true;
}

Array<String> UNIX_Provider::getNamespaces() const
{
	return _namespaces;
}

void UNIX_Provider::setNamespaces(Array<String> &value)
{
	_namespaces = value;
}

Boolean UNIX_Provider::getInterface(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERFACE, getInterface());
	return true;
}

Uint16 UNIX_Provider::getInterface() const
{
	return _interface;
}

void UNIX_Provider::setInterface(Uint16 &value)
{
	_interface = value;
}

Boolean UNIX_Provider::getOtherInterfaceDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INTERFACE_DESCRIPTION, getOtherInterfaceDescription());
	return true;
}

String UNIX_Provider::getOtherInterfaceDescription() const
{
	return _otherInterfaceDescription;
}

void UNIX_Provider::setOtherInterfaceDescription(String &value)
{
	_otherInterfaceDescription = value;
}


void UNIX_Provider::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Provider");
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
	_handle = String ("");
	_className.clear();
	_namespaces.clear();
	_interface = Uint16(0);
	_otherInterfaceDescription = String ("");

}

Boolean UNIX_Provider::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Handle"))
			{
				String handleValue;
				property.getValue().get(handleValue);
				setHandle(handleValue);
			}
			else if (String::equal(property.getName().getString(), "ClassName"))
			{
				Array<String> classNameValue;
				property.getValue().get(classNameValue);
				setClassName(classNameValue);
			}
			else if (String::equal(property.getName().getString(), "Namespaces"))
			{
				Array<String> namespacesValue;
				property.getValue().get(namespacesValue);
				setNamespaces(namespacesValue);
			}
			else if (String::equal(property.getName().getString(), "Interface"))
			{
				Uint16 interfaceValue;
				property.getValue().get(interfaceValue);
				setInterface(interfaceValue);
			}
			else if (String::equal(property.getName().getString(), "OtherInterfaceDescription"))
			{
				String otherInterfaceDescriptionValue;
				property.getValue().get(otherInterfaceDescriptionValue);
				setOtherInterfaceDescription(otherInterfaceDescriptionValue);
			}
	}
	return true;
}

Uint32 UNIX_Provider::invokeRequestStateChange(
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


Boolean UNIX_Provider::initialize()
{
	return false;
}

Boolean UNIX_Provider::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Provider");
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
	_handle = String ("");
	_className.clear();
	_namespaces.clear();
	_interface = Uint16(0);
	_otherInterfaceDescription = String ("");
	
	return false;
}

Boolean UNIX_Provider::finalize()
{
	return false;
}

Boolean UNIX_Provider::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Provider::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Provider::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Provider::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Provider::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Provider::validateInstance()
{
	return true;
}

