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


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.18.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
This association defines the capacity, expressed in StorageExtents, that together represents the entire capacity collected in a StoragePool. The capacity represented by StorageExtents may represent capacity that is allocated or unallocated. 
StorageExtents associated to a StoragePool using this association shall not be also be associated to that StoragePool using the CIM_AssociatedRemainingExtent association.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_AssociatedComponentExtent:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_AssociatedComponentExtent:


*/

#ifndef __UNIX_ASSOCIATEDCOMPONENTEXTENT_H
#define __UNIX_ASSOCIATEDCOMPONENTEXTENT_H


#include "CIM_Component.h"
#include <StoragePool/UNIX_StoragePoolProvider.h>
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

#include "UNIX_AssociatedComponentExtentDeps.h"




class UNIX_AssociatedComponentExtent :
	public CIM_Component
{
public:

	UNIX_AssociatedComponentExtent();
	~UNIX_AssociatedComponentExtent();

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

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual void setGroupComponent(CIMInstance&);
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual void setPartComponent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;

	int groupIndex;
	int partIndex;
	UNIX_StoragePool group_UNIX_StoragePool_Component;
	int group_UNIX_StoragePool_Index;
	bool endOf_UNIX_StoragePool_Group;

	UNIX_LogicalDisk part_UNIX_LogicalDisk_Component;
	int part_UNIX_LogicalDisk_Index;
	bool endOf_UNIX_LogicalDisk_Part;
	UNIX_Snapshot part_UNIX_Snapshot_Component;
	int part_UNIX_Snapshot_Index;
	bool endOf_UNIX_Snapshot_Part;
	UNIX_VTOCDiskPartition part_UNIX_VTOCDiskPartition_Component;
	int part_UNIX_VTOCDiskPartition_Index;
	bool endOf_UNIX_VTOCDiskPartition_Part;
	UNIX_GPTDiskPartition part_UNIX_GPTDiskPartition_Component;
	int part_UNIX_GPTDiskPartition_Index;
	bool endOf_UNIX_GPTDiskPartition_Part;
	UNIX_DiskPartition part_UNIX_DiskPartition_Component;
	int part_UNIX_DiskPartition_Index;
	bool endOf_UNIX_DiskPartition_Part;
	UNIX_TapePartition part_UNIX_TapePartition_Component;
	int part_UNIX_TapePartition_Index;
	bool endOf_UNIX_TapePartition_Part;
	UNIX_CompositeExtent part_UNIX_CompositeExtent_Component;
	int part_UNIX_CompositeExtent_Index;
	bool endOf_UNIX_CompositeExtent_Part;
	UNIX_ProtectedSpaceExtent part_UNIX_ProtectedSpaceExtent_Component;
	int part_UNIX_ProtectedSpaceExtent_Index;
	bool endOf_UNIX_ProtectedSpaceExtent_Part;
	UNIX_PhysicalExtent part_UNIX_PhysicalExtent_Component;
	int part_UNIX_PhysicalExtent_Index;
	bool endOf_UNIX_PhysicalExtent_Part;
	UNIX_DatabaseSegment part_UNIX_DatabaseSegment_Component;
	int part_UNIX_DatabaseSegment_Index;
	bool endOf_UNIX_DatabaseSegment_Part;
	UNIX_AggregatePExtent part_UNIX_AggregatePExtent_Component;
	int part_UNIX_AggregatePExtent_Index;
	bool endOf_UNIX_AggregatePExtent_Part;
	UNIX_VolumeSet part_UNIX_VolumeSet_Component;
	int part_UNIX_VolumeSet_Index;
	bool endOf_UNIX_VolumeSet_Part;
	UNIX_OpaqueManagementData part_UNIX_OpaqueManagementData_Component;
	int part_UNIX_OpaqueManagementData_Index;
	bool endOf_UNIX_OpaqueManagementData_Part;
	UNIX_AggregatePSExtent part_UNIX_AggregatePSExtent_Component;
	int part_UNIX_AggregatePSExtent_Index;
	bool endOf_UNIX_AggregatePSExtent_Part;
	UNIX_CacheMemory part_UNIX_CacheMemory_Component;
	int part_UNIX_CacheMemory_Index;
	bool endOf_UNIX_CacheMemory_Part;
	UNIX_VolatileStorage part_UNIX_VolatileStorage_Component;
	int part_UNIX_VolatileStorage_Index;
	bool endOf_UNIX_VolatileStorage_Part;
	UNIX_NonVolatileStorage part_UNIX_NonVolatileStorage_Component;
	int part_UNIX_NonVolatileStorage_Index;
	bool endOf_UNIX_NonVolatileStorage_Part;

#	include "UNIX_AssociatedComponentExtentPrivate.h"


};

#endif /* UNIX_ASSOCIATEDCOMPONENTEXTENT */
