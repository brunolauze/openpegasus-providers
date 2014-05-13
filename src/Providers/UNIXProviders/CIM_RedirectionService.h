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
2.17.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::ConsoleProtocols
*/


/* **** Description *** */
/*
RedirectionService provides the capability to manage redirection services. Examples of this include any video stream directed to a Network Port (by the operating system) on a Computer System redirected out to a remote administrator's console. Similarly this can include input redirected into the same Network Port. Other examples include the redirection of IO from a logical element to a remote or local destination. Each redirection stream is accessible via a SAP. This service can support multiple redirection types via multiple associated SAPs.
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

			CIM_RedirectionService:
				RedirectionServiceType UInt16
				OtherRedirectionServiceType String
				MaxCurrentEnabledSAPs UInt16
				SharingMode UInt16


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

			CIM_RedirectionService:


*/

#ifndef __CIM_REDIRECTIONSERVICE_H
#define __CIM_REDIRECTIONSERVICE_H


#include "CIM_Service.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_REDIRECTION_SERVICE_TYPE
#define PROPERTY_REDIRECTION_SERVICE_TYPE \
					"RedirectionServiceType"
#endif

#ifndef PROPERTY_OTHER_REDIRECTION_SERVICE_TYPE
#define PROPERTY_OTHER_REDIRECTION_SERVICE_TYPE \
					"OtherRedirectionServiceType"
#endif

#ifndef PROPERTY_MAX_CURRENT_ENABLED_SAPS
#define PROPERTY_MAX_CURRENT_ENABLED_SAPS \
					"MaxCurrentEnabledSAPs"
#endif

#ifndef PROPERTY_SHARING_MODE
#define PROPERTY_SHARING_MODE \
					"SharingMode"
#endif



class CIM_RedirectionService :
	public CIM_Service
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

	virtual Boolean getRedirectionServiceType(CIMProperty&) const=0;
	virtual Array<Uint16> getRedirectionServiceType() const=0;
	virtual void setRedirectionServiceType(Array<Uint16>&)=0;
	virtual Boolean getOtherRedirectionServiceType(CIMProperty&) const=0;
	virtual String getOtherRedirectionServiceType() const=0;
	virtual void setOtherRedirectionServiceType(String&)=0;
	virtual Boolean getMaxCurrentEnabledSAPs(CIMProperty&) const=0;
	virtual Uint16 getMaxCurrentEnabledSAPs() const=0;
	virtual void setMaxCurrentEnabledSAPs(Uint16&)=0;
	virtual Boolean getSharingMode(CIMProperty&) const=0;
	virtual Uint16 getSharingMode() const=0;
	virtual void setSharingMode(Uint16&)=0;

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

#endif /* CIM_REDIRECTIONSERVICE */
