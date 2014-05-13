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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.38.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FileStatistics
*/


/* **** Description *** */
/*
Instances of this class define a list of supported or desired properties of FileSystemStatisticalData instances. In the case where a FileSystemStatisticsManifest instance is a member of a FileSystemStatisticsManifestCollection used in a FileSystemStatisticsService.GetStatisticsCollection request, for each of the boolean "include" properties set to true in that FileSystemStatisticsManifest, the corresponding FileSystemStatisticalData property will be included, if available, in the statistics returned for FileSystemStatisticalData instances whose ElementType matches the ElementType of the FileSystemStatisticsManifest.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_FileSystemStatisticsManifest:
				ElementType UInt16
				OtherElementTypeDescription String
				IncludeStartStatisticTime Boolean
				IncludeStatisticTime Boolean
				IncludeTotalIOs Boolean
				IncludeTotalBytesTransferred Boolean
				IncludeReadIOs Boolean
				IncludeWriteIOs Boolean
				IncludeOtherIOs Boolean
				IncludeMetadataReadIOs Boolean
				IncludeMetadataWriteIOs Boolean
				IncludeTotalIOTimeCounter Boolean
				IncludeTotalIdleTimeCounter Boolean
				IncludeReadIOTimeCounter Boolean
				IncludeBytesRead Boolean
				IncludeWriteIOTimeCounter Boolean
				IncludeBytesWritten Boolean
				IncludeMetadataBytesRead Boolean
				IncludeMetadataBytesWritten Boolean
				IncludePercentDurableOpens Boolean
				IncludePercentResilientOpens Boolean
				IncludePercentPersistentOpens Boolean
				IncludeAverageReadResponseTime Boolean
				IncludeAverageWriteResponseTime Boolean
				IncludeAverageRequestResponseTime Boolean
				IncludeBytesReadPerSec Boolean
				IncludeTotalBytesReceived Boolean
				IncludeBytesReceivedPerSec Boolean
				IncludeTotalBytesSent Boolean
				IncludeBytesSentPerSec Boolean
				IncludeBytesTranferredPerSec Boolean
				IncludeBytesWrittenPerSec Boolean
				IncludeFilesOpenedPerSec Boolean
				IncludeTotalOpenFileCount Boolean
				IncludeCurrentPendingRequests Boolean
				IncludeReadRequestsProcessedPerSec Boolean
				IncludeTotalRequestsReceived Boolean
				IncludeRequestsReceivedPerSec Boolean
				IncludeTotalDurableHandleReopenCount Boolean
				IncludeTotalFailedDurableHandleReopenCount Boolean
				IncludeTotalFailedResilientHandleReopenCount Boolean
				IncludeCurrentOpenFileCount Boolean
				IncludeTotalResilientHandleReopenCount Boolean
				IncludeTotalPersistentHandleReopenCount Boolean
				IncludeTotalFailedPersistentHandleReopenCount Boolean
				IncludeTreeConnectCount Boolean
				IncludeWriteRequestsProcessedPerSec Boolean
				IncludeTotalMetadataRequestsReceived Boolean
				IncludeMetadataRequestsReceivedPerSec Boolean
				IncludeAverageTimePerDataRequest Boolean
				IncludeAverageBytesPerDataRequest Boolean
				IncludeAverageBytesPerReadRequest Boolean
				IncludeAverageBytesPerWriteRequest Boolean
				IncludeAverageReadQueueLength Boolean
				IncludeAverageWriteQueueLength Boolean
				IncludeAverageDataQueueLength Boolean
				IncludeDataBytesPerSec Boolean
				IncludeDataRequestsPerSec Boolean
				IncludeCurrentDataQueueLength Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_FileSystemStatisticsManifest:


*/

#ifndef __UNIX_FILESYSTEMSTATISTICSMANIFEST_H
#define __UNIX_FILESYSTEMSTATISTICSMANIFEST_H


#include "CIM_ManagedElement.h"

#include "UNIX_FileSystemStatisticsManifestDeps.h"


#ifndef PROPERTY_ELEMENT_TYPE
#define PROPERTY_ELEMENT_TYPE \
					"ElementType"
