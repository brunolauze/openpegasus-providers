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
2.40.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Device
*/


/* **** Description *** */
/*
An abstraction or emulation of a hardware entity, that might or might not be Realized in physical hardware. Any characteristics of a LogicalDevice that are used to manage its operation or configuration are contained in, or associated with, the LogicalDevice object. Examples of the operational properties of a Printer would be paper sizes supported or detected errors. Examples of the configuration properties of a Sensor Device would be threshold settings. Various configurations could exist for a LogicalDevice. These configurations could be contained in Setting objects and associated with the LogicalDevice.
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


*/

#ifndef __CIM_LOGICALDEVICE_H
#define __CIM_LOGICALDEVICE_H


#include "CIM_AllocatedLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_DEVICE_ID
#define PROPERTY_DEVICE_ID \
					"DeviceID"
#endif

#ifndef PROPERTY_POWER_MANAGEMENT_SUPPORTED
#define PROPERTY_POWER_MANAGEMENT_SUPPORTED \
					"PowerManagementSupported"
#endif

#ifndef PROPERTY_POWER_MANAGEMENT_CAPABILITIES
#define PROPERTY_POWER_MANAGEMENT_CAPABILITIES \
					"PowerManagementCapabilities"
#endif

#ifndef PROPERTY_AVAILABILITY
#define PROPERTY_AVAILABILITY \
					"Availability"
#endif

#ifndef PROPERTY_STATUS_INFO
#define PROPERTY_STATUS_INFO \
					"StatusInfo"
#endif

#ifndef PROPERTY_LAST_ERROR_CODE
#define PROPERTY_LAST_ERROR_CODE \
					"LastErrorCode"
#endif

#ifndef PROPERTY_ERROR_DESCRIPTION
#define PROPERTY_ERROR_DESCRIPTION \
					"ErrorDescription"
#endif

#ifndef PROPERTY_ERROR_CLEARED
#define PROPERTY_ERROR_CLEARED \
					"ErrorCleared"
#endif

#ifndef PROPERTY_OTHER_IDENTIFYING_INFO
#define PROPERTY_OTHER_IDENTIFYING_INFO \
					"OtherIdentifyingInfo"
#endif

#ifndef PROPERTY_POWER_ON_HOURS
#define PROPERTY_POWER_ON_HOURS \
					"PowerOnHours"
#endif

#ifndef PROPERTY_TOTAL_POWER_ON_HOURS
#define PROPERTY_TOTAL_POWER_ON_HOURS \
					"TotalPowerOnHours"
#endif

#ifndef PROPERTY_IDENTIFYING_DESCRIPTIONS
#define PROPERTY_IDENTIFYING_DESCRIPTIONS \
					"IdentifyingDescriptions"
#endif

#ifndef PROPERTY_ADDITIONAL_AVAILABILITY
#define PROPERTY_ADDITIONAL_AVAILABILITY \
					"AdditionalAvailability"
#endif

#ifndef PROPERTY_MAX_QUIESCE_TIME
#define PROPERTY_MAX_QUIESCE_TIME \
					"MaxQuiesceTime"
#endif

#ifndef PROPERTY_LOCATION_INDICATOR
#define PROPERTY_LOCATION_INDICATOR \
					"LocationIndicator"
#endif



class CIM_LogicalDevice :
	public CIM_AllocatedLogicalElement
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

	virtual Boolean getSystemCreationClassName(CIMProperty&) const=0;
	virtual String getSystemCreationClassName() const=0;
	virtual void setSystemCreationClassName(String&)=0;
	virtual Boolean getSystemName(CIMProperty&) const=0;
	virtual String getSystemName() const=0;
	virtual void setSystemName(String&)=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual void setCreationClassName(String&)=0;
	virtual Boolean getDeviceID(CIMProperty&) const=0;
	virtual String getDeviceID() const=0;
	virtual void setDeviceID(String&)=0;
	virtual Boolean getPowerManagementSupported(CIMProperty&) const=0;
	virtual Boolean getPowerManagementSupported() const=0;
	virtual void setPowerManagementSupported(Boolean&)=0;
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getPowerManagementCapabilities() const=0;
	virtual void setPowerManagementCapabilities(Array<Uint16>&)=0;
	virtual Boolean getAvailability(CIMProperty&) const=0;
	virtual Uint16 getAvailability() const=0;
	virtual void setAvailability(Uint16&)=0;
	virtual Boolean getStatusInfo(CIMProperty&) const=0;
	virtual Uint16 getStatusInfo() const=0;
	virtual void setStatusInfo(Uint16&)=0;
	virtual Boolean getLastErrorCode(CIMProperty&) const=0;
	virtual Uint32 getLastErrorCode() const=0;
	virtual void setLastErrorCode(Uint32&)=0;
	virtual Boolean getErrorDescription(CIMProperty&) const=0;
	virtual String getErrorDescription() const=0;
	virtual void setErrorDescription(String&)=0;
	virtual Boolean getErrorCleared(CIMProperty&) const=0;
	virtual Boolean getErrorCleared() const=0;
	virtual void setErrorCleared(Boolean&)=0;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const=0;
	virtual Array<String> getOtherIdentifyingInfo() const=0;
	virtual void setOtherIdentifyingInfo(Array<String>&)=0;
	virtual Boolean getPowerOnHours(CIMProperty&) const=0;
	virtual Uint64 getPowerOnHours() const=0;
	virtual void setPowerOnHours(Uint64&)=0;
	virtual Boolean getTotalPowerOnHours(CIMProperty&) const=0;
	virtual Uint64 getTotalPowerOnHours() const=0;
	virtual void setTotalPowerOnHours(Uint64&)=0;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const=0;
	virtual Array<String> getIdentifyingDescriptions() const=0;
	virtual void setIdentifyingDescriptions(Array<String>&)=0;
	virtual Boolean getAdditionalAvailability(CIMProperty&) const=0;
	virtual Array<Uint16> getAdditionalAvailability() const=0;
	virtual void setAdditionalAvailability(Array<Uint16>&)=0;
	virtual Boolean getMaxQuiesceTime(CIMProperty&) const=0;
	virtual Uint64 getMaxQuiesceTime() const=0;
	virtual void setMaxQuiesceTime(Uint64&)=0;
	virtual Boolean getLocationIndicator(CIMProperty&) const=0;
	virtual Uint16 getLocationIndicator() const=0;
	virtual void setLocationIndicator(Uint16&)=0;
	virtual Boolean getAllocationState(CIMProperty&) const=0;
	virtual String getAllocationState() const=0;
	virtual void setAllocationState(String&)=0;

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

#endif /* CIM_LOGICALDEVICE */
