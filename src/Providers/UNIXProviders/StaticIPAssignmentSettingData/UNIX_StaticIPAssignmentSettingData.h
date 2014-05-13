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
CIM::Network::IP
*/


/* **** Description *** */
/*
CIM_StaticIPAssignmentSettingData defines a basic IP configuration which could be statically assigned to an IPProtocolEndpoint. This class defines a partial configuration. Instances are aggregated into an instance of IPAssignmentSettingData which defines a full configuration.
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

			CIM_IPAssignmentSettingData:
				AddressOrigin UInt16
				ProtocolIFType UInt16
				AddressPrefixOrigin UInt16
				AddressSuffixOrigin UInt16
				OtherAddressPrefixOriginDescription String
				OtherAddressSuffixOriginDescription String

			UNIX_StaticIPAssignmentSettingData:
				IPv4Address String
				SubnetMask String
				GatewayIPv4Address String
				GatewayIPv6Address String
				IPv6Address String
				IPv6AddressType UInt16
				IPv6SubnetPrefixLength UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_IPAssignmentSettingData:

			UNIX_StaticIPAssignmentSettingData:


*/

#ifndef __UNIX_STATICIPASSIGNMENTSETTINGDATA_H
#define __UNIX_STATICIPASSIGNMENTSETTINGDATA_H


#include "CIM_IPAssignmentSettingData.h"

#include "UNIX_StaticIPAssignmentSettingDataDeps.h"


#ifndef PROPERTY_IPV_4_ADDRESS
#define PROPERTY_IPV_4_ADDRESS \
					"IPv4Address"
#endif

#ifndef PROPERTY_SUBNET_MASK
#define PROPERTY_SUBNET_MASK \
					"SubnetMask"
#endif

#ifndef PROPERTY_GATEWAY_IPV_4_ADDRESS
#define PROPERTY_GATEWAY_IPV_4_ADDRESS \
					"GatewayIPv4Address"
#endif

#ifndef PROPERTY_GATEWAY_IPV_6_ADDRESS
#define PROPERTY_GATEWAY_IPV_6_ADDRESS \
					"GatewayIPv6Address"
#endif

#ifndef PROPERTY_IPV_6_ADDRESS
#define PROPERTY_IPV_6_ADDRESS \
					"IPv6Address"
#endif

#ifndef PROPERTY_IPV_6_ADDRESS_TYPE
#define PROPERTY_IPV_6_ADDRESS_TYPE \
					"IPv6AddressType"
#endif

#ifndef PROPERTY_IPV_6_SUBNET_PREFIX_LENGTH
#define PROPERTY_IPV_6_SUBNET_PREFIX_LENGTH \
					"IPv6SubnetPrefixLength"
#endif



class UNIX_StaticIPAssignmentSettingData :
	public CIM_IPAssignmentSettingData
{
public:

	UNIX_StaticIPAssignmentSettingData();
	~UNIX_StaticIPAssignmentSettingData();

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
	virtual Boolean getAddressOrigin(CIMProperty&) const;
	virtual Uint16 getAddressOrigin() const;
	virtual void setAddressOrigin(Uint16&);
	virtual Boolean getProtocolIFType(CIMProperty&) const;
	virtual Uint16 getProtocolIFType() const;
	virtual void setProtocolIFType(Uint16&);
	virtual Boolean getAddressPrefixOrigin(CIMProperty&) const;
	virtual Uint16 getAddressPrefixOrigin() const;
	virtual void setAddressPrefixOrigin(Uint16&);
	virtual Boolean getAddressSuffixOrigin(CIMProperty&) const;
	virtual Uint16 getAddressSuffixOrigin() const;
	virtual void setAddressSuffixOrigin(Uint16&);
	virtual Boolean getOtherAddressPrefixOriginDescription(CIMProperty&) const;
	virtual String getOtherAddressPrefixOriginDescription() const;
	virtual void setOtherAddressPrefixOriginDescription(String&);
	virtual Boolean getOtherAddressSuffixOriginDescription(CIMProperty&) const;
	virtual String getOtherAddressSuffixOriginDescription() const;
	virtual void setOtherAddressSuffixOriginDescription(String&);
	virtual Boolean getIPv4Address(CIMProperty&) const;
	virtual String getIPv4Address() const;
	virtual void setIPv4Address(String&);
	virtual Boolean getSubnetMask(CIMProperty&) const;
	virtual String getSubnetMask() const;
	virtual void setSubnetMask(String&);
	virtual Boolean getGatewayIPv4Address(CIMProperty&) const;
	virtual String getGatewayIPv4Address() const;
	virtual void setGatewayIPv4Address(String&);
	virtual Boolean getGatewayIPv6Address(CIMProperty&) const;
	virtual String getGatewayIPv6Address() const;
	virtual void setGatewayIPv6Address(String&);
	virtual Boolean getIPv6Address(CIMProperty&) const;
	virtual String getIPv6Address() const;
	virtual void setIPv6Address(String&);
	virtual Boolean getIPv6AddressType(CIMProperty&) const;
	virtual Uint16 getIPv6AddressType() const;
	virtual void setIPv6AddressType(Uint16&);
	virtual Boolean getIPv6SubnetPrefixLength(CIMProperty&) const;
	virtual Uint16 getIPv6SubnetPrefixLength() const;
	virtual void setIPv6SubnetPrefixLength(Uint16&);


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
	Uint16 _addressOrigin;
	Uint16 _protocolIFType;
	Uint16 _addressPrefixOrigin;
	Uint16 _addressSuffixOrigin;
	String _otherAddressPrefixOriginDescription;
	String _otherAddressSuffixOriginDescription;
	String _iPv4Address;
	String _subnetMask;
	String _gatewayIPv4Address;
	String _gatewayIPv6Address;
	String _iPv6Address;
	Uint16 _iPv6AddressType;
	Uint16 _iPv6SubnetPrefixLength;

#	include "UNIX_StaticIPAssignmentSettingDataPrivate.h"


};

#endif /* UNIX_STATICIPASSIGNMENTSETTINGDATA */
