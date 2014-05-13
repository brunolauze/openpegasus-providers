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


#include "UNIX_DiskDriveViewProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_DiskDriveViewProvider::UNIX_DiskDriveViewProvider()
{
}

UNIX_DiskDriveViewProvider::~UNIX_DiskDriveViewProvider()
{
}

CIMInstance UNIX_DiskDriveViewProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_DiskDriveView &instanceObject) const
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
	
	//CIM_DiskDriveView Properties
	if (instanceObject.getSESystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSESystemName(p)) inst.addProperty(p);
	if (instanceObject.getSECreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSEDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getSEBlockSize(p)) inst.addProperty(p);
	if (instanceObject.getSENumberOfBlocks(p)) inst.addProperty(p);
	if (instanceObject.getSEConsumableBlocks(p)) inst.addProperty(p);
	if (instanceObject.getSEExtentStatus(p)) inst.addProperty(p);
	if (instanceObject.getSEOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getDDSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getDDSystemName(p)) inst.addProperty(p);
	if (instanceObject.getDDCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getDDDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getDDName(p)) inst.addProperty(p);
	if (instanceObject.getDDOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getPPCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPPTag(p)) inst.addProperty(p);
	if (instanceObject.getPPManufacturer(p)) inst.addProperty(p);
	if (instanceObject.getPPModel(p)) inst.addProperty(p);
	if (instanceObject.getSIInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getSIVersionString(p)) inst.addProperty(p);
	if (instanceObject.getDDLocationIndicator(p)) inst.addProperty(p);
	if (instanceObject.getPPSerialNumber(p)) inst.addProperty(p);
	if (instanceObject.getPPPartNumber(p)) inst.addProperty(p);
	if (instanceObject.getSIManufacturer(p)) inst.addProperty(p);
	if (instanceObject.getSIBuildNumber(p)) inst.addProperty(p);
	if (instanceObject.getSIMajorVersion(p)) inst.addProperty(p);
	if (instanceObject.getSIRevisionNumber(p)) inst.addProperty(p);
	if (instanceObject.getSIMinorVersion(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_DiskDriveViewProvider::constructKeyBindings(const UNIX_DiskDriveView& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_D_D_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getDDSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_D_D_SYSTEM_NAME,
		instanceObject.getDDSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_D_D_CREATION_CLASS_NAME,
		instanceObject.getDDCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_D_D_DEVICE_ID,
		instanceObject.getDDDeviceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_DiskDriveViewProvider
#define UNIX_PROVIDER_NAME "UNIX_DiskDriveViewProvider"
#define CLASS_IMPLEMENTATION UNIX_DiskDriveView
#define CLASS_IMPLEMENTATION_NAME "UNIX_DiskDriveView"
#define BASE_CLASS_NAME "CIM_DiskDriveView"
#define NUMKEYS_CLASS_IMPLEMENTATION 4


#include "UNIXProviderBase.hpp"

