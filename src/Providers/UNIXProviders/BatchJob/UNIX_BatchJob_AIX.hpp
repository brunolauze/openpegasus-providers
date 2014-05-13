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


UNIX_BatchJob::UNIX_BatchJob(void)
{
}

UNIX_BatchJob::~UNIX_BatchJob(void)
{
}

Boolean UNIX_BatchJob::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BatchJob::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BatchJob::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BatchJob::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BatchJob::getCaption() const
{
	return _caption;
}

void UNIX_BatchJob::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BatchJob::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BatchJob::getDescription() const
{
	return _description;
}

void UNIX_BatchJob::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BatchJob::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BatchJob::getElementName() const
{
	return _elementName;
}

void UNIX_BatchJob::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BatchJob::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BatchJob::getGeneration() const
{
	return _generation;
}

void UNIX_BatchJob::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BatchJob::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BatchJob::getInstallDate() const
{
	return _installDate;
}

void UNIX_BatchJob::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BatchJob::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BatchJob::getName() const
{
	return _name;
}

void UNIX_BatchJob::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BatchJob::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BatchJob::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BatchJob::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BatchJob::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BatchJob::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BatchJob::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BatchJob::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BatchJob::getStatus() const
{
	return _status;
}

void UNIX_BatchJob::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BatchJob::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BatchJob::getHealthState() const
{
	return _healthState;
}

void UNIX_BatchJob::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BatchJob::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BatchJob::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BatchJob::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BatchJob::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BatchJob::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BatchJob::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BatchJob::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BatchJob::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BatchJob::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BatchJob::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BatchJob::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BatchJob::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BatchJob::getJobStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATUS, getJobStatus());
	return true;
}

String UNIX_BatchJob::getJobStatus() const
{
	return _jobStatus;
}

void UNIX_BatchJob::setJobStatus(String &value)
{
	_jobStatus = value;
}

Boolean UNIX_BatchJob::getTimeSubmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SUBMITTED, getTimeSubmitted());
	return true;
}

CIMDateTime UNIX_BatchJob::getTimeSubmitted() const
{
	return _timeSubmitted;
}

void UNIX_BatchJob::setTimeSubmitted(CIMDateTime &value)
{
	_timeSubmitted = value;
}

Boolean UNIX_BatchJob::getScheduledStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEDULED_START_TIME, getScheduledStartTime());
	return true;
}

CIMDateTime UNIX_BatchJob::getScheduledStartTime() const
{
	return _scheduledStartTime;
}

void UNIX_BatchJob::setScheduledStartTime(CIMDateTime &value)
{
	_scheduledStartTime = value;
}

Boolean UNIX_BatchJob::getStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_TIME, getStartTime());
	return true;
}

CIMDateTime UNIX_BatchJob::getStartTime() const
{
	return _startTime;
}

void UNIX_BatchJob::setStartTime(CIMDateTime &value)
{
	_startTime = value;
}

Boolean UNIX_BatchJob::getElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELAPSED_TIME, getElapsedTime());
	return true;
}

CIMDateTime UNIX_BatchJob::getElapsedTime() const
{
	return _elapsedTime;
}

void UNIX_BatchJob::setElapsedTime(CIMDateTime &value)
{
	_elapsedTime = value;
}

Boolean UNIX_BatchJob::getJobRunTimes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_RUN_TIMES, getJobRunTimes());
	return true;
}

Uint32 UNIX_BatchJob::getJobRunTimes() const
{
	return _jobRunTimes;
}

void UNIX_BatchJob::setJobRunTimes(Uint32 &value)
{
	_jobRunTimes = value;
}

Boolean UNIX_BatchJob::getRunMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_MONTH, getRunMonth());
	return true;
}

Uint8 UNIX_BatchJob::getRunMonth() const
{
	return _runMonth;
}

void UNIX_BatchJob::setRunMonth(Uint8 &value)
{
	_runMonth = value;
}

Boolean UNIX_BatchJob::getRunDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY, getRunDay());
	return true;
}

Sint8 UNIX_BatchJob::getRunDay() const
{
	return _runDay;
}

void UNIX_BatchJob::setRunDay(Sint8 &value)
{
	_runDay = value;
}

