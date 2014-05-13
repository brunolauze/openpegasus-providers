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
CIM::Core::Service
*/


/* **** Description *** */
/*
CIM_SAPAvailableForElement conveys the semantics of a Service Access Point that is available for a ManagedElement. When CIM_SAPAvailableForElement is not instantiated, then the SAP is assumed to be generally available. If instantiated, the SAP is available only for the associated ManagedElements. For example, a device might provide management access through a URL. This association allows the URL to be advertised for the device.
*/


/*
			 *** Properties ***

			UNIX_SAPAvailableForElement:
				AvailableSAP Reference
				ManagedElement Reference


*/


/*
			 *** Methods ***

			UNIX_SAPAvailableForElement:


*/

#ifndef __UNIX_SAPAVAILABLEFORELEMENT_H
#define __UNIX_SAPAVAILABLEFORELEMENT_H


#include "CIM_ClassBase.h"

#include "UNIX_SAPAvailableForElementDeps.h"


#ifndef PROPERTY_AVAILABLE_SAP
#define PROPERTY_AVAILABLE_SAP \
					"AvailableSAP"
#endif

#ifndef PROPERTY_MANAGED_ELEMENT
#define PROPERTY_MANAGED_ELEMENT \
					"ManagedElement"
#endif



class UNIX_SAPAvailableForElement :
	public CIM_ClassBase
{
public:

	UNIX_SAPAvailableForElement();
	~UNIX_SAPAvailableForElement();

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

	virtual Boolean getAvailableSAP(CIMProperty&) const;
	virtual CIMInstance getAvailableSAP() const;
	virtual void setAvailableSAP(CIMInstance&);
	virtual Boolean getManagedElement(CIMProperty&) const;
	virtual CIMInstance getManagedElement() const;
	virtual void setManagedElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _availableSAP;
	CIMInstance _managedElement;

#	include "UNIX_SAPAvailableForElementPrivate.h"


};

#endif /* UNIX_SAPAVAILABLEFORELEMENT */
