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


UNIX_VTLResourceUsage::UNIX_VTLResourceUsage(void)
{
}

UNIX_VTLResourceUsage::~UNIX_VTLResourceUsage(void)
{
}

Boolean UNIX_VTLResourceUsage::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VTLResourceUsage::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VTLResourceUsage::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VTLResourceUsage::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VTLResourceUsage::getCaption() const
{
	return _caption;
}

void UNIX_VTLResourceUsage::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VTLResourceUsage::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VTLResourceUsage::getDescription() const
{
	return _description;
}

void UNIX_VTLResourceUsage::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VTLResourceUsage::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VTLResourceUsage::getElementName() const
{
	return _elementName;
}

void UNIX_VTLResourceUsage::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VTLResourceUsage::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VTLResourceUsage::getGeneration() const
{
	return _generation;
}

void UNIX_VTLResourceUsage::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VTLResourceUsage::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_VTLResourceUsage::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_VTLResourceUsage::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_VTLResourceUsage::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_VTLResourceUsage::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_VTLResourceUsage::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_VTLResourceUsage::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_VTLResourceUsage::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_VTLResourceUsage::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_VTLResourceUsage::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_VTLResourceUsage::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_VTLResourceUsage::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_VTLResourceUsage::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_VTLResourceUsage::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_VTLResourceUsage::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_VTLResourceUsage::getThroughput(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THROUGHPUT, getThroughput());
	return true;
}

Uint64 UNIX_VTLResourceUsage::getThroughput() const
{
	return _throughput;
}

void UNIX_VTLResourceUsage::setThroughput(Uint64 &value)
{
	_throughput = value;
}

Boolean UNIX_VTLResourceUsage::getRelativeThroughput(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_THROUGHPUT, getRelativeThroughput());
	return true;
}

Uint16 UNIX_VTLResourceUsage::getRelativeThroughput() const
{
	return _relativeThroughput;
}

void UNIX_VTLResourceUsage::setRelativeThroughput(Uint16 &value)
{
	_relativeThroughput = value;
}

Boolean UNIX_VTLResourceUsage::getUsedPhysicalCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USED_PHYSICAL_CAPACITY, getUsedPhysicalCapacity());
	return true;
}

Real64 UNIX_VTLResourceUsage::getUsedPhysicalCapacity() const
{
	return _usedPhysicalCapacity;
}

void UNIX_VTLResourceUsage::setUsedPhysicalCapacity(Real64 &value)
{
	_usedPhysicalCapacity = value;
}

Boolean UNIX_VTLResourceUsage::getUsedLogicalCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USED_LOGICAL_CAPACITY, getUsedLogicalCapacity());
	return true;
}

Real64 UNIX_VTLResourceUsage::getUsedLogicalCapacity() const
{
	return _usedLogicalCapacity;
}

void UNIX_VTLResourceUsage::setUsedLogicalCapacity(Real64 &value)
{
	_usedLogicalCapacity = value;
}

Boolean UNIX_VTLResourceUsage::getUsedPhysicalCapacityOfMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USED_PHYSICAL_CAPACITY_OF_MAX, getUsedPhysicalCapacityOfMax());
	return true;
}

Real32 UNIX_VTLResourceUsage::getUsedPhysicalCapacityOfMax() const
{
	return _usedPhysicalCapacityOfMax;
}

void UNIX_VTLResourceUsage::setUsedPhysicalCapacityOfMax(Real32 &value)
{
	_usedPhysicalCapacityOfMax = value;
}

Boolean UNIX_VTLResourceUsage::getUsedLogicalCapacityOfMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USED_LOGICAL_CAPACITY_OF_MAX, getUsedLogicalCapacityOfMax());
	return true;
}

Real32 UNIX_VTLResourceUsage::getUsedLogicalCapacityOfMax() const
{
	return _usedLogicalCapacityOfMax;
}

void UNIX_VTLResourceUsage::setUsedLogicalCapacityOfMax(Real32 &value)
{
	_usedLogicalCapacityOfMax = value;
}

