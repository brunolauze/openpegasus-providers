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
2.18.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Collection
*/


/* **** Description *** */
/*
OwningCollectionElement represents an association between a Collection and the ManagedElement responsible for the control or ownership of the Collection.
*/


/*
			 *** Properties ***

			UNIX_OwningCollectionElement:
				OwningElement Reference
				OwnedElement Reference


*/


/*
			 *** Methods ***

			UNIX_OwningCollectionElement:


*/

#ifndef __UNIX_OWNINGCOLLECTIONELEMENT_H
#define __UNIX_OWNINGCOLLECTIONELEMENT_H


#include "CIM_ClassBase.h"

#include "UNIX_OwningCollectionElementDeps.h"


#ifndef PROPERTY_OWNING_ELEMENT
#define PROPERTY_OWNING_ELEMENT \
					"OwningElement"
#endif

#ifndef PROPERTY_OWNED_ELEMENT
#define PROPERTY_OWNED_ELEMENT \
					"OwnedElement"
#endif



class UNIX_OwningCollectionElement :
	public CIM_ClassBase
{
public:

	UNIX_OwningCollectionElement();
	~UNIX_OwningCollectionElement();

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

	virtual Boolean getOwningElement(CIMProperty&) const;
	virtual CIMInstance getOwningElement() const;
	virtual void setOwningElement(CIMInstance&);
	virtual Boolean getOwnedElement(CIMProperty&) const;
	virtual CIMInstance getOwnedElement() const;
	virtual void setOwnedElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _owningElement;
	CIMInstance _ownedElement;

#	include "UNIX_OwningCollectionElementPrivate.h"


};

#endif /* UNIX_OWNINGCOLLECTIONELEMENT */
