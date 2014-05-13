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
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Misc
*/


/* **** Description *** */
/*
A subclass of EnabledLogicalElementCapabilities that defines the capabilities of a ProtocolService. An instance of CIM_ProtocolServiceCapabilities is associated with a ProtocolService using ElementCapabilities.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			CIM_EnabledLogicalElementCapabilities:
				ElementNameEditSupported Boolean
				MaxElementNameLen UInt16
				RequestedStatesSupported UInt16
				ElementNameMask String
				StateAwareness UInt16

			CIM_ProtocolServiceCapabilities:
				MaxConnections UInt16
				MaxListeningPorts UInt16
				ListeningPortManagementSupported Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			CIM_ProtocolServiceCapabilities:


*/

#ifndef __CIM_PROTOCOLSERVICECAPABILITIES_H
#define __CIM_PROTOCOLSERVICECAPABILITIES_H


#include "CIM_EnabledLogicalElementCapabilities.h"


#ifndef PROPERTY_MAX_CONNECTIONS
#define PROPERTY_MAX_CONNECTIONS \
					"MaxConnections"
#endif

#ifndef PROPERTY_MAX_LISTENING_PORTS
#define PROPERTY_MAX_LISTENING_PORTS \
					"MaxListeningPorts"
#endif

#ifndef PROPERTY_LISTENING_PORT_MANAGEMENT_SUPPORTED
#define PROPERTY_LISTENING_PORT_MANAGEMENT_SUPPORTED \
					"ListeningPortManagementSupported"
#endif



class CIM_ProtocolServiceCapabilities :
	public CIM_EnabledLogicalElementCapabilities
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
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

	virtual Boolean getMaxConnections(CIMProperty&) const=0;
	virtual Uint16 getMaxConnections() const=0;
	virtual void setMaxConnections(Uint16&)=0;
	virtual Boolean getMaxListeningPorts(CIMProperty&) const=0;
	virtual Uint16 getMaxListeningPorts() const=0;
	virtual void setMaxListeningPorts(Uint16&)=0;
	virtual Boolean getListeningPortManagementSupported(CIMProperty&) const=0;
	virtual Boolean getListeningPortManagementSupported() const=0;
	virtual void setListeningPortManagementSupported(Boolean&)=0;

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)=0;



private:

};

#endif /* CIM_PROTOCOLSERVICECAPABILITIES */