Boolean UNIX_VTLResourceUsage::getSystemRatio(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_RATIO, getSystemRatio());
	return true;
}

Real32 UNIX_VTLResourceUsage::getSystemRatio() const
{
	return _systemRatio;
}

void UNIX_VTLResourceUsage::setSystemRatio(Real32 &value)
{
	_systemRatio = value;
}

Boolean UNIX_VTLResourceUsage::getDeduplicationRatio(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDUPLICATION_RATIO, getDeduplicationRatio());
	return true;
}

Real32 UNIX_VTLResourceUsage::getDeduplicationRatio() const
{
	return _deduplicationRatio;
}

void UNIX_VTLResourceUsage::setDeduplicationRatio(Real32 &value)
{
	_deduplicationRatio = value;
}

Boolean UNIX_VTLResourceUsage::getInReplicationThroughput(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_REPLICATION_THROUGHPUT, getInReplicationThroughput());
	return true;
}

Uint64 UNIX_VTLResourceUsage::getInReplicationThroughput() const
{
	return _inReplicationThroughput;
}

void UNIX_VTLResourceUsage::setInReplicationThroughput(Uint64 &value)
{
	_inReplicationThroughput = value;
}

Boolean UNIX_VTLResourceUsage::getOutReplicationThroughput(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_REPLICATION_THROUGHPUT, getOutReplicationThroughput());
	return true;
}

Uint64 UNIX_VTLResourceUsage::getOutReplicationThroughput() const
{
	return _outReplicationThroughput;
}

void UNIX_VTLResourceUsage::setOutReplicationThroughput(Uint64 &value)
{
	_outReplicationThroughput = value;
}

Boolean UNIX_VTLResourceUsage::getThresholdCheckInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THRESHOLD_CHECK_INTERVAL, getThresholdCheckInterval());
	return true;
}

Uint32 UNIX_VTLResourceUsage::getThresholdCheckInterval() const
{
	return _thresholdCheckInterval;
}

void UNIX_VTLResourceUsage::setThresholdCheckInterval(Uint32 &value)
{
	_thresholdCheckInterval = value;
}

Boolean UNIX_VTLResourceUsage::getThresholdEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THRESHOLD_ENABLED, getThresholdEnabled());
	return true;
}

Boolean UNIX_VTLResourceUsage::getThresholdEnabled() const
{
	return _thresholdEnabled;
}

void UNIX_VTLResourceUsage::setThresholdEnabled(Boolean &value)
{
	_thresholdEnabled = value;
}

Boolean UNIX_VTLResourceUsage::getThroughputAlertsEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THROUGHPUT_ALERTS_ENABLED, getThroughputAlertsEnabled());
	return true;
}

Boolean UNIX_VTLResourceUsage::getThroughputAlertsEnabled() const
{
	return _throughputAlertsEnabled;
}

void UNIX_VTLResourceUsage::setThroughputAlertsEnabled(Boolean &value)
{
	_throughputAlertsEnabled = value;
}

Boolean UNIX_VTLResourceUsage::getThroughputWarningAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THROUGHPUT_WARNING_ALERT_THRESHOLD, getThroughputWarningAlertThreshold());
	return true;
}

Uint16 UNIX_VTLResourceUsage::getThroughputWarningAlertThreshold() const
{
	return _throughputWarningAlertThreshold;
}

void UNIX_VTLResourceUsage::setThroughputWarningAlertThreshold(Uint16 &value)
{
	_throughputWarningAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getThroughputCriticalAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THROUGHPUT_CRITICAL_ALERT_THRESHOLD, getThroughputCriticalAlertThreshold());
	return true;
}

Uint16 UNIX_VTLResourceUsage::getThroughputCriticalAlertThreshold() const
{
	return _throughputCriticalAlertThreshold;
}

void UNIX_VTLResourceUsage::setThroughputCriticalAlertThreshold(Uint16 &value)
{
	_throughputCriticalAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getPhysicalCapacityAlertsEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_CAPACITY_ALERTS_ENABLED, getPhysicalCapacityAlertsEnabled());
	return true;
}

