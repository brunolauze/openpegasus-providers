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


UNIX_CompoundPolicyAction::UNIX_CompoundPolicyAction(void)
{
}

UNIX_CompoundPolicyAction::~UNIX_CompoundPolicyAction(void)
{
}

Boolean UNIX_CompoundPolicyAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CompoundPolicyAction::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CompoundPolicyAction::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CompoundPolicyAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CompoundPolicyAction::getCaption() const
{
	return _caption;
}

void UNIX_CompoundPolicyAction::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CompoundPolicyAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CompoundPolicyAction::getDescription() const
{
	return _description;
}

void UNIX_CompoundPolicyAction::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CompoundPolicyAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CompoundPolicyAction::getElementName() const
{
	return _elementName;
}

void UNIX_CompoundPolicyAction::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CompoundPolicyAction::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CompoundPolicyAction::getGeneration() const
{
	return _generation;
}

void UNIX_CompoundPolicyAction::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CompoundPolicyAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_CompoundPolicyAction::getCommonName() const
{
	return _commonName;
}

void UNIX_CompoundPolicyAction::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_CompoundPolicyAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_CompoundPolicyAction::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_CompoundPolicyAction::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_CompoundPolicyAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CompoundPolicyAction::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_CompoundPolicyAction::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_CompoundPolicyAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CompoundPolicyAction::getSystemName() const
{
	return _systemName;
}

void UNIX_CompoundPolicyAction::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_CompoundPolicyAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_CompoundPolicyAction::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_CompoundPolicyAction::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_CompoundPolicyAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_CompoundPolicyAction::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_CompoundPolicyAction::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_CompoundPolicyAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CompoundPolicyAction::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_CompoundPolicyAction::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_CompoundPolicyAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_CompoundPolicyAction::getPolicyActionName() const
{
	return _policyActionName;
}

void UNIX_CompoundPolicyAction::setPolicyActionName(String &value)
{
	_policyActionName = value;
}

Boolean UNIX_CompoundPolicyAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_CompoundPolicyAction::getDoActionLogging() const
{
	return _doActionLogging;
}

void UNIX_CompoundPolicyAction::setDoActionLogging(Boolean &value)
{
	_doActionLogging = value;
}

Boolean UNIX_CompoundPolicyAction::getSequencedActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCED_ACTIONS, getSequencedActions());
	return true;
}

Uint16 UNIX_CompoundPolicyAction::getSequencedActions() const
{
	return _sequencedActions;
}

void UNIX_CompoundPolicyAction::setSequencedActions(Uint16 &value)
{
	_sequencedActions = value;
}

Boolean UNIX_CompoundPolicyAction::getExecutionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STRATEGY, getExecutionStrategy());
	return true;
}

Uint16 UNIX_CompoundPolicyAction::getExecutionStrategy() const
{
	return _executionStrategy;
}

void UNIX_CompoundPolicyAction::setExecutionStrategy(Uint16 &value)
{
	_executionStrategy = value;
}


void UNIX_CompoundPolicyAction::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CompoundPolicyAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_CompoundPolicyAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_sequencedActions = Uint16(0);
	_executionStrategy = Uint16(0);

}

Boolean UNIX_CompoundPolicyAction::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PolicyActionName"))
			{
				String policyActionNameValue;
				property.getValue().get(policyActionNameValue);
				setPolicyActionName(policyActionNameValue);
			}
			else if (String::equal(property.getName().getString(), "DoActionLogging"))
			{
				Boolean doActionLoggingValue;
				property.getValue().get(doActionLoggingValue);
				setDoActionLogging(doActionLoggingValue);
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


Boolean UNIX_CompoundPolicyAction::initialize()
{
	return false;
}

Boolean UNIX_CompoundPolicyAction::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CompoundPolicyAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_CompoundPolicyAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_sequencedActions = Uint16(0);
	_executionStrategy = Uint16(0);
	
	return false;
}

Boolean UNIX_CompoundPolicyAction::finalize()
{
	return false;
}


Boolean UNIX_CompoundPolicyAction::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String policyRuleCreationClassNameKey;
	String policyRuleNameKey;
	String creationClassNameKey;
	String policyActionNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME)) policyRuleCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_NAME)) policyRuleNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_ACTION_NAME)) policyActionNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getPolicyRuleCreationClassName(), policyRuleCreationClassNameKey)) && 
			(String::equalNoCase(getPolicyRuleName(), policyRuleNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getPolicyActionName(), policyActionNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_CompoundPolicyAction::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CompoundPolicyAction::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CompoundPolicyAction::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CompoundPolicyAction::validateInstance()
{
	return true;
}

