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


UNIX_Process::UNIX_Process(void)
{
}

UNIX_Process::~UNIX_Process(void)
{
}

Boolean UNIX_Process::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Process::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Process::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Process::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Process::getCaption() const
{
	return _caption;
}

void UNIX_Process::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Process::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Process::getDescription() const
{
	return _description;
}

void UNIX_Process::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Process::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Process::getElementName() const
{
	return _elementName;
}

void UNIX_Process::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Process::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Process::getGeneration() const
{
	return _generation;
}

void UNIX_Process::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Process::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Process::getInstallDate() const
{
	return _installDate;
}

void UNIX_Process::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Process::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Process::getName() const
{
	return _name;
}

void UNIX_Process::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Process::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Process::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Process::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Process::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Process::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Process::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Process::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Process::getStatus() const
{
	return _status;
}

void UNIX_Process::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Process::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Process::getHealthState() const
{
	return _healthState;
}

void UNIX_Process::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Process::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Process::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Process::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Process::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Process::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Process::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Process::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Process::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Process::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Process::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Process::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Process::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Process::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Process::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Process::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Process::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Process::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Process::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Process::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Process::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Process::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Process::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Process::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Process::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Process::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Process::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Process::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Process::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Process::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Process::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Process::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Process::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Process::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Process::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_Process::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_Process::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_Process::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_Process::getCSName() const
{
	return _cSName;
}

void UNIX_Process::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_Process::getOSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CREATION_CLASS_NAME, getOSCreationClassName());
	return true;
}

String UNIX_Process::getOSCreationClassName() const
{
	return _oSCreationClassName;
}

void UNIX_Process::setOSCreationClassName(String &value)
{
	_oSCreationClassName = value;
}

Boolean UNIX_Process::getOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_NAME, getOSName());
	return true;
}

String UNIX_Process::getOSName() const
{
	return _oSName;
}

void UNIX_Process::setOSName(String &value)
{
	_oSName = value;
}

Boolean UNIX_Process::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Process::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Process::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Process::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_Process::getHandle() const
{
	return _handle;
}

void UNIX_Process::setHandle(String &value)
{
	_handle = value;
}

Boolean UNIX_Process::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_Process::getPriority() const
{
	return _priority;
}

void UNIX_Process::setPriority(Uint32 &value)
{
	_priority = value;
}

Boolean UNIX_Process::getExecutionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STATE, getExecutionState());
	return true;
}

Uint16 UNIX_Process::getExecutionState() const
{
	return _executionState;
}

void UNIX_Process::setExecutionState(Uint16 &value)
{
	_executionState = value;
}

Boolean UNIX_Process::getOtherExecutionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_EXECUTION_DESCRIPTION, getOtherExecutionDescription());
	return true;
}

String UNIX_Process::getOtherExecutionDescription() const
{
	return _otherExecutionDescription;
}

void UNIX_Process::setOtherExecutionDescription(String &value)
{
	_otherExecutionDescription = value;
}

Boolean UNIX_Process::getCreationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_DATE, getCreationDate());
	return true;
}

CIMDateTime UNIX_Process::getCreationDate() const
{
	return _creationDate;
}

void UNIX_Process::setCreationDate(CIMDateTime &value)
{
	_creationDate = value;
}

Boolean UNIX_Process::getTerminationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TERMINATION_DATE, getTerminationDate());
	return true;
}

CIMDateTime UNIX_Process::getTerminationDate() const
{
	return _terminationDate;
}

void UNIX_Process::setTerminationDate(CIMDateTime &value)
{
	_terminationDate = value;
}

Boolean UNIX_Process::getKernelModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KERNEL_MODE_TIME, getKernelModeTime());
	return true;
}

Uint64 UNIX_Process::getKernelModeTime() const
{
	return _kernelModeTime;
}

void UNIX_Process::setKernelModeTime(Uint64 &value)
{
	_kernelModeTime = value;
}

Boolean UNIX_Process::getUserModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_MODE_TIME, getUserModeTime());
	return true;
}

Uint64 UNIX_Process::getUserModeTime() const
{
	return _userModeTime;
}

void UNIX_Process::setUserModeTime(Uint64 &value)
{
	_userModeTime = value;
}

Boolean UNIX_Process::getWorkingSetSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORKING_SET_SIZE, getWorkingSetSize());
	return true;
}

Uint64 UNIX_Process::getWorkingSetSize() const
{
	return _workingSetSize;
}

void UNIX_Process::setWorkingSetSize(Uint64 &value)
{
	_workingSetSize = value;
}

Boolean UNIX_Process::getParentProcessID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT_PROCESS_ID, getParentProcessID());
	return true;
}

