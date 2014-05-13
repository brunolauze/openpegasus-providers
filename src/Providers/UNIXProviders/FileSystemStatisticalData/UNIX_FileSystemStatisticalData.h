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
A subclass of StatisticalData which identifies individual statistics for an element of a system that provides filesystem support. This class defines the metrics that MAY be kept for managed elements of the system.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalData:
				StartStatisticTime DateTime
				StatisticTime DateTime
				SampleInterval DateTime
				RateIntervalEndTime DateTime
				RateIntervalStartTime DateTime

			UNIX_FileSystemStatisticalData:
				ElementType UInt16
				OtherElementTypeDescription String
				TotalIOs UInt64
				TotalBytesTransferred UInt64
				ReadIOs UInt64
				WriteIOs UInt64
				OtherIOs UInt64
				MetadataReadIOs UInt64
				MetadataWriteIOs UInt64
				TotalIOTimeCounter UInt64
				TotalIdleTimeCounter UInt64
				ReadIOTimeCounter UInt64
				BytesRead UInt64
				WriteIOTimeCounter UInt64
				BytesWritten UInt64
				MetadataBytesRead UInt64
				MetadataBytesWritten UInt64
				PercentDurableOpens UInt16
				PercentResilientOpens UInt16
				PercentPersistentOpens UInt16
				AverageReadResponseTime UInt16
				AverageWriteResponseTime UInt16
				AverageRequestResponseTime UInt16
				BytesReadPerSec UInt64
				TotalBytesReceived UInt64
				BytesReceivedPerSec UInt64
				TotalBytesSent UInt64
				BytesSentPerSec UInt64
				BytesTranferredPerSec UInt64
				BytesWrittenPerSec UInt64
				FilesOpenedPerSec UInt64
				TotalOpenFileCount UInt64
				CurrentPendingRequests UInt64
				ReadRequestsProcessedPerSec UInt64
				TotalRequestsReceived UInt64
				RequestsReceivedPerSec UInt64
				TotalDurableHandleReopenCount UInt64
				TotalFailedDurableHandleReopenCount UInt64
				TotalFailedResilientHandleReopenCount UInt64
				CurrentOpenFileCount UInt64
				TotalResilientHandleReopenCount UInt64
				TotalPersistentHandleReopenCount UInt64
				TotalFailedPersistentHandleReopenCount UInt64
				TreeConnectCount UInt64
				WriteRequestsProcessedPerSec UInt64
				TotalMetadataRequestsReceived UInt64
				MetadataRequestsReceivedPerSec UInt64
				AverageTimePerDataRequest UInt64
				AverageBytesPerDataRequest UInt64
				AverageBytesPerReadRequest UInt64
				AverageBytesPerWriteRequest UInt64
				AverageReadQueueLength UInt64
				AverageWriteQueueLength UInt64
				AverageDataQueueLength UInt64
				DataBytesPerSec UInt64
				DataRequestsPerSec UInt64
				CurrentDataQueueLength UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_FileSystemStatisticalData:


*/

#ifndef __UNIX_FILESYSTEMSTATISTICALDATA_H
#define __UNIX_FILESYSTEMSTATISTICALDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_FileSystemStatisticalDataDeps.h"


#ifndef PROPERTY_ELEMENT_TYPE
#define PROPERTY_ELEMENT_TYPE \
					"ElementType"
#endif

#ifndef PROPERTY_OTHER_ELEMENT_TYPE_DESCRIPTION
#define PROPERTY_OTHER_ELEMENT_TYPE_DESCRIPTION \
					"OtherElementTypeDescription"
#endif

#ifndef PROPERTY_TOTAL_IOS
#define PROPERTY_TOTAL_IOS \
					"TotalIOs"
#endif

#ifndef PROPERTY_TOTAL_BYTES_TRANSFERRED
#define PROPERTY_TOTAL_BYTES_TRANSFERRED \
					"TotalBytesTransferred"
#endif

#ifndef PROPERTY_READ_IOS
#define PROPERTY_READ_IOS \
					"ReadIOs"
#endif

#ifndef PROPERTY_WRITE_IOS
#define PROPERTY_WRITE_IOS \
					"WriteIOs"
#endif

#ifndef PROPERTY_OTHER_IOS
#define PROPERTY_OTHER_IOS \
					"OtherIOs"
