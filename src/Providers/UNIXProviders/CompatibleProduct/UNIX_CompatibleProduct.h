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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::ProductFRU
*/


/* **** Description *** */
/*
CIM_CompatibleProduct is an association between Products that can indicate a wide variety of information. For example, it can indicate that the two referenced Products interoperate, that they can be installed together, that one can be the physical container for the other, etc. The string property, CompatibilityDescription, defines how the Products interoperate or are compatible, any limitations regarding interoperability or installation, ...
*/


/*
			 *** Properties ***

			UNIX_CompatibleProduct:
				Product Reference
				CompatibleProduct Reference
				CompatibilityDescription String


*/


/*
			 *** Methods ***

			UNIX_CompatibleProduct:


*/

#ifndef __UNIX_COMPATIBLEPRODUCT_H
#define __UNIX_COMPATIBLEPRODUCT_H


#include "CIM_ClassBase.h"

#include "UNIX_CompatibleProductDeps.h"


#ifndef PROPERTY_PRODUCT
#define PROPERTY_PRODUCT \
					"Product"
#endif

#ifndef PROPERTY_COMPATIBLE_PRODUCT
#define PROPERTY_COMPATIBLE_PRODUCT \
					"CompatibleProduct"
#endif

#ifndef PROPERTY_COMPATIBILITY_DESCRIPTION
#define PROPERTY_COMPATIBILITY_DESCRIPTION \
					"CompatibilityDescription"
#endif



class UNIX_CompatibleProduct :
	public CIM_ClassBase
{
public:

	UNIX_CompatibleProduct();
	~UNIX_CompatibleProduct();

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
	virtual Boolean getCompatibleProduct(CIMProperty&) const;
	virtual CIMInstance getCompatibleProduct() const;
	virtual void setCompatibleProduct(CIMInstance&);
	virtual Boolean getCompatibilityDescription(CIMProperty&) const;
	virtual String getCompatibilityDescription() const;
	virtual void setCompatibilityDescription(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _product;
	CIMInstance _compatibleProduct;
	String _compatibilityDescription;

#	include "UNIX_CompatibleProductPrivate.h"


};

#endif /* UNIX_COMPATIBLEPRODUCT */
