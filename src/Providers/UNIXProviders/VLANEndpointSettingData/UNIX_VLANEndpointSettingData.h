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
2.27.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::VLAN
*/


/* **** Description *** */
/*
The VLAN configuration data for an endpoint. Note that certain properties only apply based on the value in the VLANEndpoint. OperationalEndpointMode property. If it is set to trunking mode then NativeVLAN, PruneEligibleVLANList, DefaultVLAN and TrunkedVLANList are applicable. If it is set to in access mode, then AccessVLAN is applicable. An instance of this class is associated to the endpoint to which it applies using ElementSettingData.
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

			UNIX_VLANEndpointSettingData:
				PruneEligibleVLANList UInt16
				NativeVLAN UInt16
				DefaultVLAN UInt16
				TrunkedVLANList UInt16
				AccessVLAN UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_VLANEndpointSettingData:


*/

#ifndef __UNIX_VLANENDPOINTSETTINGDATA_H
#define __UNIX_VLANENDPOINTSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_VLANEndpointSettingDataDeps.h"


#ifndef PROPERTY_PRUNE_ELIGIBLE_VLAN_LIST
#define PROPERTY_PRUNE_ELIGIBLE_VLAN_LIST \
					"PruneEligibleVLANList"
#endif

#ifndef PROPERTY_NATIVE_VLAN
#define PROPERTY_NATIVE_VLAN \
					"NativeVLAN"
#endif

#ifndef PROPERTY_DEFAULT_VLAN
#define PROPERTY_DEFAULT_VLAN \
					"DefaultVLAN"
#endif

#ifndef PROPERTY_TRUNKED_VLAN_LIST
#define PROPERTY_TRUNKED_VLAN_LIST \
					"TrunkedVLANList"
#endif

#ifndef PROPERTY_ACCESS_VLAN
#define PROPERTY_ACCESS_VLAN \
					"AccessVLAN"
#endif



class UNIX_VLANEndpointSettingData :
	public CIM_SettingData
{
public:

	UNIX_VLANEndpointSettingData();
	~UNIX_VLANEndpointSettingData();

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
	virtual Boolean getPruneEligibleVLANList(CIMProperty&) const;
	virtual Array<Uint16> getPruneEligibleVLANList() const;
	virtual void setPruneEligibleVLANList(Array<Uint16>&);
	virtual Boolean getNativeVLAN(CIMProperty&) const;
	virtual Uint16 getNativeVLAN() const;
	virtual void setNativeVLAN(Uint16&);
	virtual Boolean getDefaultVLAN(CIMProperty&) const;
	virtual Uint16 getDefaultVLAN() const;
	virtual void setDefaultVLAN(Uint16&);
	virtual Boolean getTrunkedVLANList(CIMProperty&) const;
	virtual Array<Uint16> getTrunkedVLANList() const;
	virtual void setTrunkedVLANList(Array<Uint16>&);
	virtual Boolean getAccessVLAN(CIMProperty&) const;
	virtual Uint16 getAccessVLAN() const;
	virtual void setAccessVLAN(Uint16&);


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
	Array<Uint16> _pruneEligibleVLANList;
	Uint16 _nativeVLAN;
	Uint16 _defaultVLAN;
	Array<Uint16> _trunkedVLANList;
	Uint16 _accessVLAN;

#	include "UNIX_VLANEndpointSettingDataPrivate.h"


};

#endif /* UNIX_VLANENDPOINTSETTINGDATA */
