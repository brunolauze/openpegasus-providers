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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Controller
*/


/* **** Description *** */
/*
PCIController is a superclass for the PCIBridge and PCIDevice classes. These classes model adapters and bridges on a PCI bus. The properties in PCIController and its subclasses are defined in the various PCI Specifications that are published by the PCI SIG.
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


*/

#ifndef __CIM_PCICONTROLLER_H
#define __CIM_PCICONTROLLER_H


#include "CIM_Controller.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_COMMAND_REGISTER
#define PROPERTY_COMMAND_REGISTER \
					"CommandRegister"
#endif

#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_CAPABILITY_DESCRIPTIONS
#define PROPERTY_CAPABILITY_DESCRIPTIONS \
					"CapabilityDescriptions"
#endif

#ifndef PROPERTY_DEVICE_SELECT_TIMING
#define PROPERTY_DEVICE_SELECT_TIMING \
					"DeviceSelectTiming"
#endif

#ifndef PROPERTY_CLASS_CODE
#define PROPERTY_CLASS_CODE \
					"ClassCode"
#endif

#ifndef PROPERTY_CACHE_LINE_SIZE
#define PROPERTY_CACHE_LINE_SIZE \
					"CacheLineSize"
#endif

#ifndef PROPERTY_LATENCY_TIMER
#define PROPERTY_LATENCY_TIMER \
					"LatencyTimer"
#endif

#ifndef PROPERTY_INTERRUPT_PIN
#define PROPERTY_INTERRUPT_PIN \
					"InterruptPin"
#endif

#ifndef PROPERTY_EXPANSION_R_O_M_BASE_ADDRESS
#define PROPERTY_EXPANSION_R_O_M_BASE_ADDRESS \
					"ExpansionROMBaseAddress"
#endif

#ifndef PROPERTY_SELF_TEST_ENABLED
#define PROPERTY_SELF_TEST_ENABLED \
					"SelfTestEnabled"
#endif



class CIM_PCIController :
	public CIM_Controller
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

	virtual Boolean getCommandRegister(CIMProperty&) const=0;
	virtual Uint16 getCommandRegister() const=0;
	virtual void setCommandRegister(Uint16&)=0;
	virtual Boolean getCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getCapabilities() const=0;
	virtual void setCapabilities(Array<Uint16>&)=0;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const=0;
	virtual Array<String> getCapabilityDescriptions() const=0;
	virtual void setCapabilityDescriptions(Array<String>&)=0;
	virtual Boolean getDeviceSelectTiming(CIMProperty&) const=0;
	virtual Uint16 getDeviceSelectTiming() const=0;
	virtual void setDeviceSelectTiming(Uint16&)=0;
	virtual Boolean getClassCode(CIMProperty&) const=0;
	virtual Uint8 getClassCode() const=0;
	virtual void setClassCode(Uint8&)=0;
	virtual Boolean getCacheLineSize(CIMProperty&) const=0;
	virtual Uint8 getCacheLineSize() const=0;
	virtual void setCacheLineSize(Uint8&)=0;
	virtual Boolean getLatencyTimer(CIMProperty&) const=0;
	virtual Uint8 getLatencyTimer() const=0;
	virtual void setLatencyTimer(Uint8&)=0;
	virtual Boolean getInterruptPin(CIMProperty&) const=0;
	virtual Uint16 getInterruptPin() const=0;
	virtual void setInterruptPin(Uint16&)=0;
	virtual Boolean getExpansionROMBaseAddress(CIMProperty&) const=0;
	virtual Uint32 getExpansionROMBaseAddress() const=0;
	virtual void setExpansionROMBaseAddress(Uint32&)=0;
	virtual Boolean getSelfTestEnabled(CIMProperty&) const=0;
	virtual Boolean getSelfTestEnabled() const=0;
	virtual void setSelfTestEnabled(Boolean&)=0;

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

#endif /* CIM_PCICONTROLLER */
