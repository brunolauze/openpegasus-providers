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


/* **** Deprecated *** */
/*
CIM_ProductPhysicalComponent
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
Indicates the PhysicalElement(s) that make up a Product. This association is deprecated in order to correctly place it in the inheritance hierarchy and align the definition with other new classes that are being added to the model, such as CIM_ProductServiceComponent. ProductPhysicalElements was defined in the original CIM V2.0 release, when a Managed Element and a Component relationship between ManagedElements did not exist.
*/


/*
			 *** Properties ***

			UNIX_ProductPhysicalElements:
				Product Reference
				Component Reference


*/


/*
			 *** Methods ***

			UNIX_ProductPhysicalElements:


*/

#ifndef __UNIX_PRODUCTPHYSICALELEMENTS_H
#define __UNIX_PRODUCTPHYSICALELEMENTS_H


#include "CIM_ClassBase.h"

#include "UNIX_ProductPhysicalElementsDeps.h"


#ifndef PROPERTY_PRODUCT
#define PROPERTY_PRODUCT \
					"Product"
#endif

#ifndef PROPERTY_COMPONENT
#define PROPERTY_COMPONENT \
					"Component"
#endif



class UNIX_ProductPhysicalElements :
	public CIM_ClassBase
{
public:

	UNIX_ProductPhysicalElements();
	~UNIX_ProductPhysicalElements();

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

	virtual Boolean getProduct(CIMProperty&) const;
	virtual CIMInstance getProduct() const;
	virtual void setProduct(CIMInstance&);
	virtual Boolean getComponent(CIMProperty&) const;
	virtual CIMInstance getComponent() const;
	virtual void setComponent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _product;
	CIMInstance _component;

#	include "UNIX_ProductPhysicalElementsPrivate.h"


};

#endif /* UNIX_PRODUCTPHYSICALELEMENTS */
