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


UNIX_PrintQueue::UNIX_PrintQueue(void)
{
}

UNIX_PrintQueue::~UNIX_PrintQueue(void)
{
}

Boolean UNIX_PrintQueue::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintQueue::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintQueue::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintQueue::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintQueue::getCaption() const
{
	return _caption;
}

void UNIX_PrintQueue::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintQueue::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintQueue::getDescription() const
{
	return _description;
}

void UNIX_PrintQueue::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintQueue::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintQueue::getElementName() const
{
	return _elementName;
}

void UNIX_PrintQueue::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintQueue::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintQueue::getGeneration() const
{
	return _generation;
}

void UNIX_PrintQueue::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintQueue::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintQueue::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintQueue::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintQueue::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintQueue::getName() const
{
	return _name;
}

void UNIX_PrintQueue::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintQueue::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintQueue::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintQueue::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintQueue::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintQueue::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintQueue::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintQueue::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintQueue::getStatus() const
{
	return _status;
}

void UNIX_PrintQueue::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintQueue::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintQueue::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintQueue::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintQueue::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintQueue::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintQueue::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintQueue::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintQueue::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintQueue::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintQueue::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintQueue::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintQueue::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintQueue::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintQueue::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintQueue::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintQueue::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PrintQueue::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PrintQueue::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PrintQueue::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PrintQueue::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_PrintQueue::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_PrintQueue::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PrintQueue::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PrintQueue::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PrintQueue::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PrintQueue::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_PrintQueue::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_PrintQueue::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PrintQueue::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_PrintQueue::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_PrintQueue::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PrintQueue::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_PrintQueue::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_PrintQueue::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PrintQueue::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_PrintQueue::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_PrintQueue::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PrintQueue::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PrintQueue::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PrintQueue::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PrintQueue::getSystemName() const
{
	return _systemName;
}

void UNIX_PrintQueue::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PrintQueue::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PrintQueue::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PrintQueue::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PrintQueue::getQueueEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_ENABLED, getQueueEnabled());
	return true;
}

Boolean UNIX_PrintQueue::getQueueEnabled() const
{
	return _queueEnabled;
}

void UNIX_PrintQueue::setQueueEnabled(Boolean &value)
{
	_queueEnabled = value;
}

Boolean UNIX_PrintQueue::getQueueAccepting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_ACCEPTING, getQueueAccepting());
	return true;
}

Boolean UNIX_PrintQueue::getQueueAccepting() const
{
	return _queueAccepting;
}

void UNIX_PrintQueue::setQueueAccepting(Boolean &value)
{
	_queueAccepting = value;
}

Boolean UNIX_PrintQueue::getNumberOnQueue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_ON_QUEUE, getNumberOnQueue());
	return true;
}

Uint32 UNIX_PrintQueue::getNumberOnQueue() const
{
	return _numberOnQueue;
}

void UNIX_PrintQueue::setNumberOnQueue(Uint32 &value)
{
	_numberOnQueue = value;
}

Boolean UNIX_PrintQueue::getQueueStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_STATUS, getQueueStatus());
	return true;
}

Uint16 UNIX_PrintQueue::getQueueStatus() const
{
	return _queueStatus;
}

void UNIX_PrintQueue::setQueueStatus(Uint16 &value)
{
	_queueStatus = value;
}

Boolean UNIX_PrintQueue::getQueueStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_STATUS_INFO, getQueueStatusInfo());
	return true;
}

String UNIX_PrintQueue::getQueueStatusInfo() const
{
	return _queueStatusInfo;
}

void UNIX_PrintQueue::setQueueStatusInfo(String &value)
{
	_queueStatusInfo = value;
}

Boolean UNIX_PrintQueue::getMaxJobSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_JOB_SIZE, getMaxJobSize());
	return true;
}

Uint32 UNIX_PrintQueue::getMaxJobSize() const
{
	return _maxJobSize;
}

void UNIX_PrintQueue::setMaxJobSize(Uint32 &value)
{
	_maxJobSize = value;
}

Boolean UNIX_PrintQueue::getDefaultJobPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_JOB_PRIORITY, getDefaultJobPriority());
	return true;
}

Uint32 UNIX_PrintQueue::getDefaultJobPriority() const
{
	return _defaultJobPriority;
}

void UNIX_PrintQueue::setDefaultJobPriority(Uint32 &value)
{
	_defaultJobPriority = value;
}

Boolean UNIX_PrintQueue::getJobPriorityHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_PRIORITY_HIGH, getJobPriorityHigh());
	return true;
}

