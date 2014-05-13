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


/* **** Version *** */
/*
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Resource
*/


/* **** Description *** */
/*
A ResourcePool is a logical entity (with associated controls)provided by the host system for the purpose of allocation and assignment of resources. A given ResourcePool may be used to allocate resources of a specific type. Hierarchies of ResourcePools may be created to provide administrative control over allocations. In the cases where resources are subdivided, multiple resource pools may exist (e.g. nodal boundaries in NUMA-like systems). In systems that support over commitment, pools represent the reservable capacity, not an upper bound or limit on the maximum amount that can be allocated. Admission control during power on may detect and prevent systems from powering due to resource exhaustion. For example, over commitment on a ResourcePool with ResourceType=Memory would require that sufficient space be available in some backing-store, that may be managed through a storage ResourcePool.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			UNIX_ResourcePool:
				PoolID String
				Primordial Boolean
				Capacity UInt64
				Reserved UInt64
				ResourceType UInt16
				OtherResourceType String
				ResourceSubType String
				AllocationUnits String
				ConsumedResourceUnits String
				CurrentlyConsumedResource UInt64
				MaxConsumableResource UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_ResourcePool:


*/

#ifndef __UNIX_RESOURCEPOOL_H
#define __UNIX_RESOURCEPOOL_H


#include "CIM_LogicalElement.h"

#include "UNIX_ResourcePoolDeps.h"


#ifndef PROPERTY_POOL_ID
#define PROPERTY_POOL_ID \
					"PoolID"
#endif

#ifndef PROPERTY_PRIMORDIAL
#define PROPERTY_PRIMORDIAL \
					"Primordial"
#endif

#ifndef PROPERTY_CAPACITY
#define PROPERTY_CAPACITY \
					"Capacity"
#endif

#ifndef PROPERTY_RESERVED
#define PROPERTY_RESERVED \
					"Reserved"
#endif

#ifndef PROPERTY_RESOURCE_TYPE
#define PROPERTY_RESOURCE_TYPE \
					"ResourceType"
#endif

#ifndef PROPERTY_OTHER_RESOURCE_TYPE
#define PROPERTY_OTHER_RESOURCE_TYPE \
					"OtherResourceType"
#endif

#ifndef PROPERTY_RESOURCE_SUB_TYPE
#define PROPERTY_RESOURCE_SUB_TYPE \
					"ResourceSubType"
#endif

#ifndef PROPERTY_ALLOCATION_UNITS
#define PROPERTY_ALLOCATION_UNITS \
					"AllocationUnits"
#endif

#ifndef PROPERTY_CONSUMED_RESOURCE_UNITS
#define PROPERTY_CONSUMED_RESOURCE_UNITS \
					"ConsumedResourceUnits"
#endif

#ifndef PROPERTY_CURRENTLY_CONSUMED_RESOURCE
#define PROPERTY_CURRENTLY_CONSUMED_RESOURCE \
					"CurrentlyConsumedResource"
#endif

#ifndef PROPERTY_MAX_CONSUMABLE_RESOURCE
#define PROPERTY_MAX_CONSUMABLE_RESOURCE \
					"MaxConsumableResource"
#endif



class UNIX_ResourcePool :
	public CIM_LogicalElement
{
public:

	UNIX_ResourcePool();
	~UNIX_ResourcePool();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getPoolID(CIMProperty&) const;
	virtual String getPoolID() const;
	virtual void setPoolID(String&);
	virtual Boolean getPrimordial(CIMProperty&) const;
	virtual Boolean getPrimordial() const;
	virtual void setPrimordial(Boolean&);
	virtual Boolean getCapacity(CIMProperty&) const;
	virtual Uint64 getCapacity() const;
	virtual void setCapacity(Uint64&);
	virtual Boolean getReserved(CIMProperty&) const;
	virtual Uint64 getReserved() const;
	virtual void setReserved(Uint64&);
	virtual Boolean getResourceType(CIMProperty&) const;
	virtual Uint16 getResourceType() const;
	virtual void setResourceType(Uint16&);
	virtual Boolean getOtherResourceType(CIMProperty&) const;
	virtual String getOtherResourceType() const;
	virtual void setOtherResourceType(String&);
	virtual Boolean getResourceSubType(CIMProperty&) const;
	virtual String getResourceSubType() const;
	virtual void setResourceSubType(String&);
	virtual Boolean getAllocationUnits(CIMProperty&) const;
	virtual String getAllocationUnits() const;
	virtual void setAllocationUnits(String&);
	virtual Boolean getConsumedResourceUnits(CIMProperty&) const;
	virtual String getConsumedResourceUnits() const;
	virtual void setConsumedResourceUnits(String&);
	virtual Boolean getCurrentlyConsumedResource(CIMProperty&) const;
	virtual Uint64 getCurrentlyConsumedResource() const;
	virtual void setCurrentlyConsumedResource(Uint64&);
	virtual Boolean getMaxConsumableResource(CIMProperty&) const;
	virtual Uint64 getMaxConsumableResource() const;
	virtual void setMaxConsumableResource(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	String _poolID;
	Boolean _primordial;
	Uint64 _capacity;
	Uint64 _reserved;
	Uint16 _resourceType;
	String _otherResourceType;
	String _resourceSubType;
	String _allocationUnits;
	String _consumedResourceUnits;
	Uint64 _currentlyConsumedResource;
	Uint64 _maxConsumableResource;

#	include "UNIX_ResourcePoolPrivate.h"


};

#endif /* UNIX_RESOURCEPOOL */
