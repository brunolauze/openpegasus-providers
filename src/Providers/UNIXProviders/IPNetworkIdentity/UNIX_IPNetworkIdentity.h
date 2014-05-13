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
CIM::User::Identity
*/


/* **** Description *** */
/*
IPNetworkIdentity is used to represent the various network identities that may be used for an IPProtocolEndpoint. The relationship between the NetworkIdentity and the IPProtocolEndpoint is modeled by the AssignedIdentity association, inherited from CIM_Identity. This association could also be used to relate an address range or other endpoint collection with the Identity.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|IKEIdentity
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

			UNIX_IPNetworkIdentity:
				IdentityType UInt16
				IdentityValue String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Identity:

			UNIX_IPNetworkIdentity:


*/

#ifndef __UNIX_IPNETWORKIDENTITY_H
#define __UNIX_IPNETWORKIDENTITY_H


#include "CIM_Identity.h"

#include "UNIX_IPNetworkIdentityDeps.h"


#ifndef PROPERTY_IDENTITY_TYPE
#define PROPERTY_IDENTITY_TYPE \
					"IdentityType"
#endif

#ifndef PROPERTY_IDENTITY_VALUE
#define PROPERTY_IDENTITY_VALUE \
					"IdentityValue"
#endif



class UNIX_IPNetworkIdentity :
	public CIM_Identity
{
public:

	UNIX_IPNetworkIdentity();
	~UNIX_IPNetworkIdentity();

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
	virtual Boolean getCurrentlyAuthenticated(CIMProperty&) const;
	virtual Boolean getCurrentlyAuthenticated() const;
	virtual void setCurrentlyAuthenticated(Boolean&);
	virtual Boolean getIdentityType(CIMProperty&) const;
	virtual Uint16 getIdentityType() const;
	virtual void setIdentityType(Uint16&);
	virtual Boolean getIdentityValue(CIMProperty&) const;
	virtual String getIdentityValue() const;
	virtual void setIdentityValue(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _currentlyAuthenticated;
	Uint16 _identityType;
	String _identityValue;

#	include "UNIX_IPNetworkIdentityPrivate.h"


};

#endif /* UNIX_IPNETWORKIDENTITY */
