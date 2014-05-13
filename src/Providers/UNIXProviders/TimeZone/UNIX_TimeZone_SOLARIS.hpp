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


UNIX_TimeZone::UNIX_TimeZone(void)
{
}

UNIX_TimeZone::~UNIX_TimeZone(void)
{
}

Boolean UNIX_TimeZone::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TimeZone::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TimeZone::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TimeZone::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TimeZone::getCaption() const
{
	return _caption;
}

void UNIX_TimeZone::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TimeZone::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TimeZone::getDescription() const
{
	return _description;
}

void UNIX_TimeZone::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TimeZone::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TimeZone::getElementName() const
{
	return _elementName;
}

void UNIX_TimeZone::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TimeZone::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TimeZone::getGeneration() const
{
	return _generation;
}

void UNIX_TimeZone::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TimeZone::getSettingID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_ID, getSettingID());
	return true;
}

String UNIX_TimeZone::getSettingID() const
{
	return _settingID;
}

void UNIX_TimeZone::setSettingID(String &value)
{
	_settingID = value;
}

Boolean UNIX_TimeZone::getTimeZoneID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_ZONE_ID, getTimeZoneID());
	return true;
}

String UNIX_TimeZone::getTimeZoneID() const
{
	return _timeZoneID;
}

void UNIX_TimeZone::setTimeZoneID(String &value)
{
	_timeZoneID = value;
}

Boolean UNIX_TimeZone::getTimeZoneStartDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_ZONE_START_DATE, getTimeZoneStartDate());
	return true;
}

CIMDateTime UNIX_TimeZone::getTimeZoneStartDate() const
{
	return _timeZoneStartDate;
}

void UNIX_TimeZone::setTimeZoneStartDate(CIMDateTime &value)
{
	_timeZoneStartDate = value;
}

Boolean UNIX_TimeZone::getStandardName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_NAME, getStandardName());
	return true;
}

String UNIX_TimeZone::getStandardName() const
{
	return _standardName;
}

void UNIX_TimeZone::setStandardName(String &value)
{
	_standardName = value;
}

Boolean UNIX_TimeZone::getStandardCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_CAPTION, getStandardCaption());
	return true;
}

String UNIX_TimeZone::getStandardCaption() const
{
	return _standardCaption;
}

void UNIX_TimeZone::setStandardCaption(String &value)
{
	_standardCaption = value;
}

Boolean UNIX_TimeZone::getStandardOffset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_OFFSET, getStandardOffset());
	return true;
}

Sint32 UNIX_TimeZone::getStandardOffset() const
{
	return _standardOffset;
}

void UNIX_TimeZone::setStandardOffset(Sint32 &value)
{
	_standardOffset = value;
}

Boolean UNIX_TimeZone::getStandardMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_MONTH, getStandardMonth());
	return true;
}

Uint8 UNIX_TimeZone::getStandardMonth() const
{
	return _standardMonth;
}

void UNIX_TimeZone::setStandardMonth(Uint8 &value)
{
	_standardMonth = value;
}

Boolean UNIX_TimeZone::getStandardDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_DAY, getStandardDay());
	return true;
}

Sint8 UNIX_TimeZone::getStandardDay() const
{
	return _standardDay;
}

void UNIX_TimeZone::setStandardDay(Sint8 &value)
{
	_standardDay = value;
}

Boolean UNIX_TimeZone::getStandardDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_DAY_OF_WEEK, getStandardDayOfWeek());
	return true;
}

Sint8 UNIX_TimeZone::getStandardDayOfWeek() const
{
	return _standardDayOfWeek;
}

void UNIX_TimeZone::setStandardDayOfWeek(Sint8 &value)
{
	_standardDayOfWeek = value;
}

Boolean UNIX_TimeZone::getStandardStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_START_INTERVAL, getStandardStartInterval());
	return true;
}

CIMDateTime UNIX_TimeZone::getStandardStartInterval() const
{
	return _standardStartInterval;
}

void UNIX_TimeZone::setStandardStartInterval(CIMDateTime &value)
{
	_standardStartInterval = value;
}

Boolean UNIX_TimeZone::getDaylightName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_NAME, getDaylightName());
	return true;
}

String UNIX_TimeZone::getDaylightName() const
{
	return _daylightName;
}

void UNIX_TimeZone::setDaylightName(String &value)
{
	_daylightName = value;
}

