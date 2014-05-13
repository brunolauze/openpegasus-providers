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
2.37.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
A StoragePool is a conglomeration of storage capacity for the purpose of assignment and allocation based on service characteristics, such as location, available space or other criteria (for example, cost per megabyte or hardware ownership). A StoragePool is managed within the scope of a particular System. StoragePools may consist of component StoragePools or StorageExtents. StorageExtents that belong to the StoragePool have a Component relationship to the StoragePool. StorageExtents/StoragePools that are elements of a pool have their available space aggregated into the pool. StoragePools, StorageVolumes and LogicalDisks may be created from StoragePools. This is indicated by the AllocatedFromStoragePool association. StoragePool is scoped to a system by the HostedStoragePool association.
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

			UNIX_StoragePool:
				TotalManagedSpace UInt64
				RemainingManagedSpace UInt64
				LowSpaceWarningThreshold UInt16
				Usage UInt16
				OtherUsageDescription String
				ClientSettableUsage UInt16
				CapacityInMigratingSource UInt64
				CapacityInMigratingTarget UInt64
				SpaceLimit UInt64
				SpaceLimitDetermination UInt16
				ThinProvisionMetaDataSpace UInt64
				ElementsShareSpace Boolean
				ReservedSpace UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_ResourcePool:

			UNIX_StoragePool:
				GetSupportedSizes UInt32
				GetSupportedSizeRange UInt32
				GetAvailableExtents UInt32


*/

#ifndef __UNIX_STORAGEPOOL_H
#define __UNIX_STORAGEPOOL_H


#include <ResourcePool/UNIX_ResourcePool.h>
#include <StorageSetting/UNIX_StorageSetting.h>

#include "UNIX_StoragePoolDeps.h"


#ifndef PROPERTY_TOTAL_MANAGED_SPACE
#define PROPERTY_TOTAL_MANAGED_SPACE \
					"TotalManagedSpace"
#endif

#ifndef PROPERTY_REMAINING_MANAGED_SPACE
#define PROPERTY_REMAINING_MANAGED_SPACE \
					"RemainingManagedSpace"
#endif

#ifndef PROPERTY_LOW_SPACE_WARNING_THRESHOLD
#define PROPERTY_LOW_SPACE_WARNING_THRESHOLD \
					"LowSpaceWarningThreshold"
#endif

#ifndef PROPERTY_USAGE
#define PROPERTY_USAGE \
					"Usage"
#endif

#ifndef PROPERTY_OTHER_USAGE_DESCRIPTION
#define PROPERTY_OTHER_USAGE_DESCRIPTION \
					"OtherUsageDescription"
#endif

#ifndef PROPERTY_CLIENT_SETTABLE_USAGE
#define PROPERTY_CLIENT_SETTABLE_USAGE \
					"ClientSettableUsage"
#endif

#ifndef PROPERTY_CAPACITY_IN_MIGRATING_SOURCE
#define PROPERTY_CAPACITY_IN_MIGRATING_SOURCE \
					"CapacityInMigratingSource"
#endif

#ifndef PROPERTY_CAPACITY_IN_MIGRATING_TARGET
#define PROPERTY_CAPACITY_IN_MIGRATING_TARGET \
					"CapacityInMigratingTarget"
#endif

#ifndef PROPERTY_SPACE_LIMIT
#define PROPERTY_SPACE_LIMIT \
					"SpaceLimit"
#endif

#ifndef PROPERTY_SPACE_LIMIT_DETERMINATION
#define PROPERTY_SPACE_LIMIT_DETERMINATION \
					"SpaceLimitDetermination"
#endif

#ifndef PROPERTY_THIN_PROVISION_META_DATA_SPACE
#define PROPERTY_THIN_PROVISION_META_DATA_SPACE \
					"ThinProvisionMetaDataSpace"
#endif

#ifndef PROPERTY_ELEMENTS_SHARE_SPACE
#define PROPERTY_ELEMENTS_SHARE_SPACE \
					"ElementsShareSpace"
#endif

