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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::QoS
*/


/* **** Description *** */
/*
This class represents the metering of network traffic. Metering is the function of monitoring the arrival times of packets of a traffic stream and determining the level of conformance of each packet with respect to a pre- established traffic profile. A meter has the ability to invoke different ConditioningServices for conforming and non-conforming traffic. Traffic leaving a meter may be further conditioned (e.g., dropped or queued) by routing the packet to another conditioning element. 

This class is modeled as a ConditioningService so that it can be aggregated into a QoSService (using the QoSConditioningSubService association), to indicate that its functionality underlies that QoS service. MeterService also participates in a subclass of the NextService association, to identify the subsequent ConditioningServices for conforming and non-conforming traffic.
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

			CIM_Service:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				PrimaryOwnerName String
				PrimaryOwnerContact String
				StartMode String
				Started Boolean
				LoSID String
				LoSOrgID String

			CIM_ConditioningService:
				Enabled Boolean

			CIM_MeterService:
				MeterType UInt16
				OtherMeterType String
				ConformanceLevels UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_Service:
				StartService UInt32
				StopService UInt32
				ChangeAffectedElementsAssignedSequence UInt32

			CIM_ConditioningService:

			CIM_MeterService:


*/

#ifndef __CIM_METERSERVICE_H
#define __CIM_METERSERVICE_H


#include "CIM_ConditioningService.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_METER_TYPE
#define PROPERTY_METER_TYPE \
					"MeterType"
#endif

#ifndef PROPERTY_OTHER_METER_TYPE
#define PROPERTY_OTHER_METER_TYPE \
					"OtherMeterType"
#endif

#ifndef PROPERTY_CONFORMANCE_LEVELS
#define PROPERTY_CONFORMANCE_LEVELS \
					"ConformanceLevels"
#endif



class CIM_MeterService :
	public CIM_ConditioningService
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

	virtual Boolean getMeterType(CIMProperty&) const=0;
	virtual Uint16 getMeterType() const=0;
	virtual void setMeterType(Uint16&)=0;
	virtual Boolean getOtherMeterType(CIMProperty&) const=0;
	virtual String getOtherMeterType() const=0;
	virtual void setOtherMeterType(String&)=0;
	virtual Boolean getConformanceLevels(CIMProperty&) const=0;
	virtual Uint16 getConformanceLevels() const=0;
	virtual void setConformanceLevels(Uint16&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeStartService()=0;

	virtual Uint32 invokeStopService()=0;

	virtual Uint32 invokeChangeAffectedElementsAssignedSequence(
		CIMInstance &inManagedElements,
		Array<Uint16> &inAssignedSequence,
		CIMInstance &inJob
	)=0;



private:

};

#endif /* CIM_METERSERVICE */
