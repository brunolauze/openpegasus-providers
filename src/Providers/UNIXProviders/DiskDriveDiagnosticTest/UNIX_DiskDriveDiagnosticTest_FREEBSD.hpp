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


UNIX_DiskDriveDiagnosticTest::UNIX_DiskDriveDiagnosticTest(void)
{
}

UNIX_DiskDriveDiagnosticTest::~UNIX_DiskDriveDiagnosticTest(void)
{
}

Boolean UNIX_DiskDriveDiagnosticTest::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiskDriveDiagnosticTest::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getCaption() const
{
	return _caption;
}

void UNIX_DiskDriveDiagnosticTest::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getDescription() const
{
	return _description;
}

void UNIX_DiskDriveDiagnosticTest::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getElementName() const
{
	return _elementName;
}

void UNIX_DiskDriveDiagnosticTest::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiskDriveDiagnosticTest::getGeneration() const
{
	return _generation;
}

void UNIX_DiskDriveDiagnosticTest::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DiskDriveDiagnosticTest::getInstallDate() const
{
	return _installDate;
}

void UNIX_DiskDriveDiagnosticTest::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getName() const
{
	return _name;
}

void UNIX_DiskDriveDiagnosticTest::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticTest::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DiskDriveDiagnosticTest::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticTest::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DiskDriveDiagnosticTest::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getStatus() const
{
	return _status;
}

void UNIX_DiskDriveDiagnosticTest::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getHealthState() const
{
	return _healthState;
}

void UNIX_DiskDriveDiagnosticTest::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DiskDriveDiagnosticTest::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DiskDriveDiagnosticTest::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DiskDriveDiagnosticTest::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DiskDriveDiagnosticTest::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DiskDriveDiagnosticTest::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DiskDriveDiagnosticTest::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DiskDriveDiagnosticTest::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DiskDriveDiagnosticTest::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DiskDriveDiagnosticTest::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DiskDriveDiagnosticTest::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticTest::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DiskDriveDiagnosticTest::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DiskDriveDiagnosticTest::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DiskDriveDiagnosticTest::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getSystemName() const
{
	return _systemName;
}

void UNIX_DiskDriveDiagnosticTest::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DiskDriveDiagnosticTest::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getPrimaryOwnerName() const
{
	return _primaryOwnerName;
}

