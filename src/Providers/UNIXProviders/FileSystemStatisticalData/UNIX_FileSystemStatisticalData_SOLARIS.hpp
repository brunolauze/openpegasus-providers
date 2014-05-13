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


UNIX_FileSystemStatisticalData::UNIX_FileSystemStatisticalData(void)
{
}

UNIX_FileSystemStatisticalData::~UNIX_FileSystemStatisticalData(void)
{
}

Boolean UNIX_FileSystemStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSystemStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileSystemStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileSystemStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSystemStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_FileSystemStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileSystemStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSystemStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_FileSystemStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileSystemStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSystemStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_FileSystemStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileSystemStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_FileSystemStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileSystemStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_FileSystemStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_FileSystemStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_FileSystemStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_FileSystemStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_FileSystemStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_FileSystemStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_FileSystemStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_FileSystemStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_FileSystemStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_FileSystemStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_FileSystemStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_FileSystemStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_FileSystemStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_FileSystemStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_FileSystemStatisticalData::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_FileSystemStatisticalData::getElementType() const
{
	return _elementType;
}

void UNIX_FileSystemStatisticalData::setElementType(Uint16 &value)
{
	_elementType = value;
}

Boolean UNIX_FileSystemStatisticalData::getOtherElementTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ELEMENT_TYPE_DESCRIPTION, getOtherElementTypeDescription());
	return true;
}

String UNIX_FileSystemStatisticalData::getOtherElementTypeDescription() const
{
	return _otherElementTypeDescription;
}

void UNIX_FileSystemStatisticalData::setOtherElementTypeDescription(String &value)
{
	_otherElementTypeDescription = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_IOS, getTotalIOs());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalIOs() const
{
	return _totalIOs;
}

void UNIX_FileSystemStatisticalData::setTotalIOs(Uint64 &value)
{
	_totalIOs = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalBytesTransferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_BYTES_TRANSFERRED, getTotalBytesTransferred());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalBytesTransferred() const
{
	return _totalBytesTransferred;
}

void UNIX_FileSystemStatisticalData::setTotalBytesTransferred(Uint64 &value)
{
	_totalBytesTransferred = value;
}

Boolean UNIX_FileSystemStatisticalData::getReadIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_IOS, getReadIOs());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getReadIOs() const
{
	return _readIOs;
}

void UNIX_FileSystemStatisticalData::setReadIOs(Uint64 &value)
{
	_readIOs = value;
}

Boolean UNIX_FileSystemStatisticalData::getWriteIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_IOS, getWriteIOs());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getWriteIOs() const
{
	return _writeIOs;
}

void UNIX_FileSystemStatisticalData::setWriteIOs(Uint64 &value)
{
	_writeIOs = value;
}

Boolean UNIX_FileSystemStatisticalData::getOtherIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IOS, getOtherIOs());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getOtherIOs() const
{
	return _otherIOs;
}

void UNIX_FileSystemStatisticalData::setOtherIOs(Uint64 &value)
{
	_otherIOs = value;
}

Boolean UNIX_FileSystemStatisticalData::getMetadataReadIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METADATA_READ_IOS, getMetadataReadIOs());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getMetadataReadIOs() const
{
	return _metadataReadIOs;
}

void UNIX_FileSystemStatisticalData::setMetadataReadIOs(Uint64 &value)
{
	_metadataReadIOs = value;
}

Boolean UNIX_FileSystemStatisticalData::getMetadataWriteIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METADATA_WRITE_IOS, getMetadataWriteIOs());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getMetadataWriteIOs() const
{
	return _metadataWriteIOs;
}

void UNIX_FileSystemStatisticalData::setMetadataWriteIOs(Uint64 &value)
{
	_metadataWriteIOs = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_IO_TIME_COUNTER, getTotalIOTimeCounter());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalIOTimeCounter() const
{
	return _totalIOTimeCounter;
}

void UNIX_FileSystemStatisticalData::setTotalIOTimeCounter(Uint64 &value)
{
	_totalIOTimeCounter = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalIdleTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_IDLE_TIME_COUNTER, getTotalIdleTimeCounter());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalIdleTimeCounter() const
{
	return _totalIdleTimeCounter;
}

void UNIX_FileSystemStatisticalData::setTotalIdleTimeCounter(Uint64 &value)
{
	_totalIdleTimeCounter = value;
}

Boolean UNIX_FileSystemStatisticalData::getReadIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_IO_TIME_COUNTER, getReadIOTimeCounter());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getReadIOTimeCounter() const
{
	return _readIOTimeCounter;
}

void UNIX_FileSystemStatisticalData::setReadIOTimeCounter(Uint64 &value)
{
	_readIOTimeCounter = value;
}

Boolean UNIX_FileSystemStatisticalData::getBytesRead(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_READ, getBytesRead());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getBytesRead() const
{
	return _bytesRead;
}

void UNIX_FileSystemStatisticalData::setBytesRead(Uint64 &value)
{
	_bytesRead = value;
}

Boolean UNIX_FileSystemStatisticalData::getWriteIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_IO_TIME_COUNTER, getWriteIOTimeCounter());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getWriteIOTimeCounter() const
{
	return _writeIOTimeCounter;
}

