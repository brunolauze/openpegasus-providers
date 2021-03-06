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
CIM::Network::DHCP
*/


/* **** Description *** */
/*
This class represents the desired configuration settings for the DHCPProtocolEndpoint (i.e. DHCP client configuration.
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

			UNIX_DHCPSettingData:
				RequestedIPv4Address String
				RequestedLeaseTime UInt32
				ClientIdentifier String
				VendorClassIdentifier String
				RequestedOptions UInt16
				RequiredOptions UInt16
				IPv6RequestedOptions UInt16
				IPv6RequiredOptions UInt16
				RequestedIPv6Address String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_IPAssignmentSettingData:

			UNIX_DHCPSettingData:


*/

#ifndef __UNIX_DHCPSETTINGDATA_H
#define __UNIX_DHCPSETTINGDATA_H


#include "CIM_IPAssignmentSettingData.h"

#include "UNIX_DHCPSettingDataDeps.h"


#ifndef PROPERTY_REQUESTED_IPV_4_ADDRESS
#define PROPERTY_REQUESTED_IPV_4_ADDRESS \
					"RequestedIPv4Address"
#endif

#ifndef PROPERTY_REQUESTED_LEASE_TIME
#define PROPERTY_REQUESTED_LEASE_TIME \
					"RequestedLeaseTime"
#endif

#ifndef PROPERTY_CLIENT_IDENTIFIER
#define PROPERTY_CLIENT_IDENTIFIER \
					"ClientIdentifier"
#endif

#ifndef PROPERTY_VENDOR_CLASS_IDENTIFIER
#define PROPERTY_VENDOR_CLASS_IDENTIFIER \
					"VendorClassIdentifier"
#endif

#ifndef PROPERTY_REQUESTED_OPTIONS
#define PROPERTY_REQUESTED_OPTIONS \
					"RequestedOptions"
#endif

#ifndef PROPERTY_REQUIRED_OPTIONS
#define PROPERTY_REQUIRED_OPTIONS \
					"RequiredOptions"
#endif

#ifndef PROPERTY_IPV_6_REQUESTED_OPTIONS
#define PROPERTY_IPV_6_REQUESTED_OPTIONS \
					"IPv6RequestedOptions"
#endif

#ifndef PROPERTY_IPV_6_REQUIRED_OPTIONS
#define PROPERTY_IPV_6_REQUIRED_OPTIONS \
					"IPv6RequiredOptions"
#endif

#ifndef PROPERTY_REQUESTED_IPV_6_ADDRESS
#define PROPERTY_REQUESTED_IPV_6_ADDRESS \
					"RequestedIPv6Address"
#endif



class UNIX_DHCPSettingData :
	public CIM_IPAssignmentSettingData
{
public:

	UNIX_DHCPSettingData();
	~UNIX_DHCPSettingData();

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
	virtual Boolean getRequestedIPv4Address(CIMProperty&) const;
	virtual String getRequestedIPv4Address() const;
	virtual void setRequestedIPv4Address(String&);
	virtual Boolean getRequestedLeaseTime(CIMProperty&) const;
	virtual Uint32 getRequestedLeaseTime() const;
	virtual void setRequestedLeaseTime(Uint32&);
	virtual Boolean getClientIdentifier(CIMProperty&) const;
	virtual String getClientIdentifier() const;
	virtual void setClientIdentifier(String&);
	virtual Boolean getVendorClassIdentifier(CIMProperty&) const;
	virtual String getVendorClassIdentifier() const;
	virtual void setVendorClassIdentifier(String&);
	virtual Boolean getRequestedOptions(CIMProperty&) const;
	virtual Array<Uint16> getRequestedOptions() const;
	virtual void setRequestedOptions(Array<Uint16>&);
	virtual Boolean getRequiredOptions(CIMProperty&) const;
	virtual Array<Uint16> getRequiredOptions() const;
	virtual void setRequiredOptions(Array<Uint16>&);
	virtual Boolean getIPv6RequestedOptions(CIMProperty&) const;
	virtual Array<Uint16> getIPv6RequestedOptions() const;
	virtual void setIPv6RequestedOptions(Array<Uint16>&);
	virtual Boolean getIPv6RequiredOptions(CIMProperty&) const;
	virtual Array<Uint16> getIPv6RequiredOptions() const;
	virtual void setIPv6RequiredOptions(Array<Uint16>&);
	virtual Boolean getRequestedIPv6Address(CIMProperty&) const;
	virtual String getRequestedIPv6Address() const;
	virtual void setRequestedIPv6Address(String&);


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
	String _requestedIPv4Address;
	Uint32 _requestedLeaseTime;
	String _clientIdentifier;
	String _vendorClassIdentifier;
	Array<Uint16> _requestedOptions;
	Array<Uint16> _requiredOptions;
	Array<Uint16> _iPv6RequestedOptions;
	Array<Uint16> _iPv6RequiredOptions;
	String _requestedIPv6Address;

#	include "UNIX_DHCPSettingDataPrivate.h"


};

#endif /* UNIX_DHCPSETTINGDATA */
