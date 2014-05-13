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


UNIX_ConcreteJob::UNIX_ConcreteJob(void)
{
}

UNIX_ConcreteJob::~UNIX_ConcreteJob(void)
{
}

Boolean UNIX_ConcreteJob::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ConcreteJob::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ConcreteJob::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ConcreteJob::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ConcreteJob::getCaption() const
{
	return _caption;
}

void UNIX_ConcreteJob::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ConcreteJob::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ConcreteJob::getDescription() const
{
	return _description;
}

void UNIX_ConcreteJob::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ConcreteJob::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ConcreteJob::getElementName() const
{
	return _elementName;
}

void UNIX_ConcreteJob::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ConcreteJob::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ConcreteJob::getGeneration() const
{
	return _generation;
}

void UNIX_ConcreteJob::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ConcreteJob::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getInstallDate() const
{
	return _installDate;
}

void UNIX_ConcreteJob::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_ConcreteJob::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ConcreteJob::getName() const
{
	return _name;
}

void UNIX_ConcreteJob::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ConcreteJob::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ConcreteJob::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_ConcreteJob::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_ConcreteJob::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ConcreteJob::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_ConcreteJob::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_ConcreteJob::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ConcreteJob::getStatus() const
{
	return _status;
}

void UNIX_ConcreteJob::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_ConcreteJob::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ConcreteJob::getHealthState() const
{
	return _healthState;
}

void UNIX_ConcreteJob::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_ConcreteJob::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ConcreteJob::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_ConcreteJob::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_ConcreteJob::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ConcreteJob::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_ConcreteJob::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_ConcreteJob::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ConcreteJob::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_ConcreteJob::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_ConcreteJob::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ConcreteJob::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_ConcreteJob::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_ConcreteJob::getJobStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATUS, getJobStatus());
	return true;
}

String UNIX_ConcreteJob::getJobStatus() const
{
	return _jobStatus;
}

void UNIX_ConcreteJob::setJobStatus(String &value)
{
	_jobStatus = value;
}

Boolean UNIX_ConcreteJob::getTimeSubmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SUBMITTED, getTimeSubmitted());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getTimeSubmitted() const
{
	return _timeSubmitted;
}

void UNIX_ConcreteJob::setTimeSubmitted(CIMDateTime &value)
{
	_timeSubmitted = value;
}

Boolean UNIX_ConcreteJob::getScheduledStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEDULED_START_TIME, getScheduledStartTime());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getScheduledStartTime() const
{
	return _scheduledStartTime;
}

void UNIX_ConcreteJob::setScheduledStartTime(CIMDateTime &value)
{
	_scheduledStartTime = value;
}

Boolean UNIX_ConcreteJob::getStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_TIME, getStartTime());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getStartTime() const
{
	return _startTime;
}

void UNIX_ConcreteJob::setStartTime(CIMDateTime &value)
{
	_startTime = value;
}

Boolean UNIX_ConcreteJob::getElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELAPSED_TIME, getElapsedTime());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getElapsedTime() const
{
	return _elapsedTime;
}

void UNIX_ConcreteJob::setElapsedTime(CIMDateTime &value)
{
	_elapsedTime = value;
}

Boolean UNIX_ConcreteJob::getJobRunTimes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_RUN_TIMES, getJobRunTimes());
	return true;
}

Uint32 UNIX_ConcreteJob::getJobRunTimes() const
{
	return _jobRunTimes;
}

void UNIX_ConcreteJob::setJobRunTimes(Uint32 &value)
{
	_jobRunTimes = value;
}

Boolean UNIX_ConcreteJob::getRunMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_MONTH, getRunMonth());
	return true;
}

Uint8 UNIX_ConcreteJob::getRunMonth() const
{
	return _runMonth;
}

void UNIX_ConcreteJob::setRunMonth(Uint8 &value)
{
	_runMonth = value;
}

Boolean UNIX_ConcreteJob::getRunDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY, getRunDay());
	return true;
}

Sint8 UNIX_ConcreteJob::getRunDay() const
{
	return _runDay;
}

void UNIX_ConcreteJob::setRunDay(Sint8 &value)
{
	_runDay = value;
}

Boolean UNIX_ConcreteJob::getRunDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY_OF_WEEK, getRunDayOfWeek());
	return true;
}

Sint8 UNIX_ConcreteJob::getRunDayOfWeek() const
{
	return _runDayOfWeek;
}

void UNIX_ConcreteJob::setRunDayOfWeek(Sint8 &value)
{
	_runDayOfWeek = value;
}

Boolean UNIX_ConcreteJob::getRunStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_START_INTERVAL, getRunStartInterval());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getRunStartInterval() const
{
	return _runStartInterval;
}

void UNIX_ConcreteJob::setRunStartInterval(CIMDateTime &value)
{
	_runStartInterval = value;
}

Boolean UNIX_ConcreteJob::getLocalOrUtcTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_OR_UTC_TIME, getLocalOrUtcTime());
	return true;
}

Uint16 UNIX_ConcreteJob::getLocalOrUtcTime() const
{
	return _localOrUtcTime;
}

void UNIX_ConcreteJob::setLocalOrUtcTime(Uint16 &value)
{
	_localOrUtcTime = value;
}

Boolean UNIX_ConcreteJob::getUntilTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNTIL_TIME, getUntilTime());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getUntilTime() const
{
	return _untilTime;
}

void UNIX_ConcreteJob::setUntilTime(CIMDateTime &value)
{
	_untilTime = value;
}

Boolean UNIX_ConcreteJob::getNotify(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTIFY, getNotify());
	return true;
}

