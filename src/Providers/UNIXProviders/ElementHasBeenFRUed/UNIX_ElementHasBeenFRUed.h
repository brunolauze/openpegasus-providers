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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Physical
*/


/* **** Description *** */
/*
CIM_ElementHasBeenFRUed is an association between two Physical Elements that indicates that the entity referenced as the ReplacedElement was swapped for or replaced by the entity referenced as the ReplacementElement. The association is many to many, conveying that an element might require several other elements to replace it, and vice-versa. The typical scenario, however, is that one PhysicalElement replaces another. It might not be possible to instrument or manually determine that an element actually replaced (FRUed) another. This determination is especially difficult if the original element is discarded. However, if this information is available, then this association describes this scenario.
*/


/*
			 *** Properties ***

			UNIX_ElementHasBeenFRUed:
				ReplacedElement Reference
				ReplacementElement Reference


*/


/*
			 *** Methods ***

			UNIX_ElementHasBeenFRUed:


*/

#ifndef __UNIX_ELEMENTHASBEENFRUED_H
#define __UNIX_ELEMENTHASBEENFRUED_H


#include "CIM_ClassBase.h"

#include "UNIX_ElementHasBeenFRUedDeps.h"


#ifndef PROPERTY_REPLACED_ELEMENT
#define PROPERTY_REPLACED_ELEMENT \
					"ReplacedElement"
#endif

#ifndef PROPERTY_REPLACEMENT_ELEMENT
#define PROPERTY_REPLACEMENT_ELEMENT \
					"ReplacementElement"
#endif



class UNIX_ElementHasBeenFRUed :
	public CIM_ClassBase
{
public:

	UNIX_ElementHasBeenFRUed();
	~UNIX_ElementHasBeenFRUed();

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

	virtual Boolean getReplacedElement(CIMProperty&) const;
	virtual CIMInstance getReplacedElement() const;
	virtual void setReplacedElement(CIMInstance&);
	virtual Boolean getReplacementElement(CIMProperty&) const;
	virtual CIMInstance getReplacementElement() const;
	virtual void setReplacementElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _replacedElement;
	CIMInstance _replacementElement;

#	include "UNIX_ElementHasBeenFRUedPrivate.h"


};

#endif /* UNIX_ELEMENTHASBEENFRUED */
