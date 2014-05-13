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


UNIX_VLANStatistics::UNIX_VLANStatistics(void)
{
}

UNIX_VLANStatistics::~UNIX_VLANStatistics(void)
{
}

Boolean UNIX_VLANStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VLANStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VLANStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANStatistics::getCaption() const
{
	return _caption;
}

void UNIX_VLANStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VLANStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANStatistics::getDescription() const
{
	return _description;
}

void UNIX_VLANStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VLANStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_VLANStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VLANStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VLANStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_VLANStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VLANStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_VLANStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_VLANStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_VLANStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_VLANStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_VLANStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_VLANStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_VLANStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_VLANStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_VLANStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_VLANStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_VLANStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_VLANStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_VLANStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_VLANStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_VLANStatistics::getVLANPortInFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VLAN_PORT_IN_FRAMES, getVLANPortInFrames());
	return true;
}

Uint64 UNIX_VLANStatistics::getVLANPortInFrames() const
{
	return _vLANPortInFrames;
}

void UNIX_VLANStatistics::setVLANPortInFrames(Uint64 &value)
{
	_vLANPortInFrames = value;
}

Boolean UNIX_VLANStatistics::getVLANPortOutFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VLAN_PORT_OUT_FRAMES, getVLANPortOutFrames());
	return true;
}

Uint64 UNIX_VLANStatistics::getVLANPortOutFrames() const
{
	return _vLANPortOutFrames;
}

void UNIX_VLANStatistics::setVLANPortOutFrames(Uint64 &value)
{
	_vLANPortOutFrames = value;
}

Boolean UNIX_VLANStatistics::getVLANPortInFrameDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VLAN_PORT_IN_FRAME_DISCARDS, getVLANPortInFrameDiscards());
	return true;
}

Uint64 UNIX_VLANStatistics::getVLANPortInFrameDiscards() const
{
	return _vLANPortInFrameDiscards;
}

void UNIX_VLANStatistics::setVLANPortInFrameDiscards(Uint64 &value)
{
	_vLANPortInFrameDiscards = value;
}

Boolean UNIX_VLANStatistics::getVLANId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VLAN_ID, getVLANId());
	return true;
}

Uint16 UNIX_VLANStatistics::getVLANId() const
{
	return _vLANId;
}

void UNIX_VLANStatistics::setVLANId(Uint16 &value)
{
	_vLANId = value;
}


void UNIX_VLANStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_vLANPortInFrames = Uint64(0);
	_vLANPortOutFrames = Uint64(0);
	_vLANPortInFrameDiscards = Uint64(0);
	_vLANId = Uint16(0);

}

Boolean UNIX_VLANStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "VLANPortInFrames"))
			{
				Uint64 vLANPortInFramesValue;
				property.getValue().get(vLANPortInFramesValue);
				setVLANPortInFrames(vLANPortInFramesValue);
			}
			else if (String::equal(property.getName().getString(), "VLANPortOutFrames"))
			{
				Uint64 vLANPortOutFramesValue;
				property.getValue().get(vLANPortOutFramesValue);
				setVLANPortOutFrames(vLANPortOutFramesValue);
			}
			else if (String::equal(property.getName().getString(), "VLANPortInFrameDiscards"))
			{
				Uint64 vLANPortInFrameDiscardsValue;
				property.getValue().get(vLANPortInFrameDiscardsValue);
				setVLANPortInFrameDiscards(vLANPortInFrameDiscardsValue);
			}
			else if (String::equal(property.getName().getString(), "VLANId"))
			{
				Uint16 vLANIdValue;
				property.getValue().get(vLANIdValue);
				setVLANId(vLANIdValue);
			}
	}
	return true;
}

Uint32 UNIX_VLANStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_VLANStatistics::initialize()
{
	return false;
}

Boolean UNIX_VLANStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_vLANPortInFrames = Uint64(0);
	_vLANPortOutFrames = Uint64(0);
	_vLANPortInFrameDiscards = Uint64(0);
	_vLANId = Uint16(0);
	
	return false;
}

Boolean UNIX_VLANStatistics::finalize()
{
	return false;
}


Boolean UNIX_VLANStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VLANStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANStatistics::validateInstance()
{
	return true;
}

