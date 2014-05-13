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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageNameBinding
*/


/* **** Description *** */
/*
StorageNameBinding instances represent bindings between transport-specific devices names and either OS device names/addresses or virtual initiator names. Bindings are defined by administrators and are persistent. The binding defines names of other elements that may or may not correlate to other CIM classes. It must be possible to create these bindings in cases when CIM instances for these other elements are not available. This may be because the elements are temporarily unavailable or because the elements are managed by some other providers or because the binding represents a 'black listed' device name. A SettingData models the persistence of the binding in the absence of the elements. In the descriptions below, FC API refers to the FC API as specified in the t11_5 workgroup, and IMA refers to the iSCSI Management API as specified in the SNIA IPS Management workgroup. 

Three types of bindings are modeled: 
- OSStorageNameBinding models a binding from a storage elements to OS device names or addresses (as used in FC API PersistentBindings and IMA ExposeLun. One side of the binding represents a device (as viewed from the system scoping the binding) and the name exposed by the scoping system. For example, Fibre Channel HBAs support binding of Fibre Channel port names (and optionally a SCSI logical unit identifier) to OS device names. Each time the system or device is stopped and restated, the same OS device name is bound to the device. 
- StorageBridgeNameBinding models gateways where a name valid for one transport is mapped to a name valid for a different transport. This binding is used in bridge devices that allow Infiniband or iSCSI host adapters to connect to Fibre Channel devices. 
- The third type of binding is similar to the first, but no OS device name or address is provided, the OS uses its usual rules to assign names. For this type of binding, the superclass can be used.
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

			CIM_StorageNameBinding:
				BindingType UInt16
				BindAllLogicalUnits Boolean
				Hide Boolean
				TargetName String
				LogicalUnitNumber String
				Status UInt32
				OtherStatus String
				LocalPortNameType UInt16
				LocalPortName String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_StorageNameBinding:


*/

#ifndef __CIM_STORAGENAMEBINDING_H
#define __CIM_STORAGENAMEBINDING_H


#include "CIM_SettingData.h"


#ifndef PROPERTY_BINDING_TYPE
#define PROPERTY_BINDING_TYPE \
					"BindingType"
#endif

#ifndef PROPERTY_BIND_ALL_LOGICAL_UNITS
#define PROPERTY_BIND_ALL_LOGICAL_UNITS \
					"BindAllLogicalUnits"
#endif

#ifndef PROPERTY_HIDE
#define PROPERTY_HIDE \
					"Hide"
#endif

#ifndef PROPERTY_TARGET_NAME
#define PROPERTY_TARGET_NAME \
					"TargetName"
#endif

#ifndef PROPERTY_LOGICAL_UNIT_NUMBER
#define PROPERTY_LOGICAL_UNIT_NUMBER \
					"LogicalUnitNumber"
#endif

#ifndef PROPERTY_STATUS
#define PROPERTY_STATUS \
					"Status"
#endif

#ifndef PROPERTY_OTHER_STATUS
#define PROPERTY_OTHER_STATUS \
					"OtherStatus"
#endif

#ifndef PROPERTY_LOCAL_PORT_NAME_TYPE
#define PROPERTY_LOCAL_PORT_NAME_TYPE \
					"LocalPortNameType"
#endif

#ifndef PROPERTY_LOCAL_PORT_NAME
#define PROPERTY_LOCAL_PORT_NAME \
					"LocalPortName"
#endif



class CIM_StorageNameBinding :
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

	virtual Boolean getBindingType(CIMProperty&) const=0;
	virtual Uint16 getBindingType() const=0;
	virtual void setBindingType(Uint16&)=0;
	virtual Boolean getBindAllLogicalUnits(CIMProperty&) const=0;
	virtual Boolean getBindAllLogicalUnits() const=0;
	virtual void setBindAllLogicalUnits(Boolean&)=0;
	virtual Boolean getHide(CIMProperty&) const=0;
	virtual Boolean getHide() const=0;
	virtual void setHide(Boolean&)=0;
	virtual Boolean getTargetName(CIMProperty&) const=0;
	virtual String getTargetName() const=0;
	virtual void setTargetName(String&)=0;
	virtual Boolean getLogicalUnitNumber(CIMProperty&) const=0;
	virtual String getLogicalUnitNumber() const=0;
	virtual void setLogicalUnitNumber(String&)=0;
	virtual Boolean getStatus(CIMProperty&) const=0;
	virtual Uint32 getStatus() const=0;
	virtual void setStatus(Uint32&)=0;
	virtual Boolean getOtherStatus(CIMProperty&) const=0;
	virtual String getOtherStatus() const=0;
	virtual void setOtherStatus(String&)=0;
	virtual Boolean getLocalPortNameType(CIMProperty&) const=0;
	virtual Uint16 getLocalPortNameType() const=0;
	virtual void setLocalPortNameType(Uint16&)=0;
	virtual Boolean getLocalPortName(CIMProperty&) const=0;
	virtual String getLocalPortName() const=0;
	virtual void setLocalPortName(String&)=0;


private:

};

#endif /* CIM_STORAGENAMEBINDING */
