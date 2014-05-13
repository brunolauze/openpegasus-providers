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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Topology
*/


/* **** Description *** */
/*
RelatedTopologyGraph associates a TopologyGraph instance with a ConnectivityCollection. This relationship is different from a topology graph collecting ConnectivityCollections. It describes the embedding of a lower layer topology within a ConnectivityCollection. For example, a layer 3 IP subnet (represented by an instance of IPConnectivitySubnet) collects a set of IPProtocolEndpoints. It might also be associated with a TopologyGraph describing the layer 2 switched Ethernet topology over which the IP subnet runs. This association of Layer 3 to Layer 2 is described as a Dependency relationship, where the Layer 3 connectivity is dependent on the Layer 2 topology.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_RelatedTopologyGraph:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_RelatedTopologyGraph:


*/

#ifndef __UNIX_RELATEDTOPOLOGYGRAPH_H
#define __UNIX_RELATEDTOPOLOGYGRAPH_H


#include "CIM_Dependency.h"
#include <TopologyGraph/UNIX_TopologyGraphProvider.h>
#include <Zone/UNIX_ZoneProvider.h>
#include <ZoneSet/UNIX_ZoneSetProvider.h>
#include <LANConnectivitySegment/UNIX_LANConnectivitySegmentProvider.h>
#include <IPXConnectivityNetwork/UNIX_IPXConnectivityNetworkProvider.h>
#include <OSPFLink/UNIX_OSPFLinkProvider.h>
#include <NetworkVLAN/UNIX_NetworkVLANProvider.h>
#include <IPConnectivitySubnet/UNIX_IPConnectivitySubnetProvider.h>
#include <DeviceConnectivityCollection/UNIX_DeviceConnectivityCollectionProvider.h>
#include <RemoteReplicationCollection/UNIX_RemoteReplicationCollectionProvider.h>

#include "UNIX_RelatedTopologyGraphDeps.h"




class UNIX_RelatedTopologyGraph :
	public CIM_Dependency
{
public:

	UNIX_RelatedTopologyGraph();
	~UNIX_RelatedTopologyGraph();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_TopologyGraph _antecedentTopologyGraph;
UNIX_TopologyGraphProvider _antecedentTopologyGraphProvider;

UNIX_Zone _dependentZone;
UNIX_ZoneProvider _dependentZoneProvider;
UNIX_ZoneSet _dependentZoneSet;
UNIX_ZoneSetProvider _dependentZoneSetProvider;
UNIX_LANConnectivitySegment _dependentLANConnectivitySegment;
UNIX_LANConnectivitySegmentProvider _dependentLANConnectivitySegmentProvider;
UNIX_IPXConnectivityNetwork _dependentIPXConnectivityNetwork;
UNIX_IPXConnectivityNetworkProvider _dependentIPXConnectivityNetworkProvider;
UNIX_OSPFLink _dependentOSPFLink;
UNIX_OSPFLinkProvider _dependentOSPFLinkProvider;
UNIX_NetworkVLAN _dependentNetworkVLAN;
UNIX_NetworkVLANProvider _dependentNetworkVLANProvider;
UNIX_IPConnectivitySubnet _dependentIPConnectivitySubnet;
UNIX_IPConnectivitySubnetProvider _dependentIPConnectivitySubnetProvider;
UNIX_DeviceConnectivityCollection _dependentDeviceConnectivityCollection;
UNIX_DeviceConnectivityCollectionProvider _dependentDeviceConnectivityCollectionProvider;
UNIX_RemoteReplicationCollection _dependentRemoteReplicationCollection;
UNIX_RemoteReplicationCollectionProvider _dependentRemoteReplicationCollectionProvider;

#	include "UNIX_RelatedTopologyGraphPrivate.h"


};

#endif /* UNIX_RELATEDTOPOLOGYGRAPH */
