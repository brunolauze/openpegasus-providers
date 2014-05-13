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
CIM::User::Identity
*/


/* **** Description *** */
/*
This relationship defines a context (e.g., a System or Service) of an Identity. Note that the cardinalities of this association are many to many, indicating that the Identity MAY be scoped by several elements. However, it is likely that there will only be a single scope, if one exists at all.
*/


/*
			 *** Properties ***

			UNIX_IdentityContext:
				ElementInContext Reference
				ElementProvidingContext Reference


*/


/*
			 *** Methods ***

			UNIX_IdentityContext:


*/

#ifndef __UNIX_IDENTITYCONTEXT_H
#define __UNIX_IDENTITYCONTEXT_H


#include "CIM_ClassBase.h"

#include "UNIX_IdentityContextDeps.h"


#ifndef PROPERTY_ELEMENT_IN_CONTEXT
#define PROPERTY_ELEMENT_IN_CONTEXT \
					"ElementInContext"
#endif

#ifndef PROPERTY_ELEMENT_PROVIDING_CONTEXT
#define PROPERTY_ELEMENT_PROVIDING_CONTEXT \
					"ElementProvidingContext"
#endif



class UNIX_IdentityContext :
	public CIM_ClassBase
{
public:

	UNIX_IdentityContext();
	~UNIX_IdentityContext();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _elementInContext;
	CIMInstance _elementProvidingContext;

#	include "UNIX_IdentityContextPrivate.h"


};

#endif /* UNIX_IDENTITYCONTEXT */
