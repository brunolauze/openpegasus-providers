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


/* **** Version *** */
/*
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Unix
*/


/* **** Description *** */
/*
Threads represent the ability to execute units of a Process or task in parallel. A UnixThread inherits from the superclass, CIM_Thread, which is weak to the Process. The values used are defined in sched.h and psched.h.
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

			CIM_EnabledLogicalElement:
				EnabledState UInt16
				OtherEnabledState String
				RequestedState UInt16
				EnabledDefault UInt16
				TimeOfLastStateChange DateTime
				AvailableRequestedStates UInt16
				TransitioningToState UInt16

			CIM_Thread:
				CSCreationClassName String
				CSName String
				OSCreationClassName String
				OSName String
				ProcessCreationClassName String
				ProcessHandle String
				CreationClassName String
				Handle String
				Priority UInt32
				ExecutionState UInt16
				KernelModeTime UInt64
				UserModeTime UInt64

			UNIX_Thread:
				SchedPolicy UInt16
				OtherSchedPolicy String
				GuardSize String
				DetachState UInt16
				InheritSched UInt16
				ContentionScope UInt16
				StackSize String
				ConcurrencyLevel UInt64
				CancelState UInt16
				CancelType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_Thread:

			UNIX_Thread:


*/

#ifndef __UNIX_THREAD_H
#define __UNIX_THREAD_H


#include "CIM_Thread.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_ThreadDeps.h"


#ifndef PROPERTY_SCHED_POLICY
#define PROPERTY_SCHED_POLICY \
					"SchedPolicy"
#endif

#ifndef PROPERTY_OTHER_SCHED_POLICY
#define PROPERTY_OTHER_SCHED_POLICY \
					"OtherSchedPolicy"
#endif

#ifndef PROPERTY_GUARD_SIZE
#define PROPERTY_GUARD_SIZE \
					"GuardSize"
#endif

#ifndef PROPERTY_DETACH_STATE
#define PROPERTY_DETACH_STATE \
					"DetachState"
#endif

#ifndef PROPERTY_INHERIT_SCHED
#define PROPERTY_INHERIT_SCHED \
					"InheritSched"
#endif

#ifndef PROPERTY_CONTENTION_SCOPE
#define PROPERTY_CONTENTION_SCOPE \
					"ContentionScope"
#endif

#ifndef PROPERTY_STACK_SIZE
#define PROPERTY_STACK_SIZE \
					"StackSize"
#endif

#ifndef PROPERTY_CONCURRENCY_LEVEL
#define PROPERTY_CONCURRENCY_LEVEL \
					"ConcurrencyLevel"
#endif

#ifndef PROPERTY_CANCEL_STATE
#define PROPERTY_CANCEL_STATE \
					"CancelState"
#endif

#ifndef PROPERTY_CANCEL_TYPE
#define PROPERTY_CANCEL_TYPE \
					"CancelType"
#endif



class UNIX_Thread :
	public CIM_Thread
{
public:

	UNIX_Thread();
	~UNIX_Thread();

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
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual void setEnabledState(Uint16&);
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual void setOtherEnabledState(String&);
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual void setRequestedState(Uint16&);
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual void setEnabledDefault(Uint16&);
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual void setTimeOfLastStateChange(CIMDateTime&);
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual void setAvailableRequestedStates(Array<Uint16>&);
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual void setTransitioningToState(Uint16&);
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual void setCSCreationClassName(String&);
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual void setCSName(String&);
	virtual Boolean getOSCreationClassName(CIMProperty&) const;
	virtual String getOSCreationClassName() const;
	virtual void setOSCreationClassName(String&);
	virtual Boolean getOSName(CIMProperty&) const;
	virtual String getOSName() const;
	virtual void setOSName(String&);
	virtual Boolean getProcessCreationClassName(CIMProperty&) const;
	virtual String getProcessCreationClassName() const;
	virtual void setProcessCreationClassName(String&);
	virtual Boolean getProcessHandle(CIMProperty&) const;
	virtual String getProcessHandle() const;
	virtual void setProcessHandle(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getHandle(CIMProperty&) const;
	virtual String getHandle() const;
	virtual void setHandle(String&);
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint32 getPriority() const;
	virtual void setPriority(Uint32&);
	virtual Boolean getExecutionState(CIMProperty&) const;
	virtual Uint16 getExecutionState() const;
	virtual void setExecutionState(Uint16&);
	virtual Boolean getKernelModeTime(CIMProperty&) const;
	virtual Uint64 getKernelModeTime() const;
	virtual void setKernelModeTime(Uint64&);
	virtual Boolean getUserModeTime(CIMProperty&) const;
	virtual Uint64 getUserModeTime() const;
	virtual void setUserModeTime(Uint64&);
	virtual Boolean getSchedPolicy(CIMProperty&) const;
	virtual Uint16 getSchedPolicy() const;
	virtual void setSchedPolicy(Uint16&);
	virtual Boolean getOtherSchedPolicy(CIMProperty&) const;
	virtual String getOtherSchedPolicy() const;
	virtual void setOtherSchedPolicy(String&);
	virtual Boolean getGuardSize(CIMProperty&) const;
	virtual String getGuardSize() const;
	virtual void setGuardSize(String&);
	virtual Boolean getDetachState(CIMProperty&) const;
	virtual Uint16 getDetachState() const;
	virtual void setDetachState(Uint16&);
	virtual Boolean getInheritSched(CIMProperty&) const;
	virtual Uint16 getInheritSched() const;
	virtual void setInheritSched(Uint16&);
	virtual Boolean getContentionScope(CIMProperty&) const;
	virtual Uint16 getContentionScope() const;
	virtual void setContentionScope(Uint16&);
	virtual Boolean getStackSize(CIMProperty&) const;
	virtual String getStackSize() const;
	virtual void setStackSize(String&);
	virtual Boolean getConcurrencyLevel(CIMProperty&) const;
	virtual Uint64 getConcurrencyLevel() const;
	virtual void setConcurrencyLevel(Uint64&);
	virtual Boolean getCancelState(CIMProperty&) const;
	virtual Uint16 getCancelState() const;
	virtual void setCancelState(Uint16&);
	virtual Boolean getCancelType(CIMProperty&) const;
	virtual Uint16 getCancelType() const;
	virtual void setCancelType(Uint16&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
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
	Uint16 _enabledState;
	String _otherEnabledState;
	Uint16 _requestedState;
	Uint16 _enabledDefault;
	CIMDateTime _timeOfLastStateChange;
	Array<Uint16> _availableRequestedStates;
	Uint16 _transitioningToState;
	String _cSCreationClassName;
	String _cSName;
	String _oSCreationClassName;
	String _oSName;
	String _processCreationClassName;
	String _processHandle;
	String _creationClassName;
	String _handle;
	Uint32 _priority;
	Uint16 _executionState;
	Uint64 _kernelModeTime;
	Uint64 _userModeTime;
	Uint16 _schedPolicy;
	String _otherSchedPolicy;
	String _guardSize;
	Uint16 _detachState;
	Uint16 _inheritSched;
	Uint16 _contentionScope;
	String _stackSize;
	Uint64 _concurrencyLevel;
	Uint16 _cancelState;
	Uint16 _cancelType;

#	include "UNIX_ThreadPrivate.h"


};

#endif /* UNIX_THREAD */
