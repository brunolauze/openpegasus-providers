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
CIM::System::SystemResources
*/


/* **** Description *** */
/*
Personal Computer architecture Memory Mapped I/O. This class addresses both memory and port I/O resources. The property, MappedResource, defines whether memory or I/O is mapped (and for I/O whether the mapping is to a memory or a port space).
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

			CIM_SystemResource:
				Shareable Boolean
				ImplementationInfo UInt16

			CIM_MemoryMappedIO:
				CSCreationClassName String
				CSName String
				CreationClassName String
				StartingAddress UInt64
				EndingAddress UInt64
				MappedResource UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_SystemResource:

			CIM_MemoryMappedIO:


*/

#ifndef __CIM_MEMORYMAPPEDIO_H
#define __CIM_MEMORYMAPPEDIO_H


#include "CIM_SystemResource.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_CS_CREATION_CLASS_NAME
#define PROPERTY_CS_CREATION_CLASS_NAME \
					"CSCreationClassName"
#endif

#ifndef PROPERTY_CS_NAME
#define PROPERTY_CS_NAME \
					"CSName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_STARTING_ADDRESS
#define PROPERTY_STARTING_ADDRESS \
					"StartingAddress"
#endif

#ifndef PROPERTY_ENDING_ADDRESS
#define PROPERTY_ENDING_ADDRESS \
					"EndingAddress"
#endif

#ifndef PROPERTY_MAPPED_RESOURCE
#define PROPERTY_MAPPED_RESOURCE \
					"MappedResource"
#endif



class CIM_MemoryMappedIO :
	public CIM_SystemResource
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
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual void setCreationClassName(String&)=0;
	virtual Boolean getStartingAddress(CIMProperty&) const=0;
	virtual Uint64 getStartingAddress() const=0;
	virtual void setStartingAddress(Uint64&)=0;
	virtual Boolean getEndingAddress(CIMProperty&) const=0;
	virtual Uint64 getEndingAddress() const=0;
	virtual void setEndingAddress(Uint64&)=0;
	virtual Boolean getMappedResource(CIMProperty&) const=0;
	virtual Uint16 getMappedResource() const=0;
	virtual void setMappedResource(Uint16&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;



private:

};

#endif /* CIM_MEMORYMAPPEDIO */
