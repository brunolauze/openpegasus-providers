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
2.32.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network
*/


/* **** Description *** */
/*
This class describes the configuration of a firewall policy rule that applies from a group to another group. The current definition of the class restricts the FirewallRuleSettingData to be specified from one group to another group. Multiple instances of FirewallRuleSettingData are needed to support firewall policy for multiple groups.
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

			CIM_NetworkPolicyRuleSettingData:

			UNIX_FirewallRuleSettingData:
				FromGroupMembers String
				ToGroupMembers String
				FromGroupMemberType UInt16
				ToGroupMemberType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_NetworkPolicyRuleSettingData:

			UNIX_FirewallRuleSettingData:


*/

#ifndef __UNIX_FIREWALLRULESETTINGDATA_H
#define __UNIX_FIREWALLRULESETTINGDATA_H


#include "CIM_NetworkPolicyRuleSettingData.h"

#include "UNIX_FirewallRuleSettingDataDeps.h"


#ifndef PROPERTY_FROM_GROUP_MEMBERS
#define PROPERTY_FROM_GROUP_MEMBERS \
					"FromGroupMembers"
#endif

#ifndef PROPERTY_TO_GROUP_MEMBERS
#define PROPERTY_TO_GROUP_MEMBERS \
					"ToGroupMembers"
#endif

#ifndef PROPERTY_FROM_GROUP_MEMBER_TYPE
#define PROPERTY_FROM_GROUP_MEMBER_TYPE \
					"FromGroupMemberType"
#endif

#ifndef PROPERTY_TO_GROUP_MEMBER_TYPE
#define PROPERTY_TO_GROUP_MEMBER_TYPE \
					"ToGroupMemberType"
#endif



class UNIX_FirewallRuleSettingData :
	public CIM_NetworkPolicyRuleSettingData
{
public:

	UNIX_FirewallRuleSettingData();
	~UNIX_FirewallRuleSettingData();

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
	virtual Boolean getFromGroupMembers(CIMProperty&) const;
	virtual Array<String> getFromGroupMembers() const;
	virtual void setFromGroupMembers(Array<String>&);
	virtual Boolean getToGroupMembers(CIMProperty&) const;
	virtual Array<String> getToGroupMembers() const;
	virtual void setToGroupMembers(Array<String>&);
	virtual Boolean getFromGroupMemberType(CIMProperty&) const;
	virtual Array<Uint16> getFromGroupMemberType() const;
	virtual void setFromGroupMemberType(Array<Uint16>&);
	virtual Boolean getToGroupMemberType(CIMProperty&) const;
	virtual Array<Uint16> getToGroupMemberType() const;
	virtual void setToGroupMemberType(Array<Uint16>&);


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
	Array<String> _fromGroupMembers;
	Array<String> _toGroupMembers;
	Array<Uint16> _fromGroupMemberType;
	Array<Uint16> _toGroupMemberType;

#	include "UNIX_FirewallRuleSettingDataPrivate.h"


};

#endif /* UNIX_FIREWALLRULESETTINGDATA */
