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
CIM_ElementFRU
*/


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::ProductFRU
*/


/* **** Description *** */
/*
ReplaceableProductFRU is an association between Product and FRU that shows what Product components may be replaced. The association is one to many, conveying that a Product can have many FRUs, and that a particular instance of a FRU is only applied to one (instance of a) Product. 
The use of this association has been deprecated since the concept of FRUing really applies to hardware (PhysicalElements) and not to Products, and the granularity of a Product may be insufficient. Now, the replacement FRU information is included in CIM_ReplacementFRU, and tied to the PhysicalElement via the association, ElementFRU.
*/


/*
			 *** Properties ***

			UNIX_ReplaceableProductFRU:
				Product Reference
				FRU Reference


*/


/*
			 *** Methods ***

			UNIX_ReplaceableProductFRU:


*/

#ifndef __UNIX_REPLACEABLEPRODUCTFRU_H
#define __UNIX_REPLACEABLEPRODUCTFRU_H


#include "CIM_ClassBase.h"

#include "UNIX_ReplaceableProductFRUDeps.h"


#ifndef PROPERTY_PRODUCT
#define PROPERTY_PRODUCT \
					"Product"
#endif

#ifndef PROPERTY_F_R_U
#define PROPERTY_F_R_U \
					"FRU"
#endif



class UNIX_ReplaceableProductFRU :
	public CIM_ClassBase
{
public:

	UNIX_ReplaceableProductFRU();
	~UNIX_ReplaceableProductFRU();

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
	virtual Boolean getFRU(CIMProperty&) const;
	virtual CIMInstance getFRU() const;
	virtual void setFRU(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _product;
	CIMInstance _fRU;

#	include "UNIX_ReplaceableProductFRUPrivate.h"


};

#endif /* UNIX_REPLACEABLEPRODUCTFRU */
