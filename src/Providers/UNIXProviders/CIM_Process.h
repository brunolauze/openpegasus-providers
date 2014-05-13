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
CIM::System::Processing
*/


/* **** Description *** */
/*
Each instance of the CIM_Process class represents a single instance of a running program. A user of the OperatingSystem will typically see a Process as an application or task. Within an OperatingSystem, a Process is defined by a workspace of memory resources and environmental settings that are allocated to it. On a multitasking System, this workspace prevents intrusion of resources by other Processes. Additionally, a Process can execute as multiple Threads, all which run within the same workspace.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_Process:


*/

#ifndef __CIM_PROCESS_H
#define __CIM_PROCESS_H


#include "CIM_EnabledLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_CS_CREATION_CLASS_NAME
#define PROPERTY_CS_CREATION_CLASS_NAME \
					"CSCreationClassName"
#endif

#ifndef PROPERTY_CS_NAME
#define PROPERTY_CS_NAME \
					"CSName"
#endif

#ifndef PROPERTY_OS_CREATION_CLASS_NAME
#define PROPERTY_OS_CREATION_CLASS_NAME \
					"OSCreationClassName"
#endif

#ifndef PROPERTY_OS_NAME
#define PROPERTY_OS_NAME \
					"OSName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_HANDLE
#define PROPERTY_HANDLE \
					"Handle"
#endif

#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif

#ifndef PROPERTY_EXECUTION_STATE
#define PROPERTY_EXECUTION_STATE \
					"ExecutionState"
#endif

#ifndef PROPERTY_OTHER_EXECUTION_DESCRIPTION
#define PROPERTY_OTHER_EXECUTION_DESCRIPTION \
					"OtherExecutionDescription"
#endif

#ifndef PROPERTY_CREATION_DATE
#define PROPERTY_CREATION_DATE \
					"CreationDate"
#endif

#ifndef PROPERTY_TERMINATION_DATE
#define PROPERTY_TERMINATION_DATE \
					"TerminationDate"
#endif

#ifndef PROPERTY_KERNEL_MODE_TIME
#define PROPERTY_KERNEL_MODE_TIME \
					"KernelModeTime"
#endif

#ifndef PROPERTY_USER_MODE_TIME
#define PROPERTY_USER_MODE_TIME \
					"UserModeTime"
#endif

#ifndef PROPERTY_WORKING_SET_SIZE
#define PROPERTY_WORKING_SET_SIZE \
					"WorkingSetSize"
#endif



class CIM_Process :
	public CIM_EnabledLogicalElement
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

	virtual Boolean getCSCreationClassName(CIMProperty&) const=0;
	virtual String getCSCreationClassName() const=0;
	virtual void setCSCreationClassName(String&)=0;
	virtual Boolean getCSName(CIMProperty&) const=0;
	virtual String getCSName() const=0;
	virtual void setCSName(String&)=0;
	virtual Boolean getOSCreationClassName(CIMProperty&) const=0;
	virtual String getOSCreationClassName() const=0;
	virtual void setOSCreationClassName(String&)=0;
	virtual Boolean getOSName(CIMProperty&) const=0;
	virtual String getOSName() const=0;
	virtual void setOSName(String&)=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual void setCreationClassName(String&)=0;
	virtual Boolean getHandle(CIMProperty&) const=0;
	virtual String getHandle() const=0;
	virtual void setHandle(String&)=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getPriority(CIMProperty&) const=0;
	virtual Uint32 getPriority() const=0;
	virtual void setPriority(Uint32&)=0;
	virtual Boolean getExecutionState(CIMProperty&) const=0;
	virtual Uint16 getExecutionState() const=0;
	virtual void setExecutionState(Uint16&)=0;
	virtual Boolean getOtherExecutionDescription(CIMProperty&) const=0;
	virtual String getOtherExecutionDescription() const=0;
	virtual void setOtherExecutionDescription(String&)=0;
	virtual Boolean getCreationDate(CIMProperty&) const=0;
	virtual CIMDateTime getCreationDate() const=0;
	virtual void setCreationDate(CIMDateTime&)=0;
	virtual Boolean getTerminationDate(CIMProperty&) const=0;
	virtual CIMDateTime getTerminationDate() const=0;
	virtual void setTerminationDate(CIMDateTime&)=0;
	virtual Boolean getKernelModeTime(CIMProperty&) const=0;
	virtual Uint64 getKernelModeTime() const=0;
	virtual void setKernelModeTime(Uint64&)=0;
	virtual Boolean getUserModeTime(CIMProperty&) const=0;
	virtual Uint64 getUserModeTime() const=0;
	virtual void setUserModeTime(Uint64&)=0;
	virtual Boolean getWorkingSetSize(CIMProperty&) const=0;
	virtual Uint64 getWorkingSetSize() const=0;
	virtual void setWorkingSetSize(Uint64&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;



private:

};

#endif /* CIM_PROCESS */
