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


UNIX_DatabaseServiceStatistics::UNIX_DatabaseServiceStatistics(void)
{
}

UNIX_DatabaseServiceStatistics::~UNIX_DatabaseServiceStatistics(void)
{
}

Boolean UNIX_DatabaseServiceStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseServiceStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DatabaseServiceStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DatabaseServiceStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseServiceStatistics::getCaption() const
{
	return _caption;
}

void UNIX_DatabaseServiceStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DatabaseServiceStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseServiceStatistics::getDescription() const
{
	return _description;
}

void UNIX_DatabaseServiceStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DatabaseServiceStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseServiceStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_DatabaseServiceStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DatabaseServiceStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_DatabaseServiceStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DatabaseServiceStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_DatabaseServiceStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_DatabaseServiceStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_DatabaseServiceStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_DatabaseServiceStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_DatabaseServiceStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_DatabaseServiceStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_DatabaseServiceStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_DatabaseServiceStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_DatabaseServiceStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_DatabaseServiceStatistics::getLastActivity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACTIVITY, getLastActivity());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getLastActivity() const
{
	return _lastActivity;
}

void UNIX_DatabaseServiceStatistics::setLastActivity(CIMDateTime &value)
{
	_lastActivity = value;
}

Boolean UNIX_DatabaseServiceStatistics::getActiveConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_CONNECTIONS, getActiveConnections());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getActiveConnections() const
{
	return _activeConnections;
}

void UNIX_DatabaseServiceStatistics::setActiveConnections(Uint64 &value)
{
	_activeConnections = value;
}

Boolean UNIX_DatabaseServiceStatistics::getCumulativeConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CUMULATIVE_CONNECTIONS, getCumulativeConnections());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getCumulativeConnections() const
{
	return _cumulativeConnections;
}

void UNIX_DatabaseServiceStatistics::setCumulativeConnections(Uint64 &value)
{
	_cumulativeConnections = value;
}

Boolean UNIX_DatabaseServiceStatistics::getRejectedConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REJECTED_CONNECTIONS, getRejectedConnections());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getRejectedConnections() const
{
	return _rejectedConnections;
}

void UNIX_DatabaseServiceStatistics::setRejectedConnections(Uint64 &value)
{
	_rejectedConnections = value;
}

Boolean UNIX_DatabaseServiceStatistics::getCompletedTransactions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLETED_TRANSACTIONS, getCompletedTransactions());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getCompletedTransactions() const
{
	return _completedTransactions;
}

void UNIX_DatabaseServiceStatistics::setCompletedTransactions(Uint64 &value)
{
	_completedTransactions = value;
}

Boolean UNIX_DatabaseServiceStatistics::getDiskReads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_READS, getDiskReads());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getDiskReads() const
{
	return _diskReads;
}

void UNIX_DatabaseServiceStatistics::setDiskReads(Uint64 &value)
{
	_diskReads = value;
}

Boolean UNIX_DatabaseServiceStatistics::getDiskWrites(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_WRITES, getDiskWrites());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getDiskWrites() const
{
	return _diskWrites;
}

void UNIX_DatabaseServiceStatistics::setDiskWrites(Uint64 &value)
{
	_diskWrites = value;
}

Boolean UNIX_DatabaseServiceStatistics::getLogicalReads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_READS, getLogicalReads());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getLogicalReads() const
{
	return _logicalReads;
}

void UNIX_DatabaseServiceStatistics::setLogicalReads(Uint64 &value)
{
	_logicalReads = value;
}

Boolean UNIX_DatabaseServiceStatistics::getLogicalWrites(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_WRITES, getLogicalWrites());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getLogicalWrites() const
{
	return _logicalWrites;
}

void UNIX_DatabaseServiceStatistics::setLogicalWrites(Uint64 &value)
{
	_logicalWrites = value;
}

Boolean UNIX_DatabaseServiceStatistics::getPageReads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGE_READS, getPageReads());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getPageReads() const
{
	return _pageReads;
}

void UNIX_DatabaseServiceStatistics::setPageReads(Uint64 &value)
{
	_pageReads = value;
}

Boolean UNIX_DatabaseServiceStatistics::getPageWrites(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGE_WRITES, getPageWrites());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getPageWrites() const
{
	return _pageWrites;
}

void UNIX_DatabaseServiceStatistics::setPageWrites(Uint64 &value)
{
	_pageWrites = value;
}

Boolean UNIX_DatabaseServiceStatistics::getDiskSpaceUnavailable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_SPACE_UNAVAILABLE, getDiskSpaceUnavailable());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getDiskSpaceUnavailable() const
{
	return _diskSpaceUnavailable;
}

void UNIX_DatabaseServiceStatistics::setDiskSpaceUnavailable(Uint64 &value)
{
	_diskSpaceUnavailable = value;
}

Boolean UNIX_DatabaseServiceStatistics::getRequestsHandled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTS_HANDLED, getRequestsHandled());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getRequestsHandled() const
{
	return _requestsHandled;
}

void UNIX_DatabaseServiceStatistics::setRequestsHandled(Uint64 &value)
{
	_requestsHandled = value;
}

Boolean UNIX_DatabaseServiceStatistics::getRequestsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTS_RECEIVED, getRequestsReceived());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getRequestsReceived() const
{
	return _requestsReceived;
}

void UNIX_DatabaseServiceStatistics::setRequestsReceived(Uint64 &value)
{
	_requestsReceived = value;
}

Boolean UNIX_DatabaseServiceStatistics::getRequestsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTS_SENT, getRequestsSent());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getRequestsSent() const
{
	return _requestsSent;
}

