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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::IPsec
*/


/* **** Description *** */
/*
SecurityAssociationEndpoint (SAEndpoint) represents the endpoint of a secure connection. This is typically an IP connection, although the model allows more flexibility than just IP. The SecurityAssociationEndpoint is tied to an IPProtocolEndpoint (or possibly other endpoint) using the LogicalIdentity association. Note that an endpoint is defined at both ends of the connection.
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

			CIM_ServiceAccessPoint:
				SystemCreationClassName String
				SystemName String
				CreationClassName String

			CIM_ProtocolEndpoint:
				NameFormat String
				ProtocolType UInt16
				ProtocolIFType UInt16
				OtherTypeDescription String
				BroadcastResetSupported Boolean

			CIM_SecurityAssociationEndpoint:
				LifetimeSeconds UInt64
				RefreshThresholdSecondsPercentage UInt8
				IdleDurationSeconds UInt64
				LifetimeKilobytes UInt64
				RefreshThresholdKbytesPercentage UInt8
				PacketLoggingActive Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_ServiceAccessPoint:

			CIM_ProtocolEndpoint:
				BroadcastReset UInt32

			CIM_SecurityAssociationEndpoint:


*/

#ifndef __CIM_SECURITYASSOCIATIONENDPOINT_H
#define __CIM_SECURITYASSOCIATIONENDPOINT_H


#include "CIM_ProtocolEndpoint.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_LIFETIME_SECONDS
#define PROPERTY_LIFETIME_SECONDS \
					"LifetimeSeconds"
#endif

#ifndef PROPERTY_REFRESH_THRESHOLD_SECONDS_PERCENTAGE
#define PROPERTY_REFRESH_THRESHOLD_SECONDS_PERCENTAGE \
					"RefreshThresholdSecondsPercentage"
#endif

#ifndef PROPERTY_IDLE_DURATION_SECONDS
#define PROPERTY_IDLE_DURATION_SECONDS \
					"IdleDurationSeconds"
#endif

#ifndef PROPERTY_LIFETIME_KILOBYTES
#define PROPERTY_LIFETIME_KILOBYTES \
					"LifetimeKilobytes"
#endif

#ifndef PROPERTY_REFRESH_THRESHOLD_KBYTES_PERCENTAGE
#define PROPERTY_REFRESH_THRESHOLD_KBYTES_PERCENTAGE \
					"RefreshThresholdKbytesPercentage"
#endif

#ifndef PROPERTY_PACKET_LOGGING_ACTIVE
#define PROPERTY_PACKET_LOGGING_ACTIVE \
					"PacketLoggingActive"
#endif



class CIM_SecurityAssociationEndpoint :
	public CIM_ProtocolEndpoint
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

	virtual Boolean getInstallDate(CIMProperty&) const=0;
	virtual CIMDateTime getInstallDate() const=0;
	virtual void setInstallDate(CIMDateTime&)=0;
	virtual Boolean getLifetimeSeconds(CIMProperty&) const=0;
	virtual Uint64 getLifetimeSeconds() const=0;
	virtual void setLifetimeSeconds(Uint64&)=0;
	virtual Boolean getRefreshThresholdSecondsPercentage(CIMProperty&) const=0;
	virtual Uint8 getRefreshThresholdSecondsPercentage() const=0;
	virtual void setRefreshThresholdSecondsPercentage(Uint8&)=0;
	virtual Boolean getIdleDurationSeconds(CIMProperty&) const=0;
	virtual Uint64 getIdleDurationSeconds() const=0;
	virtual void setIdleDurationSeconds(Uint64&)=0;
	virtual Boolean getLifetimeKilobytes(CIMProperty&) const=0;
	virtual Uint64 getLifetimeKilobytes() const=0;
	virtual void setLifetimeKilobytes(Uint64&)=0;
	virtual Boolean getRefreshThresholdKbytesPercentage(CIMProperty&) const=0;
	virtual Uint8 getRefreshThresholdKbytesPercentage() const=0;
	virtual void setRefreshThresholdKbytesPercentage(Uint8&)=0;
	virtual Boolean getPacketLoggingActive(CIMProperty&) const=0;
	virtual Boolean getPacketLoggingActive() const=0;
	virtual void setPacketLoggingActive(Boolean&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeBroadcastReset()=0;



private:

};

#endif /* CIM_SECURITYASSOCIATIONENDPOINT */
