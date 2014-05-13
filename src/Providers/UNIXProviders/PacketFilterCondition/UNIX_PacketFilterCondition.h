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
CIM::Policy
*/


/* **** Description *** */
/*
PacketFilterCondition specifies packet selection criteria (via association to FilterLists) for firewall policies, IPsec policies and similar uses. It is used as an anchor point to associate various types of filters with policy rules via the FilterOfPacketCondition association. By definition, policy rules that aggregate PacketFilterCondition are assumed to operate against every packet received and/or transmitted from an ingress and/or egress point. (Whether policy condition evaluation occurs at ingress or egress is specified by the Direction property in the associated FilterList.) PacketFilterCondition MAY also be used to define the specific CredentialManagementService that validates the credentials carried in a packet. This is accomplished using the association, AcceptCredentialFrom. 

Associated objects (such as FilterListsor Credential ManagementServices) represent components of the condition that MAY or MAY NOT apply at a given rule evaluation. For example, an AcceptCredentialFrom evaluation is only performed when a credential is available to be evaluated and compared against the list of trusted credential management services. Similarly, a PeerIDPayloadFilterEntry MAY only be evaluated when an ID payload is available for checking. Condition components that do not have applicability at rule evaluation time, MUST be evaluated to TRUE.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|SACondition
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

			CIM_PolicyCondition:
				SystemCreationClassName String
				SystemName String
				PolicyRuleCreationClassName String
				PolicyRuleName String
				CreationClassName String
				PolicyConditionName String

			UNIX_PacketFilterCondition:


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicyCondition:

			UNIX_PacketFilterCondition:


*/

#ifndef __UNIX_PACKETFILTERCONDITION_H
#define __UNIX_PACKETFILTERCONDITION_H


#include "CIM_PolicyCondition.h"

#include "UNIX_PacketFilterConditionDeps.h"




class UNIX_PacketFilterCondition :
	public CIM_PolicyCondition
{
public:

	UNIX_PacketFilterCondition();
	~UNIX_PacketFilterCondition();

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
	virtual Boolean getPolicyConditionName(CIMProperty&) const;
	virtual String getPolicyConditionName() const;
	virtual void setPolicyConditionName(String&);


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
	String _policyConditionName;

#	include "UNIX_PacketFilterConditionPrivate.h"


};

#endif /* UNIX_PACKETFILTERCONDITION */
