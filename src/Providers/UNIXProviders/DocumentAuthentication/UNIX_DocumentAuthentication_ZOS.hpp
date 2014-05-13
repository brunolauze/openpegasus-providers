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


UNIX_DocumentAuthentication::UNIX_DocumentAuthentication(void)
{
}

UNIX_DocumentAuthentication::~UNIX_DocumentAuthentication(void)
{
}

Boolean UNIX_DocumentAuthentication::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DocumentAuthentication::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DocumentAuthentication::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DocumentAuthentication::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DocumentAuthentication::getCaption() const
{
	return _caption;
}

void UNIX_DocumentAuthentication::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DocumentAuthentication::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DocumentAuthentication::getDescription() const
{
	return _description;
}

void UNIX_DocumentAuthentication::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DocumentAuthentication::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DocumentAuthentication::getElementName() const
{
	return _elementName;
}

void UNIX_DocumentAuthentication::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DocumentAuthentication::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DocumentAuthentication::getGeneration() const
{
	return _generation;
}

void UNIX_DocumentAuthentication::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DocumentAuthentication::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_DocumentAuthentication::getCommonName() const
{
	return _commonName;
}

void UNIX_DocumentAuthentication::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_DocumentAuthentication::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_DocumentAuthentication::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_DocumentAuthentication::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_DocumentAuthentication::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DocumentAuthentication::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_DocumentAuthentication::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_DocumentAuthentication::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DocumentAuthentication::getSystemName() const
{
	return _systemName;
}

void UNIX_DocumentAuthentication::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_DocumentAuthentication::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_DocumentAuthentication::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_DocumentAuthentication::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_DocumentAuthentication::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_DocumentAuthentication::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_DocumentAuthentication::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_DocumentAuthentication::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DocumentAuthentication::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DocumentAuthentication::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DocumentAuthentication::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_DocumentAuthentication::getPolicyConditionName() const
{
	return _policyConditionName;
}

void UNIX_DocumentAuthentication::setPolicyConditionName(String &value)
{
	_policyConditionName = value;
}

Boolean UNIX_DocumentAuthentication::getTypeOfDocument(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_DOCUMENT, getTypeOfDocument());
	return true;
}

Uint16 UNIX_DocumentAuthentication::getTypeOfDocument() const
{
	return _typeOfDocument;
}

void UNIX_DocumentAuthentication::setTypeOfDocument(Uint16 &value)
{
	_typeOfDocument = value;
}

Boolean UNIX_DocumentAuthentication::getOtherDocument(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DOCUMENT, getOtherDocument());
	return true;
}

String UNIX_DocumentAuthentication::getOtherDocument() const
{
	return _otherDocument;
}

void UNIX_DocumentAuthentication::setOtherDocument(String &value)
{
	_otherDocument = value;
}

Boolean UNIX_DocumentAuthentication::getDocumentIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOCUMENT_IDENTIFIER, getDocumentIdentifier());
	return true;
}

String UNIX_DocumentAuthentication::getDocumentIdentifier() const
{
	return _documentIdentifier;
}

void UNIX_DocumentAuthentication::setDocumentIdentifier(String &value)
{
	_documentIdentifier = value;
}


void UNIX_DocumentAuthentication::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DocumentAuthentication");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_DocumentAuthentication");
	_policyConditionName = String ("");
	_typeOfDocument = Uint16(0);
	_otherDocument = String ("");
	_documentIdentifier = String ("");

}

Boolean UNIX_DocumentAuthentication::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TypeOfDocument"))
			{
				Uint16 typeOfDocumentValue;
				property.getValue().get(typeOfDocumentValue);
				setTypeOfDocument(typeOfDocumentValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDocument"))
			{
				String otherDocumentValue;
				property.getValue().get(otherDocumentValue);
				setOtherDocument(otherDocumentValue);
			}
			else if (String::equal(property.getName().getString(), "DocumentIdentifier"))
			{
				String documentIdentifierValue;
				property.getValue().get(documentIdentifierValue);
				setDocumentIdentifier(documentIdentifierValue);
			}
	}
	return true;
}


Boolean UNIX_DocumentAuthentication::initialize()
{
	return false;
}

Boolean UNIX_DocumentAuthentication::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DocumentAuthentication");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_DocumentAuthentication");
	_policyConditionName = String ("");
	_typeOfDocument = Uint16(0);
	_otherDocument = String ("");
	_documentIdentifier = String ("");
	
	return false;
}

Boolean UNIX_DocumentAuthentication::finalize()
{
	return false;
}


Boolean UNIX_DocumentAuthentication::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DocumentAuthentication::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DocumentAuthentication::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DocumentAuthentication::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DocumentAuthentication::validateInstance()
{
	return true;
}

