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
CIM::Network::OSPF
*/


/* **** Description *** */
/*
This association connects an OSPFLink to the OSPFProtocol Endpoints that this link aggregates.
*/


/*
			 *** Properties ***

			CIM_MemberOfCollection:
				Collection Reference
				Member Reference

			UNIX_EndpointInLink:


*/


/*
			 *** Methods ***

			CIM_MemberOfCollection:

			UNIX_EndpointInLink:


*/

#ifndef __UNIX_ENDPOINTINLINK_H
#define __UNIX_ENDPOINTINLINK_H


#include "CIM_MemberOfCollection.h"

#include "UNIX_EndpointInLinkDeps.h"




class UNIX_EndpointInLink :
	public CIM_MemberOfCollection
{
public:

	UNIX_EndpointInLink();
	~UNIX_EndpointInLink();

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

#	include "UNIX_EndpointInLinkPrivate.h"


};

#endif /* UNIX_ENDPOINTINLINK */
