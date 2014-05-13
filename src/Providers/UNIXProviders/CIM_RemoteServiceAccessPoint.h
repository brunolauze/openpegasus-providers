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
2.27.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Service
*/


/* **** Description *** */
/*
RemoteServiceAccessPoint describes access or addressing information or a combination of this information for a remote connection that is known to a local network element. This information is scoped or contained by the local network element, because this is the context in which the connection is remote. 
The relevance of the remote access point and information on its use are described by subclassing RemoteServiceAccessPoint or by associating to it.
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

			CIM_RemoteServiceAccessPoint:
				AccessInfo String
				InfoFormat UInt16
				OtherInfoFormatDescription String
				AccessContext UInt16
				OtherAccessContext String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_ServiceAccessPoint:

			CIM_RemoteServiceAccessPoint:


*/

#ifndef __CIM_REMOTESERVICEACCESSPOINT_H
#define __CIM_REMOTESERVICEACCESSPOINT_H


#include "CIM_ServiceAccessPoint.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_ACCESS_INFO
#define PROPERTY_ACCESS_INFO \
					"AccessInfo"
#endif

#ifndef PROPERTY_INFO_FORMAT
#define PROPERTY_INFO_FORMAT \
					"InfoFormat"
#endif

#ifndef PROPERTY_OTHER_INFO_FORMAT_DESCRIPTION
#define PROPERTY_OTHER_INFO_FORMAT_DESCRIPTION \
					"OtherInfoFormatDescription"
#endif

#ifndef PROPERTY_ACCESS_CONTEXT
#define PROPERTY_ACCESS_CONTEXT \
					"AccessContext"
#endif

#ifndef PROPERTY_OTHER_ACCESS_CONTEXT
#define PROPERTY_OTHER_ACCESS_CONTEXT \
					"OtherAccessContext"
#endif



class CIM_RemoteServiceAccessPoint :
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

	virtual Boolean getAccessInfo(CIMProperty&) const=0;
	virtual String getAccessInfo() const=0;
	virtual void setAccessInfo(String&)=0;
	virtual Boolean getInfoFormat(CIMProperty&) const=0;
	virtual Uint16 getInfoFormat() const=0;
	virtual void setInfoFormat(Uint16&)=0;
	virtual Boolean getOtherInfoFormatDescription(CIMProperty&) const=0;
	virtual String getOtherInfoFormatDescription() const=0;
	virtual void setOtherInfoFormatDescription(String&)=0;
	virtual Boolean getAccessContext(CIMProperty&) const=0;
	virtual Uint16 getAccessContext() const=0;
	virtual void setAccessContext(Uint16&)=0;
	virtual Boolean getOtherAccessContext(CIMProperty&) const=0;
	virtual String getOtherAccessContext() const=0;
	virtual void setOtherAccessContext(String&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;



private:

};

#endif /* CIM_REMOTESERVICEACCESSPOINT */
