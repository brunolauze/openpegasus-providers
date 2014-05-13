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


/* **** Deprecated *** */
/*
CIM_NetworkPort
*/


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
CIM::Device::NetworkAdapter
*/


/* **** Description *** */
/*
Note: The use of the CIM_NetworkAdpater class has been deprecated in lieu of CIM_NetworkPort. CIM_NetworkPort better reflects that the hardware of a single port is described and managed. 
Deprecated description: NetworkAdapter is an Abstract class that defines general networking hardware concepts (for example, PermanentAddress or Speed of operation).
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

			CIM_LogicalDevice:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				DeviceID String
				PowerManagementSupported Boolean
				PowerManagementCapabilities UInt16
				Availability UInt16
				StatusInfo UInt16
				LastErrorCode UInt32
				ErrorDescription String
				ErrorCleared Boolean
				OtherIdentifyingInfo String
				PowerOnHours UInt64
				TotalPowerOnHours UInt64
				IdentifyingDescriptions String
				AdditionalAvailability UInt16
				MaxQuiesceTime UInt64
				LocationIndicator UInt16

			CIM_NetworkAdapter:
				PermanentAddress String
				NetworkAddresses String
				Speed UInt64
				MaxSpeed UInt64
				FullDuplex Boolean
				AutoSense Boolean
				OctetsTransmitted UInt64
				OctetsReceived UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_AllocatedLogicalElement:

			CIM_LogicalDevice:
				SetPowerState UInt32
				Reset UInt32
				EnableDevice UInt32
				OnlineDevice UInt32
				QuiesceDevice UInt32
				SaveProperties UInt32
				RestoreProperties UInt32

			CIM_NetworkAdapter:


*/

#ifndef __CIM_NETWORKADAPTER_H
#define __CIM_NETWORKADAPTER_H


#include "CIM_LogicalDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_PERMANENT_ADDRESS
#define PROPERTY_PERMANENT_ADDRESS \
					"PermanentAddress"
#endif

#ifndef PROPERTY_NETWORK_ADDRESSES
#define PROPERTY_NETWORK_ADDRESSES \
					"NetworkAddresses"
#endif

#ifndef PROPERTY_SPEED
#define PROPERTY_SPEED \
					"Speed"
#endif

#ifndef PROPERTY_MAX_SPEED
#define PROPERTY_MAX_SPEED \
					"MaxSpeed"
#endif

#ifndef PROPERTY_FULL_DUPLEX
#define PROPERTY_FULL_DUPLEX \
					"FullDuplex"
#endif

#ifndef PROPERTY_AUTO_SENSE
#define PROPERTY_AUTO_SENSE \
					"AutoSense"
#endif

#ifndef PROPERTY_OCTETS_TRANSMITTED
#define PROPERTY_OCTETS_TRANSMITTED \
					"OctetsTransmitted"
#endif

#ifndef PROPERTY_OCTETS_RECEIVED
#define PROPERTY_OCTETS_RECEIVED \
					"OctetsReceived"
#endif



class CIM_NetworkAdapter :
	public CIM_LogicalDevice
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

	virtual Boolean getPermanentAddress(CIMProperty&) const=0;
	virtual String getPermanentAddress() const=0;
	virtual void setPermanentAddress(String&)=0;
	virtual Boolean getNetworkAddresses(CIMProperty&) const=0;
	virtual Array<String> getNetworkAddresses() const=0;
	virtual void setNetworkAddresses(Array<String>&)=0;
	virtual Boolean getSpeed(CIMProperty&) const=0;
	virtual Uint64 getSpeed() const=0;
	virtual void setSpeed(Uint64&)=0;
	virtual Boolean getMaxSpeed(CIMProperty&) const=0;
	virtual Uint64 getMaxSpeed() const=0;
	virtual void setMaxSpeed(Uint64&)=0;
	virtual Boolean getFullDuplex(CIMProperty&) const=0;
	virtual Boolean getFullDuplex() const=0;
	virtual void setFullDuplex(Boolean&)=0;
	virtual Boolean getAutoSense(CIMProperty&) const=0;
	virtual Boolean getAutoSense() const=0;
	virtual void setAutoSense(Boolean&)=0;
	virtual Boolean getOctetsTransmitted(CIMProperty&) const=0;
	virtual Uint64 getOctetsTransmitted() const=0;
	virtual void setOctetsTransmitted(Uint64&)=0;
	virtual Boolean getOctetsReceived(CIMProperty&) const=0;
	virtual Uint64 getOctetsReceived() const=0;
	virtual void setOctetsReceived(Uint64&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)=0;

	virtual Uint32 invokeReset()=0;

	virtual Uint32 invokeEnableDevice(
		Boolean &inEnabled
	)=0;

	virtual Uint32 invokeOnlineDevice(
		Boolean &inOnline
	)=0;

	virtual Uint32 invokeQuiesceDevice(
		Boolean &inQuiesce
	)=0;

	virtual Uint32 invokeSaveProperties()=0;

	virtual Uint32 invokeRestoreProperties()=0;



private:

};

#endif /* CIM_NETWORKADAPTER */
