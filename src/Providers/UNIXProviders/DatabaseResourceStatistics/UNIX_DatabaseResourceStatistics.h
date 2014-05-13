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
CIM::Database::Statistics
*/


/* **** Description *** */
/*
The CIM_DatabaseServiceStatistics class contains the current statistics for a database resource. This class maps to the database and server-limited resource tables in the SNMP RDBMS MIB as defined in RFC 1697.
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

			UNIX_DatabaseResourceStatistics:
				Current UInt64
				Limit UInt64
				Highwater UInt64
				Failures UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_DatabaseResourceStatistics:


*/

#ifndef __UNIX_DATABASERESOURCESTATISTICS_H
#define __UNIX_DATABASERESOURCESTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_DatabaseResourceStatisticsDeps.h"


#ifndef PROPERTY_CURRENT
#define PROPERTY_CURRENT \
					"Current"
#endif

#ifndef PROPERTY_LIMIT
#define PROPERTY_LIMIT \
					"Limit"
#endif

#ifndef PROPERTY_HIGHWATER
#define PROPERTY_HIGHWATER \
					"Highwater"
#endif

#ifndef PROPERTY_FAILURES
#define PROPERTY_FAILURES \
					"Failures"
#endif



class UNIX_DatabaseResourceStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_DatabaseResourceStatistics();
	~UNIX_DatabaseResourceStatistics();

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
	virtual Boolean getCurrent(CIMProperty&) const;
	virtual Uint64 getCurrent() const;
	virtual void setCurrent(Uint64&);
	virtual Boolean getLimit(CIMProperty&) const;
	virtual Uint64 getLimit() const;
	virtual void setLimit(Uint64&);
	virtual Boolean getHighwater(CIMProperty&) const;
	virtual Uint64 getHighwater() const;
	virtual void setHighwater(Uint64&);
	virtual Boolean getFailures(CIMProperty&) const;
	virtual Uint32 getFailures() const;
	virtual void setFailures(Uint32&);

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
	Uint64 _current;
	Uint64 _limit;
	Uint64 _highwater;
	Uint32 _failures;

#	include "UNIX_DatabaseResourceStatisticsPrivate.h"


};

#endif /* UNIX_DATABASERESOURCESTATISTICS */
