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


#include "UNIX_VirtualSystemSettingDataProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_VirtualSystemSettingDataProvider::UNIX_VirtualSystemSettingDataProvider()
{
}

UNIX_VirtualSystemSettingDataProvider::~UNIX_VirtualSystemSettingDataProvider()
{
}

CIMInstance UNIX_VirtualSystemSettingDataProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VirtualSystemSettingData &instanceObject) const
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
	
	//CIM_VirtualSystemSettingData Properties
	if (instanceObject.getVirtualSystemIdentifier(p)) inst.addProperty(p);
	if (instanceObject.getVirtualSystemType(p)) inst.addProperty(p);
	if (instanceObject.getNotes(p)) inst.addProperty(p);
	if (instanceObject.getCreationTime(p)) inst.addProperty(p);
	if (instanceObject.getConfigurationID(p)) inst.addProperty(p);
	if (instanceObject.getConfigurationDataRoot(p)) inst.addProperty(p);
	if (instanceObject.getConfigurationFile(p)) inst.addProperty(p);
	if (instanceObject.getSnapshotDataRoot(p)) inst.addProperty(p);
	if (instanceObject.getSuspendDataRoot(p)) inst.addProperty(p);
	if (instanceObject.getSwapFileDataRoot(p)) inst.addProperty(p);
	if (instanceObject.getLogDataRoot(p)) inst.addProperty(p);
	if (instanceObject.getAutomaticStartupAction(p)) inst.addProperty(p);
	if (instanceObject.getAutomaticStartupActionDelay(p)) inst.addProperty(p);
	if (instanceObject.getAutomaticStartupActionSequenceNumber(p)) inst.addProperty(p);
	if (instanceObject.getAutomaticShutdownAction(p)) inst.addProperty(p);
	if (instanceObject.getAutomaticRecoveryAction(p)) inst.addProperty(p);
	if (instanceObject.getRecoveryFile(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_VirtualSystemSettingDataProvider::constructKeyBindings(const UNIX_VirtualSystemSettingData& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_VirtualSystemSettingDataProvider
#define UNIX_PROVIDER_NAME "UNIX_VirtualSystemSettingDataProvider"
#define CLASS_IMPLEMENTATION UNIX_VirtualSystemSettingData
#define CLASS_IMPLEMENTATION_NAME "UNIX_VirtualSystemSettingData"
#define BASE_CLASS_NAME "CIM_VirtualSystemSettingData"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

