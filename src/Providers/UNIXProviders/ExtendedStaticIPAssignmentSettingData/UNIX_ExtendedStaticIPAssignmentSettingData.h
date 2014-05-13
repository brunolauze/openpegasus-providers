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
2.32.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::IP
*/


/* **** Description *** */
/*
CIM_ExtendedStaticIPAssignmentSettingData defines a IP configuration which could be statically assigned to a Network Interface / LANEndpoint.
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

			UNIX_ExtendedStaticIPAssignmentSettingData:
				IPAddresses String
				IPv6SubnetPrefixLengths UInt16
				SubnetMasks String
				GatewayAddresses String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_IPAssignmentSettingData:

			UNIX_ExtendedStaticIPAssignmentSettingData:


*/

#ifndef __UNIX_EXTENDEDSTATICIPASSIGNMENTSETTINGDATA_H
#define __UNIX_EXTENDEDSTATICIPASSIGNMENTSETTINGDATA_H


#include "CIM_IPAssignmentSettingData.h"

#include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps.h"


#ifndef PROPERTY_IP_ADDRESSES
#define PROPERTY_IP_ADDRESSES \
					"IPAddresses"
#endif

#ifndef PROPERTY_IPV_6_SUBNET_PREFIX_LENGTHS
#define PROPERTY_IPV_6_SUBNET_PREFIX_LENGTHS \
					"IPv6SubnetPrefixLengths"
#endif

#ifndef PROPERTY_SUBNET_MASKS
#define PROPERTY_SUBNET_MASKS \
					"SubnetMasks"
#endif

#ifndef PROPERTY_GATEWAY_ADDRESSES
#define PROPERTY_GATEWAY_ADDRESSES \
					"GatewayAddresses"
#endif



class UNIX_ExtendedStaticIPAssignmentSettingData :
	public CIM_IPAssignmentSettingData
{
public:

	UNIX_ExtendedStaticIPAssignmentSettingData();
	~UNIX_ExtendedStaticIPAssignmentSettingData();

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
	virtual Boolean getIPAddresses(CIMProperty&) const;
	virtual Array<String> getIPAddresses() const;
	virtual void setIPAddresses(Array<String>&);
	virtual Boolean getIPv6SubnetPrefixLengths(CIMProperty&) const;
	virtual Array<Uint16> getIPv6SubnetPrefixLengths() const;
	virtual void setIPv6SubnetPrefixLengths(Array<Uint16>&);
	virtual Boolean getSubnetMasks(CIMProperty&) const;
	virtual Array<String> getSubnetMasks() const;
	virtual void setSubnetMasks(Array<String>&);
	virtual Boolean getGatewayAddresses(CIMProperty&) const;
	virtual Array<String> getGatewayAddresses() const;
	virtual void setGatewayAddresses(Array<String>&);


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
	Array<String> _iPAddresses;
	Array<Uint16> _iPv6SubnetPrefixLengths;
	Array<String> _subnetMasks;
	Array<String> _gatewayAddresses;

#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate.h"


};

#endif /* UNIX_EXTENDEDSTATICIPASSIGNMENTSETTINGDATA */
