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


UNIX_Thread::UNIX_Thread(void)
{
}

UNIX_Thread::~UNIX_Thread(void)
{
}

Boolean UNIX_Thread::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Thread::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Thread::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Thread::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Thread::getCaption() const
{
	return _caption;
}

void UNIX_Thread::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Thread::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Thread::getDescription() const
{
	return _description;
}

void UNIX_Thread::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Thread::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Thread::getElementName() const
{
	return _elementName;
}

void UNIX_Thread::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Thread::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Thread::getGeneration() const
{
	return _generation;
}

void UNIX_Thread::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Thread::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Thread::getInstallDate() const
{
	return _installDate;
}

void UNIX_Thread::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Thread::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Thread::getName() const
{
	return _name;
}

void UNIX_Thread::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Thread::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Thread::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Thread::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Thread::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Thread::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Thread::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Thread::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Thread::getStatus() const
{
	return _status;
}

void UNIX_Thread::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Thread::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Thread::getHealthState() const
{
	return _healthState;
}

void UNIX_Thread::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Thread::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Thread::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Thread::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Thread::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Thread::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Thread::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Thread::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Thread::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Thread::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Thread::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Thread::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Thread::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Thread::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Thread::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Thread::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Thread::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Thread::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Thread::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Thread::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Thread::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Thread::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Thread::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Thread::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Thread::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Thread::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Thread::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Thread::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Thread::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Thread::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Thread::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Thread::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Thread::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Thread::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Thread::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_Thread::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_Thread::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_Thread::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_Thread::getCSName() const
{
	return _cSName;
}

void UNIX_Thread::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_Thread::getOSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CREATION_CLASS_NAME, getOSCreationClassName());
	return true;
}

String UNIX_Thread::getOSCreationClassName() const
{
	return _oSCreationClassName;
}

void UNIX_Thread::setOSCreationClassName(String &value)
{
	_oSCreationClassName = value;
}

Boolean UNIX_Thread::getOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_NAME, getOSName());
	return true;
}

String UNIX_Thread::getOSName() const
{
	return _oSName;
}

void UNIX_Thread::setOSName(String &value)
{
	_oSName = value;
}

Boolean UNIX_Thread::getProcessCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_CREATION_CLASS_NAME, getProcessCreationClassName());
	return true;
}

String UNIX_Thread::getProcessCreationClassName() const
{
	return _processCreationClassName;
}

void UNIX_Thread::setProcessCreationClassName(String &value)
{
	_processCreationClassName = value;
}

Boolean UNIX_Thread::getProcessHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_HANDLE, getProcessHandle());
	return true;
}

String UNIX_Thread::getProcessHandle() const
{
	return _processHandle;
}

void UNIX_Thread::setProcessHandle(String &value)
{
	_processHandle = value;
}

Boolean UNIX_Thread::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Thread::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Thread::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Thread::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_Thread::getHandle() const
{
	return _handle;
}

void UNIX_Thread::setHandle(String &value)
{
	_handle = value;
}

Boolean UNIX_Thread::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_Thread::getPriority() const
{
	return _priority;
}

void UNIX_Thread::setPriority(Uint32 &value)
{
	_priority = value;
}

Boolean UNIX_Thread::getExecutionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STATE, getExecutionState());
	return true;
}

Uint16 UNIX_Thread::getExecutionState() const
{
	return _executionState;
}

void UNIX_Thread::setExecutionState(Uint16 &value)
{
	_executionState = value;
}

Boolean UNIX_Thread::getKernelModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KERNEL_MODE_TIME, getKernelModeTime());
	return true;
}

Uint64 UNIX_Thread::getKernelModeTime() const
{
	return _kernelModeTime;
}

void UNIX_Thread::setKernelModeTime(Uint64 &value)
{
	_kernelModeTime = value;
}

Boolean UNIX_Thread::getUserModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_MODE_TIME, getUserModeTime());
	return true;
}

Uint64 UNIX_Thread::getUserModeTime() const
{
	return _userModeTime;
}