Boolean UNIX_VTLResourceUsage::getPhysicalCapacityAlertsEnabled() const
{
	return _physicalCapacityAlertsEnabled;
}

void UNIX_VTLResourceUsage::setPhysicalCapacityAlertsEnabled(Boolean &value)
{
	_physicalCapacityAlertsEnabled = value;
}

Boolean UNIX_VTLResourceUsage::getPhysicalCapacityWarningAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_CAPACITY_WARNING_ALERT_THRESHOLD, getPhysicalCapacityWarningAlertThreshold());
	return true;
}

Uint16 UNIX_VTLResourceUsage::getPhysicalCapacityWarningAlertThreshold() const
{
	return _physicalCapacityWarningAlertThreshold;
}

void UNIX_VTLResourceUsage::setPhysicalCapacityWarningAlertThreshold(Uint16 &value)
{
	_physicalCapacityWarningAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getPhysicalCapacityCriticalAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_CAPACITY_CRITICAL_ALERT_THRESHOLD, getPhysicalCapacityCriticalAlertThreshold());
	return true;
}

Uint16 UNIX_VTLResourceUsage::getPhysicalCapacityCriticalAlertThreshold() const
{
	return _physicalCapacityCriticalAlertThreshold;
}

void UNIX_VTLResourceUsage::setPhysicalCapacityCriticalAlertThreshold(Uint16 &value)
{
	_physicalCapacityCriticalAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getLogicalCapacityAlertsEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_CAPACITY_ALERTS_ENABLED, getLogicalCapacityAlertsEnabled());
	return true;
}

Boolean UNIX_VTLResourceUsage::getLogicalCapacityAlertsEnabled() const
{
	return _logicalCapacityAlertsEnabled;
}

void UNIX_VTLResourceUsage::setLogicalCapacityAlertsEnabled(Boolean &value)
{
	_logicalCapacityAlertsEnabled = value;
}

Boolean UNIX_VTLResourceUsage::getLogicalCapacityWarningAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_CAPACITY_WARNING_ALERT_THRESHOLD, getLogicalCapacityWarningAlertThreshold());
	return true;
}

Uint16 UNIX_VTLResourceUsage::getLogicalCapacityWarningAlertThreshold() const
{
	return _logicalCapacityWarningAlertThreshold;
}

void UNIX_VTLResourceUsage::setLogicalCapacityWarningAlertThreshold(Uint16 &value)
{
	_logicalCapacityWarningAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getLogicalCapacityCriticalAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_CAPACITY_CRITICAL_ALERT_THRESHOLD, getLogicalCapacityCriticalAlertThreshold());
	return true;
}

Uint16 UNIX_VTLResourceUsage::getLogicalCapacityCriticalAlertThreshold() const
{
	return _logicalCapacityCriticalAlertThreshold;
}

void UNIX_VTLResourceUsage::setLogicalCapacityCriticalAlertThreshold(Uint16 &value)
{
	_logicalCapacityCriticalAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getSystemRatioAlertsEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_RATIO_ALERTS_ENABLED, getSystemRatioAlertsEnabled());
	return true;
}

Boolean UNIX_VTLResourceUsage::getSystemRatioAlertsEnabled() const
{
	return _systemRatioAlertsEnabled;
}

void UNIX_VTLResourceUsage::setSystemRatioAlertsEnabled(Boolean &value)
{
	_systemRatioAlertsEnabled = value;
}

Boolean UNIX_VTLResourceUsage::getSystemRatioWarningAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_RATIO_WARNING_ALERT_THRESHOLD, getSystemRatioWarningAlertThreshold());
	return true;
}

Real32 UNIX_VTLResourceUsage::getSystemRatioWarningAlertThreshold() const
{
	return _systemRatioWarningAlertThreshold;
}

