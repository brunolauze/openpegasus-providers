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


#include "UNIX_VolumeViewProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_VolumeViewProvider::UNIX_VolumeViewProvider()
{
}

UNIX_VolumeViewProvider::~UNIX_VolumeViewProvider()
{
}

CIMInstance UNIX_VolumeViewProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VolumeView &instanceObject) const
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
	
	//CIM_VolumeView Properties
	if (instanceObject.getSVSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSVSystemName(p)) inst.addProperty(p);
	if (instanceObject.getSVCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSVDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getSVName(p)) inst.addProperty(p);
	if (instanceObject.getSVNameFormat(p)) inst.addProperty(p);
	if (instanceObject.getSVNameNamespace(p)) inst.addProperty(p);
	if (instanceObject.getSVExtentStatus(p)) inst.addProperty(p);
	if (instanceObject.getSVOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getSVBlockSize(p)) inst.addProperty(p);
	if (instanceObject.getSVNumberOfBlocks(p)) inst.addProperty(p);
	if (instanceObject.getSVConsumableBlocks(p)) inst.addProperty(p);
	if (instanceObject.getSVIsBasedOnUnderlyingRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVNoSinglePointOfFailure(p)) inst.addProperty(p);
	if (instanceObject.getSVDataRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVPackageRedundancy(p)) inst.addProperty(p);
	if (instanceObject.getSVDeltaReservation(p)) inst.addProperty(p);
	if (instanceObject.getSVUsage(p)) inst.addProperty(p);
	if (instanceObject.getSVOtherUsageDescription(p)) inst.addProperty(p);
	if (instanceObject.getSVClientSettableUsage(p)) inst.addProperty(p);
	if (instanceObject.getSSInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getSSElementName(p)) inst.addProperty(p);
	if (instanceObject.getSSNoSinglePointOfFailure(p)) inst.addProperty(p);
	if (instanceObject.getSSDataRedundancyMin(p)) inst.addProperty(p);
	if (instanceObject.getSSDataRedundancyMax(p)) inst.addProperty(p);
	if (instanceObject.getSSDataRedundancyGoal(p)) inst.addProperty(p);
	if (instanceObject.getSSPackageRedundancyMin(p)) inst.addProperty(p);
	if (instanceObject.getSSPackageRedundancyMax(p)) inst.addProperty(p);
	if (instanceObject.getSSPackageRedundancyGoal(p)) inst.addProperty(p);
	if (instanceObject.getSSChangeableType(p)) inst.addProperty(p);
	if (instanceObject.getAFSPSpaceConsumed(p)) inst.addProperty(p);
	if (instanceObject.getSPInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getSPPoolID(p)) inst.addProperty(p);
	if (instanceObject.getSVOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (instanceObject.getSVIdentifyingDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getSVElementName(p)) inst.addProperty(p);
	if (instanceObject.getSVPrimordial(p)) inst.addProperty(p);
	if (instanceObject.getSVExtentDiscriminator(p)) inst.addProperty(p);
	if (instanceObject.getSSExtentStripeLength(p)) inst.addProperty(p);
	if (instanceObject.getSSExtentStripeLengthMin(p)) inst.addProperty(p);
	if (instanceObject.getSSExtentStripeLengthMax(p)) inst.addProperty(p);
	if (instanceObject.getSSParityLayout(p)) inst.addProperty(p);
	if (instanceObject.getSSUserDataStripeDepth(p)) inst.addProperty(p);
	if (instanceObject.getSSUserDataStripeDepthMin(p)) inst.addProperty(p);
	if (instanceObject.getSSUserDataStripeDepthMax(p)) inst.addProperty(p);
	if (instanceObject.getSSStoragePoolInitialUsage(p)) inst.addProperty(p);
	if (instanceObject.getSSStorageExtentInitialUsage(p)) inst.addProperty(p);
	if (instanceObject.getSVIsComposite(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_VolumeViewProvider::constructKeyBindings(const UNIX_VolumeView& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_S_V_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getSVSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_V_SYSTEM_NAME,
		instanceObject.getSVSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_V_CREATION_CLASS_NAME,
		instanceObject.getSVCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_V_DEVICE_ID,
		instanceObject.getSVDeviceID(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SPINSTANCE_ID,
		instanceObject.getSPInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_VolumeViewProvider
#define UNIX_PROVIDER_NAME "UNIX_VolumeViewProvider"
#define CLASS_IMPLEMENTATION UNIX_VolumeView
#define CLASS_IMPLEMENTATION_NAME "UNIX_VolumeView"
#define BASE_CLASS_NAME "CIM_VolumeView"
#define NUMKEYS_CLASS_IMPLEMENTATION 5


#include "UNIXProviderBase.hpp"

