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
WS-Management Capabiltiies. For more information see the WS-Management specification, DSP0226.
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

			UNIX_WSManagementCapabilities:
				XPathFeatures UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			CIM_ProtocolServiceCapabilities:

			CIM_WBEMProtocolServiceCapabilities:

			UNIX_WSManagementCapabilities:


*/

#ifndef __UNIX_WSMANAGEMENTCAPABILITIES_H
#define __UNIX_WSMANAGEMENTCAPABILITIES_H


#include "CIM_WBEMProtocolServiceCapabilities.h"

#include "UNIX_WSManagementCapabilitiesDeps.h"


#ifndef PROPERTY_X_PATH_FEATURES
#define PROPERTY_X_PATH_FEATURES \
					"XPathFeatures"
#endif



class UNIX_WSManagementCapabilities :
	public CIM_WBEMProtocolServiceCapabilities
{
public:

	UNIX_WSManagementCapabilities();
	~UNIX_WSManagementCapabilities();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getElementNameEditSupported(CIMProperty&) const;
	virtual Boolean getElementNameEditSupported() const;
	virtual void setElementNameEditSupported(Boolean&);
	virtual Boolean getMaxElementNameLen(CIMProperty&) const;
	virtual Uint16 getMaxElementNameLen() const;
	virtual void setMaxElementNameLen(Uint16&);
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupported() const;
	virtual void setRequestedStatesSupported(Array<Uint16>&);
	virtual Boolean getElementNameMask(CIMProperty&) const;
	virtual String getElementNameMask() const;
	virtual void setElementNameMask(String&);
	virtual Boolean getStateAwareness(CIMProperty&) const;
	virtual Array<Uint16> getStateAwareness() const;
	virtual void setStateAwareness(Array<Uint16>&);
	virtual Boolean getMaxConnections(CIMProperty&) const;
	virtual Uint16 getMaxConnections() const;
	virtual void setMaxConnections(Uint16&);
	virtual Boolean getMaxListeningPorts(CIMProperty&) const;
	virtual Uint16 getMaxListeningPorts() const;
	virtual void setMaxListeningPorts(Uint16&);
	virtual Boolean getListeningPortManagementSupported(CIMProperty&) const;
	virtual Boolean getListeningPortManagementSupported() const;
	virtual void setListeningPortManagementSupported(Boolean&);
	virtual Boolean getWBEMProtocolVersionsSupported(CIMProperty&) const;
	virtual Array<String> getWBEMProtocolVersionsSupported() const;
	virtual void setWBEMProtocolVersionsSupported(Array<String>&);
	virtual Boolean getGenericOperationCapabilities(CIMProperty&) const;
	virtual String getGenericOperationCapabilities() const;
	virtual void setGenericOperationCapabilities(String&);
	virtual Boolean getAuthenticationMechanismsSupported(CIMProperty&) const;
	virtual Array<Sint16> getAuthenticationMechanismsSupported() const;
	virtual void setAuthenticationMechanismsSupported(Array<Sint16>&);
	virtual Boolean getAuthenticationMechanismsDescriptions(CIMProperty&) const;
	virtual Array<String> getAuthenticationMechanismsDescriptions() const;
	virtual void setAuthenticationMechanismsDescriptions(Array<String>&);
	virtual Boolean getXPathFeatures(CIMProperty&) const;
	virtual Uint16 getXPathFeatures() const;
	virtual void setXPathFeatures(Uint16&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _elementNameEditSupported;
	Uint16 _maxElementNameLen;
	Array<Uint16> _requestedStatesSupported;
	String _elementNameMask;
	Array<Uint16> _stateAwareness;
	Uint16 _maxConnections;
	Uint16 _maxListeningPorts;
	Boolean _listeningPortManagementSupported;
	Array<String> _wBEMProtocolVersionsSupported;
	String _genericOperationCapabilities;
	Array<Sint16> _authenticationMechanismsSupported;
	Array<String> _authenticationMechanismsDescriptions;
	Uint16 _xPathFeatures;

#	include "UNIX_WSManagementCapabilitiesPrivate.h"


};

#endif /* UNIX_WSMANAGEMENTCAPABILITIES */