void UNIX_VTLResourceUsage::setSystemRatioWarningAlertThreshold(Real32 &value)
{
	_systemRatioWarningAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getSystemRatioCriticalAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_RATIO_CRITICAL_ALERT_THRESHOLD, getSystemRatioCriticalAlertThreshold());
	return true;
}

Real32 UNIX_VTLResourceUsage::getSystemRatioCriticalAlertThreshold() const
{
	return _systemRatioCriticalAlertThreshold;
}

void UNIX_VTLResourceUsage::setSystemRatioCriticalAlertThreshold(Real32 &value)
{
	_systemRatioCriticalAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getDeduplicationRatioAlertsEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDUPLICATION_RATIO_ALERTS_ENABLED, getDeduplicationRatioAlertsEnabled());
	return true;
}

Boolean UNIX_VTLResourceUsage::getDeduplicationRatioAlertsEnabled() const
{
	return _deduplicationRatioAlertsEnabled;
}

void UNIX_VTLResourceUsage::setDeduplicationRatioAlertsEnabled(Boolean &value)
{
	_deduplicationRatioAlertsEnabled = value;
}

Boolean UNIX_VTLResourceUsage::getDeduplicationRatioWarningAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDUPLICATION_RATIO_WARNING_ALERT_THRESHOLD, getDeduplicationRatioWarningAlertThreshold());
	return true;
}

Real32 UNIX_VTLResourceUsage::getDeduplicationRatioWarningAlertThreshold() const
{
	return _deduplicationRatioWarningAlertThreshold;
}

void UNIX_VTLResourceUsage::setDeduplicationRatioWarningAlertThreshold(Real32 &value)
{
	_deduplicationRatioWarningAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getDeduplicationRatioCriticalAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDUPLICATION_RATIO_CRITICAL_ALERT_THRESHOLD, getDeduplicationRatioCriticalAlertThreshold());
	return true;
}

Real32 UNIX_VTLResourceUsage::getDeduplicationRatioCriticalAlertThreshold() const
{
	return _deduplicationRatioCriticalAlertThreshold;
}

void UNIX_VTLResourceUsage::setDeduplicationRatioCriticalAlertThreshold(Real32 &value)
{
	_deduplicationRatioCriticalAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getReplicationTrafficAlertsEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_TRAFFIC_ALERTS_ENABLED, getReplicationTrafficAlertsEnabled());
	return true;
}

Boolean UNIX_VTLResourceUsage::getReplicationTrafficAlertsEnabled() const
{
	return _replicationTrafficAlertsEnabled;
}

void UNIX_VTLResourceUsage::setReplicationTrafficAlertsEnabled(Boolean &value)
{
	_replicationTrafficAlertsEnabled = value;
}

Boolean UNIX_VTLResourceUsage::getReplicationTrafficWarningAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_TRAFFIC_WARNING_ALERT_THRESHOLD, getReplicationTrafficWarningAlertThreshold());
	return true;
}

Uint64 UNIX_VTLResourceUsage::getReplicationTrafficWarningAlertThreshold() const
{
	return _replicationTrafficWarningAlertThreshold;
}

void UNIX_VTLResourceUsage::setReplicationTrafficWarningAlertThreshold(Uint64 &value)
{
	_replicationTrafficWarningAlertThreshold = value;
}

Boolean UNIX_VTLResourceUsage::getReplicationTrafficCriticalAlertThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_TRAFFIC_CRITICAL_ALERT_THRESHOLD, getReplicationTrafficCriticalAlertThreshold());
	return true;
}

Uint64 UNIX_VTLResourceUsage::getReplicationTrafficCriticalAlertThreshold() const
{
	return _replicationTrafficCriticalAlertThreshold;
}

void UNIX_VTLResourceUsage::setReplicationTrafficCriticalAlertThreshold(Uint64 &value)
{
	_replicationTrafficCriticalAlertThreshold = value;
}