void UNIX_FileSystemStatisticalData::setWriteIOTimeCounter(Uint64 &value)
{
	_writeIOTimeCounter = value;
}

Boolean UNIX_FileSystemStatisticalData::getBytesWritten(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_WRITTEN, getBytesWritten());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getBytesWritten() const
{
	return _bytesWritten;
}

void UNIX_FileSystemStatisticalData::setBytesWritten(Uint64 &value)
{
	_bytesWritten = value;
}

Boolean UNIX_FileSystemStatisticalData::getMetadataBytesRead(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METADATA_BYTES_READ, getMetadataBytesRead());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getMetadataBytesRead() const
{
	return _metadataBytesRead;
}

void UNIX_FileSystemStatisticalData::setMetadataBytesRead(Uint64 &value)
{
	_metadataBytesRead = value;
}

Boolean UNIX_FileSystemStatisticalData::getMetadataBytesWritten(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METADATA_BYTES_WRITTEN, getMetadataBytesWritten());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getMetadataBytesWritten() const
{
	return _metadataBytesWritten;
}

void UNIX_FileSystemStatisticalData::setMetadataBytesWritten(Uint64 &value)
{
	_metadataBytesWritten = value;
}

Boolean UNIX_FileSystemStatisticalData::getPercentDurableOpens(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_DURABLE_OPENS, getPercentDurableOpens());
	return true;
}

Uint16 UNIX_FileSystemStatisticalData::getPercentDurableOpens() const
{
	return _percentDurableOpens;
}

void UNIX_FileSystemStatisticalData::setPercentDurableOpens(Uint16 &value)
{
	_percentDurableOpens = value;
}

Boolean UNIX_FileSystemStatisticalData::getPercentResilientOpens(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_RESILIENT_OPENS, getPercentResilientOpens());
	return true;
}

Uint16 UNIX_FileSystemStatisticalData::getPercentResilientOpens() const
{
	return _percentResilientOpens;
}

void UNIX_FileSystemStatisticalData::setPercentResilientOpens(Uint16 &value)
{
	_percentResilientOpens = value;
}

Boolean UNIX_FileSystemStatisticalData::getPercentPersistentOpens(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_PERSISTENT_OPENS, getPercentPersistentOpens());
	return true;
}

Uint16 UNIX_FileSystemStatisticalData::getPercentPersistentOpens() const
{
	return _percentPersistentOpens;
}

void UNIX_FileSystemStatisticalData::setPercentPersistentOpens(Uint16 &value)
{
	_percentPersistentOpens = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageReadResponseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_READ_RESPONSE_TIME, getAverageReadResponseTime());
	return true;
}

Uint16 UNIX_FileSystemStatisticalData::getAverageReadResponseTime() const
{
	return _averageReadResponseTime;
}

void UNIX_FileSystemStatisticalData::setAverageReadResponseTime(Uint16 &value)
{
	_averageReadResponseTime = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageWriteResponseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_WRITE_RESPONSE_TIME, getAverageWriteResponseTime());
	return true;
}

Uint16 UNIX_FileSystemStatisticalData::getAverageWriteResponseTime() const
{
	return _averageWriteResponseTime;
}

void UNIX_FileSystemStatisticalData::setAverageWriteResponseTime(Uint16 &value)
{
	_averageWriteResponseTime = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageRequestResponseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_REQUEST_RESPONSE_TIME, getAverageRequestResponseTime());
	return true;
}

Uint16 UNIX_FileSystemStatisticalData::getAverageRequestResponseTime() const
{
	return _averageRequestResponseTime;
}

void UNIX_FileSystemStatisticalData::setAverageRequestResponseTime(Uint16 &value)
{
	_averageRequestResponseTime = value;
}

Boolean UNIX_FileSystemStatisticalData::getBytesReadPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_READ_PER_SEC, getBytesReadPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getBytesReadPerSec() const
{
	return _bytesReadPerSec;
}

void UNIX_FileSystemStatisticalData::setBytesReadPerSec(Uint64 &value)
{
	_bytesReadPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_BYTES_RECEIVED, getTotalBytesReceived());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalBytesReceived() const
{
	return _totalBytesReceived;
}

void UNIX_FileSystemStatisticalData::setTotalBytesReceived(Uint64 &value)
{
	_totalBytesReceived = value;
}

Boolean UNIX_FileSystemStatisticalData::getBytesReceivedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED_PER_SEC, getBytesReceivedPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getBytesReceivedPerSec() const
{
	return _bytesReceivedPerSec;
}

void UNIX_FileSystemStatisticalData::setBytesReceivedPerSec(Uint64 &value)
{
	_bytesReceivedPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalBytesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_BYTES_SENT, getTotalBytesSent());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalBytesSent() const
{
	return _totalBytesSent;
}

void UNIX_FileSystemStatisticalData::setTotalBytesSent(Uint64 &value)
{
	_totalBytesSent = value;
}

Boolean UNIX_FileSystemStatisticalData::getBytesSentPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_SENT_PER_SEC, getBytesSentPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getBytesSentPerSec() const
{
	return _bytesSentPerSec;
}

