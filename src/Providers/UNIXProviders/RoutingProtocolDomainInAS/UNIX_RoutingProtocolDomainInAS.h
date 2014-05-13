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


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::RoutingForwarding
*/


/* **** Description *** */
/*
This assocation connects an AutonomousSystem to the routing domains that it contains.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_SystemComponent:

			UNIX_ContainedDomain:

			UNIX_RoutingProtocolDomainInAS:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_SystemComponent:

			UNIX_ContainedDomain:

			UNIX_RoutingProtocolDomainInAS:


*/

#ifndef __UNIX_ROUTINGPROTOCOLDOMAININAS_H
#define __UNIX_ROUTINGPROTOCOLDOMAININAS_H


#include <ContainedDomain/UNIX_ContainedDomain.h>
#include <AutonomousSystem/UNIX_AutonomousSystemProvider.h>
#include <RoutingProtocolDomain/UNIX_RoutingProtocolDomainProvider.h>

#include "UNIX_RoutingProtocolDomainInASDeps.h"




class UNIX_RoutingProtocolDomainInAS :
	public UNIX_ContainedDomain
{
public:

	UNIX_RoutingProtocolDomainInAS();
	~UNIX_RoutingProtocolDomainInAS();

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

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual void setGroupComponent(CIMInstance&);
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual void setPartComponent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;

	int groupIndex;
	int partIndex;
	UNIX_AutonomousSystem group_UNIX_AutonomousSystem_Component;
	int group_UNIX_AutonomousSystem_Index;
	bool endOf_UNIX_AutonomousSystem_Group;

	UNIX_RoutingProtocolDomain part_UNIX_RoutingProtocolDomain_Component;
	int part_UNIX_RoutingProtocolDomain_Index;
	bool endOf_UNIX_RoutingProtocolDomain_Part;

#	include "UNIX_RoutingProtocolDomainInASPrivate.h"


};

#endif /* UNIX_ROUTINGPROTOCOLDOMAININAS */