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
2.18.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::DNS
*/


/* **** Description *** */
/*
DNSSettingData defines the DNSconfiguration settings for a single IP network connection. With the exception of the the DNSServerAddresses and the hostname in use, the configuration of a DNSProtocolEndpoint is indicated by the properties of an associated instance of DNSSettingData.
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

			UNIX_DNSSettingData:
				DomainName String
				RequestedHostname String
				UseSuffixWhenRegistering Boolean
				RegisterThisConnectionsAddress Boolean
				DNSServerAddresses String
				DHCPOptionsToUse UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_IPAssignmentSettingData:

			UNIX_DNSSettingData:


*/

#ifndef __UNIX_DNSSETTINGDATA_H
#define __UNIX_DNSSETTINGDATA_H


#include "CIM_IPAssignmentSettingData.h"

#include "UNIX_DNSSettingDataDeps.h"


#ifndef PROPERTY_DOMAIN_NAME
#define PROPERTY_DOMAIN_NAME \
					"DomainName"
#endif

#ifndef PROPERTY_REQUESTED_HOSTNAME
#define PROPERTY_REQUESTED_HOSTNAME \
					"RequestedHostname"
#endif

#ifndef PROPERTY_USE_SUFFIX_WHEN_REGISTERING
#define PROPERTY_USE_SUFFIX_WHEN_REGISTERING \
					"UseSuffixWhenRegistering"
#endif

#ifndef PROPERTY_REGISTER_THIS_CONNECTIONS_ADDRESS
#define PROPERTY_REGISTER_THIS_CONNECTIONS_ADDRESS \
					"RegisterThisConnectionsAddress"
#endif

#ifndef PROPERTY_DNS_SERVER_ADDRESSES
#define PROPERTY_DNS_SERVER_ADDRESSES \
					"DNSServerAddresses"
#endif

#ifndef PROPERTY_DHCP_OPTIONS_TO_USE
#define PROPERTY_DHCP_OPTIONS_TO_USE \
					"DHCPOptionsToUse"
#endif



class UNIX_DNSSettingData :
	public CIM_IPAssignmentSettingData
{
public:

	UNIX_DNSSettingData();
	~UNIX_DNSSettingData();

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
	virtual Boolean getDomainName(CIMProperty&) const;
	virtual String getDomainName() const;
	virtual void setDomainName(String&);
	virtual Boolean getRequestedHostname(CIMProperty&) const;
	virtual String getRequestedHostname() const;
	virtual void setRequestedHostname(String&);
	virtual Boolean getUseSuffixWhenRegistering(CIMProperty&) const;
	virtual Boolean getUseSuffixWhenRegistering() const;
	virtual void setUseSuffixWhenRegistering(Boolean&);
	virtual Boolean getRegisterThisConnectionsAddress(CIMProperty&) const;
	virtual Boolean getRegisterThisConnectionsAddress() const;
	virtual void setRegisterThisConnectionsAddress(Boolean&);
	virtual Boolean getDNSServerAddresses(CIMProperty&) const;
	virtual Array<String> getDNSServerAddresses() const;
	virtual void setDNSServerAddresses(Array<String>&);
	virtual Boolean getDHCPOptionsToUse(CIMProperty&) const;
	virtual Array<Uint16> getDHCPOptionsToUse() const;
	virtual void setDHCPOptionsToUse(Array<Uint16>&);


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
	String _domainName;
	String _requestedHostname;
	Boolean _useSuffixWhenRegistering;
	Boolean _registerThisConnectionsAddress;
	Array<String> _dNSServerAddresses;
	Array<Uint16> _dHCPOptionsToUse;

#	include "UNIX_DNSSettingDataPrivate.h"


};

#endif /* UNIX_DNSSETTINGDATA */