void UNIX_VTLResourceUsage::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VTLResourceUsage");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_throughput = Uint64(0);
	_relativeThroughput = Uint16(0);
	_usedPhysicalCapacity = Real64(0);
	_usedLogicalCapacity = Real64(0);
	_usedPhysicalCapacityOfMax = Real32(0);
	_usedLogicalCapacityOfMax = Real32(0);
	_systemRatio = Real32(0);
	_deduplicationRatio = Real32(0);
	_inReplicationThroughput = Uint64(0);
	_outReplicationThroughput = Uint64(0);
	_thresholdCheckInterval = Uint32(0);
	_thresholdEnabled = Boolean(false);
	_throughputAlertsEnabled = Boolean(false);
	_throughputWarningAlertThreshold = Uint16(0);
	_throughputCriticalAlertThreshold = Uint16(0);
	_physicalCapacityAlertsEnabled = Boolean(false);
	_physicalCapacityWarningAlertThreshold = Uint16(0);
	_physicalCapacityCriticalAlertThreshold = Uint16(0);
	_logicalCapacityAlertsEnabled = Boolean(false);
	_logicalCapacityWarningAlertThreshold = Uint16(0);
	_logicalCapacityCriticalAlertThreshold = Uint16(0);
	_systemRatioAlertsEnabled = Boolean(false);
	_systemRatioWarningAlertThreshold = Real32(0);
	_systemRatioCriticalAlertThreshold = Real32(0);
	_deduplicationRatioAlertsEnabled = Boolean(false);
	_deduplicationRatioWarningAlertThreshold = Real32(0);
	_deduplicationRatioCriticalAlertThreshold = Real32(0);
	_replicationTrafficAlertsEnabled = Boolean(false);
	_replicationTrafficWarningAlertThreshold = Uint64(0);
	_replicationTrafficCriticalAlertThreshold = Uint64(0);

}

