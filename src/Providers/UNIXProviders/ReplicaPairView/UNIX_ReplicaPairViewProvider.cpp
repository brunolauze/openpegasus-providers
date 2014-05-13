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


#include "UNIX_ReplicaPairViewProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_ReplicaPairViewProvider::UNIX_ReplicaPairViewProvider()
{
}

UNIX_ReplicaPairViewProvider::~UNIX_ReplicaPairViewProvider()
{
}

CIMInstance UNIX_ReplicaPairViewProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_ReplicaPairView &instanceObject) const
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
	
	//CIM_ReplicaPairView Properties
	if (instanceObject.getSVSourceSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceSystemName(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceName(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceNameFormat(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceNameNamespace(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceExtentStatus(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceBlockSize(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceNumberOfBlocks(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceConsumableBlocks(p)) inst.addProperty(p);
	if (instanceObject.getSVSourcePrimordial(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceIsBasedOnUnderlyingRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceNoSinglePointOfFailure(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceDataRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVSourcePackageRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceDeltaReservation(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceExtentDiscriminator(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceIdentifyingDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceElementName(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceUsage(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceOtherUsageDescription(p)) inst.addProperty(p);
	if (instanceObject.getSVSourceClientSettableUsage(p)) inst.addProperty(p);
	if (instanceObject.getSSWhenSynced(p)) inst.addProperty(p);
	if (instanceObject.getSSSyncMaintained(p)) inst.addProperty(p);
	if (instanceObject.getSSCopyType(p)) inst.addProperty(p);
	if (instanceObject.getSSSyncState(p)) inst.addProperty(p);
	if (instanceObject.getSSCopyPriority(p)) inst.addProperty(p);
	if (instanceObject.getSSSyncType(p)) inst.addProperty(p);
	if (instanceObject.getSSMode(p)) inst.addProperty(p);
	if (instanceObject.getSSProgressStatus(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetSystemName(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetName(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetNameFormat(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetNameNamespace(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetExtentStatus(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetBlockSize(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetNumberOfBlocks(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetConsumableBlocks(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetPrimordial(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetIsBasedOnUnderlyingRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetNoSinglePointOfFailure(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetDataRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetPackageRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetDeltaReservation(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetExtentDiscriminator(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetIdentifyingDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetElementName(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetUsage(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetOtherUsageDescription(p)) inst.addProperty(p);
	if (instanceObject.getSVTargetClientSettableUsage(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_ReplicaPairViewProvider::constructKeyBindings(const UNIX_ReplicaPairView& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_S_V_TARGET_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getSVTargetSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_V_TARGET_SYSTEM_NAME,
		instanceObject.getSVTargetSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_V_TARGET_CREATION_CLASS_NAME,
		instanceObject.getSVTargetCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_V_TARGET_DEVICE_ID,
		instanceObject.getSVTargetDeviceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_ReplicaPairViewProvider
#define UNIX_PROVIDER_NAME "UNIX_ReplicaPairViewProvider"
#define CLASS_IMPLEMENTATION UNIX_ReplicaPairView
#define CLASS_IMPLEMENTATION_NAME "UNIX_ReplicaPairView"
#define BASE_CLASS_NAME "CIM_ReplicaPairView"
#define NUMKEYS_CLASS_IMPLEMENTATION 4


#include "UNIXProviderBase.hpp"