#endif

#ifndef PROPERTY_METADATA_READ_IOS
#define PROPERTY_METADATA_READ_IOS \
					"MetadataReadIOs"
#endif

#ifndef PROPERTY_METADATA_WRITE_IOS
#define PROPERTY_METADATA_WRITE_IOS \
					"MetadataWriteIOs"
#endif

#ifndef PROPERTY_TOTAL_IO_TIME_COUNTER
#define PROPERTY_TOTAL_IO_TIME_COUNTER \
					"TotalIOTimeCounter"
#endif

#ifndef PROPERTY_TOTAL_IDLE_TIME_COUNTER
#define PROPERTY_TOTAL_IDLE_TIME_COUNTER \
					"TotalIdleTimeCounter"
#endif

#ifndef PROPERTY_READ_IO_TIME_COUNTER
#define PROPERTY_READ_IO_TIME_COUNTER \
					"ReadIOTimeCounter"
#endif

#ifndef PROPERTY_BYTES_READ
#define PROPERTY_BYTES_READ \
					"BytesRead"
#endif

#ifndef PROPERTY_WRITE_IO_TIME_COUNTER
#define PROPERTY_WRITE_IO_TIME_COUNTER \
					"WriteIOTimeCounter"
#endif

#ifndef PROPERTY_BYTES_WRITTEN
#define PROPERTY_BYTES_WRITTEN \
					"BytesWritten"
#endif

#ifndef PROPERTY_METADATA_BYTES_READ
#define PROPERTY_METADATA_BYTES_READ \
					"MetadataBytesRead"
#endif

#ifndef PROPERTY_METADATA_BYTES_WRITTEN
#define PROPERTY_METADATA_BYTES_WRITTEN \
					"MetadataBytesWritten"
#endif

#ifndef PROPERTY_PERCENT_DURABLE_OPENS
#define PROPERTY_PERCENT_DURABLE_OPENS \
					"PercentDurableOpens"
#endif

#ifndef PROPERTY_PERCENT_RESILIENT_OPENS
#define PROPERTY_PERCENT_RESILIENT_OPENS \
					"PercentResilientOpens"
#endif

#ifndef PROPERTY_PERCENT_PERSISTENT_OPENS
#define PROPERTY_PERCENT_PERSISTENT_OPENS \
					"PercentPersistentOpens"
#endif

#ifndef PROPERTY_AVERAGE_READ_RESPONSE_TIME
#define PROPERTY_AVERAGE_READ_RESPONSE_TIME \
					"AverageReadResponseTime"
#endif

#ifndef PROPERTY_AVERAGE_WRITE_RESPONSE_TIME
#define PROPERTY_AVERAGE_WRITE_RESPONSE_TIME \
					"AverageWriteResponseTime"
#endif

#ifndef PROPERTY_AVERAGE_REQUEST_RESPONSE_TIME
#define PROPERTY_AVERAGE_REQUEST_RESPONSE_TIME \
					"AverageRequestResponseTime"
#endif

#ifndef PROPERTY_BYTES_READ_PER_SEC
#define PROPERTY_BYTES_READ_PER_SEC \
					"BytesReadPerSec"
#endif

#ifndef PROPERTY_TOTAL_BYTES_RECEIVED
#define PROPERTY_TOTAL_BYTES_RECEIVED \
					"TotalBytesReceived"
#endif

#ifndef PROPERTY_BYTES_RECEIVED_PER_SEC
#define PROPERTY_BYTES_RECEIVED_PER_SEC \
					"BytesReceivedPerSec"
#endif

#ifndef PROPERTY_TOTAL_BYTES_SENT
#define PROPERTY_TOTAL_BYTES_SENT \
					"TotalBytesSent"
#endif

#ifndef PROPERTY_BYTES_SENT_PER_SEC
#define PROPERTY_BYTES_SENT_PER_SEC \
					"BytesSentPerSec"
#endif

#ifndef PROPERTY_BYTES_TRANFERRED_PER_SEC
#define PROPERTY_BYTES_TRANFERRED_PER_SEC \
					"BytesTranferredPerSec"
#endif

#ifndef PROPERTY_BYTES_WRITTEN_PER_SEC
#define PROPERTY_BYTES_WRITTEN_PER_SEC \
					"BytesWrittenPerSec"