void UNIX_Thread::setUserModeTime(Uint64 &value)
{
	_userModeTime = value;
}

Boolean UNIX_Thread::getSchedPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHED_POLICY, getSchedPolicy());
	return true;
}

Uint16 UNIX_Thread::getSchedPolicy() const
{
	return _schedPolicy;
}

void UNIX_Thread::setSchedPolicy(Uint16 &value)
{
	_schedPolicy = value;
}

Boolean UNIX_Thread::getOtherSchedPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHED_POLICY, getOtherSchedPolicy());
	return true;
}

String UNIX_Thread::getOtherSchedPolicy() const
{
	return _otherSchedPolicy;
}

void UNIX_Thread::setOtherSchedPolicy(String &value)
{
	_otherSchedPolicy = value;
}

Boolean UNIX_Thread::getGuardSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GUARD_SIZE, getGuardSize());
	return true;
}

String UNIX_Thread::getGuardSize() const
{
	return _guardSize;
}

void UNIX_Thread::setGuardSize(String &value)
{
	_guardSize = value;
}

Boolean UNIX_Thread::getDetachState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETACH_STATE, getDetachState());
	return true;
}

Uint16 UNIX_Thread::getDetachState() const
{
	return _detachState;
}

void UNIX_Thread::setDetachState(Uint16 &value)
{
	_detachState = value;
}

Boolean UNIX_Thread::getInheritSched(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INHERIT_SCHED, getInheritSched());
	return true;
}

Uint16 UNIX_Thread::getInheritSched() const
{
	return _inheritSched;
}

void UNIX_Thread::setInheritSched(Uint16 &value)
{
	_inheritSched = value;
}

Boolean UNIX_Thread::getContentionScope(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTENTION_SCOPE, getContentionScope());
	return true;
}

Uint16 UNIX_Thread::getContentionScope() const
{
	return _contentionScope;
}

void UNIX_Thread::setContentionScope(Uint16 &value)
{
	_contentionScope = value;
}

Boolean UNIX_Thread::getStackSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STACK_SIZE, getStackSize());
	return true;
}

String UNIX_Thread::getStackSize() const
{
	return _stackSize;
}

void UNIX_Thread::setStackSize(String &value)
{
	_stackSize = value;
}

Boolean UNIX_Thread::getConcurrencyLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONCURRENCY_LEVEL, getConcurrencyLevel());
	return true;
}

Uint64 UNIX_Thread::getConcurrencyLevel() const
{
	return _concurrencyLevel;
}

void UNIX_Thread::setConcurrencyLevel(Uint64 &value)
{
	_concurrencyLevel = value;
}

Boolean UNIX_Thread::getCancelState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CANCEL_STATE, getCancelState());
	return true;
}

Uint16 UNIX_Thread::getCancelState() const
{
	return _cancelState;
}

void UNIX_Thread::setCancelState(Uint16 &value)
{
	_cancelState = value;
}

Boolean UNIX_Thread::getCancelType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CANCEL_TYPE, getCancelType());
	return true;
}

Uint16 UNIX_Thread::getCancelType() const
{
	return _cancelType;
}

void UNIX_Thread::setCancelType(Uint16 &value)
{
	_cancelType = value;
}


void UNIX_Thread::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Thread");
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
	_processCreationClassName = String ("");
	_processHandle = String ("");
	_creationClassName = String("UNIX_Thread");
	_handle = String ("");
	_priority = Uint32(0);
	_executionState = Uint16(0);
	_kernelModeTime = Uint64(0);
	_userModeTime = Uint64(0);
	_schedPolicy = Uint16(0);
	_otherSchedPolicy = String ("");
	_guardSize = String ("");
	_detachState = Uint16(0);
	_inheritSched = Uint16(0);
	_contentionScope = Uint16(0);
	_stackSize = String ("");
	_concurrencyLevel = Uint64(0);
	_cancelState = Uint16(0);
	_cancelType = Uint16(0);

}

