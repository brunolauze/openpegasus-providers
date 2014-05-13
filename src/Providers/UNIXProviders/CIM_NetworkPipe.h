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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Pipes
*/


/* **** Description *** */
/*
NetworkPipe is a subclass of EnabledLogicalElement, representing the state and management of a connection or trail between endpoints. This object is different than the association between the endpoints (CIM_ActiveConnection) since the emphasis is NOT on the endpoints but on the management of the pipe itself - its state, configuration, etc. NetworkPipes are defined in the context of a CIM_Network and represent the 'transfer of information . . . between . . . endpoints'. These concepts are aligned with the definition of the Pipe object in ITU's M.3100 specification.
*/


/* **** MappingStrings *** */
/*
Recommendation.ITU|M3100.Pipe
Recommendation.ITU|M3100.TrailR1
Recommendation.ITU|M3100.ConnectionR1
Recommendation.ITU|M3100.SubNetworkConnection
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

			CIM_NetworkPipe:
				Directionality UInt16
				AggregationBehavior UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_NetworkPipe:


*/

#ifndef __CIM_NETWORKPIPE_H
#define __CIM_NETWORKPIPE_H


#include "CIM_EnabledLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_DIRECTIONALITY
#define PROPERTY_DIRECTIONALITY \
					"Directionality"
#endif

#ifndef PROPERTY_AGGREGATION_BEHAVIOR
#define PROPERTY_AGGREGATION_BEHAVIOR \
					"AggregationBehavior"
#endif



class CIM_NetworkPipe :
	public CIM_EnabledLogicalElement
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

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getDirectionality(CIMProperty&) const=0;
	virtual Uint16 getDirectionality() const=0;
	virtual void setDirectionality(Uint16&)=0;
	virtual Boolean getAggregationBehavior(CIMProperty&) const=0;
	virtual Uint16 getAggregationBehavior() const=0;
	virtual void setAggregationBehavior(Uint16&)=0;
	virtual Boolean getEnabledState(CIMProperty&) const=0;
	virtual Uint16 getEnabledState() const=0;
	virtual void setEnabledState(Uint16&)=0;
	virtual Boolean getRequestedState(CIMProperty&) const=0;
	virtual Uint16 getRequestedState() const=0;
	virtual void setRequestedState(Uint16&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;



private:

};

#endif /* CIM_NETWORKPIPE */
