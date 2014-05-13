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


#include "UNIX_MemoryCapacityProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_MemoryCapacityProvider::UNIX_MemoryCapacityProvider()
{
}

UNIX_MemoryCapacityProvider::~UNIX_MemoryCapacityProvider()
{
}

CIMInstance UNIX_MemoryCapacityProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_MemoryCapacity &instanceObject) const
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
	
	//CIM_PhysicalCapacity Properties
	if (instanceObject.getName(p)) inst.addProperty(p);
	if (className.equal("CIM_PhysicalCapacity")) return inst;
	
	//CIM_MemoryCapacity Properties
	if (instanceObject.getMemoryType(p)) inst.addProperty(p);
	if (instanceObject.getMinimumMemoryCapacity(p)) inst.addProperty(p);
	if (instanceObject.getMaximumMemoryCapacity(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_MemoryCapacityProvider::constructKeyBindings(const UNIX_MemoryCapacity& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		instanceObject.getName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_MEMORY_TYPE,
		CIMValue(instanceObject.getMemoryType()).toString(),
		CIMKeyBinding::NUMERIC));


	return keys;
}



#define UNIX_PROVIDER UNIX_MemoryCapacityProvider
#define UNIX_PROVIDER_NAME "UNIX_MemoryCapacityProvider"
#define CLASS_IMPLEMENTATION UNIX_MemoryCapacity
#define CLASS_IMPLEMENTATION_NAME "UNIX_MemoryCapacity"
#define BASE_CLASS_NAME "CIM_MemoryCapacity"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