#endif

#ifndef PROPERTY_FILES_OPENED_PER_SEC
#define PROPERTY_FILES_OPENED_PER_SEC \
					"FilesOpenedPerSec"
#endif

#ifndef PROPERTY_TOTAL_OPEN_FILE_COUNT
#define PROPERTY_TOTAL_OPEN_FILE_COUNT \
					"TotalOpenFileCount"
#endif

#ifndef PROPERTY_CURRENT_PENDING_REQUESTS
#define PROPERTY_CURRENT_PENDING_REQUESTS \
					"CurrentPendingRequests"
#endif

#ifndef PROPERTY_READ_REQUESTS_PROCESSED_PER_SEC
#define PROPERTY_READ_REQUESTS_PROCESSED_PER_SEC \
					"ReadRequestsProcessedPerSec"
#endif

#ifndef PROPERTY_TOTAL_REQUESTS_RECEIVED
#define PROPERTY_TOTAL_REQUESTS_RECEIVED \
					"TotalRequestsReceived"
#endif

#ifndef PROPERTY_REQUESTS_RECEIVED_PER_SEC
#define PROPERTY_REQUESTS_RECEIVED_PER_SEC \
					"RequestsReceivedPerSec"
#endif

#ifndef PROPERTY_TOTAL_DURABLE_HANDLE_REOPEN_COUNT
#define PROPERTY_TOTAL_DURABLE_HANDLE_REOPEN_COUNT \
					"TotalDurableHandleReopenCount"
#endif

#ifndef PROPERTY_TOTAL_FAILED_DURABLE_HANDLE_REOPEN_COUNT
#define PROPERTY_TOTAL_FAILED_DURABLE_HANDLE_REOPEN_COUNT \
					"TotalFailedDurableHandleReopenCount"
#endif

#ifndef PROPERTY_TOTAL_FAILED_RESILIENT_HANDLE_REOPEN_COUNT
#define PROPERTY_TOTAL_FAILED_RESILIENT_HANDLE_REOPEN_COUNT \
					"TotalFailedResilientHandleReopenCount"
#endif

#ifndef PROPERTY_CURRENT_OPEN_FILE_COUNT
#define PROPERTY_CURRENT_OPEN_FILE_COUNT \
					"CurrentOpenFileCount"
#endif

#ifndef PROPERTY_TOTAL_RESILIENT_HANDLE_REOPEN_COUNT
#define PROPERTY_TOTAL_RESILIENT_HANDLE_REOPEN_COUNT \
					"TotalResilientHandleReopenCount"
#endif

#ifndef PROPERTY_TOTAL_PERSISTENT_HANDLE_REOPEN_COUNT
#define PROPERTY_TOTAL_PERSISTENT_HANDLE_REOPEN_COUNT \
					"TotalPersistentHandleReopenCount"
#endif

#ifndef PROPERTY_TOTAL_FAILED_PERSISTENT_HANDLE_REOPEN_COUNT
#define PROPERTY_TOTAL_FAILED_PERSISTENT_HANDLE_REOPEN_COUNT \
					"TotalFailedPersistentHandleReopenCount"
#endif

#ifndef PROPERTY_TREE_CONNECT_COUNT
#define PROPERTY_TREE_CONNECT_COUNT \
					"TreeConnectCount"
#endif

#ifndef PROPERTY_WRITE_REQUESTS_PROCESSED_PER_SEC
#define PROPERTY_WRITE_REQUESTS_PROCESSED_PER_SEC \
					"WriteRequestsProcessedPerSec"
#endif

#ifndef PROPERTY_TOTAL_METADATA_REQUESTS_RECEIVED
#define PROPERTY_TOTAL_METADATA_REQUESTS_RECEIVED \
					"TotalMetadataRequestsReceived"
#endif

#ifndef PROPERTY_METADATA_REQUESTS_RECEIVED_PER_SEC
#define PROPERTY_METADATA_REQUESTS_RECEIVED_PER_SEC \
					"MetadataRequestsReceivedPerSec"
#endif

#ifndef PROPERTY_AVERAGE_TIME_PER_DATA_REQUEST
#define PROPERTY_AVERAGE_TIME_PER_DATA_REQUEST \
					"AverageTimePerDataRequest"
#endif