Boolean UNIX_BatchJob::getRunDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY_OF_WEEK, getRunDayOfWeek());
	return true;
}

Sint8 UNIX_BatchJob::getRunDayOfWeek() const
{
	return _runDayOfWeek;
}

void UNIX_BatchJob::setRunDayOfWeek(Sint8 &value)
{
	_runDayOfWeek = value;
}

Boolean UNIX_BatchJob::getRunStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_START_INTERVAL, getRunStartInterval());
	return true;
}

CIMDateTime UNIX_BatchJob::getRunStartInterval() const
{
	return _runStartInterval;
}

void UNIX_BatchJob::setRunStartInterval(CIMDateTime &value)
{
	_runStartInterval = value;
}

Boolean UNIX_BatchJob::getLocalOrUtcTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_OR_UTC_TIME, getLocalOrUtcTime());
	return true;
}

Uint16 UNIX_BatchJob::getLocalOrUtcTime() const
{
	return _localOrUtcTime;
}

void UNIX_BatchJob::setLocalOrUtcTime(Uint16 &value)
{
	_localOrUtcTime = value;
}

Boolean UNIX_BatchJob::getUntilTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNTIL_TIME, getUntilTime());
	return true;
}

CIMDateTime UNIX_BatchJob::getUntilTime() const
{
	return _untilTime;
}

void UNIX_BatchJob::setUntilTime(CIMDateTime &value)
{
	_untilTime = value;
}

Boolean UNIX_BatchJob::getNotify(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTIFY, getNotify());
	return true;
}

String UNIX_BatchJob::getNotify() const
{
	return _notify;
}

void UNIX_BatchJob::setNotify(String &value)
{
	_notify = value;
}

Boolean UNIX_BatchJob::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

String UNIX_BatchJob::getOwner() const
{
	return _owner;
}

void UNIX_BatchJob::setOwner(String &value)
{
	_owner = value;
}

Boolean UNIX_BatchJob::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_BatchJob::getPriority() const
{
	return _priority;
}

void UNIX_BatchJob::setPriority(Uint32 &value)
{
	_priority = value;
}

Boolean UNIX_BatchJob::getPercentComplete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_COMPLETE, getPercentComplete());
	return true;
}

Uint16 UNIX_BatchJob::getPercentComplete() const
{
	return _percentComplete;
}

void UNIX_BatchJob::setPercentComplete(Uint16 &value)
{
	_percentComplete = value;
}

Boolean UNIX_BatchJob::getDeleteOnCompletion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_COMPLETION, getDeleteOnCompletion());
	return true;
}

Boolean UNIX_BatchJob::getDeleteOnCompletion() const
{
	return _deleteOnCompletion;
}

void UNIX_BatchJob::setDeleteOnCompletion(Boolean &value)
{
	_deleteOnCompletion = value;
}

Boolean UNIX_BatchJob::getErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CODE, getErrorCode());
	return true;
}

Uint16 UNIX_BatchJob::getErrorCode() const
{
	return _errorCode;
}

void UNIX_BatchJob::setErrorCode(Uint16 &value)
{
	_errorCode = value;
}

Boolean UNIX_BatchJob::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_BatchJob::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_BatchJob::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_BatchJob::getRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_ACTION, getRecoveryAction());
	return true;
}

Uint16 UNIX_BatchJob::getRecoveryAction() const
{
	return _recoveryAction;
}

void UNIX_BatchJob::setRecoveryAction(Uint16 &value)
{
	_recoveryAction = value;
}

Boolean UNIX_BatchJob::getOtherRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERY_ACTION, getOtherRecoveryAction());
	return true;
}

String UNIX_BatchJob::getOtherRecoveryAction() const
{
	return _otherRecoveryAction;
}

void UNIX_BatchJob::setOtherRecoveryAction(String &value)
{
	_otherRecoveryAction = value;
}

Boolean UNIX_BatchJob::getJobState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATE, getJobState());
	return true;
}

Uint16 UNIX_BatchJob::getJobState() const
{
	return _jobState;
}

void UNIX_BatchJob::setJobState(Uint16 &value)
{
	_jobState = value;
}

