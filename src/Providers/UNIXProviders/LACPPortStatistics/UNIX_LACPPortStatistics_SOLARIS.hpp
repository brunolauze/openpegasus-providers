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


UNIX_LACPPortStatistics::UNIX_LACPPortStatistics(void)
{
}

UNIX_LACPPortStatistics::~UNIX_LACPPortStatistics(void)
{
}

Boolean UNIX_LACPPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LACPPortStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LACPPortStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LACPPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LACPPortStatistics::getCaption() const
{
	return _caption;
}

void UNIX_LACPPortStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LACPPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LACPPortStatistics::getDescription() const
{
	return _description;
}

void UNIX_LACPPortStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LACPPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LACPPortStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_LACPPortStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LACPPortStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LACPPortStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_LACPPortStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LACPPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_LACPPortStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_LACPPortStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_LACPPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_LACPPortStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_LACPPortStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_LACPPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_LACPPortStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_LACPPortStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_LACPPortStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_LACPPortStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_LACPPortStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_LACPPortStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_LACPPortStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_LACPPortStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_LACPPortStatistics::getPortStatsLACPDUsRx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_STATS_L_A_C_P_D_US_RX, getPortStatsLACPDUsRx());
	return true;
}

Uint32 UNIX_LACPPortStatistics::getPortStatsLACPDUsRx() const
{
	return _portStatsLACPDUsRx;
}

void UNIX_LACPPortStatistics::setPortStatsLACPDUsRx(Uint32 &value)
{
	_portStatsLACPDUsRx = value;
}

Boolean UNIX_LACPPortStatistics::getPortStatsMarkerPDUsRx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_STATS_MARKER_P_D_US_RX, getPortStatsMarkerPDUsRx());
	return true;
}

Uint32 UNIX_LACPPortStatistics::getPortStatsMarkerPDUsRx() const
{
	return _portStatsMarkerPDUsRx;
}

void UNIX_LACPPortStatistics::setPortStatsMarkerPDUsRx(Uint32 &value)
{
	_portStatsMarkerPDUsRx = value;
}

Boolean UNIX_LACPPortStatistics::getPortStatsMarkerResponsePDUsRx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_STATS_MARKER_RESPONSE_P_D_US_RX, getPortStatsMarkerResponsePDUsRx());
	return true;
}

Uint32 UNIX_LACPPortStatistics::getPortStatsMarkerResponsePDUsRx() const
{
	return _portStatsMarkerResponsePDUsRx;
}

void UNIX_LACPPortStatistics::setPortStatsMarkerResponsePDUsRx(Uint32 &value)
{
	_portStatsMarkerResponsePDUsRx = value;
}

Boolean UNIX_LACPPortStatistics::getPortStatsUnknownRx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_STATS_UNKNOWN_RX, getPortStatsUnknownRx());
	return true;
}

Uint32 UNIX_LACPPortStatistics::getPortStatsUnknownRx() const
{
	return _portStatsUnknownRx;
}

void UNIX_LACPPortStatistics::setPortStatsUnknownRx(Uint32 &value)
{
	_portStatsUnknownRx = value;
}

Boolean UNIX_LACPPortStatistics::getPortStatsIllegalRx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_STATS_ILLEGAL_RX, getPortStatsIllegalRx());
	return true;
}

Uint32 UNIX_LACPPortStatistics::getPortStatsIllegalRx() const
{
	return _portStatsIllegalRx;
}

void UNIX_LACPPortStatistics::setPortStatsIllegalRx(Uint32 &value)
{
	_portStatsIllegalRx = value;
}

Boolean UNIX_LACPPortStatistics::getPortStatsLACPDUsTx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_STATS_L_A_C_P_D_US_TX, getPortStatsLACPDUsTx());
	return true;
}

Uint32 UNIX_LACPPortStatistics::getPortStatsLACPDUsTx() const
{
	return _portStatsLACPDUsTx;
}

void UNIX_LACPPortStatistics::setPortStatsLACPDUsTx(Uint32 &value)
{
	_portStatsLACPDUsTx = value;
}

Boolean UNIX_LACPPortStatistics::getPortStatsMarkerPDUsTx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_STATS_MARKER_P_D_US_TX, getPortStatsMarkerPDUsTx());
	return true;
}

Uint32 UNIX_LACPPortStatistics::getPortStatsMarkerPDUsTx() const
{
	return _portStatsMarkerPDUsTx;
}

void UNIX_LACPPortStatistics::setPortStatsMarkerPDUsTx(Uint32 &value)
{
	_portStatsMarkerPDUsTx = value;
}