String UNIX_Process::getParentProcessID() const
{
	return _parentProcessID;
}

void UNIX_Process::setParentProcessID(String &value)
{
	_parentProcessID = value;
}

Boolean UNIX_Process::getRealUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_USER_ID, getRealUserID());
	return true;
}

Uint64 UNIX_Process::getRealUserID() const
{
	return _realUserID;
}

void UNIX_Process::setRealUserID(Uint64 &value)
{
	_realUserID = value;
}

Boolean UNIX_Process::getProcessGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_GROUP_ID, getProcessGroupID());
	return true;
}

Uint64 UNIX_Process::getProcessGroupID() const
{
	return _processGroupID;
}

void UNIX_Process::setProcessGroupID(Uint64 &value)
{
	_processGroupID = value;
}

Boolean UNIX_Process::getProcessSessionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_SESSION_ID, getProcessSessionID());
	return true;
}

Uint64 UNIX_Process::getProcessSessionID() const
{
	return _processSessionID;
}

void UNIX_Process::setProcessSessionID(Uint64 &value)
{
	_processSessionID = value;
}

Boolean UNIX_Process::getProcessTTY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_T_T_Y, getProcessTTY());
	return true;
}

String UNIX_Process::getProcessTTY() const
{
	return _processTTY;
}

void UNIX_Process::setProcessTTY(String &value)
{
	_processTTY = value;
}

Boolean UNIX_Process::getModulePath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULE_PATH, getModulePath());
	return true;
}

String UNIX_Process::getModulePath() const
{
	return _modulePath;
}

void UNIX_Process::setModulePath(String &value)
{
	_modulePath = value;
}

Boolean UNIX_Process::getParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETERS, getParameters());
	return true;
}

Array<String> UNIX_Process::getParameters() const
{
	return _parameters;
}

void UNIX_Process::setParameters(Array<String> &value)
{
	_parameters = value;
}

Boolean UNIX_Process::getProcessNiceValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_NICE_VALUE, getProcessNiceValue());
	return true;
}

Uint32 UNIX_Process::getProcessNiceValue() const
{
	return _processNiceValue;
}

void UNIX_Process::setProcessNiceValue(Uint32 &value)
{
	_processNiceValue = value;
}

Boolean UNIX_Process::getUnixPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIX_PRIORITY, getUnixPriority());
	return true;
}

Sint32 UNIX_Process::getUnixPriority() const
{
	return _unixPriority;
}

void UNIX_Process::setUnixPriority(Sint32 &value)
{
	_unixPriority = value;
}

Boolean UNIX_Process::getProcessWaitingForEvent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_WAITING_FOR_EVENT, getProcessWaitingForEvent());
	return true;
}

String UNIX_Process::getProcessWaitingForEvent() const
{
	return _processWaitingForEvent;
}

void UNIX_Process::setProcessWaitingForEvent(String &value)
{
	_processWaitingForEvent = value;
}


void UNIX_Process::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Process");
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
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_oSCreationClassName = String("UNIX_OperatingSystem");
	_oSName = CIMHelper::OSName;
	_creationClassName = String("UNIX_Process");
	_handle = String ("");
	_priority = Uint32(0);
	_executionState = Uint16(0);
	_otherExecutionDescription = String ("");
	_creationDate = CIMHelper::getCurrentTime();
	_terminationDate = CIMHelper::getCurrentTime();
	_kernelModeTime = Uint64(0);
	_userModeTime = Uint64(0);
	_workingSetSize = Uint64(0);
	_parentProcessID = String ("");
	_realUserID = Uint64(0);
	_processGroupID = Uint64(0);
	_processSessionID = Uint64(0);
	_processTTY = String ("");
	_modulePath = String ("");
	_parameters.clear();
	_processNiceValue = Uint32(0);
	_unixPriority = Sint32(0);
	_processWaitingForEvent = String ("");

}

