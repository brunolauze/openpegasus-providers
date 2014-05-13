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
Instances of this class define a list of supported or desired properties of BlockStatisticalData instances. In the case where a BlockStatisticsManifest instance is a member of a BlockStatisticsManifestCollection used in a BlockStatisticsService.GetStatisticsCollection request, for each of the boolean "include" properties set to true in that BlockStatisticsManifest, the corresponding BlockStatisticalData property will be included, if available, in the statistics returned for BlockStatisticalData instances whose ElementType matches the ElementType of the BlockStatisticsManifest.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_BlockStatisticsManifest:
				ElementType UInt16
				IncludeStartStatisticTime Boolean
				IncludeStatisticTime Boolean
				IncludeTotalIOs Boolean
				IncludeKBytesTransferred Boolean
				IncludeIOTimeCounter Boolean
				IncludeReadIOs Boolean
				IncludeReadHitIOs Boolean
				IncludeReadIOTimeCounter Boolean
				IncludeReadHitIOTimeCounter Boolean
				IncludeKBytesRead Boolean
				IncludeWriteIOs Boolean
				IncludeWriteHitIOs Boolean
				IncludeWriteIOTimeCounter Boolean
				IncludeWriteHitIOTimeCounter Boolean
				IncludeKBytesWritten Boolean
				IncludeIdleTimeCounter Boolean
				IncludeMaintOp Boolean
				IncludeMaintTimeCounter Boolean
				CSVSequence String
				CSVRateSequence String
				IncludeKBytesReadRate Boolean
				IncludeKBytesTransferredRate Boolean
				IncludeKBytesWrittenRate Boolean
				IncludeMaintOpRate Boolean
				IncludeRateIntervalEndTime Boolean
				IncludeRateIntervalStartTime Boolean
				IncludeReadHitIOsRate Boolean
				IncludeReadIOsRate Boolean
				IncludeTotalIOsRate Boolean
				IncludeWriteHitIOsRate Boolean
				IncludeWriteIOsRate Boolean
				RateElementType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_BlockStatisticsManifest:


*/

#ifndef __UNIX_BLOCKSTATISTICSMANIFEST_H
#define __UNIX_BLOCKSTATISTICSMANIFEST_H


#include "CIM_ManagedElement.h"

#include "UNIX_BlockStatisticsManifestDeps.h"


#ifndef PROPERTY_ELEMENT_TYPE
#define PROPERTY_ELEMENT_TYPE \
					"ElementType"
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

#ifndef PROPERTY_INCLUDE_K_BYTES_TRANSFERRED
#define PROPERTY_INCLUDE_K_BYTES_TRANSFERRED \
					"IncludeKBytesTransferred"
#endif

#ifndef PROPERTY_INCLUDE_IO_TIME_COUNTER
#define PROPERTY_INCLUDE_IO_TIME_COUNTER \
					"IncludeIOTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_READ_IOS
#define PROPERTY_INCLUDE_READ_IOS \
					"IncludeReadIOs"
#endif

#ifndef PROPERTY_INCLUDE_READ_HIT_IOS
#define PROPERTY_INCLUDE_READ_HIT_IOS \
					"IncludeReadHitIOs"
#endif

#ifndef PROPERTY_INCLUDE_READ_IO_TIME_COUNTER
#define PROPERTY_INCLUDE_READ_IO_TIME_COUNTER \
					"IncludeReadIOTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_READ_HIT_IO_TIME_COUNTER
#define PROPERTY_INCLUDE_READ_HIT_IO_TIME_COUNTER \
					"IncludeReadHitIOTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_K_BYTES_READ
#define PROPERTY_INCLUDE_K_BYTES_READ \
					"IncludeKBytesRead"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_IOS
#define PROPERTY_INCLUDE_WRITE_IOS \
					"IncludeWriteIOs"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_HIT_IOS
#define PROPERTY_INCLUDE_WRITE_HIT_IOS \
					"IncludeWriteHitIOs"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_IO_TIME_COUNTER
