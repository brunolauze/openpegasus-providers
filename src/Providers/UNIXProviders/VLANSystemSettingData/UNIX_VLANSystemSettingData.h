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
CIM::Network::VLAN
*/


/* **** Description *** */
/*
The VLAN configuration data for a system. It is associated to the System to which it applies using the ElementSettingData association.
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

			UNIX_VLANSystemSettingData:
				ReservedVLANList UInt16
				InternalVLANList UInt16
				NumberOfConfiguredVLANs UInt16
				DynamicVLANList UInt16
				StaticVLANList UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_VLANSystemSettingData:


*/

#ifndef __UNIX_VLANSYSTEMSETTINGDATA_H
#define __UNIX_VLANSYSTEMSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_VLANSystemSettingDataDeps.h"


#ifndef PROPERTY_RESERVED_VLAN_LIST
#define PROPERTY_RESERVED_VLAN_LIST \
					"ReservedVLANList"
#endif

#ifndef PROPERTY_INTERNAL_VLAN_LIST
#define PROPERTY_INTERNAL_VLAN_LIST \
					"InternalVLANList"
#endif

#ifndef PROPERTY_NUMBER_OF_CONFIGURED_VLANS
#define PROPERTY_NUMBER_OF_CONFIGURED_VLANS \
					"NumberOfConfiguredVLANs"
#endif

#ifndef PROPERTY_DYNAMIC_VLAN_LIST
#define PROPERTY_DYNAMIC_VLAN_LIST \
					"DynamicVLANList"
#endif

#ifndef PROPERTY_STATIC_VLAN_LIST
#define PROPERTY_STATIC_VLAN_LIST \
					"StaticVLANList"
#endif



class UNIX_VLANSystemSettingData :
	public CIM_SettingData
{
public:

	UNIX_VLANSystemSettingData();
	~UNIX_VLANSystemSettingData();

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
	virtual Boolean getReservedVLANList(CIMProperty&) const;
	virtual Array<Uint16> getReservedVLANList() const;
	virtual void setReservedVLANList(Array<Uint16>&);
	virtual Boolean getInternalVLANList(CIMProperty&) const;
	virtual Array<Uint16> getInternalVLANList() const;
	virtual void setInternalVLANList(Array<Uint16>&);
	virtual Boolean getNumberOfConfiguredVLANs(CIMProperty&) const;
	virtual Uint16 getNumberOfConfiguredVLANs() const;
	virtual void setNumberOfConfiguredVLANs(Uint16&);
	virtual Boolean getDynamicVLANList(CIMProperty&) const;
	virtual Array<Uint16> getDynamicVLANList() const;
	virtual void setDynamicVLANList(Array<Uint16>&);
	virtual Boolean getStaticVLANList(CIMProperty&) const;
	virtual Array<Uint16> getStaticVLANList() const;
	virtual void setStaticVLANList(Array<Uint16>&);


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
	Array<Uint16> _reservedVLANList;
	Array<Uint16> _internalVLANList;
	Uint16 _numberOfConfiguredVLANs;
	Array<Uint16> _dynamicVLANList;
	Array<Uint16> _staticVLANList;

#	include "UNIX_VLANSystemSettingDataPrivate.h"


};

#endif /* UNIX_VLANSYSTEMSETTINGDATA */
