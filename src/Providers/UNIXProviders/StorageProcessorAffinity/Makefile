#//%LICENSE////////////////////////////////////////////////////////////////
#//
#// Licensed to The Open Group (TOG) under one or more contributor license
#// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
#// this work for additional information regarding copyright ownership.
#// Each contributor licenses this file to you under the OpenPegasus Open
#// Source License; you may not use this file except in compliance with the
#// License.
#//
#// Permission is hereby granted, free of charge, to any person obtaining a
#// copy of this software and associated documentation files (the "Software"),
#// to deal in the Software without restriction, including without limitation
#// the rights to use, copy, modify, merge, publish, distribute, sublicense,
#// and/or sell copies of the Software, and to permit persons to whom the
#// Software is furnished to do so, subject to the following conditions:
#//
#// The above copyright notice and this permission notice shall be included
#// in all copies or substantial portions of the Software.
#//
#// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
#// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
#// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
#// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
#// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#//
#//////////////////////////////////////////////////////////////////////////
#//
#//%/////////////////////////////////////////////////////////////////////////


ROOT = ../../../..
DIRS = \
	$(ROOT)/src/Providers/UNIXProviders/VirtualComputerSystem \
\
	$(ROOT)/src/Providers/UNIXProviders/Cluster \
\
	$(ROOT)/src/Providers/UNIXProviders/ComputerSystem \
\
	$(ROOT)/src/Providers/UNIXProviders/TopologyGraph \
\
	$(ROOT)/src/Providers/UNIXProviders/ConcreteCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/StatusCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/IPXNetwork \
\
	$(ROOT)/src/Providers/UNIXProviders/LANSegment \
\
	$(ROOT)/src/Providers/UNIXProviders/IPSubnet \
\
	$(ROOT)/src/Providers/UNIXProviders/BGPPeerGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/BufferPool \
\
	$(ROOT)/src/Providers/UNIXProviders/MPLSBuffers \
\
	$(ROOT)/src/Providers/UNIXProviders/IPAddressRange \
\
	$(ROOT)/src/Providers/UNIXProviders/BGPCluster \
\
	$(ROOT)/src/Providers/UNIXProviders/DiskGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/Role \
\
	$(ROOT)/src/Providers/UNIXProviders/ReplacementSet \
\
	$(ROOT)/src/Providers/UNIXProviders/StatisticsCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/QueryStatisticsCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/TargetPortGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/Zone \
\
	$(ROOT)/src/Providers/UNIXProviders/ZoneSet \
\
	$(ROOT)/src/Providers/UNIXProviders/LANConnectivitySegment \
\
	$(ROOT)/src/Providers/UNIXProviders/IPXConnectivityNetwork \
\
	$(ROOT)/src/Providers/UNIXProviders/OSPFLink \
\
	$(ROOT)/src/Providers/UNIXProviders/NetworkVLAN \
\
	$(ROOT)/src/Providers/UNIXProviders/IPConnectivitySubnet \
\
	$(ROOT)/src/Providers/UNIXProviders/DeviceConnectivityCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/RemoteReplicationCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/StorageTier \
\
	$(ROOT)/src/Providers/UNIXProviders/FileSystemStatisticsManifestCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/LogicalPortGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/PCIPortGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/SCSITargetPortGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/VirtualRoutingAndForwardingTable \
\
	$(ROOT)/src/Providers/UNIXProviders/StorageResourceLoadGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/InitiatorMaskingGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/TargetMaskingGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/DeviceMaskingGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/FailoverStorageExtentsCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/PolicyRoleCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/BlockStatisticsManifestCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/RedundancySet \
\
	$(ROOT)/src/Providers/UNIXProviders/StorageRedundancySet \
\
	$(ROOT)/src/Providers/UNIXProviders/RangeOfIPAddresses \
\
	$(ROOT)/src/Providers/UNIXProviders/NamedAddressCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/ReplicationGroup \
\
	$(ROOT)/src/Providers/UNIXProviders/InstalledProduct \
\
	$(ROOT)/src/Providers/UNIXProviders/CredentialStore \
\
	$(ROOT)/src/Providers/UNIXProviders/Keystore \
\
	$(ROOT)/src/Providers/UNIXProviders/FilterCollection \
\
	$(ROOT)/src/Providers/UNIXProviders/Group \
