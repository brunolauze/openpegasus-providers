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


UNIX_MessageLog::UNIX_MessageLog(void)
{
}

UNIX_MessageLog::~UNIX_MessageLog(void)
{
}

Boolean UNIX_MessageLog::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MessageLog::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MessageLog::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MessageLog::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MessageLog::getCaption() const
{
	return _caption;
}

void UNIX_MessageLog::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MessageLog::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MessageLog::getDescription() const
{
	return _description;
}

void UNIX_MessageLog::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MessageLog::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MessageLog::getElementName() const
{
	return _elementName;
}

void UNIX_MessageLog::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MessageLog::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MessageLog::getGeneration() const
{
	return _generation;
}

void UNIX_MessageLog::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MessageLog::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MessageLog::getInstallDate() const
{
	return _installDate;
}

void UNIX_MessageLog::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_MessageLog::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MessageLog::getName() const
{
	return _name;
}

void UNIX_MessageLog::setName(String &value)
{
	_name = value;
}

Boolean UNIX_MessageLog::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MessageLog::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_MessageLog::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_MessageLog::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MessageLog::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_MessageLog::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_MessageLog::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MessageLog::getStatus() const
{
	return _status;
}

void UNIX_MessageLog::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_MessageLog::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MessageLog::getHealthState() const
{
	return _healthState;
}

void UNIX_MessageLog::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_MessageLog::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MessageLog::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_MessageLog::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_MessageLog::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MessageLog::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_MessageLog::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_MessageLog::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MessageLog::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_MessageLog::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_MessageLog::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MessageLog::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_MessageLog::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_MessageLog::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_MessageLog::getEnabledState() const
{
	return _enabledState;
}

void UNIX_MessageLog::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_MessageLog::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_MessageLog::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_MessageLog::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_MessageLog::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_MessageLog::getRequestedState() const
{
	return _requestedState;
}

void UNIX_MessageLog::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_MessageLog::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_MessageLog::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_MessageLog::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_MessageLog::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_MessageLog::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_MessageLog::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_MessageLog::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_MessageLog::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_MessageLog::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_MessageLog::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_MessageLog::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_MessageLog::getMaxNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_RECORDS, getMaxNumberOfRecords());
	return true;
}

Uint64 UNIX_MessageLog::getMaxNumberOfRecords() const
{
	return _maxNumberOfRecords;
}

void UNIX_MessageLog::setMaxNumberOfRecords(Uint64 &value)
{
	_maxNumberOfRecords = value;
}

Boolean UNIX_MessageLog::getCurrentNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_RECORDS, getCurrentNumberOfRecords());
	return true;
}

Uint64 UNIX_MessageLog::getCurrentNumberOfRecords() const
{
	return _currentNumberOfRecords;
}

void UNIX_MessageLog::setCurrentNumberOfRecords(Uint64 &value)
{
	_currentNumberOfRecords = value;
}

Boolean UNIX_MessageLog::getLogState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STATE, getLogState());
	return true;
}

Uint16 UNIX_MessageLog::getLogState() const
{
	return _logState;
}

void UNIX_MessageLog::setLogState(Uint16 &value)
{
	_logState = value;
}

Boolean UNIX_MessageLog::getOverwritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OVERWRITE_POLICY, getOverwritePolicy());
	return true;
}

Uint16 UNIX_MessageLog::getOverwritePolicy() const
{
	return _overwritePolicy;
}

void UNIX_MessageLog::setOverwritePolicy(Uint16 &value)
{
	_overwritePolicy = value;
}

Boolean UNIX_MessageLog::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MessageLog::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_MessageLog::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_MessageLog::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_MessageLog::getCapabilities() const
{
	return _capabilities;
}

void UNIX_MessageLog::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_MessageLog::getCapabilitiesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES_DESCRIPTIONS, getCapabilitiesDescriptions());
	return true;
}

Array<String> UNIX_MessageLog::getCapabilitiesDescriptions() const
{
	return _capabilitiesDescriptions;
}

void UNIX_MessageLog::setCapabilitiesDescriptions(Array<String> &value)
{
	_capabilitiesDescriptions = value;
}

Boolean UNIX_MessageLog::getMaxLogSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LOG_SIZE, getMaxLogSize());
	return true;
}

Uint64 UNIX_MessageLog::getMaxLogSize() const
{
	return _maxLogSize;
}

void UNIX_MessageLog::setMaxLogSize(Uint64 &value)
{
	_maxLogSize = value;
}

