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
CIM_HostedCollection
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Collections
*/


/* **** Description *** */
/*
This association is used to define the set of Logical Networks contained in an AdminDomain. This has the implied semantics that this set of LogicalNetworks are all managed by the same network administrator that manages the domain. 

Since the LogicalNetwork class is deprecated in lieu of ConnectivityCollection, this association is no longer necessary. It is deprecated to the HostedCollection association, that is inherited by ConnectivityCollection from its superclass, SystemSpecificCollection.
*/


/*
			 *** Properties ***

			UNIX_NetworksInAdminDomain:
				Domain Reference
				Network Reference


*/


/*
			 *** Methods ***

			UNIX_NetworksInAdminDomain:


*/

#ifndef __UNIX_NETWORKSINADMINDOMAIN_H
#define __UNIX_NETWORKSINADMINDOMAIN_H


#include "CIM_ClassBase.h"

#include "UNIX_NetworksInAdminDomainDeps.h"


#ifndef PROPERTY_DOMAIN
#define PROPERTY_DOMAIN \
					"Domain"
#endif

#ifndef PROPERTY_NETWORK
#define PROPERTY_NETWORK \
					"Network"
#endif



class UNIX_NetworksInAdminDomain :
	public CIM_ClassBase
{
public:

	UNIX_NetworksInAdminDomain();
	~UNIX_NetworksInAdminDomain();

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

	virtual Boolean getDomain(CIMProperty&) const;
	virtual CIMInstance getDomain() const;
	virtual void setDomain(CIMInstance&);
	virtual Boolean getNetwork(CIMProperty&) const;
	virtual CIMInstance getNetwork() const;
	virtual void setNetwork(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _domain;
	CIMInstance _network;

#	include "UNIX_NetworksInAdminDomainPrivate.h"


};

#endif /* UNIX_NETWORKSINADMINDOMAIN */