Boolean UNIX_VTLResourceUsage::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Throughput"))
			{
				Uint64 throughputValue;
				property.getValue().get(throughputValue);
				setThroughput(throughputValue);
			}
			else if (String::equal(property.getName().getString(), "RelativeThroughput"))
			{
				Uint16 relativeThroughputValue;
				property.getValue().get(relativeThroughputValue);
				setRelativeThroughput(relativeThroughputValue);
			}
			else if (String::equal(property.getName().getString(), "UsedPhysicalCapacity"))
			{
				Real64 usedPhysicalCapacityValue;
				property.getValue().get(usedPhysicalCapacityValue);
				setUsedPhysicalCapacity(usedPhysicalCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "UsedLogicalCapacity"))
			{
				Real64 usedLogicalCapacityValue;
				property.getValue().get(usedLogicalCapacityValue);
				setUsedLogicalCapacity(usedLogicalCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "UsedPhysicalCapacityOfMax"))
			{
				Real32 usedPhysicalCapacityOfMaxValue;
				property.getValue().get(usedPhysicalCapacityOfMaxValue);
				setUsedPhysicalCapacityOfMax(usedPhysicalCapacityOfMaxValue);
			}
			else if (String::equal(property.getName().getString(), "UsedLogicalCapacityOfMax"))
			{
				Real32 usedLogicalCapacityOfMaxValue;
				property.getValue().get(usedLogicalCapacityOfMaxValue);
				setUsedLogicalCapacityOfMax(usedLogicalCapacityOfMaxValue);
			}
			else if (String::equal(property.getName().getString(), "SystemRatio"))
			{
				Real32 systemRatioValue;
				property.getValue().get(systemRatioValue);
				setSystemRatio(systemRatioValue);
			}
			else if (String::equal(property.getName().getString(), "DeduplicationRatio"))
			{
				Real32 deduplicationRatioValue;
				property.getValue().get(deduplicationRatioValue);
				setDeduplicationRatio(deduplicationRatioValue);
			}
			else if (String::equal(property.getName().getString(), "InReplicationThroughput"))
			{
				Uint64 inReplicationThroughputValue;
				property.getValue().get(inReplicationThroughputValue);
				setInReplicationThroughput(inReplicationThroughputValue);
			}
			else if (String::equal(property.getName().getString(), "OutReplicationThroughput"))
			{
				Uint64 outReplicationThroughputValue;
				property.getValue().get(outReplicationThroughputValue);
				setOutReplicationThroughput(outReplicationThroughputValue);
			}
			else if (String::equal(property.getName().getString(), "ThresholdCheckInterval"))
			{
				Uint32 thresholdCheckIntervalValue;
				property.getValue().get(thresholdCheckIntervalValue);
				setThresholdCheckInterval(thresholdCheckIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "ThresholdEnabled"))
			{
				Boolean thresholdEnabledValue;
				property.getValue().get(thresholdEnabledValue);
				setThresholdEnabled(thresholdEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "ThroughputAlertsEnabled"))
			{
				Boolean throughputAlertsEnabledValue;
				property.getValue().get(throughputAlertsEnabledValue);
				setThroughputAlertsEnabled(throughputAlertsEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "ThroughputWarningAlertThreshold"))
			{
				Uint16 throughputWarningAlertThresholdValue;
				property.getValue().get(throughputWarningAlertThresholdValue);
				setThroughputWarningAlertThreshold(throughputWarningAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "ThroughputCriticalAlertThreshold"))
			{
				Uint16 throughputCriticalAlertThresholdValue;
				property.getValue().get(throughputCriticalAlertThresholdValue);
				setThroughputCriticalAlertThreshold(throughputCriticalAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "PhysicalCapacityAlertsEnabled"))
			{
				Boolean physicalCapacityAlertsEnabledValue;
				property.getValue().get(physicalCapacityAlertsEnabledValue);
				setPhysicalCapacityAlertsEnabled(physicalCapacityAlertsEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "PhysicalCapacityWarningAlertThreshold"))
			{
				Uint16 physicalCapacityWarningAlertThresholdValue;
				property.getValue().get(physicalCapacityWarningAlertThresholdValue);
				setPhysicalCapacityWarningAlertThreshold(physicalCapacityWarningAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "PhysicalCapacityCriticalAlertThreshold"))
			{
				Uint16 physicalCapacityCriticalAlertThresholdValue;
				property.getValue().get(physicalCapacityCriticalAlertThresholdValue);
				setPhysicalCapacityCriticalAlertThreshold(physicalCapacityCriticalAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalCapacityAlertsEnabled"))
			{
				Boolean logicalCapacityAlertsEnabledValue;
				property.getValue().get(logicalCapacityAlertsEnabledValue);
				setLogicalCapacityAlertsEnabled(logicalCapacityAlertsEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalCapacityWarningAlertThreshold"))
			{
				Uint16 logicalCapacityWarningAlertThresholdValue;
				property.getValue().get(logicalCapacityWarningAlertThresholdValue);
				setLogicalCapacityWarningAlertThreshold(logicalCapacityWarningAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalCapacityCriticalAlertThreshold"))
			{
				Uint16 logicalCapacityCriticalAlertThresholdValue;
				property.getValue().get(logicalCapacityCriticalAlertThresholdValue);
				setLogicalCapacityCriticalAlertThreshold(logicalCapacityCriticalAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "SystemRatioAlertsEnabled"))
			{
				Boolean systemRatioAlertsEnabledValue;
				property.getValue().get(systemRatioAlertsEnabledValue);
				setSystemRatioAlertsEnabled(systemRatioAlertsEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "SystemRatioWarningAlertThreshold"))
			{
				Real32 systemRatioWarningAlertThresholdValue;
				property.getValue().get(systemRatioWarningAlertThresholdValue);
				setSystemRatioWarningAlertThreshold(systemRatioWarningAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "SystemRatioCriticalAlertThreshold"))
			{
				Real32 systemRatioCriticalAlertThresholdValue;
				property.getValue().get(systemRatioCriticalAlertThresholdValue);
				setSystemRatioCriticalAlertThreshold(systemRatioCriticalAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "DeduplicationRatioAlertsEnabled"))
			{
				Boolean deduplicationRatioAlertsEnabledValue;
				property.getValue().get(deduplicationRatioAlertsEnabledValue);
				setDeduplicationRatioAlertsEnabled(deduplicationRatioAlertsEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "DeduplicationRatioWarningAlertThreshold"))
			{
				Real32 deduplicationRatioWarningAlertThresholdValue;
				property.getValue().get(deduplicationRatioWarningAlertThresholdValue);
				setDeduplicationRatioWarningAlertThreshold(deduplicationRatioWarningAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "DeduplicationRatioCriticalAlertThreshold"))
			{
				Real32 deduplicationRatioCriticalAlertThresholdValue;
				property.getValue().get(deduplicationRatioCriticalAlertThresholdValue);
				setDeduplicationRatioCriticalAlertThreshold(deduplicationRatioCriticalAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "ReplicationTrafficAlertsEnabled"))
			{
				Boolean replicationTrafficAlertsEnabledValue;
				property.getValue().get(replicationTrafficAlertsEnabledValue);
				setReplicationTrafficAlertsEnabled(replicationTrafficAlertsEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "ReplicationTrafficWarningAlertThreshold"))
			{
				Uint64 replicationTrafficWarningAlertThresholdValue;
				property.getValue().get(replicationTrafficWarningAlertThresholdValue);
				setReplicationTrafficWarningAlertThreshold(replicationTrafficWarningAlertThresholdValue);
			}
			else if (String::equal(property.getName().getString(), "ReplicationTrafficCriticalAlertThreshold"))
			{
				Uint64 replicationTrafficCriticalAlertThresholdValue;
				property.getValue().get(replicationTrafficCriticalAlertThresholdValue);
				setReplicationTrafficCriticalAlertThreshold(replicationTrafficCriticalAlertThresholdValue);
			}
	}
	return true;
}

Uint32 UNIX_VTLResourceUsage::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_VTLResourceUsage::initialize()
{
	return false;
}

Boolean UNIX_VTLResourceUsage::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VTLResourceUsage");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_throughput = Uint64(0);
	_relativeThroughput = Uint16(0);
	_usedPhysicalCapacity = Real64(0);
	_usedLogicalCapacity = Real64(0);
	_usedPhysicalCapacityOfMax = Real32(0);
	_usedLogicalCapacityOfMax = Real32(0);
	_systemRatio = Real32(0);
	_deduplicationRatio = Real32(0);
	_inReplicationThroughput = Uint64(0);
	_outReplicationThroughput = Uint64(0);
	_thresholdCheckInterval = Uint32(0);
	_thresholdEnabled = Boolean(false);
	_throughputAlertsEnabled = Boolean(false);
	_throughputWarningAlertThreshold = Uint16(0);
	_throughputCriticalAlertThreshold = Uint16(0);
	_physicalCapacityAlertsEnabled = Boolean(false);
	_physicalCapacityWarningAlertThreshold = Uint16(0);
	_physicalCapacityCriticalAlertThreshold = Uint16(0);
	_logicalCapacityAlertsEnabled = Boolean(false);
	_logicalCapacityWarningAlertThreshold = Uint16(0);
	_logicalCapacityCriticalAlertThreshold = Uint16(0);
	_systemRatioAlertsEnabled = Boolean(false);
	_systemRatioWarningAlertThreshold = Real32(0);
	_systemRatioCriticalAlertThreshold = Real32(0);
	_deduplicationRatioAlertsEnabled = Boolean(false);
	_deduplicationRatioWarningAlertThreshold = Real32(0);
	_deduplicationRatioCriticalAlertThreshold = Real32(0);
	_replicationTrafficAlertsEnabled = Boolean(false);
	_replicationTrafficWarningAlertThreshold = Uint64(0);
	_replicationTrafficCriticalAlertThreshold = Uint64(0);
	
	return false;
}

Boolean UNIX_VTLResourceUsage::finalize()
{
	return false;
}


Boolean UNIX_VTLResourceUsage::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VTLResourceUsage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLResourceUsage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLResourceUsage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLResourceUsage::validateInstance()
{
	return true;
}

