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


#include "UNIX_StorageTierProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_StorageTierProvider::UNIX_StorageTierProvider()
{
}

UNIX_StorageTierProvider::~UNIX_StorageTierProvider()
{
}

CIMInstance UNIX_StorageTierProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageTier &instanceObject) const
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
	
	//CIM_Collection Properties
	if (className.equal("CIM_Collection")) return inst;
	
	//CIM_SystemSpecificCollection Properties
	if (className.equal("CIM_SystemSpecificCollection")) return inst;
	
	//CIM_StorageTier Properties
	if (instanceObject.getRelativePerformanceOrder(p)) inst.addProperty(p);
	if (instanceObject.getStorageObjectType(p)) inst.addProperty(p);
	if (instanceObject.getTechnology(p)) inst.addProperty(p);
	if (instanceObject.getState(p)) inst.addProperty(p);
	if (instanceObject.getDynamic(p)) inst.addProperty(p);
	if (instanceObject.getDeleteOnEmptyStorageTier(p)) inst.addProperty(p);
	if (instanceObject.getPercentage(p)) inst.addProperty(p);
	if (instanceObject.getTotalCapacity(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_StorageTierProvider::constructKeyBindings(const UNIX_StorageTier& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_StorageTierProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageTierProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageTier
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageTier"
#define BASE_CLASS_NAME "CIM_StorageTier"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"
