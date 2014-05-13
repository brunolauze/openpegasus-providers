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
CIM::Core::Collection
*/


/* **** Description *** */
/*
HostedCollection defines a SystemSpecificCollection in the context of a scoping System. It represents a Collection that has meaning only in the context of a System, a Collection whose elements are restricted by the definition of the System, or both of these types of Collections.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			UNIX_HostedCollection:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			UNIX_HostedCollection:


*/

#ifndef __UNIX_HOSTEDCOLLECTION_H
#define __UNIX_HOSTEDCOLLECTION_H


#include "CIM_HostedDependency.h"
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <StatisticsCollection/UNIX_StatisticsCollectionProvider.h>
#include <QueryStatisticsCollection/UNIX_QueryStatisticsCollectionProvider.h>
#include <TargetPortGroup/UNIX_TargetPortGroupProvider.h>
#include <Zone/UNIX_ZoneProvider.h>
#include <ZoneSet/UNIX_ZoneSetProvider.h>
#include <LANConnectivitySegment/UNIX_LANConnectivitySegmentProvider.h>
#include <IPXConnectivityNetwork/UNIX_IPXConnectivityNetworkProvider.h>
#include <OSPFLink/UNIX_OSPFLinkProvider.h>
#include <NetworkVLAN/UNIX_NetworkVLANProvider.h>
#include <IPConnectivitySubnet/UNIX_IPConnectivitySubnetProvider.h>
#include <DeviceConnectivityCollection/UNIX_DeviceConnectivityCollectionProvider.h>
#include <RemoteReplicationCollection/UNIX_RemoteReplicationCollectionProvider.h>
#include <StorageTier/UNIX_StorageTierProvider.h>
#include <FileSystemStatisticsManifestCollection/UNIX_FileSystemStatisticsManifestCollectionProvider.h>
#include <LogicalPortGroup/UNIX_LogicalPortGroupProvider.h>
#include <PCIPortGroup/UNIX_PCIPortGroupProvider.h>
#include <SCSITargetPortGroup/UNIX_SCSITargetPortGroupProvider.h>
#include <VirtualRoutingAndForwardingTable/UNIX_VirtualRoutingAndForwardingTableProvider.h>
#include <StorageResourceLoadGroup/UNIX_StorageResourceLoadGroupProvider.h>
#include <InitiatorMaskingGroup/UNIX_InitiatorMaskingGroupProvider.h>
#include <TargetMaskingGroup/UNIX_TargetMaskingGroupProvider.h>
#include <DeviceMaskingGroup/UNIX_DeviceMaskingGroupProvider.h>
#include <FailoverStorageExtentsCollection/UNIX_FailoverStorageExtentsCollectionProvider.h>
#include <PolicyRoleCollection/UNIX_PolicyRoleCollectionProvider.h>
#include <BlockStatisticsManifestCollection/UNIX_BlockStatisticsManifestCollectionProvider.h>
#include <RedundancySet/UNIX_RedundancySetProvider.h>
#include <StorageRedundancySet/UNIX_StorageRedundancySetProvider.h>
#include <RangeOfIPAddresses/UNIX_RangeOfIPAddressesProvider.h>
#include <NamedAddressCollection/UNIX_NamedAddressCollectionProvider.h>
#include <ReplicationGroup/UNIX_ReplicationGroupProvider.h>

#include "UNIX_HostedCollectionDeps.h"




class UNIX_HostedCollection :
	public CIM_HostedDependency
{
public:

	UNIX_HostedCollection();
	~UNIX_HostedCollection();

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

UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;

UNIX_StatisticsCollection _dependentStatisticsCollection;
UNIX_StatisticsCollectionProvider _dependentStatisticsCollectionProvider;
UNIX_QueryStatisticsCollection _dependentQueryStatisticsCollection;
UNIX_QueryStatisticsCollectionProvider _dependentQueryStatisticsCollectionProvider;
UNIX_TargetPortGroup _dependentTargetPortGroup;
UNIX_TargetPortGroupProvider _dependentTargetPortGroupProvider;
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
UNIX_StorageTier _dependentStorageTier;
UNIX_StorageTierProvider _dependentStorageTierProvider;
UNIX_FileSystemStatisticsManifestCollection _dependentFileSystemStatisticsManifestCollection;
UNIX_FileSystemStatisticsManifestCollectionProvider _dependentFileSystemStatisticsManifestCollectionProvider;
UNIX_LogicalPortGroup _dependentLogicalPortGroup;
UNIX_LogicalPortGroupProvider _dependentLogicalPortGroupProvider;
UNIX_PCIPortGroup _dependentPCIPortGroup;
UNIX_PCIPortGroupProvider _dependentPCIPortGroupProvider;
UNIX_SCSITargetPortGroup _dependentSCSITargetPortGroup;
UNIX_SCSITargetPortGroupProvider _dependentSCSITargetPortGroupProvider;
UNIX_VirtualRoutingAndForwardingTable _dependentVirtualRoutingAndForwardingTable;
UNIX_VirtualRoutingAndForwardingTableProvider _dependentVirtualRoutingAndForwardingTableProvider;
UNIX_StorageResourceLoadGroup _dependentStorageResourceLoadGroup;
UNIX_StorageResourceLoadGroupProvider _dependentStorageResourceLoadGroupProvider;
UNIX_InitiatorMaskingGroup _dependentInitiatorMaskingGroup;
UNIX_InitiatorMaskingGroupProvider _dependentInitiatorMaskingGroupProvider;
UNIX_TargetMaskingGroup _dependentTargetMaskingGroup;
UNIX_TargetMaskingGroupProvider _dependentTargetMaskingGroupProvider;
UNIX_DeviceMaskingGroup _dependentDeviceMaskingGroup;
UNIX_DeviceMaskingGroupProvider _dependentDeviceMaskingGroupProvider;
UNIX_FailoverStorageExtentsCollection _dependentFailoverStorageExtentsCollection;
UNIX_FailoverStorageExtentsCollectionProvider _dependentFailoverStorageExtentsCollectionProvider;
UNIX_PolicyRoleCollection _dependentPolicyRoleCollection;
UNIX_PolicyRoleCollectionProvider _dependentPolicyRoleCollectionProvider;
UNIX_BlockStatisticsManifestCollection _dependentBlockStatisticsManifestCollection;
UNIX_BlockStatisticsManifestCollectionProvider _dependentBlockStatisticsManifestCollectionProvider;
UNIX_RedundancySet _dependentRedundancySet;
UNIX_RedundancySetProvider _dependentRedundancySetProvider;
UNIX_StorageRedundancySet _dependentStorageRedundancySet;
UNIX_StorageRedundancySetProvider _dependentStorageRedundancySetProvider;
UNIX_RangeOfIPAddresses _dependentRangeOfIPAddresses;
UNIX_RangeOfIPAddressesProvider _dependentRangeOfIPAddressesProvider;
UNIX_NamedAddressCollection _dependentNamedAddressCollection;
UNIX_NamedAddressCollectionProvider _dependentNamedAddressCollectionProvider;
UNIX_ReplicationGroup _dependentReplicationGroup;
UNIX_ReplicationGroupProvider _dependentReplicationGroupProvider;

#	include "UNIX_HostedCollectionPrivate.h"


};

#endif /* UNIX_HOSTEDCOLLECTION */