Boolean UNIX_MessageLog::getSizeOfHeader(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_HEADER, getSizeOfHeader());
	return true;
}

Uint64 UNIX_MessageLog::getSizeOfHeader() const
{
	return _sizeOfHeader;
}

void UNIX_MessageLog::setSizeOfHeader(Uint64 &value)
{
	_sizeOfHeader = value;
}

Boolean UNIX_MessageLog::getHeaderFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEADER_FORMAT, getHeaderFormat());
	return true;
}

String UNIX_MessageLog::getHeaderFormat() const
{
	return _headerFormat;
}

void UNIX_MessageLog::setHeaderFormat(String &value)
{
	_headerFormat = value;
}

Boolean UNIX_MessageLog::getMaxRecordSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECORD_SIZE, getMaxRecordSize());
	return true;
}

Uint64 UNIX_MessageLog::getMaxRecordSize() const
{
	return _maxRecordSize;
}

void UNIX_MessageLog::setMaxRecordSize(Uint64 &value)
{
	_maxRecordSize = value;
}

Boolean UNIX_MessageLog::getSizeOfRecordHeader(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_RECORD_HEADER, getSizeOfRecordHeader());
	return true;
}

Uint64 UNIX_MessageLog::getSizeOfRecordHeader() const
{
	return _sizeOfRecordHeader;
}

void UNIX_MessageLog::setSizeOfRecordHeader(Uint64 &value)
{
	_sizeOfRecordHeader = value;
}

Boolean UNIX_MessageLog::getRecordHeaderFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_HEADER_FORMAT, getRecordHeaderFormat());
	return true;
}

String UNIX_MessageLog::getRecordHeaderFormat() const
{
	return _recordHeaderFormat;
}

void UNIX_MessageLog::setRecordHeaderFormat(String &value)
{
	_recordHeaderFormat = value;
}

Boolean UNIX_MessageLog::getOtherPolicyDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_POLICY_DESCRIPTION, getOtherPolicyDescription());
	return true;
}

String UNIX_MessageLog::getOtherPolicyDescription() const
{
	return _otherPolicyDescription;
}

void UNIX_MessageLog::setOtherPolicyDescription(String &value)
{
	_otherPolicyDescription = value;
}

Boolean UNIX_MessageLog::getTimeWhenOutdated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_WHEN_OUTDATED, getTimeWhenOutdated());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeWhenOutdated() const
{
	return _timeWhenOutdated;
}

void UNIX_MessageLog::setTimeWhenOutdated(CIMDateTime &value)
{
	_timeWhenOutdated = value;
}

Boolean UNIX_MessageLog::getPercentageNearFull(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENTAGE_NEAR_FULL, getPercentageNearFull());
	return true;
}

Uint8 UNIX_MessageLog::getPercentageNearFull() const
{
	return _percentageNearFull;
}

void UNIX_MessageLog::setPercentageNearFull(Uint8 &value)
{
	_percentageNearFull = value;
}

Boolean UNIX_MessageLog::getLastChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CHANGE, getLastChange());
	return true;
}

Uint16 UNIX_MessageLog::getLastChange() const
{
	return _lastChange;
}

void UNIX_MessageLog::setLastChange(Uint16 &value)
{
	_lastChange = value;
}

Boolean UNIX_MessageLog::getTimeOfLastChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_CHANGE, getTimeOfLastChange());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeOfLastChange() const
{
	return _timeOfLastChange;
}

void UNIX_MessageLog::setTimeOfLastChange(CIMDateTime &value)
{
	_timeOfLastChange = value;
}

Boolean UNIX_MessageLog::getRecordLastChanged(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_LAST_CHANGED, getRecordLastChanged());
	return true;
}

Uint64 UNIX_MessageLog::getRecordLastChanged() const
{
	return _recordLastChanged;
}

void UNIX_MessageLog::setRecordLastChanged(Uint64 &value)
{
	_recordLastChanged = value;
}

Boolean UNIX_MessageLog::getIsFrozen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_FROZEN, getIsFrozen());
	return true;
}

Boolean UNIX_MessageLog::getIsFrozen() const
{
	return _isFrozen;
}

void UNIX_MessageLog::setIsFrozen(Boolean &value)
{
	_isFrozen = value;
}

Boolean UNIX_MessageLog::getCharacterSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTER_SET, getCharacterSet());
	return true;
}

Uint16 UNIX_MessageLog::getCharacterSet() const
{
	return _characterSet;
}

