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
2.27.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Credential
*/


/* **** Description *** */
/*
This relationship defines a context (e.g., a System or Service) of a Credential. One example is a shared secret/ password which is defined within the context of an application (or Service). Generally, there is one scoping element for a Credential, however the multiplicities of the association allow a Credential to be scoped by more than one element. If this association is not instantiated for a Credential, that Credential is assumed to be scoped to the Namespace.
This association may also be used to indicate that a Credential is valid in some other environment. For instance associating the Credential to a RemoteServiceAccessPoint would indicate that the Credential is used to access the remote service.
*/


/*
			 *** Properties ***

			UNIX_CredentialContext:
				ElementInContext Reference
				ElementProvidingContext Reference
				Usage UInt16


*/


/*
			 *** Methods ***

			UNIX_CredentialContext:


*/

#ifndef __UNIX_CREDENTIALCONTEXT_H
#define __UNIX_CREDENTIALCONTEXT_H


#include "CIM_ClassBase.h"

#include "UNIX_CredentialContextDeps.h"


#ifndef PROPERTY_ELEMENT_IN_CONTEXT
#define PROPERTY_ELEMENT_IN_CONTEXT \
					"ElementInContext"
#endif

#ifndef PROPERTY_ELEMENT_PROVIDING_CONTEXT
#define PROPERTY_ELEMENT_PROVIDING_CONTEXT \
					"ElementProvidingContext"
#endif

#ifndef PROPERTY_USAGE
#define PROPERTY_USAGE \
					"Usage"
#endif



class UNIX_CredentialContext :
	public CIM_ClassBase
{
public:

	UNIX_CredentialContext();
	~UNIX_CredentialContext();

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

	virtual Boolean getElementInContext(CIMProperty&) const;
	virtual CIMInstance getElementInContext() const;
	virtual void setElementInContext(CIMInstance&);
	virtual Boolean getElementProvidingContext(CIMProperty&) const;
	virtual CIMInstance getElementProvidingContext() const;
	virtual void setElementProvidingContext(CIMInstance&);
	virtual Boolean getUsage(CIMProperty&) const;
	virtual Uint16 getUsage() const;
	virtual void setUsage(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _elementInContext;
	CIMInstance _elementProvidingContext;
	Uint16 _usage;

#	include "UNIX_CredentialContextPrivate.h"


};

#endif /* UNIX_CREDENTIALCONTEXT */
