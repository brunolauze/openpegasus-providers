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


/* **** Version *** */
/*
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageStatistics
*/


/* **** Description *** */
/*
A subclass of StatisticalData which identifies individual statistics for an element of a block storage system. This class defines the metrics that MAY be kept for managed elements of the system.
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

			UNIX_BlockStorageStatisticalData:
				ElementType UInt16
				TotalIOs UInt64
				KBytesTransferred UInt64
				KBytesWritten UInt64
				IOTimeCounter UInt64
				ReadIOs UInt64
				ReadHitIOs UInt64
				ReadIOTimeCounter UInt64
				ReadHitIOTimeCounter UInt64
				KBytesRead UInt64
				WriteIOs UInt64
				WriteHitIOs UInt64
				WriteIOTimeCounter UInt64
				WriteHitIOTimeCounter UInt64
				IdleTimeCounter UInt64
				MaintOp UInt64
				MaintTimeCounter UInt64
				KBytesReadRate Real32
				KBytesTransferredRate Real32
				KBytesWrittenRate Real32
				MaintOpRate Real32
				RateElementType UInt16
				ReadHitIOsRate Real32
				ReadIOsRate Real32
				TotalIOsRate Real32
				WriteHitIOsRate Real32
				WriteIOsRate Real32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_BlockStorageStatisticalData:


*/

#ifndef __UNIX_BLOCKSTORAGESTATISTICALDATA_H
#define __UNIX_BLOCKSTORAGESTATISTICALDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_BlockStorageStatisticalDataDeps.h"


#ifndef PROPERTY_ELEMENT_TYPE
#define PROPERTY_ELEMENT_TYPE \
					"ElementType"
#endif

#ifndef PROPERTY_TOTAL_IOS
#define PROPERTY_TOTAL_IOS \
					"TotalIOs"
#endif

#ifndef PROPERTY_K_BYTES_TRANSFERRED
#define PROPERTY_K_BYTES_TRANSFERRED \
					"KBytesTransferred"
#endif

#ifndef PROPERTY_K_BYTES_WRITTEN
#define PROPERTY_K_BYTES_WRITTEN \
					"KBytesWritten"
#endif

#ifndef PROPERTY_IO_TIME_COUNTER
#define PROPERTY_IO_TIME_COUNTER \
					"IOTimeCounter"
#endif

#ifndef PROPERTY_READ_IOS
#define PROPERTY_READ_IOS \
					"ReadIOs"
#endif

#ifndef PROPERTY_READ_HIT_IOS
#define PROPERTY_READ_HIT_IOS \
					"ReadHitIOs"
#endif

#ifndef PROPERTY_READ_IO_TIME_COUNTER
#define PROPERTY_READ_IO_TIME_COUNTER \
					"ReadIOTimeCounter"
#endif

#ifndef PROPERTY_READ_HIT_IO_TIME_COUNTER
#define PROPERTY_READ_HIT_IO_TIME_COUNTER \
					"ReadHitIOTimeCounter"
#endif

#ifndef PROPERTY_K_BYTES_READ
#define PROPERTY_K_BYTES_READ \
					"KBytesRead"
#endif

#ifndef PROPERTY_WRITE_IOS
#define PROPERTY_WRITE_IOS \
					"WriteIOs"
#endif

#ifndef PROPERTY_WRITE_HIT_IOS
#define PROPERTY_WRITE_HIT_IOS \
					"WriteHitIOs"
#endif

#ifndef PROPERTY_WRITE_IO_TIME_COUNTER
#define PROPERTY_WRITE_IO_TIME_COUNTER \
					"WriteIOTimeCounter"
#endif

#ifndef PROPERTY_WRITE_HIT_IO_TIME_COUNTER
#define PROPERTY_WRITE_HIT_IO_TIME_COUNTER \
					"WriteHitIOTimeCounter"
#endif

#ifndef PROPERTY_IDLE_TIME_COUNTER
#define PROPERTY_IDLE_TIME_COUNTER \
					"IdleTimeCounter"
