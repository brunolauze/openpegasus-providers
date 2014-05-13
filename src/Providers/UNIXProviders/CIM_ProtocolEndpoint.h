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
2.15.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Service
*/


/* **** Description *** */
/*
A communication point from which data can be sent or received. ProtocolEndpoints link system or computer interfaces to LogicalNetworks.
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


*/

#ifndef __CIM_PROTOCOLENDPOINT_H
#define __CIM_PROTOCOLENDPOINT_H


#include "CIM_ServiceAccessPoint.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_NAME_FORMAT
#define PROPERTY_NAME_FORMAT \
					"NameFormat"
#endif

#ifndef PROPERTY_PROTOCOL_TYPE
#define PROPERTY_PROTOCOL_TYPE \
					"ProtocolType"
#endif

#ifndef PROPERTY_PROTOCOL_I_F_TYPE
#define PROPERTY_PROTOCOL_I_F_TYPE \
					"ProtocolIFType"
#endif

#ifndef PROPERTY_OTHER_TYPE_DESCRIPTION
#define PROPERTY_OTHER_TYPE_DESCRIPTION \
					"OtherTypeDescription"
#endif

#ifndef PROPERTY_BROADCAST_RESET_SUPPORTED
#define PROPERTY_BROADCAST_RESET_SUPPORTED \
					"BroadcastResetSupported"
#endif



class CIM_ProtocolEndpoint :
	public CIM_ServiceAccessPoint
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

	virtual Boolean getDescription(CIMProperty&) const=0;
	virtual String getDescription() const=0;
	virtual void setDescription(String&)=0;
	virtual Boolean getOperationalStatus(CIMProperty&) const=0;
	virtual Array<Uint16> getOperationalStatus() const=0;
	virtual void setOperationalStatus(Array<Uint16>&)=0;
	virtual Boolean getEnabledState(CIMProperty&) const=0;
	virtual Uint16 getEnabledState() const=0;
	virtual void setEnabledState(Uint16&)=0;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const=0;
	virtual CIMDateTime getTimeOfLastStateChange() const=0;
	virtual void setTimeOfLastStateChange(CIMDateTime&)=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual void setName(String&)=0;
	virtual Boolean getNameFormat(CIMProperty&) const=0;
	virtual String getNameFormat() const=0;
	virtual void setNameFormat(String&)=0;
	virtual Boolean getProtocolType(CIMProperty&) const=0;
	virtual Uint16 getProtocolType() const=0;
	virtual void setProtocolType(Uint16&)=0;
	virtual Boolean getProtocolIFType(CIMProperty&) const=0;
	virtual Uint16 getProtocolIFType() const=0;
	virtual void setProtocolIFType(Uint16&)=0;
	virtual Boolean getOtherTypeDescription(CIMProperty&) const=0;
	virtual String getOtherTypeDescription() const=0;
	virtual void setOtherTypeDescription(String&)=0;
	virtual Boolean getBroadcastResetSupported(CIMProperty&) const=0;
	virtual Boolean getBroadcastResetSupported() const=0;
	virtual void setBroadcastResetSupported(Boolean&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeBroadcastReset()=0;



private:

};

#endif /* CIM_PROTOCOLENDPOINT */
