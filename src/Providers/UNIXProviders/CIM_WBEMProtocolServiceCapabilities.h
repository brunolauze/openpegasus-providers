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
2.38.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop::WBEMProtocol
*/


/* **** Description *** */
/*
CIM_WBEMProtocolServiceCapabilities defines the capabilities for a WBEM Protocol.
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

			CIM_WBEMProtocolServiceCapabilities:
				WBEMProtocolVersionsSupported String
				GenericOperationCapabilities String
				AuthenticationMechanismsSupported SInt16
				AuthenticationMechanismsDescriptions String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			CIM_ProtocolServiceCapabilities:

			CIM_WBEMProtocolServiceCapabilities:


*/

#ifndef __CIM_WBEMPROTOCOLSERVICECAPABILITIES_H
#define __CIM_WBEMPROTOCOLSERVICECAPABILITIES_H


#include "CIM_ProtocolServiceCapabilities.h"


#ifndef PROPERTY_WBEM_PROTOCOL_VERSIONS_SUPPORTED
#define PROPERTY_WBEM_PROTOCOL_VERSIONS_SUPPORTED \
					"WBEMProtocolVersionsSupported"
#endif

#ifndef PROPERTY_GENERIC_OPERATION_CAPABILITIES
#define PROPERTY_GENERIC_OPERATION_CAPABILITIES \
					"GenericOperationCapabilities"
#endif

#ifndef PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED
#define PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED \
					"AuthenticationMechanismsSupported"
#endif

#ifndef PROPERTY_AUTHENTICATION_MECHANISMS_DESCRIPTIONS
#define PROPERTY_AUTHENTICATION_MECHANISMS_DESCRIPTIONS \
					"AuthenticationMechanismsDescriptions"
#endif



class CIM_WBEMProtocolServiceCapabilities :
	public CIM_ProtocolServiceCapabilities
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

	virtual Boolean getWBEMProtocolVersionsSupported(CIMProperty&) const=0;
	virtual Array<String> getWBEMProtocolVersionsSupported() const=0;
	virtual void setWBEMProtocolVersionsSupported(Array<String>&)=0;
	virtual Boolean getGenericOperationCapabilities(CIMProperty&) const=0;
	virtual String getGenericOperationCapabilities() const=0;
	virtual void setGenericOperationCapabilities(String&)=0;
	virtual Boolean getAuthenticationMechanismsSupported(CIMProperty&) const=0;
	virtual Array<Sint16> getAuthenticationMechanismsSupported() const=0;
	virtual void setAuthenticationMechanismsSupported(Array<Sint16>&)=0;
	virtual Boolean getAuthenticationMechanismsDescriptions(CIMProperty&) const=0;
	virtual Array<String> getAuthenticationMechanismsDescriptions() const=0;
	virtual void setAuthenticationMechanismsDescriptions(Array<String>&)=0;

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)=0;



private:

};

#endif /* CIM_WBEMPROTOCOLSERVICECAPABILITIES */
