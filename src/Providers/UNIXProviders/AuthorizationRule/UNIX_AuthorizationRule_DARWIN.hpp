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


UNIX_AuthorizationRule::UNIX_AuthorizationRule(void)
{
}

UNIX_AuthorizationRule::~UNIX_AuthorizationRule(void)
{
}

Boolean UNIX_AuthorizationRule::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AuthorizationRule::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AuthorizationRule::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AuthorizationRule::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AuthorizationRule::getCaption() const
{
	return _caption;
}

void UNIX_AuthorizationRule::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AuthorizationRule::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AuthorizationRule::getDescription() const
{
	return _description;
}

void UNIX_AuthorizationRule::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AuthorizationRule::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AuthorizationRule::getElementName() const
{
	return _elementName;
}

void UNIX_AuthorizationRule::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AuthorizationRule::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AuthorizationRule::getGeneration() const
{
	return _generation;
}

void UNIX_AuthorizationRule::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AuthorizationRule::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_AuthorizationRule::getCommonName() const
{
	return _commonName;
}

void UNIX_AuthorizationRule::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_AuthorizationRule::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_AuthorizationRule::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_AuthorizationRule::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_AuthorizationRule::getPolicyDecisionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_DECISION_STRATEGY, getPolicyDecisionStrategy());
	return true;
}

Uint16 UNIX_AuthorizationRule::getPolicyDecisionStrategy() const
{
	return _policyDecisionStrategy;
}

void UNIX_AuthorizationRule::setPolicyDecisionStrategy(Uint16 &value)
{
	_policyDecisionStrategy = value;
}

Boolean UNIX_AuthorizationRule::getPolicyRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ROLES, getPolicyRoles());
	return true;
}

Array<String> UNIX_AuthorizationRule::getPolicyRoles() const
{
	return _policyRoles;
}

void UNIX_AuthorizationRule::setPolicyRoles(Array<String> &value)
{
	_policyRoles = value;
}

Boolean UNIX_AuthorizationRule::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Uint16 UNIX_AuthorizationRule::getEnabled() const
{
	return _enabled;
}

void UNIX_AuthorizationRule::setEnabled(Uint16 &value)
{
	_enabled = value;
}

Boolean UNIX_AuthorizationRule::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AuthorizationRule::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_AuthorizationRule::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_AuthorizationRule::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AuthorizationRule::getSystemName() const
{
	return _systemName;
}

void UNIX_AuthorizationRule::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_AuthorizationRule::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AuthorizationRule::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_AuthorizationRule::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_AuthorizationRule::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_AuthorizationRule::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_AuthorizationRule::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_AuthorizationRule::getConditionListType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITION_LIST_TYPE, getConditionListType());
	return true;
}

Uint16 UNIX_AuthorizationRule::getConditionListType() const
{
	return _conditionListType;
}

void UNIX_AuthorizationRule::setConditionListType(Uint16 &value)
{
	_conditionListType = value;
}

Boolean UNIX_AuthorizationRule::getRuleUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RULE_USAGE, getRuleUsage());
	return true;
}

String UNIX_AuthorizationRule::getRuleUsage() const
{
	return _ruleUsage;
}

void UNIX_AuthorizationRule::setRuleUsage(String &value)
{
	_ruleUsage = value;
}

Boolean UNIX_AuthorizationRule::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_AuthorizationRule::getPriority() const
{
	return _priority;
}

void UNIX_AuthorizationRule::setPriority(Uint16 &value)
{
	_priority = value;
}

Boolean UNIX_AuthorizationRule::getMandatory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANDATORY, getMandatory());
	return true;
}

Boolean UNIX_AuthorizationRule::getMandatory() const
{
	return _mandatory;
}

void UNIX_AuthorizationRule::setMandatory(Boolean &value)
{
	_mandatory = value;
}

Boolean UNIX_AuthorizationRule::getSequencedActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCED_ACTIONS, getSequencedActions());
	return true;
}

