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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Topology
*/


/* **** Description *** */
/*
TopologyGraph is a general structure for representing network topologies. Often, a topology graph consists of a set of nodes and a set of edges which connect the nodes. The TopologyGraph structure is slightly different, in order to support multipoint links and to express the connectivity within what would normally be considered a 'node'. Multipoint links occur in entities such as IP subnets, where all of the IP endpoints on the subnet can communicate directly, and Ethernet links where all of the Ethernet interfaces on the shared media can communicate directly. An example of connectivity within a node is when the various endpoints/interfaces on a router are connected through the router's forwarding mechanism. There may be different groups of endpoints which communicate within their groups exclusively. This is modeled as a DeviceConnectivityCollection. 

To represent these examples in a graph structure, TopologyGraph generalizes the node and edge structures of a typical graph. It is a collection of ConnectivityCollections, which can communicate with one another, and are at the same protocol layer. ConnectivityCollections are aggregated into Topology Graphs using the MemberOfCollection relationship. 

The actual network topology encoded in TopologyGraph is extracted by connecting the ConnectivityCollection instances that share common ProtocolEndpoint instances. For example, if the graph contains three collections, defined as: 
- Router1={PE1, PE2}, a DeviceConnectivityCollection 
- Link1={PE2, PE3}, an IPConnectivitySubnet 
- Router2={PE3, PE4}, a DeviceConnectivityCollection 
then we can determine that the PE2 interface on Router1 is connected to the PE3 interface on Router2 via the subnet Link1. By finding all of the endpoints that are in multiple ConnectivityCollections within the graph, and connecting those Collections with common endpoints, we can construct the network topology.
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

			UNIX_TopologyGraph:


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			UNIX_TopologyGraph:


*/

#ifndef __UNIX_TOPOLOGYGRAPH_H
#define __UNIX_TOPOLOGYGRAPH_H


#include "CIM_Collection.h"

#include "UNIX_TopologyGraphDeps.h"




class UNIX_TopologyGraph :
	public CIM_Collection
{
public:

	UNIX_TopologyGraph();
	~UNIX_TopologyGraph();

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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;

#	include "UNIX_TopologyGraphPrivate.h"


};

#endif /* UNIX_TOPOLOGYGRAPH */
