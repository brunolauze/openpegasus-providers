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


#include "UNIX_IPCOMPTransformProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_IPCOMPTransformProvider::UNIX_IPCOMPTransformProvider()
{
}

UNIX_IPCOMPTransformProvider::~UNIX_IPCOMPTransformProvider()
{
}

CIMInstance UNIX_IPCOMPTransformProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_IPCOMPTransform &instanceObject) const
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
	
	//CIM_ScopedSettingData Properties
	if (className.equal("CIM_ScopedSettingData")) return inst;
	
	//CIM_SATransform Properties
	if (instanceObject.getMaxLifetimeSeconds(p)) inst.addProperty(p);
	if (instanceObject.getMaxLifetimeKilobytes(p)) inst.addProperty(p);
	if (instanceObject.getVendorID(p)) inst.addProperty(p);
	if (className.equal("CIM_SATransform")) return inst;
	
	//CIM_IPCOMPTransform Properties
	if (instanceObject.getAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getOtherAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getPrivateAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getDictionarySize(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_IPCOMPTransformProvider::constructKeyBindings(const UNIX_IPCOMPTransform& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_IPCOMPTransformProvider
#define UNIX_PROVIDER_NAME "UNIX_IPCOMPTransformProvider"
#define CLASS_IMPLEMENTATION UNIX_IPCOMPTransform
#define CLASS_IMPLEMENTATION_NAME "UNIX_IPCOMPTransform"
#define BASE_CLASS_NAME "CIM_IPCOMPTransform"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

