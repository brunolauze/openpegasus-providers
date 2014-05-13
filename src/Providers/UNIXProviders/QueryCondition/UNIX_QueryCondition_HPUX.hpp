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


UNIX_QueryCondition::UNIX_QueryCondition(void)
{
}

UNIX_QueryCondition::~UNIX_QueryCondition(void)
{
}

Boolean UNIX_QueryCondition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_QueryCondition::getInstanceID() const
{
	return _instanceID;
}

void UNIX_QueryCondition::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_QueryCondition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_QueryCondition::getCaption() const
{
	return _caption;
}

void UNIX_QueryCondition::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_QueryCondition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_QueryCondition::getDescription() const
{
	return _description;
}

void UNIX_QueryCondition::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_QueryCondition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_QueryCondition::getElementName() const
{
	return _elementName;
}

void UNIX_QueryCondition::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_QueryCondition::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_QueryCondition::getGeneration() const
{
	return _generation;
}

void UNIX_QueryCondition::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_QueryCondition::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_QueryCondition::getCommonName() const
{
	return _commonName;
}

void UNIX_QueryCondition::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_QueryCondition::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_QueryCondition::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_QueryCondition::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_QueryCondition::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_QueryCondition::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_QueryCondition::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_QueryCondition::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_QueryCondition::getSystemName() const
{
	return _systemName;
}

void UNIX_QueryCondition::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_QueryCondition::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_QueryCondition::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_QueryCondition::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_QueryCondition::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_QueryCondition::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_QueryCondition::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_QueryCondition::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_QueryCondition::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_QueryCondition::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_QueryCondition::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_QueryCondition::getPolicyConditionName() const
{
	return _policyConditionName;
}

void UNIX_QueryCondition::setPolicyConditionName(String &value)
{
	_policyConditionName = value;
}

Boolean UNIX_QueryCondition::getQueryResultName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_RESULT_NAME, getQueryResultName());
	return true;
}

String UNIX_QueryCondition::getQueryResultName() const
{
	return _queryResultName;
}

void UNIX_QueryCondition::setQueryResultName(String &value)
{
	_queryResultName = value;
}

Boolean UNIX_QueryCondition::getQuery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY, getQuery());
	return true;
}

String UNIX_QueryCondition::getQuery() const
{
	return _query;
}

void UNIX_QueryCondition::setQuery(String &value)
{
	_query = value;
}

Boolean UNIX_QueryCondition::getQueryLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_LANGUAGE, getQueryLanguage());
	return true;
}

Uint16 UNIX_QueryCondition::getQueryLanguage() const
{
	return _queryLanguage;
}

void UNIX_QueryCondition::setQueryLanguage(Uint16 &value)
{
	_queryLanguage = value;
}

Boolean UNIX_QueryCondition::getTrigger(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRIGGER, getTrigger());
	return true;
}

Boolean UNIX_QueryCondition::getTrigger() const
{
	return _trigger;
}

void UNIX_QueryCondition::setTrigger(Boolean &value)
{
	_trigger = value;
}


void UNIX_QueryCondition::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QueryCondition");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_QueryCondition");
	_policyConditionName = String ("");
	_queryResultName = String ("");
	_query = String ("");
	_queryLanguage = Uint16(0);
	_trigger = Boolean(false);

}

Boolean UNIX_QueryCondition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "QueryResultName"))
			{
				String queryResultNameValue;
				property.getValue().get(queryResultNameValue);
				setQueryResultName(queryResultNameValue);
			}
			else if (String::equal(property.getName().getString(), "Query"))
			{
				String queryValue;
				property.getValue().get(queryValue);
				setQuery(queryValue);
			}
			else if (String::equal(property.getName().getString(), "QueryLanguage"))
			{
				Uint16 queryLanguageValue;
				property.getValue().get(queryLanguageValue);
				setQueryLanguage(queryLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "Trigger"))
			{
				Boolean triggerValue;
				property.getValue().get(triggerValue);
				setTrigger(triggerValue);
			}
	}
	return true;
}


Boolean UNIX_QueryCondition::initialize()
{
	return false;
}

Boolean UNIX_QueryCondition::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QueryCondition");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_QueryCondition");
	_policyConditionName = String ("");
	_queryResultName = String ("");
	_query = String ("");
	_queryLanguage = Uint16(0);
	_trigger = Boolean(false);
	
	return false;
}

Boolean UNIX_QueryCondition::finalize()
{
	return false;
}


Boolean UNIX_QueryCondition::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_QueryCondition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryCondition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryCondition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryCondition::validateInstance()
{
	return true;
}