Boolean UNIX_LACPPortStatistics::getPortStatsMarkerResponsePDUsTx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_STATS_MARKER_RESPONSE_P_D_US_TX, getPortStatsMarkerResponsePDUsTx());
	return true;
}

Uint32 UNIX_LACPPortStatistics::getPortStatsMarkerResponsePDUsTx() const
{
	return _portStatsMarkerResponsePDUsTx;
}

void UNIX_LACPPortStatistics::setPortStatsMarkerResponsePDUsTx(Uint32 &value)
{
	_portStatsMarkerResponsePDUsTx = value;
}


void UNIX_LACPPortStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LACPPortStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_portStatsLACPDUsRx = Uint32(0);
	_portStatsMarkerPDUsRx = Uint32(0);
	_portStatsMarkerResponsePDUsRx = Uint32(0);
	_portStatsUnknownRx = Uint32(0);
	_portStatsIllegalRx = Uint32(0);
	_portStatsLACPDUsTx = Uint32(0);
	_portStatsMarkerPDUsTx = Uint32(0);
	_portStatsMarkerResponsePDUsTx = Uint32(0);

}

Boolean UNIX_LACPPortStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PortStatsLACPDUsRx"))
			{
				Uint32 portStatsLACPDUsRxValue;
				property.getValue().get(portStatsLACPDUsRxValue);
				setPortStatsLACPDUsRx(portStatsLACPDUsRxValue);
			}
			else if (String::equal(property.getName().getString(), "PortStatsMarkerPDUsRx"))
			{
				Uint32 portStatsMarkerPDUsRxValue;
				property.getValue().get(portStatsMarkerPDUsRxValue);
				setPortStatsMarkerPDUsRx(portStatsMarkerPDUsRxValue);
			}
			else if (String::equal(property.getName().getString(), "PortStatsMarkerResponsePDUsRx"))
			{
				Uint32 portStatsMarkerResponsePDUsRxValue;
				property.getValue().get(portStatsMarkerResponsePDUsRxValue);
				setPortStatsMarkerResponsePDUsRx(portStatsMarkerResponsePDUsRxValue);
			}
			else if (String::equal(property.getName().getString(), "PortStatsUnknownRx"))
			{
				Uint32 portStatsUnknownRxValue;
				property.getValue().get(portStatsUnknownRxValue);
				setPortStatsUnknownRx(portStatsUnknownRxValue);
			}
			else if (String::equal(property.getName().getString(), "PortStatsIllegalRx"))
			{
				Uint32 portStatsIllegalRxValue;
				property.getValue().get(portStatsIllegalRxValue);
				setPortStatsIllegalRx(portStatsIllegalRxValue);
			}
			else if (String::equal(property.getName().getString(), "PortStatsLACPDUsTx"))
			{
				Uint32 portStatsLACPDUsTxValue;
				property.getValue().get(portStatsLACPDUsTxValue);
				setPortStatsLACPDUsTx(portStatsLACPDUsTxValue);
			}
			else if (String::equal(property.getName().getString(), "PortStatsMarkerPDUsTx"))
			{
				Uint32 portStatsMarkerPDUsTxValue;
				property.getValue().get(portStatsMarkerPDUsTxValue);
				setPortStatsMarkerPDUsTx(portStatsMarkerPDUsTxValue);
			}
			else if (String::equal(property.getName().getString(), "PortStatsMarkerResponsePDUsTx"))
			{
				Uint32 portStatsMarkerResponsePDUsTxValue;
				property.getValue().get(portStatsMarkerResponsePDUsTxValue);
				setPortStatsMarkerResponsePDUsTx(portStatsMarkerResponsePDUsTxValue);
			}
	}
	return true;
}

Uint32 UNIX_LACPPortStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_LACPPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_LACPPortStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LACPPortStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_portStatsLACPDUsRx = Uint32(0);
	_portStatsMarkerPDUsRx = Uint32(0);
	_portStatsMarkerResponsePDUsRx = Uint32(0);
	_portStatsUnknownRx = Uint32(0);
	_portStatsIllegalRx = Uint32(0);
	_portStatsLACPDUsTx = Uint32(0);
	_portStatsMarkerPDUsTx = Uint32(0);
	_portStatsMarkerResponsePDUsTx = Uint32(0);
	
	return false;
}

Boolean UNIX_LACPPortStatistics::finalize()
{
	return false;
}


Boolean UNIX_LACPPortStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LACPPortStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LACPPortStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LACPPortStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LACPPortStatistics::validateInstance()
{
	return true;
}