#endif

#ifndef PROPERTY_MAINT_OP
#define PROPERTY_MAINT_OP \
					"MaintOp"
#endif

#ifndef PROPERTY_MAINT_TIME_COUNTER
#define PROPERTY_MAINT_TIME_COUNTER \
					"MaintTimeCounter"
#endif

#ifndef PROPERTY_K_BYTES_READ_RATE
#define PROPERTY_K_BYTES_READ_RATE \
					"KBytesReadRate"
#endif

#ifndef PROPERTY_K_BYTES_TRANSFERRED_RATE
#define PROPERTY_K_BYTES_TRANSFERRED_RATE \
					"KBytesTransferredRate"
#endif

#ifndef PROPERTY_K_BYTES_WRITTEN_RATE
#define PROPERTY_K_BYTES_WRITTEN_RATE \
					"KBytesWrittenRate"
#endif

#ifndef PROPERTY_MAINT_OP_RATE
#define PROPERTY_MAINT_OP_RATE \
					"MaintOpRate"
#endif

#ifndef PROPERTY_RATE_ELEMENT_TYPE
#define PROPERTY_RATE_ELEMENT_TYPE \
					"RateElementType"
#endif

#ifndef PROPERTY_READ_HIT_IOS_RATE
#define PROPERTY_READ_HIT_IOS_RATE \
					"ReadHitIOsRate"
#endif

#ifndef PROPERTY_READ_IOS_RATE
#define PROPERTY_READ_IOS_RATE \
					"ReadIOsRate"
#endif

#ifndef PROPERTY_TOTAL_IOS_RATE
#define PROPERTY_TOTAL_IOS_RATE \
					"TotalIOsRate"
#endif

#ifndef PROPERTY_WRITE_HIT_IOS_RATE
#define PROPERTY_WRITE_HIT_IOS_RATE \
					"WriteHitIOsRate"
#endif

#ifndef PROPERTY_WRITE_IOS_RATE
#define PROPERTY_WRITE_IOS_RATE \
					"WriteIOsRate"
#endif