Uint32 UNIX_PrintQueue::getJobPriorityHigh() const
{
	return _jobPriorityHigh;
}

void UNIX_PrintQueue::setJobPriorityHigh(Uint32 &value)
{
	_jobPriorityHigh = value;
}

Boolean UNIX_PrintQueue::getJobPriorityLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_PRIORITY_LOW, getJobPriorityLow());
	return true;
}

Uint32 UNIX_PrintQueue::getJobPriorityLow() const
{
	return _jobPriorityLow;
}

void UNIX_PrintQueue::setJobPriorityLow(Uint32 &value)
{
	_jobPriorityLow = value;
}

Boolean UNIX_PrintQueue::getAvailableJobSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_JOB_SHEETS, getAvailableJobSheets());
	return true;
}

Array<String> UNIX_PrintQueue::getAvailableJobSheets() const
{
	return _availableJobSheets;
}

void UNIX_PrintQueue::setAvailableJobSheets(Array<String> &value)
{
	_availableJobSheets = value;
}


void UNIX_PrintQueue::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintQueue");
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
	_creationClassName = String("UNIX_PrintQueue");
	_queueEnabled = Boolean(false);
	_queueAccepting = Boolean(false);
	_numberOnQueue = Uint32(0);
	_queueStatus = Uint16(0);
	_queueStatusInfo = String ("");
	_maxJobSize = Uint32(0);
	_defaultJobPriority = Uint32(0);
	_jobPriorityHigh = Uint32(0);
	_jobPriorityLow = Uint32(0);
	_availableJobSheets.clear();

}

Boolean UNIX_PrintQueue::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "QueueEnabled"))
			{
				Boolean queueEnabledValue;
				property.getValue().get(queueEnabledValue);
				setQueueEnabled(queueEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "QueueAccepting"))
			{
				Boolean queueAcceptingValue;
				property.getValue().get(queueAcceptingValue);
				setQueueAccepting(queueAcceptingValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOnQueue"))
			{
				Uint32 numberOnQueueValue;
				property.getValue().get(numberOnQueueValue);
				setNumberOnQueue(numberOnQueueValue);
			}
			else if (String::equal(property.getName().getString(), "QueueStatus"))
			{
				Uint16 queueStatusValue;
				property.getValue().get(queueStatusValue);
				setQueueStatus(queueStatusValue);
			}
			else if (String::equal(property.getName().getString(), "QueueStatusInfo"))
			{
				String queueStatusInfoValue;
				property.getValue().get(queueStatusInfoValue);
				setQueueStatusInfo(queueStatusInfoValue);
			}
			else if (String::equal(property.getName().getString(), "MaxJobSize"))
			{
				Uint32 maxJobSizeValue;
				property.getValue().get(maxJobSizeValue);
				setMaxJobSize(maxJobSizeValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultJobPriority"))
			{
				Uint32 defaultJobPriorityValue;
				property.getValue().get(defaultJobPriorityValue);
				setDefaultJobPriority(defaultJobPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "JobPriorityHigh"))
			{
				Uint32 jobPriorityHighValue;
				property.getValue().get(jobPriorityHighValue);
				setJobPriorityHigh(jobPriorityHighValue);
			}
			else if (String::equal(property.getName().getString(), "JobPriorityLow"))
			{
				Uint32 jobPriorityLowValue;
				property.getValue().get(jobPriorityLowValue);
				setJobPriorityLow(jobPriorityLowValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableJobSheets"))
			{
				Array<String> availableJobSheetsValue;
				property.getValue().get(availableJobSheetsValue);
				setAvailableJobSheets(availableJobSheetsValue);
			}
	}
	return true;
}

Uint32 UNIX_PrintQueue::invokeRequestStateChange(
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


Boolean UNIX_PrintQueue::initialize()
{
	return false;
}

Boolean UNIX_PrintQueue::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintQueue");
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
	_creationClassName = String("UNIX_PrintQueue");
	_queueEnabled = Boolean(false);
	_queueAccepting = Boolean(false);
	_numberOnQueue = Uint32(0);
	_queueStatus = Uint16(0);
	_queueStatusInfo = String ("");
	_maxJobSize = Uint32(0);
	_defaultJobPriority = Uint32(0);
	_jobPriorityHigh = Uint32(0);
	_jobPriorityLow = Uint32(0);
	_availableJobSheets.clear();
	
	return false;
}

Boolean UNIX_PrintQueue::finalize()
{
	return false;
}

Boolean UNIX_PrintQueue::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintQueue::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintQueue::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintQueue::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintQueue::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintQueue::validateInstance()
{
	return true;
}

