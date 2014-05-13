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


#include "UNIX_SynchronizedProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_SynchronizedProvider::UNIX_SynchronizedProvider()
{
}

UNIX_SynchronizedProvider::~UNIX_SynchronizedProvider()
{
}

CIMInstance UNIX_SynchronizedProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Synchronized &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_Synchronized Properties
	if (instanceObject.getSystemElement(p)) inst.addProperty(p);
	if (instanceObject.getSyncedElement(p)) inst.addProperty(p);
	if (instanceObject.getWhenSynced(p)) inst.addProperty(p);
	if (instanceObject.getSyncMaintained(p)) inst.addProperty(p);
	if (instanceObject.getCopyState(p)) inst.addProperty(p);
	if (instanceObject.getMode(p)) inst.addProperty(p);
	if (instanceObject.getPercentSynced(p)) inst.addProperty(p);
	if (instanceObject.getProgressStatus(p)) inst.addProperty(p);
	if (instanceObject.getRequestedCopyState(p)) inst.addProperty(p);
	if (instanceObject.getSyncType(p)) inst.addProperty(p);
	if (instanceObject.getWhenActivated(p)) inst.addProperty(p);
	if (instanceObject.getWhenDeactivated(p)) inst.addProperty(p);
	if (instanceObject.getWhenEstablished(p)) inst.addProperty(p);
	if (instanceObject.getWhenSuspended(p)) inst.addProperty(p);
	if (instanceObject.getWhenSynchronized(p)) inst.addProperty(p);
	if (instanceObject.getCopyRecoveryMode(p)) inst.addProperty(p);
	if (instanceObject.getFailedCopyStopsHostIO(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_SynchronizedProvider::constructKeyBindings(const UNIX_Synchronized& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding SystemElementKey(
		PROPERTY_SYSTEM_ELEMENT,
		CIMValue(instanceObject.getSystemElement().getPath()));
	SystemElementKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(SystemElementKey);
	CIMKeyBinding SyncedElementKey(
		PROPERTY_SYNCED_ELEMENT,
		CIMValue(instanceObject.getSyncedElement().getPath()));
	SyncedElementKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(SyncedElementKey);


	return keys;
}



#define UNIX_PROVIDER UNIX_SynchronizedProvider
#define UNIX_PROVIDER_NAME "UNIX_SynchronizedProvider"
#define CLASS_IMPLEMENTATION UNIX_Synchronized
#define CLASS_IMPLEMENTATION_NAME "UNIX_Synchronized"
#define BASE_CLASS_NAME "CIM_Synchronized"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

