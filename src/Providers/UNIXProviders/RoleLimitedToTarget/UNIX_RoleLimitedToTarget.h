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
2.20.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Role
*/


/* **** Description *** */
/*
The Role object class is used to represent a position or set of responsibilities within an organization, organizational unit or other scope. When explicitly restricting the target elements that may be accessed from this Role, this association MUST be used.
*/


/*
			 *** Properties ***

			UNIX_RoleLimitedToTarget:
				DefiningRole Reference
				TargetElement Reference


*/


/*
			 *** Methods ***

			UNIX_RoleLimitedToTarget:


*/

#ifndef __UNIX_ROLELIMITEDTOTARGET_H
#define __UNIX_ROLELIMITEDTOTARGET_H


#include "CIM_ClassBase.h"

#include "UNIX_RoleLimitedToTargetDeps.h"


#ifndef PROPERTY_DEFINING_ROLE
#define PROPERTY_DEFINING_ROLE \
					"DefiningRole"
#endif

#ifndef PROPERTY_TARGET_ELEMENT
#define PROPERTY_TARGET_ELEMENT \
					"TargetElement"
#endif



class UNIX_RoleLimitedToTarget :
	public CIM_ClassBase
{
public:

	UNIX_RoleLimitedToTarget();
	~UNIX_RoleLimitedToTarget();

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

	virtual Boolean getDefiningRole(CIMProperty&) const;
	virtual CIMInstance getDefiningRole() const;
	virtual void setDefiningRole(CIMInstance&);
	virtual Boolean getTargetElement(CIMProperty&) const;
	virtual CIMInstance getTargetElement() const;
	virtual void setTargetElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _definingRole;
	CIMInstance _targetElement;

#	include "UNIX_RoleLimitedToTargetPrivate.h"


};

#endif /* UNIX_ROLELIMITEDTOTARGET */
