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
2.33.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Resource
*/


/* **** Description *** */
/*
The EthernetPortAllocationSettingData class represents settings specifically related to the allocation of an EthernetPort that are outside the scope of the EthernetPort CIM class itself. These settings are used to provide information specific to the resource itself.
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

			CIM_ResourceAllocationSettingData:
				ResourceType UInt16
				OtherResourceType String
				ResourceSubType String
				PoolID String
				ConsumerVisibility UInt16
				HostResource String
				AllocationUnits String
				VirtualQuantity UInt64
				Reservation UInt64
				Limit UInt64
				Weight UInt32
				AutomaticAllocation Boolean
				AutomaticDeallocation Boolean
				Parent String
				Connection String
				Address String
				MappingBehavior UInt16
				AddressOnParent String
				VirtualQuantityUnits String

			UNIX_EthernetPortAllocationSettingData:
				DesiredVLANEndpointMode UInt16
				OtherEndpointMode String
				AllowedPriorities UInt16
				AllowedToReceiveMACAddresses String
				AllowedToReceiveVLANs UInt16
				AllowedToTransmitMACAddresses String
				AllowedToTransmitVLANs UInt16
				DefaultPortVID UInt16
				DefaultPriority UInt16
				NetworkPortProfileID String
				NetworkPortProfileIDType UInt16
				OtherNetworkPortProfileIDTypeInfo String
				PortCorrelationID String
				PortVID UInt16
				Promiscuous Boolean
				ReceiveBandwidthLimit UInt64
				ReceiveBandwidthReservation UInt64
				SourceMACFilteringEnabled Boolean
				GroupID UInt32
				ManagerID UInt32
				VSITypeID UInt32
				VSITypeIDVersion UInt8


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ResourceAllocationSettingData:

			UNIX_EthernetPortAllocationSettingData:


*/

#ifndef __UNIX_ETHERNETPORTALLOCATIONSETTINGDATA_H
#define __UNIX_ETHERNETPORTALLOCATIONSETTINGDATA_H


#include "CIM_ResourceAllocationSettingData.h"

#include "UNIX_EthernetPortAllocationSettingDataDeps.h"


#ifndef PROPERTY_DESIRED_VLAN_ENDPOINT_MODE
#define PROPERTY_DESIRED_VLAN_ENDPOINT_MODE \
					"DesiredVLANEndpointMode"
#endif

#ifndef PROPERTY_OTHER_ENDPOINT_MODE
#define PROPERTY_OTHER_ENDPOINT_MODE \
					"OtherEndpointMode"
#endif

#ifndef PROPERTY_ALLOWED_PRIORITIES
#define PROPERTY_ALLOWED_PRIORITIES \
					"AllowedPriorities"
#endif

#ifndef PROPERTY_ALLOWED_TO_RECEIVE_M_A_C_ADDRESSES
#define PROPERTY_ALLOWED_TO_RECEIVE_M_A_C_ADDRESSES \
					"AllowedToReceiveMACAddresses"
#endif

#ifndef PROPERTY_ALLOWED_TO_RECEIVE_VLANS
#define PROPERTY_ALLOWED_TO_RECEIVE_VLANS \
					"AllowedToReceiveVLANs"
#endif

#ifndef PROPERTY_ALLOWED_TO_TRANSMIT_M_A_C_ADDRESSES
#define PROPERTY_ALLOWED_TO_TRANSMIT_M_A_C_ADDRESSES \
					"AllowedToTransmitMACAddresses"
#endif

#ifndef PROPERTY_ALLOWED_TO_TRANSMIT_VLANS
#define PROPERTY_ALLOWED_TO_TRANSMIT_VLANS \
					"AllowedToTransmitVLANs"
#endif

#ifndef PROPERTY_DEFAULT_PORT_V_ID
#define PROPERTY_DEFAULT_PORT_V_ID \
					"DefaultPortVID"
#endif

#ifndef PROPERTY_DEFAULT_PRIORITY
#define PROPERTY_DEFAULT_PRIORITY \
					"DefaultPriority"