String UNIX_ConcreteJob::getNotify() const
{
	return _notify;
}

void UNIX_ConcreteJob::setNotify(String &value)
{
	_notify = value;
}

Boolean UNIX_ConcreteJob::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

String UNIX_ConcreteJob::getOwner() const
{
	return _owner;
}

void UNIX_ConcreteJob::setOwner(String &value)
{
	_owner = value;
}

Boolean UNIX_ConcreteJob::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_ConcreteJob::getPriority() const
{
	return _priority;
}

void UNIX_ConcreteJob::setPriority(Uint32 &value)
{
	_priority = value;
}

Boolean UNIX_ConcreteJob::getPercentComplete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_COMPLETE, getPercentComplete());
	return true;
}

Uint16 UNIX_ConcreteJob::getPercentComplete() const
{
	return _percentComplete;
}

void UNIX_ConcreteJob::setPercentComplete(Uint16 &value)
{
	_percentComplete = value;
}

Boolean UNIX_ConcreteJob::getDeleteOnCompletion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_COMPLETION, getDeleteOnCompletion());
	return true;
}

Boolean UNIX_ConcreteJob::getDeleteOnCompletion() const
{
	return _deleteOnCompletion;
}

void UNIX_ConcreteJob::setDeleteOnCompletion(Boolean &value)
{
	_deleteOnCompletion = value;
}

Boolean UNIX_ConcreteJob::getErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CODE, getErrorCode());
	return true;
}

Uint16 UNIX_ConcreteJob::getErrorCode() const
{
	return _errorCode;
}

void UNIX_ConcreteJob::setErrorCode(Uint16 &value)
{
	_errorCode = value;
}

Boolean UNIX_ConcreteJob::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_ConcreteJob::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_ConcreteJob::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_ConcreteJob::getRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_ACTION, getRecoveryAction());
	return true;
}

Uint16 UNIX_ConcreteJob::getRecoveryAction() const
{
	return _recoveryAction;
}

void UNIX_ConcreteJob::setRecoveryAction(Uint16 &value)
{
	_recoveryAction = value;
}

Boolean UNIX_ConcreteJob::getOtherRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERY_ACTION, getOtherRecoveryAction());
	return true;
}

String UNIX_ConcreteJob::getOtherRecoveryAction() const
{
	return _otherRecoveryAction;
}

void UNIX_ConcreteJob::setOtherRecoveryAction(String &value)
{
	_otherRecoveryAction = value;
}

Boolean UNIX_ConcreteJob::getJobState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATE, getJobState());
	return true;
}

Uint16 UNIX_ConcreteJob::getJobState() const
{
	return _jobState;
}

void UNIX_ConcreteJob::setJobState(Uint16 &value)
{
	_jobState = value;
}

Boolean UNIX_ConcreteJob::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_ConcreteJob::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_ConcreteJob::getTimeBeforeRemoval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_BEFORE_REMOVAL, getTimeBeforeRemoval());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getTimeBeforeRemoval() const
{
	return _timeBeforeRemoval;
}

void UNIX_ConcreteJob::setTimeBeforeRemoval(CIMDateTime &value)
{
	_timeBeforeRemoval = value;
}

Boolean UNIX_ConcreteJob::getMethodName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METHOD_NAME, getMethodName());
	return true;
}

String UNIX_ConcreteJob::getMethodName() const
{
	return _methodName;
}

void UNIX_ConcreteJob::setMethodName(String &value)
{
	_methodName = value;
}

Boolean UNIX_ConcreteJob::getJobInParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_IN_PARAMETERS, getJobInParameters());
	return true;
}

String UNIX_ConcreteJob::getJobInParameters() const
{
	return _jobInParameters;
}

void UNIX_ConcreteJob::setJobInParameters(String &value)
{
	_jobInParameters = value;
}

Boolean UNIX_ConcreteJob::getJobOutParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_OUT_PARAMETERS, getJobOutParameters());
	return true;
}

String UNIX_ConcreteJob::getJobOutParameters() const
{
	return _jobOutParameters;
}

void UNIX_ConcreteJob::setJobOutParameters(String &value)
{
	_jobOutParameters = value;
}


void UNIX_ConcreteJob::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ConcreteJob");
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

}

Boolean UNIX_ConcreteJob::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}

Uint32 UNIX_ConcreteJob::invokeKillJob(
		Boolean &inDeleteOnKill
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method KillJob */
	
	
	
	return returnValue;
}

Uint32 UNIX_ConcreteJob::invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RequestStateChange */
	
	
	
	return returnValue;
}

Uint32 UNIX_ConcreteJob::invokeGetError(
		String &inError
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetError */
	
	
	
	return returnValue;
}

Uint32 UNIX_ConcreteJob::invokeGetErrors(
		Array<String> &inErrors
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetErrors */
	
	
	
	return returnValue;
}

Uint32 UNIX_ConcreteJob::invokeResumeWithAction()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResumeWithAction */
	
	
	
	return returnValue;
}

Uint32 UNIX_ConcreteJob::invokeResumeWithInput(
		Array<String> &inInputs
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResumeWithInput */
	
	
	
	return returnValue;
}


Boolean UNIX_ConcreteJob::initialize()
{
	return false;
}

Boolean UNIX_ConcreteJob::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ConcreteJob");
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
	
	return false;
}

Boolean UNIX_ConcreteJob::finalize()
{
	return false;
}

Boolean UNIX_ConcreteJob::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ConcreteJob::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ConcreteJob::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConcreteJob::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConcreteJob::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConcreteJob::validateInstance()
{
	return true;
}

