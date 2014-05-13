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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Controller
*/


/* **** Description *** */
/*
Capabilities and management of a PCI device controller on an adapter card.
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

			CIM_Controller:
				TimeOfLastReset DateTime
				ProtocolSupported UInt16
				MaxNumberControlled UInt32
				ProtocolDescription String

			CIM_PCIController:
				CommandRegister UInt16
				Capabilities UInt16
				CapabilityDescriptions String
				DeviceSelectTiming UInt16
				ClassCode UInt8
				CacheLineSize UInt8
				LatencyTimer UInt8
				InterruptPin UInt16
				ExpansionROMBaseAddress UInt32
				SelfTestEnabled Boolean

			CIM_PCIDevice:
				BaseAddress UInt32
				SubsystemID UInt16
				SubsystemVendorID UInt16
				MinGrantTime UInt8
				MaxLatency UInt8
				BusNumber UInt8
				DeviceNumber UInt8
				FunctionNumber UInt8
				PCIDeviceID UInt16
				VendorID UInt16
				RevisionID UInt8
				BaseAddress64 UInt64


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

			CIM_Controller:

			CIM_PCIController:
				BISTExecution UInt8

			CIM_PCIDevice:


*/

#ifndef __CIM_PCIDEVICE_H
#define __CIM_PCIDEVICE_H


#include "CIM_PCIController.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_BASE_ADDRESS
#define PROPERTY_BASE_ADDRESS \
					"BaseAddress"
#endif

#ifndef PROPERTY_SUBSYSTEM_ID
#define PROPERTY_SUBSYSTEM_ID \
					"SubsystemID"
#endif

#ifndef PROPERTY_SUBSYSTEM_VENDOR_ID
#define PROPERTY_SUBSYSTEM_VENDOR_ID \
					"SubsystemVendorID"
#endif

#ifndef PROPERTY_MIN_GRANT_TIME
#define PROPERTY_MIN_GRANT_TIME \
					"MinGrantTime"
#endif

#ifndef PROPERTY_MAX_LATENCY
#define PROPERTY_MAX_LATENCY \
					"MaxLatency"
#endif

#ifndef PROPERTY_BUS_NUMBER
#define PROPERTY_BUS_NUMBER \
					"BusNumber"
#endif

#ifndef PROPERTY_DEVICE_NUMBER
#define PROPERTY_DEVICE_NUMBER \
					"DeviceNumber"
#endif

#ifndef PROPERTY_FUNCTION_NUMBER
#define PROPERTY_FUNCTION_NUMBER \
					"FunctionNumber"
#endif

#ifndef PROPERTY_PCIDEVICE_ID
#define PROPERTY_PCIDEVICE_ID \
					"PCIDeviceID"
#endif

#ifndef PROPERTY_VENDOR_ID
#define PROPERTY_VENDOR_ID \
					"VendorID"
#endif

#ifndef PROPERTY_REVISION_ID
#define PROPERTY_REVISION_ID \
					"RevisionID"
#endif

#ifndef PROPERTY_BASE_ADDRESS_6_4
#define PROPERTY_BASE_ADDRESS_6_4 \
					"BaseAddress64"
#endif



class CIM_PCIDevice :
	public CIM_PCIController
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

	virtual Boolean getBaseAddress(CIMProperty&) const=0;
	virtual Array<Uint32> getBaseAddress() const=0;
	virtual void setBaseAddress(Array<Uint32>&)=0;
	virtual Boolean getSubsystemID(CIMProperty&) const=0;
	virtual Uint16 getSubsystemID() const=0;
	virtual void setSubsystemID(Uint16&)=0;
	virtual Boolean getSubsystemVendorID(CIMProperty&) const=0;
	virtual Uint16 getSubsystemVendorID() const=0;
	virtual void setSubsystemVendorID(Uint16&)=0;
	virtual Boolean getMinGrantTime(CIMProperty&) const=0;
	virtual Uint8 getMinGrantTime() const=0;
	virtual void setMinGrantTime(Uint8&)=0;
	virtual Boolean getMaxLatency(CIMProperty&) const=0;
	virtual Uint8 getMaxLatency() const=0;
	virtual void setMaxLatency(Uint8&)=0;
	virtual Boolean getBusNumber(CIMProperty&) const=0;
	virtual Uint8 getBusNumber() const=0;
	virtual void setBusNumber(Uint8&)=0;
	virtual Boolean getDeviceNumber(CIMProperty&) const=0;
	virtual Uint8 getDeviceNumber() const=0;
	virtual void setDeviceNumber(Uint8&)=0;
	virtual Boolean getFunctionNumber(CIMProperty&) const=0;
	virtual Uint8 getFunctionNumber() const=0;
	virtual void setFunctionNumber(Uint8&)=0;
	virtual Boolean getPCIDeviceID(CIMProperty&) const=0;
	virtual Uint16 getPCIDeviceID() const=0;
	virtual void setPCIDeviceID(Uint16&)=0;
	virtual Boolean getVendorID(CIMProperty&) const=0;
	virtual Uint16 getVendorID() const=0;
	virtual void setVendorID(Uint16&)=0;
	virtual Boolean getRevisionID(CIMProperty&) const=0;
	virtual Uint8 getRevisionID() const=0;
	virtual void setRevisionID(Uint8&)=0;
	virtual Boolean getBaseAddress64(CIMProperty&) const=0;
	virtual Array<Uint64> getBaseAddress64() const=0;
	virtual void setBaseAddress64(Array<Uint64>&)=0;

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

	virtual Uint8 invokeBISTExecution()=0;



private:

};

#endif /* CIM_PCIDEVICE */