#endif

#ifndef PROPERTY_OTHER_ELEMENT_TYPE_DESCRIPTION
#define PROPERTY_OTHER_ELEMENT_TYPE_DESCRIPTION \
					"OtherElementTypeDescription"
#endif

#ifndef PROPERTY_INCLUDE_START_STATISTIC_TIME
#define PROPERTY_INCLUDE_START_STATISTIC_TIME \
					"IncludeStartStatisticTime"
#endif

#ifndef PROPERTY_INCLUDE_STATISTIC_TIME
#define PROPERTY_INCLUDE_STATISTIC_TIME \
					"IncludeStatisticTime"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_IOS
#define PROPERTY_INCLUDE_TOTAL_IOS \
					"IncludeTotalIOs"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_BYTES_TRANSFERRED
#define PROPERTY_INCLUDE_TOTAL_BYTES_TRANSFERRED \
					"IncludeTotalBytesTransferred"
#endif

#ifndef PROPERTY_INCLUDE_READ_IOS
#define PROPERTY_INCLUDE_READ_IOS \
					"IncludeReadIOs"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_IOS
#define PROPERTY_INCLUDE_WRITE_IOS \
					"IncludeWriteIOs"
#endif

#ifndef PROPERTY_INCLUDE_OTHER_IOS
#define PROPERTY_INCLUDE_OTHER_IOS \
					"IncludeOtherIOs"
#endif

#ifndef PROPERTY_INCLUDE_METADATA_READ_IOS
#define PROPERTY_INCLUDE_METADATA_READ_IOS \
					"IncludeMetadataReadIOs"
#endif

#ifndef PROPERTY_INCLUDE_METADATA_WRITE_IOS
#define PROPERTY_INCLUDE_METADATA_WRITE_IOS \
					"IncludeMetadataWriteIOs"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_IO_TIME_COUNTER
#define PROPERTY_INCLUDE_TOTAL_IO_TIME_COUNTER \
					"IncludeTotalIOTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_IDLE_TIME_COUNTER
#define PROPERTY_INCLUDE_TOTAL_IDLE_TIME_COUNTER \
					"IncludeTotalIdleTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_READ_IO_TIME_COUNTER
#define PROPERTY_INCLUDE_READ_IO_TIME_COUNTER \
					"IncludeReadIOTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_BYTES_READ
#define PROPERTY_INCLUDE_BYTES_READ \
					"IncludeBytesRead"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_IO_TIME_COUNTER
#define PROPERTY_INCLUDE_WRITE_IO_TIME_COUNTER \
					"IncludeWriteIOTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_BYTES_WRITTEN
#define PROPERTY_INCLUDE_BYTES_WRITTEN \
					"IncludeBytesWritten"
#endif

#ifndef PROPERTY_INCLUDE_METADATA_BYTES_READ
#define PROPERTY_INCLUDE_METADATA_BYTES_READ \
					"IncludeMetadataBytesRead"
#endif

#ifndef PROPERTY_INCLUDE_METADATA_BYTES_WRITTEN
#define PROPERTY_INCLUDE_METADATA_BYTES_WRITTEN \
					"IncludeMetadataBytesWritten"
#endif

#ifndef PROPERTY_INCLUDE_PERCENT_DURABLE_OPENS
#define PROPERTY_INCLUDE_PERCENT_DURABLE_OPENS \
					"IncludePercentDurableOpens"
#endif

#ifndef PROPERTY_INCLUDE_PERCENT_RESILIENT_OPENS
#define PROPERTY_INCLUDE_PERCENT_RESILIENT_OPENS \
					"IncludePercentResilientOpens"
#endif

#ifndef PROPERTY_INCLUDE_PERCENT_PERSISTENT_OPENS
#define PROPERTY_INCLUDE_PERCENT_PERSISTENT_OPENS \
					"IncludePercentPersistentOpens"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_READ_RESPONSE_TIME
#define PROPERTY_INCLUDE_AVERAGE_READ_RESPONSE_TIME \
					"IncludeAverageReadResponseTime"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_WRITE_RESPONSE_TIME