Boolean UNIX_TimeZone::getDaylightCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_CAPTION, getDaylightCaption());
	return true;
}

String UNIX_TimeZone::getDaylightCaption() const
{
	return _daylightCaption;
}

void UNIX_TimeZone::setDaylightCaption(String &value)
{
	_daylightCaption = value;
}

Boolean UNIX_TimeZone::getDaylightOffset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_OFFSET, getDaylightOffset());
	return true;
}

Sint32 UNIX_TimeZone::getDaylightOffset() const
{
	return _daylightOffset;
}

void UNIX_TimeZone::setDaylightOffset(Sint32 &value)
{
	_daylightOffset = value;
}

Boolean UNIX_TimeZone::getDaylightMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_MONTH, getDaylightMonth());
	return true;
}

Uint8 UNIX_TimeZone::getDaylightMonth() const
{
	return _daylightMonth;
}

void UNIX_TimeZone::setDaylightMonth(Uint8 &value)
{
	_daylightMonth = value;
}

Boolean UNIX_TimeZone::getDaylightDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_DAY, getDaylightDay());
	return true;
}

Sint8 UNIX_TimeZone::getDaylightDay() const
{
	return _daylightDay;
}

void UNIX_TimeZone::setDaylightDay(Sint8 &value)
{
	_daylightDay = value;
}

Boolean UNIX_TimeZone::getDaylightDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_DAY_OF_WEEK, getDaylightDayOfWeek());
	return true;
}

Sint8 UNIX_TimeZone::getDaylightDayOfWeek() const
{
	return _daylightDayOfWeek;
}

void UNIX_TimeZone::setDaylightDayOfWeek(Sint8 &value)
{
	_daylightDayOfWeek = value;
}

Boolean UNIX_TimeZone::getDaylightStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_START_INTERVAL, getDaylightStartInterval());
	return true;
}

CIMDateTime UNIX_TimeZone::getDaylightStartInterval() const
{
	return _daylightStartInterval;
}

void UNIX_TimeZone::setDaylightStartInterval(CIMDateTime &value)
{
	_daylightStartInterval = value;
}


void UNIX_TimeZone::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TimeZone");
	_generation = Uint64(0);
	_settingID = String ("");
	_timeZoneID = String ("");
	_timeZoneStartDate = CIMHelper::getCurrentTime();
	_standardName = String ("");
	_standardCaption = String ("");
	_standardOffset = Sint32(0);
	_standardMonth = Uint8(0);
	_standardDay = Sint8(0);
	_standardDayOfWeek = Sint8(0);
	_standardStartInterval = CIMHelper::getCurrentTime();
	_daylightName = String ("");
	_daylightCaption = String ("");
	_daylightOffset = Sint32(0);
	_daylightMonth = Uint8(0);
	_daylightDay = Sint8(0);
	_daylightDayOfWeek = Sint8(0);
	_daylightStartInterval = CIMHelper::getCurrentTime();

}

