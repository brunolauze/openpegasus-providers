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
DiskPartitions can be directly realized on a PhysicalMedia. This is used to model the creation of Partitions on a raw SCSI or IDE drive, using the fdisk (DOS and Unix) or pdisk (Unix) command. The StartingAddress of the DiskPartition on the PhysicalMedia is also specified as a property of this relationship. An alternative is that Partitions can be BasedOn StorageVolumes, such as a VolumeSet or a Volume exposed by a hardware RAID cabinet. The latter relationship is modeled using the DiskPartitionBasedOnVolume association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_Realizes:

			CIM_RealizesExtent:
				StartingAddress UInt64

			UNIX_RealizesDiskPartition:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_Realizes:

			CIM_RealizesExtent:

			UNIX_RealizesDiskPartition:


*/

#ifndef __UNIX_REALIZESDISKPARTITION_H
#define __UNIX_REALIZESDISKPARTITION_H


#include "CIM_RealizesExtent.h"
#include <PhysicalMedia/UNIX_PhysicalMediaProvider.h>
#include <VTOCDiskPartition/UNIX_VTOCDiskPartitionProvider.h>
#include <GPTDiskPartition/UNIX_GPTDiskPartitionProvider.h>
#include <DiskPartition/UNIX_DiskPartitionProvider.h>

#include "UNIX_RealizesDiskPartitionDeps.h"




class UNIX_RealizesDiskPartition :
	public CIM_RealizesExtent
{
public:

	UNIX_RealizesDiskPartition();
	~UNIX_RealizesDiskPartition();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _startingAddress;

UNIX_PhysicalMedia _antecedentPhysicalMedia;
UNIX_PhysicalMediaProvider _antecedentPhysicalMediaProvider;

UNIX_VTOCDiskPartition _dependentVTOCDiskPartition;
UNIX_VTOCDiskPartitionProvider _dependentVTOCDiskPartitionProvider;
UNIX_GPTDiskPartition _dependentGPTDiskPartition;
UNIX_GPTDiskPartitionProvider _dependentGPTDiskPartitionProvider;
UNIX_DiskPartition _dependentDiskPartition;
UNIX_DiskPartitionProvider _dependentDiskPartitionProvider;

#	include "UNIX_RealizesDiskPartitionPrivate.h"


};

#endif /* UNIX_REALIZESDISKPARTITION */
