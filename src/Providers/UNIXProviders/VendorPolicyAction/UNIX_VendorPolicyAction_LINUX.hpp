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


UNIX_VendorPolicyAction::UNIX_VendorPolicyAction(void)
{
}

UNIX_VendorPolicyAction::~UNIX_VendorPolicyAction(void)
{
}

Boolean UNIX_VendorPolicyAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VendorPolicyAction::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VendorPolicyAction::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VendorPolicyAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VendorPolicyAction::getCaption() const
{
	return _caption;
}

void UNIX_VendorPolicyAction::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VendorPolicyAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VendorPolicyAction::getDescription() const
{
	return _description;
}

void UNIX_VendorPolicyAction::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VendorPolicyAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VendorPolicyAction::getElementName() const
{
	return _elementName;
}

void UNIX_VendorPolicyAction::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VendorPolicyAction::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VendorPolicyAction::getGeneration() const
{
	return _generation;
}

void UNIX_VendorPolicyAction::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VendorPolicyAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_VendorPolicyAction::getCommonName() const
{
	return _commonName;
}

void UNIX_VendorPolicyAction::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_VendorPolicyAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_VendorPolicyAction::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_VendorPolicyAction::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_VendorPolicyAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VendorPolicyAction::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_VendorPolicyAction::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_VendorPolicyAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VendorPolicyAction::getSystemName() const
{
	return _systemName;
}

void UNIX_VendorPolicyAction::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_VendorPolicyAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_VendorPolicyAction::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_VendorPolicyAction::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_VendorPolicyAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_VendorPolicyAction::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_VendorPolicyAction::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_VendorPolicyAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VendorPolicyAction::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_VendorPolicyAction::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_VendorPolicyAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_VendorPolicyAction::getPolicyActionName() const
{
	return _policyActionName;
}

void UNIX_VendorPolicyAction::setPolicyActionName(String &value)
{
	_policyActionName = value;
}

Boolean UNIX_VendorPolicyAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_VendorPolicyAction::getDoActionLogging() const
{
	return _doActionLogging;
}

void UNIX_VendorPolicyAction::setDoActionLogging(Boolean &value)
{
	_doActionLogging = value;
}

Boolean UNIX_VendorPolicyAction::getActionData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_DATA, getActionData());
	return true;
}

Array<String> UNIX_VendorPolicyAction::getActionData() const
{
	return _actionData;
}

void UNIX_VendorPolicyAction::setActionData(Array<String> &value)
{
	_actionData = value;
}

Boolean UNIX_VendorPolicyAction::getActionEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ENCODING, getActionEncoding());
	return true;
}

String UNIX_VendorPolicyAction::getActionEncoding() const
{
	return _actionEncoding;
}

void UNIX_VendorPolicyAction::setActionEncoding(String &value)
{
	_actionEncoding = value;
}


void UNIX_VendorPolicyAction::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VendorPolicyAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_VendorPolicyAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_actionData.clear();
	_actionEncoding = String ("");

}

Boolean UNIX_VendorPolicyAction::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ActionData"))
			{
				Array<String> actionDataValue;
				property.getValue().get(actionDataValue);
				setActionData(actionDataValue);
			}
			else if (String::equal(property.getName().getString(), "ActionEncoding"))
			{
				String actionEncodingValue;
				property.getValue().get(actionEncodingValue);
				setActionEncoding(actionEncodingValue);
			}
	}
	return true;
}


Boolean UNIX_VendorPolicyAction::initialize()
{
	return false;
}

Boolean UNIX_VendorPolicyAction::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VendorPolicyAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_VendorPolicyAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_actionData.clear();
	_actionEncoding = String ("");
	
	return false;
}

Boolean UNIX_VendorPolicyAction::finalize()
{
	return false;
}


Boolean UNIX_VendorPolicyAction::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VendorPolicyAction::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VendorPolicyAction::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VendorPolicyAction::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VendorPolicyAction::validateInstance()
{
	return true;
}

