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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageExtents
*/


/* **** Description *** */
/*
Protected StorageExtents map to an underlying StorageExtent. This mapping includes information about the placement of check data on the underlying extent. The mapping is made explicit in this association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AbstractBasedOn:
				StartingAddress UInt64
				EndingAddress UInt64
				OrderIndex UInt16

			CIM_BasedOn:

			UNIX_ProtectedExtentBasedOn:
				NumberOfBlocks UInt64
				BlockSize UInt64
				UnitsBeforeCheckDataInterleave UInt64
				UnitsOfCheckData UInt64
				UnitsOfUserData UInt64


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AbstractBasedOn:

			CIM_BasedOn:

			UNIX_ProtectedExtentBasedOn:


*/

#ifndef __UNIX_PROTECTEDEXTENTBASEDON_H
#define __UNIX_PROTECTEDEXTENTBASEDON_H


#include "CIM_BasedOn.h"
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

#include "UNIX_ProtectedExtentBasedOnDeps.h"


#ifndef PROPERTY_NUMBER_OF_BLOCKS
#define PROPERTY_NUMBER_OF_BLOCKS \
					"NumberOfBlocks"
#endif

#ifndef PROPERTY_BLOCK_SIZE
#define PROPERTY_BLOCK_SIZE \
					"BlockSize"
#endif

#ifndef PROPERTY_UNITS_BEFORE_CHECK_DATA_INTERLEAVE
#define PROPERTY_UNITS_BEFORE_CHECK_DATA_INTERLEAVE \
					"UnitsBeforeCheckDataInterleave"
#endif

#ifndef PROPERTY_UNITS_OF_CHECK_DATA
#define PROPERTY_UNITS_OF_CHECK_DATA \
					"UnitsOfCheckData"
#endif

#ifndef PROPERTY_UNITS_OF_USER_DATA
#define PROPERTY_UNITS_OF_USER_DATA \
					"UnitsOfUserData"
#endif



class UNIX_ProtectedExtentBasedOn :
	public CIM_BasedOn
{
public:

	UNIX_ProtectedExtentBasedOn();
	~UNIX_ProtectedExtentBasedOn();

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
	virtual Boolean getStartingAddress(CIMProperty&) const;
	virtual Uint64 getStartingAddress() const;
	virtual void setStartingAddress(Uint64&);
	virtual Boolean getEndingAddress(CIMProperty&) const;
	virtual Uint64 getEndingAddress() const;
	virtual void setEndingAddress(Uint64&);
	virtual Boolean getOrderIndex(CIMProperty&) const;
	virtual Uint16 getOrderIndex() const;
	virtual void setOrderIndex(Uint16&);
	virtual Boolean getNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getNumberOfBlocks() const;
	virtual void setNumberOfBlocks(Uint64&);
	virtual Boolean getBlockSize(CIMProperty&) const;
	virtual Uint64 getBlockSize() const;
	virtual void setBlockSize(Uint64&);
	virtual Boolean getUnitsBeforeCheckDataInterleave(CIMProperty&) const;
	virtual Uint64 getUnitsBeforeCheckDataInterleave() const;
	virtual void setUnitsBeforeCheckDataInterleave(Uint64&);
	virtual Boolean getUnitsOfCheckData(CIMProperty&) const;
	virtual Uint64 getUnitsOfCheckData() const;
	virtual void setUnitsOfCheckData(Uint64&);
	virtual Boolean getUnitsOfUserData(CIMProperty&) const;
	virtual Uint64 getUnitsOfUserData() const;
	virtual void setUnitsOfUserData(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _startingAddress;
	Uint64 _endingAddress;
	Uint16 _orderIndex;
	Uint64 _numberOfBlocks;
	Uint64 _blockSize;
	Uint64 _unitsBeforeCheckDataInterleave;
	Uint64 _unitsOfCheckData;
	Uint64 _unitsOfUserData;

UNIX_LogicalDisk _antecedentLogicalDisk;
UNIX_LogicalDiskProvider _antecedentLogicalDiskProvider;
UNIX_Snapshot _antecedentSnapshot;
UNIX_SnapshotProvider _antecedentSnapshotProvider;
UNIX_VTOCDiskPartition _antecedentVTOCDiskPartition;
UNIX_VTOCDiskPartitionProvider _antecedentVTOCDiskPartitionProvider;
UNIX_GPTDiskPartition _antecedentGPTDiskPartition;
UNIX_GPTDiskPartitionProvider _antecedentGPTDiskPartitionProvider;
UNIX_DiskPartition _antecedentDiskPartition;
UNIX_DiskPartitionProvider _antecedentDiskPartitionProvider;
UNIX_TapePartition _antecedentTapePartition;
UNIX_TapePartitionProvider _antecedentTapePartitionProvider;
UNIX_CompositeExtent _antecedentCompositeExtent;
UNIX_CompositeExtentProvider _antecedentCompositeExtentProvider;
UNIX_ProtectedSpaceExtent _antecedentProtectedSpaceExtent;
UNIX_ProtectedSpaceExtentProvider _antecedentProtectedSpaceExtentProvider;
UNIX_PhysicalExtent _antecedentPhysicalExtent;
UNIX_PhysicalExtentProvider _antecedentPhysicalExtentProvider;
UNIX_DatabaseSegment _antecedentDatabaseSegment;
UNIX_DatabaseSegmentProvider _antecedentDatabaseSegmentProvider;
UNIX_AggregatePExtent _antecedentAggregatePExtent;
UNIX_AggregatePExtentProvider _antecedentAggregatePExtentProvider;
UNIX_VolumeSet _antecedentVolumeSet;
UNIX_VolumeSetProvider _antecedentVolumeSetProvider;
UNIX_OpaqueManagementData _antecedentOpaqueManagementData;
UNIX_OpaqueManagementDataProvider _antecedentOpaqueManagementDataProvider;
UNIX_AggregatePSExtent _antecedentAggregatePSExtent;
UNIX_AggregatePSExtentProvider _antecedentAggregatePSExtentProvider;
UNIX_CacheMemory _antecedentCacheMemory;
UNIX_CacheMemoryProvider _antecedentCacheMemoryProvider;
UNIX_VolatileStorage _antecedentVolatileStorage;
UNIX_VolatileStorageProvider _antecedentVolatileStorageProvider;
UNIX_NonVolatileStorage _antecedentNonVolatileStorage;
UNIX_NonVolatileStorageProvider _antecedentNonVolatileStorageProvider;

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

#	include "UNIX_ProtectedExtentBasedOnPrivate.h"


};

#endif /* UNIX_PROTECTEDEXTENTBASEDON */
