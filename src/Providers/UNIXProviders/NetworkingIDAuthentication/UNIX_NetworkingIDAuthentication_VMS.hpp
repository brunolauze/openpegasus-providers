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


UNIX_NetworkingIDAuthentication::UNIX_NetworkingIDAuthentication(void)
{
}

UNIX_NetworkingIDAuthentication::~UNIX_NetworkingIDAuthentication(void)
{
}

Boolean UNIX_NetworkingIDAuthentication::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NetworkingIDAuthentication::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NetworkingIDAuthentication::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NetworkingIDAuthentication::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NetworkingIDAuthentication::getCaption() const
{
	return _caption;
}

void UNIX_NetworkingIDAuthentication::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NetworkingIDAuthentication::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NetworkingIDAuthentication::getDescription() const
{
	return _description;
}

void UNIX_NetworkingIDAuthentication::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NetworkingIDAuthentication::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getElementName() const
{
	return _elementName;
}

void UNIX_NetworkingIDAuthentication::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NetworkingIDAuthentication::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NetworkingIDAuthentication::getGeneration() const
{
	return _generation;
}

void UNIX_NetworkingIDAuthentication::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NetworkingIDAuthentication::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getCommonName() const
{
	return _commonName;
}

void UNIX_NetworkingIDAuthentication::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_NetworkingIDAuthentication::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_NetworkingIDAuthentication::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_NetworkingIDAuthentication::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_NetworkingIDAuthentication::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_NetworkingIDAuthentication::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_NetworkingIDAuthentication::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getSystemName() const
{
	return _systemName;
}

void UNIX_NetworkingIDAuthentication::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_NetworkingIDAuthentication::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_NetworkingIDAuthentication::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_NetworkingIDAuthentication::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_NetworkingIDAuthentication::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_NetworkingIDAuthentication::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_NetworkingIDAuthentication::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_NetworkingIDAuthentication::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getPolicyConditionName() const
{
	return _policyConditionName;
}

void UNIX_NetworkingIDAuthentication::setPolicyConditionName(String &value)
{
	_policyConditionName = value;
}

Boolean UNIX_NetworkingIDAuthentication::getNetworkingIdentityClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORKING_IDENTITY_CLASS_NAME, getNetworkingIdentityClassName());
	return true;
}

String UNIX_NetworkingIDAuthentication::getNetworkingIdentityClassName() const
{
	return _networkingIdentityClassName;
}

void UNIX_NetworkingIDAuthentication::setNetworkingIdentityClassName(String &value)
{
	_networkingIdentityClassName = value;
}


void UNIX_NetworkingIDAuthentication::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkingIDAuthentication");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_NetworkingIDAuthentication");
	_policyConditionName = String ("");
	_networkingIdentityClassName = String ("");

}

Boolean UNIX_NetworkingIDAuthentication::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NetworkingIdentityClassName"))
			{
				String networkingIdentityClassNameValue;
				property.getValue().get(networkingIdentityClassNameValue);
				setNetworkingIdentityClassName(networkingIdentityClassNameValue);
			}
	}
	return true;
}


Boolean UNIX_NetworkingIDAuthentication::initialize()
{
	return false;
}

Boolean UNIX_NetworkingIDAuthentication::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkingIDAuthentication");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_NetworkingIDAuthentication");
	_policyConditionName = String ("");
	_networkingIdentityClassName = String ("");
	
	return false;
}

Boolean UNIX_NetworkingIDAuthentication::finalize()
{
	return false;
}


Boolean UNIX_NetworkingIDAuthentication::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NetworkingIDAuthentication::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkingIDAuthentication::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkingIDAuthentication::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkingIDAuthentication::validateInstance()
{
	return true;
}

