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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
CIM_CIMOMStatisticalData provides statistical data about the performance of the CIM Object Manager. Each object of this class provides elapsed time and size data for a particular type of CIM operation. All operations of that type, regardless of the CIM operations protocol being used, are accumulated in one object and covers the CIM operations issued by all clients of the Object Manager scoping the instance. Batched CIM operations are accumulated into a separate operation type for "Batched". The counters in this class SHOULD be implemented such that they always increment and naturally wrap around when their numerical limit is exceeded. A client that calculates the difference of two snapshots of a counter at the beginning and end of a measurement interval should get the correct result, even if there was a wrap-around in between obtaining the two snapshots. (Two or more wrap arounds will result in wrong data being calculated.) The gathering of the data can be controlled through the property, CIM_ObjectManager.GatherStatisticalData. The time interval to which the statistical data applies, ends at the current time and therefore includes the most current CIM operations. The interval starts when the statistical data gathering was last turned on for the Object Manager.
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

			UNIX_CIMOMStatisticalData:
				OperationType UInt16
				OtherOperationType String
				NumberOfOperations UInt64
				CimomElapsedTime DateTime
				ProviderElapsedTime DateTime
				RequestSize UInt64
				ResponseSize UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_CIMOMStatisticalData:


*/

#ifndef __UNIX_CIMOMSTATISTICALDATA_H
#define __UNIX_CIMOMSTATISTICALDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_CIMOMStatisticalDataDeps.h"


#ifndef PROPERTY_OPERATION_TYPE
#define PROPERTY_OPERATION_TYPE \
					"OperationType"
#endif

#ifndef PROPERTY_OTHER_OPERATION_TYPE
#define PROPERTY_OTHER_OPERATION_TYPE \
					"OtherOperationType"
#endif

#ifndef PROPERTY_NUMBER_OF_OPERATIONS
#define PROPERTY_NUMBER_OF_OPERATIONS \
					"NumberOfOperations"
#endif

#ifndef PROPERTY_CIMOM_ELAPSED_TIME
#define PROPERTY_CIMOM_ELAPSED_TIME \
					"CimomElapsedTime"
#endif

#ifndef PROPERTY_PROVIDER_ELAPSED_TIME
#define PROPERTY_PROVIDER_ELAPSED_TIME \
					"ProviderElapsedTime"
#endif

#ifndef PROPERTY_REQUEST_SIZE
#define PROPERTY_REQUEST_SIZE \
					"RequestSize"
#endif

#ifndef PROPERTY_RESPONSE_SIZE
#define PROPERTY_RESPONSE_SIZE \
					"ResponseSize"
#endif



class UNIX_CIMOMStatisticalData :
	public CIM_StatisticalData
{
public:

	UNIX_CIMOMStatisticalData();
	~UNIX_CIMOMStatisticalData();

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
	virtual Boolean getOperationType(CIMProperty&) const;
	virtual Uint16 getOperationType() const;
	virtual void setOperationType(Uint16&);
	virtual Boolean getOtherOperationType(CIMProperty&) const;
	virtual String getOtherOperationType() const;
	virtual void setOtherOperationType(String&);
	virtual Boolean getNumberOfOperations(CIMProperty&) const;
	virtual Uint64 getNumberOfOperations() const;
	virtual void setNumberOfOperations(Uint64&);
	virtual Boolean getCimomElapsedTime(CIMProperty&) const;
	virtual CIMDateTime getCimomElapsedTime() const;
	virtual void setCimomElapsedTime(CIMDateTime&);
	virtual Boolean getProviderElapsedTime(CIMProperty&) const;
	virtual CIMDateTime getProviderElapsedTime() const;
	virtual void setProviderElapsedTime(CIMDateTime&);
	virtual Boolean getRequestSize(CIMProperty&) const;
	virtual Uint64 getRequestSize() const;
	virtual void setRequestSize(Uint64&);
	virtual Boolean getResponseSize(CIMProperty&) const;
	virtual Uint64 getResponseSize() const;
	virtual void setResponseSize(Uint64&);

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
	Uint16 _operationType;
	String _otherOperationType;
	Uint64 _numberOfOperations;
	CIMDateTime _cimomElapsedTime;
	CIMDateTime _providerElapsedTime;
	Uint64 _requestSize;
	Uint64 _responseSize;

#	include "UNIX_CIMOMStatisticalDataPrivate.h"


};

#endif /* UNIX_CIMOMSTATISTICALDATA */
