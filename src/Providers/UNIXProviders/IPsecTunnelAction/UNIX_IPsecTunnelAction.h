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
CIM::IPsecPolicy
*/


/* **** Description *** */
/*
IPsecTunnelAction is used to specify that a tunnel-mode SA should be negotiated.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|IPsecTunnelAction
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Policy:
				CommonName String
				PolicyKeywords String

			CIM_PolicyAction:
				SystemCreationClassName String
				SystemName String
				PolicyRuleCreationClassName String
				PolicyRuleName String
				CreationClassName String
				PolicyActionName String
				DoActionLogging Boolean

			CIM_SAAction:
				DoPacketLogging Boolean

			CIM_SANegotiationAction:
				MinLifetimeSeconds UInt64
				IdleDurationSeconds UInt64
				MinLifetimeKilobytes UInt64

			CIM_IPsecAction:
				UsePFS Boolean
				UsePhase1Group Boolean
				GroupId UInt16
				VendorID String
				Granularity UInt16
				OtherGranularity String

			UNIX_IPsecTunnelAction:
				DFHandling UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicyAction:

			CIM_SAAction:

			CIM_SANegotiationAction:

			CIM_IPsecAction:

			UNIX_IPsecTunnelAction:


*/

#ifndef __UNIX_IPSECTUNNELACTION_H
#define __UNIX_IPSECTUNNELACTION_H


#include "CIM_IPsecAction.h"

#include "UNIX_IPsecTunnelActionDeps.h"


#ifndef PROPERTY_D_F_HANDLING
#define PROPERTY_D_F_HANDLING \
					"DFHandling"
#endif



class UNIX_IPsecTunnelAction :
	public CIM_IPsecAction
{
public:

	UNIX_IPsecTunnelAction();
	~UNIX_IPsecTunnelAction();

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
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual void setCommonName(String&);
	virtual Boolean getPolicyKeywords(CIMProperty&) const;
	virtual Array<String> getPolicyKeywords() const;
	virtual void setPolicyKeywords(Array<String>&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getPolicyRuleCreationClassName(CIMProperty&) const;
	virtual String getPolicyRuleCreationClassName() const;
	virtual void setPolicyRuleCreationClassName(String&);
	virtual Boolean getPolicyRuleName(CIMProperty&) const;
	virtual String getPolicyRuleName() const;
	virtual void setPolicyRuleName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getPolicyActionName(CIMProperty&) const;
	virtual String getPolicyActionName() const;
	virtual void setPolicyActionName(String&);
	virtual Boolean getDoActionLogging(CIMProperty&) const;
	virtual Boolean getDoActionLogging() const;
	virtual void setDoActionLogging(Boolean&);
	virtual Boolean getDoPacketLogging(CIMProperty&) const;
	virtual Boolean getDoPacketLogging() const;
	virtual void setDoPacketLogging(Boolean&);
	virtual Boolean getMinLifetimeSeconds(CIMProperty&) const;
	virtual Uint64 getMinLifetimeSeconds() const;
	virtual void setMinLifetimeSeconds(Uint64&);
	virtual Boolean getIdleDurationSeconds(CIMProperty&) const;
	virtual Uint64 getIdleDurationSeconds() const;
	virtual void setIdleDurationSeconds(Uint64&);
	virtual Boolean getMinLifetimeKilobytes(CIMProperty&) const;
	virtual Uint64 getMinLifetimeKilobytes() const;
	virtual void setMinLifetimeKilobytes(Uint64&);
	virtual Boolean getUsePFS(CIMProperty&) const;
	virtual Boolean getUsePFS() const;
	virtual void setUsePFS(Boolean&);
	virtual Boolean getUsePhase1Group(CIMProperty&) const;
	virtual Boolean getUsePhase1Group() const;
	virtual void setUsePhase1Group(Boolean&);
	virtual Boolean getGroupId(CIMProperty&) const;
	virtual Uint16 getGroupId() const;
	virtual void setGroupId(Uint16&);
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual String getVendorID() const;
	virtual void setVendorID(String&);
	virtual Boolean getGranularity(CIMProperty&) const;
	virtual Uint16 getGranularity() const;
	virtual void setGranularity(Uint16&);
	virtual Boolean getOtherGranularity(CIMProperty&) const;
	virtual String getOtherGranularity() const;
	virtual void setOtherGranularity(String&);
	virtual Boolean getDFHandling(CIMProperty&) const;
	virtual Uint16 getDFHandling() const;
	virtual void setDFHandling(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _commonName;
	Array<String> _policyKeywords;
	String _systemCreationClassName;
	String _systemName;
	String _policyRuleCreationClassName;
	String _policyRuleName;
	String _creationClassName;
	String _policyActionName;
	Boolean _doActionLogging;
	Boolean _doPacketLogging;
	Uint64 _minLifetimeSeconds;
	Uint64 _idleDurationSeconds;
	Uint64 _minLifetimeKilobytes;
	Boolean _usePFS;
	Boolean _usePhase1Group;
	Uint16 _groupId;
	String _vendorID;
	Uint16 _granularity;
	String _otherGranularity;
	Uint16 _dFHandling;

#	include "UNIX_IPsecTunnelActionPrivate.h"


};

#endif /* UNIX_IPSECTUNNELACTION */
