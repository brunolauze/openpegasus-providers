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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::IEEE8021x
*/


/* **** Description *** */
/*
CIM_IEEE8021xCapabilities describes the IEEE 802.1x security capabilities of a layer 2 ProtocolEndpoint.
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

			UNIX_IEEE8021xCapabilities:
				SupportedAuthenticationProtocols UInt16
				RoamingSupported Boolean
				FastRoamingSupported Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_IEEE8021xCapabilities:


*/

#ifndef __UNIX_IEEE8021XCAPABILITIES_H
#define __UNIX_IEEE8021XCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_IEEE8021xCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_AUTHENTICATION_PROTOCOLS
#define PROPERTY_SUPPORTED_AUTHENTICATION_PROTOCOLS \
					"SupportedAuthenticationProtocols"
#endif

#ifndef PROPERTY_ROAMING_SUPPORTED
#define PROPERTY_ROAMING_SUPPORTED \
					"RoamingSupported"
#endif

#ifndef PROPERTY_FAST_ROAMING_SUPPORTED
#define PROPERTY_FAST_ROAMING_SUPPORTED \
					"FastRoamingSupported"
#endif



class UNIX_IEEE8021xCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_IEEE8021xCapabilities();
	~UNIX_IEEE8021xCapabilities();

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
	virtual Boolean getSupportedAuthenticationProtocols(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAuthenticationProtocols() const;
	virtual void setSupportedAuthenticationProtocols(Array<Uint16>&);
	virtual Boolean getRoamingSupported(CIMProperty&) const;
	virtual Boolean getRoamingSupported() const;
	virtual void setRoamingSupported(Boolean&);
	virtual Boolean getFastRoamingSupported(CIMProperty&) const;
	virtual Boolean getFastRoamingSupported() const;
	virtual void setFastRoamingSupported(Boolean&);

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
	Array<Uint16> _supportedAuthenticationProtocols;
	Boolean _roamingSupported;
	Boolean _fastRoamingSupported;

#	include "UNIX_IEEE8021xCapabilitiesPrivate.h"


};

#endif /* UNIX_IEEE8021XCAPABILITIES */