void UNIX_DiskDriveDiagnosticTest::setPrimaryOwnerName(String &value)
{
	_primaryOwnerName = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getPrimaryOwnerContact() const
{
	return _primaryOwnerContact;
}

void UNIX_DiskDriveDiagnosticTest::setPrimaryOwnerContact(String &value)
{
	_primaryOwnerContact = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getStartMode() const
{
	return _startMode;
}

void UNIX_DiskDriveDiagnosticTest::setStartMode(String &value)
{
	_startMode = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_DiskDriveDiagnosticTest::getStarted() const
{
	return _started;
}

void UNIX_DiskDriveDiagnosticTest::setStarted(Boolean &value)
{
	_started = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getLoSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ID, getLoSID());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getLoSID() const
{
	return _loSID;
}

void UNIX_DiskDriveDiagnosticTest::setLoSID(String &value)
{
	_loSID = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getLoSOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LO_S_ORG_ID, getLoSOrgID());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getLoSOrgID() const
{
	return _loSOrgID;
}

void UNIX_DiskDriveDiagnosticTest::setLoSOrgID(String &value)
{
	_loSOrgID = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticTest::getCharacteristics() const
{
	return _characteristics;
}

void UNIX_DiskDriveDiagnosticTest::setCharacteristics(Array<Uint16> &value)
{
	_characteristics = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getOtherCharacteristicDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTIC_DESCRIPTION, getOtherCharacteristicDescription());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getOtherCharacteristicDescription() const
{
	return _otherCharacteristicDescription;
}

void UNIX_DiskDriveDiagnosticTest::setOtherCharacteristicDescription(String &value)
{
	_otherCharacteristicDescription = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getOtherCharacteristicsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTICS_DESCRIPTIONS, getOtherCharacteristicsDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticTest::getOtherCharacteristicsDescriptions() const
{
	return _otherCharacteristicsDescriptions;
}

void UNIX_DiskDriveDiagnosticTest::setOtherCharacteristicsDescriptions(Array<String> &value)
{
	_otherCharacteristicsDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getIsInUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_IN_USE, getIsInUse());
	return true;
}

Boolean UNIX_DiskDriveDiagnosticTest::getIsInUse() const
{
	return _isInUse;
}

void UNIX_DiskDriveDiagnosticTest::setIsInUse(Boolean &value)
{
	_isInUse = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getResourcesUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCES_USED, getResourcesUsed());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticTest::getResourcesUsed() const
{
	return _resourcesUsed;
}

void UNIX_DiskDriveDiagnosticTest::setResourcesUsed(Array<Uint16> &value)
{
	_resourcesUsed = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getTestTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_TYPES, getTestTypes());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticTest::getTestTypes() const
{
	return _testTypes;
}

void UNIX_DiskDriveDiagnosticTest::setTestTypes(Array<Uint16> &value)
{
	_testTypes = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getOtherTestTypesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TEST_TYPES_DESCRIPTIONS, getOtherTestTypesDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticTest::getOtherTestTypesDescriptions() const
{
	return _otherTestTypesDescriptions;
}

void UNIX_DiskDriveDiagnosticTest::setOtherTestTypesDescriptions(Array<String> &value)
{
	_otherTestTypesDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getDiskDriveTestType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_DRIVE_TEST_TYPE, getDiskDriveTestType());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticTest::getDiskDriveTestType() const
{
	return _diskDriveTestType;
}

void UNIX_DiskDriveDiagnosticTest::setDiskDriveTestType(Uint16 &value)
{
	_diskDriveTestType = value;
}

Boolean UNIX_DiskDriveDiagnosticTest::getOtherDiskDriveTestType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DISK_DRIVE_TEST_TYPE, getOtherDiskDriveTestType());
	return true;
}

String UNIX_DiskDriveDiagnosticTest::getOtherDiskDriveTestType() const
{
	return _otherDiskDriveTestType;
}

void UNIX_DiskDriveDiagnosticTest::setOtherDiskDriveTestType(String &value)
{
	_otherDiskDriveTestType = value;
}


void UNIX_DiskDriveDiagnosticTest::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskDriveDiagnosticTest");
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
	_creationClassName = String("UNIX_DiskDriveDiagnosticTest");
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
	_diskDriveTestType = Uint16(0);
	_otherDiskDriveTestType = String ("");

}

Boolean UNIX_DiskDriveDiagnosticTest::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DiskDriveTestType"))
			{
				Uint16 diskDriveTestTypeValue;
				property.getValue().get(diskDriveTestTypeValue);
				setDiskDriveTestType(diskDriveTestTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDiskDriveTestType"))
			{
				String otherDiskDriveTestTypeValue;
				property.getValue().get(otherDiskDriveTestTypeValue);
				setOtherDiskDriveTestType(otherDiskDriveTestTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_DiskDriveDiagnosticTest::invokeRequestStateChange(
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

Uint32 UNIX_DiskDriveDiagnosticTest::invokeStartService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StartService */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiskDriveDiagnosticTest::invokeStopService()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method StopService */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiskDriveDiagnosticTest::invokeChangeAffectedElementsAssignedSequence(
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

Uint32 UNIX_DiskDriveDiagnosticTest::invokeRunDiagnostic(
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

Uint32 UNIX_DiskDriveDiagnosticTest::invokeRunDiagnosticService(
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

Uint32 UNIX_DiskDriveDiagnosticTest::invokeRunTest(
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

Uint32 UNIX_DiskDriveDiagnosticTest::invokeClearResults(
		CIMInstance &inSystemElement,
		Array<String> &inResultsNotCleared
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ClearResults */
	
	
	
	return returnValue;
}

Uint32 UNIX_DiskDriveDiagnosticTest::invokeDiscontinueTest(
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


Boolean UNIX_DiskDriveDiagnosticTest::initialize()
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticTest::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskDriveDiagnosticTest");
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
	_creationClassName = String("UNIX_DiskDriveDiagnosticTest");
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
	_diskDriveTestType = Uint16(0);
	_otherDiskDriveTestType = String ("");
	
	return false;
}

Boolean UNIX_DiskDriveDiagnosticTest::finalize()
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticTest::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticTest::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiskDriveDiagnosticTest::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticTest::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticTest::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticTest::validateInstance()
{
	return true;
}

