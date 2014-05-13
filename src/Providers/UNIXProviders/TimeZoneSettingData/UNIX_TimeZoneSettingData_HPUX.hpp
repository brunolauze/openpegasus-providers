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


UNIX_TimeZoneSettingData::UNIX_TimeZoneSettingData(void)
{
}

UNIX_TimeZoneSettingData::~UNIX_TimeZoneSettingData(void)
{
}

Boolean UNIX_TimeZoneSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TimeZoneSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TimeZoneSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TimeZoneSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TimeZoneSettingData::getCaption() const
{
	return _caption;
}

void UNIX_TimeZoneSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TimeZoneSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TimeZoneSettingData::getDescription() const
{
	return _description;
}

void UNIX_TimeZoneSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TimeZoneSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TimeZoneSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_TimeZoneSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TimeZoneSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TimeZoneSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_TimeZoneSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TimeZoneSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_TimeZoneSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_TimeZoneSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_TimeZoneSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_TimeZoneSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_TimeZoneSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_TimeZoneSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_TimeZoneSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_TimeZoneSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_TimeZoneSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_TimeZoneSettingData::getSoID() const
{
	return _soID;
}

void UNIX_TimeZoneSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_TimeZoneSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_TimeZoneSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_TimeZoneSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_TimeZoneSettingData::getStandardName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_NAME, getStandardName());
	return true;
}

String UNIX_TimeZoneSettingData::getStandardName() const
{
	return _standardName;
}

void UNIX_TimeZoneSettingData::setStandardName(String &value)
{
	_standardName = value;
}

Boolean UNIX_TimeZoneSettingData::getStandardCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_CAPTION, getStandardCaption());
	return true;
}

String UNIX_TimeZoneSettingData::getStandardCaption() const
{
	return _standardCaption;
}

void UNIX_TimeZoneSettingData::setStandardCaption(String &value)
{
	_standardCaption = value;
}

Boolean UNIX_TimeZoneSettingData::getStandardOffset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_OFFSET, getStandardOffset());
	return true;
}

Sint32 UNIX_TimeZoneSettingData::getStandardOffset() const
{
	return _standardOffset;
}

void UNIX_TimeZoneSettingData::setStandardOffset(Sint32 &value)
{
	_standardOffset = value;
}

Boolean UNIX_TimeZoneSettingData::getStandardMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_MONTH, getStandardMonth());
	return true;
}

Uint8 UNIX_TimeZoneSettingData::getStandardMonth() const
{
	return _standardMonth;
}

void UNIX_TimeZoneSettingData::setStandardMonth(Uint8 &value)
{
	_standardMonth = value;
}

Boolean UNIX_TimeZoneSettingData::getStandardDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_DAY, getStandardDay());
	return true;
}

Sint8 UNIX_TimeZoneSettingData::getStandardDay() const
{
	return _standardDay;
}

void UNIX_TimeZoneSettingData::setStandardDay(Sint8 &value)
{
	_standardDay = value;
}

Boolean UNIX_TimeZoneSettingData::getStandardDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_DAY_OF_WEEK, getStandardDayOfWeek());
	return true;
}

Sint8 UNIX_TimeZoneSettingData::getStandardDayOfWeek() const
{
	return _standardDayOfWeek;
}

void UNIX_TimeZoneSettingData::setStandardDayOfWeek(Sint8 &value)
{
	_standardDayOfWeek = value;
}

Boolean UNIX_TimeZoneSettingData::getStandardStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_START_INTERVAL, getStandardStartInterval());
	return true;
}

CIMDateTime UNIX_TimeZoneSettingData::getStandardStartInterval() const
{
	return _standardStartInterval;
}

void UNIX_TimeZoneSettingData::setStandardStartInterval(CIMDateTime &value)
{
	_standardStartInterval = value;
}

Boolean UNIX_TimeZoneSettingData::getDaylightName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_NAME, getDaylightName());
	return true;
}

String UNIX_TimeZoneSettingData::getDaylightName() const
{
	return _daylightName;
}

void UNIX_TimeZoneSettingData::setDaylightName(String &value)
{
	_daylightName = value;
}

Boolean UNIX_TimeZoneSettingData::getDaylightCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_CAPTION, getDaylightCaption());
	return true;
}

String UNIX_TimeZoneSettingData::getDaylightCaption() const
{
	return _daylightCaption;
}

void UNIX_TimeZoneSettingData::setDaylightCaption(String &value)
{
	_daylightCaption = value;
}

Boolean UNIX_TimeZoneSettingData::getDaylightOffset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_OFFSET, getDaylightOffset());
	return true;
}

Sint32 UNIX_TimeZoneSettingData::getDaylightOffset() const
{
	return _daylightOffset;
}

void UNIX_TimeZoneSettingData::setDaylightOffset(Sint32 &value)
{
	_daylightOffset = value;
}

Boolean UNIX_TimeZoneSettingData::getDaylightMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_MONTH, getDaylightMonth());
	return true;
}

Uint8 UNIX_TimeZoneSettingData::getDaylightMonth() const
{
	return _daylightMonth;
}

void UNIX_TimeZoneSettingData::setDaylightMonth(Uint8 &value)
{
	_daylightMonth = value;
}

Boolean UNIX_TimeZoneSettingData::getDaylightDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_DAY, getDaylightDay());
	return true;
}

Sint8 UNIX_TimeZoneSettingData::getDaylightDay() const
{
	return _daylightDay;
}

void UNIX_TimeZoneSettingData::setDaylightDay(Sint8 &value)
{
	_daylightDay = value;
}

Boolean UNIX_TimeZoneSettingData::getDaylightDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_DAY_OF_WEEK, getDaylightDayOfWeek());
	return true;
}

Sint8 UNIX_TimeZoneSettingData::getDaylightDayOfWeek() const
{
	return _daylightDayOfWeek;
}

void UNIX_TimeZoneSettingData::setDaylightDayOfWeek(Sint8 &value)
{
	_daylightDayOfWeek = value;
}

Boolean UNIX_TimeZoneSettingData::getDaylightStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_START_INTERVAL, getDaylightStartInterval());
	return true;
}

CIMDateTime UNIX_TimeZoneSettingData::getDaylightStartInterval() const
{
	return _daylightStartInterval;
}

void UNIX_TimeZoneSettingData::setDaylightStartInterval(CIMDateTime &value)
{
	_daylightStartInterval = value;
}


void UNIX_TimeZoneSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TimeZoneSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
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

Boolean UNIX_TimeZoneSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
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


Boolean UNIX_TimeZoneSettingData::initialize()
{
	return false;
}

Boolean UNIX_TimeZoneSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TimeZoneSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
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

Boolean UNIX_TimeZoneSettingData::finalize()
{
	return false;
}


Boolean UNIX_TimeZoneSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TimeZoneSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeZoneSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeZoneSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TimeZoneSettingData::validateInstance()
{
	return true;
}

