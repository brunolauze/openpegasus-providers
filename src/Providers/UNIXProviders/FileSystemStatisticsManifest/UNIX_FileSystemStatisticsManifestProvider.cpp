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


#include "UNIX_FileSystemStatisticsManifestProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_FileSystemStatisticsManifestProvider::UNIX_FileSystemStatisticsManifestProvider()
{
}

UNIX_FileSystemStatisticsManifestProvider::~UNIX_FileSystemStatisticsManifestProvider()
{
}

CIMInstance UNIX_FileSystemStatisticsManifestProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_FileSystemStatisticsManifest &instanceObject) const
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
	
	//CIM_FileSystemStatisticsManifest Properties
	if (instanceObject.getElementType(p)) inst.addProperty(p);
	if (instanceObject.getOtherElementTypeDescription(p)) inst.addProperty(p);
	if (instanceObject.getIncludeStartStatisticTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeStatisticTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalBytesTransferred(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeOtherIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeMetadataReadIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeMetadataWriteIOs(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalIOTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalIdleTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadIOTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeBytesRead(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteIOTimeCounter(p)) inst.addProperty(p);
	if (instanceObject.getIncludeBytesWritten(p)) inst.addProperty(p);
	if (instanceObject.getIncludeMetadataBytesRead(p)) inst.addProperty(p);
	if (instanceObject.getIncludeMetadataBytesWritten(p)) inst.addProperty(p);
	if (instanceObject.getIncludePercentDurableOpens(p)) inst.addProperty(p);
	if (instanceObject.getIncludePercentResilientOpens(p)) inst.addProperty(p);
	if (instanceObject.getIncludePercentPersistentOpens(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageReadResponseTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageWriteResponseTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageRequestResponseTime(p)) inst.addProperty(p);
	if (instanceObject.getIncludeBytesReadPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalBytesReceived(p)) inst.addProperty(p);
	if (instanceObject.getIncludeBytesReceivedPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalBytesSent(p)) inst.addProperty(p);
	if (instanceObject.getIncludeBytesSentPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeBytesTranferredPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeBytesWrittenPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeFilesOpenedPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalOpenFileCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeCurrentPendingRequests(p)) inst.addProperty(p);
	if (instanceObject.getIncludeReadRequestsProcessedPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalRequestsReceived(p)) inst.addProperty(p);
	if (instanceObject.getIncludeRequestsReceivedPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalDurableHandleReopenCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalFailedDurableHandleReopenCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalFailedResilientHandleReopenCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeCurrentOpenFileCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalResilientHandleReopenCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalPersistentHandleReopenCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalFailedPersistentHandleReopenCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTreeConnectCount(p)) inst.addProperty(p);
	if (instanceObject.getIncludeWriteRequestsProcessedPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeTotalMetadataRequestsReceived(p)) inst.addProperty(p);
	if (instanceObject.getIncludeMetadataRequestsReceivedPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageTimePerDataRequest(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageBytesPerDataRequest(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageBytesPerReadRequest(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageBytesPerWriteRequest(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageReadQueueLength(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageWriteQueueLength(p)) inst.addProperty(p);
	if (instanceObject.getIncludeAverageDataQueueLength(p)) inst.addProperty(p);
	if (instanceObject.getIncludeDataBytesPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeDataRequestsPerSec(p)) inst.addProperty(p);
	if (instanceObject.getIncludeCurrentDataQueueLength(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_FileSystemStatisticsManifestProvider::constructKeyBindings(const UNIX_FileSystemStatisticsManifest& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_FileSystemStatisticsManifestProvider
#define UNIX_PROVIDER_NAME "UNIX_FileSystemStatisticsManifestProvider"
#define CLASS_IMPLEMENTATION UNIX_FileSystemStatisticsManifest
#define CLASS_IMPLEMENTATION_NAME "UNIX_FileSystemStatisticsManifest"
#define BASE_CLASS_NAME "CIM_FileSystemStatisticsManifest"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