#ifndef PROPERTY_AVERAGE_BYTES_PER_DATA_REQUEST
#define PROPERTY_AVERAGE_BYTES_PER_DATA_REQUEST \
					"AverageBytesPerDataRequest"
#endif

#ifndef PROPERTY_AVERAGE_BYTES_PER_READ_REQUEST
#define PROPERTY_AVERAGE_BYTES_PER_READ_REQUEST \
					"AverageBytesPerReadRequest"
#endif

#ifndef PROPERTY_AVERAGE_BYTES_PER_WRITE_REQUEST
#define PROPERTY_AVERAGE_BYTES_PER_WRITE_REQUEST \
					"AverageBytesPerWriteRequest"
#endif

#ifndef PROPERTY_AVERAGE_READ_QUEUE_LENGTH
#define PROPERTY_AVERAGE_READ_QUEUE_LENGTH \
					"AverageReadQueueLength"
#endif

#ifndef PROPERTY_AVERAGE_WRITE_QUEUE_LENGTH
#define PROPERTY_AVERAGE_WRITE_QUEUE_LENGTH \
					"AverageWriteQueueLength"
#endif

#ifndef PROPERTY_AVERAGE_DATA_QUEUE_LENGTH
#define PROPERTY_AVERAGE_DATA_QUEUE_LENGTH \
					"AverageDataQueueLength"
#endif

#ifndef PROPERTY_DATA_BYTES_PER_SEC
#define PROPERTY_DATA_BYTES_PER_SEC \
					"DataBytesPerSec"
#endif

#ifndef PROPERTY_DATA_REQUESTS_PER_SEC
#define PROPERTY_DATA_REQUESTS_PER_SEC \
					"DataRequestsPerSec"
#endif

#ifndef PROPERTY_CURRENT_DATA_QUEUE_LENGTH
#define PROPERTY_CURRENT_DATA_QUEUE_LENGTH \
					"CurrentDataQueueLength"
#endif



