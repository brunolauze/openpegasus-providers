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


UNIX_ImagingMediaUsedStatisticalData::UNIX_ImagingMediaUsedStatisticalData(void)
{
}

UNIX_ImagingMediaUsedStatisticalData::~UNIX_ImagingMediaUsedStatisticalData(void)
{
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ImagingMediaUsedStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_ImagingMediaUsedStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_ImagingMediaUsedStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_ImagingMediaUsedStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ImagingMediaUsedStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_ImagingMediaUsedStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_ImagingMediaUsedStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_ImagingMediaUsedStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_ImagingMediaUsedStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_ImagingMediaUsedStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_ImagingMediaUsedStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_ImagingMediaUsedStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_ImagingMediaUsedStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_ImagingMediaUsedStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_ImagingMediaUsedStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_ImagingMediaUsedStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_ImagingMediaUsedStatisticalData::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_ImagingMediaUsedStatisticalData::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getOtherPersistenceType() const
{
	return _otherPersistenceType;
}

void UNIX_ImagingMediaUsedStatisticalData::setOtherPersistenceType(String &value)
{
	_otherPersistenceType = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getSNMPKeyId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_KEY_ID, getSNMPKeyId());
	return true;
}

Uint32 UNIX_ImagingMediaUsedStatisticalData::getSNMPKeyId() const
{
	return _sNMPKeyId;
}

void UNIX_ImagingMediaUsedStatisticalData::setSNMPKeyId(Uint32 &value)
{
	_sNMPKeyId = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_ImagingMediaUsedStatisticalData::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_ImagingMediaUsedStatisticalData::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getTotalSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_SHEETS, getTotalSheets());
	return true;
}

Uint32 UNIX_ImagingMediaUsedStatisticalData::getTotalSheets() const
{
	return _totalSheets;
}

void UNIX_ImagingMediaUsedStatisticalData::setTotalSheets(Uint32 &value)
{
	_totalSheets = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getMonochromeSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONOCHROME_SHEETS, getMonochromeSheets());
	return true;
}

Uint32 UNIX_ImagingMediaUsedStatisticalData::getMonochromeSheets() const
{
	return _monochromeSheets;
}

void UNIX_ImagingMediaUsedStatisticalData::setMonochromeSheets(Uint32 &value)
{
	_monochromeSheets = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getBlankSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLANK_SHEETS, getBlankSheets());
	return true;
}

Uint32 UNIX_ImagingMediaUsedStatisticalData::getBlankSheets() const
{
	return _blankSheets;
}

void UNIX_ImagingMediaUsedStatisticalData::setBlankSheets(Uint32 &value)
{
	_blankSheets = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getFullColorSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_COLOR_SHEETS, getFullColorSheets());
	return true;
}

Uint32 UNIX_ImagingMediaUsedStatisticalData::getFullColorSheets() const
{
	return _fullColorSheets;
}

void UNIX_ImagingMediaUsedStatisticalData::setFullColorSheets(Uint32 &value)
{
	_fullColorSheets = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getHighlightColorSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIGHLIGHT_COLOR_SHEETS, getHighlightColorSheets());
	return true;
}

Uint32 UNIX_ImagingMediaUsedStatisticalData::getHighlightColorSheets() const
{
	return _highlightColorSheets;
}

void UNIX_ImagingMediaUsedStatisticalData::setHighlightColorSheets(Uint32 &value)
{
	_highlightColorSheets = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getMediaSizeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZE_NAME, getMediaSizeName());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getMediaSizeName() const
{
	return _mediaSizeName;
}

void UNIX_ImagingMediaUsedStatisticalData::setMediaSizeName(String &value)
{
	_mediaSizeName = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getMediaInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_INFO, getMediaInfo());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getMediaInfo() const
{
	return _mediaInfo;
}