void UNIX_MessageLog::setCharacterSet(Uint16 &value)
{
	_characterSet = value;
}


void UNIX_MessageLog::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MessageLog");
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
	_maxNumberOfRecords = Uint64(0);
	_currentNumberOfRecords = Uint64(0);
	_logState = Uint16(0);
	_overwritePolicy = Uint16(0);
	_creationClassName = String("UNIX_MessageLog");
	_capabilities.clear();
	_capabilitiesDescriptions.clear();
	_maxLogSize = Uint64(0);
	_sizeOfHeader = Uint64(0);
	_headerFormat = String ("");
	_maxRecordSize = Uint64(0);
	_sizeOfRecordHeader = Uint64(0);
	_recordHeaderFormat = String ("");
	_otherPolicyDescription = String ("");
	_timeWhenOutdated = CIMHelper::getCurrentTime();
	_percentageNearFull = Uint8(0);
	_lastChange = Uint16(0);
	_timeOfLastChange = CIMHelper::getCurrentTime();
	_recordLastChanged = Uint64(0);
	_isFrozen = Boolean(false);
	_characterSet = Uint16(0);

}

Boolean UNIX_MessageLog::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxNumberOfRecords"))
			{
				Uint64 maxNumberOfRecordsValue;
				property.getValue().get(maxNumberOfRecordsValue);
				setMaxNumberOfRecords(maxNumberOfRecordsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentNumberOfRecords"))
			{
				Uint64 currentNumberOfRecordsValue;
				property.getValue().get(currentNumberOfRecordsValue);
				setCurrentNumberOfRecords(currentNumberOfRecordsValue);
			}
			else if (String::equal(property.getName().getString(), "LogState"))
			{
				Uint16 logStateValue;
				property.getValue().get(logStateValue);
				setLogState(logStateValue);
			}
			else if (String::equal(property.getName().getString(), "OverwritePolicy"))
			{
				Uint16 overwritePolicyValue;
				property.getValue().get(overwritePolicyValue);
				setOverwritePolicy(overwritePolicyValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Capabilities"))
			{
				Array<Uint16> capabilitiesValue;
				property.getValue().get(capabilitiesValue);
				setCapabilities(capabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "CapabilitiesDescriptions"))
			{
				Array<String> capabilitiesDescriptionsValue;
				property.getValue().get(capabilitiesDescriptionsValue);
				setCapabilitiesDescriptions(capabilitiesDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxLogSize"))
			{
				Uint64 maxLogSizeValue;
				property.getValue().get(maxLogSizeValue);
				setMaxLogSize(maxLogSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SizeOfHeader"))
			{
				Uint64 sizeOfHeaderValue;
				property.getValue().get(sizeOfHeaderValue);
				setSizeOfHeader(sizeOfHeaderValue);
			}
			else if (String::equal(property.getName().getString(), "HeaderFormat"))
			{
				String headerFormatValue;
				property.getValue().get(headerFormatValue);
				setHeaderFormat(headerFormatValue);
			}
			else if (String::equal(property.getName().getString(), "MaxRecordSize"))
			{
				Uint64 maxRecordSizeValue;
				property.getValue().get(maxRecordSizeValue);
				setMaxRecordSize(maxRecordSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SizeOfRecordHeader"))
			{
				Uint64 sizeOfRecordHeaderValue;
				property.getValue().get(sizeOfRecordHeaderValue);
				setSizeOfRecordHeader(sizeOfRecordHeaderValue);
			}
			else if (String::equal(property.getName().getString(), "RecordHeaderFormat"))
			{
				String recordHeaderFormatValue;
				property.getValue().get(recordHeaderFormatValue);
				setRecordHeaderFormat(recordHeaderFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPolicyDescription"))
			{
				String otherPolicyDescriptionValue;
				property.getValue().get(otherPolicyDescriptionValue);
				setOtherPolicyDescription(otherPolicyDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "TimeWhenOutdated"))
			{
				CIMDateTime timeWhenOutdatedValue;
				property.getValue().get(timeWhenOutdatedValue);
				setTimeWhenOutdated(timeWhenOutdatedValue);
			}
			else if (String::equal(property.getName().getString(), "PercentageNearFull"))
			{
				Uint8 percentageNearFullValue;
				property.getValue().get(percentageNearFullValue);
				setPercentageNearFull(percentageNearFullValue);
			}
			else if (String::equal(property.getName().getString(), "LastChange"))
			{
				Uint16 lastChangeValue;
				property.getValue().get(lastChangeValue);
				setLastChange(lastChangeValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastChange"))
			{
				CIMDateTime timeOfLastChangeValue;
				property.getValue().get(timeOfLastChangeValue);
				setTimeOfLastChange(timeOfLastChangeValue);
			}
			else if (String::equal(property.getName().getString(), "RecordLastChanged"))
			{
				Uint64 recordLastChangedValue;
				property.getValue().get(recordLastChangedValue);
				setRecordLastChanged(recordLastChangedValue);
			}
			else if (String::equal(property.getName().getString(), "IsFrozen"))
			{
				Boolean isFrozenValue;
				property.getValue().get(isFrozenValue);
				setIsFrozen(isFrozenValue);
			}
			else if (String::equal(property.getName().getString(), "CharacterSet"))
			{
				Uint16 characterSetValue;
				property.getValue().get(characterSetValue);
				setCharacterSet(characterSetValue);
			}
	}
	return true;
}

Uint32 UNIX_MessageLog::invokeRequestStateChange(
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

Uint32 UNIX_MessageLog::invokeClearLog()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ClearLog */
	
	
	
	return returnValue;
}

Uint32 UNIX_MessageLog::invokePositionToFirstRecord(
		String &inIterationIdentifier
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method PositionToFirstRecord */
	
	
	
	return returnValue;
}

Uint32 UNIX_MessageLog::invokePositionAtRecord(
		String &inIterationIdentifier,
		Boolean &inMoveAbsolute,
		Sint64 &inRecordNumber
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method PositionAtRecord */
	
	
	
	return returnValue;
}

Uint32 UNIX_MessageLog::invokeGetRecord(
		String &inIterationIdentifier,
		Boolean &inPositionToNext,
		Uint64 &inRecordNumber,
		Array<Uint8> &inRecordData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetRecord */
	
	
	
	return returnValue;
}

Uint32 UNIX_MessageLog::invokeDeleteRecord(
		String &inIterationIdentifier,
		Boolean &inPositionToNext,
		Uint64 &inRecordNumber,
		Array<Uint8> &inRecordData
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method DeleteRecord */
	
	
	
	return returnValue;
}

Uint32 UNIX_MessageLog::invokeWriteRecord(
		String &inIterationIdentifier,
		Boolean &inPositionToNext,
		Array<Uint8> &inRecordData,
		Uint64 &inRecordNumber
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method WriteRecord */
	
	
	
	return returnValue;
}

Uint32 UNIX_MessageLog::invokeCancelIteration(
		String &inIterationIdentifier
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method CancelIteration */
	
	
	
	return returnValue;
}

Uint32 UNIX_MessageLog::invokeFreezeLog(
		Boolean &inFreeze
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method FreezeLog */
	
	
	
	return returnValue;
}

Uint32 UNIX_MessageLog::invokeFlagRecordForOverwrite(
		String &inIterationIdentifier,
		Boolean &inPositionToNext,
		Uint64 &inRecordNumber
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method FlagRecordForOverwrite */
	
	
	
	return returnValue;
}


Boolean UNIX_MessageLog::initialize()
{
	return false;
}

Boolean UNIX_MessageLog::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MessageLog");
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
	_maxNumberOfRecords = Uint64(0);
	_currentNumberOfRecords = Uint64(0);
	_logState = Uint16(0);
	_overwritePolicy = Uint16(0);
	_creationClassName = String("UNIX_MessageLog");
	_capabilities.clear();
	_capabilitiesDescriptions.clear();
	_maxLogSize = Uint64(0);
	_sizeOfHeader = Uint64(0);
	_headerFormat = String ("");
	_maxRecordSize = Uint64(0);
	_sizeOfRecordHeader = Uint64(0);
	_recordHeaderFormat = String ("");
	_otherPolicyDescription = String ("");
	_timeWhenOutdated = CIMHelper::getCurrentTime();
	_percentageNearFull = Uint8(0);
	_lastChange = Uint16(0);
	_timeOfLastChange = CIMHelper::getCurrentTime();
	_recordLastChanged = Uint64(0);
	_isFrozen = Boolean(false);
	_characterSet = Uint16(0);
	
	return false;
}

Boolean UNIX_MessageLog::finalize()
{
	return false;
}

Boolean UNIX_MessageLog::loadByName(const String name)
{
	return false;
}

Boolean UNIX_MessageLog::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MessageLog::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MessageLog::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MessageLog::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MessageLog::validateInstance()
{
	return true;
}

