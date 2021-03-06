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


#include "UNIX_TierPolicySettingDataProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_TierPolicySettingDataProvider::UNIX_TierPolicySettingDataProvider()
{
}

UNIX_TierPolicySettingDataProvider::~UNIX_TierPolicySettingDataProvider()
{
}

CIMInstance UNIX_TierPolicySettingDataProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_TierPolicySettingData &instanceObject) const
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
	
	//CIM_TierSettingData Properties
	if (instanceObject.getRelativePerformanceOrderGoal(p)) inst.addProperty(p);
	if (instanceObject.getRelativePerformanceOrderMin(p)) inst.addProperty(p);
	if (instanceObject.getRelativePerformanceOrderMax(p)) inst.addProperty(p);
	if (instanceObject.getStorageObjectType(p)) inst.addProperty(p);
	if (instanceObject.getStorageTierCharacteristics(p)) inst.addProperty(p);
	if (instanceObject.getTechnology(p)) inst.addProperty(p);
	if (instanceObject.getInitialState(p)) inst.addProperty(p);
	if (instanceObject.getDynamic(p)) inst.addProperty(p);
	if (instanceObject.getDeleteOnEmptyStorageTier(p)) inst.addProperty(p);
	if (instanceObject.getPercentage(p)) inst.addProperty(p);
	if (instanceObject.getCompressionIdleInterval(p)) inst.addProperty(p);
	if (instanceObject.getCompressionRate(p)) inst.addProperty(p);
	if (className.equal("UNIX_TierSettingData")) return inst;
	
	//CIM_TierPolicySettingData Properties
	if (instanceObject.getProvisioningType(p)) inst.addProperty(p);
	if (instanceObject.getRulePriority(p)) inst.addProperty(p);
	if (instanceObject.getDataMovementRate(p)) inst.addProperty(p);
	if (instanceObject.getAutomaticStoragePoolAllocationEnabled(p)) inst.addProperty(p);
	if (instanceObject.getRemoteTieringCoordinationEnabled(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_TierPolicySettingDataProvider::constructKeyBindings(const UNIX_TierPolicySettingData& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_TierPolicySettingDataProvider
#define UNIX_PROVIDER_NAME "UNIX_TierPolicySettingDataProvider"
#define CLASS_IMPLEMENTATION UNIX_TierPolicySettingData
#define CLASS_IMPLEMENTATION_NAME "UNIX_TierPolicySettingData"
#define BASE_CLASS_NAME "CIM_TierPolicySettingData"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

