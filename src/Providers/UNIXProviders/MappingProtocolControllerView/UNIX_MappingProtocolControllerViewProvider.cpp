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


#include "UNIX_MappingProtocolControllerViewProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_MappingProtocolControllerViewProvider::UNIX_MappingProtocolControllerViewProvider()
{
}

UNIX_MappingProtocolControllerViewProvider::~UNIX_MappingProtocolControllerViewProvider()
{
}

CIMInstance UNIX_MappingProtocolControllerViewProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_MappingProtocolControllerView &instanceObject) const
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
	
	//CIM_View Properties
	if (className.equal("CIM_View")) return inst;
	
	//CIM_LogicalDeviceView Properties
	if (className.equal("CIM_LogicalDeviceView")) return inst;
	
	//CIM_MappingProtocolControllerView Properties
	if (instanceObject.getPCSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPCSystemName(p)) inst.addProperty(p);
	if (instanceObject.getPCCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPCDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getSHIDInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getSHIDStorageID(p)) inst.addProperty(p);
	if (instanceObject.getSHIDIDType(p)) inst.addProperty(p);
	if (instanceObject.getPEPSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPEPCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPEPSystemName(p)) inst.addProperty(p);
	if (instanceObject.getPEPName(p)) inst.addProperty(p);
	if (instanceObject.getPEPProtocolIFType(p)) inst.addProperty(p);
	if (instanceObject.getPEPOtherTypeDescription(p)) inst.addProperty(p);
	if (instanceObject.getPEPRole(p)) inst.addProperty(p);
	if (instanceObject.getPEPConnectionType(p)) inst.addProperty(p);
	if (instanceObject.getAPInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getAPPrivilegeGranted(p)) inst.addProperty(p);
	if (instanceObject.getAPActivities(p)) inst.addProperty(p);
	if (instanceObject.getAPElementName(p)) inst.addProperty(p);
	if (instanceObject.getLPSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getLPSystemName(p)) inst.addProperty(p);
	if (instanceObject.getLPCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getLPDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getLPOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getLPUsageRestriction(p)) inst.addProperty(p);
	if (instanceObject.getLPPortType(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_MappingProtocolControllerViewProvider::constructKeyBindings(const UNIX_MappingProtocolControllerView& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_P_CSYSTEM_CREATION_CLASS_NAME,
		instanceObject.getPCSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_P_CSYSTEM_NAME,
		instanceObject.getPCSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_P_C_CREATION_CLASS_NAME,
		instanceObject.getPCCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_P_C_DEVICE_ID,
		instanceObject.getPCDeviceID(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_H_ID_INSTANCE_ID,
		instanceObject.getSHIDInstanceID(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_P_E_P_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getPEPSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_P_E_P_CREATION_CLASS_NAME,
		instanceObject.getPEPCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_P_E_P_SYSTEM_NAME,
		instanceObject.getPEPSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_P_E_P_NAME,
		instanceObject.getPEPName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_MappingProtocolControllerViewProvider
#define UNIX_PROVIDER_NAME "UNIX_MappingProtocolControllerViewProvider"
#define CLASS_IMPLEMENTATION UNIX_MappingProtocolControllerView
#define CLASS_IMPLEMENTATION_NAME "UNIX_MappingProtocolControllerView"
#define BASE_CLASS_NAME "CIM_MappingProtocolControllerView"
#define NUMKEYS_CLASS_IMPLEMENTATION 9


#include "UNIXProviderBase.hpp"