class UNIX_FileSystemStatisticalData :
	public CIM_StatisticalData
{
public:

	UNIX_FileSystemStatisticalData();
	~UNIX_FileSystemStatisticalData();

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
	virtual Boolean getStartStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStartStatisticTime() const;
	virtual void setStartStatisticTime(CIMDateTime&);
	virtual Boolean getStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStatisticTime() const;
	virtual void setStatisticTime(CIMDateTime&);
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual void setSampleInterval(CIMDateTime&);
	virtual Boolean getRateIntervalEndTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalEndTime() const;
	virtual void setRateIntervalEndTime(CIMDateTime&);
	virtual Boolean getRateIntervalStartTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalStartTime() const;
	virtual void setRateIntervalStartTime(CIMDateTime&);
	virtual Boolean getElementType(CIMProperty&) const;
	virtual Uint16 getElementType() const;
	virtual void setElementType(Uint16&);
	virtual Boolean getOtherElementTypeDescription(CIMProperty&) const;
	virtual String getOtherElementTypeDescription() const;
	virtual void setOtherElementTypeDescription(String&);
	virtual Boolean getTotalIOs(CIMProperty&) const;
	virtual Uint64 getTotalIOs() const;
	virtual void setTotalIOs(Uint64&);
	virtual Boolean getTotalBytesTransferred(CIMProperty&) const;
	virtual Uint64 getTotalBytesTransferred() const;
	virtual void setTotalBytesTransferred(Uint64&);
	virtual Boolean getReadIOs(CIMProperty&) const;
	virtual Uint64 getReadIOs() const;
	virtual void setReadIOs(Uint64&);
	virtual Boolean getWriteIOs(CIMProperty&) const;
	virtual Uint64 getWriteIOs() const;
	virtual void setWriteIOs(Uint64&);
	virtual Boolean getOtherIOs(CIMProperty&) const;
	virtual Uint64 getOtherIOs() const;
	virtual void setOtherIOs(Uint64&);
	virtual Boolean getMetadataReadIOs(CIMProperty&) const;
	virtual Uint64 getMetadataReadIOs() const;
	virtual void setMetadataReadIOs(Uint64&);
	virtual Boolean getMetadataWriteIOs(CIMProperty&) const;
	virtual Uint64 getMetadataWriteIOs() const;
	virtual void setMetadataWriteIOs(Uint64&);
	virtual Boolean getTotalIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getTotalIOTimeCounter() const;
	virtual void setTotalIOTimeCounter(Uint64&);
	virtual Boolean getTotalIdleTimeCounter(CIMProperty&) const;
	virtual Uint64 getTotalIdleTimeCounter() const;
	virtual void setTotalIdleTimeCounter(Uint64&);
	virtual Boolean getReadIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getReadIOTimeCounter() const;
	virtual void setReadIOTimeCounter(Uint64&);
	virtual Boolean getBytesRead(CIMProperty&) const;
	virtual Uint64 getBytesRead() const;
	virtual void setBytesRead(Uint64&);
	virtual Boolean getWriteIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getWriteIOTimeCounter() const;
	virtual void setWriteIOTimeCounter(Uint64&);
	virtual Boolean getBytesWritten(CIMProperty&) const;
	virtual Uint64 getBytesWritten() const;
	virtual void setBytesWritten(Uint64&);
	virtual Boolean getMetadataBytesRead(CIMProperty&) const;
	virtual Uint64 getMetadataBytesRead() const;
	virtual void setMetadataBytesRead(Uint64&);
	virtual Boolean getMetadataBytesWritten(CIMProperty&) const;
	virtual Uint64 getMetadataBytesWritten() const;
	virtual void setMetadataBytesWritten(Uint64&);
	virtual Boolean getPercentDurableOpens(CIMProperty&) const;
	virtual Uint16 getPercentDurableOpens() const;
	virtual void setPercentDurableOpens(Uint16&);
	virtual Boolean getPercentResilientOpens(CIMProperty&) const;
	virtual Uint16 getPercentResilientOpens() const;
	virtual void setPercentResilientOpens(Uint16&);
	virtual Boolean getPercentPersistentOpens(CIMProperty&) const;
	virtual Uint16 getPercentPersistentOpens() const;
	virtual void setPercentPersistentOpens(Uint16&);
	virtual Boolean getAverageReadResponseTime(CIMProperty&) const;
	virtual Uint16 getAverageReadResponseTime() const;
	virtual void setAverageReadResponseTime(Uint16&);
	virtual Boolean getAverageWriteResponseTime(CIMProperty&) const;
	virtual Uint16 getAverageWriteResponseTime() const;
	virtual void setAverageWriteResponseTime(Uint16&);
	virtual Boolean getAverageRequestResponseTime(CIMProperty&) const;
	virtual Uint16 getAverageRequestResponseTime() const;
	virtual void setAverageRequestResponseTime(Uint16&);
	virtual Boolean getBytesReadPerSec(CIMProperty&) const;
	virtual Uint64 getBytesReadPerSec() const;
	virtual void setBytesReadPerSec(Uint64&);
	virtual Boolean getTotalBytesReceived(CIMProperty&) const;
	virtual Uint64 getTotalBytesReceived() const;
	virtual void setTotalBytesReceived(Uint64&);
	virtual Boolean getBytesReceivedPerSec(CIMProperty&) const;
	virtual Uint64 getBytesReceivedPerSec() const;
	virtual void setBytesReceivedPerSec(Uint64&);
	virtual Boolean getTotalBytesSent(CIMProperty&) const;
	virtual Uint64 getTotalBytesSent() const;
	virtual void setTotalBytesSent(Uint64&);
	virtual Boolean getBytesSentPerSec(CIMProperty&) const;
	virtual Uint64 getBytesSentPerSec() const;
	virtual void setBytesSentPerSec(Uint64&);
	virtual Boolean getBytesTranferredPerSec(CIMProperty&) const;
	virtual Uint64 getBytesTranferredPerSec() const;
	virtual void setBytesTranferredPerSec(Uint64&);
	virtual Boolean getBytesWrittenPerSec(CIMProperty&) const;
	virtual Uint64 getBytesWrittenPerSec() const;
	virtual void setBytesWrittenPerSec(Uint64&);
	virtual Boolean getFilesOpenedPerSec(CIMProperty&) const;
	virtual Uint64 getFilesOpenedPerSec() const;
	virtual void setFilesOpenedPerSec(Uint64&);
	virtual Boolean getTotalOpenFileCount(CIMProperty&) const;
	virtual Uint64 getTotalOpenFileCount() const;
	virtual void setTotalOpenFileCount(Uint64&);
	virtual Boolean getCurrentPendingRequests(CIMProperty&) const;
	virtual Uint64 getCurrentPendingRequests() const;
	virtual void setCurrentPendingRequests(Uint64&);
	virtual Boolean getReadRequestsProcessedPerSec(CIMProperty&) const;
	virtual Uint64 getReadRequestsProcessedPerSec() const;
	virtual void setReadRequestsProcessedPerSec(Uint64&);
	virtual Boolean getTotalRequestsReceived(CIMProperty&) const;
	virtual Uint64 getTotalRequestsReceived() const;
	virtual void setTotalRequestsReceived(Uint64&);
	virtual Boolean getRequestsReceivedPerSec(CIMProperty&) const;
	virtual Uint64 getRequestsReceivedPerSec() const;
	virtual void setRequestsReceivedPerSec(Uint64&);
	virtual Boolean getTotalDurableHandleReopenCount(CIMProperty&) const;
	virtual Uint64 getTotalDurableHandleReopenCount() const;
	virtual void setTotalDurableHandleReopenCount(Uint64&);
	virtual Boolean getTotalFailedDurableHandleReopenCount(CIMProperty&) const;
	virtual Uint64 getTotalFailedDurableHandleReopenCount() const;
	virtual void setTotalFailedDurableHandleReopenCount(Uint64&);
	virtual Boolean getTotalFailedResilientHandleReopenCount(CIMProperty&) const;
	virtual Uint64 getTotalFailedResilientHandleReopenCount() const;
	virtual void setTotalFailedResilientHandleReopenCount(Uint64&);
	virtual Boolean getCurrentOpenFileCount(CIMProperty&) const;
	virtual Uint64 getCurrentOpenFileCount() const;
	virtual void setCurrentOpenFileCount(Uint64&);
	virtual Boolean getTotalResilientHandleReopenCount(CIMProperty&) const;
	virtual Uint64 getTotalResilientHandleReopenCount() const;
	virtual void setTotalResilientHandleReopenCount(Uint64&);
	virtual Boolean getTotalPersistentHandleReopenCount(CIMProperty&) const;
	virtual Uint64 getTotalPersistentHandleReopenCount() const;
	virtual void setTotalPersistentHandleReopenCount(Uint64&);
	virtual Boolean getTotalFailedPersistentHandleReopenCount(CIMProperty&) const;
	virtual Uint64 getTotalFailedPersistentHandleReopenCount() const;
	virtual void setTotalFailedPersistentHandleReopenCount(Uint64&);
	virtual Boolean getTreeConnectCount(CIMProperty&) const;
	virtual Uint64 getTreeConnectCount() const;
	virtual void setTreeConnectCount(Uint64&);
	virtual Boolean getWriteRequestsProcessedPerSec(CIMProperty&) const;
	virtual Uint64 getWriteRequestsProcessedPerSec() const;
	virtual void setWriteRequestsProcessedPerSec(Uint64&);
	virtual Boolean getTotalMetadataRequestsReceived(CIMProperty&) const;
	virtual Uint64 getTotalMetadataRequestsReceived() const;
	virtual void setTotalMetadataRequestsReceived(Uint64&);
	virtual Boolean getMetadataRequestsReceivedPerSec(CIMProperty&) const;
	virtual Uint64 getMetadataRequestsReceivedPerSec() const;
	virtual void setMetadataRequestsReceivedPerSec(Uint64&);
	virtual Boolean getAverageTimePerDataRequest(CIMProperty&) const;
	virtual Uint64 getAverageTimePerDataRequest() const;
	virtual void setAverageTimePerDataRequest(Uint64&);
	virtual Boolean getAverageBytesPerDataRequest(CIMProperty&) const;
	virtual Uint64 getAverageBytesPerDataRequest() const;
	virtual void setAverageBytesPerDataRequest(Uint64&);
	virtual Boolean getAverageBytesPerReadRequest(CIMProperty&) const;
	virtual Uint64 getAverageBytesPerReadRequest() const;
	virtual void setAverageBytesPerReadRequest(Uint64&);
	virtual Boolean getAverageBytesPerWriteRequest(CIMProperty&) const;
	virtual Uint64 getAverageBytesPerWriteRequest() const;
	virtual void setAverageBytesPerWriteRequest(Uint64&);
	virtual Boolean getAverageReadQueueLength(CIMProperty&) const;
	virtual Uint64 getAverageReadQueueLength() const;
	virtual void setAverageReadQueueLength(Uint64&);
	virtual Boolean getAverageWriteQueueLength(CIMProperty&) const;
	virtual Uint64 getAverageWriteQueueLength() const;
	virtual void setAverageWriteQueueLength(Uint64&);
	virtual Boolean getAverageDataQueueLength(CIMProperty&) const;
	virtual Uint64 getAverageDataQueueLength() const;
	virtual void setAverageDataQueueLength(Uint64&);
	virtual Boolean getDataBytesPerSec(CIMProperty&) const;
	virtual Uint64 getDataBytesPerSec() const;
	virtual void setDataBytesPerSec(Uint64&);
	virtual Boolean getDataRequestsPerSec(CIMProperty&) const;
	virtual Uint64 getDataRequestsPerSec() const;
	virtual void setDataRequestsPerSec(Uint64&);
	virtual Boolean getCurrentDataQueueLength(CIMProperty&) const;
	virtual Uint64 getCurrentDataQueueLength() const;
	virtual void setCurrentDataQueueLength(Uint64&);

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _startStatisticTime;
	CIMDateTime _statisticTime;
	CIMDateTime _sampleInterval;
	CIMDateTime _rateIntervalEndTime;
	CIMDateTime _rateIntervalStartTime;
	Uint16 _elementType;
	String _otherElementTypeDescription;
	Uint64 _totalIOs;
	Uint64 _totalBytesTransferred;
	Uint64 _readIOs;
	Uint64 _writeIOs;
	Uint64 _otherIOs;
	Uint64 _metadataReadIOs;
	Uint64 _metadataWriteIOs;
	Uint64 _totalIOTimeCounter;
	Uint64 _totalIdleTimeCounter;
	Uint64 _readIOTimeCounter;
	Uint64 _bytesRead;
	Uint64 _writeIOTimeCounter;
	Uint64 _bytesWritten;
	Uint64 _metadataBytesRead;
	Uint64 _metadataBytesWritten;
	Uint16 _percentDurableOpens;
	Uint16 _percentResilientOpens;
	Uint16 _percentPersistentOpens;
	Uint16 _averageReadResponseTime;
	Uint16 _averageWriteResponseTime;
	Uint16 _averageRequestResponseTime;
	Uint64 _bytesReadPerSec;
	Uint64 _totalBytesReceived;
	Uint64 _bytesReceivedPerSec;
	Uint64 _totalBytesSent;
	Uint64 _bytesSentPerSec;
	Uint64 _bytesTranferredPerSec;
	Uint64 _bytesWrittenPerSec;
	Uint64 _filesOpenedPerSec;
	Uint64 _totalOpenFileCount;
	Uint64 _currentPendingRequests;
	Uint64 _readRequestsProcessedPerSec;
	Uint64 _totalRequestsReceived;
	Uint64 _requestsReceivedPerSec;
	Uint64 _totalDurableHandleReopenCount;
	Uint64 _totalFailedDurableHandleReopenCount;
	Uint64 _totalFailedResilientHandleReopenCount;
	Uint64 _currentOpenFileCount;
	Uint64 _totalResilientHandleReopenCount;
	Uint64 _totalPersistentHandleReopenCount;
	Uint64 _totalFailedPersistentHandleReopenCount;
	Uint64 _treeConnectCount;
	Uint64 _writeRequestsProcessedPerSec;
	Uint64 _totalMetadataRequestsReceived;
	Uint64 _metadataRequestsReceivedPerSec;
	Uint64 _averageTimePerDataRequest;
	Uint64 _averageBytesPerDataRequest;
	Uint64 _averageBytesPerReadRequest;
	Uint64 _averageBytesPerWriteRequest;
	Uint64 _averageReadQueueLength;
	Uint64 _averageWriteQueueLength;
	Uint64 _averageDataQueueLength;
	Uint64 _dataBytesPerSec;
	Uint64 _dataRequestsPerSec;
	Uint64 _currentDataQueueLength;

#	include "UNIX_FileSystemStatisticalDataPrivate.h"


};

#endif /* UNIX_FILESYSTEMSTATISTICALDATA */
