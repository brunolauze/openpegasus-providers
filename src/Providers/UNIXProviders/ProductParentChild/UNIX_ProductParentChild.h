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


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Composition *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::ProductFRU
*/


/* **** Description *** */
/*
The CIM_ProductParentChild association defines a parent child hierarchy among Products. For example, a Product may come bundled with other Products.
*/


/*
			 *** Properties ***

			UNIX_ProductParentChild:
				Parent Reference
				Child Reference


*/


/*
			 *** Methods ***

			UNIX_ProductParentChild:


*/

#ifndef __UNIX_PRODUCTPARENTCHILD_H
#define __UNIX_PRODUCTPARENTCHILD_H


#include "CIM_ClassBase.h"

#include "UNIX_ProductParentChildDeps.h"


#ifndef PROPERTY_PARENT
#define PROPERTY_PARENT \
					"Parent"
#endif

#ifndef PROPERTY_CHILD
#define PROPERTY_CHILD \
					"Child"
#endif



class UNIX_ProductParentChild :
	public CIM_ClassBase
{
public:

	UNIX_ProductParentChild();
	~UNIX_ProductParentChild();

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

	virtual Boolean getParent(CIMProperty&) const;
	virtual CIMInstance getParent() const;
	virtual void setParent(CIMInstance&);
	virtual Boolean getChild(CIMProperty&) const;
	virtual CIMInstance getChild() const;
	virtual void setChild(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _parent;
	CIMInstance _child;

#	include "UNIX_ProductParentChildPrivate.h"


};

#endif /* UNIX_PRODUCTPARENTCHILD */
