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
2.20.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Statistics
*/


/* **** Description *** */
/*
This class defines the monitoring, availability, and traffic ImagingStatisticalData associated with an imaging system (e.g., ComputerSystem), imaging service (e.g., PrintService), imaging device (e.g., Printer), imaging job (e.g., PrintJob), or any other imaging element. 
See: Section 4 Overview in PWG Counter MIB v2 (PWG 5106.3).
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

			CIM_ImagingStatisticalData:
				PersistenceType UInt16
				OtherPersistenceType String
				SNMPKeyId UInt32

			UNIX_ImagingMonitorStatisticalData:
				ConfigChanges UInt32
				TotalAlerts UInt32
				CriticalAlerts UInt32
				AbortedJobs UInt32
				CanceledJobs UInt32
				CompletedJobs UInt32
				CompletedFinisherJobs UInt32
				MemoryAllocErrors UInt32
				MemoryAllocWarnings UInt32
				StorageAllocErrors UInt32
				StorageAllocWarnings UInt32
				LocalStorageKOctets UInt32
				RemoteStorageKOctets UInt32
				InputKOctets UInt32
				OutputKOctets UInt32
				InputMessages UInt32
				OutputMessages UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_ImagingStatisticalData:

			UNIX_ImagingMonitorStatisticalData:


*/

#ifndef __UNIX_IMAGINGMONITORSTATISTICALDATA_H
#define __UNIX_IMAGINGMONITORSTATISTICALDATA_H


#include "CIM_ImagingStatisticalData.h"

#include "UNIX_ImagingMonitorStatisticalDataDeps.h"


#ifndef PROPERTY_CONFIG_CHANGES
#define PROPERTY_CONFIG_CHANGES \
					"ConfigChanges"
#endif

#ifndef PROPERTY_TOTAL_ALERTS
#define PROPERTY_TOTAL_ALERTS \
					"TotalAlerts"
#endif

#ifndef PROPERTY_CRITICAL_ALERTS
#define PROPERTY_CRITICAL_ALERTS \
					"CriticalAlerts"
#endif

#ifndef PROPERTY_ABORTED_JOBS
#define PROPERTY_ABORTED_JOBS \
					"AbortedJobs"
#endif

#ifndef PROPERTY_CANCELED_JOBS
#define PROPERTY_CANCELED_JOBS \
					"CanceledJobs"
#endif

#ifndef PROPERTY_COMPLETED_JOBS
#define PROPERTY_COMPLETED_JOBS \
					"CompletedJobs"
#endif

#ifndef PROPERTY_COMPLETED_FINISHER_JOBS
#define PROPERTY_COMPLETED_FINISHER_JOBS \
					"CompletedFinisherJobs"
#endif

#ifndef PROPERTY_MEMORY_ALLOC_ERRORS
#define PROPERTY_MEMORY_ALLOC_ERRORS \
					"MemoryAllocErrors"
#endif

#ifndef PROPERTY_MEMORY_ALLOC_WARNINGS
#define PROPERTY_MEMORY_ALLOC_WARNINGS \
					"MemoryAllocWarnings"
#endif

#ifndef PROPERTY_STORAGE_ALLOC_ERRORS
#define PROPERTY_STORAGE_ALLOC_ERRORS \
					"StorageAllocErrors"
#endif

#ifndef PROPERTY_STORAGE_ALLOC_WARNINGS
#define PROPERTY_STORAGE_ALLOC_WARNINGS \
					"StorageAllocWarnings"
#endif

#ifndef PROPERTY_LOCAL_STORAGE_K_OCTETS
#define PROPERTY_LOCAL_STORAGE_K_OCTETS \
					"LocalStorageKOctets"
#endif

#ifndef PROPERTY_REMOTE_STORAGE_K_OCTETS
#define PROPERTY_REMOTE_STORAGE_K_OCTETS \
					"RemoteStorageKOctets"
#endif

#ifndef PROPERTY_INPUT_K_OCTETS
#define PROPERTY_INPUT_K_OCTETS \
					"InputKOctets"
#endif

#ifndef PROPERTY_OUTPUT_K_OCTETS
#define PROPERTY_OUTPUT_K_OCTETS \
					"OutputKOctets"
#endif

#ifndef PROPERTY_INPUT_MESSAGES
#define PROPERTY_INPUT_MESSAGES \
					"InputMessages"
#endif

#ifndef PROPERTY_OUTPUT_MESSAGES
#define PROPERTY_OUTPUT_MESSAGES \
					"OutputMessages"
#endif



