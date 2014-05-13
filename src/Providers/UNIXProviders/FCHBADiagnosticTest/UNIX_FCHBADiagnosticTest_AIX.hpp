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


UNIX_FCHBADiagnosticTest::UNIX_FCHBADiagnosticTest(void)
{
}

UNIX_FCHBADiagnosticTest::~UNIX_FCHBADiagnosticTest(void)
{
}

Boolean UNIX_FCHBADiagnosticTest::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCHBADiagnosticTest::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCHBADiagnosticTest::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCHBADiagnosticTest::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCHBADiagnosticTest::getCaption() const
{
	return _caption;
}

void UNIX_FCHBADiagnosticTest::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCHBADiagnosticTest::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCHBADiagnosticTest::getDescription() const
{
	return _description;
}

void UNIX_FCHBADiagnosticTest::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCHBADiagnosticTest::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCHBADiagnosticTest::getElementName() const
{
	return _elementName;
}

void UNIX_FCHBADiagnosticTest::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCHBADiagnosticTest::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCHBADiagnosticTest::getGeneration() const
{
	return _generation;
}

void UNIX_FCHBADiagnosticTest::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCHBADiagnosticTest::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FCHBADiagnosticTest::getInstallDate() const
{
	return _installDate;
}

void UNIX_FCHBADiagnosticTest::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_FCHBADiagnosticTest::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FCHBADiagnosticTest::getName() const
{
	return _name;
}

void UNIX_FCHBADiagnosticTest::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FCHBADiagnosticTest::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticTest::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_FCHBADiagnosticTest::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_FCHBADiagnosticTest::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticTest::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_FCHBADiagnosticTest::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticTest::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FCHBADiagnosticTest::getStatus() const
{
	return _status;
}

void UNIX_FCHBADiagnosticTest::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_FCHBADiagnosticTest::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getHealthState() const
{
	return _healthState;
}

void UNIX_FCHBADiagnosticTest::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_FCHBADiagnosticTest::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_FCHBADiagnosticTest::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_FCHBADiagnosticTest::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_FCHBADiagnosticTest::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_FCHBADiagnosticTest::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_FCHBADiagnosticTest::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_FCHBADiagnosticTest::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_FCHBADiagnosticTest::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_FCHBADiagnosticTest::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getEnabledState() const
{
	return _enabledState;
}

void UNIX_FCHBADiagnosticTest::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_FCHBADiagnosticTest::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FCHBADiagnosticTest::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_FCHBADiagnosticTest::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_FCHBADiagnosticTest::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getRequestedState() const
{
	return _requestedState;
}

void UNIX_FCHBADiagnosticTest::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_FCHBADiagnosticTest::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_FCHBADiagnosticTest::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_FCHBADiagnosticTest::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FCHBADiagnosticTest::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_FCHBADiagnosticTest::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_FCHBADiagnosticTest::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticTest::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_FCHBADiagnosticTest::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_FCHBADiagnosticTest::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_FCHBADiagnosticTest::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_FCHBADiagnosticTest::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FCHBADiagnosticTest::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FCHBADiagnosticTest::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FCHBADiagnosticTest::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FCHBADiagnosticTest::getSystemName() const
{
	return _systemName;
}

void UNIX_FCHBADiagnosticTest::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FCHBADiagnosticTest::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FCHBADiagnosticTest::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FCHBADiagnosticTest::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FCHBADiagnosticTest::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_FCHBADiagnosticTest::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_FCHBADiagnosticTest::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_FCHBADiagnosticTest::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_FCHBADiagnosticTest::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_FCHBADiagnosticTest::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_FCHBADiagnosticTest::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_FCHBADiagnosticTest::getStartMode() const
{
	return _startMode;
}

void UNIX_FCHBADiagnosticTest::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_FCHBADiagnosticTest::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_FCHBADiagnosticTest::getStarted() const
{
	return _started;
}

void UNIX_FCHBADiagnosticTest::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_FCHBADiagnosticTest::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_FCHBADiagnosticTest::getLoSID() const
{
	return _loSID;
}

void UNIX_FCHBADiagnosticTest::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_FCHBADiagnosticTest::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_FCHBADiagnosticTest::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_FCHBADiagnosticTest::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_FCHBADiagnosticTest::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticTest::getCharacteristics() const
{
	return _characteristics;
}

void UNIX_FCHBADiagnosticTest::setCharacteristics(Array<Uint16> &value)
{
	_characteristics = value;
}

Boolean UNIX_FCHBADiagnosticTest::getOtherCharacteristicDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTIC_DESCRIPTION, getOtherCharacteristicDescription());
	return true;
}

String UNIX_FCHBADiagnosticTest::getOtherCharacteristicDescription() const
{
	return _otherCharacteristicDescription;
}

void UNIX_FCHBADiagnosticTest::setOtherCharacteristicDescription(String &value)
{
	_otherCharacteristicDescription = value;
}

