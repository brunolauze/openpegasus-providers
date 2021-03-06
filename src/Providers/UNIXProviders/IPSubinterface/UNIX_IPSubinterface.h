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
2.40.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network
*/


/* **** Description *** */
/*
Configuration properties for an Ethernet switch or router subinterface. A IPSubinterface allows the router to route traffic on a single port as if it were part of multiple separate IP subnets. The parent Interface is configured as a trunk port and the connection is is divided by encapsulating each frame with VLAN information.
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

			UNIX_IPSubinterface:
				EncapsulationType UInt16
				ParentInterface String
				EncapsulationValue String
				OtherEncapsulationType String


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

			UNIX_IPSubinterface:


*/

#ifndef __UNIX_IPSUBINTERFACE_H
#define __UNIX_IPSUBINTERFACE_H


#include "CIM_IPProtocolEndpoint.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_IPSubinterfaceDeps.h"


#ifndef PROPERTY_ENCAPSULATION_TYPE
#define PROPERTY_ENCAPSULATION_TYPE \
					"EncapsulationType"
#endif

#ifndef PROPERTY_PARENT_INTERFACE
#define PROPERTY_PARENT_INTERFACE \
					"ParentInterface"
#endif

#ifndef PROPERTY_ENCAPSULATION_VALUE
#define PROPERTY_ENCAPSULATION_VALUE \
					"EncapsulationValue"
#endif

#ifndef PROPERTY_OTHER_ENCAPSULATION_TYPE
#define PROPERTY_OTHER_ENCAPSULATION_TYPE \
					"OtherEncapsulationType"
#endif



class UNIX_IPSubinterface :
	public CIM_IPProtocolEndpoint
{
public:

	UNIX_IPSubinterface();
	~UNIX_IPSubinterface();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual void setEnabledState(Uint16&);
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual void setOtherEnabledState(String&);
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual void setRequestedState(Uint16&);
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual void setEnabledDefault(Uint16&);
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual void setTimeOfLastStateChange(CIMDateTime&);
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual void setAvailableRequestedStates(Array<Uint16>&);
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual void setTransitioningToState(Uint16&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual String getNameFormat() const;
	virtual void setNameFormat(String&);
	virtual Boolean getProtocolType(CIMProperty&) const;
	virtual Uint16 getProtocolType() const;
	virtual void setProtocolType(Uint16&);
	virtual Boolean getProtocolIFType(CIMProperty&) const;
	virtual Uint16 getProtocolIFType() const;
	virtual void setProtocolIFType(Uint16&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getBroadcastResetSupported(CIMProperty&) const;
	virtual Boolean getBroadcastResetSupported() const;
	virtual void setBroadcastResetSupported(Boolean&);
	virtual Boolean getIPv4Address(CIMProperty&) const;
	virtual String getIPv4Address() const;
	virtual void setIPv4Address(String&);
	virtual Boolean getIPv6Address(CIMProperty&) const;
	virtual String getIPv6Address() const;
	virtual void setIPv6Address(String&);
	virtual Boolean getAddress(CIMProperty&) const;
	virtual String getAddress() const;
	virtual void setAddress(String&);
	virtual Boolean getSubnetMask(CIMProperty&) const;
	virtual String getSubnetMask() const;
	virtual void setSubnetMask(String&);
	virtual Boolean getPrefixLength(CIMProperty&) const;
	virtual Uint8 getPrefixLength() const;
	virtual void setPrefixLength(Uint8&);
	virtual Boolean getAddressType(CIMProperty&) const;
	virtual Uint16 getAddressType() const;
	virtual void setAddressType(Uint16&);
	virtual Boolean getIPVersionSupport(CIMProperty&) const;
	virtual Uint16 getIPVersionSupport() const;
	virtual void setIPVersionSupport(Uint16&);
	virtual Boolean getAddressOrigin(CIMProperty&) const;
	virtual Uint16 getAddressOrigin() const;
	virtual void setAddressOrigin(Uint16&);
	virtual Boolean getIPv6AddressType(CIMProperty&) const;
	virtual Uint16 getIPv6AddressType() const;
	virtual void setIPv6AddressType(Uint16&);
	virtual Boolean getIPv6SubnetPrefixLength(CIMProperty&) const;
	virtual Uint16 getIPv6SubnetPrefixLength() const;
	virtual void setIPv6SubnetPrefixLength(Uint16&);
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
	virtual Boolean getEncapsulationType(CIMProperty&) const;
	virtual Uint16 getEncapsulationType() const;
	virtual void setEncapsulationType(Uint16&);
	virtual Boolean getParentInterface(CIMProperty&) const;
	virtual String getParentInterface() const;
	virtual void setParentInterface(String&);
	virtual Boolean getEncapsulationValue(CIMProperty&) const;
	virtual String getEncapsulationValue() const;
	virtual void setEncapsulationValue(String&);
	virtual Boolean getOtherEncapsulationType(CIMProperty&) const;
	virtual String getOtherEncapsulationType() const;
	virtual void setOtherEncapsulationType(String&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeBroadcastReset();



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	Uint16 _enabledState;
	String _otherEnabledState;
	Uint16 _requestedState;
	Uint16 _enabledDefault;
	CIMDateTime _timeOfLastStateChange;
	Array<Uint16> _availableRequestedStates;
	Uint16 _transitioningToState;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _nameFormat;
	Uint16 _protocolType;
	Uint16 _protocolIFType;
	String _otherTypeDescription;
	Boolean _broadcastResetSupported;
	String _iPv4Address;
	String _iPv6Address;
	String _address;
	String _subnetMask;
	Uint8 _prefixLength;
	Uint16 _addressType;
	Uint16 _iPVersionSupport;
	Uint16 _addressOrigin;
	Uint16 _iPv6AddressType;
	Uint16 _iPv6SubnetPrefixLength;
	Uint16 _addressPrefixOrigin;
	Uint16 _addressSuffixOrigin;
	String _otherAddressPrefixOriginDescription;
	String _otherAddressSuffixOriginDescription;
	Uint16 _encapsulationType;
	String _parentInterface;
	String _encapsulationValue;
	String _otherEncapsulationType;

#	include "UNIX_IPSubinterfacePrivate.h"


};

#endif /* UNIX_IPSUBINTERFACE */
