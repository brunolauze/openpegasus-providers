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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_FileSystemStatisticsManifest::UNIX_FileSystemStatisticsManifest(void)
{
}

UNIX_FileSystemStatisticsManifest::~UNIX_FileSystemStatisticsManifest(void)
{
}

Boolean UNIX_FileSystemStatisticsManifest::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSystemStatisticsManifest::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileSystemStatisticsManifest::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSystemStatisticsManifest::getCaption() const
{
	return _caption;
}

void UNIX_FileSystemStatisticsManifest::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSystemStatisticsManifest::getDescription() const
{
	return _description;
}

void UNIX_FileSystemStatisticsManifest::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSystemStatisticsManifest::getElementName() const
{
	return _elementName;
}

void UNIX_FileSystemStatisticsManifest::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileSystemStatisticsManifest::getGeneration() const
{
	return _generation;
}

void UNIX_FileSystemStatisticsManifest::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_FileSystemStatisticsManifest::getElementType() const
{
	return _elementType;
}

void UNIX_FileSystemStatisticsManifest::setElementType(Uint16 &value)
{
	_elementType = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getOtherElementTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ELEMENT_TYPE_DESCRIPTION, getOtherElementTypeDescription());
	return true;
}

String UNIX_FileSystemStatisticsManifest::getOtherElementTypeDescription() const
{
	return _otherElementTypeDescription;
}

void UNIX_FileSystemStatisticsManifest::setOtherElementTypeDescription(String &value)
{
	_otherElementTypeDescription = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_START_STATISTIC_TIME, getIncludeStartStatisticTime());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeStartStatisticTime() const
{
	return _includeStartStatisticTime;
}

void UNIX_FileSystemStatisticsManifest::setIncludeStartStatisticTime(Boolean &value)
{
	_includeStartStatisticTime = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_STATISTIC_TIME, getIncludeStatisticTime());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeStatisticTime() const
{
	return _includeStatisticTime;
}