Boolean UNIX_Process::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "OSCreationClassName"))
			{
				String oSCreationClassNameValue;
				property.getValue().get(oSCreationClassNameValue);
				setOSCreationClassName(oSCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "OSName"))
			{
				String oSNameValue;
				property.getValue().get(oSNameValue);
				setOSName(oSNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Handle"))
			{
				String handleValue;
				property.getValue().get(handleValue);
				setHandle(handleValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint32 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "ExecutionState"))
			{
				Uint16 executionStateValue;
				property.getValue().get(executionStateValue);
				setExecutionState(executionStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherExecutionDescription"))
			{
				String otherExecutionDescriptionValue;
				property.getValue().get(otherExecutionDescriptionValue);
				setOtherExecutionDescription(otherExecutionDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CreationDate"))
			{
				CIMDateTime creationDateValue;
				property.getValue().get(creationDateValue);
				setCreationDate(creationDateValue);
			}
			else if (String::equal(property.getName().getString(), "TerminationDate"))
			{
				CIMDateTime terminationDateValue;
				property.getValue().get(terminationDateValue);
				setTerminationDate(terminationDateValue);
			}
			else if (String::equal(property.getName().getString(), "KernelModeTime"))
			{
				Uint64 kernelModeTimeValue;
				property.getValue().get(kernelModeTimeValue);
				setKernelModeTime(kernelModeTimeValue);
			}
			else if (String::equal(property.getName().getString(), "UserModeTime"))
			{
				Uint64 userModeTimeValue;
				property.getValue().get(userModeTimeValue);
				setUserModeTime(userModeTimeValue);
			}
			else if (String::equal(property.getName().getString(), "WorkingSetSize"))
			{
				Uint64 workingSetSizeValue;
				property.getValue().get(workingSetSizeValue);
				setWorkingSetSize(workingSetSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ParentProcessID"))
			{
				String parentProcessIDValue;
				property.getValue().get(parentProcessIDValue);
				setParentProcessID(parentProcessIDValue);
			}
			else if (String::equal(property.getName().getString(), "RealUserID"))
			{
				Uint64 realUserIDValue;
				property.getValue().get(realUserIDValue);
				setRealUserID(realUserIDValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessGroupID"))
			{
				Uint64 processGroupIDValue;
				property.getValue().get(processGroupIDValue);
				setProcessGroupID(processGroupIDValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessSessionID"))
			{
				Uint64 processSessionIDValue;
				property.getValue().get(processSessionIDValue);
				setProcessSessionID(processSessionIDValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessTTY"))
			{
				String processTTYValue;
				property.getValue().get(processTTYValue);
				setProcessTTY(processTTYValue);
			}
			else if (String::equal(property.getName().getString(), "ModulePath"))
			{
				String modulePathValue;
				property.getValue().get(modulePathValue);
				setModulePath(modulePathValue);
			}
			else if (String::equal(property.getName().getString(), "Parameters"))
			{
				Array<String> parametersValue;
				property.getValue().get(parametersValue);
				setParameters(parametersValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessNiceValue"))
			{
				Uint32 processNiceValueValue;
				property.getValue().get(processNiceValueValue);
				setProcessNiceValue(processNiceValueValue);
			}
			else if (String::equal(property.getName().getString(), "UnixPriority"))
			{
				Sint32 unixPriorityValue;
				property.getValue().get(unixPriorityValue);
				setUnixPriority(unixPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessWaitingForEvent"))
			{
				String processWaitingForEventValue;
				property.getValue().get(processWaitingForEventValue);
				setProcessWaitingForEvent(processWaitingForEventValue);
			}
	}
	return true;
}

Uint32 UNIX_Process::invokeRequestStateChange(
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


Boolean UNIX_Process::initialize()
{
	return false;
}

Boolean UNIX_Process::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Process");
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
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_oSCreationClassName = String("UNIX_OperatingSystem");
	_oSName = CIMHelper::OSName;
	_creationClassName = String("UNIX_Process");
	_handle = String ("");
	_priority = Uint32(0);
	_executionState = Uint16(0);
	_otherExecutionDescription = String ("");
	_creationDate = CIMHelper::getCurrentTime();
	_terminationDate = CIMHelper::getCurrentTime();
	_kernelModeTime = Uint64(0);
	_userModeTime = Uint64(0);
	_workingSetSize = Uint64(0);
	_parentProcessID = String ("");
	_realUserID = Uint64(0);
	_processGroupID = Uint64(0);
	_processSessionID = Uint64(0);
	_processTTY = String ("");
	_modulePath = String ("");
	_parameters.clear();
	_processNiceValue = Uint32(0);
	_unixPriority = Sint32(0);
	_processWaitingForEvent = String ("");
	
	return false;
}

Boolean UNIX_Process::finalize()
{
	return false;
}

Boolean UNIX_Process::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Process::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String oSCreationClassNameKey;
	String oSNameKey;
	String creationClassNameKey;
	String handleKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_CREATION_CLASS_NAME)) oSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_NAME)) oSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLE)) handleKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getOSCreationClassName(), oSCreationClassNameKey)) && 
			(String::equalNoCase(getOSName(), oSNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getHandle(), handleKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Process::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Process::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Process::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Process::validateInstance()
{
	return true;
}

