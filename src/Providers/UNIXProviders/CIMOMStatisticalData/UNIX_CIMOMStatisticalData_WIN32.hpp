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


UNIX_CIMOMStatisticalData::UNIX_CIMOMStatisticalData(void)
{
}

UNIX_CIMOMStatisticalData::~UNIX_CIMOMStatisticalData(void)
{
}

Boolean UNIX_CIMOMStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CIMOMStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CIMOMStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CIMOMStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CIMOMStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_CIMOMStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CIMOMStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CIMOMStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_CIMOMStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CIMOMStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CIMOMStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_CIMOMStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CIMOMStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CIMOMStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_CIMOMStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CIMOMStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_CIMOMStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_CIMOMStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_CIMOMStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_CIMOMStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_CIMOMStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_CIMOMStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_CIMOMStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_CIMOMStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_CIMOMStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_CIMOMStatisticalData::getOperationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATION_TYPE, getOperationType());
	return true;
}

Uint16 UNIX_CIMOMStatisticalData::getOperationType() const
{
	return _operationType;
}

void UNIX_CIMOMStatisticalData::setOperationType(Uint16 &value)
{
	_operationType = value;
}

Boolean UNIX_CIMOMStatisticalData::getOtherOperationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_OPERATION_TYPE, getOtherOperationType());
	return true;
}

String UNIX_CIMOMStatisticalData::getOtherOperationType() const
{
	return _otherOperationType;
}

void UNIX_CIMOMStatisticalData::setOtherOperationType(String &value)
{
	_otherOperationType = value;
}

Boolean UNIX_CIMOMStatisticalData::getNumberOfOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_OPERATIONS, getNumberOfOperations());
	return true;
}

Uint64 UNIX_CIMOMStatisticalData::getNumberOfOperations() const
{
	return _numberOfOperations;
}

void UNIX_CIMOMStatisticalData::setNumberOfOperations(Uint64 &value)
{
	_numberOfOperations = value;
}

Boolean UNIX_CIMOMStatisticalData::getCimomElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIMOM_ELAPSED_TIME, getCimomElapsedTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getCimomElapsedTime() const
{
	return _cimomElapsedTime;
}

void UNIX_CIMOMStatisticalData::setCimomElapsedTime(CIMDateTime &value)
{
	_cimomElapsedTime = value;
}

Boolean UNIX_CIMOMStatisticalData::getProviderElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROVIDER_ELAPSED_TIME, getProviderElapsedTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getProviderElapsedTime() const
{
	return _providerElapsedTime;
}

void UNIX_CIMOMStatisticalData::setProviderElapsedTime(CIMDateTime &value)
{
	_providerElapsedTime = value;
}

Boolean UNIX_CIMOMStatisticalData::getRequestSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUEST_SIZE, getRequestSize());
	return true;
}

Uint64 UNIX_CIMOMStatisticalData::getRequestSize() const
{
	return _requestSize;
}

void UNIX_CIMOMStatisticalData::setRequestSize(Uint64 &value)
{
	_requestSize = value;
}

Boolean UNIX_CIMOMStatisticalData::getResponseSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONSE_SIZE, getResponseSize());
	return true;
}

Uint64 UNIX_CIMOMStatisticalData::getResponseSize() const
{
	return _responseSize;
}

void UNIX_CIMOMStatisticalData::setResponseSize(Uint64 &value)
{
	_responseSize = value;
}


void UNIX_CIMOMStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CIMOMStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_operationType = Uint16(0);
	_otherOperationType = String ("");
	_numberOfOperations = Uint64(0);
	_cimomElapsedTime = CIMHelper::getCurrentTime();
	_providerElapsedTime = CIMHelper::getCurrentTime();
	_requestSize = Uint64(0);
	_responseSize = Uint64(0);

}

Boolean UNIX_CIMOMStatisticalData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "OperationType"))
			{
				Uint16 operationTypeValue;
				property.getValue().get(operationTypeValue);
				setOperationType(operationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherOperationType"))
			{
				String otherOperationTypeValue;
				property.getValue().get(otherOperationTypeValue);
				setOtherOperationType(otherOperationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfOperations"))
			{
				Uint64 numberOfOperationsValue;
				property.getValue().get(numberOfOperationsValue);
				setNumberOfOperations(numberOfOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "CimomElapsedTime"))
			{
				CIMDateTime cimomElapsedTimeValue;
				property.getValue().get(cimomElapsedTimeValue);
				setCimomElapsedTime(cimomElapsedTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ProviderElapsedTime"))
			{
				CIMDateTime providerElapsedTimeValue;
				property.getValue().get(providerElapsedTimeValue);
				setProviderElapsedTime(providerElapsedTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RequestSize"))
			{
				Uint64 requestSizeValue;
				property.getValue().get(requestSizeValue);
				setRequestSize(requestSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ResponseSize"))
			{
				Uint64 responseSizeValue;
				property.getValue().get(responseSizeValue);
				setResponseSize(responseSizeValue);
			}
	}
	return true;
}

Uint32 UNIX_CIMOMStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_CIMOMStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_CIMOMStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CIMOMStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_operationType = Uint16(0);
	_otherOperationType = String ("");
	_numberOfOperations = Uint64(0);
	_cimomElapsedTime = CIMHelper::getCurrentTime();
	_providerElapsedTime = CIMHelper::getCurrentTime();
	_requestSize = Uint64(0);
	_responseSize = Uint64(0);
	
	return false;
}

Boolean UNIX_CIMOMStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_CIMOMStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CIMOMStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIMOMStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIMOMStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIMOMStatisticalData::validateInstance()
{
	return true;
}

