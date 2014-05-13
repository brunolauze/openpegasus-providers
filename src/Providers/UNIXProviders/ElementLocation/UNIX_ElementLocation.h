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
CIM::Core::Physical
*/


/* **** Description *** */
/*
ElementLocation associates a ManagedElement with a location for positioning, inventory, maintenance and similar purposes. PhysicalElements can certainly have locations. They are explicitly defined in a subclass, PhysicalElement Location. However, other ManagedElements can also be associated with locations. For example, Organizations can be 'in' one or more locations, or Services can be restricted to a location.
*/


/*
			 *** Properties ***

			UNIX_ElementLocation:
				Element Reference
				PhysicalLocation Reference


*/


/*
			 *** Methods ***

			UNIX_ElementLocation:


*/

#ifndef __UNIX_ELEMENTLOCATION_H
#define __UNIX_ELEMENTLOCATION_H


#include "CIM_ClassBase.h"

#include "UNIX_ElementLocationDeps.h"


#ifndef PROPERTY_ELEMENT
#define PROPERTY_ELEMENT \
					"Element"
#endif

#ifndef PROPERTY_PHYSICAL_LOCATION
#define PROPERTY_PHYSICAL_LOCATION \
					"PhysicalLocation"
#endif



class UNIX_ElementLocation :
	public CIM_ClassBase
{
public:

	UNIX_ElementLocation();
	~UNIX_ElementLocation();

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

	virtual Boolean getElement(CIMProperty&) const;
	virtual CIMInstance getElement() const;
	virtual void setElement(CIMInstance&);
	virtual Boolean getPhysicalLocation(CIMProperty&) const;
	virtual CIMInstance getPhysicalLocation() const;
	virtual void setPhysicalLocation(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _element;
	CIMInstance _physicalLocation;

#	include "UNIX_ElementLocationPrivate.h"


};

#endif /* UNIX_ELEMENTLOCATION */
