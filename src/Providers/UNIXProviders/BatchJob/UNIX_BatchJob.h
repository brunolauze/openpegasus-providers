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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Processing
*/


/* **** Description *** */
/*
Description of a batch request that is either waiting on a BatchQueue to run, in the process of running, or that has previously run. Jobs that are completed and not recurring will NOT be associated with a BatchQueue. Jobs that are completed but recurring WILL be associated with a BatchQueue, since they are waiting to run given the scheduling information in the associated JobSettingData instance.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_Job:
				JobStatus String
				TimeSubmitted DateTime
				ScheduledStartTime DateTime
				StartTime DateTime
				ElapsedTime DateTime
				JobRunTimes UInt32
				RunMonth UInt8
				RunDay SInt8
				RunDayOfWeek SInt8
				RunStartInterval DateTime
				LocalOrUtcTime UInt16
				UntilTime DateTime
				Notify String
				Owner String
				Priority UInt32
				PercentComplete UInt16
				DeleteOnCompletion Boolean
				ErrorCode UInt16
				ErrorDescription String
				RecoveryAction UInt16
				OtherRecoveryAction String

			UNIX_ConcreteJob:
				JobState UInt16
				TimeOfLastStateChange DateTime
				TimeBeforeRemoval DateTime
				MethodName String
				JobInParameters String
				JobOutParameters String

			UNIX_BatchJob:
				MaxCPUTime UInt32
				TimeCompleted DateTime
				JobOrigination String
				Task String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_Job:
				KillJob UInt32

			UNIX_ConcreteJob:
				RequestStateChange UInt32
				GetError UInt32
				GetErrors UInt32
				ResumeWithAction UInt32
				ResumeWithInput UInt32

			UNIX_BatchJob:


*/

#ifndef __UNIX_BATCHJOB_H
#define __UNIX_BATCHJOB_H


#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_BatchJobDeps.h"


#ifndef PROPERTY_MAX_CPU_TIME
#define PROPERTY_MAX_CPU_TIME \
					"MaxCPUTime"
#endif

#ifndef PROPERTY_TIME_COMPLETED
#define PROPERTY_TIME_COMPLETED \
					"TimeCompleted"
#endif

#ifndef PROPERTY_JOB_ORIGINATION
#define PROPERTY_JOB_ORIGINATION \
					"JobOrigination"
#endif

#ifndef PROPERTY_TASK
#define PROPERTY_TASK \
					"Task"
#endif



