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
2.35.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::ProtocolEndpoints
*/


/* **** Description *** */
/*
A ProtocolEndpoint that is dedicated to running IP.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				EnabledState UInt16
				OtherEnabledState String
				RequestedState UInt16
				EnabledDefault UInt16
				TimeOfLastStateChange DateTime
				AvailableRequestedStates UInt16
				TransitioningToState UInt16

			CIM_ServiceAccessPoint:
				SystemCreationClassName String
				SystemName String
				CreationClassName String

			CIM_ProtocolEndpoint:
				NameFormat String
				ProtocolType UInt16
				ProtocolIFType UInt16
				OtherTypeDescription String
				BroadcastResetSupported Boolean

			CIM_IPProtocolEndpoint:
				IPv4Address String
				IPv6Address String
				Address String
				SubnetMask String
				PrefixLength UInt8
				AddressType UInt16
				IPVersionSupport UInt16
				AddressOrigin UInt16
				IPv6AddressType UInt16
				IPv6SubnetPrefixLength UInt16
				AddressPrefixOrigin UInt16
				AddressSuffixOrigin UInt16
				OtherAddressPrefixOriginDescription String
				OtherAddressSuffixOriginDescription String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_ServiceAccessPoint:

			CIM_ProtocolEndpoint:
				BroadcastReset UInt32

			CIM_IPProtocolEndpoint:


*/

#ifndef __CIM_IPPROTOCOLENDPOINT_H
#define __CIM_IPPROTOCOLENDPOINT_H


#include "CIM_ProtocolEndpoint.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_IPV_4_ADDRESS
#define PROPERTY_IPV_4_ADDRESS \
					"IPv4Address"
#endif

#ifndef PROPERTY_IPV_6_ADDRESS
#define PROPERTY_IPV_6_ADDRESS \
					"IPv6Address"
#endif

#ifndef PROPERTY_ADDRESS
#define PROPERTY_ADDRESS \
					"Address"
#endif

#ifndef PROPERTY_SUBNET_MASK
#define PROPERTY_SUBNET_MASK \
					"SubnetMask"
#endif

#ifndef PROPERTY_PREFIX_LENGTH
#define PROPERTY_PREFIX_LENGTH \
					"PrefixLength"
#endif

#ifndef PROPERTY_ADDRESS_TYPE
#define PROPERTY_ADDRESS_TYPE \
					"AddressType"
#endif

#ifndef PROPERTY_IP_VERSION_SUPPORT
#define PROPERTY_IP_VERSION_SUPPORT \
					"IPVersionSupport"
#endif

#ifndef PROPERTY_ADDRESS_ORIGIN
#define PROPERTY_ADDRESS_ORIGIN \
					"AddressOrigin"
#endif

#ifndef PROPERTY_IPV_6_ADDRESS_TYPE
#define PROPERTY_IPV_6_ADDRESS_TYPE \
					"IPv6AddressType"
#endif

#ifndef PROPERTY_IPV_6_SUBNET_PREFIX_LENGTH
#define PROPERTY_IPV_6_SUBNET_PREFIX_LENGTH \
					"IPv6SubnetPrefixLength"
#endif

#ifndef PROPERTY_ADDRESS_PREFIX_ORIGIN
#define PROPERTY_ADDRESS_PREFIX_ORIGIN \
					"AddressPrefixOrigin"
#endif

#ifndef PROPERTY_ADDRESS_SUFFIX_ORIGIN
#define PROPERTY_ADDRESS_SUFFIX_ORIGIN \
					"AddressSuffixOrigin"
#endif

#ifndef PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION
#define PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION \
					"OtherAddressPrefixOriginDescription"
#endif

#ifndef PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION
#define PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION \
					"OtherAddressSuffixOriginDescription"
#endif



class CIM_IPProtocolEndpoint :
	public CIM_ProtocolEndpoint
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getIPv4Address(CIMProperty&) const=0;
	virtual String getIPv4Address() const=0;
	virtual void setIPv4Address(String&)=0;
	virtual Boolean getIPv6Address(CIMProperty&) const=0;
	virtual String getIPv6Address() const=0;
	virtual void setIPv6Address(String&)=0;
	virtual Boolean getAddress(CIMProperty&) const=0;
	virtual String getAddress() const=0;
	virtual void setAddress(String&)=0;
	virtual Boolean getSubnetMask(CIMProperty&) const=0;
	virtual String getSubnetMask() const=0;
	virtual void setSubnetMask(String&)=0;
	virtual Boolean getPrefixLength(CIMProperty&) const=0;
	virtual Uint8 getPrefixLength() const=0;
	virtual void setPrefixLength(Uint8&)=0;
	virtual Boolean getAddressType(CIMProperty&) const=0;
	virtual Uint16 getAddressType() const=0;
	virtual void setAddressType(Uint16&)=0;
	virtual Boolean getIPVersionSupport(CIMProperty&) const=0;
	virtual Uint16 getIPVersionSupport() const=0;
	virtual void setIPVersionSupport(Uint16&)=0;
	virtual Boolean getProtocolIFType(CIMProperty&) const=0;
	virtual Uint16 getProtocolIFType() const=0;
	virtual void setProtocolIFType(Uint16&)=0;
	virtual Boolean getAddressOrigin(CIMProperty&) const=0;
	virtual Uint16 getAddressOrigin() const=0;
	virtual void setAddressOrigin(Uint16&)=0;
	virtual Boolean getIPv6AddressType(CIMProperty&) const=0;
	virtual Uint16 getIPv6AddressType() const=0;
	virtual void setIPv6AddressType(Uint16&)=0;
	virtual Boolean getIPv6SubnetPrefixLength(CIMProperty&) const=0;
	virtual Uint16 getIPv6SubnetPrefixLength() const=0;
	virtual void setIPv6SubnetPrefixLength(Uint16&)=0;
	virtual Boolean getAddressPrefixOrigin(CIMProperty&) const=0;
	virtual Uint16 getAddressPrefixOrigin() const=0;
	virtual void setAddressPrefixOrigin(Uint16&)=0;
	virtual Boolean getAddressSuffixOrigin(CIMProperty&) const=0;
	virtual Uint16 getAddressSuffixOrigin() const=0;
	virtual void setAddressSuffixOrigin(Uint16&)=0;
	virtual Boolean getOtherAddressPrefixOriginDescription(CIMProperty&) const=0;
	virtual String getOtherAddressPrefixOriginDescription() const=0;
	virtual void setOtherAddressPrefixOriginDescription(String&)=0;
	virtual Boolean getOtherAddressSuffixOriginDescription(CIMProperty&) const=0;
	virtual String getOtherAddressSuffixOriginDescription() const=0;
	virtual void setOtherAddressSuffixOriginDescription(String&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeBroadcastReset()=0;



private:

};

#endif /* CIM_IPPROTOCOLENDPOINT */