#define PROPERTY_INCLUDE_AVERAGE_WRITE_RESPONSE_TIME \
					"IncludeAverageWriteResponseTime"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_REQUEST_RESPONSE_TIME
#define PROPERTY_INCLUDE_AVERAGE_REQUEST_RESPONSE_TIME \
					"IncludeAverageRequestResponseTime"
#endif

#ifndef PROPERTY_INCLUDE_BYTES_READ_PER_SEC
#define PROPERTY_INCLUDE_BYTES_READ_PER_SEC \
					"IncludeBytesReadPerSec"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_BYTES_RECEIVED
#define PROPERTY_INCLUDE_TOTAL_BYTES_RECEIVED \
					"IncludeTotalBytesReceived"
#endif

#ifndef PROPERTY_INCLUDE_BYTES_RECEIVED_PER_SEC
#define PROPERTY_INCLUDE_BYTES_RECEIVED_PER_SEC \
					"IncludeBytesReceivedPerSec"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_BYTES_SENT
#define PROPERTY_INCLUDE_TOTAL_BYTES_SENT \
					"IncludeTotalBytesSent"
#endif

#ifndef PROPERTY_INCLUDE_BYTES_SENT_PER_SEC
#define PROPERTY_INCLUDE_BYTES_SENT_PER_SEC \
					"IncludeBytesSentPerSec"
#endif

#ifndef PROPERTY_INCLUDE_BYTES_TRANFERRED_PER_SEC
#define PROPERTY_INCLUDE_BYTES_TRANFERRED_PER_SEC \
					"IncludeBytesTranferredPerSec"
#endif

#ifndef PROPERTY_INCLUDE_BYTES_WRITTEN_PER_SEC
#define PROPERTY_INCLUDE_BYTES_WRITTEN_PER_SEC \
					"IncludeBytesWrittenPerSec"
#endif

#ifndef PROPERTY_INCLUDE_FILES_OPENED_PER_SEC
#define PROPERTY_INCLUDE_FILES_OPENED_PER_SEC \
					"IncludeFilesOpenedPerSec"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_OPEN_FILE_COUNT
#define PROPERTY_INCLUDE_TOTAL_OPEN_FILE_COUNT \
					"IncludeTotalOpenFileCount"
#endif

#ifndef PROPERTY_INCLUDE_CURRENT_PENDING_REQUESTS
#define PROPERTY_INCLUDE_CURRENT_PENDING_REQUESTS \
					"IncludeCurrentPendingRequests"
#endif

#ifndef PROPERTY_INCLUDE_READ_REQUESTS_PROCESSED_PER_SEC
#define PROPERTY_INCLUDE_READ_REQUESTS_PROCESSED_PER_SEC \
					"IncludeReadRequestsProcessedPerSec"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_REQUESTS_RECEIVED
#define PROPERTY_INCLUDE_TOTAL_REQUESTS_RECEIVED \
					"IncludeTotalRequestsReceived"
#endif

#ifndef PROPERTY_INCLUDE_REQUESTS_RECEIVED_PER_SEC
#define PROPERTY_INCLUDE_REQUESTS_RECEIVED_PER_SEC \
					"IncludeRequestsReceivedPerSec"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_DURABLE_HANDLE_REOPEN_COUNT
#define PROPERTY_INCLUDE_TOTAL_DURABLE_HANDLE_REOPEN_COUNT \
					"IncludeTotalDurableHandleReopenCount"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_FAILED_DURABLE_HANDLE_REOPEN_COUNT
#define PROPERTY_INCLUDE_TOTAL_FAILED_DURABLE_HANDLE_REOPEN_COUNT \
					"IncludeTotalFailedDurableHandleReopenCount"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_FAILED_RESILIENT_HANDLE_REOPEN_COUNT
#define PROPERTY_INCLUDE_TOTAL_FAILED_RESILIENT_HANDLE_REOPEN_COUNT \
					"IncludeTotalFailedResilientHandleReopenCount"
#endif

#ifndef PROPERTY_INCLUDE_CURRENT_OPEN_FILE_COUNT
#define PROPERTY_INCLUDE_CURRENT_OPEN_FILE_COUNT \
					"IncludeCurrentOpenFileCount"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_RESILIENT_HANDLE_REOPEN_COUNT
