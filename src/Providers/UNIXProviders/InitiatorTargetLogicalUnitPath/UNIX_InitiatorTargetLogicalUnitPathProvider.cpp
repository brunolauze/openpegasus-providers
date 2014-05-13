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


#include "UNIX_InitiatorTargetLogicalUnitPathProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_InitiatorTargetLogicalUnitPathProvider::UNIX_InitiatorTargetLogicalUnitPathProvider()
{
}

UNIX_InitiatorTargetLogicalUnitPathProvider::~UNIX_InitiatorTargetLogicalUnitPathProvider()
{
}

CIMInstance UNIX_InitiatorTargetLogicalUnitPathProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_InitiatorTargetLogicalUnitPath &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_InitiatorTargetLogicalUnitPath Properties
	if (instanceObject.getInitiator(p)) inst.addProperty(p);
	if (instanceObject.getTarget(p)) inst.addProperty(p);
	if (instanceObject.getLogicalUnit(p)) inst.addProperty(p);
	if (instanceObject.getState(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_InitiatorTargetLogicalUnitPathProvider::constructKeyBindings(const UNIX_InitiatorTargetLogicalUnitPath& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding InitiatorKey(
		PROPERTY_INITIATOR,
		CIMValue(instanceObject.getInitiator().getPath()));
	InitiatorKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(InitiatorKey);
	CIMKeyBinding TargetKey(
		PROPERTY_TARGET,
		CIMValue(instanceObject.getTarget().getPath()));
	TargetKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(TargetKey);
	CIMKeyBinding LogicalUnitKey(
		PROPERTY_LOGICAL_UNIT,
		CIMValue(instanceObject.getLogicalUnit().getPath()));
	LogicalUnitKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(LogicalUnitKey);


	return keys;
}



#define UNIX_PROVIDER UNIX_InitiatorTargetLogicalUnitPathProvider
#define UNIX_PROVIDER_NAME "UNIX_InitiatorTargetLogicalUnitPathProvider"
#define CLASS_IMPLEMENTATION UNIX_InitiatorTargetLogicalUnitPath
#define CLASS_IMPLEMENTATION_NAME "UNIX_InitiatorTargetLogicalUnitPath"
#define BASE_CLASS_NAME "CIM_InitiatorTargetLogicalUnitPath"
#define NUMKEYS_CLASS_IMPLEMENTATION 3


#include "UNIXProviderBase.hpp"
