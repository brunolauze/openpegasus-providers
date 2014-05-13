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


UNIX_ImagingWorkStatisticalData::UNIX_ImagingWorkStatisticalData(void)
{
}

UNIX_ImagingWorkStatisticalData::~UNIX_ImagingWorkStatisticalData(void)
{
}

Boolean UNIX_ImagingWorkStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ImagingWorkStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ImagingWorkStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ImagingWorkStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_ImagingWorkStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ImagingWorkStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_ImagingWorkStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ImagingWorkStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_ImagingWorkStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ImagingWorkStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_ImagingWorkStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_ImagingWorkStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_ImagingWorkStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_ImagingWorkStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_ImagingWorkStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_ImagingWorkStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_ImagingWorkStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_ImagingWorkStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_ImagingWorkStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_ImagingWorkStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_ImagingWorkStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_ImagingWorkStatisticalData::getPersistenceType() const
{
	return _persistenceType;
}

void UNIX_ImagingWorkStatisticalData::setPersistenceType(Uint16 &value)
{
	_persistenceType = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_ImagingWorkStatisticalData::getOtherPersistenceType() const
{
	return _otherPersistenceType;
}

void UNIX_ImagingWorkStatisticalData::setOtherPersistenceType(String &value)
{
	_otherPersistenceType = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getSNMPKeyId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_KEY_ID, getSNMPKeyId());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getSNMPKeyId() const
{
	return _sNMPKeyId;
}

void UNIX_ImagingWorkStatisticalData::setSNMPKeyId(Uint32 &value)
{
	_sNMPKeyId = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getWorkType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_TYPE, getWorkType());
	return true;
}

Uint16 UNIX_ImagingWorkStatisticalData::getWorkType() const
{
	return _workType;
}

void UNIX_ImagingWorkStatisticalData::setWorkType(Uint16 &value)
{
	_workType = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getOtherWorkType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_WORK_TYPE, getOtherWorkType());
	return true;
}

String UNIX_ImagingWorkStatisticalData::getOtherWorkType() const
{
	return _otherWorkType;
}

void UNIX_ImagingWorkStatisticalData::setOtherWorkType(String &value)
{
	_otherWorkType = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getTotalImages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_IMAGES, getTotalImages());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getTotalImages() const
{
	return _totalImages;
}

void UNIX_ImagingWorkStatisticalData::setTotalImages(Uint32 &value)
{
	_totalImages = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getMonochromeImages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONOCHROME_IMAGES, getMonochromeImages());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getMonochromeImages() const
{
	return _monochromeImages;
}

void UNIX_ImagingWorkStatisticalData::setMonochromeImages(Uint32 &value)
{
	_monochromeImages = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getFullColorImages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_COLOR_IMAGES, getFullColorImages());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getFullColorImages() const
{
	return _fullColorImages;
}

