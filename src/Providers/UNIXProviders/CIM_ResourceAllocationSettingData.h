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
2.24.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Resource
*/


/* **** Description *** */
/*
The ResourceAllocationSettingData class represents settings specifically related to an allocated resource that are outside the scope of the CIM class typically used to represent the resource itself. These settings include information specific to the allocation that may not be visible to the consumer of the resource itself. For example, a virtual processor may look like a 2 ghz processor to the consumer (virtual computer system), however the virtualization system may use time-slicing to schedule the the virtual processor to only allow it to use 1 ghz.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ResourceAllocationSettingData:


*/

#ifndef __CIM_RESOURCEALLOCATIONSETTINGDATA_H
#define __CIM_RESOURCEALLOCATIONSETTINGDATA_H


#include "CIM_SettingData.h"


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

#ifndef PROPERTY_POOL_ID
#define PROPERTY_POOL_ID \
					"PoolID"
#endif

#ifndef PROPERTY_CONSUMER_VISIBILITY
#define PROPERTY_CONSUMER_VISIBILITY \
					"ConsumerVisibility"
#endif

#ifndef PROPERTY_HOST_RESOURCE
#define PROPERTY_HOST_RESOURCE \
					"HostResource"
#endif

#ifndef PROPERTY_ALLOCATION_UNITS
#define PROPERTY_ALLOCATION_UNITS \
					"AllocationUnits"
#endif

#ifndef PROPERTY_VIRTUAL_QUANTITY
#define PROPERTY_VIRTUAL_QUANTITY \
					"VirtualQuantity"
#endif

#ifndef PROPERTY_RESERVATION
#define PROPERTY_RESERVATION \
					"Reservation"
#endif

#ifndef PROPERTY_LIMIT
#define PROPERTY_LIMIT \
					"Limit"
#endif

#ifndef PROPERTY_WEIGHT
#define PROPERTY_WEIGHT \
					"Weight"
#endif

#ifndef PROPERTY_AUTOMATIC_ALLOCATION
#define PROPERTY_AUTOMATIC_ALLOCATION \
					"AutomaticAllocation"
#endif

#ifndef PROPERTY_AUTOMATIC_DEALLOCATION
#define PROPERTY_AUTOMATIC_DEALLOCATION \
					"AutomaticDeallocation"
#endif

#ifndef PROPERTY_PARENT
#define PROPERTY_PARENT \
					"Parent"
#endif

#ifndef PROPERTY_CONNECTION
#define PROPERTY_CONNECTION \
					"Connection"
#endif

#ifndef PROPERTY_ADDRESS
#define PROPERTY_ADDRESS \
					"Address"
#endif

#ifndef PROPERTY_MAPPING_BEHAVIOR
#define PROPERTY_MAPPING_BEHAVIOR \
					"MappingBehavior"
#endif

#ifndef PROPERTY_ADDRESS_ON_PARENT
#define PROPERTY_ADDRESS_ON_PARENT \
					"AddressOnParent"
#endif

#ifndef PROPERTY_VIRTUAL_QUANTITY_UNITS
#define PROPERTY_VIRTUAL_QUANTITY_UNITS \
					"VirtualQuantityUnits"
#endif



class CIM_ResourceAllocationSettingData :
	public CIM_SettingData
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getResourceType(CIMProperty&) const=0;
	virtual Uint16 getResourceType() const=0;
	virtual void setResourceType(Uint16&)=0;
	virtual Boolean getOtherResourceType(CIMProperty&) const=0;
	virtual String getOtherResourceType() const=0;
	virtual void setOtherResourceType(String&)=0;
	virtual Boolean getResourceSubType(CIMProperty&) const=0;
	virtual String getResourceSubType() const=0;
	virtual void setResourceSubType(String&)=0;
	virtual Boolean getPoolID(CIMProperty&) const=0;
	virtual String getPoolID() const=0;
	virtual void setPoolID(String&)=0;
	virtual Boolean getConsumerVisibility(CIMProperty&) const=0;
	virtual Uint16 getConsumerVisibility() const=0;
	virtual void setConsumerVisibility(Uint16&)=0;
	virtual Boolean getHostResource(CIMProperty&) const=0;
	virtual Array<String> getHostResource() const=0;
	virtual void setHostResource(Array<String>&)=0;
	virtual Boolean getAllocationUnits(CIMProperty&) const=0;
	virtual String getAllocationUnits() const=0;
	virtual void setAllocationUnits(String&)=0;
	virtual Boolean getVirtualQuantity(CIMProperty&) const=0;
	virtual Uint64 getVirtualQuantity() const=0;
	virtual void setVirtualQuantity(Uint64&)=0;
	virtual Boolean getReservation(CIMProperty&) const=0;
	virtual Uint64 getReservation() const=0;
	virtual void setReservation(Uint64&)=0;
	virtual Boolean getLimit(CIMProperty&) const=0;
	virtual Uint64 getLimit() const=0;
	virtual void setLimit(Uint64&)=0;
	virtual Boolean getWeight(CIMProperty&) const=0;
	virtual Uint32 getWeight() const=0;
	virtual void setWeight(Uint32&)=0;
	virtual Boolean getAutomaticAllocation(CIMProperty&) const=0;
	virtual Boolean getAutomaticAllocation() const=0;
	virtual void setAutomaticAllocation(Boolean&)=0;
	virtual Boolean getAutomaticDeallocation(CIMProperty&) const=0;
	virtual Boolean getAutomaticDeallocation() const=0;
	virtual void setAutomaticDeallocation(Boolean&)=0;
	virtual Boolean getParent(CIMProperty&) const=0;
	virtual String getParent() const=0;
	virtual void setParent(String&)=0;
	virtual Boolean getConnection(CIMProperty&) const=0;
	virtual Array<String> getConnection() const=0;
	virtual void setConnection(Array<String>&)=0;
	virtual Boolean getAddress(CIMProperty&) const=0;
	virtual String getAddress() const=0;
	virtual void setAddress(String&)=0;
	virtual Boolean getMappingBehavior(CIMProperty&) const=0;
	virtual Uint16 getMappingBehavior() const=0;
	virtual void setMappingBehavior(Uint16&)=0;
	virtual Boolean getAddressOnParent(CIMProperty&) const=0;
	virtual String getAddressOnParent() const=0;
	virtual void setAddressOnParent(String&)=0;
	virtual Boolean getVirtualQuantityUnits(CIMProperty&) const=0;
	virtual String getVirtualQuantityUnits() const=0;
	virtual void setVirtualQuantityUnits(String&)=0;


private:

};

#endif /* CIM_RESOURCEALLOCATIONSETTINGDATA */
