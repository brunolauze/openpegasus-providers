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


UNIX_VendorPolicyCondition::UNIX_VendorPolicyCondition(void)
{
}

UNIX_VendorPolicyCondition::~UNIX_VendorPolicyCondition(void)
{
}

Boolean UNIX_VendorPolicyCondition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VendorPolicyCondition::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VendorPolicyCondition::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VendorPolicyCondition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VendorPolicyCondition::getCaption() const
{
	return _caption;
}

void UNIX_VendorPolicyCondition::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VendorPolicyCondition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VendorPolicyCondition::getDescription() const
{
	return _description;
}

void UNIX_VendorPolicyCondition::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VendorPolicyCondition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VendorPolicyCondition::getElementName() const
{
	return _elementName;
}

void UNIX_VendorPolicyCondition::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VendorPolicyCondition::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VendorPolicyCondition::getGeneration() const
{
	return _generation;
}

void UNIX_VendorPolicyCondition::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VendorPolicyCondition::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_VendorPolicyCondition::getCommonName() const
{
	return _commonName;
}

void UNIX_VendorPolicyCondition::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_VendorPolicyCondition::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_VendorPolicyCondition::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_VendorPolicyCondition::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_VendorPolicyCondition::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VendorPolicyCondition::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_VendorPolicyCondition::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_VendorPolicyCondition::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VendorPolicyCondition::getSystemName() const
{
	return _systemName;
}

void UNIX_VendorPolicyCondition::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_VendorPolicyCondition::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_VendorPolicyCondition::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_VendorPolicyCondition::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_VendorPolicyCondition::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_VendorPolicyCondition::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_VendorPolicyCondition::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_VendorPolicyCondition::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VendorPolicyCondition::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_VendorPolicyCondition::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_VendorPolicyCondition::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_VendorPolicyCondition::getPolicyConditionName() const
{
	return _policyConditionName;
}

void UNIX_VendorPolicyCondition::setPolicyConditionName(String &value)
{
	_policyConditionName = value;
}

Boolean UNIX_VendorPolicyCondition::getConstraint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSTRAINT, getConstraint());
	return true;
}

Array<String> UNIX_VendorPolicyCondition::getConstraint() const
{
	return _constraint;
}

void UNIX_VendorPolicyCondition::setConstraint(Array<String> &value)
{
	_constraint = value;
}

Boolean UNIX_VendorPolicyCondition::getConstraintEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSTRAINT_ENCODING, getConstraintEncoding());
	return true;
}

String UNIX_VendorPolicyCondition::getConstraintEncoding() const
{
	return _constraintEncoding;
}

void UNIX_VendorPolicyCondition::setConstraintEncoding(String &value)
{
	_constraintEncoding = value;
}


void UNIX_VendorPolicyCondition::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VendorPolicyCondition");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_VendorPolicyCondition");
	_policyConditionName = String ("");
	_constraint.clear();
	_constraintEncoding = String ("");

}

Boolean UNIX_VendorPolicyCondition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Constraint"))
			{
				Array<String> constraintValue;
				property.getValue().get(constraintValue);
				setConstraint(constraintValue);
			}
			else if (String::equal(property.getName().getString(), "ConstraintEncoding"))
			{
				String constraintEncodingValue;
				property.getValue().get(constraintEncodingValue);
				setConstraintEncoding(constraintEncodingValue);
			}
	}
	return true;
}


Boolean UNIX_VendorPolicyCondition::initialize()
{
	return false;
}

Boolean UNIX_VendorPolicyCondition::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VendorPolicyCondition");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_VendorPolicyCondition");
	_policyConditionName = String ("");
	_constraint.clear();
	_constraintEncoding = String ("");
	
	return false;
}

Boolean UNIX_VendorPolicyCondition::finalize()
{
	return false;
}


Boolean UNIX_VendorPolicyCondition::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VendorPolicyCondition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VendorPolicyCondition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VendorPolicyCondition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VendorPolicyCondition::validateInstance()
{
	return true;
}

