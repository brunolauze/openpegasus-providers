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


UNIX_PolicyTimePeriodCondition::UNIX_PolicyTimePeriodCondition(void)
{
}

UNIX_PolicyTimePeriodCondition::~UNIX_PolicyTimePeriodCondition(void)
{
}

Boolean UNIX_PolicyTimePeriodCondition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PolicyTimePeriodCondition::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getCaption() const
{
	return _caption;
}

void UNIX_PolicyTimePeriodCondition::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getDescription() const
{
	return _description;
}

void UNIX_PolicyTimePeriodCondition::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getElementName() const
{
	return _elementName;
}

void UNIX_PolicyTimePeriodCondition::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PolicyTimePeriodCondition::getGeneration() const
{
	return _generation;
}

void UNIX_PolicyTimePeriodCondition::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getCommonName() const
{
	return _commonName;
}

void UNIX_PolicyTimePeriodCondition::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_PolicyTimePeriodCondition::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_PolicyTimePeriodCondition::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PolicyTimePeriodCondition::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getSystemName() const
{
	return _systemName;
}

void UNIX_PolicyTimePeriodCondition::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_PolicyTimePeriodCondition::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_PolicyTimePeriodCondition::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PolicyTimePeriodCondition::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getPolicyConditionName() const
{
	return _policyConditionName;
}

void UNIX_PolicyTimePeriodCondition::setPolicyConditionName(String &value)
{
	_policyConditionName = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getTimePeriod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_PERIOD, getTimePeriod());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getTimePeriod() const
{
	return _timePeriod;
}

void UNIX_PolicyTimePeriodCondition::setTimePeriod(String &value)
{
	_timePeriod = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getMonthOfYearMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONTH_OF_YEAR_MASK, getMonthOfYearMask());
	return true;
}

Array<Uint8> UNIX_PolicyTimePeriodCondition::getMonthOfYearMask() const
{
	return _monthOfYearMask;
}

void UNIX_PolicyTimePeriodCondition::setMonthOfYearMask(Array<Uint8> &value)
{
	_monthOfYearMask = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getDayOfMonthMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAY_OF_MONTH_MASK, getDayOfMonthMask());
	return true;
}

Array<Uint8> UNIX_PolicyTimePeriodCondition::getDayOfMonthMask() const
{
	return _dayOfMonthMask;
}

void UNIX_PolicyTimePeriodCondition::setDayOfMonthMask(Array<Uint8> &value)
{
	_dayOfMonthMask = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getDayOfWeekMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAY_OF_WEEK_MASK, getDayOfWeekMask());
	return true;
}

Array<Uint8> UNIX_PolicyTimePeriodCondition::getDayOfWeekMask() const
{
	return _dayOfWeekMask;
}

void UNIX_PolicyTimePeriodCondition::setDayOfWeekMask(Array<Uint8> &value)
{
	_dayOfWeekMask = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getTimeOfDayMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_DAY_MASK, getTimeOfDayMask());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getTimeOfDayMask() const
{
	return _timeOfDayMask;
}

void UNIX_PolicyTimePeriodCondition::setTimeOfDayMask(String &value)
{
	_timeOfDayMask = value;
}

Boolean UNIX_PolicyTimePeriodCondition::getLocalOrUtcTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_OR_UTC_TIME, getLocalOrUtcTime());
	return true;
}

Uint16 UNIX_PolicyTimePeriodCondition::getLocalOrUtcTime() const
{
	return _localOrUtcTime;
}

void UNIX_PolicyTimePeriodCondition::setLocalOrUtcTime(Uint16 &value)
{
	_localOrUtcTime = value;
}


void UNIX_PolicyTimePeriodCondition::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PolicyTimePeriodCondition");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_PolicyTimePeriodCondition");
	_policyConditionName = String ("");
	_timePeriod = String ("");
	_monthOfYearMask.clear();
	_dayOfMonthMask.clear();
	_dayOfWeekMask.clear();
	_timeOfDayMask = String ("");
	_localOrUtcTime = Uint16(0);

}

Boolean UNIX_PolicyTimePeriodCondition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CommonName"))
			{
				String commonNameValue;
				property.getValue().get(commonNameValue);
				setCommonName(commonNameValue);
			}
			else if (String::equal(property.getName().getString(), "PolicyKeywords"))
			{
				Array<String> policyKeywordsValue;
				property.getValue().get(policyKeywordsValue);
				setPolicyKeywords(policyKeywordsValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "PolicyRuleCreationClassName"))
			{
				String policyRuleCreationClassNameValue;
				property.getValue().get(policyRuleCreationClassNameValue);
				setPolicyRuleCreationClassName(policyRuleCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "PolicyRuleName"))
			{
				String policyRuleNameValue;
				property.getValue().get(policyRuleNameValue);
				setPolicyRuleName(policyRuleNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "PolicyConditionName"))
			{
				String policyConditionNameValue;
				property.getValue().get(policyConditionNameValue);
				setPolicyConditionName(policyConditionNameValue);
			}
			else if (String::equal(property.getName().getString(), "TimePeriod"))
			{
				String timePeriodValue;
				property.getValue().get(timePeriodValue);
				setTimePeriod(timePeriodValue);
			}
			else if (String::equal(property.getName().getString(), "MonthOfYearMask"))
			{
				Array<Uint8> monthOfYearMaskValue;
				property.getValue().get(monthOfYearMaskValue);
				setMonthOfYearMask(monthOfYearMaskValue);
			}
			else if (String::equal(property.getName().getString(), "DayOfMonthMask"))
			{
				Array<Uint8> dayOfMonthMaskValue;
				property.getValue().get(dayOfMonthMaskValue);
				setDayOfMonthMask(dayOfMonthMaskValue);
			}
			else if (String::equal(property.getName().getString(), "DayOfWeekMask"))
			{
				Array<Uint8> dayOfWeekMaskValue;
				property.getValue().get(dayOfWeekMaskValue);
				setDayOfWeekMask(dayOfWeekMaskValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfDayMask"))
			{
				String timeOfDayMaskValue;
				property.getValue().get(timeOfDayMaskValue);
				setTimeOfDayMask(timeOfDayMaskValue);
			}
			else if (String::equal(property.getName().getString(), "LocalOrUtcTime"))
			{
				Uint16 localOrUtcTimeValue;
				property.getValue().get(localOrUtcTimeValue);
				setLocalOrUtcTime(localOrUtcTimeValue);
			}
	}
	return true;
}


Boolean UNIX_PolicyTimePeriodCondition::initialize()
{
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PolicyTimePeriodCondition");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_PolicyTimePeriodCondition");
	_policyConditionName = String ("");
	_timePeriod = String ("");
	_monthOfYearMask.clear();
	_dayOfMonthMask.clear();
	_dayOfWeekMask.clear();
	_timeOfDayMask = String ("");
	_localOrUtcTime = Uint16(0);
	
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::finalize()
{
	return false;
}


Boolean UNIX_PolicyTimePeriodCondition::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String policyRuleCreationClassNameKey;
	String policyRuleNameKey;
	String creationClassNameKey;
	String policyConditionNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME)) policyRuleCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_NAME)) policyRuleNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_CONDITION_NAME)) policyConditionNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getPolicyRuleCreationClassName(), policyRuleCreationClassNameKey)) && 
			(String::equalNoCase(getPolicyRuleName(), policyRuleNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getPolicyConditionName(), policyConditionNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::validateInstance()
{
	return true;
}

