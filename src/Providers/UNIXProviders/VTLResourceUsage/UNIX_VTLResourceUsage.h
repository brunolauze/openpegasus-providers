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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageStatistics
*/


/* **** Description *** */
/*
The CIM_VTLResourceUsage class provides the ability to track the current resource usage of the device in order to detect when the device resources are approaching their limits (and thus further device hardware is needed or some backups needs to be moved to another device). All these device resources need to be tracked at both the whole-device level but also at the virtual library level. Tracking resource usage at the library level is critical because the VLS can be partitioned into multiple logical libraries that use physically separate resources (e.g. different front-end FC ports, different storage pools) so if the device shows 50% full this could mean one library is 100% full and another library is 0% full. It contains data representing used capacity, compression ratios and deduplication ratios at VTL or VLS level.also support the ability to set resource thresholds so that alerts are generated when the device approaches a warning or critical resource threshold (to alert the user they may need to add hardware or reduce workload)
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

			UNIX_VTLResourceUsage:
				Throughput UInt64
				RelativeThroughput UInt16
				UsedPhysicalCapacity Real64
				UsedLogicalCapacity Real64
				UsedPhysicalCapacityOfMax Real32
				UsedLogicalCapacityOfMax Real32
				SystemRatio Real32
				DeduplicationRatio Real32
				InReplicationThroughput UInt64
				OutReplicationThroughput UInt64
				ThresholdCheckInterval UInt32
				ThresholdEnabled Boolean
				ThroughputAlertsEnabled Boolean
				ThroughputWarningAlertThreshold UInt16
				ThroughputCriticalAlertThreshold UInt16
				PhysicalCapacityAlertsEnabled Boolean
				PhysicalCapacityWarningAlertThreshold UInt16
				PhysicalCapacityCriticalAlertThreshold UInt16
				LogicalCapacityAlertsEnabled Boolean
				LogicalCapacityWarningAlertThreshold UInt16
				LogicalCapacityCriticalAlertThreshold UInt16
				SystemRatioAlertsEnabled Boolean
				SystemRatioWarningAlertThreshold Real32
				SystemRatioCriticalAlertThreshold Real32
				DeduplicationRatioAlertsEnabled Boolean
				DeduplicationRatioWarningAlertThreshold Real32
				DeduplicationRatioCriticalAlertThreshold Real32
				ReplicationTrafficAlertsEnabled Boolean
				ReplicationTrafficWarningAlertThreshold UInt64
				ReplicationTrafficCriticalAlertThreshold UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_VTLResourceUsage:


*/

#ifndef __UNIX_VTLRESOURCEUSAGE_H
#define __UNIX_VTLRESOURCEUSAGE_H


#include "CIM_StatisticalData.h"

#include "UNIX_VTLResourceUsageDeps.h"


#ifndef PROPERTY_THROUGHPUT
#define PROPERTY_THROUGHPUT \
					"Throughput"
#endif

#ifndef PROPERTY_RELATIVE_THROUGHPUT
#define PROPERTY_RELATIVE_THROUGHPUT \
					"RelativeThroughput"
#endif

#ifndef PROPERTY_USED_PHYSICAL_CAPACITY
#define PROPERTY_USED_PHYSICAL_CAPACITY \
					"UsedPhysicalCapacity"
#endif

#ifndef PROPERTY_USED_LOGICAL_CAPACITY
#define PROPERTY_USED_LOGICAL_CAPACITY \
					"UsedLogicalCapacity"
#endif

#ifndef PROPERTY_USED_PHYSICAL_CAPACITY_OF_MAX
#define PROPERTY_USED_PHYSICAL_CAPACITY_OF_MAX \
					"UsedPhysicalCapacityOfMax"
#endif

#ifndef PROPERTY_USED_LOGICAL_CAPACITY_OF_MAX
#define PROPERTY_USED_LOGICAL_CAPACITY_OF_MAX \
					"UsedLogicalCapacityOfMax"
#endif

#ifndef PROPERTY_SYSTEM_RATIO
#define PROPERTY_SYSTEM_RATIO \
					"SystemRatio"
#endif

#ifndef PROPERTY_DEDUPLICATION_RATIO
#define PROPERTY_DEDUPLICATION_RATIO \
					"DeduplicationRatio"
#endif

#ifndef PROPERTY_IN_REPLICATION_THROUGHPUT
#define PROPERTY_IN_REPLICATION_THROUGHPUT \
					"InReplicationThroughput"
#endif

#ifndef PROPERTY_OUT_REPLICATION_THROUGHPUT
#define PROPERTY_OUT_REPLICATION_THROUGHPUT \
					"OutReplicationThroughput"
#endif

