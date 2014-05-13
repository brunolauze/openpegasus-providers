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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Unix
*/


/* **** Description *** */
/*
Each instance of the CIM_UnixProcess class represents a single instance of a running program. A user of the Operating System will typically see a Process as an application or task. Within an OperatingSystem, a Process is defined by a workspace of memory resources and environmental settings that are allocated to it. On a multitasking System, this workspace prevents intrusion of resources by other Processes. Additionally, a Process can execute as multiple Threads, all which run within the same workspace.
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

			CIM_Process:
				CSCreationClassName String
				CSName String
				OSCreationClassName String
				OSName String
				CreationClassName String
				Handle String
				Priority UInt32
				ExecutionState UInt16
				OtherExecutionDescription String
				CreationDate DateTime
				TerminationDate DateTime
				KernelModeTime UInt64
				UserModeTime UInt64
				WorkingSetSize UInt64

			UNIX_Process:
				ParentProcessID String
				RealUserID UInt64
				ProcessGroupID UInt64
				ProcessSessionID UInt64
				ProcessTTY String
				ModulePath String
				Parameters String
				ProcessNiceValue UInt32
				UnixPriority SInt32
				ProcessWaitingForEvent String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_Process:

			UNIX_Process:


*/

#ifndef __UNIX_PROCESS_H
#define __UNIX_PROCESS_H


#include "CIM_Process.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_ProcessDeps.h"


#ifndef PROPERTY_PARENT_PROCESS_ID
#define PROPERTY_PARENT_PROCESS_ID \
					"ParentProcessID"
#endif

#ifndef PROPERTY_REAL_USER_ID
#define PROPERTY_REAL_USER_ID \
					"RealUserID"
#endif

#ifndef PROPERTY_PROCESS_GROUP_ID
#define PROPERTY_PROCESS_GROUP_ID \
					"ProcessGroupID"
#endif

#ifndef PROPERTY_PROCESS_SESSION_ID
#define PROPERTY_PROCESS_SESSION_ID \
					"ProcessSessionID"
#endif

#ifndef PROPERTY_PROCESS_T_T_Y
#define PROPERTY_PROCESS_T_T_Y \
					"ProcessTTY"
#endif

#ifndef PROPERTY_MODULE_PATH
#define PROPERTY_MODULE_PATH \
					"ModulePath"
#endif

#ifndef PROPERTY_PARAMETERS
#define PROPERTY_PARAMETERS \
					"Parameters"
#endif

#ifndef PROPERTY_PROCESS_NICE_VALUE
#define PROPERTY_PROCESS_NICE_VALUE \
					"ProcessNiceValue"
#endif

#ifndef PROPERTY_UNIX_PRIORITY
#define PROPERTY_UNIX_PRIORITY \
					"UnixPriority"
#endif

#ifndef PROPERTY_PROCESS_WAITING_FOR_EVENT
#define PROPERTY_PROCESS_WAITING_FOR_EVENT \
					"ProcessWaitingForEvent"
#endif



class UNIX_Process :
	public CIM_Process
{
public:

	UNIX_Process();
	~UNIX_Process();

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
	virtual Boolean getOtherExecutionDescription(CIMProperty&) const;
	virtual String getOtherExecutionDescription() const;
	virtual void setOtherExecutionDescription(String&);
	virtual Boolean getCreationDate(CIMProperty&) const;
	virtual CIMDateTime getCreationDate() const;
	virtual void setCreationDate(CIMDateTime&);
	virtual Boolean getTerminationDate(CIMProperty&) const;
	virtual CIMDateTime getTerminationDate() const;
	virtual void setTerminationDate(CIMDateTime&);
	virtual Boolean getKernelModeTime(CIMProperty&) const;
	virtual Uint64 getKernelModeTime() const;
	virtual void setKernelModeTime(Uint64&);
	virtual Boolean getUserModeTime(CIMProperty&) const;
	virtual Uint64 getUserModeTime() const;
	virtual void setUserModeTime(Uint64&);
	virtual Boolean getWorkingSetSize(CIMProperty&) const;
	virtual Uint64 getWorkingSetSize() const;
	virtual void setWorkingSetSize(Uint64&);
	virtual Boolean getParentProcessID(CIMProperty&) const;
	virtual String getParentProcessID() const;
	virtual void setParentProcessID(String&);
	virtual Boolean getRealUserID(CIMProperty&) const;
	virtual Uint64 getRealUserID() const;
	virtual void setRealUserID(Uint64&);
	virtual Boolean getProcessGroupID(CIMProperty&) const;
	virtual Uint64 getProcessGroupID() const;
	virtual void setProcessGroupID(Uint64&);
	virtual Boolean getProcessSessionID(CIMProperty&) const;
	virtual Uint64 getProcessSessionID() const;
	virtual void setProcessSessionID(Uint64&);
	virtual Boolean getProcessTTY(CIMProperty&) const;
	virtual String getProcessTTY() const;
	virtual void setProcessTTY(String&);
	virtual Boolean getModulePath(CIMProperty&) const;
	virtual String getModulePath() const;
	virtual void setModulePath(String&);
	virtual Boolean getParameters(CIMProperty&) const;
	virtual Array<String> getParameters() const;
	virtual void setParameters(Array<String>&);
	virtual Boolean getProcessNiceValue(CIMProperty&) const;
	virtual Uint32 getProcessNiceValue() const;
	virtual void setProcessNiceValue(Uint32&);
	virtual Boolean getUnixPriority(CIMProperty&) const;
	virtual Sint32 getUnixPriority() const;
	virtual void setUnixPriority(Sint32&);
	virtual Boolean getProcessWaitingForEvent(CIMProperty&) const;
	virtual String getProcessWaitingForEvent() const;
	virtual void setProcessWaitingForEvent(String&);

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
	String _creationClassName;
	String _handle;
	Uint32 _priority;
	Uint16 _executionState;
	String _otherExecutionDescription;
	CIMDateTime _creationDate;
	CIMDateTime _terminationDate;
	Uint64 _kernelModeTime;
	Uint64 _userModeTime;
	Uint64 _workingSetSize;
	String _parentProcessID;
	Uint64 _realUserID;
	Uint64 _processGroupID;
	Uint64 _processSessionID;
	String _processTTY;
	String _modulePath;
	Array<String> _parameters;
	Uint32 _processNiceValue;
	Sint32 _unixPriority;
	String _processWaitingForEvent;

#	include "UNIX_ProcessPrivate.h"


};

#endif /* UNIX_PROCESS */
