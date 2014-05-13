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
This class describes the configuration of a load balancing network policy rule.
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

			UNIX_LoadBalancingRuleSettingData:
				ServerPoolName String
				VirtualIPAddress String
				VirtualPortNumber UInt16
				ServerPoolMemberIPAddresses String
				ServerPoolMemberPortNumbers UInt16
				ServerPoolMemberWeights UInt16
				InputNetworkName String
				Algorithm UInt16
				Protocols UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_NetworkPolicyRuleSettingData:

			UNIX_LoadBalancingRuleSettingData:


*/

#ifndef __UNIX_LOADBALANCINGRULESETTINGDATA_H
#define __UNIX_LOADBALANCINGRULESETTINGDATA_H


#include "CIM_NetworkPolicyRuleSettingData.h"

#include "UNIX_LoadBalancingRuleSettingDataDeps.h"


#ifndef PROPERTY_SERVER_POOL_NAME
#define PROPERTY_SERVER_POOL_NAME \
					"ServerPoolName"
#endif

#ifndef PROPERTY_VIRTUAL_IP_ADDRESS
#define PROPERTY_VIRTUAL_IP_ADDRESS \
					"VirtualIPAddress"
#endif

#ifndef PROPERTY_VIRTUAL_PORT_NUMBER
#define PROPERTY_VIRTUAL_PORT_NUMBER \
					"VirtualPortNumber"
#endif

#ifndef PROPERTY_SERVER_POOL_MEMBER_IP_ADDRESSES
#define PROPERTY_SERVER_POOL_MEMBER_IP_ADDRESSES \
					"ServerPoolMemberIPAddresses"
#endif

#ifndef PROPERTY_SERVER_POOL_MEMBER_PORT_NUMBERS
#define PROPERTY_SERVER_POOL_MEMBER_PORT_NUMBERS \
					"ServerPoolMemberPortNumbers"
#endif

#ifndef PROPERTY_SERVER_POOL_MEMBER_WEIGHTS
#define PROPERTY_SERVER_POOL_MEMBER_WEIGHTS \
					"ServerPoolMemberWeights"
#endif

#ifndef PROPERTY_INPUT_NETWORK_NAME
#define PROPERTY_INPUT_NETWORK_NAME \
					"InputNetworkName"
#endif

#ifndef PROPERTY_ALGORITHM
#define PROPERTY_ALGORITHM \
					"Algorithm"
#endif

#ifndef PROPERTY_PROTOCOLS
#define PROPERTY_PROTOCOLS \
					"Protocols"
#endif



class UNIX_LoadBalancingRuleSettingData :
	public CIM_NetworkPolicyRuleSettingData
{
public:

	UNIX_LoadBalancingRuleSettingData();
	~UNIX_LoadBalancingRuleSettingData();

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
	virtual Boolean getServerPoolName(CIMProperty&) const;
	virtual String getServerPoolName() const;
	virtual void setServerPoolName(String&);
	virtual Boolean getVirtualIPAddress(CIMProperty&) const;
	virtual String getVirtualIPAddress() const;
	virtual void setVirtualIPAddress(String&);
	virtual Boolean getVirtualPortNumber(CIMProperty&) const;
	virtual Uint16 getVirtualPortNumber() const;
	virtual void setVirtualPortNumber(Uint16&);
	virtual Boolean getServerPoolMemberIPAddresses(CIMProperty&) const;
	virtual Array<String> getServerPoolMemberIPAddresses() const;
	virtual void setServerPoolMemberIPAddresses(Array<String>&);
	virtual Boolean getServerPoolMemberPortNumbers(CIMProperty&) const;
	virtual Array<Uint16> getServerPoolMemberPortNumbers() const;
	virtual void setServerPoolMemberPortNumbers(Array<Uint16>&);
	virtual Boolean getServerPoolMemberWeights(CIMProperty&) const;
	virtual Array<Uint16> getServerPoolMemberWeights() const;
	virtual void setServerPoolMemberWeights(Array<Uint16>&);
	virtual Boolean getInputNetworkName(CIMProperty&) const;
	virtual String getInputNetworkName() const;
	virtual void setInputNetworkName(String&);
	virtual Boolean getAlgorithm(CIMProperty&) const;
	virtual Uint16 getAlgorithm() const;
	virtual void setAlgorithm(Uint16&);
	virtual Boolean getProtocols(CIMProperty&) const;
	virtual Array<Uint16> getProtocols() const;
	virtual void setProtocols(Array<Uint16>&);


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
	String _serverPoolName;
	String _virtualIPAddress;
	Uint16 _virtualPortNumber;
	Array<String> _serverPoolMemberIPAddresses;
	Array<Uint16> _serverPoolMemberPortNumbers;
	Array<Uint16> _serverPoolMemberWeights;
	String _inputNetworkName;
	Uint16 _algorithm;
	Array<Uint16> _protocols;

#	include "UNIX_LoadBalancingRuleSettingDataPrivate.h"


};

#endif /* UNIX_LOADBALANCINGRULESETTINGDATA */