void UNIX_FileSystemStatisticsManifest::setIncludeStatisticTime(Boolean &value)
{
	_includeStatisticTime = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_IOS, getIncludeTotalIOs());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalIOs() const
{
	return _includeTotalIOs;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalIOs(Boolean &value)
{
	_includeTotalIOs = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalBytesTransferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_BYTES_TRANSFERRED, getIncludeTotalBytesTransferred());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalBytesTransferred() const
{
	return _includeTotalBytesTransferred;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalBytesTransferred(Boolean &value)
{
	_includeTotalBytesTransferred = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeReadIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_IOS, getIncludeReadIOs());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeReadIOs() const
{
	return _includeReadIOs;
}

void UNIX_FileSystemStatisticsManifest::setIncludeReadIOs(Boolean &value)
{
	_includeReadIOs = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeWriteIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_IOS, getIncludeWriteIOs());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeWriteIOs() const
{
	return _includeWriteIOs;
}

void UNIX_FileSystemStatisticsManifest::setIncludeWriteIOs(Boolean &value)
{
	_includeWriteIOs = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeOtherIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_OTHER_IOS, getIncludeOtherIOs());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeOtherIOs() const
{
	return _includeOtherIOs;
}

void UNIX_FileSystemStatisticsManifest::setIncludeOtherIOs(Boolean &value)
{
	_includeOtherIOs = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataReadIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_METADATA_READ_IOS, getIncludeMetadataReadIOs());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataReadIOs() const
{
	return _includeMetadataReadIOs;
}

void UNIX_FileSystemStatisticsManifest::setIncludeMetadataReadIOs(Boolean &value)
{
	_includeMetadataReadIOs = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataWriteIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_METADATA_WRITE_IOS, getIncludeMetadataWriteIOs());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataWriteIOs() const
{
	return _includeMetadataWriteIOs;
}

void UNIX_FileSystemStatisticsManifest::setIncludeMetadataWriteIOs(Boolean &value)
{
	_includeMetadataWriteIOs = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_IO_TIME_COUNTER, getIncludeTotalIOTimeCounter());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalIOTimeCounter() const
{
	return _includeTotalIOTimeCounter;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalIOTimeCounter(Boolean &value)
{
	_includeTotalIOTimeCounter = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalIdleTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_IDLE_TIME_COUNTER, getIncludeTotalIdleTimeCounter());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalIdleTimeCounter() const
{
	return _includeTotalIdleTimeCounter;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalIdleTimeCounter(Boolean &value)
{
	_includeTotalIdleTimeCounter = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeReadIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_IO_TIME_COUNTER, getIncludeReadIOTimeCounter());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeReadIOTimeCounter() const
{
	return _includeReadIOTimeCounter;
}

void UNIX_FileSystemStatisticsManifest::setIncludeReadIOTimeCounter(Boolean &value)
{
	_includeReadIOTimeCounter = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesRead(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_BYTES_READ, getIncludeBytesRead());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesRead() const
{
	return _includeBytesRead;
}

void UNIX_FileSystemStatisticsManifest::setIncludeBytesRead(Boolean &value)
{
	_includeBytesRead = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeWriteIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_IO_TIME_COUNTER, getIncludeWriteIOTimeCounter());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeWriteIOTimeCounter() const
{
	return _includeWriteIOTimeCounter;
}

void UNIX_FileSystemStatisticsManifest::setIncludeWriteIOTimeCounter(Boolean &value)
{
	_includeWriteIOTimeCounter = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesWritten(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_BYTES_WRITTEN, getIncludeBytesWritten());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesWritten() const
{
	return _includeBytesWritten;
}

void UNIX_FileSystemStatisticsManifest::setIncludeBytesWritten(Boolean &value)
{
	_includeBytesWritten = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataBytesRead(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_METADATA_BYTES_READ, getIncludeMetadataBytesRead());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataBytesRead() const
{
	return _includeMetadataBytesRead;
}

void UNIX_FileSystemStatisticsManifest::setIncludeMetadataBytesRead(Boolean &value)
{
	_includeMetadataBytesRead = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataBytesWritten(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_METADATA_BYTES_WRITTEN, getIncludeMetadataBytesWritten());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataBytesWritten() const
{
	return _includeMetadataBytesWritten;
}

void UNIX_FileSystemStatisticsManifest::setIncludeMetadataBytesWritten(Boolean &value)
{
	_includeMetadataBytesWritten = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludePercentDurableOpens(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_PERCENT_DURABLE_OPENS, getIncludePercentDurableOpens());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludePercentDurableOpens() const
{
	return _includePercentDurableOpens;
}

void UNIX_FileSystemStatisticsManifest::setIncludePercentDurableOpens(Boolean &value)
{
	_includePercentDurableOpens = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludePercentResilientOpens(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_PERCENT_RESILIENT_OPENS, getIncludePercentResilientOpens());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludePercentResilientOpens() const
{
	return _includePercentResilientOpens;
}

void UNIX_FileSystemStatisticsManifest::setIncludePercentResilientOpens(Boolean &value)
{
	_includePercentResilientOpens = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludePercentPersistentOpens(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_PERCENT_PERSISTENT_OPENS, getIncludePercentPersistentOpens());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludePercentPersistentOpens() const
{
	return _includePercentPersistentOpens;
}

void UNIX_FileSystemStatisticsManifest::setIncludePercentPersistentOpens(Boolean &value)
{
	_includePercentPersistentOpens = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageReadResponseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_READ_RESPONSE_TIME, getIncludeAverageReadResponseTime());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageReadResponseTime() const
{
	return _includeAverageReadResponseTime;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageReadResponseTime(Boolean &value)
{
	_includeAverageReadResponseTime = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageWriteResponseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_WRITE_RESPONSE_TIME, getIncludeAverageWriteResponseTime());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageWriteResponseTime() const
{
	return _includeAverageWriteResponseTime;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageWriteResponseTime(Boolean &value)
{
	_includeAverageWriteResponseTime = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageRequestResponseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_REQUEST_RESPONSE_TIME, getIncludeAverageRequestResponseTime());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageRequestResponseTime() const
{
	return _includeAverageRequestResponseTime;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageRequestResponseTime(Boolean &value)
{
	_includeAverageRequestResponseTime = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesReadPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_BYTES_READ_PER_SEC, getIncludeBytesReadPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesReadPerSec() const
{
	return _includeBytesReadPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeBytesReadPerSec(Boolean &value)
{
	_includeBytesReadPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_BYTES_RECEIVED, getIncludeTotalBytesReceived());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalBytesReceived() const
{
	return _includeTotalBytesReceived;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalBytesReceived(Boolean &value)
{
	_includeTotalBytesReceived = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesReceivedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_BYTES_RECEIVED_PER_SEC, getIncludeBytesReceivedPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesReceivedPerSec() const
{
	return _includeBytesReceivedPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeBytesReceivedPerSec(Boolean &value)
{
	_includeBytesReceivedPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalBytesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_BYTES_SENT, getIncludeTotalBytesSent());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalBytesSent() const
{
	return _includeTotalBytesSent;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalBytesSent(Boolean &value)
{
	_includeTotalBytesSent = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesSentPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_BYTES_SENT_PER_SEC, getIncludeBytesSentPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesSentPerSec() const
{
	return _includeBytesSentPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeBytesSentPerSec(Boolean &value)
{
	_includeBytesSentPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesTranferredPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_BYTES_TRANFERRED_PER_SEC, getIncludeBytesTranferredPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesTranferredPerSec() const
{
	return _includeBytesTranferredPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeBytesTranferredPerSec(Boolean &value)
{
	_includeBytesTranferredPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesWrittenPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_BYTES_WRITTEN_PER_SEC, getIncludeBytesWrittenPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeBytesWrittenPerSec() const
{
	return _includeBytesWrittenPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeBytesWrittenPerSec(Boolean &value)
{
	_includeBytesWrittenPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeFilesOpenedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_FILES_OPENED_PER_SEC, getIncludeFilesOpenedPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeFilesOpenedPerSec() const
{
	return _includeFilesOpenedPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeFilesOpenedPerSec(Boolean &value)
{
	_includeFilesOpenedPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalOpenFileCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_OPEN_FILE_COUNT, getIncludeTotalOpenFileCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalOpenFileCount() const
{
	return _includeTotalOpenFileCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalOpenFileCount(Boolean &value)
{
	_includeTotalOpenFileCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeCurrentPendingRequests(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_CURRENT_PENDING_REQUESTS, getIncludeCurrentPendingRequests());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeCurrentPendingRequests() const
{
	return _includeCurrentPendingRequests;
}

void UNIX_FileSystemStatisticsManifest::setIncludeCurrentPendingRequests(Boolean &value)
{
	_includeCurrentPendingRequests = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeReadRequestsProcessedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_REQUESTS_PROCESSED_PER_SEC, getIncludeReadRequestsProcessedPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeReadRequestsProcessedPerSec() const
{
	return _includeReadRequestsProcessedPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeReadRequestsProcessedPerSec(Boolean &value)
{
	_includeReadRequestsProcessedPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalRequestsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_REQUESTS_RECEIVED, getIncludeTotalRequestsReceived());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalRequestsReceived() const
{
	return _includeTotalRequestsReceived;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalRequestsReceived(Boolean &value)
{
	_includeTotalRequestsReceived = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeRequestsReceivedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_REQUESTS_RECEIVED_PER_SEC, getIncludeRequestsReceivedPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeRequestsReceivedPerSec() const
{
	return _includeRequestsReceivedPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeRequestsReceivedPerSec(Boolean &value)
{
	_includeRequestsReceivedPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalDurableHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_DURABLE_HANDLE_REOPEN_COUNT, getIncludeTotalDurableHandleReopenCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalDurableHandleReopenCount() const
{
	return _includeTotalDurableHandleReopenCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalDurableHandleReopenCount(Boolean &value)
{
	_includeTotalDurableHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalFailedDurableHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_FAILED_DURABLE_HANDLE_REOPEN_COUNT, getIncludeTotalFailedDurableHandleReopenCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalFailedDurableHandleReopenCount() const
{
	return _includeTotalFailedDurableHandleReopenCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalFailedDurableHandleReopenCount(Boolean &value)
{
	_includeTotalFailedDurableHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalFailedResilientHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_FAILED_RESILIENT_HANDLE_REOPEN_COUNT, getIncludeTotalFailedResilientHandleReopenCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalFailedResilientHandleReopenCount() const
{
	return _includeTotalFailedResilientHandleReopenCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalFailedResilientHandleReopenCount(Boolean &value)
{
	_includeTotalFailedResilientHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeCurrentOpenFileCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_CURRENT_OPEN_FILE_COUNT, getIncludeCurrentOpenFileCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeCurrentOpenFileCount() const
{
	return _includeCurrentOpenFileCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeCurrentOpenFileCount(Boolean &value)
{
	_includeCurrentOpenFileCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalResilientHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_RESILIENT_HANDLE_REOPEN_COUNT, getIncludeTotalResilientHandleReopenCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalResilientHandleReopenCount() const
{
	return _includeTotalResilientHandleReopenCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalResilientHandleReopenCount(Boolean &value)
{
	_includeTotalResilientHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalPersistentHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_PERSISTENT_HANDLE_REOPEN_COUNT, getIncludeTotalPersistentHandleReopenCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalPersistentHandleReopenCount() const
{
	return _includeTotalPersistentHandleReopenCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalPersistentHandleReopenCount(Boolean &value)
{
	_includeTotalPersistentHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalFailedPersistentHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_FAILED_PERSISTENT_HANDLE_REOPEN_COUNT, getIncludeTotalFailedPersistentHandleReopenCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalFailedPersistentHandleReopenCount() const
{
	return _includeTotalFailedPersistentHandleReopenCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalFailedPersistentHandleReopenCount(Boolean &value)
{
	_includeTotalFailedPersistentHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTreeConnectCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TREE_CONNECT_COUNT, getIncludeTreeConnectCount());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTreeConnectCount() const
{
	return _includeTreeConnectCount;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTreeConnectCount(Boolean &value)
{
	_includeTreeConnectCount = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeWriteRequestsProcessedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_REQUESTS_PROCESSED_PER_SEC, getIncludeWriteRequestsProcessedPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeWriteRequestsProcessedPerSec() const
{
	return _includeWriteRequestsProcessedPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeWriteRequestsProcessedPerSec(Boolean &value)
{
	_includeWriteRequestsProcessedPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalMetadataRequestsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_METADATA_REQUESTS_RECEIVED, getIncludeTotalMetadataRequestsReceived());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeTotalMetadataRequestsReceived() const
{
	return _includeTotalMetadataRequestsReceived;
}

void UNIX_FileSystemStatisticsManifest::setIncludeTotalMetadataRequestsReceived(Boolean &value)
{
	_includeTotalMetadataRequestsReceived = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataRequestsReceivedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_METADATA_REQUESTS_RECEIVED_PER_SEC, getIncludeMetadataRequestsReceivedPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeMetadataRequestsReceivedPerSec() const
{
	return _includeMetadataRequestsReceivedPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeMetadataRequestsReceivedPerSec(Boolean &value)
{
	_includeMetadataRequestsReceivedPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageTimePerDataRequest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_TIME_PER_DATA_REQUEST, getIncludeAverageTimePerDataRequest());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageTimePerDataRequest() const
{
	return _includeAverageTimePerDataRequest;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageTimePerDataRequest(Boolean &value)
{
	_includeAverageTimePerDataRequest = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageBytesPerDataRequest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_BYTES_PER_DATA_REQUEST, getIncludeAverageBytesPerDataRequest());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageBytesPerDataRequest() const
{
	return _includeAverageBytesPerDataRequest;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageBytesPerDataRequest(Boolean &value)
{
	_includeAverageBytesPerDataRequest = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageBytesPerReadRequest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_BYTES_PER_READ_REQUEST, getIncludeAverageBytesPerReadRequest());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageBytesPerReadRequest() const
{
	return _includeAverageBytesPerReadRequest;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageBytesPerReadRequest(Boolean &value)
{
	_includeAverageBytesPerReadRequest = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageBytesPerWriteRequest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_BYTES_PER_WRITE_REQUEST, getIncludeAverageBytesPerWriteRequest());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageBytesPerWriteRequest() const
{
	return _includeAverageBytesPerWriteRequest;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageBytesPerWriteRequest(Boolean &value)
{
	_includeAverageBytesPerWriteRequest = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageReadQueueLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_READ_QUEUE_LENGTH, getIncludeAverageReadQueueLength());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageReadQueueLength() const
{
	return _includeAverageReadQueueLength;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageReadQueueLength(Boolean &value)
{
	_includeAverageReadQueueLength = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageWriteQueueLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_WRITE_QUEUE_LENGTH, getIncludeAverageWriteQueueLength());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageWriteQueueLength() const
{
	return _includeAverageWriteQueueLength;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageWriteQueueLength(Boolean &value)
{
	_includeAverageWriteQueueLength = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageDataQueueLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_AVERAGE_DATA_QUEUE_LENGTH, getIncludeAverageDataQueueLength());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeAverageDataQueueLength() const
{
	return _includeAverageDataQueueLength;
}

void UNIX_FileSystemStatisticsManifest::setIncludeAverageDataQueueLength(Boolean &value)
{
	_includeAverageDataQueueLength = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeDataBytesPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_DATA_BYTES_PER_SEC, getIncludeDataBytesPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeDataBytesPerSec() const
{
	return _includeDataBytesPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeDataBytesPerSec(Boolean &value)
{
	_includeDataBytesPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeDataRequestsPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_DATA_REQUESTS_PER_SEC, getIncludeDataRequestsPerSec());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeDataRequestsPerSec() const
{
	return _includeDataRequestsPerSec;
}

void UNIX_FileSystemStatisticsManifest::setIncludeDataRequestsPerSec(Boolean &value)
{
	_includeDataRequestsPerSec = value;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeCurrentDataQueueLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_CURRENT_DATA_QUEUE_LENGTH, getIncludeCurrentDataQueueLength());
	return true;
}

Boolean UNIX_FileSystemStatisticsManifest::getIncludeCurrentDataQueueLength() const
{
	return _includeCurrentDataQueueLength;
}

void UNIX_FileSystemStatisticsManifest::setIncludeCurrentDataQueueLength(Boolean &value)
{
	_includeCurrentDataQueueLength = value;
}


void UNIX_FileSystemStatisticsManifest::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemStatisticsManifest");
	_generation = Uint64(0);
	_elementType = Uint16(0);
	_otherElementTypeDescription = String ("");
	_includeStartStatisticTime = Boolean(false);
	_includeStatisticTime = Boolean(false);
	_includeTotalIOs = Boolean(false);
	_includeTotalBytesTransferred = Boolean(false);
	_includeReadIOs = Boolean(false);
	_includeWriteIOs = Boolean(false);
	_includeOtherIOs = Boolean(false);
	_includeMetadataReadIOs = Boolean(false);
	_includeMetadataWriteIOs = Boolean(false);
	_includeTotalIOTimeCounter = Boolean(false);
	_includeTotalIdleTimeCounter = Boolean(false);
	_includeReadIOTimeCounter = Boolean(false);
	_includeBytesRead = Boolean(false);
	_includeWriteIOTimeCounter = Boolean(false);
	_includeBytesWritten = Boolean(false);
	_includeMetadataBytesRead = Boolean(false);
	_includeMetadataBytesWritten = Boolean(false);
	_includePercentDurableOpens = Boolean(false);
	_includePercentResilientOpens = Boolean(false);
	_includePercentPersistentOpens = Boolean(false);
	_includeAverageReadResponseTime = Boolean(false);
	_includeAverageWriteResponseTime = Boolean(false);
	_includeAverageRequestResponseTime = Boolean(false);
	_includeBytesReadPerSec = Boolean(false);
	_includeTotalBytesReceived = Boolean(false);
	_includeBytesReceivedPerSec = Boolean(false);
	_includeTotalBytesSent = Boolean(false);
	_includeBytesSentPerSec = Boolean(false);
	_includeBytesTranferredPerSec = Boolean(false);
	_includeBytesWrittenPerSec = Boolean(false);
	_includeFilesOpenedPerSec = Boolean(false);
	_includeTotalOpenFileCount = Boolean(false);
	_includeCurrentPendingRequests = Boolean(false);
	_includeReadRequestsProcessedPerSec = Boolean(false);
	_includeTotalRequestsReceived = Boolean(false);
	_includeRequestsReceivedPerSec = Boolean(false);
	_includeTotalDurableHandleReopenCount = Boolean(false);
	_includeTotalFailedDurableHandleReopenCount = Boolean(false);
	_includeTotalFailedResilientHandleReopenCount = Boolean(false);
	_includeCurrentOpenFileCount = Boolean(false);
	_includeTotalResilientHandleReopenCount = Boolean(false);
	_includeTotalPersistentHandleReopenCount = Boolean(false);
	_includeTotalFailedPersistentHandleReopenCount = Boolean(false);
	_includeTreeConnectCount = Boolean(false);
	_includeWriteRequestsProcessedPerSec = Boolean(false);
	_includeTotalMetadataRequestsReceived = Boolean(false);
	_includeMetadataRequestsReceivedPerSec = Boolean(false);
	_includeAverageTimePerDataRequest = Boolean(false);
	_includeAverageBytesPerDataRequest = Boolean(false);
	_includeAverageBytesPerReadRequest = Boolean(false);
	_includeAverageBytesPerWriteRequest = Boolean(false);
	_includeAverageReadQueueLength = Boolean(false);
	_includeAverageWriteQueueLength = Boolean(false);
	_includeAverageDataQueueLength = Boolean(false);
	_includeDataBytesPerSec = Boolean(false);
	_includeDataRequestsPerSec = Boolean(false);
	_includeCurrentDataQueueLength = Boolean(false);

}

Boolean UNIX_FileSystemStatisticsManifest::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "ElementType"))
			{
				Uint16 elementTypeValue;
				property.getValue().get(elementTypeValue);
				setElementType(elementTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherElementTypeDescription"))
			{
				String otherElementTypeDescriptionValue;
				property.getValue().get(otherElementTypeDescriptionValue);
				setOtherElementTypeDescription(otherElementTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeStartStatisticTime"))
			{
				Boolean includeStartStatisticTimeValue;
				property.getValue().get(includeStartStatisticTimeValue);
				setIncludeStartStatisticTime(includeStartStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeStatisticTime"))
			{
				Boolean includeStatisticTimeValue;
				property.getValue().get(includeStatisticTimeValue);
				setIncludeStatisticTime(includeStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalIOs"))
			{
				Boolean includeTotalIOsValue;
				property.getValue().get(includeTotalIOsValue);
				setIncludeTotalIOs(includeTotalIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalBytesTransferred"))
			{
				Boolean includeTotalBytesTransferredValue;
				property.getValue().get(includeTotalBytesTransferredValue);
				setIncludeTotalBytesTransferred(includeTotalBytesTransferredValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadIOs"))
			{
				Boolean includeReadIOsValue;
				property.getValue().get(includeReadIOsValue);
				setIncludeReadIOs(includeReadIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteIOs"))
			{
				Boolean includeWriteIOsValue;
				property.getValue().get(includeWriteIOsValue);
				setIncludeWriteIOs(includeWriteIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeOtherIOs"))
			{
				Boolean includeOtherIOsValue;
				property.getValue().get(includeOtherIOsValue);
				setIncludeOtherIOs(includeOtherIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeMetadataReadIOs"))
			{
				Boolean includeMetadataReadIOsValue;
				property.getValue().get(includeMetadataReadIOsValue);
				setIncludeMetadataReadIOs(includeMetadataReadIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeMetadataWriteIOs"))
			{
				Boolean includeMetadataWriteIOsValue;
				property.getValue().get(includeMetadataWriteIOsValue);
				setIncludeMetadataWriteIOs(includeMetadataWriteIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalIOTimeCounter"))
			{
				Boolean includeTotalIOTimeCounterValue;
				property.getValue().get(includeTotalIOTimeCounterValue);
				setIncludeTotalIOTimeCounter(includeTotalIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalIdleTimeCounter"))
			{
				Boolean includeTotalIdleTimeCounterValue;
				property.getValue().get(includeTotalIdleTimeCounterValue);
				setIncludeTotalIdleTimeCounter(includeTotalIdleTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadIOTimeCounter"))
			{
				Boolean includeReadIOTimeCounterValue;
				property.getValue().get(includeReadIOTimeCounterValue);
				setIncludeReadIOTimeCounter(includeReadIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeBytesRead"))
			{
				Boolean includeBytesReadValue;
				property.getValue().get(includeBytesReadValue);
				setIncludeBytesRead(includeBytesReadValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteIOTimeCounter"))
			{
				Boolean includeWriteIOTimeCounterValue;
				property.getValue().get(includeWriteIOTimeCounterValue);
				setIncludeWriteIOTimeCounter(includeWriteIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeBytesWritten"))
			{
				Boolean includeBytesWrittenValue;
				property.getValue().get(includeBytesWrittenValue);
				setIncludeBytesWritten(includeBytesWrittenValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeMetadataBytesRead"))
			{
				Boolean includeMetadataBytesReadValue;
				property.getValue().get(includeMetadataBytesReadValue);
				setIncludeMetadataBytesRead(includeMetadataBytesReadValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeMetadataBytesWritten"))
			{
				Boolean includeMetadataBytesWrittenValue;
				property.getValue().get(includeMetadataBytesWrittenValue);
				setIncludeMetadataBytesWritten(includeMetadataBytesWrittenValue);
			}
			else if (String::equal(property.getName().getString(), "IncludePercentDurableOpens"))
			{
				Boolean includePercentDurableOpensValue;
				property.getValue().get(includePercentDurableOpensValue);
				setIncludePercentDurableOpens(includePercentDurableOpensValue);
			}
			else if (String::equal(property.getName().getString(), "IncludePercentResilientOpens"))
			{
				Boolean includePercentResilientOpensValue;
				property.getValue().get(includePercentResilientOpensValue);
				setIncludePercentResilientOpens(includePercentResilientOpensValue);
			}
			else if (String::equal(property.getName().getString(), "IncludePercentPersistentOpens"))
			{
				Boolean includePercentPersistentOpensValue;
				property.getValue().get(includePercentPersistentOpensValue);
				setIncludePercentPersistentOpens(includePercentPersistentOpensValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageReadResponseTime"))
			{
				Boolean includeAverageReadResponseTimeValue;
				property.getValue().get(includeAverageReadResponseTimeValue);
				setIncludeAverageReadResponseTime(includeAverageReadResponseTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageWriteResponseTime"))
			{
				Boolean includeAverageWriteResponseTimeValue;
				property.getValue().get(includeAverageWriteResponseTimeValue);
				setIncludeAverageWriteResponseTime(includeAverageWriteResponseTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageRequestResponseTime"))
			{
				Boolean includeAverageRequestResponseTimeValue;
				property.getValue().get(includeAverageRequestResponseTimeValue);
				setIncludeAverageRequestResponseTime(includeAverageRequestResponseTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeBytesReadPerSec"))
			{
				Boolean includeBytesReadPerSecValue;
				property.getValue().get(includeBytesReadPerSecValue);
				setIncludeBytesReadPerSec(includeBytesReadPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalBytesReceived"))
			{
				Boolean includeTotalBytesReceivedValue;
				property.getValue().get(includeTotalBytesReceivedValue);
				setIncludeTotalBytesReceived(includeTotalBytesReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeBytesReceivedPerSec"))
			{
				Boolean includeBytesReceivedPerSecValue;
				property.getValue().get(includeBytesReceivedPerSecValue);
				setIncludeBytesReceivedPerSec(includeBytesReceivedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalBytesSent"))
			{
				Boolean includeTotalBytesSentValue;
				property.getValue().get(includeTotalBytesSentValue);
				setIncludeTotalBytesSent(includeTotalBytesSentValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeBytesSentPerSec"))
			{
				Boolean includeBytesSentPerSecValue;
				property.getValue().get(includeBytesSentPerSecValue);
				setIncludeBytesSentPerSec(includeBytesSentPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeBytesTranferredPerSec"))
			{
				Boolean includeBytesTranferredPerSecValue;
				property.getValue().get(includeBytesTranferredPerSecValue);
				setIncludeBytesTranferredPerSec(includeBytesTranferredPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeBytesWrittenPerSec"))
			{
				Boolean includeBytesWrittenPerSecValue;
				property.getValue().get(includeBytesWrittenPerSecValue);
				setIncludeBytesWrittenPerSec(includeBytesWrittenPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeFilesOpenedPerSec"))
			{
				Boolean includeFilesOpenedPerSecValue;
				property.getValue().get(includeFilesOpenedPerSecValue);
				setIncludeFilesOpenedPerSec(includeFilesOpenedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalOpenFileCount"))
			{
				Boolean includeTotalOpenFileCountValue;
				property.getValue().get(includeTotalOpenFileCountValue);
				setIncludeTotalOpenFileCount(includeTotalOpenFileCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeCurrentPendingRequests"))
			{
				Boolean includeCurrentPendingRequestsValue;
				property.getValue().get(includeCurrentPendingRequestsValue);
				setIncludeCurrentPendingRequests(includeCurrentPendingRequestsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadRequestsProcessedPerSec"))
			{
				Boolean includeReadRequestsProcessedPerSecValue;
				property.getValue().get(includeReadRequestsProcessedPerSecValue);
				setIncludeReadRequestsProcessedPerSec(includeReadRequestsProcessedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalRequestsReceived"))
			{
				Boolean includeTotalRequestsReceivedValue;
				property.getValue().get(includeTotalRequestsReceivedValue);
				setIncludeTotalRequestsReceived(includeTotalRequestsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeRequestsReceivedPerSec"))
			{
				Boolean includeRequestsReceivedPerSecValue;
				property.getValue().get(includeRequestsReceivedPerSecValue);
				setIncludeRequestsReceivedPerSec(includeRequestsReceivedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalDurableHandleReopenCount"))
			{
				Boolean includeTotalDurableHandleReopenCountValue;
				property.getValue().get(includeTotalDurableHandleReopenCountValue);
				setIncludeTotalDurableHandleReopenCount(includeTotalDurableHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalFailedDurableHandleReopenCount"))
			{
				Boolean includeTotalFailedDurableHandleReopenCountValue;
				property.getValue().get(includeTotalFailedDurableHandleReopenCountValue);
				setIncludeTotalFailedDurableHandleReopenCount(includeTotalFailedDurableHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalFailedResilientHandleReopenCount"))
			{
				Boolean includeTotalFailedResilientHandleReopenCountValue;
				property.getValue().get(includeTotalFailedResilientHandleReopenCountValue);
				setIncludeTotalFailedResilientHandleReopenCount(includeTotalFailedResilientHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeCurrentOpenFileCount"))
			{
				Boolean includeCurrentOpenFileCountValue;
				property.getValue().get(includeCurrentOpenFileCountValue);
				setIncludeCurrentOpenFileCount(includeCurrentOpenFileCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalResilientHandleReopenCount"))
			{
				Boolean includeTotalResilientHandleReopenCountValue;
				property.getValue().get(includeTotalResilientHandleReopenCountValue);
				setIncludeTotalResilientHandleReopenCount(includeTotalResilientHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalPersistentHandleReopenCount"))
			{
				Boolean includeTotalPersistentHandleReopenCountValue;
				property.getValue().get(includeTotalPersistentHandleReopenCountValue);
				setIncludeTotalPersistentHandleReopenCount(includeTotalPersistentHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalFailedPersistentHandleReopenCount"))
			{
				Boolean includeTotalFailedPersistentHandleReopenCountValue;
				property.getValue().get(includeTotalFailedPersistentHandleReopenCountValue);
				setIncludeTotalFailedPersistentHandleReopenCount(includeTotalFailedPersistentHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTreeConnectCount"))
			{
				Boolean includeTreeConnectCountValue;
				property.getValue().get(includeTreeConnectCountValue);
				setIncludeTreeConnectCount(includeTreeConnectCountValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteRequestsProcessedPerSec"))
			{
				Boolean includeWriteRequestsProcessedPerSecValue;
				property.getValue().get(includeWriteRequestsProcessedPerSecValue);
				setIncludeWriteRequestsProcessedPerSec(includeWriteRequestsProcessedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalMetadataRequestsReceived"))
			{
				Boolean includeTotalMetadataRequestsReceivedValue;
				property.getValue().get(includeTotalMetadataRequestsReceivedValue);
				setIncludeTotalMetadataRequestsReceived(includeTotalMetadataRequestsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeMetadataRequestsReceivedPerSec"))
			{
				Boolean includeMetadataRequestsReceivedPerSecValue;
				property.getValue().get(includeMetadataRequestsReceivedPerSecValue);
				setIncludeMetadataRequestsReceivedPerSec(includeMetadataRequestsReceivedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageTimePerDataRequest"))
			{
				Boolean includeAverageTimePerDataRequestValue;
				property.getValue().get(includeAverageTimePerDataRequestValue);
				setIncludeAverageTimePerDataRequest(includeAverageTimePerDataRequestValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageBytesPerDataRequest"))
			{
				Boolean includeAverageBytesPerDataRequestValue;
				property.getValue().get(includeAverageBytesPerDataRequestValue);
				setIncludeAverageBytesPerDataRequest(includeAverageBytesPerDataRequestValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageBytesPerReadRequest"))
			{
				Boolean includeAverageBytesPerReadRequestValue;
				property.getValue().get(includeAverageBytesPerReadRequestValue);
				setIncludeAverageBytesPerReadRequest(includeAverageBytesPerReadRequestValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageBytesPerWriteRequest"))
			{
				Boolean includeAverageBytesPerWriteRequestValue;
				property.getValue().get(includeAverageBytesPerWriteRequestValue);
				setIncludeAverageBytesPerWriteRequest(includeAverageBytesPerWriteRequestValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageReadQueueLength"))
			{
				Boolean includeAverageReadQueueLengthValue;
				property.getValue().get(includeAverageReadQueueLengthValue);
				setIncludeAverageReadQueueLength(includeAverageReadQueueLengthValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageWriteQueueLength"))
			{
				Boolean includeAverageWriteQueueLengthValue;
				property.getValue().get(includeAverageWriteQueueLengthValue);
				setIncludeAverageWriteQueueLength(includeAverageWriteQueueLengthValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAverageDataQueueLength"))
			{
				Boolean includeAverageDataQueueLengthValue;
				property.getValue().get(includeAverageDataQueueLengthValue);
				setIncludeAverageDataQueueLength(includeAverageDataQueueLengthValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeDataBytesPerSec"))
			{
				Boolean includeDataBytesPerSecValue;
				property.getValue().get(includeDataBytesPerSecValue);
				setIncludeDataBytesPerSec(includeDataBytesPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeDataRequestsPerSec"))
			{
				Boolean includeDataRequestsPerSecValue;
				property.getValue().get(includeDataRequestsPerSecValue);
				setIncludeDataRequestsPerSec(includeDataRequestsPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeCurrentDataQueueLength"))
			{
				Boolean includeCurrentDataQueueLengthValue;
				property.getValue().get(includeCurrentDataQueueLengthValue);
				setIncludeCurrentDataQueueLength(includeCurrentDataQueueLengthValue);
			}
	}
	return true;
}


Boolean UNIX_FileSystemStatisticsManifest::initialize()
{
	return false;
}

Boolean UNIX_FileSystemStatisticsManifest::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemStatisticsManifest");
	_generation = Uint64(0);
	_elementType = Uint16(0);
	_otherElementTypeDescription = String ("");
	_includeStartStatisticTime = Boolean(false);
	_includeStatisticTime = Boolean(false);
	_includeTotalIOs = Boolean(false);
	_includeTotalBytesTransferred = Boolean(false);
	_includeReadIOs = Boolean(false);
	_includeWriteIOs = Boolean(false);
	_includeOtherIOs = Boolean(false);
	_includeMetadataReadIOs = Boolean(false);
	_includeMetadataWriteIOs = Boolean(false);
	_includeTotalIOTimeCounter = Boolean(false);
	_includeTotalIdleTimeCounter = Boolean(false);
	_includeReadIOTimeCounter = Boolean(false);
	_includeBytesRead = Boolean(false);
	_includeWriteIOTimeCounter = Boolean(false);
	_includeBytesWritten = Boolean(false);
	_includeMetadataBytesRead = Boolean(false);
	_includeMetadataBytesWritten = Boolean(false);
	_includePercentDurableOpens = Boolean(false);
	_includePercentResilientOpens = Boolean(false);
	_includePercentPersistentOpens = Boolean(false);
	_includeAverageReadResponseTime = Boolean(false);
	_includeAverageWriteResponseTime = Boolean(false);
	_includeAverageRequestResponseTime = Boolean(false);
	_includeBytesReadPerSec = Boolean(false);
	_includeTotalBytesReceived = Boolean(false);
	_includeBytesReceivedPerSec = Boolean(false);
	_includeTotalBytesSent = Boolean(false);
	_includeBytesSentPerSec = Boolean(false);
	_includeBytesTranferredPerSec = Boolean(false);
	_includeBytesWrittenPerSec = Boolean(false);
	_includeFilesOpenedPerSec = Boolean(false);
	_includeTotalOpenFileCount = Boolean(false);
	_includeCurrentPendingRequests = Boolean(false);
	_includeReadRequestsProcessedPerSec = Boolean(false);
	_includeTotalRequestsReceived = Boolean(false);
	_includeRequestsReceivedPerSec = Boolean(false);
	_includeTotalDurableHandleReopenCount = Boolean(false);
	_includeTotalFailedDurableHandleReopenCount = Boolean(false);
	_includeTotalFailedResilientHandleReopenCount = Boolean(false);
	_includeCurrentOpenFileCount = Boolean(false);
	_includeTotalResilientHandleReopenCount = Boolean(false);
	_includeTotalPersistentHandleReopenCount = Boolean(false);
	_includeTotalFailedPersistentHandleReopenCount = Boolean(false);
	_includeTreeConnectCount = Boolean(false);
	_includeWriteRequestsProcessedPerSec = Boolean(false);
	_includeTotalMetadataRequestsReceived = Boolean(false);
	_includeMetadataRequestsReceivedPerSec = Boolean(false);
	_includeAverageTimePerDataRequest = Boolean(false);
	_includeAverageBytesPerDataRequest = Boolean(false);
	_includeAverageBytesPerReadRequest = Boolean(false);
	_includeAverageBytesPerWriteRequest = Boolean(false);
	_includeAverageReadQueueLength = Boolean(false);
	_includeAverageWriteQueueLength = Boolean(false);
	_includeAverageDataQueueLength = Boolean(false);
	_includeDataBytesPerSec = Boolean(false);
	_includeDataRequestsPerSec = Boolean(false);
	_includeCurrentDataQueueLength = Boolean(false);
	
	return false;
}

Boolean UNIX_FileSystemStatisticsManifest::finalize()
{
	return false;
}


Boolean UNIX_FileSystemStatisticsManifest::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FileSystemStatisticsManifest::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemStatisticsManifest::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemStatisticsManifest::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemStatisticsManifest::validateInstance()
{
	return true;
}

