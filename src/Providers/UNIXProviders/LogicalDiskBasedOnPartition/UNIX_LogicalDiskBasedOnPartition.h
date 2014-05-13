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
CIM::Device::StorageExtents
*/


/* **** Description *** */
/*
LogicalDisks can be BasedOn a DiskPartition. For example, a personal computer's C: drive may be located on a Partition on local PhysicalMedia. In this association of LogicalDisks to Partitions, note that the cardinality of the Antecedent, Disk Partition, is Max (1). This dictates that a LogicalDisk can not span more than one Partition. However, there are cases where this is true. When it occurs, the LogicalDisk is really based on some kind of RAID configuration (for example, a mirror or stripe set). In these scenarios, the LogicalDisk is more correctly BasedOn a StorageVolume. To prevent incorrectly using the LogicalDiskBasedOnPartition association, the Max (1) qualifier was put on the Antecedent reference to the DiskPartition.
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

			CIM_LogicalDiskBasedOnExtent:

			UNIX_LogicalDiskBasedOnPartition:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AbstractBasedOn:

			CIM_BasedOn:

			CIM_LogicalDiskBasedOnExtent:

			UNIX_LogicalDiskBasedOnPartition:


*/

#ifndef __UNIX_LOGICALDISKBASEDONPARTITION_H
#define __UNIX_LOGICALDISKBASEDONPARTITION_H


#include "CIM_LogicalDiskBasedOnExtent.h"
#include <VTOCDiskPartition/UNIX_VTOCDiskPartitionProvider.h>
#include <GPTDiskPartition/UNIX_GPTDiskPartitionProvider.h>
#include <DiskPartition/UNIX_DiskPartitionProvider.h>
#include <LogicalDisk/UNIX_LogicalDiskProvider.h>

#include "UNIX_LogicalDiskBasedOnPartitionDeps.h"




class UNIX_LogicalDiskBasedOnPartition :
	public CIM_LogicalDiskBasedOnExtent
{
public:

	UNIX_LogicalDiskBasedOnPartition();
	~UNIX_LogicalDiskBasedOnPartition();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _startingAddress;
	Uint64 _endingAddress;
	Uint16 _orderIndex;

UNIX_VTOCDiskPartition _antecedentVTOCDiskPartition;
UNIX_VTOCDiskPartitionProvider _antecedentVTOCDiskPartitionProvider;
UNIX_GPTDiskPartition _antecedentGPTDiskPartition;
UNIX_GPTDiskPartitionProvider _antecedentGPTDiskPartitionProvider;
UNIX_DiskPartition _antecedentDiskPartition;
UNIX_DiskPartitionProvider _antecedentDiskPartitionProvider;

UNIX_LogicalDisk _dependentLogicalDisk;
UNIX_LogicalDiskProvider _dependentLogicalDiskProvider;

#	include "UNIX_LogicalDiskBasedOnPartitionPrivate.h"


};

#endif /* UNIX_LOGICALDISKBASEDONPARTITION */
