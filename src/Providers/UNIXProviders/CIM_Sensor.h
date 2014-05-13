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
2.32.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Sensors
*/


/* **** Description *** */
/*
A Sensor is an entity capable of measuring or reporting the characteristics of some physical property - for example, the temperature or voltage characteristics of a Computer System.
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

			CIM_Sensor:
				SensorType UInt16
				OtherSensorTypeDescription String
				PossibleStates String
				CurrentState String
				PollingInterval UInt64
				SensorContext String


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

			CIM_Sensor:


*/

#ifndef __CIM_SENSOR_H
#define __CIM_SENSOR_H


#include "CIM_LogicalDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_SENSOR_TYPE
#define PROPERTY_SENSOR_TYPE \
					"SensorType"
#endif

#ifndef PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION
#define PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION \
					"OtherSensorTypeDescription"
#endif

#ifndef PROPERTY_POSSIBLE_STATES
#define PROPERTY_POSSIBLE_STATES \
					"PossibleStates"
#endif

#ifndef PROPERTY_CURRENT_STATE
#define PROPERTY_CURRENT_STATE \
					"CurrentState"
#endif

#ifndef PROPERTY_POLLING_INTERVAL
#define PROPERTY_POLLING_INTERVAL \
					"PollingInterval"
#endif

#ifndef PROPERTY_SENSOR_CONTEXT
#define PROPERTY_SENSOR_CONTEXT \
					"SensorContext"
#endif



class CIM_Sensor :
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

	virtual Boolean getSensorType(CIMProperty&) const=0;
	virtual Uint16 getSensorType() const=0;
	virtual void setSensorType(Uint16&)=0;
	virtual Boolean getOtherSensorTypeDescription(CIMProperty&) const=0;
	virtual String getOtherSensorTypeDescription() const=0;
	virtual void setOtherSensorTypeDescription(String&)=0;
	virtual Boolean getPossibleStates(CIMProperty&) const=0;
	virtual Array<String> getPossibleStates() const=0;
	virtual void setPossibleStates(Array<String>&)=0;
	virtual Boolean getCurrentState(CIMProperty&) const=0;
	virtual String getCurrentState() const=0;
	virtual void setCurrentState(String&)=0;
	virtual Boolean getPollingInterval(CIMProperty&) const=0;
	virtual Uint64 getPollingInterval() const=0;
	virtual void setPollingInterval(Uint64&)=0;
	virtual Boolean getSensorContext(CIMProperty&) const=0;
	virtual String getSensorContext() const=0;
	virtual void setSensorContext(String&)=0;

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

#endif /* CIM_SENSOR */
