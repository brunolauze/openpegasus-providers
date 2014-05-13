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
PolicyRoleCollection is used to represent a collection of ManagedElements that share a common policy role, and the PolicySets that CAN BE applied to those elements. (Note that the PolicySets that are CURRENTLY applied are indicated via instances of the association, PolicySetAppliesToElement.) The PolicyRoleCollection always exists in the context of a System, specified using the PolicyRoleCollectionInSystem aggregation. The value of the PolicyRole property in this class specifies the role. It is defined as a free-form string. ManagedElements that share the role defined in this collection are aggregated into the Collection via the ElementInPolicyRoleCollection association.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_PolicyRoleCollection:
				PolicyRole String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_PolicyRoleCollection:
				ActivatePolicySet UInt32
				DeactivatePolicySet UInt32


*/

#ifndef __UNIX_POLICYROLECOLLECTION_H
#define __UNIX_POLICYROLECOLLECTION_H


#include "CIM_SystemSpecificCollection.h"

#include "UNIX_PolicyRoleCollectionDeps.h"


#ifndef PROPERTY_POLICY_ROLE
#define PROPERTY_POLICY_ROLE \
					"PolicyRole"
#endif



class UNIX_PolicyRoleCollection :
	public CIM_SystemSpecificCollection
{
public:

	UNIX_PolicyRoleCollection();
	~UNIX_PolicyRoleCollection();

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
	virtual Boolean getPolicyRole(CIMProperty&) const;
	virtual String getPolicyRole() const;
	virtual void setPolicyRole(String&);

	virtual Uint32 invokeActivatePolicySet(
		CIMInstance &inElement
	);

	virtual Uint32 invokeDeactivatePolicySet(
		CIMInstance &inElement
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _policyRole;

#	include "UNIX_PolicyRoleCollectionPrivate.h"


};

#endif /* UNIX_POLICYROLECOLLECTION */
