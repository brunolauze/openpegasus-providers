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


UNIX_ImagingMonitorStatisticalData::UNIX_ImagingMonitorStatisticalData(void)
{
}

UNIX_ImagingMonitorStatisticalData::~UNIX_ImagingMonitorStatisticalData(void)
{
}

Boolean UNIX_ImagingMonitorStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ImagingMonitorStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ImagingMonitorStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ImagingMonitorStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_ImagingMonitorStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ImagingMonitorStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_ImagingMonitorStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ImagingMonitorStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_ImagingMonitorStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ImagingMonitorStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_ImagingMonitorStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_ImagingMonitorStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_ImagingMonitorStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_ImagingMonitorStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_ImagingMonitorStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_ImagingMonitorStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_ImagingMonitorStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_ImagingMonitorStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_ImagingMonitorStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_ImagingMonitorStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_ImagingMonitorStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_ImagingMonitorStatisticalData::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_ImagingMonitorStatisticalData::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_ImagingMonitorStatisticalData::getOtherPersistenceType() const
{
	return _otherPersistenceType;
}

void UNIX_ImagingMonitorStatisticalData::setOtherPersistenceType(String &value)
{
	_otherPersistenceType = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getSNMPKeyId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_KEY_ID, getSNMPKeyId());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getSNMPKeyId() const
{
	return _sNMPKeyId;
}

void UNIX_ImagingMonitorStatisticalData::setSNMPKeyId(Uint32 &value)
{
	_sNMPKeyId = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getConfigChanges(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_CHANGES, getConfigChanges());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getConfigChanges() const
{
	return _configChanges;
}

void UNIX_ImagingMonitorStatisticalData::setConfigChanges(Uint32 &value)
{
	_configChanges = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getTotalAlerts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_ALERTS, getTotalAlerts());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getTotalAlerts() const
{
	return _totalAlerts;
}

void UNIX_ImagingMonitorStatisticalData::setTotalAlerts(Uint32 &value)
{
	_totalAlerts = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getCriticalAlerts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS, getCriticalAlerts());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getCriticalAlerts() const
{
	return _criticalAlerts;
}

void UNIX_ImagingMonitorStatisticalData::setCriticalAlerts(Uint32 &value)
{
	_criticalAlerts = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getAbortedJobs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ABORTED_JOBS, getAbortedJobs());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getAbortedJobs() const
{
	return _abortedJobs;
}

void UNIX_ImagingMonitorStatisticalData::setAbortedJobs(Uint32 &value)
{
	_abortedJobs = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getCanceledJobs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CANCELED_JOBS, getCanceledJobs());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getCanceledJobs() const
{
	return _canceledJobs;
}

void UNIX_ImagingMonitorStatisticalData::setCanceledJobs(Uint32 &value)
{
	_canceledJobs = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getCompletedJobs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLETED_JOBS, getCompletedJobs());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getCompletedJobs() const
{
	return _completedJobs;
}

void UNIX_ImagingMonitorStatisticalData::setCompletedJobs(Uint32 &value)
{
	_completedJobs = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getCompletedFinisherJobs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLETED_FINISHER_JOBS, getCompletedFinisherJobs());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getCompletedFinisherJobs() const
{
	return _completedFinisherJobs;
}

void UNIX_ImagingMonitorStatisticalData::setCompletedFinisherJobs(Uint32 &value)
{
	_completedFinisherJobs = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getMemoryAllocErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_ALLOC_ERRORS, getMemoryAllocErrors());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getMemoryAllocErrors() const
{
	return _memoryAllocErrors;
}

void UNIX_ImagingMonitorStatisticalData::setMemoryAllocErrors(Uint32 &value)
{
	_memoryAllocErrors = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getMemoryAllocWarnings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_ALLOC_WARNINGS, getMemoryAllocWarnings());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getMemoryAllocWarnings() const
{
	return _memoryAllocWarnings;
}

void UNIX_ImagingMonitorStatisticalData::setMemoryAllocWarnings(Uint32 &value)
{
	_memoryAllocWarnings = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getStorageAllocErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_ALLOC_ERRORS, getStorageAllocErrors());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getStorageAllocErrors() const
{
	return _storageAllocErrors;
}

void UNIX_ImagingMonitorStatisticalData::setStorageAllocErrors(Uint32 &value)
{
	_storageAllocErrors = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getStorageAllocWarnings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_ALLOC_WARNINGS, getStorageAllocWarnings());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getStorageAllocWarnings() const
{
	return _storageAllocWarnings;
}

void UNIX_ImagingMonitorStatisticalData::setStorageAllocWarnings(Uint32 &value)
{
	_storageAllocWarnings = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getLocalStorageKOctets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_STORAGE_K_OCTETS, getLocalStorageKOctets());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getLocalStorageKOctets() const
{
	return _localStorageKOctets;
}

void UNIX_ImagingMonitorStatisticalData::setLocalStorageKOctets(Uint32 &value)
{
	_localStorageKOctets = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getRemoteStorageKOctets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_STORAGE_K_OCTETS, getRemoteStorageKOctets());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getRemoteStorageKOctets() const
{
	return _remoteStorageKOctets;
}

void UNIX_ImagingMonitorStatisticalData::setRemoteStorageKOctets(Uint32 &value)
{
	_remoteStorageKOctets = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getInputKOctets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_K_OCTETS, getInputKOctets());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getInputKOctets() const
{
	return _inputKOctets;
}

void UNIX_ImagingMonitorStatisticalData::setInputKOctets(Uint32 &value)
{
	_inputKOctets = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getOutputKOctets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_K_OCTETS, getOutputKOctets());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getOutputKOctets() const
{
	return _outputKOctets;
}

void UNIX_ImagingMonitorStatisticalData::setOutputKOctets(Uint32 &value)
{
	_outputKOctets = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getInputMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_MESSAGES, getInputMessages());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getInputMessages() const
{
	return _inputMessages;
}

void UNIX_ImagingMonitorStatisticalData::setInputMessages(Uint32 &value)
{
	_inputMessages = value;
}

Boolean UNIX_ImagingMonitorStatisticalData::getOutputMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_MESSAGES, getOutputMessages());
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::getOutputMessages() const
{
	return _outputMessages;
}

