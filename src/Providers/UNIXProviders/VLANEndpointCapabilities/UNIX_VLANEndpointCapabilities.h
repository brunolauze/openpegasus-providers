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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.21.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::VLAN
*/


/* **** Description *** */
/*
Capabilities supported by the VLAN endpoint.
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

			UNIX_VLANEndpointCapabilities:
				Dot1QTagging Boolean
				Dot1qAcceptableVLANFramesTypes UInt16
				Dot1qIngressFiltering Boolean
				SupportsTrunkEncapsulationNegotiation Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_VLANEndpointCapabilities:


*/

#ifndef __UNIX_VLANENDPOINTCAPABILITIES_H
#define __UNIX_VLANENDPOINTCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_VLANEndpointCapabilitiesDeps.h"


#ifndef PROPERTY_DOT_1_Q_TAGGING
#define PROPERTY_DOT_1_Q_TAGGING \
					"Dot1QTagging"
#endif

#ifndef PROPERTY_DOT_1Q_ACCEPTABLE_VLAN_FRAMES_TYPES
#define PROPERTY_DOT_1Q_ACCEPTABLE_VLAN_FRAMES_TYPES \
					"Dot1qAcceptableVLANFramesTypes"
#endif

#ifndef PROPERTY_DOT_1Q_INGRESS_FILTERING
#define PROPERTY_DOT_1Q_INGRESS_FILTERING \
					"Dot1qIngressFiltering"
#endif

#ifndef PROPERTY_SUPPORTS_TRUNK_ENCAPSULATION_NEGOTIATION
#define PROPERTY_SUPPORTS_TRUNK_ENCAPSULATION_NEGOTIATION \
					"SupportsTrunkEncapsulationNegotiation"
#endif



class UNIX_VLANEndpointCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_VLANEndpointCapabilities();
	~UNIX_VLANEndpointCapabilities();

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
	virtual Boolean getDot1QTagging(CIMProperty&) const;
	virtual Boolean getDot1QTagging() const;
	virtual void setDot1QTagging(Boolean&);
	virtual Boolean getDot1qAcceptableVLANFramesTypes(CIMProperty&) const;
	virtual Uint16 getDot1qAcceptableVLANFramesTypes() const;
	virtual void setDot1qAcceptableVLANFramesTypes(Uint16&);
	virtual Boolean getDot1qIngressFiltering(CIMProperty&) const;
	virtual Boolean getDot1qIngressFiltering() const;
	virtual void setDot1qIngressFiltering(Boolean&);
	virtual Boolean getSupportsTrunkEncapsulationNegotiation(CIMProperty&) const;
	virtual Boolean getSupportsTrunkEncapsulationNegotiation() const;
	virtual void setSupportsTrunkEncapsulationNegotiation(Boolean&);

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
	Boolean _dot1QTagging;
	Uint16 _dot1qAcceptableVLANFramesTypes;
	Boolean _dot1qIngressFiltering;
	Boolean _supportsTrunkEncapsulationNegotiation;

#	include "UNIX_VLANEndpointCapabilitiesPrivate.h"


};

#endif /* UNIX_VLANENDPOINTCAPABILITIES */