#define PROPERTY_INCLUDE_TOTAL_RESILIENT_HANDLE_REOPEN_COUNT \
					"IncludeTotalResilientHandleReopenCount"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_PERSISTENT_HANDLE_REOPEN_COUNT
#define PROPERTY_INCLUDE_TOTAL_PERSISTENT_HANDLE_REOPEN_COUNT \
					"IncludeTotalPersistentHandleReopenCount"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_FAILED_PERSISTENT_HANDLE_REOPEN_COUNT
#define PROPERTY_INCLUDE_TOTAL_FAILED_PERSISTENT_HANDLE_REOPEN_COUNT \
					"IncludeTotalFailedPersistentHandleReopenCount"
#endif

#ifndef PROPERTY_INCLUDE_TREE_CONNECT_COUNT
#define PROPERTY_INCLUDE_TREE_CONNECT_COUNT \
					"IncludeTreeConnectCount"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_REQUESTS_PROCESSED_PER_SEC
#define PROPERTY_INCLUDE_WRITE_REQUESTS_PROCESSED_PER_SEC \
					"IncludeWriteRequestsProcessedPerSec"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_METADATA_REQUESTS_RECEIVED
#define PROPERTY_INCLUDE_TOTAL_METADATA_REQUESTS_RECEIVED \
					"IncludeTotalMetadataRequestsReceived"
#endif

#ifndef PROPERTY_INCLUDE_METADATA_REQUESTS_RECEIVED_PER_SEC
#define PROPERTY_INCLUDE_METADATA_REQUESTS_RECEIVED_PER_SEC \
					"IncludeMetadataRequestsReceivedPerSec"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_TIME_PER_DATA_REQUEST
#define PROPERTY_INCLUDE_AVERAGE_TIME_PER_DATA_REQUEST \
					"IncludeAverageTimePerDataRequest"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_BYTES_PER_DATA_REQUEST
#define PROPERTY_INCLUDE_AVERAGE_BYTES_PER_DATA_REQUEST \
					"IncludeAverageBytesPerDataRequest"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_BYTES_PER_READ_REQUEST
#define PROPERTY_INCLUDE_AVERAGE_BYTES_PER_READ_REQUEST \
					"IncludeAverageBytesPerReadRequest"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_BYTES_PER_WRITE_REQUEST
#define PROPERTY_INCLUDE_AVERAGE_BYTES_PER_WRITE_REQUEST \
					"IncludeAverageBytesPerWriteRequest"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_READ_QUEUE_LENGTH
#define PROPERTY_INCLUDE_AVERAGE_READ_QUEUE_LENGTH \
					"IncludeAverageReadQueueLength"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_WRITE_QUEUE_LENGTH
#define PROPERTY_INCLUDE_AVERAGE_WRITE_QUEUE_LENGTH \
					"IncludeAverageWriteQueueLength"
#endif

#ifndef PROPERTY_INCLUDE_AVERAGE_DATA_QUEUE_LENGTH
#define PROPERTY_INCLUDE_AVERAGE_DATA_QUEUE_LENGTH \
					"IncludeAverageDataQueueLength"
#endif

#ifndef PROPERTY_INCLUDE_DATA_BYTES_PER_SEC
#define PROPERTY_INCLUDE_DATA_BYTES_PER_SEC \
					"IncludeDataBytesPerSec"
#endif

#ifndef PROPERTY_INCLUDE_DATA_REQUESTS_PER_SEC
#define PROPERTY_INCLUDE_DATA_REQUESTS_PER_SEC \
					"IncludeDataRequestsPerSec"
#endif

#ifndef PROPERTY_INCLUDE_CURRENT_DATA_QUEUE_LENGTH
#define PROPERTY_INCLUDE_CURRENT_DATA_QUEUE_LENGTH \
					"IncludeCurrentDataQueueLength"
#endif



