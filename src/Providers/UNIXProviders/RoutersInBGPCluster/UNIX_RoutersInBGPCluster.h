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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::BGP
*/


/* **** Description *** */
/*
This aggregation establishes the routers (ComputerSystems) in a BGPCluster. At least three routers are required to form a cluster - a reflector and two clients. The routers that form a cluster share common configuration information.
*/


/*
			 *** Properties ***

			CIM_MemberOfCollection:
				Collection Reference
				Member Reference

			CIM_CollectedMSEs:

			UNIX_RoutersInBGPCluster:


*/


/*
			 *** Methods ***

			CIM_MemberOfCollection:

			CIM_CollectedMSEs:

			UNIX_RoutersInBGPCluster:


*/

#ifndef __UNIX_ROUTERSINBGPCLUSTER_H
#define __UNIX_ROUTERSINBGPCLUSTER_H


#include "CIM_CollectedMSEs.h"

#include "UNIX_RoutersInBGPClusterDeps.h"




class UNIX_RoutersInBGPCluster :
	public CIM_CollectedMSEs
{
public:

	UNIX_RoutersInBGPCluster();
	~UNIX_RoutersInBGPCluster();

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

	virtual Boolean getCollection(CIMProperty&) const;
	virtual CIMInstance getCollection() const;
	virtual void setCollection(CIMInstance&);
	virtual Boolean getMember(CIMProperty&) const;
	virtual CIMInstance getMember() const;
	virtual void setMember(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _collection;
	CIMInstance _member;

#	include "UNIX_RoutersInBGPClusterPrivate.h"


};

#endif /* UNIX_ROUTERSINBGPCLUSTER */
