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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
CIM_ConcreteIdentity associates two elements that represent different aspects of the same underlying entity. It is defined as a concrete subclass of the abstract CIM_LogicalIdentity class, to be used in place of many specific subclasses of LogicalIdentity that add no semantics, that is, subclasses that do not clarify the type of identity, update cardinalities, or add or remove qualifiers. Note that when you define additional semantics for LogicalIdentity, this class should not be subclassed. Specific semantics continue to be defined as subclasses of the abstract CIM_LogicalIdentity. ConcreteIdentity is limited in its use as a concrete form of a general identity relationship. 

It was deemed more prudent to create this concrete subclass than to change LogicalIdentity from an abstract to a concrete class. LogicalIdentity already had multiple abstract subclasses in the CIM Schema, and wider industry usage and impact could not be anticipated.
*/


/*
			 *** Properties ***

			CIM_LogicalIdentity:
				SystemElement Reference
				SameElement Reference

			UNIX_ConcreteIdentity:


*/


/*
			 *** Methods ***

			CIM_LogicalIdentity:

			UNIX_ConcreteIdentity:


*/

#ifndef __UNIX_CONCRETEIDENTITY_H
#define __UNIX_CONCRETEIDENTITY_H


#include "CIM_LogicalIdentity.h"

#include "UNIX_ConcreteIdentityDeps.h"




class UNIX_ConcreteIdentity :
	public CIM_LogicalIdentity
{
public:

	UNIX_ConcreteIdentity();
	~UNIX_ConcreteIdentity();

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

	virtual Boolean getSystemElement(CIMProperty&) const;
	virtual CIMInstance getSystemElement() const;
	virtual void setSystemElement(CIMInstance&);
	virtual Boolean getSameElement(CIMProperty&) const;
	virtual CIMInstance getSameElement() const;
	virtual void setSameElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _systemElement;
	CIMInstance _sameElement;

#	include "UNIX_ConcreteIdentityPrivate.h"


};

#endif /* UNIX_CONCRETEIDENTITY */
