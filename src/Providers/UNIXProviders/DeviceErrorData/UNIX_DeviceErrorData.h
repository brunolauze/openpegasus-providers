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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::DeviceElements
*/


/* **** Description *** */
/*
DeviceErrorData is a statistical class that contains error- related counters for a LogicalDevice. The types of errors are defined by CCITT (Rec X.733) and ISO (IEC 10164-4). The element, whose statistics are described, is associated using the relationship, ElementStatisticalData. Note that this class uses a simplified identity or naming algorithm over CIM_DeviceErrorCounts.
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

			UNIX_DeviceErrorData:
				IndeterminateErrorCount UInt64
				CriticalErrorCount UInt64
				MajorErrorCount UInt64
				MinorErrorCount UInt64
				WarningCount UInt64
				LastErrorCode String
				ErrorDescription String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_DeviceErrorData:


*/

#ifndef __UNIX_DEVICEERRORDATA_H
#define __UNIX_DEVICEERRORDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_DeviceErrorDataDeps.h"


#ifndef PROPERTY_INDETERMINATE_ERROR_COUNT
#define PROPERTY_INDETERMINATE_ERROR_COUNT \
					"IndeterminateErrorCount"
#endif

#ifndef PROPERTY_CRITICAL_ERROR_COUNT
#define PROPERTY_CRITICAL_ERROR_COUNT \
					"CriticalErrorCount"
#endif

#ifndef PROPERTY_MAJOR_ERROR_COUNT
#define PROPERTY_MAJOR_ERROR_COUNT \
					"MajorErrorCount"
#endif

#ifndef PROPERTY_MINOR_ERROR_COUNT
#define PROPERTY_MINOR_ERROR_COUNT \
					"MinorErrorCount"
#endif

#ifndef PROPERTY_WARNING_COUNT
#define PROPERTY_WARNING_COUNT \
					"WarningCount"
#endif

#ifndef PROPERTY_LAST_ERROR_CODE
#define PROPERTY_LAST_ERROR_CODE \
					"LastErrorCode"
#endif

#ifndef PROPERTY_ERROR_DESCRIPTION
#define PROPERTY_ERROR_DESCRIPTION \
					"ErrorDescription"
#endif



class UNIX_DeviceErrorData :
	public CIM_StatisticalData
{
public:

	UNIX_DeviceErrorData();
	~UNIX_DeviceErrorData();

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
	virtual Boolean getIndeterminateErrorCount(CIMProperty&) const;
	virtual Uint64 getIndeterminateErrorCount() const;
	virtual void setIndeterminateErrorCount(Uint64&);
	virtual Boolean getCriticalErrorCount(CIMProperty&) const;
	virtual Uint64 getCriticalErrorCount() const;
	virtual void setCriticalErrorCount(Uint64&);
	virtual Boolean getMajorErrorCount(CIMProperty&) const;
	virtual Uint64 getMajorErrorCount() const;
	virtual void setMajorErrorCount(Uint64&);
	virtual Boolean getMinorErrorCount(CIMProperty&) const;
	virtual Uint64 getMinorErrorCount() const;
	virtual void setMinorErrorCount(Uint64&);
	virtual Boolean getWarningCount(CIMProperty&) const;
	virtual Uint64 getWarningCount() const;
	virtual void setWarningCount(Uint64&);
	virtual Boolean getLastErrorCode(CIMProperty&) const;
	virtual String getLastErrorCode() const;
	virtual void setLastErrorCode(String&);
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual void setErrorDescription(String&);

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
	Uint64 _indeterminateErrorCount;
	Uint64 _criticalErrorCount;
	Uint64 _majorErrorCount;
	Uint64 _minorErrorCount;
	Uint64 _warningCount;
	String _lastErrorCode;
	String _errorDescription;

#	include "UNIX_DeviceErrorDataPrivate.h"


};

#endif /* UNIX_DEVICEERRORDATA */
