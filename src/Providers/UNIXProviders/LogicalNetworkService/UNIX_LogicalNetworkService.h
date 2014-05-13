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
No value
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
A LogicalNetworkService represents network services that either originate and/or terminate in a LogicalNetwork. This association is deprecated since LogicalNetworks aggregate ProtocolEndpoints, not their backing Services.
*/


/*
			 *** Properties ***

			UNIX_LogicalNetworkService:
				Network Reference
				NetworkService Reference
				ContainmentType UInt16


*/


/*
			 *** Methods ***

			UNIX_LogicalNetworkService:


*/

#ifndef __UNIX_LOGICALNETWORKSERVICE_H
#define __UNIX_LOGICALNETWORKSERVICE_H


#include "CIM_ClassBase.h"

#include "UNIX_LogicalNetworkServiceDeps.h"


#ifndef PROPERTY_NETWORK
#define PROPERTY_NETWORK \
					"Network"
#endif

#ifndef PROPERTY_NETWORK_SERVICE
#define PROPERTY_NETWORK_SERVICE \
					"NetworkService"
#endif

#ifndef PROPERTY_CONTAINMENT_TYPE
#define PROPERTY_CONTAINMENT_TYPE \
					"ContainmentType"
#endif



class UNIX_LogicalNetworkService :
	public CIM_ClassBase
{
public:

	UNIX_LogicalNetworkService();
	~UNIX_LogicalNetworkService();

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

	virtual Boolean getNetwork(CIMProperty&) const;
	virtual CIMInstance getNetwork() const;
	virtual void setNetwork(CIMInstance&);
	virtual Boolean getNetworkService(CIMProperty&) const;
	virtual CIMInstance getNetworkService() const;
	virtual void setNetworkService(CIMInstance&);
	virtual Boolean getContainmentType(CIMProperty&) const;
	virtual Uint16 getContainmentType() const;
	virtual void setContainmentType(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _network;
	CIMInstance _networkService;
	Uint16 _containmentType;

#	include "UNIX_LogicalNetworkServicePrivate.h"


};

#endif /* UNIX_LOGICALNETWORKSERVICE */
