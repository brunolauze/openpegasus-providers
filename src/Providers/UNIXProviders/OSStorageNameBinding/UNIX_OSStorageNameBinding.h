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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageNameBinding
*/


/* **** Description *** */
/*
OSStorageNameBinding represent a binding between a transport-specific name and an OS device name or address. Bindings are defined by administrators and are persistent.
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

			UNIX_OSStorageNameBinding:
				OSDeviceName String
				OSAddressesValid Boolean
				OSBusNumber UInt32
				OSTargetNumber UInt32
				OSLUN UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_StorageNameBinding:

			UNIX_OSStorageNameBinding:


*/

#ifndef __UNIX_OSSTORAGENAMEBINDING_H
#define __UNIX_OSSTORAGENAMEBINDING_H


#include "CIM_StorageNameBinding.h"

#include "UNIX_OSStorageNameBindingDeps.h"


#ifndef PROPERTY_OS_DEVICE_NAME
#define PROPERTY_OS_DEVICE_NAME \
					"OSDeviceName"
#endif

#ifndef PROPERTY_OS_ADDRESSES_VALID
#define PROPERTY_OS_ADDRESSES_VALID \
					"OSAddressesValid"
#endif

#ifndef PROPERTY_OS_BUS_NUMBER
#define PROPERTY_OS_BUS_NUMBER \
					"OSBusNumber"
#endif

#ifndef PROPERTY_OS_TARGET_NUMBER
#define PROPERTY_OS_TARGET_NUMBER \
					"OSTargetNumber"
#endif

#ifndef PROPERTY_OS_L_U_N
#define PROPERTY_OS_L_U_N \
					"OSLUN"
#endif



class UNIX_OSStorageNameBinding :
	public CIM_StorageNameBinding
{
public:

	UNIX_OSStorageNameBinding();
	~UNIX_OSStorageNameBinding();

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
	virtual Boolean getBindingType(CIMProperty&) const;
	virtual Uint16 getBindingType() const;
	virtual void setBindingType(Uint16&);
	virtual Boolean getBindAllLogicalUnits(CIMProperty&) const;
	virtual Boolean getBindAllLogicalUnits() const;
	virtual void setBindAllLogicalUnits(Boolean&);
	virtual Boolean getHide(CIMProperty&) const;
	virtual Boolean getHide() const;
	virtual void setHide(Boolean&);
	virtual Boolean getTargetName(CIMProperty&) const;
	virtual String getTargetName() const;
	virtual void setTargetName(String&);
	virtual Boolean getLogicalUnitNumber(CIMProperty&) const;
	virtual String getLogicalUnitNumber() const;
	virtual void setLogicalUnitNumber(String&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual Uint32 getStatus() const;
	virtual void setStatus(Uint32&);
	virtual Boolean getOtherStatus(CIMProperty&) const;
	virtual String getOtherStatus() const;
	virtual void setOtherStatus(String&);
	virtual Boolean getLocalPortNameType(CIMProperty&) const;
	virtual Uint16 getLocalPortNameType() const;
	virtual void setLocalPortNameType(Uint16&);
	virtual Boolean getLocalPortName(CIMProperty&) const;
	virtual String getLocalPortName() const;
	virtual void setLocalPortName(String&);
	virtual Boolean getOSDeviceName(CIMProperty&) const;
	virtual String getOSDeviceName() const;
	virtual void setOSDeviceName(String&);
	virtual Boolean getOSAddressesValid(CIMProperty&) const;
	virtual Boolean getOSAddressesValid() const;
	virtual void setOSAddressesValid(Boolean&);
	virtual Boolean getOSBusNumber(CIMProperty&) const;
	virtual Uint32 getOSBusNumber() const;
	virtual void setOSBusNumber(Uint32&);
	virtual Boolean getOSTargetNumber(CIMProperty&) const;
	virtual Uint32 getOSTargetNumber() const;
	virtual void setOSTargetNumber(Uint32&);
	virtual Boolean getOSLUN(CIMProperty&) const;
	virtual Uint32 getOSLUN() const;
	virtual void setOSLUN(Uint32&);


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
	Uint16 _bindingType;
	Boolean _bindAllLogicalUnits;
	Boolean _hide;
	String _targetName;
	String _logicalUnitNumber;
	Uint32 _status;
	String _otherStatus;
	Uint16 _localPortNameType;
	String _localPortName;
	String _oSDeviceName;
	Boolean _oSAddressesValid;
	Uint32 _oSBusNumber;
	Uint32 _oSTargetNumber;
	Uint32 _oSLUN;

#	include "UNIX_OSStorageNameBindingPrivate.h"


};

#endif /* UNIX_OSSTORAGENAMEBINDING */
