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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Identity
*/


/* **** Description *** */
/*
An instance of an Identity represents a ManagedElement that acts as a security principal within the scope in which it is defined and authenticated. (Note that the Identity's scope is specified using the association, CIM_IdentityContext.) ManagedElements with Identities can be OrganizationalEntities, Services, Systems, etc. The ManagedElement 'behind' an Identity is described using the AssignedIdentity association. 

Within a given security context, an Identity may be imparted a level of trust, usually based on its credentials. A trust level is defined using the CIM_SecuritySensitivity class, and associated with Identity using CIM_ElementSecuritySensitivity. Whether an Identity is currently authenticated is evaluated by checking the CurrentlyAuthenticated boolean property. This property is set and cleared by the security infrastructure, and should only be readable within the management infrastructure. The conditions which must be met/authenticated in order for an Identity's CurrentlyAuthenticated Boolean to be TRUE are defined using a subclass of PolicyCondition - AuthenticationCondition. The inheritance tree for AuthenticationCondition is defined in the CIM Policy Model. 

Subclasses of Identity may include specific information related to a given AuthenticationService or authority (such as a security token or computer hardware port/communication details) that more specifically determine the authenticity of the Identity. An instance of Identity may be persisted even though it is not CurrentlyAuthenticated, in order to maintain static relationships to Roles, associations to accounting information, and policy data defining authentication requirements. Note however, when an Identity is not authenticated (CurrentlyAuthenticated = FALSE), then Privileges or rights SHOULD NOT be authorized. The lifetime, validity, and propagation of the Identity is dependent on a security infrastructure's policies.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Identity:
				CurrentlyAuthenticated Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Identity:


*/

#ifndef __CIM_IDENTITY_H
#define __CIM_IDENTITY_H


#include "CIM_ManagedElement.h"


#ifndef PROPERTY_CURRENTLY_AUTHENTICATED
#define PROPERTY_CURRENTLY_AUTHENTICATED \
					"CurrentlyAuthenticated"
#endif



class CIM_Identity :
	public CIM_ManagedElement
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

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getCurrentlyAuthenticated(CIMProperty&) const=0;
	virtual Boolean getCurrentlyAuthenticated() const=0;
	virtual void setCurrentlyAuthenticated(Boolean&)=0;


private:

};

#endif /* CIM_IDENTITY */
