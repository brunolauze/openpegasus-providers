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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
This class represents a collection of storage objects, such as a collection of StorageExtents identified as a storage tier.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_StorageTier:
				RelativePerformanceOrder UInt16
				StorageObjectType UInt16
				Technology UInt16
				State UInt16
				Dynamic Boolean
				DeleteOnEmptyStorageTier Boolean
				Percentage UInt16
				TotalCapacity UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_StorageTier:


*/

#ifndef __UNIX_STORAGETIER_H
#define __UNIX_STORAGETIER_H


#include "CIM_SystemSpecificCollection.h"

#include "UNIX_StorageTierDeps.h"


#ifndef PROPERTY_RELATIVE_PERFORMANCE_ORDER
#define PROPERTY_RELATIVE_PERFORMANCE_ORDER \
					"RelativePerformanceOrder"
#endif

#ifndef PROPERTY_STORAGE_OBJECT_TYPE
#define PROPERTY_STORAGE_OBJECT_TYPE \
					"StorageObjectType"
#endif

#ifndef PROPERTY_TECHNOLOGY
#define PROPERTY_TECHNOLOGY \
					"Technology"
#endif

#ifndef PROPERTY_STATE
#define PROPERTY_STATE \
					"State"
#endif

#ifndef PROPERTY_DYNAMIC
#define PROPERTY_DYNAMIC \
					"Dynamic"
#endif

#ifndef PROPERTY_DELETE_ON_EMPTY_STORAGE_TIER
#define PROPERTY_DELETE_ON_EMPTY_STORAGE_TIER \
					"DeleteOnEmptyStorageTier"
#endif

#ifndef PROPERTY_PERCENTAGE
#define PROPERTY_PERCENTAGE \
					"Percentage"
#endif

#ifndef PROPERTY_TOTAL_CAPACITY
#define PROPERTY_TOTAL_CAPACITY \
					"TotalCapacity"
#endif



class UNIX_StorageTier :
	public CIM_SystemSpecificCollection
{
public:

	UNIX_StorageTier();
	~UNIX_StorageTier();

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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getRelativePerformanceOrder(CIMProperty&) const;
	virtual Uint16 getRelativePerformanceOrder() const;
	virtual void setRelativePerformanceOrder(Uint16&);
	virtual Boolean getStorageObjectType(CIMProperty&) const;
	virtual Uint16 getStorageObjectType() const;
	virtual void setStorageObjectType(Uint16&);
	virtual Boolean getTechnology(CIMProperty&) const;
	virtual Uint16 getTechnology() const;
	virtual void setTechnology(Uint16&);
	virtual Boolean getState(CIMProperty&) const;
	virtual Uint16 getState() const;
	virtual void setState(Uint16&);
	virtual Boolean getDynamic(CIMProperty&) const;
	virtual Boolean getDynamic() const;
	virtual void setDynamic(Boolean&);
	virtual Boolean getDeleteOnEmptyStorageTier(CIMProperty&) const;
	virtual Boolean getDeleteOnEmptyStorageTier() const;
	virtual void setDeleteOnEmptyStorageTier(Boolean&);
	virtual Boolean getPercentage(CIMProperty&) const;
	virtual Uint16 getPercentage() const;
	virtual void setPercentage(Uint16&);
	virtual Boolean getTotalCapacity(CIMProperty&) const;
	virtual Uint64 getTotalCapacity() const;
	virtual void setTotalCapacity(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _relativePerformanceOrder;
	Uint16 _storageObjectType;
	Uint16 _technology;
	Uint16 _state;
	Boolean _dynamic;
	Boolean _deleteOnEmptyStorageTier;
	Uint16 _percentage;
	Uint64 _totalCapacity;

#	include "UNIX_StorageTierPrivate.h"


};

#endif /* UNIX_STORAGETIER */
