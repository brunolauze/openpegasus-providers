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
A ConnectivityCollection groups together a set of ProtocolEndpoints of the same 'type' (i.e., class) which are able to communicate with each other. It may also group related Systems, users or other ManagedElements. A ConnectivityCollection represents the ability to send and/or receive data over a set of ProtocolEndpoints. The collection is defined in the context of an AdminDomain or scoping ComputerSystem. This is mandated by the Hosted Collection association on the SystemSpecificCollection superclass. Note that the entities aggregated into the Collection are specified using the association, MemberOfCollection.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			CIM_SystemSpecificCollection:

			CIM_ConnectivityCollection:
				ConnectivityStatus UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			CIM_ConnectivityCollection:


*/

#ifndef __CIM_CONNECTIVITYCOLLECTION_H
#define __CIM_CONNECTIVITYCOLLECTION_H


#include "CIM_SystemSpecificCollection.h"


#ifndef PROPERTY_CONNECTIVITY_STATUS
#define PROPERTY_CONNECTIVITY_STATUS \
					"ConnectivityStatus"
#endif



class CIM_ConnectivityCollection :
	public CIM_SystemSpecificCollection
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getConnectivityStatus(CIMProperty&) const=0;
	virtual Uint16 getConnectivityStatus() const=0;
	virtual void setConnectivityStatus(Uint16&)=0;


private:

};

#endif /* CIM_CONNECTIVITYCOLLECTION */