void UNIX_ImagingMonitorStatisticalData::setOutputMessages(Uint32 &value)
{
	_outputMessages = value;
}


void UNIX_ImagingMonitorStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImagingMonitorStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_sNMPKeyId = Uint32(0);
	_configChanges = Uint32(0);
	_totalAlerts = Uint32(0);
	_criticalAlerts = Uint32(0);
	_abortedJobs = Uint32(0);
	_canceledJobs = Uint32(0);
	_completedJobs = Uint32(0);
	_completedFinisherJobs = Uint32(0);
	_memoryAllocErrors = Uint32(0);
	_memoryAllocWarnings = Uint32(0);
	_storageAllocErrors = Uint32(0);
	_storageAllocWarnings = Uint32(0);
	_localStorageKOctets = Uint32(0);
	_remoteStorageKOctets = Uint32(0);
	_inputKOctets = Uint32(0);
	_outputKOctets = Uint32(0);
	_inputMessages = Uint32(0);
	_outputMessages = Uint32(0);

}

Boolean UNIX_ImagingMonitorStatisticalData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PersistenceType"))
			{
				Uint16 persistenceTypeValue;
				property.getValue().get(persistenceTypeValue);
				setPersistenceType(persistenceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPersistenceType"))
			{
				String otherPersistenceTypeValue;
				property.getValue().get(otherPersistenceTypeValue);
				setOtherPersistenceType(otherPersistenceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SNMPKeyId"))
			{
				Uint32 sNMPKeyIdValue;
				property.getValue().get(sNMPKeyIdValue);
				setSNMPKeyId(sNMPKeyIdValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigChanges"))
			{
				Uint32 configChangesValue;
				property.getValue().get(configChangesValue);
				setConfigChanges(configChangesValue);
			}
			else if (String::equal(property.getName().getString(), "TotalAlerts"))
			{
				Uint32 totalAlertsValue;
				property.getValue().get(totalAlertsValue);
				setTotalAlerts(totalAlertsValue);
			}
			else if (String::equal(property.getName().getString(), "CriticalAlerts"))
			{
				Uint32 criticalAlertsValue;
				property.getValue().get(criticalAlertsValue);
				setCriticalAlerts(criticalAlertsValue);
			}
			else if (String::equal(property.getName().getString(), "AbortedJobs"))
			{
				Uint32 abortedJobsValue;
				property.getValue().get(abortedJobsValue);
				setAbortedJobs(abortedJobsValue);
			}
			else if (String::equal(property.getName().getString(), "CanceledJobs"))
			{
				Uint32 canceledJobsValue;
				property.getValue().get(canceledJobsValue);
				setCanceledJobs(canceledJobsValue);
			}
			else if (String::equal(property.getName().getString(), "CompletedJobs"))
			{
				Uint32 completedJobsValue;
				property.getValue().get(completedJobsValue);
				setCompletedJobs(completedJobsValue);
			}
			else if (String::equal(property.getName().getString(), "CompletedFinisherJobs"))
			{
				Uint32 completedFinisherJobsValue;
				property.getValue().get(completedFinisherJobsValue);
				setCompletedFinisherJobs(completedFinisherJobsValue);
			}
			else if (String::equal(property.getName().getString(), "MemoryAllocErrors"))
			{
				Uint32 memoryAllocErrorsValue;
				property.getValue().get(memoryAllocErrorsValue);
				setMemoryAllocErrors(memoryAllocErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "MemoryAllocWarnings"))
			{
				Uint32 memoryAllocWarningsValue;
				property.getValue().get(memoryAllocWarningsValue);
				setMemoryAllocWarnings(memoryAllocWarningsValue);
			}
			else if (String::equal(property.getName().getString(), "StorageAllocErrors"))
			{
				Uint32 storageAllocErrorsValue;
				property.getValue().get(storageAllocErrorsValue);
				setStorageAllocErrors(storageAllocErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "StorageAllocWarnings"))
			{
				Uint32 storageAllocWarningsValue;
				property.getValue().get(storageAllocWarningsValue);
				setStorageAllocWarnings(storageAllocWarningsValue);
			}
			else if (String::equal(property.getName().getString(), "LocalStorageKOctets"))
			{
				Uint32 localStorageKOctetsValue;
				property.getValue().get(localStorageKOctetsValue);
				setLocalStorageKOctets(localStorageKOctetsValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteStorageKOctets"))
			{
				Uint32 remoteStorageKOctetsValue;
				property.getValue().get(remoteStorageKOctetsValue);
				setRemoteStorageKOctets(remoteStorageKOctetsValue);
			}
			else if (String::equal(property.getName().getString(), "InputKOctets"))
			{
				Uint32 inputKOctetsValue;
				property.getValue().get(inputKOctetsValue);
				setInputKOctets(inputKOctetsValue);
			}
			else if (String::equal(property.getName().getString(), "OutputKOctets"))
			{
				Uint32 outputKOctetsValue;
				property.getValue().get(outputKOctetsValue);
				setOutputKOctets(outputKOctetsValue);
			}
			else if (String::equal(property.getName().getString(), "InputMessages"))
			{
				Uint32 inputMessagesValue;
				property.getValue().get(inputMessagesValue);
				setInputMessages(inputMessagesValue);
			}
			else if (String::equal(property.getName().getString(), "OutputMessages"))
			{
				Uint32 outputMessagesValue;
				property.getValue().get(outputMessagesValue);
				setOutputMessages(outputMessagesValue);
			}
	}
	return true;
}

Uint32 UNIX_ImagingMonitorStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_ImagingMonitorStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_ImagingMonitorStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImagingMonitorStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_sNMPKeyId = Uint32(0);
	_configChanges = Uint32(0);
	_totalAlerts = Uint32(0);
	_criticalAlerts = Uint32(0);
	_abortedJobs = Uint32(0);
	_canceledJobs = Uint32(0);
	_completedJobs = Uint32(0);
	_completedFinisherJobs = Uint32(0);
	_memoryAllocErrors = Uint32(0);
	_memoryAllocWarnings = Uint32(0);
	_storageAllocErrors = Uint32(0);
	_storageAllocWarnings = Uint32(0);
	_localStorageKOctets = Uint32(0);
	_remoteStorageKOctets = Uint32(0);
	_inputKOctets = Uint32(0);
	_outputKOctets = Uint32(0);
	_inputMessages = Uint32(0);
	_outputMessages = Uint32(0);
	
	return false;
}

Boolean UNIX_ImagingMonitorStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_ImagingMonitorStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ImagingMonitorStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingMonitorStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingMonitorStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingMonitorStatisticalData::validateInstance()
{
	return true;
}

