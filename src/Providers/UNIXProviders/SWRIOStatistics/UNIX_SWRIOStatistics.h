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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::SWResources
*/


/* **** Description *** */
/*
The metrics of SWRIOStatistics describe the transfer behavior of the software resource in one particular direction (input or the output). The transfer is basically the amount of data input to or output from the software resource during a sample interval in terms of technical units (e.g., kB) or domain-specific units (e.g., the number of items (e.g., the number of messages if the software resource is of the type 'queue'). 
The operational parameters regarding the allocation limits are surfaced also. Further details can be found in the description of the base class SWRStatistics. 
The metrics found in this statistics are raw values that describe the allocation behavior of the software resource as simple as possible. Thus, the metric values can be used most flexibly (e.g., cumulative, averaged, etc.). The drawback of the flexibility is that the likelyhood of required calculations - subsequent to retrieval of the values - increases in order to result in rates or statistical data needed for monitoring and reporting.
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

			CIM_SWRStatistics:
				LowerLimit UInt32
				UpperLimit UInt32
				Unit String
				OtherLowerLimit UInt32
				OtherUpperLimit UInt32
				OtherUnit String
				Characteristic UInt16
				StatisticsType UInt16
				FirstError UInt16
				FirstErrorTimeStamp DateTime
				LastError UInt16
				LastErrorTimeStamp DateTime
				ErrorCount UInt32

			UNIX_SWRIOStatistics:
				TransferredQuantity UInt32
				OtherTransferredQuantity UInt32
				Transfers UInt32
				AverageTransferTime DateTime
				SuccessfulTransfers UInt32
				SuccessfulQuantity UInt32
				CountOfActiveTransfers UInt32
				LastActivity DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_SWRStatistics:

			UNIX_SWRIOStatistics:


*/

#ifndef __UNIX_SWRIOSTATISTICS_H
#define __UNIX_SWRIOSTATISTICS_H


#include "CIM_SWRStatistics.h"

#include "UNIX_SWRIOStatisticsDeps.h"


#ifndef PROPERTY_TRANSFERRED_QUANTITY
#define PROPERTY_TRANSFERRED_QUANTITY \
					"TransferredQuantity"
#endif

#ifndef PROPERTY_OTHER_TRANSFERRED_QUANTITY
#define PROPERTY_OTHER_TRANSFERRED_QUANTITY \
					"OtherTransferredQuantity"
#endif

#ifndef PROPERTY_TRANSFERS
#define PROPERTY_TRANSFERS \
					"Transfers"
#endif

#ifndef PROPERTY_AVERAGE_TRANSFER_TIME
#define PROPERTY_AVERAGE_TRANSFER_TIME \
					"AverageTransferTime"
#endif

#ifndef PROPERTY_SUCCESSFUL_TRANSFERS
#define PROPERTY_SUCCESSFUL_TRANSFERS \
					"SuccessfulTransfers"
#endif

#ifndef PROPERTY_SUCCESSFUL_QUANTITY
#define PROPERTY_SUCCESSFUL_QUANTITY \
					"SuccessfulQuantity"
#endif

#ifndef PROPERTY_COUNT_OF_ACTIVE_TRANSFERS
#define PROPERTY_COUNT_OF_ACTIVE_TRANSFERS \
					"CountOfActiveTransfers"
#endif

#ifndef PROPERTY_LAST_ACTIVITY
#define PROPERTY_LAST_ACTIVITY \
					"LastActivity"
#endif



