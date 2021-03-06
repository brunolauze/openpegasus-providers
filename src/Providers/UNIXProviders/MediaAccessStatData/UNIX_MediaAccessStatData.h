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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageDevices
*/


/* **** Description *** */
/*
Statistics related to reading and writing at a specific MediaAccessDevice, or for a specific StorageExtent. The same class is used to represent this data - whether for the MediaAccessDevice (independent of the StorageExtent), OR for the Extent (independent of its AccessDevice). The element whose statistics are described is associated using the relationship, ElementStatisticalData. Note that this class models the same properties as MediaAccessStatInfo. This class, however, uses the simplified key mechanisms of its superclass, StatisticalData.
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

			UNIX_MediaAccessStatData:
				ReadOperations UInt64
				UnrecoverableReadOperations UInt64
				WriteOperations UInt64
				UnrecoverableWriteOperations UInt64
				RecoveredReadOperations UInt64
				RecoveredWriteOperations UInt64
				RecoveredSeekOperations UInt64
				UnrecoverableSeekOperations UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_MediaAccessStatData:


*/

#ifndef __UNIX_MEDIAACCESSSTATDATA_H
#define __UNIX_MEDIAACCESSSTATDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_MediaAccessStatDataDeps.h"


#ifndef PROPERTY_READ_OPERATIONS
#define PROPERTY_READ_OPERATIONS \
					"ReadOperations"
#endif

#ifndef PROPERTY_UNRECOVERABLE_READ_OPERATIONS
#define PROPERTY_UNRECOVERABLE_READ_OPERATIONS \
					"UnrecoverableReadOperations"
#endif

#ifndef PROPERTY_WRITE_OPERATIONS
#define PROPERTY_WRITE_OPERATIONS \
					"WriteOperations"
#endif

#ifndef PROPERTY_UNRECOVERABLE_WRITE_OPERATIONS
#define PROPERTY_UNRECOVERABLE_WRITE_OPERATIONS \
					"UnrecoverableWriteOperations"
#endif

#ifndef PROPERTY_RECOVERED_READ_OPERATIONS
#define PROPERTY_RECOVERED_READ_OPERATIONS \
					"RecoveredReadOperations"
#endif

#ifndef PROPERTY_RECOVERED_WRITE_OPERATIONS
#define PROPERTY_RECOVERED_WRITE_OPERATIONS \
					"RecoveredWriteOperations"
#endif

#ifndef PROPERTY_RECOVERED_SEEK_OPERATIONS
#define PROPERTY_RECOVERED_SEEK_OPERATIONS \
					"RecoveredSeekOperations"
#endif

#ifndef PROPERTY_UNRECOVERABLE_SEEK_OPERATIONS
#define PROPERTY_UNRECOVERABLE_SEEK_OPERATIONS \
					"UnrecoverableSeekOperations"
#endif



class UNIX_MediaAccessStatData :
	public CIM_StatisticalData
{
public:

	UNIX_MediaAccessStatData();
	~UNIX_MediaAccessStatData();

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
	virtual Boolean getReadOperations(CIMProperty&) const;
	virtual Uint64 getReadOperations() const;
	virtual void setReadOperations(Uint64&);
	virtual Boolean getUnrecoverableReadOperations(CIMProperty&) const;
	virtual Uint64 getUnrecoverableReadOperations() const;
	virtual void setUnrecoverableReadOperations(Uint64&);
	virtual Boolean getWriteOperations(CIMProperty&) const;
	virtual Uint64 getWriteOperations() const;
	virtual void setWriteOperations(Uint64&);
	virtual Boolean getUnrecoverableWriteOperations(CIMProperty&) const;
	virtual Uint64 getUnrecoverableWriteOperations() const;
	virtual void setUnrecoverableWriteOperations(Uint64&);
	virtual Boolean getRecoveredReadOperations(CIMProperty&) const;
	virtual Uint64 getRecoveredReadOperations() const;
	virtual void setRecoveredReadOperations(Uint64&);
	virtual Boolean getRecoveredWriteOperations(CIMProperty&) const;
	virtual Uint64 getRecoveredWriteOperations() const;
	virtual void setRecoveredWriteOperations(Uint64&);
	virtual Boolean getRecoveredSeekOperations(CIMProperty&) const;
	virtual Uint64 getRecoveredSeekOperations() const;
	virtual void setRecoveredSeekOperations(Uint64&);
	virtual Boolean getUnrecoverableSeekOperations(CIMProperty&) const;
	virtual Uint64 getUnrecoverableSeekOperations() const;
	virtual void setUnrecoverableSeekOperations(Uint64&);

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
	Uint64 _readOperations;
	Uint64 _unrecoverableReadOperations;
	Uint64 _writeOperations;
	Uint64 _unrecoverableWriteOperations;
	Uint64 _recoveredReadOperations;
	Uint64 _recoveredWriteOperations;
	Uint64 _recoveredSeekOperations;
	Uint64 _unrecoverableSeekOperations;

#	include "UNIX_MediaAccessStatDataPrivate.h"


};

#endif /* UNIX_MEDIAACCESSSTATDATA */