void UNIX_DatabaseServiceStatistics::setRequestsSent(Uint64 &value)
{
	_requestsSent = value;
}

Boolean UNIX_DatabaseServiceStatistics::getHighwaterConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIGHWATER_CONNECTIONS, getHighwaterConnections());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getHighwaterConnections() const
{
	return _highwaterConnections;
}

void UNIX_DatabaseServiceStatistics::setHighwaterConnections(Uint64 &value)
{
	_highwaterConnections = value;
}


void UNIX_DatabaseServiceStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseServiceStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_lastActivity = CIMHelper::getCurrentTime();
	_activeConnections = Uint64(0);
	_cumulativeConnections = Uint64(0);
	_rejectedConnections = Uint64(0);
	_completedTransactions = Uint64(0);
	_diskReads = Uint64(0);
	_diskWrites = Uint64(0);
	_logicalReads = Uint64(0);
	_logicalWrites = Uint64(0);
	_pageReads = Uint64(0);
	_pageWrites = Uint64(0);
	_diskSpaceUnavailable = Uint64(0);
	_requestsHandled = Uint64(0);
	_requestsReceived = Uint64(0);
	_requestsSent = Uint64(0);
	_highwaterConnections = Uint64(0);

}

Boolean UNIX_DatabaseServiceStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LastActivity"))
			{
				CIMDateTime lastActivityValue;
				property.getValue().get(lastActivityValue);
				setLastActivity(lastActivityValue);
			}
			else if (String::equal(property.getName().getString(), "ActiveConnections"))
			{
				Uint64 activeConnectionsValue;
				property.getValue().get(activeConnectionsValue);
				setActiveConnections(activeConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "CumulativeConnections"))
			{
				Uint64 cumulativeConnectionsValue;
				property.getValue().get(cumulativeConnectionsValue);
				setCumulativeConnections(cumulativeConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "RejectedConnections"))
			{
				Uint64 rejectedConnectionsValue;
				property.getValue().get(rejectedConnectionsValue);
				setRejectedConnections(rejectedConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "CompletedTransactions"))
			{
				Uint64 completedTransactionsValue;
				property.getValue().get(completedTransactionsValue);
				setCompletedTransactions(completedTransactionsValue);
			}
			else if (String::equal(property.getName().getString(), "DiskReads"))
			{
				Uint64 diskReadsValue;
				property.getValue().get(diskReadsValue);
				setDiskReads(diskReadsValue);
			}
			else if (String::equal(property.getName().getString(), "DiskWrites"))
			{
				Uint64 diskWritesValue;
				property.getValue().get(diskWritesValue);
				setDiskWrites(diskWritesValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalReads"))
			{
				Uint64 logicalReadsValue;
				property.getValue().get(logicalReadsValue);
				setLogicalReads(logicalReadsValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalWrites"))
			{
				Uint64 logicalWritesValue;
				property.getValue().get(logicalWritesValue);
				setLogicalWrites(logicalWritesValue);
			}
			else if (String::equal(property.getName().getString(), "PageReads"))
			{
				Uint64 pageReadsValue;
				property.getValue().get(pageReadsValue);
				setPageReads(pageReadsValue);
			}
			else if (String::equal(property.getName().getString(), "PageWrites"))
			{
				Uint64 pageWritesValue;
				property.getValue().get(pageWritesValue);
				setPageWrites(pageWritesValue);
			}
			else if (String::equal(property.getName().getString(), "DiskSpaceUnavailable"))
			{
				Uint64 diskSpaceUnavailableValue;
				property.getValue().get(diskSpaceUnavailableValue);
				setDiskSpaceUnavailable(diskSpaceUnavailableValue);
			}
			else if (String::equal(property.getName().getString(), "RequestsHandled"))
			{
				Uint64 requestsHandledValue;
				property.getValue().get(requestsHandledValue);
				setRequestsHandled(requestsHandledValue);
			}
			else if (String::equal(property.getName().getString(), "RequestsReceived"))
			{
				Uint64 requestsReceivedValue;
				property.getValue().get(requestsReceivedValue);
				setRequestsReceived(requestsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "RequestsSent"))
			{
				Uint64 requestsSentValue;
				property.getValue().get(requestsSentValue);
				setRequestsSent(requestsSentValue);
			}
			else if (String::equal(property.getName().getString(), "HighwaterConnections"))
			{
				Uint64 highwaterConnectionsValue;
				property.getValue().get(highwaterConnectionsValue);
				setHighwaterConnections(highwaterConnectionsValue);
			}
	}
	return true;
}

Uint32 UNIX_DatabaseServiceStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_DatabaseServiceStatistics::initialize()
{
	return false;
}

Boolean UNIX_DatabaseServiceStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DatabaseServiceStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_lastActivity = CIMHelper::getCurrentTime();
	_activeConnections = Uint64(0);
	_cumulativeConnections = Uint64(0);
	_rejectedConnections = Uint64(0);
	_completedTransactions = Uint64(0);
	_diskReads = Uint64(0);
	_diskWrites = Uint64(0);
	_logicalReads = Uint64(0);
	_logicalWrites = Uint64(0);
	_pageReads = Uint64(0);
	_pageWrites = Uint64(0);
	_diskSpaceUnavailable = Uint64(0);
	_requestsHandled = Uint64(0);
	_requestsReceived = Uint64(0);
	_requestsSent = Uint64(0);
	_highwaterConnections = Uint64(0);
	
	return false;
}

Boolean UNIX_DatabaseServiceStatistics::finalize()
{
	return false;
}


Boolean UNIX_DatabaseServiceStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DatabaseServiceStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseServiceStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseServiceStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DatabaseServiceStatistics::validateInstance()
{
	return true;
}