Boolean UNIX_BatchJob::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_BatchJob::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_BatchJob::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_BatchJob::getTimeBeforeRemoval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_BEFORE_REMOVAL, getTimeBeforeRemoval());
	return true;
}

CIMDateTime UNIX_BatchJob::getTimeBeforeRemoval() const
{
	return _timeBeforeRemoval;
}

void UNIX_BatchJob::setTimeBeforeRemoval(CIMDateTime &value)
{
	_timeBeforeRemoval = value;
}

Boolean UNIX_BatchJob::getMethodName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METHOD_NAME, getMethodName());
	return true;
}

String UNIX_BatchJob::getMethodName() const
{
	return _methodName;
}

void UNIX_BatchJob::setMethodName(String &value)
{
	_methodName = value;
}

Boolean UNIX_BatchJob::getJobInParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_IN_PARAMETERS, getJobInParameters());
	return true;
}

String UNIX_BatchJob::getJobInParameters() const
{
	return _jobInParameters;
}

void UNIX_BatchJob::setJobInParameters(String &value)
{
	_jobInParameters = value;
}

Boolean UNIX_BatchJob::getJobOutParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_OUT_PARAMETERS, getJobOutParameters());
	return true;
}

String UNIX_BatchJob::getJobOutParameters() const
{
	return _jobOutParameters;
}

void UNIX_BatchJob::setJobOutParameters(String &value)
{
	_jobOutParameters = value;
}

Boolean UNIX_BatchJob::getMaxCPUTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CPU_TIME, getMaxCPUTime());
	return true;
}

Uint32 UNIX_BatchJob::getMaxCPUTime() const
{
	return _maxCPUTime;
}

void UNIX_BatchJob::setMaxCPUTime(Uint32 &value)
{
	_maxCPUTime = value;
}

Boolean UNIX_BatchJob::getTimeCompleted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_COMPLETED, getTimeCompleted());
	return true;
}

CIMDateTime UNIX_BatchJob::getTimeCompleted() const
{
	return _timeCompleted;
}

void UNIX_BatchJob::setTimeCompleted(CIMDateTime &value)
{
	_timeCompleted = value;
}

Boolean UNIX_BatchJob::getJobOrigination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_ORIGINATION, getJobOrigination());
	return true;
}

String UNIX_BatchJob::getJobOrigination() const
{
	return _jobOrigination;
}

void UNIX_BatchJob::setJobOrigination(String &value)
{
	_jobOrigination = value;
}

Boolean UNIX_BatchJob::getTask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TASK, getTask());
	return true;
}

String UNIX_BatchJob::getTask() const
{
	return _task;
}

void UNIX_BatchJob::setTask(String &value)
{
	_task = value;
}


void UNIX_BatchJob::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BatchJob");
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
	_jobStatus = String ("");
	_timeSubmitted = CIMHelper::getCurrentTime();
	_scheduledStartTime = CIMHelper::getCurrentTime();
	_startTime = CIMHelper::getCurrentTime();
	_elapsedTime = CIMHelper::getCurrentTime();
	_jobRunTimes = Uint32(0);
	_runMonth = Uint8(0);
	_runDay = Sint8(0);
	_runDayOfWeek = Sint8(0);
	_runStartInterval = CIMHelper::getCurrentTime();
	_localOrUtcTime = Uint16(0);
	_untilTime = CIMHelper::getCurrentTime();
	_notify = String ("");
	_owner = String ("");
	_priority = Uint32(0);
	_percentComplete = Uint16(0);
	_deleteOnCompletion = Boolean(false);
	_errorCode = Uint16(0);
	_errorDescription = String ("");
	_recoveryAction = Uint16(0);
	_otherRecoveryAction = String ("");
	_jobState = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_timeBeforeRemoval = CIMHelper::getCurrentTime();
	_methodName = String ("");
	_jobInParameters = String ("");
	_jobOutParameters = String ("");
	_maxCPUTime = Uint32(0);
	_timeCompleted = CIMHelper::getCurrentTime();
	_jobOrigination = String ("");
	_task = String ("");

}