class UNIX_FileSystemStatisticsManifest :
	public CIM_ManagedElement
{
public:

	UNIX_FileSystemStatisticsManifest();
	~UNIX_FileSystemStatisticsManifest();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getElementType(CIMProperty&) const;
	virtual Uint16 getElementType() const;
	virtual void setElementType(Uint16&);
	virtual Boolean getOtherElementTypeDescription(CIMProperty&) const;
	virtual String getOtherElementTypeDescription() const;
	virtual void setOtherElementTypeDescription(String&);
	virtual Boolean getIncludeStartStatisticTime(CIMProperty&) const;
	virtual Boolean getIncludeStartStatisticTime() const;
	virtual void setIncludeStartStatisticTime(Boolean&);
	virtual Boolean getIncludeStatisticTime(CIMProperty&) const;
	virtual Boolean getIncludeStatisticTime() const;
	virtual void setIncludeStatisticTime(Boolean&);
	virtual Boolean getIncludeTotalIOs(CIMProperty&) const;
	virtual Boolean getIncludeTotalIOs() const;
	virtual void setIncludeTotalIOs(Boolean&);
	virtual Boolean getIncludeTotalBytesTransferred(CIMProperty&) const;
	virtual Boolean getIncludeTotalBytesTransferred() const;
	virtual void setIncludeTotalBytesTransferred(Boolean&);
	virtual Boolean getIncludeReadIOs(CIMProperty&) const;
	virtual Boolean getIncludeReadIOs() const;
	virtual void setIncludeReadIOs(Boolean&);
	virtual Boolean getIncludeWriteIOs(CIMProperty&) const;
	virtual Boolean getIncludeWriteIOs() const;
	virtual void setIncludeWriteIOs(Boolean&);
	virtual Boolean getIncludeOtherIOs(CIMProperty&) const;
	virtual Boolean getIncludeOtherIOs() const;
	virtual void setIncludeOtherIOs(Boolean&);
	virtual Boolean getIncludeMetadataReadIOs(CIMProperty&) const;
	virtual Boolean getIncludeMetadataReadIOs() const;
	virtual void setIncludeMetadataReadIOs(Boolean&);
	virtual Boolean getIncludeMetadataWriteIOs(CIMProperty&) const;
	virtual Boolean getIncludeMetadataWriteIOs() const;
	virtual void setIncludeMetadataWriteIOs(Boolean&);
	virtual Boolean getIncludeTotalIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeTotalIOTimeCounter() const;
	virtual void setIncludeTotalIOTimeCounter(Boolean&);
	virtual Boolean getIncludeTotalIdleTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeTotalIdleTimeCounter() const;
	virtual void setIncludeTotalIdleTimeCounter(Boolean&);
	virtual Boolean getIncludeReadIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeReadIOTimeCounter() const;
	virtual void setIncludeReadIOTimeCounter(Boolean&);
	virtual Boolean getIncludeBytesRead(CIMProperty&) const;
	virtual Boolean getIncludeBytesRead() const;
	virtual void setIncludeBytesRead(Boolean&);
	virtual Boolean getIncludeWriteIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeWriteIOTimeCounter() const;
	virtual void setIncludeWriteIOTimeCounter(Boolean&);
	virtual Boolean getIncludeBytesWritten(CIMProperty&) const;
	virtual Boolean getIncludeBytesWritten() const;
	virtual void setIncludeBytesWritten(Boolean&);
	virtual Boolean getIncludeMetadataBytesRead(CIMProperty&) const;
	virtual Boolean getIncludeMetadataBytesRead() const;
	virtual void setIncludeMetadataBytesRead(Boolean&);
	virtual Boolean getIncludeMetadataBytesWritten(CIMProperty&) const;
	virtual Boolean getIncludeMetadataBytesWritten() const;
	virtual void setIncludeMetadataBytesWritten(Boolean&);
	virtual Boolean getIncludePercentDurableOpens(CIMProperty&) const;
	virtual Boolean getIncludePercentDurableOpens() const;
	virtual void setIncludePercentDurableOpens(Boolean&);
	virtual Boolean getIncludePercentResilientOpens(CIMProperty&) const;
	virtual Boolean getIncludePercentResilientOpens() const;
	virtual void setIncludePercentResilientOpens(Boolean&);
	virtual Boolean getIncludePercentPersistentOpens(CIMProperty&) const;
	virtual Boolean getIncludePercentPersistentOpens() const;
	virtual void setIncludePercentPersistentOpens(Boolean&);
	virtual Boolean getIncludeAverageReadResponseTime(CIMProperty&) const;
	virtual Boolean getIncludeAverageReadResponseTime() const;
	virtual void setIncludeAverageReadResponseTime(Boolean&);
	virtual Boolean getIncludeAverageWriteResponseTime(CIMProperty&) const;
	virtual Boolean getIncludeAverageWriteResponseTime() const;
	virtual void setIncludeAverageWriteResponseTime(Boolean&);
	virtual Boolean getIncludeAverageRequestResponseTime(CIMProperty&) const;
	virtual Boolean getIncludeAverageRequestResponseTime() const;
	virtual void setIncludeAverageRequestResponseTime(Boolean&);
	virtual Boolean getIncludeBytesReadPerSec(CIMProperty&) const;
	virtual Boolean getIncludeBytesReadPerSec() const;
	virtual void setIncludeBytesReadPerSec(Boolean&);
	virtual Boolean getIncludeTotalBytesReceived(CIMProperty&) const;
	virtual Boolean getIncludeTotalBytesReceived() const;
	virtual void setIncludeTotalBytesReceived(Boolean&);
	virtual Boolean getIncludeBytesReceivedPerSec(CIMProperty&) const;
	virtual Boolean getIncludeBytesReceivedPerSec() const;
	virtual void setIncludeBytesReceivedPerSec(Boolean&);
	virtual Boolean getIncludeTotalBytesSent(CIMProperty&) const;
	virtual Boolean getIncludeTotalBytesSent() const;
	virtual void setIncludeTotalBytesSent(Boolean&);
	virtual Boolean getIncludeBytesSentPerSec(CIMProperty&) const;
	virtual Boolean getIncludeBytesSentPerSec() const;
	virtual void setIncludeBytesSentPerSec(Boolean&);
	virtual Boolean getIncludeBytesTranferredPerSec(CIMProperty&) const;
	virtual Boolean getIncludeBytesTranferredPerSec() const;
	virtual void setIncludeBytesTranferredPerSec(Boolean&);
	virtual Boolean getIncludeBytesWrittenPerSec(CIMProperty&) const;
	virtual Boolean getIncludeBytesWrittenPerSec() const;
	virtual void setIncludeBytesWrittenPerSec(Boolean&);
	virtual Boolean getIncludeFilesOpenedPerSec(CIMProperty&) const;
	virtual Boolean getIncludeFilesOpenedPerSec() const;
	virtual void setIncludeFilesOpenedPerSec(Boolean&);
	virtual Boolean getIncludeTotalOpenFileCount(CIMProperty&) const;
	virtual Boolean getIncludeTotalOpenFileCount() const;
	virtual void setIncludeTotalOpenFileCount(Boolean&);
	virtual Boolean getIncludeCurrentPendingRequests(CIMProperty&) const;
	virtual Boolean getIncludeCurrentPendingRequests() const;
	virtual void setIncludeCurrentPendingRequests(Boolean&);
	virtual Boolean getIncludeReadRequestsProcessedPerSec(CIMProperty&) const;
	virtual Boolean getIncludeReadRequestsProcessedPerSec() const;
	virtual void setIncludeReadRequestsProcessedPerSec(Boolean&);
	virtual Boolean getIncludeTotalRequestsReceived(CIMProperty&) const;
	virtual Boolean getIncludeTotalRequestsReceived() const;
	virtual void setIncludeTotalRequestsReceived(Boolean&);
	virtual Boolean getIncludeRequestsReceivedPerSec(CIMProperty&) const;
	virtual Boolean getIncludeRequestsReceivedPerSec() const;
	virtual void setIncludeRequestsReceivedPerSec(Boolean&);
	virtual Boolean getIncludeTotalDurableHandleReopenCount(CIMProperty&) const;
	virtual Boolean getIncludeTotalDurableHandleReopenCount() const;
	virtual void setIncludeTotalDurableHandleReopenCount(Boolean&);
	virtual Boolean getIncludeTotalFailedDurableHandleReopenCount(CIMProperty&) const;
	virtual Boolean getIncludeTotalFailedDurableHandleReopenCount() const;
	virtual void setIncludeTotalFailedDurableHandleReopenCount(Boolean&);
	virtual Boolean getIncludeTotalFailedResilientHandleReopenCount(CIMProperty&) const;
	virtual Boolean getIncludeTotalFailedResilientHandleReopenCount() const;
	virtual void setIncludeTotalFailedResilientHandleReopenCount(Boolean&);
	virtual Boolean getIncludeCurrentOpenFileCount(CIMProperty&) const;
	virtual Boolean getIncludeCurrentOpenFileCount() const;
	virtual void setIncludeCurrentOpenFileCount(Boolean&);
	virtual Boolean getIncludeTotalResilientHandleReopenCount(CIMProperty&) const;
	virtual Boolean getIncludeTotalResilientHandleReopenCount() const;
	virtual void setIncludeTotalResilientHandleReopenCount(Boolean&);
	virtual Boolean getIncludeTotalPersistentHandleReopenCount(CIMProperty&) const;
	virtual Boolean getIncludeTotalPersistentHandleReopenCount() const;
	virtual void setIncludeTotalPersistentHandleReopenCount(Boolean&);
	virtual Boolean getIncludeTotalFailedPersistentHandleReopenCount(CIMProperty&) const;
	virtual Boolean getIncludeTotalFailedPersistentHandleReopenCount() const;
	virtual void setIncludeTotalFailedPersistentHandleReopenCount(Boolean&);
	virtual Boolean getIncludeTreeConnectCount(CIMProperty&) const;
	virtual Boolean getIncludeTreeConnectCount() const;
	virtual void setIncludeTreeConnectCount(Boolean&);
	virtual Boolean getIncludeWriteRequestsProcessedPerSec(CIMProperty&) const;
	virtual Boolean getIncludeWriteRequestsProcessedPerSec() const;
	virtual void setIncludeWriteRequestsProcessedPerSec(Boolean&);
	virtual Boolean getIncludeTotalMetadataRequestsReceived(CIMProperty&) const;
	virtual Boolean getIncludeTotalMetadataRequestsReceived() const;
	virtual void setIncludeTotalMetadataRequestsReceived(Boolean&);
	virtual Boolean getIncludeMetadataRequestsReceivedPerSec(CIMProperty&) const;
	virtual Boolean getIncludeMetadataRequestsReceivedPerSec() const;
	virtual void setIncludeMetadataRequestsReceivedPerSec(Boolean&);
	virtual Boolean getIncludeAverageTimePerDataRequest(CIMProperty&) const;
	virtual Boolean getIncludeAverageTimePerDataRequest() const;
	virtual void setIncludeAverageTimePerDataRequest(Boolean&);
	virtual Boolean getIncludeAverageBytesPerDataRequest(CIMProperty&) const;
	virtual Boolean getIncludeAverageBytesPerDataRequest() const;
	virtual void setIncludeAverageBytesPerDataRequest(Boolean&);
	virtual Boolean getIncludeAverageBytesPerReadRequest(CIMProperty&) const;
	virtual Boolean getIncludeAverageBytesPerReadRequest() const;
	virtual void setIncludeAverageBytesPerReadRequest(Boolean&);
	virtual Boolean getIncludeAverageBytesPerWriteRequest(CIMProperty&) const;
	virtual Boolean getIncludeAverageBytesPerWriteRequest() const;
	virtual void setIncludeAverageBytesPerWriteRequest(Boolean&);
	virtual Boolean getIncludeAverageReadQueueLength(CIMProperty&) const;
	virtual Boolean getIncludeAverageReadQueueLength() const;
	virtual void setIncludeAverageReadQueueLength(Boolean&);
	virtual Boolean getIncludeAverageWriteQueueLength(CIMProperty&) const;
	virtual Boolean getIncludeAverageWriteQueueLength() const;
	virtual void setIncludeAverageWriteQueueLength(Boolean&);
	virtual Boolean getIncludeAverageDataQueueLength(CIMProperty&) const;
	virtual Boolean getIncludeAverageDataQueueLength() const;
	virtual void setIncludeAverageDataQueueLength(Boolean&);
	virtual Boolean getIncludeDataBytesPerSec(CIMProperty&) const;
	virtual Boolean getIncludeDataBytesPerSec() const;
	virtual void setIncludeDataBytesPerSec(Boolean&);
	virtual Boolean getIncludeDataRequestsPerSec(CIMProperty&) const;
	virtual Boolean getIncludeDataRequestsPerSec() const;
	virtual void setIncludeDataRequestsPerSec(Boolean&);
	virtual Boolean getIncludeCurrentDataQueueLength(CIMProperty&) const;
	virtual Boolean getIncludeCurrentDataQueueLength() const;
	virtual void setIncludeCurrentDataQueueLength(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _elementType;
	String _otherElementTypeDescription;
	Boolean _includeStartStatisticTime;
	Boolean _includeStatisticTime;
	Boolean _includeTotalIOs;
	Boolean _includeTotalBytesTransferred;
	Boolean _includeReadIOs;
	Boolean _includeWriteIOs;
	Boolean _includeOtherIOs;
	Boolean _includeMetadataReadIOs;
	Boolean _includeMetadataWriteIOs;
	Boolean _includeTotalIOTimeCounter;
	Boolean _includeTotalIdleTimeCounter;
	Boolean _includeReadIOTimeCounter;
	Boolean _includeBytesRead;
	Boolean _includeWriteIOTimeCounter;
	Boolean _includeBytesWritten;
	Boolean _includeMetadataBytesRead;
	Boolean _includeMetadataBytesWritten;
	Boolean _includePercentDurableOpens;
	Boolean _includePercentResilientOpens;
	Boolean _includePercentPersistentOpens;
	Boolean _includeAverageReadResponseTime;
	Boolean _includeAverageWriteResponseTime;
	Boolean _includeAverageRequestResponseTime;
	Boolean _includeBytesReadPerSec;
	Boolean _includeTotalBytesReceived;
	Boolean _includeBytesReceivedPerSec;
	Boolean _includeTotalBytesSent;
	Boolean _includeBytesSentPerSec;
	Boolean _includeBytesTranferredPerSec;
	Boolean _includeBytesWrittenPerSec;
	Boolean _includeFilesOpenedPerSec;
	Boolean _includeTotalOpenFileCount;
	Boolean _includeCurrentPendingRequests;
	Boolean _includeReadRequestsProcessedPerSec;
	Boolean _includeTotalRequestsReceived;
	Boolean _includeRequestsReceivedPerSec;
	Boolean _includeTotalDurableHandleReopenCount;
	Boolean _includeTotalFailedDurableHandleReopenCount;
	Boolean _includeTotalFailedResilientHandleReopenCount;
	Boolean _includeCurrentOpenFileCount;
	Boolean _includeTotalResilientHandleReopenCount;
	Boolean _includeTotalPersistentHandleReopenCount;
	Boolean _includeTotalFailedPersistentHandleReopenCount;
	Boolean _includeTreeConnectCount;
	Boolean _includeWriteRequestsProcessedPerSec;
	Boolean _includeTotalMetadataRequestsReceived;
	Boolean _includeMetadataRequestsReceivedPerSec;
	Boolean _includeAverageTimePerDataRequest;
	Boolean _includeAverageBytesPerDataRequest;
	Boolean _includeAverageBytesPerReadRequest;
	Boolean _includeAverageBytesPerWriteRequest;
	Boolean _includeAverageReadQueueLength;
	Boolean _includeAverageWriteQueueLength;
	Boolean _includeAverageDataQueueLength;
	Boolean _includeDataBytesPerSec;
	Boolean _includeDataRequestsPerSec;
	Boolean _includeCurrentDataQueueLength;

#	include "UNIX_FileSystemStatisticsManifestPrivate.h"


};

#endif /* UNIX_FILESYSTEMSTATISTICSMANIFEST */