Uint16 UNIX_AuthorizationRule::getSequencedActions() const
{
	return _sequencedActions;
}

void UNIX_AuthorizationRule::setSequencedActions(Uint16 &value)
{
	_sequencedActions = value;
}

Boolean UNIX_AuthorizationRule::getExecutionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STRATEGY, getExecutionStrategy());
	return true;
}

Uint16 UNIX_AuthorizationRule::getExecutionStrategy() const
{
	return _executionStrategy;
}

void UNIX_AuthorizationRule::setExecutionStrategy(Uint16 &value)
{
	_executionStrategy = value;
}


void UNIX_AuthorizationRule::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AuthorizationRule");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_policyDecisionStrategy = Uint16(0);
	_policyRoles.clear();
	_enabled = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_AuthorizationRule");
	_policyRuleName = String ("");
	_conditionListType = Uint16(0);
	_ruleUsage = String ("");
	_priority = Uint16(0);
	_mandatory = Boolean(false);
	_sequencedActions = Uint16(0);
	_executionStrategy = Uint16(0);

}

Boolean UNIX_AuthorizationRule::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PolicyDecisionStrategy"))
			{
				Uint16 policyDecisionStrategyValue;
				property.getValue().get(policyDecisionStrategyValue);
				setPolicyDecisionStrategy(policyDecisionStrategyValue);
			}
			else if (String::equal(property.getName().getString(), "PolicyRoles"))
			{
				Array<String> policyRolesValue;
				property.getValue().get(policyRolesValue);
				setPolicyRoles(policyRolesValue);
			}
			else if (String::equal(property.getName().getString(), "Enabled"))
			{
				Uint16 enabledValue;
				property.getValue().get(enabledValue);
				setEnabled(enabledValue);
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "PolicyRuleName"))
			{
				String policyRuleNameValue;
				property.getValue().get(policyRuleNameValue);
				setPolicyRuleName(policyRuleNameValue);
			}
			else if (String::equal(property.getName().getString(), "ConditionListType"))
			{
				Uint16 conditionListTypeValue;
				property.getValue().get(conditionListTypeValue);
				setConditionListType(conditionListTypeValue);
			}
			else if (String::equal(property.getName().getString(), "RuleUsage"))
			{
				String ruleUsageValue;
				property.getValue().get(ruleUsageValue);
				setRuleUsage(ruleUsageValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint16 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "Mandatory"))
			{
				Boolean mandatoryValue;
				property.getValue().get(mandatoryValue);
				setMandatory(mandatoryValue);
			}
			else if (String::equal(property.getName().getString(), "SequencedActions"))
			{
				Uint16 sequencedActionsValue;
				property.getValue().get(sequencedActionsValue);
				setSequencedActions(sequencedActionsValue);
			}
			else if (String::equal(property.getName().getString(), "ExecutionStrategy"))
			{
				Uint16 executionStrategyValue;
				property.getValue().get(executionStrategyValue);
				setExecutionStrategy(executionStrategyValue);
			}
	}
	return true;
}


Boolean UNIX_AuthorizationRule::initialize()
{
	return false;
}

Boolean UNIX_AuthorizationRule::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AuthorizationRule");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_policyDecisionStrategy = Uint16(0);
	_policyRoles.clear();
	_enabled = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_AuthorizationRule");
	_policyRuleName = String ("");
	_conditionListType = Uint16(0);
	_ruleUsage = String ("");
	_priority = Uint16(0);
	_mandatory = Boolean(false);
	_sequencedActions = Uint16(0);
	_executionStrategy = Uint16(0);
	
	return false;
}

Boolean UNIX_AuthorizationRule::finalize()
{
	return false;
}


Boolean UNIX_AuthorizationRule::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String policyRuleNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_NAME)) policyRuleNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getPolicyRuleName(), policyRuleNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AuthorizationRule::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthorizationRule::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthorizationRule::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthorizationRule::validateInstance()
{
	return true;
}