#endif

#ifndef PROPERTY_NETWORK_PORT_PROFILE_ID
#define PROPERTY_NETWORK_PORT_PROFILE_ID \
					"NetworkPortProfileID"
#endif

#ifndef PROPERTY_NETWORK_PORT_PROFILE_ID_TYPE
#define PROPERTY_NETWORK_PORT_PROFILE_ID_TYPE \
					"NetworkPortProfileIDType"
#endif

#ifndef PROPERTY_OTHER_NETWORK_PORT_PROFILE_ID_TYPE_INFO
#define PROPERTY_OTHER_NETWORK_PORT_PROFILE_ID_TYPE_INFO \
					"OtherNetworkPortProfileIDTypeInfo"
#endif

#ifndef PROPERTY_PORT_CORRELATION_ID
#define PROPERTY_PORT_CORRELATION_ID \
					"PortCorrelationID"
#endif

#ifndef PROPERTY_PORT_V_ID
#define PROPERTY_PORT_V_ID \
					"PortVID"
#endif

#ifndef PROPERTY_PROMISCUOUS
#define PROPERTY_PROMISCUOUS \
					"Promiscuous"
#endif

#ifndef PROPERTY_RECEIVE_BANDWIDTH_LIMIT
#define PROPERTY_RECEIVE_BANDWIDTH_LIMIT \
					"ReceiveBandwidthLimit"
#endif

#ifndef PROPERTY_RECEIVE_BANDWIDTH_RESERVATION
#define PROPERTY_RECEIVE_BANDWIDTH_RESERVATION \
					"ReceiveBandwidthReservation"
#endif

#ifndef PROPERTY_SOURCE_M_A_C_FILTERING_ENABLED
#define PROPERTY_SOURCE_M_A_C_FILTERING_ENABLED \
					"SourceMACFilteringEnabled"
#endif

#ifndef PROPERTY_GROUP_ID
#define PROPERTY_GROUP_ID \
					"GroupID"
#endif

#ifndef PROPERTY_MANAGER_ID
#define PROPERTY_MANAGER_ID \
					"ManagerID"
#endif

#ifndef PROPERTY_V_S_I_TYPE_ID
#define PROPERTY_V_S_I_TYPE_ID \
					"VSITypeID"
#endif

#ifndef PROPERTY_V_S_I_TYPE_ID_VERSION
#define PROPERTY_V_S_I_TYPE_ID_VERSION \
					"VSITypeIDVersion"
#endif



