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


/* **** Association *** */
/*
TRUE
*/


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
PolicySetAppliesToElement makes explicit which PolicySets (i.e., policy rules and groups of rules) ARE CURRENTLY applied to a particular Element. This association indicates that the PolicySets that are appropriate for a ManagedElement (specified using the PolicyRoleCollection aggregation) have actually been deployed in the policy management infrastructure. Note that if the named Element refers to a Collection, then the PolicySet is assumed to be applied to all the members of the Collection.
*/


/*
			 *** Properties ***

			UNIX_PolicySetAppliesToElement:
				PolicySet Reference
				ManagedElement Reference


*/


/*
			 *** Methods ***

			UNIX_PolicySetAppliesToElement:


*/

#ifndef __UNIX_POLICYSETAPPLIESTOELEMENT_H
#define __UNIX_POLICYSETAPPLIESTOELEMENT_H


#include "CIM_ClassBase.h"

#include "UNIX_PolicySetAppliesToElementDeps.h"


#ifndef PROPERTY_POLICY_SET
#define PROPERTY_POLICY_SET \
					"PolicySet"
#endif

#ifndef PROPERTY_MANAGED_ELEMENT
#define PROPERTY_MANAGED_ELEMENT \
					"ManagedElement"
#endif



class UNIX_PolicySetAppliesToElement :
	public CIM_ClassBase
{
public:

	UNIX_PolicySetAppliesToElement();
	~UNIX_PolicySetAppliesToElement();

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

	virtual Boolean getPolicySet(CIMProperty&) const;
	virtual CIMInstance getPolicySet() const;
	virtual void setPolicySet(CIMInstance&);
	virtual Boolean getManagedElement(CIMProperty&) const;
	virtual CIMInstance getManagedElement() const;
	virtual void setManagedElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _policySet;
	CIMInstance _managedElement;

#	include "UNIX_PolicySetAppliesToElementPrivate.h"


};

#endif /* UNIX_POLICYSETAPPLIESTOELEMENT */
