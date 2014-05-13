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


UNIX_EthernetNICDiagnosticTest::UNIX_EthernetNICDiagnosticTest(void)
{
}

UNIX_EthernetNICDiagnosticTest::~UNIX_EthernetNICDiagnosticTest(void)
{
}

Boolean UNIX_EthernetNICDiagnosticTest::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getInstanceID() const
{
	return _instanceID;
}

void UNIX_EthernetNICDiagnosticTest::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getCaption() const
{
	return _caption;
}

void UNIX_EthernetNICDiagnosticTest::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getDescription() const
{
	return _description;
}

void UNIX_EthernetNICDiagnosticTest::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getElementName() const
{
	return _elementName;
}

void UNIX_EthernetNICDiagnosticTest::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_EthernetNICDiagnosticTest::getGeneration() const
{
	return _generation;
}

void UNIX_EthernetNICDiagnosticTest::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_EthernetNICDiagnosticTest::getInstallDate() const
{
	return _installDate;
}

void UNIX_EthernetNICDiagnosticTest::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getName() const
{
	return _name;
}

void UNIX_EthernetNICDiagnosticTest::setName(String &value)
{
	_name = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticTest::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_EthernetNICDiagnosticTest::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticTest::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_EthernetNICDiagnosticTest::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getStatus() const
{
	return _status;
}

void UNIX_EthernetNICDiagnosticTest::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getHealthState() const
{
	return _healthState;
}

void UNIX_EthernetNICDiagnosticTest::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_EthernetNICDiagnosticTest::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_EthernetNICDiagnosticTest::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_EthernetNICDiagnosticTest::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_EthernetNICDiagnosticTest::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getEnabledState() const
{
	return _enabledState;
}

void UNIX_EthernetNICDiagnosticTest::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_EthernetNICDiagnosticTest::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getRequestedState() const
{
	return _requestedState;
}

void UNIX_EthernetNICDiagnosticTest::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_EthernetNICDiagnosticTest::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_EthernetNICDiagnosticTest::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_EthernetNICDiagnosticTest::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticTest::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_EthernetNICDiagnosticTest::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_EthernetNICDiagnosticTest::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_EthernetNICDiagnosticTest::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getSystemName() const
{
	return _systemName;
}

void UNIX_EthernetNICDiagnosticTest::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_EthernetNICDiagnosticTest::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_EthernetNICDiagnosticTest::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_EthernetNICDiagnosticTest::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getStartMode() const
{
	return _startMode;
}

void UNIX_EthernetNICDiagnosticTest::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_EthernetNICDiagnosticTest::getStarted() const
{
	return _started;
}

void UNIX_EthernetNICDiagnosticTest::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getLoSID() const
{
	return _loSID;
}

void UNIX_EthernetNICDiagnosticTest::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_EthernetNICDiagnosticTest::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticTest::getCharacteristics() const
{
	return _characteristics;
}

void UNIX_EthernetNICDiagnosticTest::setCharacteristics(Array<Uint16> &value)
{
	_characteristics = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getOtherCharacteristicDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTIC_DESCRIPTION, getOtherCharacteristicDescription());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getOtherCharacteristicDescription() const
{
	return _otherCharacteristicDescription;
}

void UNIX_EthernetNICDiagnosticTest::setOtherCharacteristicDescription(String &value)
{
	_otherCharacteristicDescription = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getOtherCharacteristicsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTICS_DESCRIPTIONS, getOtherCharacteristicsDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticTest::getOtherCharacteristicsDescriptions() const
{
	return _otherCharacteristicsDescriptions;
}

void UNIX_EthernetNICDiagnosticTest::setOtherCharacteristicsDescriptions(Array<String> &value)
{
	_otherCharacteristicsDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getIsInUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_IN_USE, getIsInUse());
	return true;
}

Boolean UNIX_EthernetNICDiagnosticTest::getIsInUse() const
{
	return _isInUse;
}

void UNIX_EthernetNICDiagnosticTest::setIsInUse(Boolean &value)
{
	_isInUse = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getResourcesUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCES_USED, getResourcesUsed());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticTest::getResourcesUsed() const
{
	return _resourcesUsed;
}

void UNIX_EthernetNICDiagnosticTest::setResourcesUsed(Array<Uint16> &value)
{
	_resourcesUsed = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getTestTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_TYPES, getTestTypes());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticTest::getTestTypes() const
{
	return _testTypes;
}

void UNIX_EthernetNICDiagnosticTest::setTestTypes(Array<Uint16> &value)
{
	_testTypes = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getOtherTestTypesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TEST_TYPES_DESCRIPTIONS, getOtherTestTypesDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticTest::getOtherTestTypesDescriptions() const
{
	return _otherTestTypesDescriptions;
}

void UNIX_EthernetNICDiagnosticTest::setOtherTestTypesDescriptions(Array<String> &value)
{
	_otherTestTypesDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getEthernetNICTestType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ETHERNET_N_I_C_TEST_TYPE, getEthernetNICTestType());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticTest::getEthernetNICTestType() const
{
	return _ethernetNICTestType;
}

void UNIX_EthernetNICDiagnosticTest::setEthernetNICTestType(Uint16 &value)
{
	_ethernetNICTestType = value;
}

Boolean UNIX_EthernetNICDiagnosticTest::getOtherEthernetNICTestTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ETHERNET_N_I_C_TEST_TYPE_DESCRIPTION, getOtherEthernetNICTestTypeDescription());
	return true;
}

String UNIX_EthernetNICDiagnosticTest::getOtherEthernetNICTestTypeDescription() const
{
	return _otherEthernetNICTestTypeDescription;
}

