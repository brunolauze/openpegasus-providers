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


UNIX_SharedSecretAuthentication::UNIX_SharedSecretAuthentication(void)
{
}

UNIX_SharedSecretAuthentication::~UNIX_SharedSecretAuthentication(void)
{
}

Boolean UNIX_SharedSecretAuthentication::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SharedSecretAuthentication::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SharedSecretAuthentication::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SharedSecretAuthentication::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SharedSecretAuthentication::getCaption() const
{
	return _caption;
}

void UNIX_SharedSecretAuthentication::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SharedSecretAuthentication::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SharedSecretAuthentication::getDescription() const
{
	return _description;
}

void UNIX_SharedSecretAuthentication::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SharedSecretAuthentication::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SharedSecretAuthentication::getElementName() const
{
	return _elementName;
}

void UNIX_SharedSecretAuthentication::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SharedSecretAuthentication::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SharedSecretAuthentication::getGeneration() const
{
	return _generation;
}

void UNIX_SharedSecretAuthentication::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SharedSecretAuthentication::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_SharedSecretAuthentication::getCommonName() const
{
	return _commonName;
}

void UNIX_SharedSecretAuthentication::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_SharedSecretAuthentication::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_SharedSecretAuthentication::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_SharedSecretAuthentication::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_SharedSecretAuthentication::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SharedSecretAuthentication::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SharedSecretAuthentication::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SharedSecretAuthentication::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SharedSecretAuthentication::getSystemName() const
{
	return _systemName;
}

void UNIX_SharedSecretAuthentication::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SharedSecretAuthentication::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_SharedSecretAuthentication::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_SharedSecretAuthentication::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_SharedSecretAuthentication::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_SharedSecretAuthentication::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_SharedSecretAuthentication::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_SharedSecretAuthentication::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SharedSecretAuthentication::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SharedSecretAuthentication::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SharedSecretAuthentication::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_SharedSecretAuthentication::getPolicyConditionName() const
{
	return _policyConditionName;
}

void UNIX_SharedSecretAuthentication::setPolicyConditionName(String &value)
{
	_policyConditionName = value;
}

Boolean UNIX_SharedSecretAuthentication::getIDOfPrincipal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID_OF_PRINCIPAL, getIDOfPrincipal());
	return true;
}

String UNIX_SharedSecretAuthentication::getIDOfPrincipal() const
{
	return _iDOfPrincipal;
}

void UNIX_SharedSecretAuthentication::setIDOfPrincipal(String &value)
{
	_iDOfPrincipal = value;
}

Boolean UNIX_SharedSecretAuthentication::getContextOfSecret(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTEXT_OF_SECRET, getContextOfSecret());
	return true;
}

String UNIX_SharedSecretAuthentication::getContextOfSecret() const
{
	return _contextOfSecret;
}

void UNIX_SharedSecretAuthentication::setContextOfSecret(String &value)
{
	_contextOfSecret = value;
}


void UNIX_SharedSecretAuthentication::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SharedSecretAuthentication");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_SharedSecretAuthentication");
	_policyConditionName = String ("");
	_iDOfPrincipal = String ("");
	_contextOfSecret = String ("");

}

Boolean UNIX_SharedSecretAuthentication::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IDOfPrincipal"))
			{
				String iDOfPrincipalValue;
				property.getValue().get(iDOfPrincipalValue);
				setIDOfPrincipal(iDOfPrincipalValue);
			}
			else if (String::equal(property.getName().getString(), "ContextOfSecret"))
			{
				String contextOfSecretValue;
				property.getValue().get(contextOfSecretValue);
				setContextOfSecret(contextOfSecretValue);
			}
	}
	return true;
}


Boolean UNIX_SharedSecretAuthentication::initialize()
{
	return false;
}

Boolean UNIX_SharedSecretAuthentication::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SharedSecretAuthentication");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_SharedSecretAuthentication");
	_policyConditionName = String ("");
	_iDOfPrincipal = String ("");
	_contextOfSecret = String ("");
	
	return false;
}

Boolean UNIX_SharedSecretAuthentication::finalize()
{
	return false;
}


Boolean UNIX_SharedSecretAuthentication::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SharedSecretAuthentication::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedSecretAuthentication::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedSecretAuthentication::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedSecretAuthentication::validateInstance()
{
	return true;
}

