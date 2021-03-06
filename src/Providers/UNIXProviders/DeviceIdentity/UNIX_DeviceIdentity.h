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
CIM::Device::DeviceElements
*/


/* **** Description *** */
/*
CIM_DeviceIdentity indicates that two LogicalDevices represent different aspects of the same underlying entity. This association refines the CIM_LogicalIdentity superclass by restricting it to the Device level and defining its use in well understood scenarios. One of these scenarios is to represent that a Device is both a 'bus' entity and a 'functional' entity. For example, a Device could be both a PCI Device (or a USB Device), as well as a CIM_Keyboard. The other scenario is where a Device plays multiple functional roles that can not be distinguished by their hardware realization alone. For example, a Fibre Channel adapter might have aspects of both a NetworkAdapter and a SCSIController.
*/


/*
			 *** Properties ***

			CIM_LogicalIdentity:
				SystemElement Reference
				SameElement Reference

			UNIX_DeviceIdentity:


*/


/*
			 *** Methods ***

			CIM_LogicalIdentity:

			UNIX_DeviceIdentity:


*/

#ifndef __UNIX_DEVICEIDENTITY_H
#define __UNIX_DEVICEIDENTITY_H


#include "CIM_LogicalIdentity.h"

#include "UNIX_DeviceIdentityDeps.h"




class UNIX_DeviceIdentity :
	public CIM_LogicalIdentity
{
public:

	UNIX_DeviceIdentity();
	~UNIX_DeviceIdentity();

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

#	include "UNIX_DeviceIdentityPrivate.h"


};

#endif /* UNIX_DEVICEIDENTITY */