#ifndef PROPERTY_THRESHOLD_CHECK_INTERVAL
#define PROPERTY_THRESHOLD_CHECK_INTERVAL \
					"ThresholdCheckInterval"
#endif

#ifndef PROPERTY_THRESHOLD_ENABLED
#define PROPERTY_THRESHOLD_ENABLED \
					"ThresholdEnabled"
#endif

#ifndef PROPERTY_THROUGHPUT_ALERTS_ENABLED
#define PROPERTY_THROUGHPUT_ALERTS_ENABLED \
					"ThroughputAlertsEnabled"
#endif

#ifndef PROPERTY_THROUGHPUT_WARNING_ALERT_THRESHOLD
#define PROPERTY_THROUGHPUT_WARNING_ALERT_THRESHOLD \
					"ThroughputWarningAlertThreshold"
#endif

#ifndef PROPERTY_THROUGHPUT_CRITICAL_ALERT_THRESHOLD
#define PROPERTY_THROUGHPUT_CRITICAL_ALERT_THRESHOLD \
					"ThroughputCriticalAlertThreshold"
#endif

#ifndef PROPERTY_PHYSICAL_CAPACITY_ALERTS_ENABLED
#define PROPERTY_PHYSICAL_CAPACITY_ALERTS_ENABLED \
					"PhysicalCapacityAlertsEnabled"
#endif

#ifndef PROPERTY_PHYSICAL_CAPACITY_WARNING_ALERT_THRESHOLD
#define PROPERTY_PHYSICAL_CAPACITY_WARNING_ALERT_THRESHOLD \
					"PhysicalCapacityWarningAlertThreshold"
#endif

#ifndef PROPERTY_PHYSICAL_CAPACITY_CRITICAL_ALERT_THRESHOLD
#define PROPERTY_PHYSICAL_CAPACITY_CRITICAL_ALERT_THRESHOLD \
					"PhysicalCapacityCriticalAlertThreshold"
#endif

#ifndef PROPERTY_LOGICAL_CAPACITY_ALERTS_ENABLED
#define PROPERTY_LOGICAL_CAPACITY_ALERTS_ENABLED \
					"LogicalCapacityAlertsEnabled"
#endif

#ifndef PROPERTY_LOGICAL_CAPACITY_WARNING_ALERT_THRESHOLD
#define PROPERTY_LOGICAL_CAPACITY_WARNING_ALERT_THRESHOLD \
					"LogicalCapacityWarningAlertThreshold"
#endif

#ifndef PROPERTY_LOGICAL_CAPACITY_CRITICAL_ALERT_THRESHOLD
#define PROPERTY_LOGICAL_CAPACITY_CRITICAL_ALERT_THRESHOLD \
					"LogicalCapacityCriticalAlertThreshold"
#endif

#ifndef PROPERTY_SYSTEM_RATIO_ALERTS_ENABLED
#define PROPERTY_SYSTEM_RATIO_ALERTS_ENABLED \
					"SystemRatioAlertsEnabled"
#endif

#ifndef PROPERTY_SYSTEM_RATIO_WARNING_ALERT_THRESHOLD
#define PROPERTY_SYSTEM_RATIO_WARNING_ALERT_THRESHOLD \
					"SystemRatioWarningAlertThreshold"
#endif

#ifndef PROPERTY_SYSTEM_RATIO_CRITICAL_ALERT_THRESHOLD
#define PROPERTY_SYSTEM_RATIO_CRITICAL_ALERT_THRESHOLD \
					"SystemRatioCriticalAlertThreshold"
#endif

#ifndef PROPERTY_DEDUPLICATION_RATIO_ALERTS_ENABLED
#define PROPERTY_DEDUPLICATION_RATIO_ALERTS_ENABLED \
					"DeduplicationRatioAlertsEnabled"
#endif

#ifndef PROPERTY_DEDUPLICATION_RATIO_WARNING_ALERT_THRESHOLD
#define PROPERTY_DEDUPLICATION_RATIO_WARNING_ALERT_THRESHOLD \
					"DeduplicationRatioWarningAlertThreshold"
#endif

#ifndef PROPERTY_DEDUPLICATION_RATIO_CRITICAL_ALERT_THRESHOLD
#define PROPERTY_DEDUPLICATION_RATIO_CRITICAL_ALERT_THRESHOLD \
					"DeduplicationRatioCriticalAlertThreshold"
#endif

#ifndef PROPERTY_REPLICATION_TRAFFIC_ALERTS_ENABLED
#define PROPERTY_REPLICATION_TRAFFIC_ALERTS_ENABLED \
					"ReplicationTrafficAlertsEnabled"
#endif

