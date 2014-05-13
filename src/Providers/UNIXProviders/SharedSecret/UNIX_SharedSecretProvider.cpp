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


#include "UNIX_SharedSecretProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_SharedSecretProvider::UNIX_SharedSecretProvider()
{
}

UNIX_SharedSecretProvider::~UNIX_SharedSecretProvider()
{
}

CIMInstance UNIX_SharedSecretProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_SharedSecret &instanceObject) const
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
	
	//CIM_Credential Properties
	if (instanceObject.getIssued(p)) inst.addProperty(p);
	if (instanceObject.getExpires(p)) inst.addProperty(p);
	if (instanceObject.getValidFrom(p)) inst.addProperty(p);
	if (className.equal("CIM_Credential")) return inst;
	
	//CIM_SharedSecret Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getServiceCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getServiceName(p)) inst.addProperty(p);
	if (instanceObject.getRemoteID(p)) inst.addProperty(p);
	if (instanceObject.getSecret(p)) inst.addProperty(p);
	if (instanceObject.getAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getProtocol(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_SharedSecretProvider::constructKeyBindings(const UNIX_SharedSecret& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		instanceObject.getSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SERVICE_CREATION_CLASS_NAME,
		instanceObject.getServiceCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SERVICE_NAME,
		instanceObject.getServiceName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_REMOTE_ID,
		instanceObject.getRemoteID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_SharedSecretProvider
#define UNIX_PROVIDER_NAME "UNIX_SharedSecretProvider"
#define CLASS_IMPLEMENTATION UNIX_SharedSecret
#define CLASS_IMPLEMENTATION_NAME "UNIX_SharedSecret"
#define BASE_CLASS_NAME "CIM_SharedSecret"
#define NUMKEYS_CLASS_IMPLEMENTATION 5


#include "UNIXProviderBase.hpp"

