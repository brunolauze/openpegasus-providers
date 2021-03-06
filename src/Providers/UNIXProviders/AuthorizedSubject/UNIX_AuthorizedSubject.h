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
CIM::User::Privilege
*/


/* **** Description *** */
/*
CIM_AuthorizedSubject is an association used to tie specific AuthorizedPrivileges to specific subjects (i.e., Identities, Roles or Collections of these). At this time, only Identities and Roles (or Collections of Identities and Roles) should be associated to AuthorizedPrivileges using this relationship. Note that any Privileges not explicitly granted to a subject, SHOULD be denied.
*/


/*
			 *** Properties ***

			UNIX_AuthorizedSubject:
				Privilege Reference
				PrivilegedElement Reference


*/


/*
			 *** Methods ***

			UNIX_AuthorizedSubject:


*/

#ifndef __UNIX_AUTHORIZEDSUBJECT_H
#define __UNIX_AUTHORIZEDSUBJECT_H


#include "CIM_ClassBase.h"

#include "UNIX_AuthorizedSubjectDeps.h"


#ifndef PROPERTY_PRIVILEGE
#define PROPERTY_PRIVILEGE \
					"Privilege"
#endif

#ifndef PROPERTY_PRIVILEGED_ELEMENT
#define PROPERTY_PRIVILEGED_ELEMENT \
					"PrivilegedElement"
#endif



class UNIX_AuthorizedSubject :
	public CIM_ClassBase
{
public:

	UNIX_AuthorizedSubject();
	~UNIX_AuthorizedSubject();

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

	virtual Boolean getPrivilege(CIMProperty&) const;
	virtual CIMInstance getPrivilege() const;
	virtual void setPrivilege(CIMInstance&);
	virtual Boolean getPrivilegedElement(CIMProperty&) const;
	virtual CIMInstance getPrivilegedElement() const;
	virtual void setPrivilegedElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _privilege;
	CIMInstance _privilegedElement;

#	include "UNIX_AuthorizedSubjectPrivate.h"


};

#endif /* UNIX_AUTHORIZEDSUBJECT */
