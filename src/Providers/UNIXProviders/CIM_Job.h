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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
A Job is a LogicalElement that represents an executing unit of work, such as a script or a print job. A Job is distinct from a Process in that a Job can be scheduled or queued, and its execution is not limited to a single system.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_Job:
				KillJob UInt32


*/

#ifndef __CIM_JOB_H
#define __CIM_JOB_H


#include "CIM_LogicalElement.h"


#ifndef PROPERTY_JOB_STATUS
#define PROPERTY_JOB_STATUS \
					"JobStatus"
#endif

#ifndef PROPERTY_TIME_SUBMITTED
#define PROPERTY_TIME_SUBMITTED \
					"TimeSubmitted"
#endif

#ifndef PROPERTY_SCHEDULED_START_TIME
#define PROPERTY_SCHEDULED_START_TIME \
					"ScheduledStartTime"
#endif

#ifndef PROPERTY_START_TIME
#define PROPERTY_START_TIME \
					"StartTime"
#endif

#ifndef PROPERTY_ELAPSED_TIME
#define PROPERTY_ELAPSED_TIME \
					"ElapsedTime"
#endif

#ifndef PROPERTY_JOB_RUN_TIMES
#define PROPERTY_JOB_RUN_TIMES \
					"JobRunTimes"
#endif

#ifndef PROPERTY_RUN_MONTH
#define PROPERTY_RUN_MONTH \
					"RunMonth"
#endif

#ifndef PROPERTY_RUN_DAY
#define PROPERTY_RUN_DAY \
					"RunDay"
#endif

#ifndef PROPERTY_RUN_DAY_OF_WEEK
#define PROPERTY_RUN_DAY_OF_WEEK \
					"RunDayOfWeek"
#endif

#ifndef PROPERTY_RUN_START_INTERVAL
#define PROPERTY_RUN_START_INTERVAL \
					"RunStartInterval"
#endif

#ifndef PROPERTY_LOCAL_OR_UTC_TIME
#define PROPERTY_LOCAL_OR_UTC_TIME \
					"LocalOrUtcTime"
#endif

#ifndef PROPERTY_UNTIL_TIME
#define PROPERTY_UNTIL_TIME \
					"UntilTime"
#endif

#ifndef PROPERTY_NOTIFY
#define PROPERTY_NOTIFY \
					"Notify"
#endif

#ifndef PROPERTY_OWNER
#define PROPERTY_OWNER \
					"Owner"
#endif

#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif

#ifndef PROPERTY_PERCENT_COMPLETE
#define PROPERTY_PERCENT_COMPLETE \
					"PercentComplete"
#endif

#ifndef PROPERTY_DELETE_ON_COMPLETION
#define PROPERTY_DELETE_ON_COMPLETION \
					"DeleteOnCompletion"
#endif

#ifndef PROPERTY_ERROR_CODE
#define PROPERTY_ERROR_CODE \
					"ErrorCode"
#endif

#ifndef PROPERTY_ERROR_DESCRIPTION
#define PROPERTY_ERROR_DESCRIPTION \
					"ErrorDescription"
#endif

#ifndef PROPERTY_RECOVERY_ACTION
#define PROPERTY_RECOVERY_ACTION \
					"RecoveryAction"
#endif

#ifndef PROPERTY_OTHER_RECOVERY_ACTION
#define PROPERTY_OTHER_RECOVERY_ACTION \
					"OtherRecoveryAction"
#endif



class CIM_Job :
	public CIM_LogicalElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getJobStatus(CIMProperty&) const=0;
	virtual String getJobStatus() const=0;
	virtual void setJobStatus(String&)=0;
	virtual Boolean getTimeSubmitted(CIMProperty&) const=0;
	virtual CIMDateTime getTimeSubmitted() const=0;
	virtual void setTimeSubmitted(CIMDateTime&)=0;
	virtual Boolean getScheduledStartTime(CIMProperty&) const=0;
	virtual CIMDateTime getScheduledStartTime() const=0;
	virtual void setScheduledStartTime(CIMDateTime&)=0;
	virtual Boolean getStartTime(CIMProperty&) const=0;
	virtual CIMDateTime getStartTime() const=0;
	virtual void setStartTime(CIMDateTime&)=0;
	virtual Boolean getElapsedTime(CIMProperty&) const=0;
	virtual CIMDateTime getElapsedTime() const=0;
	virtual void setElapsedTime(CIMDateTime&)=0;
	virtual Boolean getJobRunTimes(CIMProperty&) const=0;
	virtual Uint32 getJobRunTimes() const=0;
	virtual void setJobRunTimes(Uint32&)=0;
	virtual Boolean getRunMonth(CIMProperty&) const=0;
	virtual Uint8 getRunMonth() const=0;
	virtual void setRunMonth(Uint8&)=0;
	virtual Boolean getRunDay(CIMProperty&) const=0;
	virtual Sint8 getRunDay() const=0;
	virtual void setRunDay(Sint8&)=0;
	virtual Boolean getRunDayOfWeek(CIMProperty&) const=0;
	virtual Sint8 getRunDayOfWeek() const=0;
	virtual void setRunDayOfWeek(Sint8&)=0;
	virtual Boolean getRunStartInterval(CIMProperty&) const=0;
	virtual CIMDateTime getRunStartInterval() const=0;
	virtual void setRunStartInterval(CIMDateTime&)=0;
	virtual Boolean getLocalOrUtcTime(CIMProperty&) const=0;
	virtual Uint16 getLocalOrUtcTime() const=0;
	virtual void setLocalOrUtcTime(Uint16&)=0;
	virtual Boolean getUntilTime(CIMProperty&) const=0;
	virtual CIMDateTime getUntilTime() const=0;
	virtual void setUntilTime(CIMDateTime&)=0;
	virtual Boolean getNotify(CIMProperty&) const=0;
	virtual String getNotify() const=0;
	virtual void setNotify(String&)=0;
	virtual Boolean getOwner(CIMProperty&) const=0;
	virtual String getOwner() const=0;
	virtual void setOwner(String&)=0;
	virtual Boolean getPriority(CIMProperty&) const=0;
	virtual Uint32 getPriority() const=0;
	virtual void setPriority(Uint32&)=0;
	virtual Boolean getPercentComplete(CIMProperty&) const=0;
	virtual Uint16 getPercentComplete() const=0;
	virtual void setPercentComplete(Uint16&)=0;
	virtual Boolean getDeleteOnCompletion(CIMProperty&) const=0;
	virtual Boolean getDeleteOnCompletion() const=0;
	virtual void setDeleteOnCompletion(Boolean&)=0;
	virtual Boolean getErrorCode(CIMProperty&) const=0;
	virtual Uint16 getErrorCode() const=0;
	virtual void setErrorCode(Uint16&)=0;
	virtual Boolean getErrorDescription(CIMProperty&) const=0;
	virtual String getErrorDescription() const=0;
	virtual void setErrorDescription(String&)=0;
	virtual Boolean getRecoveryAction(CIMProperty&) const=0;
	virtual Uint16 getRecoveryAction() const=0;
	virtual void setRecoveryAction(Uint16&)=0;
	virtual Boolean getOtherRecoveryAction(CIMProperty&) const=0;
	virtual String getOtherRecoveryAction() const=0;
	virtual void setOtherRecoveryAction(String&)=0;

	virtual Uint32 invokeKillJob(
		Boolean &inDeleteOnKill
	)=0;



private:

};

#endif /* CIM_JOB */
