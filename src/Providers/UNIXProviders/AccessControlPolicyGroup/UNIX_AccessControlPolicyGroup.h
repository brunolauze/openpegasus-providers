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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
CIM_AccessControlPolicyGroup represents a group of access control policies. The CIM_AccessControlPolicyGroup extends the CIM_PolicyGroup. and is associated with CIM_AccessControlPolicy through PolicySetComponent. Through the CIM_AccessControlPolicyGroupInLogicalElement association, the CIM_AccessControlPolicyGroup shall be associated with at least one CIM_LogicalElement instance which represents a policy repository on a managed system.
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

			CIM_PolicySet:
				PolicyDecisionStrategy UInt16
				PolicyRoles String
				Enabled UInt16

			UNIX_PolicyGroup:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				PolicyGroupName String

			UNIX_AccessControlPolicyGroup:


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicySet:

			UNIX_PolicyGroup:

			UNIX_AccessControlPolicyGroup:


*/

#ifndef __UNIX_ACCESSCONTROLPOLICYGROUP_H
#define __UNIX_ACCESSCONTROLPOLICYGROUP_H


#include <PolicyGroup/UNIX_PolicyGroup.h>

#include "UNIX_AccessControlPolicyGroupDeps.h"




class UNIX_AccessControlPolicyGroup :
	public UNIX_PolicyGroup
{
public:

	UNIX_AccessControlPolicyGroup();
	~UNIX_AccessControlPolicyGroup();

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
	virtual Boolean getPolicyDecisionStrategy(CIMProperty&) const;
	virtual Uint16 getPolicyDecisionStrategy() const;
	virtual void setPolicyDecisionStrategy(Uint16&);
	virtual Boolean getPolicyRoles(CIMProperty&) const;
	virtual Array<String> getPolicyRoles() const;
	virtual void setPolicyRoles(Array<String>&);
	virtual Boolean getEnabled(CIMProperty&) const;
	virtual Uint16 getEnabled() const;
	virtual void setEnabled(Uint16&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getPolicyGroupName(CIMProperty&) const;
	virtual String getPolicyGroupName() const;
	virtual void setPolicyGroupName(String&);


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
	Uint16 _policyDecisionStrategy;
	Array<String> _policyRoles;
	Uint16 _enabled;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _policyGroupName;

#	include "UNIX_AccessControlPolicyGroupPrivate.h"


};

#endif /* UNIX_ACCESSCONTROLPOLICYGROUP */