void UNIX_ImagingMediaUsedStatisticalData::setMediaInfo(String &value)
{
	_mediaInfo = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getMediaName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_NAME, getMediaName());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getMediaName() const
{
	return _mediaName;
}

void UNIX_ImagingMediaUsedStatisticalData::setMediaName(String &value)
{
	_mediaName = value;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::getMediaAccountingKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_ACCOUNTING_KEY, getMediaAccountingKey());
	return true;
}

String UNIX_ImagingMediaUsedStatisticalData::getMediaAccountingKey() const
{
	return _mediaAccountingKey;
}

void UNIX_ImagingMediaUsedStatisticalData::setMediaAccountingKey(String &value)
{
	_mediaAccountingKey = value;
}


void UNIX_ImagingMediaUsedStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImagingMediaUsedStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_sNMPKeyId = Uint32(0);
	_sNMPRowId = Uint32(0);
	_totalSheets = Uint32(0);
	_monochromeSheets = Uint32(0);
	_blankSheets = Uint32(0);
	_fullColorSheets = Uint32(0);
	_highlightColorSheets = Uint32(0);
	_mediaSizeName = String ("");
	_mediaInfo = String ("");
	_mediaName = String ("");
	_mediaAccountingKey = String ("");

}

Boolean UNIX_ImagingMediaUsedStatisticalData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SNMPRowId"))
			{
				Uint32 sNMPRowIdValue;
				property.getValue().get(sNMPRowIdValue);
				setSNMPRowId(sNMPRowIdValue);
			}
			else if (String::equal(property.getName().getString(), "TotalSheets"))
			{
				Uint32 totalSheetsValue;
				property.getValue().get(totalSheetsValue);
				setTotalSheets(totalSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "MonochromeSheets"))
			{
				Uint32 monochromeSheetsValue;
				property.getValue().get(monochromeSheetsValue);
				setMonochromeSheets(monochromeSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "BlankSheets"))
			{
				Uint32 blankSheetsValue;
				property.getValue().get(blankSheetsValue);
				setBlankSheets(blankSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "FullColorSheets"))
			{
				Uint32 fullColorSheetsValue;
				property.getValue().get(fullColorSheetsValue);
				setFullColorSheets(fullColorSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "HighlightColorSheets"))
			{
				Uint32 highlightColorSheetsValue;
				property.getValue().get(highlightColorSheetsValue);
				setHighlightColorSheets(highlightColorSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "MediaSizeName"))
			{
				String mediaSizeNameValue;
				property.getValue().get(mediaSizeNameValue);
				setMediaSizeName(mediaSizeNameValue);
			}
			else if (String::equal(property.getName().getString(), "MediaInfo"))
			{
				String mediaInfoValue;
				property.getValue().get(mediaInfoValue);
				setMediaInfo(mediaInfoValue);
			}
			else if (String::equal(property.getName().getString(), "MediaName"))
			{
				String mediaNameValue;
				property.getValue().get(mediaNameValue);
				setMediaName(mediaNameValue);
			}
			else if (String::equal(property.getName().getString(), "MediaAccountingKey"))
			{
				String mediaAccountingKeyValue;
				property.getValue().get(mediaAccountingKeyValue);
				setMediaAccountingKey(mediaAccountingKeyValue);
			}
	}
	return true;
}

Uint32 UNIX_ImagingMediaUsedStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_ImagingMediaUsedStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImagingMediaUsedStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_sNMPKeyId = Uint32(0);
	_sNMPRowId = Uint32(0);
	_totalSheets = Uint32(0);
	_monochromeSheets = Uint32(0);
	_blankSheets = Uint32(0);
	_fullColorSheets = Uint32(0);
	_highlightColorSheets = Uint32(0);
	_mediaSizeName = String ("");
	_mediaInfo = String ("");
	_mediaName = String ("");
	_mediaAccountingKey = String ("");
	
	return false;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_ImagingMediaUsedStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ImagingMediaUsedStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingMediaUsedStatisticalData::validateInstance()
{
	return true;
}

