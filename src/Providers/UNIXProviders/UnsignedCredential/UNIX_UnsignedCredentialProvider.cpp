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


#include "UNIX_UnsignedCredentialProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_UnsignedCredentialProvider::UNIX_UnsignedCredentialProvider()
{
}

UNIX_UnsignedCredentialProvider::~UNIX_UnsignedCredentialProvider()
{
}

CIMInstance UNIX_UnsignedCredentialProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_UnsignedCredential &instanceObject) const
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
	
	//CIM_UnsignedCredential Properties
	if (instanceObject.getPeerIdentity(p)) inst.addProperty(p);
	if (instanceObject.getPeerIdentityType(p)) inst.addProperty(p);
	if (instanceObject.getPublicKey(p)) inst.addProperty(p);
	if (instanceObject.getPublicKeyEncoding(p)) inst.addProperty(p);
	if (instanceObject.getOtherPublicKeyEncoding(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_UnsignedCredentialProvider::constructKeyBindings(const UNIX_UnsignedCredential& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_UnsignedCredentialProvider
#define UNIX_PROVIDER_NAME "UNIX_UnsignedCredentialProvider"
#define CLASS_IMPLEMENTATION UNIX_UnsignedCredential
#define CLASS_IMPLEMENTATION_NAME "UNIX_UnsignedCredential"
#define BASE_CLASS_NAME "CIM_UnsignedCredential"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

