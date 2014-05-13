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


UNIX_PublicPrivateKeyAuthentication::UNIX_PublicPrivateKeyAuthentication(void)
{
}

UNIX_PublicPrivateKeyAuthentication::~UNIX_PublicPrivateKeyAuthentication(void)
{
}

Boolean UNIX_PublicPrivateKeyAuthentication::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PublicPrivateKeyAuthentication::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getCaption() const
{
	return _caption;
}

void UNIX_PublicPrivateKeyAuthentication::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getDescription() const
{
	return _description;
}

void UNIX_PublicPrivateKeyAuthentication::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getElementName() const
{
	return _elementName;
}

void UNIX_PublicPrivateKeyAuthentication::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PublicPrivateKeyAuthentication::getGeneration() const
{
	return _generation;
}

void UNIX_PublicPrivateKeyAuthentication::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getCommonName() const
{
	return _commonName;
}

void UNIX_PublicPrivateKeyAuthentication::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_PublicPrivateKeyAuthentication::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_PublicPrivateKeyAuthentication::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PublicPrivateKeyAuthentication::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getSystemName() const
{
	return _systemName;
}

void UNIX_PublicPrivateKeyAuthentication::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_PublicPrivateKeyAuthentication::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_PublicPrivateKeyAuthentication::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PublicPrivateKeyAuthentication::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getPolicyConditionName() const
{
	return _policyConditionName;
}

void UNIX_PublicPrivateKeyAuthentication::setPolicyConditionName(String &value)
{
	_policyConditionName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getSelfIssuedKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELF_ISSUED_KEY, getSelfIssuedKey());
	return true;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getSelfIssuedKey() const
{
	return _selfIssuedKey;
}

void UNIX_PublicPrivateKeyAuthentication::setSelfIssuedKey(Boolean &value)
{
	_selfIssuedKey = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getDistinguishedName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISTINGUISHED_NAME, getDistinguishedName());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getDistinguishedName() const
{
	return _distinguishedName;
}

void UNIX_PublicPrivateKeyAuthentication::setDistinguishedName(String &value)
{
	_distinguishedName = value;
}

Boolean UNIX_PublicPrivateKeyAuthentication::getPublicKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY, getPublicKey());
	return true;
}

String UNIX_PublicPrivateKeyAuthentication::getPublicKey() const
{
	return _publicKey;
}

void UNIX_PublicPrivateKeyAuthentication::setPublicKey(String &value)
{
	_publicKey = value;
}


void UNIX_PublicPrivateKeyAuthentication::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PublicPrivateKeyAuthentication");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_PublicPrivateKeyAuthentication");
	_policyConditionName = String ("");
	_selfIssuedKey = Boolean(false);
	_distinguishedName = String ("");
	_publicKey = String ("");

}

Boolean UNIX_PublicPrivateKeyAuthentication::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SelfIssuedKey"))
			{
				Boolean selfIssuedKeyValue;
				property.getValue().get(selfIssuedKeyValue);
				setSelfIssuedKey(selfIssuedKeyValue);
			}
			else if (String::equal(property.getName().getString(), "DistinguishedName"))
			{
				String distinguishedNameValue;
				property.getValue().get(distinguishedNameValue);
				setDistinguishedName(distinguishedNameValue);
			}
			else if (String::equal(property.getName().getString(), "PublicKey"))
			{
				String publicKeyValue;
				property.getValue().get(publicKeyValue);
				setPublicKey(publicKeyValue);
			}
	}
	return true;
}


Boolean UNIX_PublicPrivateKeyAuthentication::initialize()
{
	return false;
}

Boolean UNIX_PublicPrivateKeyAuthentication::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PublicPrivateKeyAuthentication");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_PublicPrivateKeyAuthentication");
	_policyConditionName = String ("");
	_selfIssuedKey = Boolean(false);
	_distinguishedName = String ("");
	_publicKey = String ("");
	
	return false;
}

Boolean UNIX_PublicPrivateKeyAuthentication::finalize()
{
	return false;
}


Boolean UNIX_PublicPrivateKeyAuthentication::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PublicPrivateKeyAuthentication::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicPrivateKeyAuthentication::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicPrivateKeyAuthentication::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicPrivateKeyAuthentication::validateInstance()
{
	return true;
}