\
	$(ROOT)/src/Providers/UNIXProviders/Profile \
\
	$(ROOT)/src/Providers/UNIXProviders/BatchJobGroup \




DIR = Providers/UNIXProviders/StorageProcessorAffinity
include $(ROOT)/mak/config.mak
LIBRARY = UNIX_StorageProcessorAffinityProvider
EXTRA_INCLUDES += -I/usr/local/include -I./..

DEFINES +=  -DPROVIDER_LIB_NS="UNIX_StorageProcessorAffinityLib" -DPROVIDER_LIB_NS_BEGIN="namespace UNIX_StorageProcessorAffinityLib {"

SOURCES = \
	../CIMHelper.cpp \
	UNIX_StorageProcessorAffinity.cpp \
	UNIX_StorageProcessorAffinityProvider.cpp \
	UNIX_StorageProcessorAffinityMain.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_StorageProcessorAffinity_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_StorageProcessorAffinity_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_StorageProcessorAffinity_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_StorageProcessorAffinity_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_StorageProcessorAffinity_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_StorageProcessorAffinity_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_StorageProcessorAffinity_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_StorageProcessorAffinity_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_StorageProcessorAffinity_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_StorageProcessorAffinity_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_StorageProcessorAffinity_STUB.cpp
endif

LIBRARIES += \
	UNIX_VirtualComputerSystemProvider\
	UNIX_ClusterProvider\
	UNIX_ComputerSystemProvider\
	UNIX_TopologyGraphProvider\
	UNIX_ConcreteCollectionProvider\
	UNIX_StatusCollectionProvider\
	UNIX_IPXNetworkProvider\
	UNIX_LANSegmentProvider\
	UNIX_IPSubnetProvider\
	UNIX_BGPPeerGroupProvider\
	UNIX_BufferPoolProvider\
	UNIX_MPLSBuffersProvider\
	UNIX_IPAddressRangeProvider\
	UNIX_BGPClusterProvider\
	UNIX_DiskGroupProvider\
	UNIX_RoleProvider\
	UNIX_ReplacementSetProvider\
	UNIX_StatisticsCollectionProvider\
	UNIX_QueryStatisticsCollectionProvider\
	UNIX_TargetPortGroupProvider\
	UNIX_ZoneProvider\
	UNIX_ZoneSetProvider\
	UNIX_LANConnectivitySegmentProvider\
	UNIX_IPXConnectivityNetworkProvider\
	UNIX_OSPFLinkProvider\
	UNIX_NetworkVLANProvider\
	UNIX_IPConnectivitySubnetProvider\
	UNIX_DeviceConnectivityCollectionProvider\
	UNIX_RemoteReplicationCollectionProvider\
	UNIX_StorageTierProvider\
	UNIX_FileSystemStatisticsManifestCollectionProvider\
	UNIX_LogicalPortGroupProvider\
	UNIX_PCIPortGroupProvider\
	UNIX_SCSITargetPortGroupProvider\
	UNIX_VirtualRoutingAndForwardingTableProvider\
	UNIX_StorageResourceLoadGroupProvider\
	UNIX_InitiatorMaskingGroupProvider\
	UNIX_TargetMaskingGroupProvider\
	UNIX_DeviceMaskingGroupProvider\
	UNIX_FailoverStorageExtentsCollectionProvider\
	UNIX_PolicyRoleCollectionProvider\
	UNIX_BlockStatisticsManifestCollectionProvider\
	UNIX_RedundancySetProvider\
	UNIX_StorageRedundancySetProvider\
	UNIX_RangeOfIPAddressesProvider\
	UNIX_NamedAddressCollectionProvider\
	UNIX_ReplicationGroupProvider\
	UNIX_InstalledProductProvider\
	UNIX_CredentialStoreProvider\
	UNIX_KeystoreProvider\
	UNIX_FilterCollectionProvider\
	UNIX_GroupProvider\
	UNIX_ProfileProvider\
	UNIX_BatchJobGroupProvider

EXTRA_LIBRARIES = \
	-lpegprovider \
	-lpegclient \
	-lpegcommon \
	-lpegquerycommon \
	-lpegqueryexpression \
	-lpegcql \
	-lpegwql \
	-lpthread \
	-lutil \
	-lkvm

include $(ROOT)/mak/dynamic-library.mak





