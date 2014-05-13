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


#include "UNIX_BlockStatisticsManifestProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_BlockStatisticsManifestProvider::UNIX_BlockStatisticsManifestProvider()
{
}

UNIX_BlockStatisticsManifestProvider::~UNIX_BlockStatisticsManifestProvider()
{
}

CIMInstance UNIX_BlockStatisticsManifestProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_BlockStatisticsManifest &instanceObject) const
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
	
	//CIM_BlockStatisticsManifest Properties
	if (instanceObject.getElementType(p)) inst.addProperty(p);
	if (instanceObject.getIncludeStartStatisticTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeStatisticTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeKBytesTransferred(p)) inst.addProperty(p);
	if (instanceObject.getIncludeIOTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadHitIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadIOTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadHitIOTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeKBytesRead(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteHitIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteIOTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteHitIOTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeKBytesWritten(p)) inst.addProperty(p);
	if (instanceObject.getIncludeIdleTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeMaintOp(p)) inst.addProperty(p);
	if (instanceObject.getIncludeMaintTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getCSVSequence(p)) inst.addProperty(p);
	if (instanceObject.getCSVRateSequence(p)) inst.addProperty(p);
	if (instanceObject.getIncludeKBytesReadRate(p)) inst.addProperty(p);
	if (instanceObject.getIncludeKBytesTransferredRate(p)) inst.addProperty(p);
	if (instanceObject.getIncludeKBytesWrittenRate(p)) inst.addProperty(p);
	if (instanceObject.getIncludeMaintOpRate(p)) inst.addProperty(p);
	if (instanceObject.getIncludeRateIntervalEndTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeRateIntervalStartTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadHitIOsRate(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadIOsRate(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalIOsRate(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteHitIOsRate(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteIOsRate(p)) inst.addProperty(p);
	if (instanceObject.getRateElementType(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_BlockStatisticsManifestProvider::constructKeyBindings(const UNIX_BlockStatisticsManifest& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_BlockStatisticsManifestProvider
#define UNIX_PROVIDER_NAME "UNIX_BlockStatisticsManifestProvider"
#define CLASS_IMPLEMENTATION UNIX_BlockStatisticsManifest
#define CLASS_IMPLEMENTATION_NAME "UNIX_BlockStatisticsManifest"
#define BASE_CLASS_NAME "CIM_BlockStatisticsManifest"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