class UNIX_SWRIOStatistics :
	public CIM_SWRStatistics
{
public:

	UNIX_SWRIOStatistics();
	~UNIX_SWRIOStatistics();

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
	virtual Boolean getLowerLimit(CIMProperty&) const;
	virtual Uint32 getLowerLimit() const;
	virtual void setLowerLimit(Uint32&);
	virtual Boolean getUpperLimit(CIMProperty&) const;
	virtual Uint32 getUpperLimit() const;
	virtual void setUpperLimit(Uint32&);
	virtual Boolean getUnit(CIMProperty&) const;
	virtual String getUnit() const;
	virtual void setUnit(String&);
	virtual Boolean getOtherLowerLimit(CIMProperty&) const;
	virtual Uint32 getOtherLowerLimit() const;
	virtual void setOtherLowerLimit(Uint32&);
	virtual Boolean getOtherUpperLimit(CIMProperty&) const;
	virtual Uint32 getOtherUpperLimit() const;
	virtual void setOtherUpperLimit(Uint32&);
	virtual Boolean getOtherUnit(CIMProperty&) const;
	virtual String getOtherUnit() const;
	virtual void setOtherUnit(String&);
	virtual Boolean getCharacteristic(CIMProperty&) const;
	virtual Uint16 getCharacteristic() const;
	virtual void setCharacteristic(Uint16&);
	virtual Boolean getStatisticsType(CIMProperty&) const;
	virtual Uint16 getStatisticsType() const;
	virtual void setStatisticsType(Uint16&);
	virtual Boolean getFirstError(CIMProperty&) const;
	virtual Uint16 getFirstError() const;
	virtual void setFirstError(Uint16&);
	virtual Boolean getFirstErrorTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getFirstErrorTimeStamp() const;
	virtual void setFirstErrorTimeStamp(CIMDateTime&);
	virtual Boolean getLastError(CIMProperty&) const;
	virtual Uint16 getLastError() const;
	virtual void setLastError(Uint16&);
	virtual Boolean getLastErrorTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getLastErrorTimeStamp() const;
	virtual void setLastErrorTimeStamp(CIMDateTime&);
	virtual Boolean getErrorCount(CIMProperty&) const;
	virtual Uint32 getErrorCount() const;
	virtual void setErrorCount(Uint32&);
	virtual Boolean getTransferredQuantity(CIMProperty&) const;
	virtual Uint32 getTransferredQuantity() const;
	virtual void setTransferredQuantity(Uint32&);
	virtual Boolean getOtherTransferredQuantity(CIMProperty&) const;
	virtual Uint32 getOtherTransferredQuantity() const;
	virtual void setOtherTransferredQuantity(Uint32&);
	virtual Boolean getTransfers(CIMProperty&) const;
	virtual Uint32 getTransfers() const;
	virtual void setTransfers(Uint32&);
	virtual Boolean getAverageTransferTime(CIMProperty&) const;
	virtual CIMDateTime getAverageTransferTime() const;
	virtual void setAverageTransferTime(CIMDateTime&);
	virtual Boolean getSuccessfulTransfers(CIMProperty&) const;
	virtual Uint32 getSuccessfulTransfers() const;
	virtual void setSuccessfulTransfers(Uint32&);
	virtual Boolean getSuccessfulQuantity(CIMProperty&) const;
	virtual Uint32 getSuccessfulQuantity() const;
	virtual void setSuccessfulQuantity(Uint32&);
	virtual Boolean getCountOfActiveTransfers(CIMProperty&) const;
	virtual Uint32 getCountOfActiveTransfers() const;
	virtual void setCountOfActiveTransfers(Uint32&);
	virtual Boolean getLastActivity(CIMProperty&) const;
	virtual CIMDateTime getLastActivity() const;
	virtual void setLastActivity(CIMDateTime&);

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
	Uint32 _lowerLimit;
	Uint32 _upperLimit;
	String _unit;
	Uint32 _otherLowerLimit;
	Uint32 _otherUpperLimit;
	String _otherUnit;
	Uint16 _characteristic;
	Uint16 _statisticsType;
	Uint16 _firstError;
	CIMDateTime _firstErrorTimeStamp;
	Uint16 _lastError;
	CIMDateTime _lastErrorTimeStamp;
	Uint32 _errorCount;
	Uint32 _transferredQuantity;
	Uint32 _otherTransferredQuantity;
	Uint32 _transfers;
	CIMDateTime _averageTransferTime;
	Uint32 _successfulTransfers;
	Uint32 _successfulQuantity;
	Uint32 _countOfActiveTransfers;
	CIMDateTime _lastActivity;

#	include "UNIX_SWRIOStatisticsPrivate.h"


};

#endif /* UNIX_SWRIOSTATISTICS */
