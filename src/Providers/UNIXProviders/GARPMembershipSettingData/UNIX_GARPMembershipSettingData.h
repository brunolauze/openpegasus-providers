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
Configuration for the Generic Attribute Registration Protocol (GARP). GARP is a protocol used by switches and end stations to register and de-register attribute values, such as VLAN Ids. The GVRP is an application of GARP for VLAN registration. The properties (timers) in this class are GARP control information about every ProtocolEndpoint supporting GARP & GVRP.
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

			CIM_ConnectivityMembershipSettingData:
				ConnectivityMemberType UInt16
				OtherConnectivityMemberType String
				ConnectivityMemberID String

			UNIX_GARPMembershipSettingData:
				Dot1dPortGarpJoinTime UInt32
				Dot1dPortGarpLeaveTime UInt32
				Dot1dPortGarpLeaveAllTime UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ConnectivityMembershipSettingData:

			UNIX_GARPMembershipSettingData:


*/

#ifndef __UNIX_GARPMEMBERSHIPSETTINGDATA_H
#define __UNIX_GARPMEMBERSHIPSETTINGDATA_H


#include "CIM_ConnectivityMembershipSettingData.h"

#include "UNIX_GARPMembershipSettingDataDeps.h"


#ifndef PROPERTY_DOT_1D_PORT_GARP_JOIN_TIME
#define PROPERTY_DOT_1D_PORT_GARP_JOIN_TIME \
					"Dot1dPortGarpJoinTime"
#endif

#ifndef PROPERTY_DOT_1D_PORT_GARP_LEAVE_TIME
#define PROPERTY_DOT_1D_PORT_GARP_LEAVE_TIME \
					"Dot1dPortGarpLeaveTime"
#endif

#ifndef PROPERTY_DOT_1D_PORT_GARP_LEAVE_ALL_TIME
#define PROPERTY_DOT_1D_PORT_GARP_LEAVE_ALL_TIME \
					"Dot1dPortGarpLeaveAllTime"
#endif



class UNIX_GARPMembershipSettingData :
	public CIM_ConnectivityMembershipSettingData
{
public:

	UNIX_GARPMembershipSettingData();
	~UNIX_GARPMembershipSettingData();

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
	virtual Boolean getConnectivityMemberType(CIMProperty&) const;
	virtual Uint16 getConnectivityMemberType() const;
	virtual void setConnectivityMemberType(Uint16&);
	virtual Boolean getOtherConnectivityMemberType(CIMProperty&) const;
	virtual String getOtherConnectivityMemberType() const;
	virtual void setOtherConnectivityMemberType(String&);
	virtual Boolean getConnectivityMemberID(CIMProperty&) const;
	virtual String getConnectivityMemberID() const;
	virtual void setConnectivityMemberID(String&);
	virtual Boolean getDot1dPortGarpJoinTime(CIMProperty&) const;
	virtual Uint32 getDot1dPortGarpJoinTime() const;
	virtual void setDot1dPortGarpJoinTime(Uint32&);
	virtual Boolean getDot1dPortGarpLeaveTime(CIMProperty&) const;
	virtual Uint32 getDot1dPortGarpLeaveTime() const;
	virtual void setDot1dPortGarpLeaveTime(Uint32&);
	virtual Boolean getDot1dPortGarpLeaveAllTime(CIMProperty&) const;
	virtual Uint32 getDot1dPortGarpLeaveAllTime() const;
	virtual void setDot1dPortGarpLeaveAllTime(Uint32&);


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
	Uint16 _connectivityMemberType;
	String _otherConnectivityMemberType;
	String _connectivityMemberID;
	Uint32 _dot1dPortGarpJoinTime;
	Uint32 _dot1dPortGarpLeaveTime;
	Uint32 _dot1dPortGarpLeaveAllTime;

#	include "UNIX_GARPMembershipSettingDataPrivate.h"


};

#endif /* UNIX_GARPMEMBERSHIPSETTINGDATA */