class UNIX_BlockStorageStatisticalData :
	public CIM_StatisticalData
{
public:

	UNIX_BlockStorageStatisticalData();
	~UNIX_BlockStorageStatisticalData();

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
	virtual Boolean getTotalIOs(CIMProperty&) const;
	virtual Uint64 getTotalIOs() const;
	virtual void setTotalIOs(Uint64&);
	virtual Boolean getKBytesTransferred(CIMProperty&) const;
	virtual Uint64 getKBytesTransferred() const;
	virtual void setKBytesTransferred(Uint64&);
	virtual Boolean getKBytesWritten(CIMProperty&) const;
	virtual Uint64 getKBytesWritten() const;
	virtual void setKBytesWritten(Uint64&);
	virtual Boolean getIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getIOTimeCounter() const;
	virtual void setIOTimeCounter(Uint64&);
	virtual Boolean getReadIOs(CIMProperty&) const;
	virtual Uint64 getReadIOs() const;
	virtual void setReadIOs(Uint64&);
	virtual Boolean getReadHitIOs(CIMProperty&) const;
	virtual Uint64 getReadHitIOs() const;
	virtual void setReadHitIOs(Uint64&);
	virtual Boolean getReadIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getReadIOTimeCounter() const;
	virtual void setReadIOTimeCounter(Uint64&);
	virtual Boolean getReadHitIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getReadHitIOTimeCounter() const;
	virtual void setReadHitIOTimeCounter(Uint64&);
	virtual Boolean getKBytesRead(CIMProperty&) const;
	virtual Uint64 getKBytesRead() const;
	virtual void setKBytesRead(Uint64&);
	virtual Boolean getWriteIOs(CIMProperty&) const;
	virtual Uint64 getWriteIOs() const;
	virtual void setWriteIOs(Uint64&);
	virtual Boolean getWriteHitIOs(CIMProperty&) const;
	virtual Uint64 getWriteHitIOs() const;
	virtual void setWriteHitIOs(Uint64&);
	virtual Boolean getWriteIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getWriteIOTimeCounter() const;
	virtual void setWriteIOTimeCounter(Uint64&);
	virtual Boolean getWriteHitIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getWriteHitIOTimeCounter() const;
	virtual void setWriteHitIOTimeCounter(Uint64&);
	virtual Boolean getIdleTimeCounter(CIMProperty&) const;
	virtual Uint64 getIdleTimeCounter() const;
	virtual void setIdleTimeCounter(Uint64&);
	virtual Boolean getMaintOp(CIMProperty&) const;
	virtual Uint64 getMaintOp() const;
	virtual void setMaintOp(Uint64&);
	virtual Boolean getMaintTimeCounter(CIMProperty&) const;
	virtual Uint64 getMaintTimeCounter() const;
	virtual void setMaintTimeCounter(Uint64&);
	virtual Boolean getKBytesReadRate(CIMProperty&) const;
	virtual Real32 getKBytesReadRate() const;
	virtual void setKBytesReadRate(Real32&);
	virtual Boolean getKBytesTransferredRate(CIMProperty&) const;
	virtual Real32 getKBytesTransferredRate() const;
	virtual void setKBytesTransferredRate(Real32&);
	virtual Boolean getKBytesWrittenRate(CIMProperty&) const;
	virtual Real32 getKBytesWrittenRate() const;
	virtual void setKBytesWrittenRate(Real32&);
	virtual Boolean getMaintOpRate(CIMProperty&) const;
	virtual Real32 getMaintOpRate() const;
	virtual void setMaintOpRate(Real32&);
	virtual Boolean getRateElementType(CIMProperty&) const;
	virtual Uint16 getRateElementType() const;
	virtual void setRateElementType(Uint16&);
	virtual Boolean getReadHitIOsRate(CIMProperty&) const;
	virtual Real32 getReadHitIOsRate() const;
	virtual void setReadHitIOsRate(Real32&);
	virtual Boolean getReadIOsRate(CIMProperty&) const;
	virtual Real32 getReadIOsRate() const;
	virtual void setReadIOsRate(Real32&);
	virtual Boolean getTotalIOsRate(CIMProperty&) const;
	virtual Real32 getTotalIOsRate() const;
	virtual void setTotalIOsRate(Real32&);
	virtual Boolean getWriteHitIOsRate(CIMProperty&) const;
	virtual Real32 getWriteHitIOsRate() const;
	virtual void setWriteHitIOsRate(Real32&);
	virtual Boolean getWriteIOsRate(CIMProperty&) const;
	virtual Real32 getWriteIOsRate() const;
	virtual void setWriteIOsRate(Real32&);

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
	Uint64 _totalIOs;
	Uint64 _kBytesTransferred;
	Uint64 _kBytesWritten;
	Uint64 _iOTimeCounter;
	Uint64 _readIOs;
	Uint64 _readHitIOs;
	Uint64 _readIOTimeCounter;
	Uint64 _readHitIOTimeCounter;
	Uint64 _kBytesRead;
	Uint64 _writeIOs;
	Uint64 _writeHitIOs;
	Uint64 _writeIOTimeCounter;
	Uint64 _writeHitIOTimeCounter;
	Uint64 _idleTimeCounter;
	Uint64 _maintOp;
	Uint64 _maintTimeCounter;
	Real32 _kBytesReadRate;
	Real32 _kBytesTransferredRate;
	Real32 _kBytesWrittenRate;
	Real32 _maintOpRate;
	Uint16 _rateElementType;
	Real32 _readHitIOsRate;
	Real32 _readIOsRate;
	Real32 _totalIOsRate;
	Real32 _writeHitIOsRate;
	Real32 _writeIOsRate;

#	include "UNIX_BlockStorageStatisticalDataPrivate.h"


};

#endif /* UNIX_BLOCKSTORAGESTATISTICALDATA */
