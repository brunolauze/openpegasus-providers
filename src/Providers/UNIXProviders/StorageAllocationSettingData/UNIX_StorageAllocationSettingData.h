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
The CIM_StorageAllocationSettingData class represents settings specifically related to the allocation of virtual storage.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SettingData:
				ConfigurationName String
				ChangeableType UInt16
				ComponentSetting String
				SoID String
				SoOrgID String

			CIM_ResourceAllocationSettingData:
				ResourceType UInt16
				OtherResourceType String
				ResourceSubType String
				PoolID String
				ConsumerVisibility UInt16
				HostResource String
				AllocationUnits String
				VirtualQuantity UInt64
				Reservation UInt64
				Limit UInt64
				Weight UInt32
				AutomaticAllocation Boolean
				AutomaticDeallocation Boolean
				Parent String
				Connection String
				Address String
				MappingBehavior UInt16
				AddressOnParent String
				VirtualQuantityUnits String

			UNIX_StorageAllocationSettingData:
				VirtualResourceBlockSize UInt64
				Access UInt16
				HostResourceBlockSize UInt64
				HostExtentStartingAddress UInt64
				HostExtentName String
				HostExtentNameFormat UInt16
				OtherHostExtentNameFormat String
				HostExtentNameNamespace UInt16
				OtherHostExtentNameNamespace String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ResourceAllocationSettingData:

			UNIX_StorageAllocationSettingData:


*/

#ifndef __UNIX_STORAGEALLOCATIONSETTINGDATA_H
#define __UNIX_STORAGEALLOCATIONSETTINGDATA_H


#include "CIM_ResourceAllocationSettingData.h"

#include "UNIX_StorageAllocationSettingDataDeps.h"


#ifndef PROPERTY_VIRTUAL_RESOURCE_BLOCK_SIZE
#define PROPERTY_VIRTUAL_RESOURCE_BLOCK_SIZE \
					"VirtualResourceBlockSize"
#endif

#ifndef PROPERTY_ACCESS
#define PROPERTY_ACCESS \
					"Access"
#endif

#ifndef PROPERTY_HOST_RESOURCE_BLOCK_SIZE
#define PROPERTY_HOST_RESOURCE_BLOCK_SIZE \
					"HostResourceBlockSize"
#endif

#ifndef PROPERTY_HOST_EXTENT_STARTING_ADDRESS
#define PROPERTY_HOST_EXTENT_STARTING_ADDRESS \
					"HostExtentStartingAddress"
#endif

#ifndef PROPERTY_HOST_EXTENT_NAME
#define PROPERTY_HOST_EXTENT_NAME \
					"HostExtentName"
#endif

#ifndef PROPERTY_HOST_EXTENT_NAME_FORMAT
#define PROPERTY_HOST_EXTENT_NAME_FORMAT \
					"HostExtentNameFormat"
#endif

#ifndef PROPERTY_OTHER_HOST_EXTENT_NAME_FORMAT
#define PROPERTY_OTHER_HOST_EXTENT_NAME_FORMAT \
					"OtherHostExtentNameFormat"
#endif

#ifndef PROPERTY_HOST_EXTENT_NAME_NAMESPACE
#define PROPERTY_HOST_EXTENT_NAME_NAMESPACE \
					"HostExtentNameNamespace"
#endif

#ifndef PROPERTY_OTHER_HOST_EXTENT_NAME_NAMESPACE
#define PROPERTY_OTHER_HOST_EXTENT_NAME_NAMESPACE \
					"OtherHostExtentNameNamespace"
#endif



