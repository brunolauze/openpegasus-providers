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


#include "UNIX_NamedSharedIKESecretProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_NamedSharedIKESecretProvider::UNIX_NamedSharedIKESecretProvider()
{
}

UNIX_NamedSharedIKESecretProvider::~UNIX_NamedSharedIKESecretProvider()
{
}

CIMInstance UNIX_NamedSharedIKESecretProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_NamedSharedIKESecret &instanceObject) const
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
	
	//CIM_NamedSharedIKESecret Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getServiceCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getServiceName(p)) inst.addProperty(p);
	if (instanceObject.getLocalIdentity(p)) inst.addProperty(p);
	if (instanceObject.getLocalIdentityType(p)) inst.addProperty(p);
	if (instanceObject.getPeerIdentity(p)) inst.addProperty(p);
	if (instanceObject.getPeerIdentityType(p)) inst.addProperty(p);
	if (instanceObject.getSharedSecretName(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_NamedSharedIKESecretProvider::constructKeyBindings(const UNIX_NamedSharedIKESecret& instanceObject) const
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
		PROPERTY_LOCAL_IDENTITY,
		instanceObject.getLocalIdentity(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_LOCAL_IDENTITY_TYPE,
		CIMValue(instanceObject.getLocalIdentityType()).toString(),
		CIMKeyBinding::NUMERIC));
	keys.append(CIMKeyBinding(
		PROPERTY_PEER_IDENTITY,
		instanceObject.getPeerIdentity(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_PEER_IDENTITY_TYPE,
		CIMValue(instanceObject.getPeerIdentityType()).toString(),
		CIMKeyBinding::NUMERIC));


	return keys;
}



#define UNIX_PROVIDER UNIX_NamedSharedIKESecretProvider
#define UNIX_PROVIDER_NAME "UNIX_NamedSharedIKESecretProvider"
#define CLASS_IMPLEMENTATION UNIX_NamedSharedIKESecret
#define CLASS_IMPLEMENTATION_NAME "UNIX_NamedSharedIKESecret"
#define BASE_CLASS_NAME "CIM_NamedSharedIKESecret"
#define NUMKEYS_CLASS_IMPLEMENTATION 8


#include "UNIXProviderBase.hpp"

