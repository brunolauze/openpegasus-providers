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
2.18.0
*/


/* **** ClassConstraint *** */
/*
inv:self.Dependent.oclIsKindOf(CIM_TargetPortGroup) or self.Dependent.oclIsKindOf(CIM_StorageResourceLoadGroup)
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Dependency
*/


/* **** Description *** */
/*
StorageProcessorAffinity indicates a processing affinity and state between a TargetPortGroup or StorageResourceLoadGroup and a ComputerSystem representing a storage processor in a redundant storage server. The processor can host the group in either a healthy or failover state. Instances of this association are static, one for each combination of StorageResourceLoadGroup and ComputerSystem in the RedundancySet.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_StorageProcessorAffinity:
				IsPrimary Boolean
				IsActive Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_StorageProcessorAffinity:


*/

#ifndef __UNIX_STORAGEPROCESSORAFFINITY_H
#define __UNIX_STORAGEPROCESSORAFFINITY_H


#include "CIM_Dependency.h"
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <TopologyGraph/UNIX_TopologyGraphProvider.h>
#include <ConcreteCollection/UNIX_ConcreteCollectionProvider.h>
#include <StatusCollection/UNIX_StatusCollectionProvider.h>
#include <IPXNetwork/UNIX_IPXNetworkProvider.h>
#include <LANSegment/UNIX_LANSegmentProvider.h>
#include <IPSubnet/UNIX_IPSubnetProvider.h>
#include <BGPPeerGroup/UNIX_BGPPeerGroupProvider.h>
#include <BufferPool/UNIX_BufferPoolProvider.h>
#include <MPLSBuffers/UNIX_MPLSBuffersProvider.h>
#include <IPAddressRange/UNIX_IPAddressRangeProvider.h>
#include <BGPCluster/UNIX_BGPClusterProvider.h>
#include <DiskGroup/UNIX_DiskGroupProvider.h>
#include <Role/UNIX_RoleProvider.h>
#include <ReplacementSet/UNIX_ReplacementSetProvider.h>
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
#include <InstalledProduct/UNIX_InstalledProductProvider.h>
#include <CredentialStore/UNIX_CredentialStoreProvider.h>
#include <Keystore/UNIX_KeystoreProvider.h>
#include <FilterCollection/UNIX_FilterCollectionProvider.h>
#include <Group/UNIX_GroupProvider.h>
#include <Profile/UNIX_ProfileProvider.h>
#include <BatchJobGroup/UNIX_BatchJobGroupProvider.h>

#include "UNIX_StorageProcessorAffinityDeps.h"


#ifndef PROPERTY_IS_PRIMARY
#define PROPERTY_IS_PRIMARY \
					"IsPrimary"
#endif

#ifndef PROPERTY_IS_ACTIVE
#define PROPERTY_IS_ACTIVE \
					"IsActive"
#endif



class UNIX_StorageProcessorAffinity :
	public CIM_Dependency
{
public:

	UNIX_StorageProcessorAffinity();
	~UNIX_StorageProcessorAffinity();

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
	virtual Boolean getIsPrimary(CIMProperty&) const;
	virtual Boolean getIsPrimary() const;
	virtual void setIsPrimary(Boolean&);
	virtual Boolean getIsActive(CIMProperty&) const;
	virtual Boolean getIsActive() const;
	virtual void setIsActive(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Boolean _isPrimary;
	Boolean _isActive;

UNIX_VirtualComputerSystem _antecedentVirtualComputerSystem;
UNIX_VirtualComputerSystemProvider _antecedentVirtualComputerSystemProvider;
UNIX_Cluster _antecedentCluster;
UNIX_ClusterProvider _antecedentClusterProvider;
UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;

UNIX_TopologyGraph _dependentTopologyGraph;
UNIX_TopologyGraphProvider _dependentTopologyGraphProvider;
UNIX_ConcreteCollection _dependentConcreteCollection;
UNIX_ConcreteCollectionProvider _dependentConcreteCollectionProvider;
UNIX_StatusCollection _dependentStatusCollection;
UNIX_StatusCollectionProvider _dependentStatusCollectionProvider;
UNIX_IPXNetwork _dependentIPXNetwork;
UNIX_IPXNetworkProvider _dependentIPXNetworkProvider;
UNIX_LANSegment _dependentLANSegment;
UNIX_LANSegmentProvider _dependentLANSegmentProvider;
UNIX_IPSubnet _dependentIPSubnet;
UNIX_IPSubnetProvider _dependentIPSubnetProvider;
UNIX_BGPPeerGroup _dependentBGPPeerGroup;
UNIX_BGPPeerGroupProvider _dependentBGPPeerGroupProvider;
UNIX_BufferPool _dependentBufferPool;
UNIX_BufferPoolProvider _dependentBufferPoolProvider;
UNIX_MPLSBuffers _dependentMPLSBuffers;
UNIX_MPLSBuffersProvider _dependentMPLSBuffersProvider;
UNIX_IPAddressRange _dependentIPAddressRange;
UNIX_IPAddressRangeProvider _dependentIPAddressRangeProvider;
UNIX_BGPCluster _dependentBGPCluster;
UNIX_BGPClusterProvider _dependentBGPClusterProvider;
UNIX_DiskGroup _dependentDiskGroup;
UNIX_DiskGroupProvider _dependentDiskGroupProvider;
UNIX_Role _dependentRole;
UNIX_RoleProvider _dependentRoleProvider;
UNIX_ReplacementSet _dependentReplacementSet;
UNIX_ReplacementSetProvider _dependentReplacementSetProvider;
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
UNIX_InstalledProduct _dependentInstalledProduct;
UNIX_InstalledProductProvider _dependentInstalledProductProvider;
UNIX_CredentialStore _dependentCredentialStore;
UNIX_CredentialStoreProvider _dependentCredentialStoreProvider;
UNIX_Keystore _dependentKeystore;
UNIX_KeystoreProvider _dependentKeystoreProvider;
UNIX_FilterCollection _dependentFilterCollection;
UNIX_FilterCollectionProvider _dependentFilterCollectionProvider;
UNIX_Group _dependentGroup;
UNIX_GroupProvider _dependentGroupProvider;
UNIX_Profile _dependentProfile;
UNIX_ProfileProvider _dependentProfileProvider;
UNIX_BatchJobGroup _dependentBatchJobGroup;
UNIX_BatchJobGroupProvider _dependentBatchJobGroupProvider;

#	include "UNIX_StorageProcessorAffinityPrivate.h"


};

#endif /* UNIX_STORAGEPROCESSORAFFINITY */
