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
The CIM_DatabaseServiceStatistics class contains the current statistics for a database service. These statistics are counters that are relative to the start of the service or from the time when a reset was issued.
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

			UNIX_DatabaseServiceStatistics:
				LastActivity DateTime
				ActiveConnections UInt64
				CumulativeConnections UInt64
				RejectedConnections UInt64
				CompletedTransactions UInt64
				DiskReads UInt64
				DiskWrites UInt64
				LogicalReads UInt64
				LogicalWrites UInt64
				PageReads UInt64
				PageWrites UInt64
				DiskSpaceUnavailable UInt64
				RequestsHandled UInt64
				RequestsReceived UInt64
				RequestsSent UInt64
				HighwaterConnections UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_DatabaseServiceStatistics:


*/

#ifndef __UNIX_DATABASESERVICESTATISTICS_H
#define __UNIX_DATABASESERVICESTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_DatabaseServiceStatisticsDeps.h"


#ifndef PROPERTY_LAST_ACTIVITY
#define PROPERTY_LAST_ACTIVITY \
					"LastActivity"
#endif

#ifndef PROPERTY_ACTIVE_CONNECTIONS
#define PROPERTY_ACTIVE_CONNECTIONS \
					"ActiveConnections"
#endif

#ifndef PROPERTY_CUMULATIVE_CONNECTIONS
#define PROPERTY_CUMULATIVE_CONNECTIONS \
					"CumulativeConnections"
#endif

#ifndef PROPERTY_REJECTED_CONNECTIONS
#define PROPERTY_REJECTED_CONNECTIONS \
					"RejectedConnections"
#endif

#ifndef PROPERTY_COMPLETED_TRANSACTIONS
#define PROPERTY_COMPLETED_TRANSACTIONS \
					"CompletedTransactions"
#endif

#ifndef PROPERTY_DISK_READS
#define PROPERTY_DISK_READS \
					"DiskReads"
#endif

#ifndef PROPERTY_DISK_WRITES
#define PROPERTY_DISK_WRITES \
					"DiskWrites"
#endif

#ifndef PROPERTY_LOGICAL_READS
#define PROPERTY_LOGICAL_READS \
					"LogicalReads"
#endif

#ifndef PROPERTY_LOGICAL_WRITES
#define PROPERTY_LOGICAL_WRITES \
					"LogicalWrites"
#endif

#ifndef PROPERTY_PAGE_READS
#define PROPERTY_PAGE_READS \
					"PageReads"
#endif

#ifndef PROPERTY_PAGE_WRITES
#define PROPERTY_PAGE_WRITES \
					"PageWrites"
#endif

#ifndef PROPERTY_DISK_SPACE_UNAVAILABLE
#define PROPERTY_DISK_SPACE_UNAVAILABLE \
					"DiskSpaceUnavailable"
#endif

#ifndef PROPERTY_REQUESTS_HANDLED
#define PROPERTY_REQUESTS_HANDLED \
					"RequestsHandled"
#endif

#ifndef PROPERTY_REQUESTS_RECEIVED
#define PROPERTY_REQUESTS_RECEIVED \
					"RequestsReceived"
#endif

#ifndef PROPERTY_REQUESTS_SENT
#define PROPERTY_REQUESTS_SENT \
					"RequestsSent"
#endif

#ifndef PROPERTY_HIGHWATER_CONNECTIONS
#define PROPERTY_HIGHWATER_CONNECTIONS \
					"HighwaterConnections"
#endif



class UNIX_DatabaseServiceStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_DatabaseServiceStatistics();
	~UNIX_DatabaseServiceStatistics();

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
	virtual Boolean getLastActivity(CIMProperty&) const;
	virtual CIMDateTime getLastActivity() const;
	virtual void setLastActivity(CIMDateTime&);
	virtual Boolean getActiveConnections(CIMProperty&) const;
	virtual Uint64 getActiveConnections() const;
	virtual void setActiveConnections(Uint64&);
	virtual Boolean getCumulativeConnections(CIMProperty&) const;
	virtual Uint64 getCumulativeConnections() const;
	virtual void setCumulativeConnections(Uint64&);
	virtual Boolean getRejectedConnections(CIMProperty&) const;
	virtual Uint64 getRejectedConnections() const;
	virtual void setRejectedConnections(Uint64&);
	virtual Boolean getCompletedTransactions(CIMProperty&) const;
	virtual Uint64 getCompletedTransactions() const;
	virtual void setCompletedTransactions(Uint64&);
	virtual Boolean getDiskReads(CIMProperty&) const;
	virtual Uint64 getDiskReads() const;
	virtual void setDiskReads(Uint64&);
	virtual Boolean getDiskWrites(CIMProperty&) const;
	virtual Uint64 getDiskWrites() const;
	virtual void setDiskWrites(Uint64&);
	virtual Boolean getLogicalReads(CIMProperty&) const;
	virtual Uint64 getLogicalReads() const;
	virtual void setLogicalReads(Uint64&);
	virtual Boolean getLogicalWrites(CIMProperty&) const;
	virtual Uint64 getLogicalWrites() const;
	virtual void setLogicalWrites(Uint64&);
	virtual Boolean getPageReads(CIMProperty&) const;
	virtual Uint64 getPageReads() const;
	virtual void setPageReads(Uint64&);
	virtual Boolean getPageWrites(CIMProperty&) const;
	virtual Uint64 getPageWrites() const;
	virtual void setPageWrites(Uint64&);
	virtual Boolean getDiskSpaceUnavailable(CIMProperty&) const;
	virtual Uint64 getDiskSpaceUnavailable() const;
	virtual void setDiskSpaceUnavailable(Uint64&);
	virtual Boolean getRequestsHandled(CIMProperty&) const;
	virtual Uint64 getRequestsHandled() const;
	virtual void setRequestsHandled(Uint64&);
	virtual Boolean getRequestsReceived(CIMProperty&) const;
	virtual Uint64 getRequestsReceived() const;
	virtual void setRequestsReceived(Uint64&);
	virtual Boolean getRequestsSent(CIMProperty&) const;
	virtual Uint64 getRequestsSent() const;
	virtual void setRequestsSent(Uint64&);
	virtual Boolean getHighwaterConnections(CIMProperty&) const;
	virtual Uint64 getHighwaterConnections() const;
	virtual void setHighwaterConnections(Uint64&);

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
	CIMDateTime _lastActivity;
	Uint64 _activeConnections;
	Uint64 _cumulativeConnections;
	Uint64 _rejectedConnections;
	Uint64 _completedTransactions;
	Uint64 _diskReads;
	Uint64 _diskWrites;
	Uint64 _logicalReads;
	Uint64 _logicalWrites;
	Uint64 _pageReads;
	Uint64 _pageWrites;
	Uint64 _diskSpaceUnavailable;
	Uint64 _requestsHandled;
	Uint64 _requestsReceived;
	Uint64 _requestsSent;
	Uint64 _highwaterConnections;

#	include "UNIX_DatabaseServiceStatisticsPrivate.h"


};

#endif /* UNIX_DATABASESERVICESTATISTICS */