Boolean UNIX_TimeZone::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SettingID"))
			{
				String settingIDValue;
				property.getValue().get(settingIDValue);
				setSettingID(settingIDValue);
			}
			else if (String::equal(property.getName().getString(), "TimeZoneID"))
			{
				String timeZoneIDValue;
				property.getValue().get(timeZoneIDValue);
				setTimeZoneID(timeZoneIDValue);
			}
			else if (String::equal(property.getName().getString(), "TimeZoneStartDate"))
			{
				CIMDateTime timeZoneStartDateValue;
				property.getValue().get(timeZoneStartDateValue);
				setTimeZoneStartDate(timeZoneStartDateValue);
			}
			else if (String::equal(property.getName().getString(), "StandardName"))
			{
				String standardNameValue;
				property.getValue().get(standardNameValue);
				setStandardName(standardNameValue);
			}
			else if (String::equal(property.getName().getString(), "StandardCaption"))
			{
				String standardCaptionValue;
				property.getValue().get(standardCaptionValue);
				setStandardCaption(standardCaptionValue);
			}
			else if (String::equal(property.getName().getString(), "StandardOffset"))
			{
				Sint32 standardOffsetValue;
				property.getValue().get(standardOffsetValue);
				setStandardOffset(standardOffsetValue);
			}
			else if (String::equal(property.getName().getString(), "StandardMonth"))
			{
				Uint8 standardMonthValue;
				property.getValue().get(standardMonthValue);
				setStandardMonth(standardMonthValue);
			}
			else if (String::equal(property.getName().getString(), "StandardDay"))
			{
				Sint8 standardDayValue;
				property.getValue().get(standardDayValue);
				setStandardDay(standardDayValue);
			}
			else if (String::equal(property.getName().getString(), "StandardDayOfWeek"))
			{
				Sint8 standardDayOfWeekValue;
				property.getValue().get(standardDayOfWeekValue);
				setStandardDayOfWeek(standardDayOfWeekValue);
			}
			else if (String::equal(property.getName().getString(), "StandardStartInterval"))
			{
				CIMDateTime standardStartIntervalValue;
				property.getValue().get(standardStartIntervalValue);
				setStandardStartInterval(standardStartIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "DaylightName"))
			{
				String daylightNameValue;
				property.getValue().get(daylightNameValue);
				setDaylightName(daylightNameValue);
			}
			else if (String::equal(property.getName().getString(), "DaylightCaption"))
			{
				String daylightCaptionValue;
				property.getValue().get(daylightCaptionValue);
				setDaylightCaption(daylightCaptionValue);
			}
			else if (String::equal(property.getName().getString(), "DaylightOffset"))
			{
				Sint32 daylightOffsetValue;
				property.getValue().get(daylightOffsetValue);
				setDaylightOffset(daylightOffsetValue);
			}
			else if (String::equal(property.getName().getString(), "DaylightMonth"))
			{
				Uint8 daylightMonthValue;
				property.getValue().get(daylightMonthValue);
				setDaylightMonth(daylightMonthValue);
			}
			else if (String::equal(property.getName().getString(), "DaylightDay"))
			{
				Sint8 daylightDayValue;
				property.getValue().get(daylightDayValue);
				setDaylightDay(daylightDayValue);
			}
			else if (String::equal(property.getName().getString(), "DaylightDayOfWeek"))
			{
				Sint8 daylightDayOfWeekValue;
				property.getValue().get(daylightDayOfWeekValue);
				setDaylightDayOfWeek(daylightDayOfWeekValue);
			}
			else if (String::equal(property.getName().getString(), "DaylightStartInterval"))
			{
				CIMDateTime daylightStartIntervalValue;
				property.getValue().get(daylightStartIntervalValue);
				setDaylightStartInterval(daylightStartIntervalValue);
			}
	}
	return true;
}

Uint32 UNIX_TimeZone::invokeVerifyOKToApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_TimeZone::invokeApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_TimeZone::invokeVerifyOKToApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_TimeZone::invokeApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_TimeZone::invokeVerifyOKToApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyIncrementalChangeToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_TimeZone::invokeApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyIncrementalChangeToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_TimeZone::invokeVerifyOKToApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyIncrementalChangeToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_TimeZone::invokeApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyIncrementalChangeToCollection */
	
	
	
	return returnValue;
}


Boolean UNIX_TimeZone::initialize()
{
	return false;
}

Boolean UNIX_TimeZone::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TimeZone");
	_generation = Uint64(0);
	_settingID = String ("");
	_timeZoneID = String ("");
	_timeZoneStartDate = CIMHelper::getCurrentTime();
	_standardName = String ("");
	_standardCaption = String ("");
	_standardOffset = Sint32(0);
	_standardMonth = Uint8(0);
	_standardDay = Sint8(0);
	_standardDayOfWeek = Sint8(0);
	_standardStartInterval = CIMHelper::getCurrentTime();
	_daylightName = String ("");
	_daylightCaption = String ("");
	_daylightOffset = Sint32(0);
	_daylightMonth = Uint8(0);
	_daylightDay = Sint8(0);
	_daylightDayOfWeek = Sint8(0);
	_daylightStartInterval = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_TimeZone::finalize()
{
	return false;
}


Boolean UNIX_TimeZone::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String timeZoneIDKey;
	String timeZoneStartDateKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_TIME_ZONE_ID)) timeZoneIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TIME_ZONE_START_DATE)) timeZoneStartDateKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getTimeZoneID(), timeZoneIDKey)) && 
			(String::equalNoCase(getTimeZoneStartDate().toString(), timeZoneStartDateKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_TimeZone::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeZone::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeZone::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeZone::validateInstance()
{
	return true;
}