Boolean UNIX_FCHBADiagnosticTest::getOtherCharacteristicsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTICS_DESCRIPTIONS, getOtherCharacteristicsDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticTest::getOtherCharacteristicsDescriptions() const
{
	return _otherCharacteristicsDescriptions;
}

void UNIX_FCHBADiagnosticTest::setOtherCharacteristicsDescriptions(Array<String> &value)
{
	_otherCharacteristicsDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticTest::getIsInUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_IN_USE, getIsInUse());
	return true;
}

Boolean UNIX_FCHBADiagnosticTest::getIsInUse() const
{
	return _isInUse;
}

void UNIX_FCHBADiagnosticTest::setIsInUse(Boolean &value)
{
	_isInUse = value;
}

Boolean UNIX_FCHBADiagnosticTest::getResourcesUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCES_USED, getResourcesUsed());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticTest::getResourcesUsed() const
{
	return _resourcesUsed;
}

void UNIX_FCHBADiagnosticTest::setResourcesUsed(Array<Uint16> &value)
{
	_resourcesUsed = value;
}

Boolean UNIX_FCHBADiagnosticTest::getTestTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_TYPES, getTestTypes());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticTest::getTestTypes() const
{
	return _testTypes;
}

void UNIX_FCHBADiagnosticTest::setTestTypes(Array<Uint16> &value)
{
	_testTypes = value;
}

Boolean UNIX_FCHBADiagnosticTest::getOtherTestTypesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TEST_TYPES_DESCRIPTIONS, getOtherTestTypesDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticTest::getOtherTestTypesDescriptions() const
{
	return _otherTestTypesDescriptions;
}

void UNIX_FCHBADiagnosticTest::setOtherTestTypesDescriptions(Array<String> &value)
{
	_otherTestTypesDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticTest::getFCHBATestType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FCHBA_TEST_TYPE, getFCHBATestType());
	return true;
}

Uint16 UNIX_FCHBADiagnosticTest::getFCHBATestType() const
{
	return _fCHBATestType;
}

void UNIX_FCHBADiagnosticTest::setFCHBATestType(Uint16 &value)
{
	_fCHBATestType = value;
}

Boolean UNIX_FCHBADiagnosticTest::getOtherFCHBATestTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_FCHBA_TEST_TYPE_DESCRIPTION, getOtherFCHBATestTypeDescription());
	return true;
}

String UNIX_FCHBADiagnosticTest::getOtherFCHBATestTypeDescription() const
{
	return _otherFCHBATestTypeDescription;
}

void UNIX_FCHBADiagnosticTest::setOtherFCHBATestTypeDescription(String &value)
{
	_otherFCHBATestTypeDescription = value;
}


void UNIX_FCHBADiagnosticTest::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCHBADiagnosticTest");
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
	_creationClassName = String("UNIX_FCHBADiagnosticTest");
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
	_fCHBATestType = Uint16(0);
	_otherFCHBATestTypeDescription = String ("");

}

Boolean UNIX_FCHBADiagnosticTest::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FCHBATestType"))
			{
				Uint16 fCHBATestTypeValue;
				property.getValue().get(fCHBATestTypeValue);
				setFCHBATestType(fCHBATestTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherFCHBATestTypeDescription"))
			{
				String otherFCHBATestTypeDescriptionValue;
				property.getValue().get(otherFCHBATestTypeDescriptionValue);
				setOtherFCHBATestTypeDescription(otherFCHBATestTypeDescriptionValue);
			}
	}
	return true;
}

Uint32 UNIX_FCHBADiagnosticTest::invokeRequestStateChange(
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

Uint32 UNIX_FCHBADiagnosticTest::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCHBADiagnosticTest::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCHBADiagnosticTest::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_FCHBADiagnosticTest::invokeRunDiagnostic(
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

Uint32 UNIX_FCHBADiagnosticTest::invokeRunDiagnosticService(
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

Uint32 UNIX_FCHBADiagnosticTest::invokeRunTest(
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

Uint32 UNIX_FCHBADiagnosticTest::invokeClearResults(
		CIMInstance &inSystemElement,
		Array<String> &inResultsNotCleared
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ClearResults */
	
	
	
	return returnValue;
}

Uint32 UNIX_FCHBADiagnosticTest::invokeDiscontinueTest(
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


Boolean UNIX_FCHBADiagnosticTest::initialize()
{
	return false;
}

Boolean UNIX_FCHBADiagnosticTest::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCHBADiagnosticTest");
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
	_creationClassName = String("UNIX_FCHBADiagnosticTest");
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
	_fCHBATestType = Uint16(0);
	_otherFCHBATestTypeDescription = String ("");
	
	return false;
}

Boolean UNIX_FCHBADiagnosticTest::finalize()
{
	return false;
}

Boolean UNIX_FCHBADiagnosticTest::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticTest::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCHBADiagnosticTest::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticTest::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticTest::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticTest::validateInstance()
{
	return true;
}

