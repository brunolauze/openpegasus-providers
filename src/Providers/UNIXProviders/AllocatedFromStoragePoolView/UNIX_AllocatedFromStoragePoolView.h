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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::DEVICE::Views
*/


/* **** Description *** */
/*
The CIM_AllocatedFromStoragePoolView instance is a view that is derived from the CIM_AllocatedFromStoragePool association between the StorageVolume or LogicalDisk (of the CIM_VolumeView) and the StoragePool from which the StorageVolume (or LogicalDisk is allocated. Note that if the StorageVolume (or LogicalDisk) is allocated from multiple StoragePools there will be multiple AllocatedFromStoragePoolView instances for the StorageVolume (or LogicalDisk).
This association is between a view class and a normalized class. It can go in either direction (e.g., VolumeView dependent on a StoragePool or a StorageVolume dependent on a StoragePoolView).
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AbstractElementAllocatedFromPool:

			UNIX_AllocatedFromStoragePoolView:
				AFSPSpaceConsumed UInt64


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AbstractElementAllocatedFromPool:

			UNIX_AllocatedFromStoragePoolView:


*/

#ifndef __UNIX_ALLOCATEDFROMSTORAGEPOOLVIEW_H
#define __UNIX_ALLOCATEDFROMSTORAGEPOOLVIEW_H


#include "CIM_AbstractElementAllocatedFromPool.h"

#include "UNIX_AllocatedFromStoragePoolViewDeps.h"


#ifndef PROPERTY_AFS_P_SPACE_CONSUMED
#define PROPERTY_AFS_P_SPACE_CONSUMED \
					"AFSPSpaceConsumed"
#endif



class UNIX_AllocatedFromStoragePoolView :
	public CIM_AbstractElementAllocatedFromPool
{
public:

	UNIX_AllocatedFromStoragePoolView();
	~UNIX_AllocatedFromStoragePoolView();

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
	virtual Boolean getAFSPSpaceConsumed(CIMProperty&) const;
	virtual Uint64 getAFSPSpaceConsumed() const;
	virtual void setAFSPSpaceConsumed(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _aFSPSpaceConsumed;



#	include "UNIX_AllocatedFromStoragePoolViewPrivate.h"


};

#endif /* UNIX_ALLOCATEDFROMSTORAGEPOOLVIEW */
