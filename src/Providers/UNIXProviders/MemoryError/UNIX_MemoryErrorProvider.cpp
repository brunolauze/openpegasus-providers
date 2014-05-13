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


#include "UNIX_MemoryErrorProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_MemoryErrorProvider::UNIX_MemoryErrorProvider()
{
}

UNIX_MemoryErrorProvider::~UNIX_MemoryErrorProvider()
{
}

CIMInstance UNIX_MemoryErrorProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_MemoryError &instanceObject) const
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
	
	//CIM_StorageError Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getDeviceCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getStartingAddress(p)) inst.addProperty(p);
	if (instanceObject.getEndingAddress(p)) inst.addProperty(p);
	if (className.equal("UNIX_StorageError")) return inst;
	
	//CIM_MemoryError Properties
	if (instanceObject.getErrorInfo(p)) inst.addProperty(p);
	if (instanceObject.getOtherErrorDescription(p)) inst.addProperty(p);
	if (instanceObject.getCorrectableError(p)) inst.addProperty(p);
	if (instanceObject.getErrorTime(p)) inst.addProperty(p);
	if (instanceObject.getErrorAccess(p)) inst.addProperty(p);
	if (instanceObject.getErrorTransferSize(p)) inst.addProperty(p);
	if (instanceObject.getErrorData(p)) inst.addProperty(p);
	if (instanceObject.getErrorDataOrder(p)) inst.addProperty(p);
	if (instanceObject.getSystemLevelAddress(p)) inst.addProperty(p);
	if (instanceObject.getErrorResolution(p)) inst.addProperty(p);
	if (instanceObject.getAdditionalErrorData(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_MemoryErrorProvider::constructKeyBindings(const UNIX_MemoryError& instanceObject) const
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
		PROPERTY_DEVICE_CREATION_CLASS_NAME,
		instanceObject.getDeviceCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DEVICE_ID,
		instanceObject.getDeviceID(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_STARTING_ADDRESS,
		CIMValue(instanceObject.getStartingAddress()).toString(),
		CIMKeyBinding::NUMERIC));


	return keys;
}



#define UNIX_PROVIDER UNIX_MemoryErrorProvider
#define UNIX_PROVIDER_NAME "UNIX_MemoryErrorProvider"
#define CLASS_IMPLEMENTATION UNIX_MemoryError
#define CLASS_IMPLEMENTATION_NAME "UNIX_MemoryError"
#define BASE_CLASS_NAME "CIM_MemoryError"
#define NUMKEYS_CLASS_IMPLEMENTATION 5


#include "UNIXProviderBase.hpp"

