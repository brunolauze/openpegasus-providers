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


#include "UNIX_MaskingMappingViewProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_MaskingMappingViewProvider::UNIX_MaskingMappingViewProvider()
{
}

UNIX_MaskingMappingViewProvider::~UNIX_MaskingMappingViewProvider()
{
}

CIMInstance UNIX_MaskingMappingViewProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_MaskingMappingView &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_MaskingMappingView Properties
	if (instanceObject.getStorageHardwareID(p)) inst.addProperty(p);
	if (instanceObject.getLogicalDevice(p)) inst.addProperty(p);
	if (instanceObject.getProtocolEndpoint(p)) inst.addProperty(p);
	if (instanceObject.getSHIDStorageID(p)) inst.addProperty(p);
	if (instanceObject.getSHIDIDType(p)) inst.addProperty(p);
	if (instanceObject.getLDDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getSPEPSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSPEPCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSPEPSystemName(p)) inst.addProperty(p);
	if (instanceObject.getSPEPName(p)) inst.addProperty(p);
	if (instanceObject.getSPEPProtocolIFType(p)) inst.addProperty(p);
	if (instanceObject.getSPEPOtherTypeDescription(p)) inst.addProperty(p);
	if (instanceObject.getSPEPConnectionType(p)) inst.addProperty(p);
	if (instanceObject.getSPEPRole(p)) inst.addProperty(p);
	if (instanceObject.getAPInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getAPPrivilegeGranted(p)) inst.addProperty(p);
	if (instanceObject.getAPActivities(p)) inst.addProperty(p);
	if (instanceObject.getAPElementName(p)) inst.addProperty(p);
	if (instanceObject.getSPCSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSPCCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSPCSystemName(p)) inst.addProperty(p);
	if (instanceObject.getSPCDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getPCFUDeviceNumber(p)) inst.addProperty(p);
	if (instanceObject.getPCFUDeviceAccess(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_MaskingMappingViewProvider::constructKeyBindings(const UNIX_MaskingMappingView& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding StorageHardwareIDKey(
		PROPERTY_STORAGE_HARDWARE_ID,
		CIMValue(instanceObject.getStorageHardwareID().getPath()));
	StorageHardwareIDKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(StorageHardwareIDKey);
	CIMKeyBinding LogicalDeviceKey(
		PROPERTY_LOGICAL_DEVICE,
		CIMValue(instanceObject.getLogicalDevice().getPath()));
	LogicalDeviceKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(LogicalDeviceKey);
	CIMKeyBinding ProtocolEndpointKey(
		PROPERTY_PROTOCOL_ENDPOINT,
		CIMValue(instanceObject.getProtocolEndpoint().getPath()));
	ProtocolEndpointKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(ProtocolEndpointKey);


	return keys;
}



#define UNIX_PROVIDER UNIX_MaskingMappingViewProvider
#define UNIX_PROVIDER_NAME "UNIX_MaskingMappingViewProvider"
#define CLASS_IMPLEMENTATION UNIX_MaskingMappingView
#define CLASS_IMPLEMENTATION_NAME "UNIX_MaskingMappingView"
#define BASE_CLASS_NAME "CIM_MaskingMappingView"
#define NUMKEYS_CLASS_IMPLEMENTATION 3


#include "UNIXProviderBase.hpp"