class UNIX_StorageAllocationSettingData :
	public CIM_ResourceAllocationSettingData
{
public:

	UNIX_StorageAllocationSettingData();
	~UNIX_StorageAllocationSettingData();

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
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual void setConfigurationName(String&);
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual void setChangeableType(Uint16&);
	virtual Boolean getComponentSetting(CIMProperty&) const;
	virtual Array<String> getComponentSetting() const;
	virtual void setComponentSetting(Array<String>&);
	virtual Boolean getSoID(CIMProperty&) const;
	virtual String getSoID() const;
	virtual void setSoID(String&);
	virtual Boolean getSoOrgID(CIMProperty&) const;
	virtual String getSoOrgID() const;
	virtual void setSoOrgID(String&);
	virtual Boolean getResourceType(CIMProperty&) const;
	virtual Uint16 getResourceType() const;
	virtual void setResourceType(Uint16&);
	virtual Boolean getOtherResourceType(CIMProperty&) const;
	virtual String getOtherResourceType() const;
	virtual void setOtherResourceType(String&);
	virtual Boolean getResourceSubType(CIMProperty&) const;
	virtual String getResourceSubType() const;
	virtual void setResourceSubType(String&);
	virtual Boolean getPoolID(CIMProperty&) const;
	virtual String getPoolID() const;
	virtual void setPoolID(String&);
	virtual Boolean getConsumerVisibility(CIMProperty&) const;
	virtual Uint16 getConsumerVisibility() const;
	virtual void setConsumerVisibility(Uint16&);
	virtual Boolean getHostResource(CIMProperty&) const;
	virtual Array<String> getHostResource() const;
	virtual void setHostResource(Array<String>&);
	virtual Boolean getAllocationUnits(CIMProperty&) const;
	virtual String getAllocationUnits() const;
	virtual void setAllocationUnits(String&);
	virtual Boolean getVirtualQuantity(CIMProperty&) const;
	virtual Uint64 getVirtualQuantity() const;
	virtual void setVirtualQuantity(Uint64&);
	virtual Boolean getReservation(CIMProperty&) const;
	virtual Uint64 getReservation() const;
	virtual void setReservation(Uint64&);
	virtual Boolean getLimit(CIMProperty&) const;
	virtual Uint64 getLimit() const;
	virtual void setLimit(Uint64&);
	virtual Boolean getWeight(CIMProperty&) const;
	virtual Uint32 getWeight() const;
	virtual void setWeight(Uint32&);
	virtual Boolean getAutomaticAllocation(CIMProperty&) const;
	virtual Boolean getAutomaticAllocation() const;
	virtual void setAutomaticAllocation(Boolean&);
	virtual Boolean getAutomaticDeallocation(CIMProperty&) const;
	virtual Boolean getAutomaticDeallocation() const;
	virtual void setAutomaticDeallocation(Boolean&);
	virtual Boolean getParent(CIMProperty&) const;
	virtual String getParent() const;
	virtual void setParent(String&);
	virtual Boolean getConnection(CIMProperty&) const;
	virtual Array<String> getConnection() const;
	virtual void setConnection(Array<String>&);
	virtual Boolean getAddress(CIMProperty&) const;
	virtual String getAddress() const;
	virtual void setAddress(String&);
	virtual Boolean getMappingBehavior(CIMProperty&) const;
	virtual Uint16 getMappingBehavior() const;
	virtual void setMappingBehavior(Uint16&);
	virtual Boolean getAddressOnParent(CIMProperty&) const;
	virtual String getAddressOnParent() const;
	virtual void setAddressOnParent(String&);
	virtual Boolean getVirtualQuantityUnits(CIMProperty&) const;
	virtual String getVirtualQuantityUnits() const;
	virtual void setVirtualQuantityUnits(String&);
	virtual Boolean getVirtualResourceBlockSize(CIMProperty&) const;
	virtual Uint64 getVirtualResourceBlockSize() const;
	virtual void setVirtualResourceBlockSize(Uint64&);
	virtual Boolean getAccess(CIMProperty&) const;
	virtual Uint16 getAccess() const;
	virtual void setAccess(Uint16&);
	virtual Boolean getHostResourceBlockSize(CIMProperty&) const;
	virtual Uint64 getHostResourceBlockSize() const;
	virtual void setHostResourceBlockSize(Uint64&);
	virtual Boolean getHostExtentStartingAddress(CIMProperty&) const;
	virtual Uint64 getHostExtentStartingAddress() const;
	virtual void setHostExtentStartingAddress(Uint64&);
	virtual Boolean getHostExtentName(CIMProperty&) const;
	virtual String getHostExtentName() const;
	virtual void setHostExtentName(String&);
	virtual Boolean getHostExtentNameFormat(CIMProperty&) const;
	virtual Uint16 getHostExtentNameFormat() const;
	virtual void setHostExtentNameFormat(Uint16&);
	virtual Boolean getOtherHostExtentNameFormat(CIMProperty&) const;
	virtual String getOtherHostExtentNameFormat() const;
	virtual void setOtherHostExtentNameFormat(String&);
	virtual Boolean getHostExtentNameNamespace(CIMProperty&) const;
	virtual Uint16 getHostExtentNameNamespace() const;
	virtual void setHostExtentNameNamespace(Uint16&);
	virtual Boolean getOtherHostExtentNameNamespace(CIMProperty&) const;
	virtual String getOtherHostExtentNameNamespace() const;
	virtual void setOtherHostExtentNameNamespace(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _configurationName;
	Uint16 _changeableType;
	Array<String> _componentSetting;
	String _soID;
	String _soOrgID;
	Uint16 _resourceType;
	String _otherResourceType;
	String _resourceSubType;
	String _poolID;
	Uint16 _consumerVisibility;
	Array<String> _hostResource;
	String _allocationUnits;
	Uint64 _virtualQuantity;
	Uint64 _reservation;
	Uint64 _limit;
	Uint32 _weight;
	Boolean _automaticAllocation;
	Boolean _automaticDeallocation;
	String _parent;
	Array<String> _connection;
	String _address;
	Uint16 _mappingBehavior;
	String _addressOnParent;
	String _virtualQuantityUnits;
	Uint64 _virtualResourceBlockSize;
	Uint16 _access;
	Uint64 _hostResourceBlockSize;
	Uint64 _hostExtentStartingAddress;
	String _hostExtentName;
	Uint16 _hostExtentNameFormat;
	String _otherHostExtentNameFormat;
	Uint16 _hostExtentNameNamespace;
	String _otherHostExtentNameNamespace;

#	include "UNIX_StorageAllocationSettingDataPrivate.h"


};

#endif /* UNIX_STORAGEALLOCATIONSETTINGDATA */
