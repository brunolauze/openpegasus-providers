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
2.36.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::SystemElements
*/


/* **** Description *** */
/*
A class derived from System that is a special collection of ManagedSystemElements. This collection is related to the providing of compute capabilities and MAY serve as an aggregation point to associate one or more of the following elements: FileSystem, OperatingSystem, Processor and Memory (Volatile and/or NonVolatile Storage).
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

			CIM_AllocatedLogicalElement:
				AllocationState String

			CIM_System:
				CreationClassName String
				NameFormat String
				PrimaryOwnerName String
				PrimaryOwnerContact String
				Roles String
				OtherIdentifyingInfo String
				IdentifyingDescriptions String

			CIM_ComputerSystem:
				Dedicated UInt16
				OtherDedicatedDescriptions String
				ResetCapability UInt16
				PowerManagementCapabilities UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_AllocatedLogicalElement:

			CIM_System:

			CIM_ComputerSystem:
				SetPowerState UInt32


*/

#ifndef __CIM_COMPUTERSYSTEM_H
#define __CIM_COMPUTERSYSTEM_H


#include "CIM_System.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_DEDICATED
#define PROPERTY_DEDICATED \
					"Dedicated"
#endif

#ifndef PROPERTY_OTHER_DEDICATED_DESCRIPTIONS
#define PROPERTY_OTHER_DEDICATED_DESCRIPTIONS \
					"OtherDedicatedDescriptions"
#endif

#ifndef PROPERTY_RESET_CAPABILITY
#define PROPERTY_RESET_CAPABILITY \
					"ResetCapability"
#endif

#ifndef PROPERTY_POWER_MANAGEMENT_CAPABILITIES
#define PROPERTY_POWER_MANAGEMENT_CAPABILITIES \
					"PowerManagementCapabilities"
#endif



class CIM_ComputerSystem :
	public CIM_System
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

	virtual Boolean getNameFormat(CIMProperty&) const=0;
	virtual String getNameFormat() const=0;
	virtual void setNameFormat(String&)=0;
	virtual Boolean getDedicated(CIMProperty&) const=0;
	virtual Array<Uint16> getDedicated() const=0;
	virtual void setDedicated(Array<Uint16>&)=0;
	virtual Boolean getOtherDedicatedDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherDedicatedDescriptions() const=0;
	virtual void setOtherDedicatedDescriptions(Array<String>&)=0;
	virtual Boolean getResetCapability(CIMProperty&) const=0;
	virtual Uint16 getResetCapability() const=0;
	virtual void setResetCapability(Uint16&)=0;
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getPowerManagementCapabilities() const=0;
	virtual void setPowerManagementCapabilities(Array<Uint16>&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeSetPowerState(
		Uint32 &inPowerState,
		CIMDateTime &inTime
	)=0;



private:

};

#endif /* CIM_COMPUTERSYSTEM */
