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
CIM_ServiceAvailableToElement conveys the semantics of a Service that is available for the use of a ManagedElement. An example of an available Service is that a Processor and an enclosure (a PhysicalElement) can use AlertOnLAN Services to signal an incomplete or erroneous boot. In reality, AlertOnLAN is simply a HostedService on a computer system that is generally available for use and is not a dependency of the processor or enclosure. To describe that the use of this service might be restricted or have limited availability or applicability, the CIM_ServiceAvailableToElement association would be instantiated between the Service and specific CIM_Processors and CIM_Chassis.
*/


/*
			 *** Properties ***

			UNIX_ServiceAvailableToElement:
				ServiceProvided Reference
				UserOfService Reference


*/


/*
			 *** Methods ***

			UNIX_ServiceAvailableToElement:


*/

#ifndef __UNIX_SERVICEAVAILABLETOELEMENT_H
#define __UNIX_SERVICEAVAILABLETOELEMENT_H


#include "CIM_ClassBase.h"

#include "UNIX_ServiceAvailableToElementDeps.h"


#ifndef PROPERTY_SERVICE_PROVIDED
#define PROPERTY_SERVICE_PROVIDED \
					"ServiceProvided"
#endif

#ifndef PROPERTY_USER_OF_SERVICE
#define PROPERTY_USER_OF_SERVICE \
					"UserOfService"
#endif



class UNIX_ServiceAvailableToElement :
	public CIM_ClassBase
{
public:

	UNIX_ServiceAvailableToElement();
	~UNIX_ServiceAvailableToElement();

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

	virtual Boolean getServiceProvided(CIMProperty&) const;
	virtual CIMInstance getServiceProvided() const;
	virtual void setServiceProvided(CIMInstance&);
	virtual Boolean getUserOfService(CIMProperty&) const;
	virtual CIMInstance getUserOfService() const;
	virtual void setUserOfService(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _serviceProvided;
	CIMInstance _userOfService;

#	include "UNIX_ServiceAvailableToElementPrivate.h"


};

#endif /* UNIX_SERVICEAVAILABLETOELEMENT */