#define PROPERTY_INCLUDE_WRITE_IO_TIME_COUNTER \
					"IncludeWriteIOTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_HIT_IO_TIME_COUNTER
#define PROPERTY_INCLUDE_WRITE_HIT_IO_TIME_COUNTER \
					"IncludeWriteHitIOTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_K_BYTES_WRITTEN
#define PROPERTY_INCLUDE_K_BYTES_WRITTEN \
					"IncludeKBytesWritten"
#endif

#ifndef PROPERTY_INCLUDE_IDLE_TIME_COUNTER
#define PROPERTY_INCLUDE_IDLE_TIME_COUNTER \
					"IncludeIdleTimeCounter"
#endif

#ifndef PROPERTY_INCLUDE_MAINT_OP
#define PROPERTY_INCLUDE_MAINT_OP \
					"IncludeMaintOp"
#endif

#ifndef PROPERTY_INCLUDE_MAINT_TIME_COUNTER
#define PROPERTY_INCLUDE_MAINT_TIME_COUNTER \
					"IncludeMaintTimeCounter"
#endif

#ifndef PROPERTY_CS_V_SEQUENCE
#define PROPERTY_CS_V_SEQUENCE \
					"CSVSequence"
#endif

#ifndef PROPERTY_CS_V_RATE_SEQUENCE
#define PROPERTY_CS_V_RATE_SEQUENCE \
					"CSVRateSequence"
#endif

#ifndef PROPERTY_INCLUDE_K_BYTES_READ_RATE
#define PROPERTY_INCLUDE_K_BYTES_READ_RATE \
					"IncludeKBytesReadRate"
#endif

#ifndef PROPERTY_INCLUDE_K_BYTES_TRANSFERRED_RATE
#define PROPERTY_INCLUDE_K_BYTES_TRANSFERRED_RATE \
					"IncludeKBytesTransferredRate"
#endif

#ifndef PROPERTY_INCLUDE_K_BYTES_WRITTEN_RATE
#define PROPERTY_INCLUDE_K_BYTES_WRITTEN_RATE \
					"IncludeKBytesWrittenRate"
#endif

#ifndef PROPERTY_INCLUDE_MAINT_OP_RATE
#define PROPERTY_INCLUDE_MAINT_OP_RATE \
					"IncludeMaintOpRate"
#endif

#ifndef PROPERTY_INCLUDE_RATE_INTERVAL_END_TIME
#define PROPERTY_INCLUDE_RATE_INTERVAL_END_TIME \
					"IncludeRateIntervalEndTime"
#endif

#ifndef PROPERTY_INCLUDE_RATE_INTERVAL_START_TIME
#define PROPERTY_INCLUDE_RATE_INTERVAL_START_TIME \
					"IncludeRateIntervalStartTime"
#endif

#ifndef PROPERTY_INCLUDE_READ_HIT_IOS_RATE
#define PROPERTY_INCLUDE_READ_HIT_IOS_RATE \
					"IncludeReadHitIOsRate"
#endif

#ifndef PROPERTY_INCLUDE_READ_IOS_RATE
#define PROPERTY_INCLUDE_READ_IOS_RATE \
					"IncludeReadIOsRate"
#endif

#ifndef PROPERTY_INCLUDE_TOTAL_IOS_RATE
#define PROPERTY_INCLUDE_TOTAL_IOS_RATE \
					"IncludeTotalIOsRate"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_HIT_IOS_RATE
#define PROPERTY_INCLUDE_WRITE_HIT_IOS_RATE \
					"IncludeWriteHitIOsRate"
#endif

#ifndef PROPERTY_INCLUDE_WRITE_IOS_RATE
#define PROPERTY_INCLUDE_WRITE_IOS_RATE \
					"IncludeWriteIOsRate"
#endif

#ifndef PROPERTY_RATE_ELEMENT_TYPE
#define PROPERTY_RATE_ELEMENT_TYPE \
					"RateElementType"
#endif



