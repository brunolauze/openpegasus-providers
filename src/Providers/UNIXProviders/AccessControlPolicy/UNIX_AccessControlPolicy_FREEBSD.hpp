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


UNIX_AccessControlPolicy::UNIX_AccessControlPolicy(void)
{
}

UNIX_AccessControlPolicy::~UNIX_AccessControlPolicy(void)
{
}

Boolean UNIX_AccessControlPolicy::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccessControlPolicy::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AccessControlPolicy::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AccessControlPolicy::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccessControlPolicy::getCaption() const
{
	return _caption;
}

void UNIX_AccessControlPolicy::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AccessControlPolicy::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccessControlPolicy::getDescription() const
{
	return _description;
}

void UNIX_AccessControlPolicy::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AccessControlPolicy::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccessControlPolicy::getElementName() const
{
	return _elementName;
}

void UNIX_AccessControlPolicy::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AccessControlPolicy::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AccessControlPolicy::getGeneration() const
{
	return _generation;
}

void UNIX_AccessControlPolicy::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AccessControlPolicy::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_AccessControlPolicy::getCommonName() const
{
	return _commonName;
}

void UNIX_AccessControlPolicy::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_AccessControlPolicy::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_AccessControlPolicy::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_AccessControlPolicy::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_AccessControlPolicy::getPolicyDecisionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_DECISION_STRATEGY, getPolicyDecisionStrategy());
	return true;
}

Uint16 UNIX_AccessControlPolicy::getPolicyDecisionStrategy() const
{
	return _policyDecisionStrategy;
}

void UNIX_AccessControlPolicy::setPolicyDecisionStrategy(Uint16 &value)
{
	_policyDecisionStrategy = value;
}

Boolean UNIX_AccessControlPolicy::getPolicyRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ROLES, getPolicyRoles());
	return true;
}

Array<String> UNIX_AccessControlPolicy::getPolicyRoles() const
{
	return _policyRoles;
}

void UNIX_AccessControlPolicy::setPolicyRoles(Array<String> &value)
{
	_policyRoles = value;
}

Boolean UNIX_AccessControlPolicy::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Uint16 UNIX_AccessControlPolicy::getEnabled() const
{
	return _enabled;
}

void UNIX_AccessControlPolicy::setEnabled(Uint16 &value)
{
	_enabled = value;
}

Boolean UNIX_AccessControlPolicy::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AccessControlPolicy::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_AccessControlPolicy::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_AccessControlPolicy::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AccessControlPolicy::getSystemName() const
{
	return _systemName;
}

void UNIX_AccessControlPolicy::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_AccessControlPolicy::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AccessControlPolicy::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_AccessControlPolicy::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_AccessControlPolicy::getPolicyID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ID, getPolicyID());
	return true;
}

String UNIX_AccessControlPolicy::getPolicyID() const
{
	return _policyID;
}

void UNIX_AccessControlPolicy::setPolicyID(String &value)
{
	_policyID = value;
}


void UNIX_AccessControlPolicy::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccessControlPolicy");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_policyDecisionStrategy = Uint16(0);
	_policyRoles.clear();
	_enabled = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_AccessControlPolicy");
	_policyID = String ("");

}

Boolean UNIX_AccessControlPolicy::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PolicyID"))
			{
				String policyIDValue;
				property.getValue().get(policyIDValue);
				setPolicyID(policyIDValue);
			}
	}
	return true;
}


Boolean UNIX_AccessControlPolicy::initialize()
{
	return false;
}

Boolean UNIX_AccessControlPolicy::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AccessControlPolicy");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_policyDecisionStrategy = Uint16(0);
	_policyRoles.clear();
	_enabled = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_AccessControlPolicy");
	_policyID = String ("");
	
	return false;
}

Boolean UNIX_AccessControlPolicy::finalize()
{
	return false;
}


Boolean UNIX_AccessControlPolicy::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String policyIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_ID)) policyIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getPolicyID(), policyIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AccessControlPolicy::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessControlPolicy::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessControlPolicy::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessControlPolicy::validateInstance()
{
	return true;
}