#ifndef PROPERTY_REPLICATION_TRAFFIC_WARNING_ALERT_THRESHOLD
#define PROPERTY_REPLICATION_TRAFFIC_WARNING_ALERT_THRESHOLD \
					"ReplicationTrafficWarningAlertThreshold"
#endif

#ifndef PROPERTY_REPLICATION_TRAFFIC_CRITICAL_ALERT_THRESHOLD
#define PROPERTY_REPLICATION_TRAFFIC_CRITICAL_ALERT_THRESHOLD \
					"ReplicationTrafficCriticalAlertThreshold"
#endif



class UNIX_VTLResourceUsage :
	public CIM_StatisticalData
{
public:

	UNIX_VTLResourceUsage();
	~UNIX_VTLResourceUsage();

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
	virtual Boolean getThroughput(CIMProperty&) const;
	virtual Uint64 getThroughput() const;
	virtual void setThroughput(Uint64&);
	virtual Boolean getRelativeThroughput(CIMProperty&) const;
	virtual Uint16 getRelativeThroughput() const;
	virtual void setRelativeThroughput(Uint16&);
	virtual Boolean getUsedPhysicalCapacity(CIMProperty&) const;
	virtual Real64 getUsedPhysicalCapacity() const;
	virtual void setUsedPhysicalCapacity(Real64&);
	virtual Boolean getUsedLogicalCapacity(CIMProperty&) const;
	virtual Real64 getUsedLogicalCapacity() const;
	virtual void setUsedLogicalCapacity(Real64&);
	virtual Boolean getUsedPhysicalCapacityOfMax(CIMProperty&) const;
	virtual Real32 getUsedPhysicalCapacityOfMax() const;
	virtual void setUsedPhysicalCapacityOfMax(Real32&);
	virtual Boolean getUsedLogicalCapacityOfMax(CIMProperty&) const;
	virtual Real32 getUsedLogicalCapacityOfMax() const;
	virtual void setUsedLogicalCapacityOfMax(Real32&);
	virtual Boolean getSystemRatio(CIMProperty&) const;
	virtual Real32 getSystemRatio() const;
	virtual void setSystemRatio(Real32&);
	virtual Boolean getDeduplicationRatio(CIMProperty&) const;
	virtual Real32 getDeduplicationRatio() const;
	virtual void setDeduplicationRatio(Real32&);
	virtual Boolean getInReplicationThroughput(CIMProperty&) const;
	virtual Uint64 getInReplicationThroughput() const;
	virtual void setInReplicationThroughput(Uint64&);
	virtual Boolean getOutReplicationThroughput(CIMProperty&) const;
	virtual Uint64 getOutReplicationThroughput() const;
	virtual void setOutReplicationThroughput(Uint64&);
	virtual Boolean getThresholdCheckInterval(CIMProperty&) const;
	virtual Uint32 getThresholdCheckInterval() const;
	virtual void setThresholdCheckInterval(Uint32&);
	virtual Boolean getThresholdEnabled(CIMProperty&) const;
	virtual Boolean getThresholdEnabled() const;
	virtual void setThresholdEnabled(Boolean&);
	virtual Boolean getThroughputAlertsEnabled(CIMProperty&) const;
	virtual Boolean getThroughputAlertsEnabled() const;
	virtual void setThroughputAlertsEnabled(Boolean&);
	virtual Boolean getThroughputWarningAlertThreshold(CIMProperty&) const;
	virtual Uint16 getThroughputWarningAlertThreshold() const;
	virtual void setThroughputWarningAlertThreshold(Uint16&);
	virtual Boolean getThroughputCriticalAlertThreshold(CIMProperty&) const;
	virtual Uint16 getThroughputCriticalAlertThreshold() const;
	virtual void setThroughputCriticalAlertThreshold(Uint16&);
	virtual Boolean getPhysicalCapacityAlertsEnabled(CIMProperty&) const;
	virtual Boolean getPhysicalCapacityAlertsEnabled() const;
	virtual void setPhysicalCapacityAlertsEnabled(Boolean&);
	virtual Boolean getPhysicalCapacityWarningAlertThreshold(CIMProperty&) const;
	virtual Uint16 getPhysicalCapacityWarningAlertThreshold() const;
	virtual void setPhysicalCapacityWarningAlertThreshold(Uint16&);
	virtual Boolean getPhysicalCapacityCriticalAlertThreshold(CIMProperty&) const;
	virtual Uint16 getPhysicalCapacityCriticalAlertThreshold() const;
	virtual void setPhysicalCapacityCriticalAlertThreshold(Uint16&);
	virtual Boolean getLogicalCapacityAlertsEnabled(CIMProperty&) const;
	virtual Boolean getLogicalCapacityAlertsEnabled() const;
	virtual void setLogicalCapacityAlertsEnabled(Boolean&);
	virtual Boolean getLogicalCapacityWarningAlertThreshold(CIMProperty&) const;
	virtual Uint16 getLogicalCapacityWarningAlertThreshold() const;
	virtual void setLogicalCapacityWarningAlertThreshold(Uint16&);
	virtual Boolean getLogicalCapacityCriticalAlertThreshold(CIMProperty&) const;
	virtual Uint16 getLogicalCapacityCriticalAlertThreshold() const;
	virtual void setLogicalCapacityCriticalAlertThreshold(Uint16&);
	virtual Boolean getSystemRatioAlertsEnabled(CIMProperty&) const;
	virtual Boolean getSystemRatioAlertsEnabled() const;
	virtual void setSystemRatioAlertsEnabled(Boolean&);
	virtual Boolean getSystemRatioWarningAlertThreshold(CIMProperty&) const;
	virtual Real32 getSystemRatioWarningAlertThreshold() const;
	virtual void setSystemRatioWarningAlertThreshold(Real32&);
	virtual Boolean getSystemRatioCriticalAlertThreshold(CIMProperty&) const;
	virtual Real32 getSystemRatioCriticalAlertThreshold() const;
	virtual void setSystemRatioCriticalAlertThreshold(Real32&);
	virtual Boolean getDeduplicationRatioAlertsEnabled(CIMProperty&) const;
	virtual Boolean getDeduplicationRatioAlertsEnabled() const;
	virtual void setDeduplicationRatioAlertsEnabled(Boolean&);
	virtual Boolean getDeduplicationRatioWarningAlertThreshold(CIMProperty&) const;
	virtual Real32 getDeduplicationRatioWarningAlertThreshold() const;
	virtual void setDeduplicationRatioWarningAlertThreshold(Real32&);
	virtual Boolean getDeduplicationRatioCriticalAlertThreshold(CIMProperty&) const;
	virtual Real32 getDeduplicationRatioCriticalAlertThreshold() const;
	virtual void setDeduplicationRatioCriticalAlertThreshold(Real32&);
	virtual Boolean getReplicationTrafficAlertsEnabled(CIMProperty&) const;
	virtual Boolean getReplicationTrafficAlertsEnabled() const;
	virtual void setReplicationTrafficAlertsEnabled(Boolean&);
	virtual Boolean getReplicationTrafficWarningAlertThreshold(CIMProperty&) const;
	virtual Uint64 getReplicationTrafficWarningAlertThreshold() const;
	virtual void setReplicationTrafficWarningAlertThreshold(Uint64&);
	virtual Boolean getReplicationTrafficCriticalAlertThreshold(CIMProperty&) const;
	virtual Uint64 getReplicationTrafficCriticalAlertThreshold() const;
	virtual void setReplicationTrafficCriticalAlertThreshold(Uint64&);

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
	Uint64 _throughput;
	Uint16 _relativeThroughput;
	Real64 _usedPhysicalCapacity;
	Real64 _usedLogicalCapacity;
	Real32 _usedPhysicalCapacityOfMax;
	Real32 _usedLogicalCapacityOfMax;
	Real32 _systemRatio;
	Real32 _deduplicationRatio;
	Uint64 _inReplicationThroughput;
	Uint64 _outReplicationThroughput;
	Uint32 _thresholdCheckInterval;
	Boolean _thresholdEnabled;
	Boolean _throughputAlertsEnabled;
	Uint16 _throughputWarningAlertThreshold;
	Uint16 _throughputCriticalAlertThreshold;
	Boolean _physicalCapacityAlertsEnabled;
	Uint16 _physicalCapacityWarningAlertThreshold;
	Uint16 _physicalCapacityCriticalAlertThreshold;
	Boolean _logicalCapacityAlertsEnabled;
	Uint16 _logicalCapacityWarningAlertThreshold;
	Uint16 _logicalCapacityCriticalAlertThreshold;
	Boolean _systemRatioAlertsEnabled;
	Real32 _systemRatioWarningAlertThreshold;
	Real32 _systemRatioCriticalAlertThreshold;
	Boolean _deduplicationRatioAlertsEnabled;
	Real32 _deduplicationRatioWarningAlertThreshold;
	Real32 _deduplicationRatioCriticalAlertThreshold;
	Boolean _replicationTrafficAlertsEnabled;
	Uint64 _replicationTrafficWarningAlertThreshold;
	Uint64 _replicationTrafficCriticalAlertThreshold;

#	include "UNIX_VTLResourceUsagePrivate.h"


};

#endif /* UNIX_VTLRESOURCEUSAGE */
