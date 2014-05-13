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
2.14.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::SecurityLevel
*/


/* **** Description *** */
/*
This association labels an element with a security sensitivity.
This association is not used to indicate clearance of a security principal, see IdentitySecurityClearance.
*/


/*
			 *** Properties ***

			UNIX_ElementSecuritySensitivity:
				SecurityLevel Reference
				ManagedElement Reference


*/


/*
			 *** Methods ***

			UNIX_ElementSecuritySensitivity:


*/

#ifndef __UNIX_ELEMENTSECURITYSENSITIVITY_H
#define __UNIX_ELEMENTSECURITYSENSITIVITY_H


#include "CIM_ClassBase.h"

#include "UNIX_ElementSecuritySensitivityDeps.h"


#ifndef PROPERTY_SECURITY_LEVEL
#define PROPERTY_SECURITY_LEVEL \
					"SecurityLevel"
#endif

#ifndef PROPERTY_MANAGED_ELEMENT
#define PROPERTY_MANAGED_ELEMENT \
					"ManagedElement"
#endif



class UNIX_ElementSecuritySensitivity :
	public CIM_ClassBase
{
public:

	UNIX_ElementSecuritySensitivity();
	~UNIX_ElementSecuritySensitivity();

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

	virtual Boolean getSecurityLevel(CIMProperty&) const;
	virtual CIMInstance getSecurityLevel() const;
	virtual void setSecurityLevel(CIMInstance&);
	virtual Boolean getManagedElement(CIMProperty&) const;
	virtual CIMInstance getManagedElement() const;
	virtual void setManagedElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _securityLevel;
	CIMInstance _managedElement;

#	include "UNIX_ElementSecuritySensitivityPrivate.h"


};

#endif /* UNIX_ELEMENTSECURITYSENSITIVITY */