class UNIX_BatchJob :
	public UNIX_ConcreteJob
{
public:

	UNIX_BatchJob();
	~UNIX_BatchJob();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getJobStatus(CIMProperty&) const;
	virtual String getJobStatus() const;
	virtual void setJobStatus(String&);
	virtual Boolean getTimeSubmitted(CIMProperty&) const;
	virtual CIMDateTime getTimeSubmitted() const;
	virtual void setTimeSubmitted(CIMDateTime&);
	virtual Boolean getScheduledStartTime(CIMProperty&) const;
	virtual CIMDateTime getScheduledStartTime() const;
	virtual void setScheduledStartTime(CIMDateTime&);
	virtual Boolean getStartTime(CIMProperty&) const;
	virtual CIMDateTime getStartTime() const;
	virtual void setStartTime(CIMDateTime&);
	virtual Boolean getElapsedTime(CIMProperty&) const;
	virtual CIMDateTime getElapsedTime() const;
	virtual void setElapsedTime(CIMDateTime&);
	virtual Boolean getJobRunTimes(CIMProperty&) const;
	virtual Uint32 getJobRunTimes() const;
	virtual void setJobRunTimes(Uint32&);
	virtual Boolean getRunMonth(CIMProperty&) const;
	virtual Uint8 getRunMonth() const;
	virtual void setRunMonth(Uint8&);
	virtual Boolean getRunDay(CIMProperty&) const;
	virtual Sint8 getRunDay() const;
	virtual void setRunDay(Sint8&);
	virtual Boolean getRunDayOfWeek(CIMProperty&) const;
	virtual Sint8 getRunDayOfWeek() const;
	virtual void setRunDayOfWeek(Sint8&);
	virtual Boolean getRunStartInterval(CIMProperty&) const;
	virtual CIMDateTime getRunStartInterval() const;
	virtual void setRunStartInterval(CIMDateTime&);
	virtual Boolean getLocalOrUtcTime(CIMProperty&) const;
	virtual Uint16 getLocalOrUtcTime() const;
	virtual void setLocalOrUtcTime(Uint16&);
	virtual Boolean getUntilTime(CIMProperty&) const;
	virtual CIMDateTime getUntilTime() const;
	virtual void setUntilTime(CIMDateTime&);
	virtual Boolean getNotify(CIMProperty&) const;
	virtual String getNotify() const;
	virtual void setNotify(String&);
	virtual Boolean getOwner(CIMProperty&) const;
	virtual String getOwner() const;
	virtual void setOwner(String&);
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint32 getPriority() const;
	virtual void setPriority(Uint32&);
	virtual Boolean getPercentComplete(CIMProperty&) const;
	virtual Uint16 getPercentComplete() const;
	virtual void setPercentComplete(Uint16&);
	virtual Boolean getDeleteOnCompletion(CIMProperty&) const;
	virtual Boolean getDeleteOnCompletion() const;
	virtual void setDeleteOnCompletion(Boolean&);
	virtual Boolean getErrorCode(CIMProperty&) const;
	virtual Uint16 getErrorCode() const;
	virtual void setErrorCode(Uint16&);
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual void setErrorDescription(String&);
	virtual Boolean getRecoveryAction(CIMProperty&) const;
	virtual Uint16 getRecoveryAction() const;
	virtual void setRecoveryAction(Uint16&);
	virtual Boolean getOtherRecoveryAction(CIMProperty&) const;
	virtual String getOtherRecoveryAction() const;
	virtual void setOtherRecoveryAction(String&);
	virtual Boolean getJobState(CIMProperty&) const;
	virtual Uint16 getJobState() const;
	virtual void setJobState(Uint16&);
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual void setTimeOfLastStateChange(CIMDateTime&);
	virtual Boolean getTimeBeforeRemoval(CIMProperty&) const;
	virtual CIMDateTime getTimeBeforeRemoval() const;
	virtual void setTimeBeforeRemoval(CIMDateTime&);
	virtual Boolean getMethodName(CIMProperty&) const;
	virtual String getMethodName() const;
	virtual void setMethodName(String&);
	virtual Boolean getJobInParameters(CIMProperty&) const;
	virtual String getJobInParameters() const;
	virtual void setJobInParameters(String&);
	virtual Boolean getJobOutParameters(CIMProperty&) const;
	virtual String getJobOutParameters() const;
	virtual void setJobOutParameters(String&);
	virtual Boolean getMaxCPUTime(CIMProperty&) const;
	virtual Uint32 getMaxCPUTime() const;
	virtual void setMaxCPUTime(Uint32&);
	virtual Boolean getTimeCompleted(CIMProperty&) const;
	virtual CIMDateTime getTimeCompleted() const;
	virtual void setTimeCompleted(CIMDateTime&);
	virtual Boolean getJobOrigination(CIMProperty&) const;
	virtual String getJobOrigination() const;
	virtual void setJobOrigination(String&);
	virtual Boolean getTask(CIMProperty&) const;
	virtual String getTask() const;
	virtual void setTask(String&);

	virtual Uint32 invokeKillJob(
		Boolean &inDeleteOnKill
	);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeGetError(
		String &inError
	);

	virtual Uint32 invokeGetErrors(
		Array<String> &inErrors
	);

	virtual Uint32 invokeResumeWithAction();

	virtual Uint32 invokeResumeWithInput(
		Array<String> &inInputs
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	String _jobStatus;
	CIMDateTime _timeSubmitted;
	CIMDateTime _scheduledStartTime;
	CIMDateTime _startTime;
	CIMDateTime _elapsedTime;
	Uint32 _jobRunTimes;
	Uint8 _runMonth;
	Sint8 _runDay;
	Sint8 _runDayOfWeek;
	CIMDateTime _runStartInterval;
	Uint16 _localOrUtcTime;
	CIMDateTime _untilTime;
	String _notify;
	String _owner;
	Uint32 _priority;
	Uint16 _percentComplete;
	Boolean _deleteOnCompletion;
	Uint16 _errorCode;
	String _errorDescription;
	Uint16 _recoveryAction;
	String _otherRecoveryAction;
	Uint16 _jobState;
	CIMDateTime _timeOfLastStateChange;
	CIMDateTime _timeBeforeRemoval;
	String _methodName;
	String _jobInParameters;
	String _jobOutParameters;
	Uint32 _maxCPUTime;
	CIMDateTime _timeCompleted;
	String _jobOrigination;
	String _task;

#	include "UNIX_BatchJobPrivate.h"


};

#endif /* UNIX_BATCHJOB */