void UNIX_FileSystemStatisticalData::setBytesSentPerSec(Uint64 &value)
{
	_bytesSentPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getBytesTranferredPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANFERRED_PER_SEC, getBytesTranferredPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getBytesTranferredPerSec() const
{
	return _bytesTranferredPerSec;
}

void UNIX_FileSystemStatisticalData::setBytesTranferredPerSec(Uint64 &value)
{
	_bytesTranferredPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getBytesWrittenPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_WRITTEN_PER_SEC, getBytesWrittenPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getBytesWrittenPerSec() const
{
	return _bytesWrittenPerSec;
}

void UNIX_FileSystemStatisticalData::setBytesWrittenPerSec(Uint64 &value)
{
	_bytesWrittenPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getFilesOpenedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILES_OPENED_PER_SEC, getFilesOpenedPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getFilesOpenedPerSec() const
{
	return _filesOpenedPerSec;
}

void UNIX_FileSystemStatisticalData::setFilesOpenedPerSec(Uint64 &value)
{
	_filesOpenedPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalOpenFileCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_OPEN_FILE_COUNT, getTotalOpenFileCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalOpenFileCount() const
{
	return _totalOpenFileCount;
}

void UNIX_FileSystemStatisticalData::setTotalOpenFileCount(Uint64 &value)
{
	_totalOpenFileCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getCurrentPendingRequests(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_PENDING_REQUESTS, getCurrentPendingRequests());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getCurrentPendingRequests() const
{
	return _currentPendingRequests;
}

void UNIX_FileSystemStatisticalData::setCurrentPendingRequests(Uint64 &value)
{
	_currentPendingRequests = value;
}

Boolean UNIX_FileSystemStatisticalData::getReadRequestsProcessedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_REQUESTS_PROCESSED_PER_SEC, getReadRequestsProcessedPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getReadRequestsProcessedPerSec() const
{
	return _readRequestsProcessedPerSec;
}

void UNIX_FileSystemStatisticalData::setReadRequestsProcessedPerSec(Uint64 &value)
{
	_readRequestsProcessedPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalRequestsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_REQUESTS_RECEIVED, getTotalRequestsReceived());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalRequestsReceived() const
{
	return _totalRequestsReceived;
}

void UNIX_FileSystemStatisticalData::setTotalRequestsReceived(Uint64 &value)
{
	_totalRequestsReceived = value;
}

Boolean UNIX_FileSystemStatisticalData::getRequestsReceivedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTS_RECEIVED_PER_SEC, getRequestsReceivedPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getRequestsReceivedPerSec() const
{
	return _requestsReceivedPerSec;
}

void UNIX_FileSystemStatisticalData::setRequestsReceivedPerSec(Uint64 &value)
{
	_requestsReceivedPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalDurableHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_DURABLE_HANDLE_REOPEN_COUNT, getTotalDurableHandleReopenCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalDurableHandleReopenCount() const
{
	return _totalDurableHandleReopenCount;
}

void UNIX_FileSystemStatisticalData::setTotalDurableHandleReopenCount(Uint64 &value)
{
	_totalDurableHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalFailedDurableHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_FAILED_DURABLE_HANDLE_REOPEN_COUNT, getTotalFailedDurableHandleReopenCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalFailedDurableHandleReopenCount() const
{
	return _totalFailedDurableHandleReopenCount;
}

void UNIX_FileSystemStatisticalData::setTotalFailedDurableHandleReopenCount(Uint64 &value)
{
	_totalFailedDurableHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalFailedResilientHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_FAILED_RESILIENT_HANDLE_REOPEN_COUNT, getTotalFailedResilientHandleReopenCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalFailedResilientHandleReopenCount() const
{
	return _totalFailedResilientHandleReopenCount;
}

void UNIX_FileSystemStatisticalData::setTotalFailedResilientHandleReopenCount(Uint64 &value)
{
	_totalFailedResilientHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getCurrentOpenFileCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_OPEN_FILE_COUNT, getCurrentOpenFileCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getCurrentOpenFileCount() const
{
	return _currentOpenFileCount;
}

void UNIX_FileSystemStatisticalData::setCurrentOpenFileCount(Uint64 &value)
{
	_currentOpenFileCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalResilientHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_RESILIENT_HANDLE_REOPEN_COUNT, getTotalResilientHandleReopenCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalResilientHandleReopenCount() const
{
	return _totalResilientHandleReopenCount;
}

void UNIX_FileSystemStatisticalData::setTotalResilientHandleReopenCount(Uint64 &value)
{
	_totalResilientHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalPersistentHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_PERSISTENT_HANDLE_REOPEN_COUNT, getTotalPersistentHandleReopenCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalPersistentHandleReopenCount() const
{
	return _totalPersistentHandleReopenCount;
}

void UNIX_FileSystemStatisticalData::setTotalPersistentHandleReopenCount(Uint64 &value)
{
	_totalPersistentHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalFailedPersistentHandleReopenCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_FAILED_PERSISTENT_HANDLE_REOPEN_COUNT, getTotalFailedPersistentHandleReopenCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalFailedPersistentHandleReopenCount() const
{
	return _totalFailedPersistentHandleReopenCount;
}

void UNIX_FileSystemStatisticalData::setTotalFailedPersistentHandleReopenCount(Uint64 &value)
{
	_totalFailedPersistentHandleReopenCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getTreeConnectCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TREE_CONNECT_COUNT, getTreeConnectCount());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTreeConnectCount() const
{
	return _treeConnectCount;
}

void UNIX_FileSystemStatisticalData::setTreeConnectCount(Uint64 &value)
{
	_treeConnectCount = value;
}

Boolean UNIX_FileSystemStatisticalData::getWriteRequestsProcessedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_REQUESTS_PROCESSED_PER_SEC, getWriteRequestsProcessedPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getWriteRequestsProcessedPerSec() const
{
	return _writeRequestsProcessedPerSec;
}

void UNIX_FileSystemStatisticalData::setWriteRequestsProcessedPerSec(Uint64 &value)
{
	_writeRequestsProcessedPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getTotalMetadataRequestsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_METADATA_REQUESTS_RECEIVED, getTotalMetadataRequestsReceived());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getTotalMetadataRequestsReceived() const
{
	return _totalMetadataRequestsReceived;
}

void UNIX_FileSystemStatisticalData::setTotalMetadataRequestsReceived(Uint64 &value)
{
	_totalMetadataRequestsReceived = value;
}

Boolean UNIX_FileSystemStatisticalData::getMetadataRequestsReceivedPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METADATA_REQUESTS_RECEIVED_PER_SEC, getMetadataRequestsReceivedPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getMetadataRequestsReceivedPerSec() const
{
	return _metadataRequestsReceivedPerSec;
}

void UNIX_FileSystemStatisticalData::setMetadataRequestsReceivedPerSec(Uint64 &value)
{
	_metadataRequestsReceivedPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageTimePerDataRequest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_TIME_PER_DATA_REQUEST, getAverageTimePerDataRequest());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getAverageTimePerDataRequest() const
{
	return _averageTimePerDataRequest;
}

void UNIX_FileSystemStatisticalData::setAverageTimePerDataRequest(Uint64 &value)
{
	_averageTimePerDataRequest = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageBytesPerDataRequest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_BYTES_PER_DATA_REQUEST, getAverageBytesPerDataRequest());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getAverageBytesPerDataRequest() const
{
	return _averageBytesPerDataRequest;
}

void UNIX_FileSystemStatisticalData::setAverageBytesPerDataRequest(Uint64 &value)
{
	_averageBytesPerDataRequest = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageBytesPerReadRequest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_BYTES_PER_READ_REQUEST, getAverageBytesPerReadRequest());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getAverageBytesPerReadRequest() const
{
	return _averageBytesPerReadRequest;
}

void UNIX_FileSystemStatisticalData::setAverageBytesPerReadRequest(Uint64 &value)
{
	_averageBytesPerReadRequest = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageBytesPerWriteRequest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_BYTES_PER_WRITE_REQUEST, getAverageBytesPerWriteRequest());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getAverageBytesPerWriteRequest() const
{
	return _averageBytesPerWriteRequest;
}

void UNIX_FileSystemStatisticalData::setAverageBytesPerWriteRequest(Uint64 &value)
{
	_averageBytesPerWriteRequest = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageReadQueueLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_READ_QUEUE_LENGTH, getAverageReadQueueLength());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getAverageReadQueueLength() const
{
	return _averageReadQueueLength;
}

void UNIX_FileSystemStatisticalData::setAverageReadQueueLength(Uint64 &value)
{
	_averageReadQueueLength = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageWriteQueueLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_WRITE_QUEUE_LENGTH, getAverageWriteQueueLength());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getAverageWriteQueueLength() const
{
	return _averageWriteQueueLength;
}

void UNIX_FileSystemStatisticalData::setAverageWriteQueueLength(Uint64 &value)
{
	_averageWriteQueueLength = value;
}

Boolean UNIX_FileSystemStatisticalData::getAverageDataQueueLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_DATA_QUEUE_LENGTH, getAverageDataQueueLength());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getAverageDataQueueLength() const
{
	return _averageDataQueueLength;
}

void UNIX_FileSystemStatisticalData::setAverageDataQueueLength(Uint64 &value)
{
	_averageDataQueueLength = value;
}

Boolean UNIX_FileSystemStatisticalData::getDataBytesPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_BYTES_PER_SEC, getDataBytesPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getDataBytesPerSec() const
{
	return _dataBytesPerSec;
}

void UNIX_FileSystemStatisticalData::setDataBytesPerSec(Uint64 &value)
{
	_dataBytesPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getDataRequestsPerSec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REQUESTS_PER_SEC, getDataRequestsPerSec());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getDataRequestsPerSec() const
{
	return _dataRequestsPerSec;
}

void UNIX_FileSystemStatisticalData::setDataRequestsPerSec(Uint64 &value)
{
	_dataRequestsPerSec = value;
}

Boolean UNIX_FileSystemStatisticalData::getCurrentDataQueueLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_DATA_QUEUE_LENGTH, getCurrentDataQueueLength());
	return true;
}

Uint64 UNIX_FileSystemStatisticalData::getCurrentDataQueueLength() const
{
	return _currentDataQueueLength;
}

void UNIX_FileSystemStatisticalData::setCurrentDataQueueLength(Uint64 &value)
{
	_currentDataQueueLength = value;
}


void UNIX_FileSystemStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_elementType = Uint16(0);
	_otherElementTypeDescription = String ("");
	_totalIOs = Uint64(0);
	_totalBytesTransferred = Uint64(0);
	_readIOs = Uint64(0);
	_writeIOs = Uint64(0);
	_otherIOs = Uint64(0);
	_metadataReadIOs = Uint64(0);
	_metadataWriteIOs = Uint64(0);
	_totalIOTimeCounter = Uint64(0);
	_totalIdleTimeCounter = Uint64(0);
	_readIOTimeCounter = Uint64(0);
	_bytesRead = Uint64(0);
	_writeIOTimeCounter = Uint64(0);
	_bytesWritten = Uint64(0);
	_metadataBytesRead = Uint64(0);
	_metadataBytesWritten = Uint64(0);
	_percentDurableOpens = Uint16(0);
	_percentResilientOpens = Uint16(0);
	_percentPersistentOpens = Uint16(0);
	_averageReadResponseTime = Uint16(0);
	_averageWriteResponseTime = Uint16(0);
	_averageRequestResponseTime = Uint16(0);
	_bytesReadPerSec = Uint64(0);
	_totalBytesReceived = Uint64(0);
	_bytesReceivedPerSec = Uint64(0);
	_totalBytesSent = Uint64(0);
	_bytesSentPerSec = Uint64(0);
	_bytesTranferredPerSec = Uint64(0);
	_bytesWrittenPerSec = Uint64(0);
	_filesOpenedPerSec = Uint64(0);
	_totalOpenFileCount = Uint64(0);
	_currentPendingRequests = Uint64(0);
	_readRequestsProcessedPerSec = Uint64(0);
	_totalRequestsReceived = Uint64(0);
	_requestsReceivedPerSec = Uint64(0);
	_totalDurableHandleReopenCount = Uint64(0);
	_totalFailedDurableHandleReopenCount = Uint64(0);
	_totalFailedResilientHandleReopenCount = Uint64(0);
	_currentOpenFileCount = Uint64(0);
	_totalResilientHandleReopenCount = Uint64(0);
	_totalPersistentHandleReopenCount = Uint64(0);
	_totalFailedPersistentHandleReopenCount = Uint64(0);
	_treeConnectCount = Uint64(0);
	_writeRequestsProcessedPerSec = Uint64(0);
	_totalMetadataRequestsReceived = Uint64(0);
	_metadataRequestsReceivedPerSec = Uint64(0);
	_averageTimePerDataRequest = Uint64(0);
	_averageBytesPerDataRequest = Uint64(0);
	_averageBytesPerReadRequest = Uint64(0);
	_averageBytesPerWriteRequest = Uint64(0);
	_averageReadQueueLength = Uint64(0);
	_averageWriteQueueLength = Uint64(0);
	_averageDataQueueLength = Uint64(0);
	_dataBytesPerSec = Uint64(0);
	_dataRequestsPerSec = Uint64(0);
	_currentDataQueueLength = Uint64(0);

}

Boolean UNIX_FileSystemStatisticalData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "StartStatisticTime"))
			{
				CIMDateTime startStatisticTimeValue;
				property.getValue().get(startStatisticTimeValue);
				setStartStatisticTime(startStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "StatisticTime"))
			{
				CIMDateTime statisticTimeValue;
				property.getValue().get(statisticTimeValue);
				setStatisticTime(statisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "SampleInterval"))
			{
				CIMDateTime sampleIntervalValue;
				property.getValue().get(sampleIntervalValue);
				setSampleInterval(sampleIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalEndTime"))
			{
				CIMDateTime rateIntervalEndTimeValue;
				property.getValue().get(rateIntervalEndTimeValue);
				setRateIntervalEndTime(rateIntervalEndTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalStartTime"))
			{
				CIMDateTime rateIntervalStartTimeValue;
				property.getValue().get(rateIntervalStartTimeValue);
				setRateIntervalStartTime(rateIntervalStartTimeValue);
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
			else if (String::equal(property.getName().getString(), "TotalIOs"))
			{
				Uint64 totalIOsValue;
				property.getValue().get(totalIOsValue);
				setTotalIOs(totalIOsValue);
			}
			else if (String::equal(property.getName().getString(), "TotalBytesTransferred"))
			{
				Uint64 totalBytesTransferredValue;
				property.getValue().get(totalBytesTransferredValue);
				setTotalBytesTransferred(totalBytesTransferredValue);
			}
			else if (String::equal(property.getName().getString(), "ReadIOs"))
			{
				Uint64 readIOsValue;
				property.getValue().get(readIOsValue);
				setReadIOs(readIOsValue);
			}
			else if (String::equal(property.getName().getString(), "WriteIOs"))
			{
				Uint64 writeIOsValue;
				property.getValue().get(writeIOsValue);
				setWriteIOs(writeIOsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIOs"))
			{
				Uint64 otherIOsValue;
				property.getValue().get(otherIOsValue);
				setOtherIOs(otherIOsValue);
			}
			else if (String::equal(property.getName().getString(), "MetadataReadIOs"))
			{
				Uint64 metadataReadIOsValue;
				property.getValue().get(metadataReadIOsValue);
				setMetadataReadIOs(metadataReadIOsValue);
			}
			else if (String::equal(property.getName().getString(), "MetadataWriteIOs"))
			{
				Uint64 metadataWriteIOsValue;
				property.getValue().get(metadataWriteIOsValue);
				setMetadataWriteIOs(metadataWriteIOsValue);
			}
			else if (String::equal(property.getName().getString(), "TotalIOTimeCounter"))
			{
				Uint64 totalIOTimeCounterValue;
				property.getValue().get(totalIOTimeCounterValue);
				setTotalIOTimeCounter(totalIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "TotalIdleTimeCounter"))
			{
				Uint64 totalIdleTimeCounterValue;
				property.getValue().get(totalIdleTimeCounterValue);
				setTotalIdleTimeCounter(totalIdleTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "ReadIOTimeCounter"))
			{
				Uint64 readIOTimeCounterValue;
				property.getValue().get(readIOTimeCounterValue);
				setReadIOTimeCounter(readIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "BytesRead"))
			{
				Uint64 bytesReadValue;
				property.getValue().get(bytesReadValue);
				setBytesRead(bytesReadValue);
			}
			else if (String::equal(property.getName().getString(), "WriteIOTimeCounter"))
			{
				Uint64 writeIOTimeCounterValue;
				property.getValue().get(writeIOTimeCounterValue);
				setWriteIOTimeCounter(writeIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "BytesWritten"))
			{
				Uint64 bytesWrittenValue;
				property.getValue().get(bytesWrittenValue);
				setBytesWritten(bytesWrittenValue);
			}
			else if (String::equal(property.getName().getString(), "MetadataBytesRead"))
			{
				Uint64 metadataBytesReadValue;
				property.getValue().get(metadataBytesReadValue);
				setMetadataBytesRead(metadataBytesReadValue);
			}
			else if (String::equal(property.getName().getString(), "MetadataBytesWritten"))
			{
				Uint64 metadataBytesWrittenValue;
				property.getValue().get(metadataBytesWrittenValue);
				setMetadataBytesWritten(metadataBytesWrittenValue);
			}
			else if (String::equal(property.getName().getString(), "PercentDurableOpens"))
			{
				Uint16 percentDurableOpensValue;
				property.getValue().get(percentDurableOpensValue);
				setPercentDurableOpens(percentDurableOpensValue);
			}
			else if (String::equal(property.getName().getString(), "PercentResilientOpens"))
			{
				Uint16 percentResilientOpensValue;
				property.getValue().get(percentResilientOpensValue);
				setPercentResilientOpens(percentResilientOpensValue);
			}
			else if (String::equal(property.getName().getString(), "PercentPersistentOpens"))
			{
				Uint16 percentPersistentOpensValue;
				property.getValue().get(percentPersistentOpensValue);
				setPercentPersistentOpens(percentPersistentOpensValue);
			}
			else if (String::equal(property.getName().getString(), "AverageReadResponseTime"))
			{
				Uint16 averageReadResponseTimeValue;
				property.getValue().get(averageReadResponseTimeValue);
				setAverageReadResponseTime(averageReadResponseTimeValue);
			}
			else if (String::equal(property.getName().getString(), "AverageWriteResponseTime"))
			{
				Uint16 averageWriteResponseTimeValue;
				property.getValue().get(averageWriteResponseTimeValue);
				setAverageWriteResponseTime(averageWriteResponseTimeValue);
			}
			else if (String::equal(property.getName().getString(), "AverageRequestResponseTime"))
			{
				Uint16 averageRequestResponseTimeValue;
				property.getValue().get(averageRequestResponseTimeValue);
				setAverageRequestResponseTime(averageRequestResponseTimeValue);
			}
			else if (String::equal(property.getName().getString(), "BytesReadPerSec"))
			{
				Uint64 bytesReadPerSecValue;
				property.getValue().get(bytesReadPerSecValue);
				setBytesReadPerSec(bytesReadPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "TotalBytesReceived"))
			{
				Uint64 totalBytesReceivedValue;
				property.getValue().get(totalBytesReceivedValue);
				setTotalBytesReceived(totalBytesReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "BytesReceivedPerSec"))
			{
				Uint64 bytesReceivedPerSecValue;
				property.getValue().get(bytesReceivedPerSecValue);
				setBytesReceivedPerSec(bytesReceivedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "TotalBytesSent"))
			{
				Uint64 totalBytesSentValue;
				property.getValue().get(totalBytesSentValue);
				setTotalBytesSent(totalBytesSentValue);
			}
			else if (String::equal(property.getName().getString(), "BytesSentPerSec"))
			{
				Uint64 bytesSentPerSecValue;
				property.getValue().get(bytesSentPerSecValue);
				setBytesSentPerSec(bytesSentPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "BytesTranferredPerSec"))
			{
				Uint64 bytesTranferredPerSecValue;
				property.getValue().get(bytesTranferredPerSecValue);
				setBytesTranferredPerSec(bytesTranferredPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "BytesWrittenPerSec"))
			{
				Uint64 bytesWrittenPerSecValue;
				property.getValue().get(bytesWrittenPerSecValue);
				setBytesWrittenPerSec(bytesWrittenPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "FilesOpenedPerSec"))
			{
				Uint64 filesOpenedPerSecValue;
				property.getValue().get(filesOpenedPerSecValue);
				setFilesOpenedPerSec(filesOpenedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "TotalOpenFileCount"))
			{
				Uint64 totalOpenFileCountValue;
				property.getValue().get(totalOpenFileCountValue);
				setTotalOpenFileCount(totalOpenFileCountValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentPendingRequests"))
			{
				Uint64 currentPendingRequestsValue;
				property.getValue().get(currentPendingRequestsValue);
				setCurrentPendingRequests(currentPendingRequestsValue);
			}
			else if (String::equal(property.getName().getString(), "ReadRequestsProcessedPerSec"))
			{
				Uint64 readRequestsProcessedPerSecValue;
				property.getValue().get(readRequestsProcessedPerSecValue);
				setReadRequestsProcessedPerSec(readRequestsProcessedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "TotalRequestsReceived"))
			{
				Uint64 totalRequestsReceivedValue;
				property.getValue().get(totalRequestsReceivedValue);
				setTotalRequestsReceived(totalRequestsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "RequestsReceivedPerSec"))
			{
				Uint64 requestsReceivedPerSecValue;
				property.getValue().get(requestsReceivedPerSecValue);
				setRequestsReceivedPerSec(requestsReceivedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "TotalDurableHandleReopenCount"))
			{
				Uint64 totalDurableHandleReopenCountValue;
				property.getValue().get(totalDurableHandleReopenCountValue);
				setTotalDurableHandleReopenCount(totalDurableHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "TotalFailedDurableHandleReopenCount"))
			{
				Uint64 totalFailedDurableHandleReopenCountValue;
				property.getValue().get(totalFailedDurableHandleReopenCountValue);
				setTotalFailedDurableHandleReopenCount(totalFailedDurableHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "TotalFailedResilientHandleReopenCount"))
			{
				Uint64 totalFailedResilientHandleReopenCountValue;
				property.getValue().get(totalFailedResilientHandleReopenCountValue);
				setTotalFailedResilientHandleReopenCount(totalFailedResilientHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentOpenFileCount"))
			{
				Uint64 currentOpenFileCountValue;
				property.getValue().get(currentOpenFileCountValue);
				setCurrentOpenFileCount(currentOpenFileCountValue);
			}
			else if (String::equal(property.getName().getString(), "TotalResilientHandleReopenCount"))
			{
				Uint64 totalResilientHandleReopenCountValue;
				property.getValue().get(totalResilientHandleReopenCountValue);
				setTotalResilientHandleReopenCount(totalResilientHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "TotalPersistentHandleReopenCount"))
			{
				Uint64 totalPersistentHandleReopenCountValue;
				property.getValue().get(totalPersistentHandleReopenCountValue);
				setTotalPersistentHandleReopenCount(totalPersistentHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "TotalFailedPersistentHandleReopenCount"))
			{
				Uint64 totalFailedPersistentHandleReopenCountValue;
				property.getValue().get(totalFailedPersistentHandleReopenCountValue);
				setTotalFailedPersistentHandleReopenCount(totalFailedPersistentHandleReopenCountValue);
			}
			else if (String::equal(property.getName().getString(), "TreeConnectCount"))
			{
				Uint64 treeConnectCountValue;
				property.getValue().get(treeConnectCountValue);
				setTreeConnectCount(treeConnectCountValue);
			}
			else if (String::equal(property.getName().getString(), "WriteRequestsProcessedPerSec"))
			{
				Uint64 writeRequestsProcessedPerSecValue;
				property.getValue().get(writeRequestsProcessedPerSecValue);
				setWriteRequestsProcessedPerSec(writeRequestsProcessedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "TotalMetadataRequestsReceived"))
			{
				Uint64 totalMetadataRequestsReceivedValue;
				property.getValue().get(totalMetadataRequestsReceivedValue);
				setTotalMetadataRequestsReceived(totalMetadataRequestsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "MetadataRequestsReceivedPerSec"))
			{
				Uint64 metadataRequestsReceivedPerSecValue;
				property.getValue().get(metadataRequestsReceivedPerSecValue);
				setMetadataRequestsReceivedPerSec(metadataRequestsReceivedPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "AverageTimePerDataRequest"))
			{
				Uint64 averageTimePerDataRequestValue;
				property.getValue().get(averageTimePerDataRequestValue);
				setAverageTimePerDataRequest(averageTimePerDataRequestValue);
			}
			else if (String::equal(property.getName().getString(), "AverageBytesPerDataRequest"))
			{
				Uint64 averageBytesPerDataRequestValue;
				property.getValue().get(averageBytesPerDataRequestValue);
				setAverageBytesPerDataRequest(averageBytesPerDataRequestValue);
			}
			else if (String::equal(property.getName().getString(), "AverageBytesPerReadRequest"))
			{
				Uint64 averageBytesPerReadRequestValue;
				property.getValue().get(averageBytesPerReadRequestValue);
				setAverageBytesPerReadRequest(averageBytesPerReadRequestValue);
			}
			else if (String::equal(property.getName().getString(), "AverageBytesPerWriteRequest"))
			{
				Uint64 averageBytesPerWriteRequestValue;
				property.getValue().get(averageBytesPerWriteRequestValue);
				setAverageBytesPerWriteRequest(averageBytesPerWriteRequestValue);
			}
			else if (String::equal(property.getName().getString(), "AverageReadQueueLength"))
			{
				Uint64 averageReadQueueLengthValue;
				property.getValue().get(averageReadQueueLengthValue);
				setAverageReadQueueLength(averageReadQueueLengthValue);
			}
			else if (String::equal(property.getName().getString(), "AverageWriteQueueLength"))
			{
				Uint64 averageWriteQueueLengthValue;
				property.getValue().get(averageWriteQueueLengthValue);
				setAverageWriteQueueLength(averageWriteQueueLengthValue);
			}
			else if (String::equal(property.getName().getString(), "AverageDataQueueLength"))
			{
				Uint64 averageDataQueueLengthValue;
				property.getValue().get(averageDataQueueLengthValue);
				setAverageDataQueueLength(averageDataQueueLengthValue);
			}
			else if (String::equal(property.getName().getString(), "DataBytesPerSec"))
			{
				Uint64 dataBytesPerSecValue;
				property.getValue().get(dataBytesPerSecValue);
				setDataBytesPerSec(dataBytesPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "DataRequestsPerSec"))
			{
				Uint64 dataRequestsPerSecValue;
				property.getValue().get(dataRequestsPerSecValue);
				setDataRequestsPerSec(dataRequestsPerSecValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentDataQueueLength"))
			{
				Uint64 currentDataQueueLengthValue;
				property.getValue().get(currentDataQueueLengthValue);
				setCurrentDataQueueLength(currentDataQueueLengthValue);
			}
	}
	return true;
}

Uint32 UNIX_FileSystemStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_FileSystemStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_FileSystemStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_elementType = Uint16(0);
	_otherElementTypeDescription = String ("");
	_totalIOs = Uint64(0);
	_totalBytesTransferred = Uint64(0);
	_readIOs = Uint64(0);
	_writeIOs = Uint64(0);
	_otherIOs = Uint64(0);
	_metadataReadIOs = Uint64(0);
	_metadataWriteIOs = Uint64(0);
	_totalIOTimeCounter = Uint64(0);
	_totalIdleTimeCounter = Uint64(0);
	_readIOTimeCounter = Uint64(0);
	_bytesRead = Uint64(0);
	_writeIOTimeCounter = Uint64(0);
	_bytesWritten = Uint64(0);
	_metadataBytesRead = Uint64(0);
	_metadataBytesWritten = Uint64(0);
	_percentDurableOpens = Uint16(0);
	_percentResilientOpens = Uint16(0);
	_percentPersistentOpens = Uint16(0);
	_averageReadResponseTime = Uint16(0);
	_averageWriteResponseTime = Uint16(0);
	_averageRequestResponseTime = Uint16(0);
	_bytesReadPerSec = Uint64(0);
	_totalBytesReceived = Uint64(0);
	_bytesReceivedPerSec = Uint64(0);
	_totalBytesSent = Uint64(0);
	_bytesSentPerSec = Uint64(0);
	_bytesTranferredPerSec = Uint64(0);
	_bytesWrittenPerSec = Uint64(0);
	_filesOpenedPerSec = Uint64(0);
	_totalOpenFileCount = Uint64(0);
	_currentPendingRequests = Uint64(0);
	_readRequestsProcessedPerSec = Uint64(0);
	_totalRequestsReceived = Uint64(0);
	_requestsReceivedPerSec = Uint64(0);
	_totalDurableHandleReopenCount = Uint64(0);
	_totalFailedDurableHandleReopenCount = Uint64(0);
	_totalFailedResilientHandleReopenCount = Uint64(0);
	_currentOpenFileCount = Uint64(0);
	_totalResilientHandleReopenCount = Uint64(0);
	_totalPersistentHandleReopenCount = Uint64(0);
	_totalFailedPersistentHandleReopenCount = Uint64(0);
	_treeConnectCount = Uint64(0);
	_writeRequestsProcessedPerSec = Uint64(0);
	_totalMetadataRequestsReceived = Uint64(0);
	_metadataRequestsReceivedPerSec = Uint64(0);
	_averageTimePerDataRequest = Uint64(0);
	_averageBytesPerDataRequest = Uint64(0);
	_averageBytesPerReadRequest = Uint64(0);
	_averageBytesPerWriteRequest = Uint64(0);
	_averageReadQueueLength = Uint64(0);
	_averageWriteQueueLength = Uint64(0);
	_averageDataQueueLength = Uint64(0);
	_dataBytesPerSec = Uint64(0);
	_dataRequestsPerSec = Uint64(0);
	_currentDataQueueLength = Uint64(0);
	
	return false;
}

Boolean UNIX_FileSystemStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_FileSystemStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FileSystemStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemStatisticalData::validateInstance()
{
	return true;
}