class UNIX_EthernetPortAllocationSettingData :
	public CIM_ResourceAllocationSettingData
{
public:

	UNIX_EthernetPortAllocationSettingData();
	~UNIX_EthernetPortAllocationSettingData();

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
	virtual Boolean getResourceType(CIMProperty&) const;
	virtual Uint16 getResourceType() const;
	virtual void setResourceType(Uint16&);
	virtual Boolean getOtherResourceType(CIMProperty&) const;
	virtual String getOtherResourceType() const;
	virtual void setOtherResourceType(String&);
	virtual Boolean getResourceSubType(CIMProperty&) const;
	virtual String getResourceSubType() const;
	virtual void setResourceSubType(String&);
	virtual Boolean getPoolID(CIMProperty&) const;
	virtual String getPoolID() const;
	virtual void setPoolID(String&);
	virtual Boolean getConsumerVisibility(CIMProperty&) const;
	virtual Uint16 getConsumerVisibility() const;
	virtual void setConsumerVisibility(Uint16&);
	virtual Boolean getHostResource(CIMProperty&) const;
	virtual Array<String> getHostResource() const;
	virtual void setHostResource(Array<String>&);
	virtual Boolean getAllocationUnits(CIMProperty&) const;
	virtual String getAllocationUnits() const;
	virtual void setAllocationUnits(String&);
	virtual Boolean getVirtualQuantity(CIMProperty&) const;
	virtual Uint64 getVirtualQuantity() const;
	virtual void setVirtualQuantity(Uint64&);
	virtual Boolean getReservation(CIMProperty&) const;
	virtual Uint64 getReservation() const;
	virtual void setReservation(Uint64&);
	virtual Boolean getLimit(CIMProperty&) const;
	virtual Uint64 getLimit() const;
	virtual void setLimit(Uint64&);
	virtual Boolean getWeight(CIMProperty&) const;
	virtual Uint32 getWeight() const;
	virtual void setWeight(Uint32&);
	virtual Boolean getAutomaticAllocation(CIMProperty&) const;
	virtual Boolean getAutomaticAllocation() const;
	virtual void setAutomaticAllocation(Boolean&);
	virtual Boolean getAutomaticDeallocation(CIMProperty&) const;
	virtual Boolean getAutomaticDeallocation() const;
	virtual void setAutomaticDeallocation(Boolean&);
	virtual Boolean getParent(CIMProperty&) const;
	virtual String getParent() const;
	virtual void setParent(String&);
	virtual Boolean getConnection(CIMProperty&) const;
	virtual Array<String> getConnection() const;
	virtual void setConnection(Array<String>&);
	virtual Boolean getAddress(CIMProperty&) const;
	virtual String getAddress() const;
	virtual void setAddress(String&);
	virtual Boolean getMappingBehavior(CIMProperty&) const;
	virtual Uint16 getMappingBehavior() const;
	virtual void setMappingBehavior(Uint16&);
	virtual Boolean getAddressOnParent(CIMProperty&) const;
	virtual String getAddressOnParent() const;
	virtual void setAddressOnParent(String&);
	virtual Boolean getVirtualQuantityUnits(CIMProperty&) const;
	virtual String getVirtualQuantityUnits() const;
	virtual void setVirtualQuantityUnits(String&);
	virtual Boolean getDesiredVLANEndpointMode(CIMProperty&) const;
	virtual Uint16 getDesiredVLANEndpointMode() const;
	virtual void setDesiredVLANEndpointMode(Uint16&);
	virtual Boolean getOtherEndpointMode(CIMProperty&) const;
	virtual String getOtherEndpointMode() const;
	virtual void setOtherEndpointMode(String&);
	virtual Boolean getAllowedPriorities(CIMProperty&) const;
	virtual Array<Uint16> getAllowedPriorities() const;
	virtual void setAllowedPriorities(Array<Uint16>&);
	virtual Boolean getAllowedToReceiveMACAddresses(CIMProperty&) const;
	virtual Array<String> getAllowedToReceiveMACAddresses() const;
	virtual void setAllowedToReceiveMACAddresses(Array<String>&);
	virtual Boolean getAllowedToReceiveVLANs(CIMProperty&) const;
	virtual Array<Uint16> getAllowedToReceiveVLANs() const;
	virtual void setAllowedToReceiveVLANs(Array<Uint16>&);
	virtual Boolean getAllowedToTransmitMACAddresses(CIMProperty&) const;
	virtual Array<String> getAllowedToTransmitMACAddresses() const;
	virtual void setAllowedToTransmitMACAddresses(Array<String>&);
	virtual Boolean getAllowedToTransmitVLANs(CIMProperty&) const;
	virtual Array<Uint16> getAllowedToTransmitVLANs() const;
	virtual void setAllowedToTransmitVLANs(Array<Uint16>&);
	virtual Boolean getDefaultPortVID(CIMProperty&) const;
	virtual Uint16 getDefaultPortVID() const;
	virtual void setDefaultPortVID(Uint16&);
	virtual Boolean getDefaultPriority(CIMProperty&) const;
	virtual Uint16 getDefaultPriority() const;
	virtual void setDefaultPriority(Uint16&);
	virtual Boolean getNetworkPortProfileID(CIMProperty&) const;
	virtual String getNetworkPortProfileID() const;
	virtual void setNetworkPortProfileID(String&);
	virtual Boolean getNetworkPortProfileIDType(CIMProperty&) const;
	virtual Uint16 getNetworkPortProfileIDType() const;
	virtual void setNetworkPortProfileIDType(Uint16&);
	virtual Boolean getOtherNetworkPortProfileIDTypeInfo(CIMProperty&) const;
	virtual String getOtherNetworkPortProfileIDTypeInfo() const;
	virtual void setOtherNetworkPortProfileIDTypeInfo(String&);
	virtual Boolean getPortCorrelationID(CIMProperty&) const;
	virtual String getPortCorrelationID() const;
	virtual void setPortCorrelationID(String&);
	virtual Boolean getPortVID(CIMProperty&) const;
	virtual Uint16 getPortVID() const;
	virtual void setPortVID(Uint16&);
	virtual Boolean getPromiscuous(CIMProperty&) const;
	virtual Boolean getPromiscuous() const;
	virtual void setPromiscuous(Boolean&);
	virtual Boolean getReceiveBandwidthLimit(CIMProperty&) const;
	virtual Uint64 getReceiveBandwidthLimit() const;
	virtual void setReceiveBandwidthLimit(Uint64&);
	virtual Boolean getReceiveBandwidthReservation(CIMProperty&) const;
	virtual Uint64 getReceiveBandwidthReservation() const;
	virtual void setReceiveBandwidthReservation(Uint64&);
	virtual Boolean getSourceMACFilteringEnabled(CIMProperty&) const;
	virtual Boolean getSourceMACFilteringEnabled() const;
	virtual void setSourceMACFilteringEnabled(Boolean&);
	virtual Boolean getGroupID(CIMProperty&) const;
	virtual Uint32 getGroupID() const;
	virtual void setGroupID(Uint32&);
	virtual Boolean getManagerID(CIMProperty&) const;
	virtual Uint32 getManagerID() const;
	virtual void setManagerID(Uint32&);
	virtual Boolean getVSITypeID(CIMProperty&) const;
	virtual Uint32 getVSITypeID() const;
	virtual void setVSITypeID(Uint32&);
	virtual Boolean getVSITypeIDVersion(CIMProperty&) const;
	virtual Uint8 getVSITypeIDVersion() const;
	virtual void setVSITypeIDVersion(Uint8&);


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
	Uint16 _resourceType;
	String _otherResourceType;
	String _resourceSubType;
	String _poolID;
	Uint16 _consumerVisibility;
	Array<String> _hostResource;
	String _allocationUnits;
	Uint64 _virtualQuantity;
	Uint64 _reservation;
	Uint64 _limit;
	Uint32 _weight;
	Boolean _automaticAllocation;
	Boolean _automaticDeallocation;
	String _parent;
	Array<String> _connection;
	String _address;
	Uint16 _mappingBehavior;
	String _addressOnParent;
	String _virtualQuantityUnits;
	Uint16 _desiredVLANEndpointMode;
	String _otherEndpointMode;
	Array<Uint16> _allowedPriorities;
	Array<String> _allowedToReceiveMACAddresses;
	Array<Uint16> _allowedToReceiveVLANs;
	Array<String> _allowedToTransmitMACAddresses;
	Array<Uint16> _allowedToTransmitVLANs;
	Uint16 _defaultPortVID;
	Uint16 _defaultPriority;
	String _networkPortProfileID;
	Uint16 _networkPortProfileIDType;
	String _otherNetworkPortProfileIDTypeInfo;
	String _portCorrelationID;
	Uint16 _portVID;
	Boolean _promiscuous;
	Uint64 _receiveBandwidthLimit;
	Uint64 _receiveBandwidthReservation;
	Boolean _sourceMACFilteringEnabled;
	Uint32 _groupID;
	Uint32 _managerID;
	Uint32 _vSITypeID;
	Uint8 _vSITypeIDVersion;

#	include "UNIX_EthernetPortAllocationSettingDataPrivate.h"


};

#endif /* UNIX_ETHERNETPORTALLOCATIONSETTINGDATA */