Boolean UNIX_BatchJob::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "JobStatus"))
			{
				String jobStatusValue;
				property.getValue().get(jobStatusValue);
				setJobStatus(jobStatusValue);
			}
			else if (String::equal(property.getName().getString(), "TimeSubmitted"))
			{
				CIMDateTime timeSubmittedValue;
				property.getValue().get(timeSubmittedValue);
				setTimeSubmitted(timeSubmittedValue);
			}
			else if (String::equal(property.getName().getString(), "ScheduledStartTime"))
			{
				CIMDateTime scheduledStartTimeValue;
				property.getValue().get(scheduledStartTimeValue);
				setScheduledStartTime(scheduledStartTimeValue);
			}
			else if (String::equal(property.getName().getString(), "StartTime"))
			{
				CIMDateTime startTimeValue;
				property.getValue().get(startTimeValue);
				setStartTime(startTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ElapsedTime"))
			{
				CIMDateTime elapsedTimeValue;
				property.getValue().get(elapsedTimeValue);
				setElapsedTime(elapsedTimeValue);
			}
			else if (String::equal(property.getName().getString(), "JobRunTimes"))
			{
				Uint32 jobRunTimesValue;
				property.getValue().get(jobRunTimesValue);
				setJobRunTimes(jobRunTimesValue);
			}
			else if (String::equal(property.getName().getString(), "RunMonth"))
			{
				Uint8 runMonthValue;
				property.getValue().get(runMonthValue);
				setRunMonth(runMonthValue);
			}
			else if (String::equal(property.getName().getString(), "RunDay"))
			{
				Sint8 runDayValue;
				property.getValue().get(runDayValue);
				setRunDay(runDayValue);
			}
			else if (String::equal(property.getName().getString(), "RunDayOfWeek"))
			{
				Sint8 runDayOfWeekValue;
				property.getValue().get(runDayOfWeekValue);
				setRunDayOfWeek(runDayOfWeekValue);
			}
			else if (String::equal(property.getName().getString(), "RunStartInterval"))
			{
				CIMDateTime runStartIntervalValue;
				property.getValue().get(runStartIntervalValue);
				setRunStartInterval(runStartIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "LocalOrUtcTime"))
			{
				Uint16 localOrUtcTimeValue;
				property.getValue().get(localOrUtcTimeValue);
				setLocalOrUtcTime(localOrUtcTimeValue);
			}
			else if (String::equal(property.getName().getString(), "UntilTime"))
			{
				CIMDateTime untilTimeValue;
				property.getValue().get(untilTimeValue);
				setUntilTime(untilTimeValue);
			}
			else if (String::equal(property.getName().getString(), "Notify"))
			{
				String notifyValue;
				property.getValue().get(notifyValue);
				setNotify(notifyValue);
			}
			else if (String::equal(property.getName().getString(), "Owner"))
			{
				String ownerValue;
				property.getValue().get(ownerValue);
				setOwner(ownerValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint32 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "PercentComplete"))
			{
				Uint16 percentCompleteValue;
				property.getValue().get(percentCompleteValue);
				setPercentComplete(percentCompleteValue);
			}
			else if (String::equal(property.getName().getString(), "DeleteOnCompletion"))
			{
				Boolean deleteOnCompletionValue;
				property.getValue().get(deleteOnCompletionValue);
				setDeleteOnCompletion(deleteOnCompletionValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCode"))
			{
				Uint16 errorCodeValue;
				property.getValue().get(errorCodeValue);
				setErrorCode(errorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDescription"))
			{
				String errorDescriptionValue;
				property.getValue().get(errorDescriptionValue);
				setErrorDescription(errorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveryAction"))
			{
				Uint16 recoveryActionValue;
				property.getValue().get(recoveryActionValue);
				setRecoveryAction(recoveryActionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherRecoveryAction"))
			{
				String otherRecoveryActionValue;
				property.getValue().get(otherRecoveryActionValue);
				setOtherRecoveryAction(otherRecoveryActionValue);
			}
			else if (String::equal(property.getName().getString(), "JobState"))
			{
				Uint16 jobStateValue;
				property.getValue().get(jobStateValue);
				setJobState(jobStateValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastStateChange"))
			{
				CIMDateTime timeOfLastStateChangeValue;
				property.getValue().get(timeOfLastStateChangeValue);
				setTimeOfLastStateChange(timeOfLastStateChangeValue);
			}
			else if (String::equal(property.getName().getString(), "TimeBeforeRemoval"))
			{
				CIMDateTime timeBeforeRemovalValue;
				property.getValue().get(timeBeforeRemovalValue);
				setTimeBeforeRemoval(timeBeforeRemovalValue);
			}
			else if (String::equal(property.getName().getString(), "MethodName"))
			{
				String methodNameValue;
				property.getValue().get(methodNameValue);
				setMethodName(methodNameValue);
			}
			else if (String::equal(property.getName().getString(), "JobInParameters"))
			{
				String jobInParametersValue;
				property.getValue().get(jobInParametersValue);
				setJobInParameters(jobInParametersValue);
			}
			else if (String::equal(property.getName().getString(), "JobOutParameters"))
			{
				String jobOutParametersValue;
				property.getValue().get(jobOutParametersValue);
				setJobOutParameters(jobOutParametersValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCPUTime"))
			{
				Uint32 maxCPUTimeValue;
				property.getValue().get(maxCPUTimeValue);
				setMaxCPUTime(maxCPUTimeValue);
			}
			else if (String::equal(property.getName().getString(), "TimeCompleted"))
			{
				CIMDateTime timeCompletedValue;
				property.getValue().get(timeCompletedValue);
				setTimeCompleted(timeCompletedValue);
			}
			else if (String::equal(property.getName().getString(), "JobOrigination"))
			{
				String jobOriginationValue;
				property.getValue().get(jobOriginationValue);
				setJobOrigination(jobOriginationValue);
			}
			else if (String::equal(property.getName().getString(), "Task"))
			{
				String taskValue;
				property.getValue().get(taskValue);
				setTask(taskValue);
			}
	}
	return true;
}

Uint32 UNIX_BatchJob::invokeKillJob(
		Boolean &inDeleteOnKill
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method KillJob */
	
	
	
	return returnValue;
}

Uint32 UNIX_BatchJob::invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RequestStateChange */
	
	
	
	return returnValue;
}

Uint32 UNIX_BatchJob::invokeGetError(
		String &inError
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetError */
	
	
	
	return returnValue;
}

Uint32 UNIX_BatchJob::invokeGetErrors(
		Array<String> &inErrors
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetErrors */
	
	
	
	return returnValue;
}

Uint32 UNIX_BatchJob::invokeResumeWithAction()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResumeWithAction */
	
	
	
	return returnValue;
}

Uint32 UNIX_BatchJob::invokeResumeWithInput(
		Array<String> &inInputs
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResumeWithInput */
	
	
	
	return returnValue;
}


Boolean UNIX_BatchJob::initialize()
{
	return false;
}

Boolean UNIX_BatchJob::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BatchJob");
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
	_jobStatus = String ("");
	_timeSubmitted = CIMHelper::getCurrentTime();
	_scheduledStartTime = CIMHelper::getCurrentTime();
	_startTime = CIMHelper::getCurrentTime();
	_elapsedTime = CIMHelper::getCurrentTime();
	_jobRunTimes = Uint32(0);
	_runMonth = Uint8(0);
	_runDay = Sint8(0);
	_runDayOfWeek = Sint8(0);
	_runStartInterval = CIMHelper::getCurrentTime();
	_localOrUtcTime = Uint16(0);
	_untilTime = CIMHelper::getCurrentTime();
	_notify = String ("");
	_owner = String ("");
	_priority = Uint32(0);
	_percentComplete = Uint16(0);
	_deleteOnCompletion = Boolean(false);
	_errorCode = Uint16(0);
	_errorDescription = String ("");
	_recoveryAction = Uint16(0);
	_otherRecoveryAction = String ("");
	_jobState = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_timeBeforeRemoval = CIMHelper::getCurrentTime();
	_methodName = String ("");
	_jobInParameters = String ("");
	_jobOutParameters = String ("");
	_maxCPUTime = Uint32(0);
	_timeCompleted = CIMHelper::getCurrentTime();
	_jobOrigination = String ("");
	_task = String ("");
	
	return false;
}

Boolean UNIX_BatchJob::finalize()
{
	return false;
}

Boolean UNIX_BatchJob::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BatchJob::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BatchJob::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BatchJob::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BatchJob::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BatchJob::validateInstance()
{
	return true;
}

