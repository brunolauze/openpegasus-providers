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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Logs
*/


/* **** Description *** */
/*
MessageLogs can reside in data files, on specially allocated storage areas such as disks or memory, or output as raw I/O streams. In fact, a single Log may use each of these mechanisms to output or capture its contents. The LogInStorage association describes a Log located in a specially allocated portion of a StorageExtent. The offset of the Log, within the Extent, is defined using a property of the association, StartingOffset.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_LogInStorage:
				StartingOffset UInt64


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_LogInStorage:


*/

#ifndef __UNIX_LOGINSTORAGE_H
#define __UNIX_LOGINSTORAGE_H


#include "CIM_Dependency.h"
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
#include <MessageLog/UNIX_MessageLogProvider.h>

#include "UNIX_LogInStorageDeps.h"


#ifndef PROPERTY_STARTING_OFFSET
#define PROPERTY_STARTING_OFFSET \
					"StartingOffset"
#endif



class UNIX_LogInStorage :
	public CIM_Dependency
{
public:

	UNIX_LogInStorage();
	~UNIX_LogInStorage();

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
	virtual Boolean getStartingOffset(CIMProperty&) const;
	virtual Uint64 getStartingOffset() const;
	virtual void setStartingOffset(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _startingOffset;

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

UNIX_MessageLog _dependentMessageLog;
UNIX_MessageLogProvider _dependentMessageLogProvider;

#	include "UNIX_LogInStoragePrivate.h"


};

#endif /* UNIX_LOGINSTORAGE */