void UNIX_ImagingWorkStatisticalData::setFullColorImages(Uint32 &value)
{
	_fullColorImages = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getTotalImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_IMPRESSIONS, getTotalImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getTotalImpressions() const
{
	return _totalImpressions;
}

void UNIX_ImagingWorkStatisticalData::setTotalImpressions(Uint32 &value)
{
	_totalImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getMonochromeImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONOCHROME_IMPRESSIONS, getMonochromeImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getMonochromeImpressions() const
{
	return _monochromeImpressions;
}

void UNIX_ImagingWorkStatisticalData::setMonochromeImpressions(Uint32 &value)
{
	_monochromeImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getBlankImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLANK_IMPRESSIONS, getBlankImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getBlankImpressions() const
{
	return _blankImpressions;
}

void UNIX_ImagingWorkStatisticalData::setBlankImpressions(Uint32 &value)
{
	_blankImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getFullColorImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_COLOR_IMPRESSIONS, getFullColorImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getFullColorImpressions() const
{
	return _fullColorImpressions;
}

void UNIX_ImagingWorkStatisticalData::setFullColorImpressions(Uint32 &value)
{
	_fullColorImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getHighlightColorImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIGHLIGHT_COLOR_IMPRESSIONS, getHighlightColorImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getHighlightColorImpressions() const
{
	return _highlightColorImpressions;
}

void UNIX_ImagingWorkStatisticalData::setHighlightColorImpressions(Uint32 &value)
{
	_highlightColorImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getTotalTwoSidedImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_TWO_SIDED_IMPRESSIONS, getTotalTwoSidedImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getTotalTwoSidedImpressions() const
{
	return _totalTwoSidedImpressions;
}

void UNIX_ImagingWorkStatisticalData::setTotalTwoSidedImpressions(Uint32 &value)
{
	_totalTwoSidedImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getMonochromeTwoSidedImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONOCHROME_TWO_SIDED_IMPRESSIONS, getMonochromeTwoSidedImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getMonochromeTwoSidedImpressions() const
{
	return _monochromeTwoSidedImpressions;
}

void UNIX_ImagingWorkStatisticalData::setMonochromeTwoSidedImpressions(Uint32 &value)
{
	_monochromeTwoSidedImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getBlankTwoSidedImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLANK_TWO_SIDED_IMPRESSIONS, getBlankTwoSidedImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getBlankTwoSidedImpressions() const
{
	return _blankTwoSidedImpressions;
}

void UNIX_ImagingWorkStatisticalData::setBlankTwoSidedImpressions(Uint32 &value)
{
	_blankTwoSidedImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getFullColorTwoSidedImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_COLOR_TWO_SIDED_IMPRESSIONS, getFullColorTwoSidedImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getFullColorTwoSidedImpressions() const
{
	return _fullColorTwoSidedImpressions;
}

void UNIX_ImagingWorkStatisticalData::setFullColorTwoSidedImpressions(Uint32 &value)
{
	_fullColorTwoSidedImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getHighlightColorTwoSidedImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIGHLIGHT_COLOR_TWO_SIDED_IMPRESSIONS, getHighlightColorTwoSidedImpressions());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getHighlightColorTwoSidedImpressions() const
{
	return _highlightColorTwoSidedImpressions;
}

void UNIX_ImagingWorkStatisticalData::setHighlightColorTwoSidedImpressions(Uint32 &value)
{
	_highlightColorTwoSidedImpressions = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getTotalSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_SHEETS, getTotalSheets());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getTotalSheets() const
{
	return _totalSheets;
}

void UNIX_ImagingWorkStatisticalData::setTotalSheets(Uint32 &value)
{
	_totalSheets = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getMonochromeSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONOCHROME_SHEETS, getMonochromeSheets());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getMonochromeSheets() const
{
	return _monochromeSheets;
}

void UNIX_ImagingWorkStatisticalData::setMonochromeSheets(Uint32 &value)
{
	_monochromeSheets = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getBlankSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLANK_SHEETS, getBlankSheets());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getBlankSheets() const
{
	return _blankSheets;
}

void UNIX_ImagingWorkStatisticalData::setBlankSheets(Uint32 &value)
{
	_blankSheets = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getFullColorSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_COLOR_SHEETS, getFullColorSheets());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getFullColorSheets() const
{
	return _fullColorSheets;
}

void UNIX_ImagingWorkStatisticalData::setFullColorSheets(Uint32 &value)
{
	_fullColorSheets = value;
}

Boolean UNIX_ImagingWorkStatisticalData::getHighlightColorSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIGHLIGHT_COLOR_SHEETS, getHighlightColorSheets());
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::getHighlightColorSheets() const
{
	return _highlightColorSheets;
}

void UNIX_ImagingWorkStatisticalData::setHighlightColorSheets(Uint32 &value)
{
	_highlightColorSheets = value;
}


void UNIX_ImagingWorkStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImagingWorkStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_sNMPKeyId = Uint32(0);
	_workType = Uint16(0);
	_otherWorkType = String ("");
	_totalImages = Uint32(0);
	_monochromeImages = Uint32(0);
	_fullColorImages = Uint32(0);
	_totalImpressions = Uint32(0);
	_monochromeImpressions = Uint32(0);
	_blankImpressions = Uint32(0);
	_fullColorImpressions = Uint32(0);
	_highlightColorImpressions = Uint32(0);
	_totalTwoSidedImpressions = Uint32(0);
	_monochromeTwoSidedImpressions = Uint32(0);
	_blankTwoSidedImpressions = Uint32(0);
	_fullColorTwoSidedImpressions = Uint32(0);
	_highlightColorTwoSidedImpressions = Uint32(0);
	_totalSheets = Uint32(0);
	_monochromeSheets = Uint32(0);
	_blankSheets = Uint32(0);
	_fullColorSheets = Uint32(0);
	_highlightColorSheets = Uint32(0);

}

Boolean UNIX_ImagingWorkStatisticalData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "WorkType"))
			{
				Uint16 workTypeValue;
				property.getValue().get(workTypeValue);
				setWorkType(workTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherWorkType"))
			{
				String otherWorkTypeValue;
				property.getValue().get(otherWorkTypeValue);
				setOtherWorkType(otherWorkTypeValue);
			}
			else if (String::equal(property.getName().getString(), "TotalImages"))
			{
				Uint32 totalImagesValue;
				property.getValue().get(totalImagesValue);
				setTotalImages(totalImagesValue);
			}
			else if (String::equal(property.getName().getString(), "MonochromeImages"))
			{
				Uint32 monochromeImagesValue;
				property.getValue().get(monochromeImagesValue);
				setMonochromeImages(monochromeImagesValue);
			}
			else if (String::equal(property.getName().getString(), "FullColorImages"))
			{
				Uint32 fullColorImagesValue;
				property.getValue().get(fullColorImagesValue);
				setFullColorImages(fullColorImagesValue);
			}
			else if (String::equal(property.getName().getString(), "TotalImpressions"))
			{
				Uint32 totalImpressionsValue;
				property.getValue().get(totalImpressionsValue);
				setTotalImpressions(totalImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "MonochromeImpressions"))
			{
				Uint32 monochromeImpressionsValue;
				property.getValue().get(monochromeImpressionsValue);
				setMonochromeImpressions(monochromeImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "BlankImpressions"))
			{
				Uint32 blankImpressionsValue;
				property.getValue().get(blankImpressionsValue);
				setBlankImpressions(blankImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "FullColorImpressions"))
			{
				Uint32 fullColorImpressionsValue;
				property.getValue().get(fullColorImpressionsValue);
				setFullColorImpressions(fullColorImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "HighlightColorImpressions"))
			{
				Uint32 highlightColorImpressionsValue;
				property.getValue().get(highlightColorImpressionsValue);
				setHighlightColorImpressions(highlightColorImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "TotalTwoSidedImpressions"))
			{
				Uint32 totalTwoSidedImpressionsValue;
				property.getValue().get(totalTwoSidedImpressionsValue);
				setTotalTwoSidedImpressions(totalTwoSidedImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "MonochromeTwoSidedImpressions"))
			{
				Uint32 monochromeTwoSidedImpressionsValue;
				property.getValue().get(monochromeTwoSidedImpressionsValue);
				setMonochromeTwoSidedImpressions(monochromeTwoSidedImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "BlankTwoSidedImpressions"))
			{
				Uint32 blankTwoSidedImpressionsValue;
				property.getValue().get(blankTwoSidedImpressionsValue);
				setBlankTwoSidedImpressions(blankTwoSidedImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "FullColorTwoSidedImpressions"))
			{
				Uint32 fullColorTwoSidedImpressionsValue;
				property.getValue().get(fullColorTwoSidedImpressionsValue);
				setFullColorTwoSidedImpressions(fullColorTwoSidedImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "HighlightColorTwoSidedImpressions"))
			{
				Uint32 highlightColorTwoSidedImpressionsValue;
				property.getValue().get(highlightColorTwoSidedImpressionsValue);
				setHighlightColorTwoSidedImpressions(highlightColorTwoSidedImpressionsValue);
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
	}
	return true;
}

Uint32 UNIX_ImagingWorkStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_ImagingWorkStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_ImagingWorkStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImagingWorkStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_persistenceType = Uint16(0);
	_otherPersistenceType = String ("");
	_sNMPKeyId = Uint32(0);
	_workType = Uint16(0);
	_otherWorkType = String ("");
	_totalImages = Uint32(0);
	_monochromeImages = Uint32(0);
	_fullColorImages = Uint32(0);
	_totalImpressions = Uint32(0);
	_monochromeImpressions = Uint32(0);
	_blankImpressions = Uint32(0);
	_fullColorImpressions = Uint32(0);
	_highlightColorImpressions = Uint32(0);
	_totalTwoSidedImpressions = Uint32(0);
	_monochromeTwoSidedImpressions = Uint32(0);
	_blankTwoSidedImpressions = Uint32(0);
	_fullColorTwoSidedImpressions = Uint32(0);
	_highlightColorTwoSidedImpressions = Uint32(0);
	_totalSheets = Uint32(0);
	_monochromeSheets = Uint32(0);
	_blankSheets = Uint32(0);
	_fullColorSheets = Uint32(0);
	_highlightColorSheets = Uint32(0);
	
	return false;
}

Boolean UNIX_ImagingWorkStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_ImagingWorkStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ImagingWorkStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingWorkStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingWorkStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImagingWorkStatisticalData::validateInstance()
{
	return true;
}