class UNIX_ImagingMonitorStatisticalData :
	public CIM_ImagingStatisticalData
{
public:

	UNIX_ImagingMonitorStatisticalData();
	~UNIX_ImagingMonitorStatisticalData();

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
	virtual Boolean getPersistenceType(CIMProperty&) const;
	virtual Uint16 getPersistenceType() const;
	virtual void setPersistenceType(Uint16&);
	virtual Boolean getOtherPersistenceType(CIMProperty&) const;
	virtual String getOtherPersistenceType() const;
	virtual void setOtherPersistenceType(String&);
	virtual Boolean getSNMPKeyId(CIMProperty&) const;
	virtual Uint32 getSNMPKeyId() const;
	virtual void setSNMPKeyId(Uint32&);
	virtual Boolean getConfigChanges(CIMProperty&) const;
	virtual Uint32 getConfigChanges() const;
	virtual void setConfigChanges(Uint32&);
	virtual Boolean getTotalAlerts(CIMProperty&) const;
	virtual Uint32 getTotalAlerts() const;
	virtual void setTotalAlerts(Uint32&);
	virtual Boolean getCriticalAlerts(CIMProperty&) const;
	virtual Uint32 getCriticalAlerts() const;
	virtual void setCriticalAlerts(Uint32&);
	virtual Boolean getAbortedJobs(CIMProperty&) const;
	virtual Uint32 getAbortedJobs() const;
	virtual void setAbortedJobs(Uint32&);
	virtual Boolean getCanceledJobs(CIMProperty&) const;
	virtual Uint32 getCanceledJobs() const;
	virtual void setCanceledJobs(Uint32&);
	virtual Boolean getCompletedJobs(CIMProperty&) const;
	virtual Uint32 getCompletedJobs() const;
	virtual void setCompletedJobs(Uint32&);
	virtual Boolean getCompletedFinisherJobs(CIMProperty&) const;
	virtual Uint32 getCompletedFinisherJobs() const;
	virtual void setCompletedFinisherJobs(Uint32&);
	virtual Boolean getMemoryAllocErrors(CIMProperty&) const;
	virtual Uint32 getMemoryAllocErrors() const;
	virtual void setMemoryAllocErrors(Uint32&);
	virtual Boolean getMemoryAllocWarnings(CIMProperty&) const;
	virtual Uint32 getMemoryAllocWarnings() const;
	virtual void setMemoryAllocWarnings(Uint32&);
	virtual Boolean getStorageAllocErrors(CIMProperty&) const;
	virtual Uint32 getStorageAllocErrors() const;
	virtual void setStorageAllocErrors(Uint32&);
	virtual Boolean getStorageAllocWarnings(CIMProperty&) const;
	virtual Uint32 getStorageAllocWarnings() const;
	virtual void setStorageAllocWarnings(Uint32&);
	virtual Boolean getLocalStorageKOctets(CIMProperty&) const;
	virtual Uint32 getLocalStorageKOctets() const;
	virtual void setLocalStorageKOctets(Uint32&);
	virtual Boolean getRemoteStorageKOctets(CIMProperty&) const;
	virtual Uint32 getRemoteStorageKOctets() const;
	virtual void setRemoteStorageKOctets(Uint32&);
	virtual Boolean getInputKOctets(CIMProperty&) const;
	virtual Uint32 getInputKOctets() const;
	virtual void setInputKOctets(Uint32&);
	virtual Boolean getOutputKOctets(CIMProperty&) const;
	virtual Uint32 getOutputKOctets() const;
	virtual void setOutputKOctets(Uint32&);
	virtual Boolean getInputMessages(CIMProperty&) const;
	virtual Uint32 getInputMessages() const;
	virtual void setInputMessages(Uint32&);
	virtual Boolean getOutputMessages(CIMProperty&) const;
	virtual Uint32 getOutputMessages() const;
	virtual void setOutputMessages(Uint32&);

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
	Uint16 _persistenceType;
	String _otherPersistenceType;
	Uint32 _sNMPKeyId;
	Uint32 _configChanges;
	Uint32 _totalAlerts;
	Uint32 _criticalAlerts;
	Uint32 _abortedJobs;
	Uint32 _canceledJobs;
	Uint32 _completedJobs;
	Uint32 _completedFinisherJobs;
	Uint32 _memoryAllocErrors;
	Uint32 _memoryAllocWarnings;
	Uint32 _storageAllocErrors;
	Uint32 _storageAllocWarnings;
	Uint32 _localStorageKOctets;
	Uint32 _remoteStorageKOctets;
	Uint32 _inputKOctets;
	Uint32 _outputKOctets;
	Uint32 _inputMessages;
	Uint32 _outputMessages;

#	include "UNIX_ImagingMonitorStatisticalDataPrivate.h"


};

#endif /* UNIX_IMAGINGMONITORSTATISTICALDATA */
