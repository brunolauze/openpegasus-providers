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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageExtents
*/


/* **** Description *** */
/*
This association describes the attributes of a partition table installed in an extent. The attributes are in the capabilities class.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_InstalledPartitionTable:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_InstalledPartitionTable:


*/

#ifndef __UNIX_INSTALLEDPARTITIONTABLE_H
#define __UNIX_INSTALLEDPARTITIONTABLE_H


#include "CIM_Dependency.h"
#include <DiskPartitionConfigurationCapabilities/UNIX_DiskPartitionConfigurationCapabilitiesProvider.h>
#include <LogicalDisk/UNIX_LogicalDiskProvider.h>
#include <Snapshot/UNIX_SnapshotProvider.h>
#include <VTOCDiskPartition/UNIX_VTOCDiskPartitionProvider.h>
#include <GPTDiskPartition/UNIX_GPTDiskPartitionProvider.h>
#include <DiskPartition/UNIX_DiskPartitionProvider.h>
#include <TapePartition/UNIX_TapePartitionProvider.h>
#include <CompositeExtent/UNIX_CompositeExtentProvider.h>
#include <ProtectedSpaceExtent/UNIX_ProtectedSpaceExtentProvider.h>
#include <PhysicalExtent/UNIX_PhysicalExtentProvider.h>
#include <DatabaseSegment/UNIX_DatabaseSegmentProvider.h>
#include <AggregatePExtent/UNIX_AggregatePExtentProvider.h>
#include <VolumeSet/UNIX_VolumeSetProvider.h>
#include <OpaqueManagementData/UNIX_OpaqueManagementDataProvider.h>
#include <AggregatePSExtent/UNIX_AggregatePSExtentProvider.h>
#include <CacheMemory/UNIX_CacheMemoryProvider.h>
#include <VolatileStorage/UNIX_VolatileStorageProvider.h>
#include <NonVolatileStorage/UNIX_NonVolatileStorageProvider.h>

#include "UNIX_InstalledPartitionTableDeps.h"




class UNIX_InstalledPartitionTable :
	public CIM_Dependency
{
public:

	UNIX_InstalledPartitionTable();
	~UNIX_InstalledPartitionTable();

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

UNIX_DiskPartitionConfigurationCapabilities _antecedentDiskPartitionConfigurationCapabilities;
UNIX_DiskPartitionConfigurationCapabilitiesProvider _antecedentDiskPartitionConfigurationCapabilitiesProvider;

UNIX_LogicalDisk _dependentLogicalDisk;
UNIX_LogicalDiskProvider _dependentLogicalDiskProvider;
UNIX_Snapshot _dependentSnapshot;
UNIX_SnapshotProvider _dependentSnapshotProvider;
UNIX_VTOCDiskPartition _dependentVTOCDiskPartition;
UNIX_VTOCDiskPartitionProvider _dependentVTOCDiskPartitionProvider;
UNIX_GPTDiskPartition _dependentGPTDiskPartition;
UNIX_GPTDiskPartitionProvider _dependentGPTDiskPartitionProvider;
UNIX_DiskPartition _dependentDiskPartition;
UNIX_DiskPartitionProvider _dependentDiskPartitionProvider;
UNIX_TapePartition _dependentTapePartition;
UNIX_TapePartitionProvider _dependentTapePartitionProvider;
UNIX_CompositeExtent _dependentCompositeExtent;
UNIX_CompositeExtentProvider _dependentCompositeExtentProvider;
UNIX_ProtectedSpaceExtent _dependentProtectedSpaceExtent;
UNIX_ProtectedSpaceExtentProvider _dependentProtectedSpaceExtentProvider;
UNIX_PhysicalExtent _dependentPhysicalExtent;
UNIX_PhysicalExtentProvider _dependentPhysicalExtentProvider;
UNIX_DatabaseSegment _dependentDatabaseSegment;
UNIX_DatabaseSegmentProvider _dependentDatabaseSegmentProvider;
UNIX_AggregatePExtent _dependentAggregatePExtent;
UNIX_AggregatePExtentProvider _dependentAggregatePExtentProvider;
UNIX_VolumeSet _dependentVolumeSet;
UNIX_VolumeSetProvider _dependentVolumeSetProvider;
UNIX_OpaqueManagementData _dependentOpaqueManagementData;
UNIX_OpaqueManagementDataProvider _dependentOpaqueManagementDataProvider;
UNIX_AggregatePSExtent _dependentAggregatePSExtent;
UNIX_AggregatePSExtentProvider _dependentAggregatePSExtentProvider;
UNIX_CacheMemory _dependentCacheMemory;
UNIX_CacheMemoryProvider _dependentCacheMemoryProvider;
UNIX_VolatileStorage _dependentVolatileStorage;
UNIX_VolatileStorageProvider _dependentVolatileStorageProvider;
UNIX_NonVolatileStorage _dependentNonVolatileStorage;
UNIX_NonVolatileStorageProvider _dependentNonVolatileStorageProvider;

#	include "UNIX_InstalledPartitionTablePrivate.h"


};

#endif /* UNIX_INSTALLEDPARTITIONTABLE */
