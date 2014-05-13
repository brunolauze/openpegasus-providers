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


#include "UNIX_EthernetPortAllocationSettingDataProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_EthernetPortAllocationSettingDataProvider::UNIX_EthernetPortAllocationSettingDataProvider()
{
}

UNIX_EthernetPortAllocationSettingDataProvider::~UNIX_EthernetPortAllocationSettingDataProvider()
{
}

CIMInstance UNIX_EthernetPortAllocationSettingDataProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_EthernetPortAllocationSettingData &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_ManagedElement Properties
	if (instanceObject.getInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getCaption(p)) inst.addProperty(p);
	if (instanceObject.getDescription(p)) inst.addProperty(p);
	if (instanceObject.getElementName(p)) inst.addProperty(p);
	if (instanceObject.getGeneration(p)) inst.addProperty(p);
	if (className.equal("CIM_ManagedElement")) return inst;
	
	//CIM_SettingData Properties
	if (instanceObject.getConfigurationName(p)) inst.addProperty(p);
	if (instanceObject.getChangeableType(p)) inst.addProperty(p);
	if (instanceObject.getComponentSetting(p)) inst.addProperty(p);
	if (instanceObject.getSoID(p)) inst.addProperty(p);
	if (instanceObject.getSoOrgID(p)) inst.addProperty(p);
	if (className.equal("CIM_SettingData")) return inst;
	
	//CIM_ResourceAllocationSettingData Properties
	if (instanceObject.getResourceType(p)) inst.addProperty(p);
	if (instanceObject.getOtherResourceType(p)) inst.addProperty(p);
	if (instanceObject.getResourceSubType(p)) inst.addProperty(p);
	if (instanceObject.getPoolID(p)) inst.addProperty(p);
	if (instanceObject.getConsumerVisibility(p)) inst.addProperty(p);
	if (instanceObject.getHostResource(p)) inst.addProperty(p);
	if (instanceObject.getAllocationUnits(p)) inst.addProperty(p);
	if (instanceObject.getVirtualQuantity(p)) inst.addProperty(p);
	if (instanceObject.getReservation(p)) inst.addProperty(p);
	if (instanceObject.getLimit(p)) inst.addProperty(p);
	if (instanceObject.getWeight(p)) inst.addProperty(p);
	if (instanceObject.getAutomaticAllocation(p)) inst.addProperty(p);
	if (instanceObject.getAutomaticDeallocation(p)) inst.addProperty(p);
	if (instanceObject.getParent(p)) inst.addProperty(p);
	if (instanceObject.getConnection(p)) inst.addProperty(p);
	if (instanceObject.getAddress(p)) inst.addProperty(p);
	if (instanceObject.getMappingBehavior(p)) inst.addProperty(p);
	if (instanceObject.getAddressOnParent(p)) inst.addProperty(p);
	if (instanceObject.getVirtualQuantityUnits(p)) inst.addProperty(p);
	if (className.equal("CIM_ResourceAllocationSettingData")) return inst;
	
	//CIM_EthernetPortAllocationSettingData Properties
	if (instanceObject.getDesiredVLANEndpointMode(p)) inst.addProperty(p);
	if (instanceObject.getOtherEndpointMode(p)) inst.addProperty(p);
	if (instanceObject.getAllowedPriorities(p)) inst.addProperty(p);
	if (instanceObject.getAllowedToReceiveMACAddresses(p)) inst.addProperty(p);
	if (instanceObject.getAllowedToReceiveVLANs(p)) inst.addProperty(p);
	if (instanceObject.getAllowedToTransmitMACAddresses(p)) inst.addProperty(p);
	if (instanceObject.getAllowedToTransmitVLANs(p)) inst.addProperty(p);
	if (instanceObject.getDefaultPortVID(p)) inst.addProperty(p);
	if (instanceObject.getDefaultPriority(p)) inst.addProperty(p);
	if (instanceObject.getNetworkPortProfileID(p)) inst.addProperty(p);
	if (instanceObject.getNetworkPortProfileIDType(p)) inst.addProperty(p);
	if (instanceObject.getOtherNetworkPortProfileIDTypeInfo(p)) inst.addProperty(p);
	if (instanceObject.getPortCorrelationID(p)) inst.addProperty(p);
	if (instanceObject.getPortVID(p)) inst.addProperty(p);
	if (instanceObject.getPromiscuous(p)) inst.addProperty(p);
	if (instanceObject.getReceiveBandwidthLimit(p)) inst.addProperty(p);
	if (instanceObject.getReceiveBandwidthReservation(p)) inst.addProperty(p);
	if (instanceObject.getSourceMACFilteringEnabled(p)) inst.addProperty(p);
	if (instanceObject.getGroupID(p)) inst.addProperty(p);
	if (instanceObject.getManagerID(p)) inst.addProperty(p);
	if (instanceObject.getVSITypeID(p)) inst.addProperty(p);
	if (instanceObject.getVSITypeIDVersion(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_EthernetPortAllocationSettingDataProvider::constructKeyBindings(const UNIX_EthernetPortAllocationSettingData& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_EthernetPortAllocationSettingDataProvider
#define UNIX_PROVIDER_NAME "UNIX_EthernetPortAllocationSettingDataProvider"
#define CLASS_IMPLEMENTATION UNIX_EthernetPortAllocationSettingData
#define CLASS_IMPLEMENTATION_NAME "UNIX_EthernetPortAllocationSettingData"
#define BASE_CLASS_NAME "CIM_EthernetPortAllocationSettingData"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