#ifndef PROPERTY_RESERVED_SPACE
#define PROPERTY_RESERVED_SPACE \
					"ReservedSpace"
#endif



class UNIX_StoragePool :
	public UNIX_ResourcePool
{
public:

	UNIX_StoragePool();
	~UNIX_StoragePool();

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
	virtual Boolean getTotalManagedSpace(CIMProperty&) const;
	virtual Uint64 getTotalManagedSpace() const;
	virtual void setTotalManagedSpace(Uint64&);
	virtual Boolean getRemainingManagedSpace(CIMProperty&) const;
	virtual Uint64 getRemainingManagedSpace() const;
	virtual void setRemainingManagedSpace(Uint64&);
	virtual Boolean getLowSpaceWarningThreshold(CIMProperty&) const;
	virtual Uint16 getLowSpaceWarningThreshold() const;
	virtual void setLowSpaceWarningThreshold(Uint16&);
	virtual Boolean getUsage(CIMProperty&) const;
	virtual Uint16 getUsage() const;
	virtual void setUsage(Uint16&);
	virtual Boolean getOtherUsageDescription(CIMProperty&) const;
	virtual String getOtherUsageDescription() const;
	virtual void setOtherUsageDescription(String&);
	virtual Boolean getClientSettableUsage(CIMProperty&) const;
	virtual Array<Uint16> getClientSettableUsage() const;
	virtual void setClientSettableUsage(Array<Uint16>&);
	virtual Boolean getCapacityInMigratingSource(CIMProperty&) const;
	virtual Uint64 getCapacityInMigratingSource() const;
	virtual void setCapacityInMigratingSource(Uint64&);
	virtual Boolean getCapacityInMigratingTarget(CIMProperty&) const;
	virtual Uint64 getCapacityInMigratingTarget() const;
	virtual void setCapacityInMigratingTarget(Uint64&);
	virtual Boolean getSpaceLimit(CIMProperty&) const;
	virtual Uint64 getSpaceLimit() const;
	virtual void setSpaceLimit(Uint64&);
	virtual Boolean getSpaceLimitDetermination(CIMProperty&) const;
	virtual Uint16 getSpaceLimitDetermination() const;
	virtual void setSpaceLimitDetermination(Uint16&);
	virtual Boolean getThinProvisionMetaDataSpace(CIMProperty&) const;
	virtual Uint64 getThinProvisionMetaDataSpace() const;
	virtual void setThinProvisionMetaDataSpace(Uint64&);
	virtual Boolean getElementsShareSpace(CIMProperty&) const;
	virtual Boolean getElementsShareSpace() const;
	virtual void setElementsShareSpace(Boolean&);
	virtual Boolean getReservedSpace(CIMProperty&) const;
	virtual Uint64 getReservedSpace() const;
	virtual void setReservedSpace(Uint64&);

	virtual Uint32 invokeGetSupportedSizes(
		Uint16 &inElementType,
		CIMInstance &inGoal,
		Array<Uint64> &inSizes
	);

	virtual Uint32 invokeGetSupportedSizeRange(
		Uint16 &inElementType,
		CIMInstance &inGoal,
		Uint64 &inMinimumVolumeSize,
		Uint64 &inMaximumVolumeSize,
		Uint64 &inVolumeSizeDivisor
	);

	virtual Uint32 invokeGetAvailableExtents(
		CIMInstance &inGoal,
		CIMInstance &inAvailableExtents
	);



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
	Uint64 _totalManagedSpace;
	Uint64 _remainingManagedSpace;
	Uint16 _lowSpaceWarningThreshold;
	Uint16 _usage;
	String _otherUsageDescription;
	Array<Uint16> _clientSettableUsage;
	Uint64 _capacityInMigratingSource;
	Uint64 _capacityInMigratingTarget;
	Uint64 _spaceLimit;
	Uint16 _spaceLimitDetermination;
	Uint64 _thinProvisionMetaDataSpace;
	Boolean _elementsShareSpace;
	Uint64 _reservedSpace;

#	include "UNIX_StoragePoolPrivate.h"


};

#endif /* UNIX_STORAGEPOOL */
