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


UNIX_FCPortRateStatistics::UNIX_FCPortRateStatistics(void)
{
}

UNIX_FCPortRateStatistics::~UNIX_FCPortRateStatistics(void)
{
}

Boolean UNIX_FCPortRateStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPortRateStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCPortRateStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCPortRateStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPortRateStatistics::getCaption() const
{
	return _caption;
}

void UNIX_FCPortRateStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCPortRateStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPortRateStatistics::getDescription() const
{
	return _description;
}

void UNIX_FCPortRateStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCPortRateStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPortRateStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_FCPortRateStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCPortRateStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_FCPortRateStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCPortRateStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortRateStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_FCPortRateStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_FCPortRateStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortRateStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_FCPortRateStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_FCPortRateStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_FCPortRateStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_FCPortRateStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_FCPortRateStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_FCPortRateStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_FCPortRateStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_FCPortRateStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_FCPortRateStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_FCPortRateStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_FCPortRateStatistics::getTxFrameRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_FRAME_RATE, getTxFrameRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getTxFrameRate() const
{
	return _txFrameRate;
}

void UNIX_FCPortRateStatistics::setTxFrameRate(Uint64 &value)
{
	_txFrameRate = value;
}

Boolean UNIX_FCPortRateStatistics::getRxFrameRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_FRAME_RATE, getRxFrameRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getRxFrameRate() const
{
	return _rxFrameRate;
}

void UNIX_FCPortRateStatistics::setRxFrameRate(Uint64 &value)
{
	_rxFrameRate = value;
}

Boolean UNIX_FCPortRateStatistics::getMaxTxFrameRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TX_FRAME_RATE, getMaxTxFrameRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getMaxTxFrameRate() const
{
	return _maxTxFrameRate;
}

void UNIX_FCPortRateStatistics::setMaxTxFrameRate(Uint64 &value)
{
	_maxTxFrameRate = value;
}

Boolean UNIX_FCPortRateStatistics::getMaxRxFrameRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RX_FRAME_RATE, getMaxRxFrameRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getMaxRxFrameRate() const
{
	return _maxRxFrameRate;
}

void UNIX_FCPortRateStatistics::setMaxRxFrameRate(Uint64 &value)
{
	_maxRxFrameRate = value;
}

Boolean UNIX_FCPortRateStatistics::getTxRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_RATE, getTxRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getTxRate() const
{
	return _txRate;
}

void UNIX_FCPortRateStatistics::setTxRate(Uint64 &value)
{
	_txRate = value;
}

Boolean UNIX_FCPortRateStatistics::getRxRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_RATE, getRxRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getRxRate() const
{
	return _rxRate;
}

void UNIX_FCPortRateStatistics::setRxRate(Uint64 &value)
{
	_rxRate = value;
}

Boolean UNIX_FCPortRateStatistics::getPeakTxRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEAK_TX_RATE, getPeakTxRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getPeakTxRate() const
{
	return _peakTxRate;
}

void UNIX_FCPortRateStatistics::setPeakTxRate(Uint64 &value)
{
	_peakTxRate = value;
}

Boolean UNIX_FCPortRateStatistics::getPeakRxRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEAK_RX_RATE, getPeakRxRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getPeakRxRate() const
{
	return _peakRxRate;
}

void UNIX_FCPortRateStatistics::setPeakRxRate(Uint64 &value)
{
	_peakRxRate = value;
}


void UNIX_FCPortRateStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortRateStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_txFrameRate = Uint64(0);
	_rxFrameRate = Uint64(0);
	_maxTxFrameRate = Uint64(0);
	_maxRxFrameRate = Uint64(0);
	_txRate = Uint64(0);
	_rxRate = Uint64(0);
	_peakTxRate = Uint64(0);
	_peakRxRate = Uint64(0);

}

Boolean UNIX_FCPortRateStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TxFrameRate"))
			{
				Uint64 txFrameRateValue;
				property.getValue().get(txFrameRateValue);
				setTxFrameRate(txFrameRateValue);
			}
			else if (String::equal(property.getName().getString(), "RxFrameRate"))
			{
				Uint64 rxFrameRateValue;
				property.getValue().get(rxFrameRateValue);
				setRxFrameRate(rxFrameRateValue);
			}
			else if (String::equal(property.getName().getString(), "MaxTxFrameRate"))
			{
				Uint64 maxTxFrameRateValue;
				property.getValue().get(maxTxFrameRateValue);
				setMaxTxFrameRate(maxTxFrameRateValue);
			}
			else if (String::equal(property.getName().getString(), "MaxRxFrameRate"))
			{
				Uint64 maxRxFrameRateValue;
				property.getValue().get(maxRxFrameRateValue);
				setMaxRxFrameRate(maxRxFrameRateValue);
			}
			else if (String::equal(property.getName().getString(), "TxRate"))
			{
				Uint64 txRateValue;
				property.getValue().get(txRateValue);
				setTxRate(txRateValue);
			}
			else if (String::equal(property.getName().getString(), "RxRate"))
			{
				Uint64 rxRateValue;
				property.getValue().get(rxRateValue);
				setRxRate(rxRateValue);
			}
			else if (String::equal(property.getName().getString(), "PeakTxRate"))
			{
				Uint64 peakTxRateValue;
				property.getValue().get(peakTxRateValue);
				setPeakTxRate(peakTxRateValue);
			}
			else if (String::equal(property.getName().getString(), "PeakRxRate"))
			{
				Uint64 peakRxRateValue;
				property.getValue().get(peakRxRateValue);
				setPeakRxRate(peakRxRateValue);
			}
	}
	return true;
}

Uint32 UNIX_FCPortRateStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_FCPortRateStatistics::initialize()
{
	return false;
}

Boolean UNIX_FCPortRateStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortRateStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_txFrameRate = Uint64(0);
	_rxFrameRate = Uint64(0);
	_maxTxFrameRate = Uint64(0);
	_maxRxFrameRate = Uint64(0);
	_txRate = Uint64(0);
	_rxRate = Uint64(0);
	_peakTxRate = Uint64(0);
	_peakRxRate = Uint64(0);
	
	return false;
}

Boolean UNIX_FCPortRateStatistics::finalize()
{
	return false;
}


Boolean UNIX_FCPortRateStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCPortRateStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortRateStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortRateStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortRateStatistics::validateInstance()
{
	return true;
}

