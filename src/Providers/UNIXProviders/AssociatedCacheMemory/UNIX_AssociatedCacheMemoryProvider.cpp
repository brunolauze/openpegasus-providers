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


#include "UNIX_AssociatedCacheMemoryProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_AssociatedCacheMemoryProvider::UNIX_AssociatedCacheMemoryProvider()
{
}

UNIX_AssociatedCacheMemoryProvider::~UNIX_AssociatedCacheMemoryProvider()
{
}

CIMInstance UNIX_AssociatedCacheMemoryProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_AssociatedCacheMemory &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_Dependency Properties
	if (instanceObject.getAntecedent(p)) inst.addProperty(p);
	if (instanceObject.getDependent(p)) inst.addProperty(p);
	if (className.equal("CIM_Dependency")) return inst;
	
	//CIM_AssociatedMemory Properties
	if (className.equal("CIM_AssociatedMemory")) return inst;
	
	//CIM_AssociatedCacheMemory Properties
	if (instanceObject.getLevel(p)) inst.addProperty(p);
	if (instanceObject.getOtherLevelDescription(p)) inst.addProperty(p);
	if (instanceObject.getWritePolicy(p)) inst.addProperty(p);
	if (instanceObject.getOtherWritePolicyDescription(p)) inst.addProperty(p);
	if (instanceObject.getCacheType(p)) inst.addProperty(p);
	if (instanceObject.getOtherCacheTypeDescription(p)) inst.addProperty(p);
	if (instanceObject.getLineSize(p)) inst.addProperty(p);
	if (instanceObject.getReplacementPolicy(p)) inst.addProperty(p);
	if (instanceObject.getOtherReplacementPolicyDescription(p)) inst.addProperty(p);
	if (instanceObject.getReadPolicy(p)) inst.addProperty(p);
	if (instanceObject.getOtherReadPolicyDescription(p)) inst.addProperty(p);
	if (instanceObject.getFlushTimer(p)) inst.addProperty(p);
	if (instanceObject.getAssociativity(p)) inst.addProperty(p);
	if (instanceObject.getOtherAssociativityDescription(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_AssociatedCacheMemoryProvider::constructKeyBindings(const UNIX_AssociatedCacheMemory& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding AntecedentKey(
		PROPERTY_ANTECEDENT,
		CIMValue(instanceObject.getAntecedent().getPath()));
	AntecedentKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(AntecedentKey);
	CIMKeyBinding DependentKey(
		PROPERTY_DEPENDENT,
		CIMValue(instanceObject.getDependent().getPath()));
	DependentKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(DependentKey);


	return keys;
}



#define UNIX_PROVIDER UNIX_AssociatedCacheMemoryProvider
#define UNIX_PROVIDER_NAME "UNIX_AssociatedCacheMemoryProvider"
#define CLASS_IMPLEMENTATION UNIX_AssociatedCacheMemory
#define CLASS_IMPLEMENTATION_NAME "UNIX_AssociatedCacheMemory"
#define BASE_CLASS_NAME "CIM_AssociatedCacheMemory"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

