#!/bin/sh

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

cd bin/Debug && LD_LIBRARY_PATH=../../../../../HostedCollection/bin/Debug:../../../../../ComputerSystem/bin/Debug:../../../../../StatisticsCollection/bin/Debug:../../../../../QueryStatisticsCollection/bin/Debug:../../../../../TargetPortGroup/bin/Debug:../../../../../Zone/bin/Debug:../../../../../ZoneSet/bin/Debug:../../../../../LANConnectivitySegment/bin/Debug:../../../../../IPXConnectivityNetwork/bin/Debug:../../../../../OSPFLink/bin/Debug:../../../../../NetworkVLAN/bin/Debug:../../../../../IPConnectivitySubnet/bin/Debug:../../../../../DeviceConnectivityCollection/bin/Debug:../../../../../RemoteReplicationCollection/bin/Debug:../../../../../StorageTier/bin/Debug:../../../../../FileSystemStatisticsManifestCollection/bin/Debug:../../../../../LogicalPortGroup/bin/Debug:../../../../../PCIPortGroup/bin/Debug:../../../../../SCSITargetPortGroup/bin/Debug:../../../../../VirtualRoutingAndForwardingTable/bin/Debug:../../../../../StorageResourceLoadGroup/bin/Debug:../../../../../InitiatorMaskingGroup/bin/Debug:../../../../../TargetMaskingGroup/bin/Debug:../../../../../DeviceMaskingGroup/bin/Debug:../../../../../FailoverStorageExtentsCollection/bin/Debug:../../../../../PolicyRoleCollection/bin/Debug:../../../../../BlockStatisticsManifestCollection/bin/Debug:../../../../../RedundancySet/bin/Debug:../../../../../StorageRedundancySet/bin/Debug:../../../../../RangeOfIPAddresses/bin/Debug:../../../../../NamedAddressCollection/bin/Debug:../../../../../ReplicationGroup/bin/Debug:/usr/local/lib/pegasus/lib:/usr/local/lib:/usr/lib:/lib ./TestUNIX_HostedCollection
