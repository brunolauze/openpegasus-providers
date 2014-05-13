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


UNIX_MPLSTunnelStats::UNIX_MPLSTunnelStats(void)
{
}

UNIX_MPLSTunnelStats::~UNIX_MPLSTunnelStats(void)
{
}

Boolean UNIX_MPLSTunnelStats::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSTunnelStats::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSTunnelStats::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSTunnelStats::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSTunnelStats::getCaption() const
{
	return _caption;
}

void UNIX_MPLSTunnelStats::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSTunnelStats::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSTunnelStats::getDescription() const
{
	return _description;
}

void UNIX_MPLSTunnelStats::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSTunnelStats::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSTunnelStats::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSTunnelStats::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSTunnelStats::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSTunnelStats::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSTunnelStats::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSTunnelStats::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_MPLSTunnelStats::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_MPLSTunnelStats::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_MPLSTunnelStats::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_MPLSTunnelStats::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_MPLSTunnelStats::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_MPLSTunnelStats::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_MPLSTunnelStats::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_MPLSTunnelStats::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_MPLSTunnelStats::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_MPLSTunnelStats::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_MPLSTunnelStats::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_MPLSTunnelStats::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_MPLSTunnelStats::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_MPLSTunnelStats::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_MPLSTunnelStats::getTunnelPrimaryTimeUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_PRIMARY_TIME_UP, getTunnelPrimaryTimeUp());
	return true;
}

Uint32 UNIX_MPLSTunnelStats::getTunnelPrimaryTimeUp() const
{
	return _tunnelPrimaryTimeUp;
}

void UNIX_MPLSTunnelStats::setTunnelPrimaryTimeUp(Uint32 &value)
{
	_tunnelPrimaryTimeUp = value;
}

Boolean UNIX_MPLSTunnelStats::getTunnelPathChanges(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_PATH_CHANGES, getTunnelPathChanges());
	return true;
}

Uint32 UNIX_MPLSTunnelStats::getTunnelPathChanges() const
{
	return _tunnelPathChanges;
}

void UNIX_MPLSTunnelStats::setTunnelPathChanges(Uint32 &value)
{
	_tunnelPathChanges = value;
}

Boolean UNIX_MPLSTunnelStats::getTunnelLastPathChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_LAST_PATH_CHANGE, getTunnelLastPathChange());
	return true;
}

Uint32 UNIX_MPLSTunnelStats::getTunnelLastPathChange() const
{
	return _tunnelLastPathChange;
}

void UNIX_MPLSTunnelStats::setTunnelLastPathChange(Uint32 &value)
{
	_tunnelLastPathChange = value;
}

Boolean UNIX_MPLSTunnelStats::getTunnelStateTransitions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_STATE_TRANSITIONS, getTunnelStateTransitions());
	return true;
}

Uint32 UNIX_MPLSTunnelStats::getTunnelStateTransitions() const
{
	return _tunnelStateTransitions;
}

void UNIX_MPLSTunnelStats::setTunnelStateTransitions(Uint32 &value)
{
	_tunnelStateTransitions = value;
}

Boolean UNIX_MPLSTunnelStats::getTunnelInstanceUpTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_INSTANCE_UP_TIME, getTunnelInstanceUpTime());
	return true;
}

Uint32 UNIX_MPLSTunnelStats::getTunnelInstanceUpTime() const
{
	return _tunnelInstanceUpTime;
}

void UNIX_MPLSTunnelStats::setTunnelInstanceUpTime(Uint32 &value)
{
	_tunnelInstanceUpTime = value;
}


void UNIX_MPLSTunnelStats::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSTunnelStats");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_tunnelPrimaryTimeUp = Uint32(0);
	_tunnelPathChanges = Uint32(0);
	_tunnelLastPathChange = Uint32(0);
	_tunnelStateTransitions = Uint32(0);
	_tunnelInstanceUpTime = Uint32(0);

}

Boolean UNIX_MPLSTunnelStats::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TunnelPrimaryTimeUp"))
			{
				Uint32 tunnelPrimaryTimeUpValue;
				property.getValue().get(tunnelPrimaryTimeUpValue);
				setTunnelPrimaryTimeUp(tunnelPrimaryTimeUpValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelPathChanges"))
			{
				Uint32 tunnelPathChangesValue;
				property.getValue().get(tunnelPathChangesValue);
				setTunnelPathChanges(tunnelPathChangesValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelLastPathChange"))
			{
				Uint32 tunnelLastPathChangeValue;
				property.getValue().get(tunnelLastPathChangeValue);
				setTunnelLastPathChange(tunnelLastPathChangeValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelStateTransitions"))
			{
				Uint32 tunnelStateTransitionsValue;
				property.getValue().get(tunnelStateTransitionsValue);
				setTunnelStateTransitions(tunnelStateTransitionsValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelInstanceUpTime"))
			{
				Uint32 tunnelInstanceUpTimeValue;
				property.getValue().get(tunnelInstanceUpTimeValue);
				setTunnelInstanceUpTime(tunnelInstanceUpTimeValue);
			}
	}
	return true;
}

Uint32 UNIX_MPLSTunnelStats::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_MPLSTunnelStats::initialize()
{
	return false;
}

Boolean UNIX_MPLSTunnelStats::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSTunnelStats");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_tunnelPrimaryTimeUp = Uint32(0);
	_tunnelPathChanges = Uint32(0);
	_tunnelLastPathChange = Uint32(0);
	_tunnelStateTransitions = Uint32(0);
	_tunnelInstanceUpTime = Uint32(0);
	
	return false;
}

Boolean UNIX_MPLSTunnelStats::finalize()
{
	return false;
}


Boolean UNIX_MPLSTunnelStats::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSTunnelStats::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSTunnelStats::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSTunnelStats::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSTunnelStats::validateInstance()
{
	return true;
}

