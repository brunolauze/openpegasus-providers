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


UNIX_MPLSLSP::UNIX_MPLSLSP(void)
{
}

UNIX_MPLSLSP::~UNIX_MPLSLSP(void)
{
}

Boolean UNIX_MPLSLSP::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSLSP::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSLSP::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSLSP::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSLSP::getCaption() const
{
	return _caption;
}

void UNIX_MPLSLSP::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSLSP::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSLSP::getDescription() const
{
	return _description;
}

void UNIX_MPLSLSP::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSLSP::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSLSP::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSLSP::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSLSP::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSLSP::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSLSP::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSLSP::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MPLSLSP::getInstallDate() const
{
	return _installDate;
}

void UNIX_MPLSLSP::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_MPLSLSP::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MPLSLSP::getName() const
{
	return _name;
}

void UNIX_MPLSLSP::setName(String &value)
{
	_name = value;
}

Boolean UNIX_MPLSLSP::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MPLSLSP::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_MPLSLSP::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_MPLSLSP::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MPLSLSP::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_MPLSLSP::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_MPLSLSP::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MPLSLSP::getStatus() const
{
	return _status;
}

void UNIX_MPLSLSP::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_MPLSLSP::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MPLSLSP::getHealthState() const
{
	return _healthState;
}

void UNIX_MPLSLSP::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_MPLSLSP::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MPLSLSP::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_MPLSLSP::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_MPLSLSP::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MPLSLSP::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_MPLSLSP::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_MPLSLSP::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MPLSLSP::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_MPLSLSP::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_MPLSLSP::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MPLSLSP::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_MPLSLSP::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_MPLSLSP::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_MPLSLSP::getEnabledState() const
{
	return _enabledState;
}

void UNIX_MPLSLSP::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_MPLSLSP::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_MPLSLSP::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_MPLSLSP::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_MPLSLSP::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_MPLSLSP::getRequestedState() const
{
	return _requestedState;
}

void UNIX_MPLSLSP::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_MPLSLSP::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_MPLSLSP::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_MPLSLSP::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_MPLSLSP::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_MPLSLSP::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_MPLSLSP::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_MPLSLSP::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_MPLSLSP::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_MPLSLSP::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_MPLSLSP::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_MPLSLSP::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_MPLSLSP::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_MPLSLSP::getEstablished(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTABLISHED, getEstablished());
	return true;
}

Boolean UNIX_MPLSLSP::getEstablished() const
{
	return _established;
}

void UNIX_MPLSLSP::setEstablished(Boolean &value)
{
	_established = value;
}

Boolean UNIX_MPLSLSP::getNestingLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NESTING_LEVEL, getNestingLevel());
	return true;
}

Uint16 UNIX_MPLSLSP::getNestingLevel() const
{
	return _nestingLevel;
}

void UNIX_MPLSLSP::setNestingLevel(Uint16 &value)
{
	_nestingLevel = value;
}

Boolean UNIX_MPLSLSP::getLocalLSPId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_L_SPID, getLocalLSPId());
	return true;
}

Uint16 UNIX_MPLSLSP::getLocalLSPId() const
{
	return _localLSPId;
}

void UNIX_MPLSLSP::setLocalLSPId(Uint16 &value)
{
	_localLSPId = value;
}

Boolean UNIX_MPLSLSP::getIngressIPAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INGRESS_IP_ADDRESSES, getIngressIPAddresses());
	return true;
}

Array<String> UNIX_MPLSLSP::getIngressIPAddresses() const
{
	return _ingressIPAddresses;
}

void UNIX_MPLSLSP::setIngressIPAddresses(Array<String> &value)
{
	_ingressIPAddresses = value;
}

Boolean UNIX_MPLSLSP::getEgressIPAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EGRESS_IP_ADDRESSES, getEgressIPAddresses());
	return true;
}

Array<String> UNIX_MPLSLSP::getEgressIPAddresses() const
{
	return _egressIPAddresses;
}

void UNIX_MPLSLSP::setEgressIPAddresses(Array<String> &value)
{
	_egressIPAddresses = value;
}

Boolean UNIX_MPLSLSP::getIngressMayReroute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INGRESS_MAY_REROUTE, getIngressMayReroute());
	return true;
}

Boolean UNIX_MPLSLSP::getIngressMayReroute() const
{
	return _ingressMayReroute;
}

void UNIX_MPLSLSP::setIngressMayReroute(Boolean &value)
{
	_ingressMayReroute = value;
}

Boolean UNIX_MPLSLSP::getIsPersistent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PERSISTENT, getIsPersistent());
	return true;
}

Boolean UNIX_MPLSLSP::getIsPersistent() const
{
	return _isPersistent;
}

void UNIX_MPLSLSP::setIsPersistent(Boolean &value)
{
	_isPersistent = value;
}


void UNIX_MPLSLSP::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSLSP");
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
	_established = Boolean(false);
	_nestingLevel = Uint16(0);
	_localLSPId = Uint16(0);
	_ingressIPAddresses.clear();
	_egressIPAddresses.clear();
	_ingressMayReroute = Boolean(false);
	_isPersistent = Boolean(false);

}

Boolean UNIX_MPLSLSP::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Established"))
			{
				Boolean establishedValue;
				property.getValue().get(establishedValue);
				setEstablished(establishedValue);
			}
			else if (String::equal(property.getName().getString(), "NestingLevel"))
			{
				Uint16 nestingLevelValue;
				property.getValue().get(nestingLevelValue);
				setNestingLevel(nestingLevelValue);
			}
			else if (String::equal(property.getName().getString(), "LocalLSPId"))
			{
				Uint16 localLSPIdValue;
				property.getValue().get(localLSPIdValue);
				setLocalLSPId(localLSPIdValue);
			}
			else if (String::equal(property.getName().getString(), "IngressIPAddresses"))
			{
				Array<String> ingressIPAddressesValue;
				property.getValue().get(ingressIPAddressesValue);
				setIngressIPAddresses(ingressIPAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "EgressIPAddresses"))
			{
				Array<String> egressIPAddressesValue;
				property.getValue().get(egressIPAddressesValue);
				setEgressIPAddresses(egressIPAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "IngressMayReroute"))
			{
				Boolean ingressMayRerouteValue;
				property.getValue().get(ingressMayRerouteValue);
				setIngressMayReroute(ingressMayRerouteValue);
			}
			else if (String::equal(property.getName().getString(), "IsPersistent"))
			{
				Boolean isPersistentValue;
				property.getValue().get(isPersistentValue);
				setIsPersistent(isPersistentValue);
			}
	}
	return true;
}

Uint32 UNIX_MPLSLSP::invokeRequestStateChange(
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


Boolean UNIX_MPLSLSP::initialize()
{
	return false;
}

Boolean UNIX_MPLSLSP::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSLSP");
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
	_established = Boolean(false);
	_nestingLevel = Uint16(0);
	_localLSPId = Uint16(0);
	_ingressIPAddresses.clear();
	_egressIPAddresses.clear();
	_ingressMayReroute = Boolean(false);
	_isPersistent = Boolean(false);
	
	return false;
}

Boolean UNIX_MPLSLSP::finalize()
{
	return false;
}

Boolean UNIX_MPLSLSP::loadByName(const String name)
{
	return false;
}

Boolean UNIX_MPLSLSP::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSLSP::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSLSP::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSLSP::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSLSP::validateInstance()
{
	return true;
}