void UNIX_EthernetNICDiagnosticTest::setOtherEthernetNICTestTypeDescription(String &value)
{
	_otherEthernetNICTestTypeDescription = value;
}


void UNIX_EthernetNICDiagnosticTest::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetNICDiagnosticTest");
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
	_creationClassName = String("UNIX_EthernetNICDiagnosticTest");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_characteristics.clear();
	_otherCharacteristicDescription = String ("");
	_otherCharacteristicsDescriptions.clear();
	_isInUse = Boolean(false);
	_resourcesUsed.clear();
	_testTypes.clear();
	_otherTestTypesDescriptions.clear();
	_ethernetNICTestType = Uint16(0);
	_otherEthernetNICTestTypeDescription = String ("");

}

Boolean UNIX_EthernetNICDiagnosticTest::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Characteristics"))
			{
				Array<Uint16> characteristicsValue;
				property.getValue().get(characteristicsValue);
				setCharacteristics(characteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCharacteristicDescription"))
			{
				String otherCharacteristicDescriptionValue;
				property.getValue().get(otherCharacteristicDescriptionValue);
				setOtherCharacteristicDescription(otherCharacteristicDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCharacteristicsDescriptions"))
			{
				Array<String> otherCharacteristicsDescriptionsValue;
				property.getValue().get(otherCharacteristicsDescriptionsValue);
				setOtherCharacteristicsDescriptions(otherCharacteristicsDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "IsInUse"))
			{
				Boolean isInUseValue;
				property.getValue().get(isInUseValue);
				setIsInUse(isInUseValue);
			}
			else if (String::equal(property.getName().getString(), "ResourcesUsed"))
			{
				Array<Uint16> resourcesUsedValue;
				property.getValue().get(resourcesUsedValue);
				setResourcesUsed(resourcesUsedValue);
			}
			else if (String::equal(property.getName().getString(), "TestTypes"))
			{
				Array<Uint16> testTypesValue;
				property.getValue().get(testTypesValue);
				setTestTypes(testTypesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTestTypesDescriptions"))
			{
				Array<String> otherTestTypesDescriptionsValue;
				property.getValue().get(otherTestTypesDescriptionsValue);
				setOtherTestTypesDescriptions(otherTestTypesDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "EthernetNICTestType"))
			{
				Uint16 ethernetNICTestTypeValue;
				property.getValue().get(ethernetNICTestTypeValue);
				setEthernetNICTestType(ethernetNICTestTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEthernetNICTestTypeDescription"))
			{
				String otherEthernetNICTestTypeDescriptionValue;
				property.getValue().get(otherEthernetNICTestTypeDescriptionValue);
				setOtherEthernetNICTestTypeDescription(otherEthernetNICTestTypeDescriptionValue);
			}
	}
	return true;
}

Uint32 UNIX_EthernetNICDiagnosticTest::invokeRequestStateChange(
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

Uint32 UNIX_EthernetNICDiagnosticTest::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetNICDiagnosticTest::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetNICDiagnosticTest::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_EthernetNICDiagnosticTest::invokeRunDiagnostic(
		CIMInstance &inManagedElement,
		CIMInstance &inDiagSetting,
		CIMInstance &inJobSetting,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_DiagnosticSetting inDiagSettingObject;
	inDiagSettingObject.loadInstance(inDiagSetting);
	
	UNIX_JobSettingData inJobSettingObject;
	inJobSettingObject.loadInstance(inJobSetting);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RunDiagnostic */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetNICDiagnosticTest::invokeRunDiagnosticService(
		CIMInstance &inManagedElement,
		String &inDiagnosticSettings,
		String &inJobSettings,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RunDiagnosticService */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetNICDiagnosticTest::invokeRunTest(
		CIMInstance &inSystemElement,
		CIMInstance &inSetting,
		CIMInstance &inResult
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_DiagnosticSetting inSettingObject;
	inSettingObject.loadInstance(inSetting);
	
	UNIX_DiagnosticResult inResultObject;
	inResultObject.loadInstance(inResult);
	
	/* Execute method RunTest */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetNICDiagnosticTest::invokeClearResults(
		CIMInstance &inSystemElement,
		Array<String> &inResultsNotCleared
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ClearResults */
	
	
	
	return returnValue;
}

Uint32 UNIX_EthernetNICDiagnosticTest::invokeDiscontinueTest(
		CIMInstance &inSystemElement,
		CIMInstance &inResult,
		Boolean &inTestingStopped
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_DiagnosticResult inResultObject;
	inResultObject.loadInstance(inResult);
	
	/* Execute method DiscontinueTest */
	
	
	
	return returnValue;
}


Boolean UNIX_EthernetNICDiagnosticTest::initialize()
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticTest::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetNICDiagnosticTest");
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
	_creationClassName = String("UNIX_EthernetNICDiagnosticTest");
	_primaryOwnerName = String ("");
	_primaryOwnerContact = String ("");
	_startMode = String ("");
	_started = Boolean(false);
	_loSID = String ("");
	_loSOrgID = String ("");
	_characteristics.clear();
	_otherCharacteristicDescription = String ("");
	_otherCharacteristicsDescriptions.clear();
	_isInUse = Boolean(false);
	_resourcesUsed.clear();
	_testTypes.clear();
	_otherTestTypesDescriptions.clear();
	_ethernetNICTestType = Uint16(0);
	_otherEthernetNICTestTypeDescription = String ("");
	
	return false;
}

Boolean UNIX_EthernetNICDiagnosticTest::finalize()
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticTest::loadByName(const String name)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticTest::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EthernetNICDiagnosticTest::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticTest::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticTest::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticTest::validateInstance()
{
	return true;
}

