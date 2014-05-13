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


UNIX_MPLSProtocolEndpointStats::UNIX_MPLSProtocolEndpointStats(void)
{
}

UNIX_MPLSProtocolEndpointStats::~UNIX_MPLSProtocolEndpointStats(void)
{
}

Boolean UNIX_MPLSProtocolEndpointStats::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSProtocolEndpointStats::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSProtocolEndpointStats::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSProtocolEndpointStats::getCaption() const
{
	return _caption;
}

void UNIX_MPLSProtocolEndpointStats::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSProtocolEndpointStats::getDescription() const
{
	return _description;
}

void UNIX_MPLSProtocolEndpointStats::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSProtocolEndpointStats::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSProtocolEndpointStats::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSProtocolEndpointStats::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSProtocolEndpointStats::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_MPLSProtocolEndpointStats::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_MPLSProtocolEndpointStats::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_MPLSProtocolEndpointStats::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_MPLSProtocolEndpointStats::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_MPLSProtocolEndpointStats::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_MPLSProtocolEndpointStats::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_MPLSProtocolEndpointStats::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_MPLSProtocolEndpointStats::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_MPLSProtocolEndpointStats::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_MPLSProtocolEndpointStats::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getInLabelsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_LABELS_USED, getInLabelsUsed());
	return true;
}

Uint32 UNIX_MPLSProtocolEndpointStats::getInLabelsUsed() const
{
	return _inLabelsUsed;
}

void UNIX_MPLSProtocolEndpointStats::setInLabelsUsed(Uint32 &value)
{
	_inLabelsUsed = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getOutLabelsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_LABELS_USED, getOutLabelsUsed());
	return true;
}

Uint32 UNIX_MPLSProtocolEndpointStats::getOutLabelsUsed() const
{
	return _outLabelsUsed;
}

void UNIX_MPLSProtocolEndpointStats::setOutLabelsUsed(Uint32 &value)
{
	_outLabelsUsed = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getFailedLabelLookups(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAILED_LABEL_LOOKUPS, getFailedLabelLookups());
	return true;
}

Uint32 UNIX_MPLSProtocolEndpointStats::getFailedLabelLookups() const
{
	return _failedLabelLookups;
}

void UNIX_MPLSProtocolEndpointStats::setFailedLabelLookups(Uint32 &value)
{
	_failedLabelLookups = value;
}

Boolean UNIX_MPLSProtocolEndpointStats::getNumberOfPacketsFragmented(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PACKETS_FRAGMENTED, getNumberOfPacketsFragmented());
	return true;
}

Uint32 UNIX_MPLSProtocolEndpointStats::getNumberOfPacketsFragmented() const
{
	return _numberOfPacketsFragmented;
}

void UNIX_MPLSProtocolEndpointStats::setNumberOfPacketsFragmented(Uint32 &value)
{
	_numberOfPacketsFragmented = value;
}


void UNIX_MPLSProtocolEndpointStats::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSProtocolEndpointStats");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_inLabelsUsed = Uint32(0);
	_outLabelsUsed = Uint32(0);
	_failedLabelLookups = Uint32(0);
	_numberOfPacketsFragmented = Uint32(0);

}

Boolean UNIX_MPLSProtocolEndpointStats::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InLabelsUsed"))
			{
				Uint32 inLabelsUsedValue;
				property.getValue().get(inLabelsUsedValue);
				setInLabelsUsed(inLabelsUsedValue);
			}
			else if (String::equal(property.getName().getString(), "OutLabelsUsed"))
			{
				Uint32 outLabelsUsedValue;
				property.getValue().get(outLabelsUsedValue);
				setOutLabelsUsed(outLabelsUsedValue);
			}
			else if (String::equal(property.getName().getString(), "FailedLabelLookups"))
			{
				Uint32 failedLabelLookupsValue;
				property.getValue().get(failedLabelLookupsValue);
				setFailedLabelLookups(failedLabelLookupsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfPacketsFragmented"))
			{
				Uint32 numberOfPacketsFragmentedValue;
				property.getValue().get(numberOfPacketsFragmentedValue);
				setNumberOfPacketsFragmented(numberOfPacketsFragmentedValue);
			}
	}
	return true;
}

Uint32 UNIX_MPLSProtocolEndpointStats::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_MPLSProtocolEndpointStats::initialize()
{
	return false;
}

Boolean UNIX_MPLSProtocolEndpointStats::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSProtocolEndpointStats");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_inLabelsUsed = Uint32(0);
	_outLabelsUsed = Uint32(0);
	_failedLabelLookups = Uint32(0);
	_numberOfPacketsFragmented = Uint32(0);
	
	return false;
}

Boolean UNIX_MPLSProtocolEndpointStats::finalize()
{
	return false;
}


Boolean UNIX_MPLSProtocolEndpointStats::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSProtocolEndpointStats::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSProtocolEndpointStats::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSProtocolEndpointStats::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSProtocolEndpointStats::validateInstance()
{
	return true;
}