class UNIX_BlockStatisticsManifest :
	public CIM_ManagedElement
{
public:

	UNIX_BlockStatisticsManifest();
	~UNIX_BlockStatisticsManifest();

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
	virtual Boolean getIncludeStartStatisticTime(CIMProperty&) const;
	virtual Boolean getIncludeStartStatisticTime() const;
	virtual void setIncludeStartStatisticTime(Boolean&);
	virtual Boolean getIncludeStatisticTime(CIMProperty&) const;
	virtual Boolean getIncludeStatisticTime() const;
	virtual void setIncludeStatisticTime(Boolean&);
	virtual Boolean getIncludeTotalIOs(CIMProperty&) const;
	virtual Boolean getIncludeTotalIOs() const;
	virtual void setIncludeTotalIOs(Boolean&);
	virtual Boolean getIncludeKBytesTransferred(CIMProperty&) const;
	virtual Boolean getIncludeKBytesTransferred() const;
	virtual void setIncludeKBytesTransferred(Boolean&);
	virtual Boolean getIncludeIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeIOTimeCounter() const;
	virtual void setIncludeIOTimeCounter(Boolean&);
	virtual Boolean getIncludeReadIOs(CIMProperty&) const;
	virtual Boolean getIncludeReadIOs() const;
	virtual void setIncludeReadIOs(Boolean&);
	virtual Boolean getIncludeReadHitIOs(CIMProperty&) const;
	virtual Boolean getIncludeReadHitIOs() const;
	virtual void setIncludeReadHitIOs(Boolean&);
	virtual Boolean getIncludeReadIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeReadIOTimeCounter() const;
	virtual void setIncludeReadIOTimeCounter(Boolean&);
	virtual Boolean getIncludeReadHitIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeReadHitIOTimeCounter() const;
	virtual void setIncludeReadHitIOTimeCounter(Boolean&);
	virtual Boolean getIncludeKBytesRead(CIMProperty&) const;
	virtual Boolean getIncludeKBytesRead() const;
	virtual void setIncludeKBytesRead(Boolean&);
	virtual Boolean getIncludeWriteIOs(CIMProperty&) const;
	virtual Boolean getIncludeWriteIOs() const;
	virtual void setIncludeWriteIOs(Boolean&);
	virtual Boolean getIncludeWriteHitIOs(CIMProperty&) const;
	virtual Boolean getIncludeWriteHitIOs() const;
	virtual void setIncludeWriteHitIOs(Boolean&);
	virtual Boolean getIncludeWriteIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeWriteIOTimeCounter() const;
	virtual void setIncludeWriteIOTimeCounter(Boolean&);
	virtual Boolean getIncludeWriteHitIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeWriteHitIOTimeCounter() const;
	virtual void setIncludeWriteHitIOTimeCounter(Boolean&);
	virtual Boolean getIncludeKBytesWritten(CIMProperty&) const;
	virtual Boolean getIncludeKBytesWritten() const;
	virtual void setIncludeKBytesWritten(Boolean&);
	virtual Boolean getIncludeIdleTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeIdleTimeCounter() const;
	virtual void setIncludeIdleTimeCounter(Boolean&);
	virtual Boolean getIncludeMaintOp(CIMProperty&) const;
	virtual Boolean getIncludeMaintOp() const;
	virtual void setIncludeMaintOp(Boolean&);
	virtual Boolean getIncludeMaintTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeMaintTimeCounter() const;
	virtual void setIncludeMaintTimeCounter(Boolean&);
	virtual Boolean getCSVSequence(CIMProperty&) const;
	virtual Array<String> getCSVSequence() const;
	virtual void setCSVSequence(Array<String>&);
	virtual Boolean getCSVRateSequence(CIMProperty&) const;
	virtual Array<String> getCSVRateSequence() const;
	virtual void setCSVRateSequence(Array<String>&);
	virtual Boolean getIncludeKBytesReadRate(CIMProperty&) const;
	virtual Boolean getIncludeKBytesReadRate() const;
	virtual void setIncludeKBytesReadRate(Boolean&);
	virtual Boolean getIncludeKBytesTransferredRate(CIMProperty&) const;
	virtual Boolean getIncludeKBytesTransferredRate() const;
	virtual void setIncludeKBytesTransferredRate(Boolean&);
	virtual Boolean getIncludeKBytesWrittenRate(CIMProperty&) const;
	virtual Boolean getIncludeKBytesWrittenRate() const;
	virtual void setIncludeKBytesWrittenRate(Boolean&);
	virtual Boolean getIncludeMaintOpRate(CIMProperty&) const;
	virtual Boolean getIncludeMaintOpRate() const;
	virtual void setIncludeMaintOpRate(Boolean&);
	virtual Boolean getIncludeRateIntervalEndTime(CIMProperty&) const;
	virtual Boolean getIncludeRateIntervalEndTime() const;
	virtual void setIncludeRateIntervalEndTime(Boolean&);
	virtual Boolean getIncludeRateIntervalStartTime(CIMProperty&) const;
	virtual Boolean getIncludeRateIntervalStartTime() const;
	virtual void setIncludeRateIntervalStartTime(Boolean&);
	virtual Boolean getIncludeReadHitIOsRate(CIMProperty&) const;
	virtual Boolean getIncludeReadHitIOsRate() const;
	virtual void setIncludeReadHitIOsRate(Boolean&);
	virtual Boolean getIncludeReadIOsRate(CIMProperty&) const;
	virtual Boolean getIncludeReadIOsRate() const;
	virtual void setIncludeReadIOsRate(Boolean&);
	virtual Boolean getIncludeTotalIOsRate(CIMProperty&) const;
	virtual Boolean getIncludeTotalIOsRate() const;
	virtual void setIncludeTotalIOsRate(Boolean&);
	virtual Boolean getIncludeWriteHitIOsRate(CIMProperty&) const;
	virtual Boolean getIncludeWriteHitIOsRate() const;
	virtual void setIncludeWriteHitIOsRate(Boolean&);
	virtual Boolean getIncludeWriteIOsRate(CIMProperty&) const;
	virtual Boolean getIncludeWriteIOsRate() const;
	virtual void setIncludeWriteIOsRate(Boolean&);
	virtual Boolean getRateElementType(CIMProperty&) const;
	virtual Uint16 getRateElementType() const;
	virtual void setRateElementType(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _elementType;
	Boolean _includeStartStatisticTime;
	Boolean _includeStatisticTime;
	Boolean _includeTotalIOs;
	Boolean _includeKBytesTransferred;
	Boolean _includeIOTimeCounter;
	Boolean _includeReadIOs;
	Boolean _includeReadHitIOs;
	Boolean _includeReadIOTimeCounter;
	Boolean _includeReadHitIOTimeCounter;
	Boolean _includeKBytesRead;
	Boolean _includeWriteIOs;
	Boolean _includeWriteHitIOs;
	Boolean _includeWriteIOTimeCounter;
	Boolean _includeWriteHitIOTimeCounter;
	Boolean _includeKBytesWritten;
	Boolean _includeIdleTimeCounter;
	Boolean _includeMaintOp;
	Boolean _includeMaintTimeCounter;
	Array<String> _cSVSequence;
	Array<String> _cSVRateSequence;
	Boolean _includeKBytesReadRate;
	Boolean _includeKBytesTransferredRate;
	Boolean _includeKBytesWrittenRate;
	Boolean _includeMaintOpRate;
	Boolean _includeRateIntervalEndTime;
	Boolean _includeRateIntervalStartTime;
	Boolean _includeReadHitIOsRate;
	Boolean _includeReadIOsRate;
	Boolean _includeTotalIOsRate;
	Boolean _includeWriteHitIOsRate;
	Boolean _includeWriteIOsRate;
	Uint16 _rateElementType;

#	include "UNIX_BlockStatisticsManifestPrivate.h"


};

#endif /* UNIX_BLOCKSTATISTICSMANIFEST */