Boolean UNIX_Thread::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ProcessCreationClassName"))
			{
				String processCreationClassNameValue;
				property.getValue().get(processCreationClassNameValue);
				setProcessCreationClassName(processCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessHandle"))
			{
				String processHandleValue;
				property.getValue().get(processHandleValue);
				setProcessHandle(processHandleValue);
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
			else if (String::equal(property.getName().getString(), "SchedPolicy"))
			{
				Uint16 schedPolicyValue;
				property.getValue().get(schedPolicyValue);
				setSchedPolicy(schedPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSchedPolicy"))
			{
				String otherSchedPolicyValue;
				property.getValue().get(otherSchedPolicyValue);
				setOtherSchedPolicy(otherSchedPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "GuardSize"))
			{
				String guardSizeValue;
				property.getValue().get(guardSizeValue);
				setGuardSize(guardSizeValue);
			}
			else if (String::equal(property.getName().getString(), "DetachState"))
			{
				Uint16 detachStateValue;
				property.getValue().get(detachStateValue);
				setDetachState(detachStateValue);
			}
			else if (String::equal(property.getName().getString(), "InheritSched"))
			{
				Uint16 inheritSchedValue;
				property.getValue().get(inheritSchedValue);
				setInheritSched(inheritSchedValue);
			}
			else if (String::equal(property.getName().getString(), "ContentionScope"))
			{
				Uint16 contentionScopeValue;
				property.getValue().get(contentionScopeValue);
				setContentionScope(contentionScopeValue);
			}
			else if (String::equal(property.getName().getString(), "StackSize"))
			{
				String stackSizeValue;
				property.getValue().get(stackSizeValue);
				setStackSize(stackSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ConcurrencyLevel"))
			{
				Uint64 concurrencyLevelValue;
				property.getValue().get(concurrencyLevelValue);
				setConcurrencyLevel(concurrencyLevelValue);
			}
			else if (String::equal(property.getName().getString(), "CancelState"))
			{
				Uint16 cancelStateValue;
				property.getValue().get(cancelStateValue);
				setCancelState(cancelStateValue);
			}
			else if (String::equal(property.getName().getString(), "CancelType"))
			{
				Uint16 cancelTypeValue;
				property.getValue().get(cancelTypeValue);
				setCancelType(cancelTypeValue);
			}
	}
	return true;
}

Uint32 UNIX_Thread::invokeRequestStateChange(
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


Boolean UNIX_Thread::initialize()
{
	return false;
}

Boolean UNIX_Thread::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Thread");
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
	_processCreationClassName = String ("");
	_processHandle = String ("");
	_creationClassName = String("UNIX_Thread");
	_handle = String ("");
	_priority = Uint32(0);
	_executionState = Uint16(0);
	_kernelModeTime = Uint64(0);
	_userModeTime = Uint64(0);
	_schedPolicy = Uint16(0);
	_otherSchedPolicy = String ("");
	_guardSize = String ("");
	_detachState = Uint16(0);
	_inheritSched = Uint16(0);
	_contentionScope = Uint16(0);
	_stackSize = String ("");
	_concurrencyLevel = Uint64(0);
	_cancelState = Uint16(0);
	_cancelType = Uint16(0);
	
	return false;
}

Boolean UNIX_Thread::finalize()
{
	return false;
}

Boolean UNIX_Thread::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Thread::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String oSCreationClassNameKey;
	String oSNameKey;
	String processCreationClassNameKey;
	String processHandleKey;
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
		else if (keyName.equal(PROPERTY_PROCESS_CREATION_CLASS_NAME)) processCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROCESS_HANDLE)) processHandleKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLE)) handleKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getOSCreationClassName(), oSCreationClassNameKey)) && 
			(String::equalNoCase(getOSName(), oSNameKey)) && 
			(String::equalNoCase(getProcessCreationClassName(), processCreationClassNameKey)) && 
			(String::equalNoCase(getProcessHandle(), processHandleKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getHandle(), handleKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Thread::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Thread::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Thread::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Thread::validateInstance()
{
	return true;
}

