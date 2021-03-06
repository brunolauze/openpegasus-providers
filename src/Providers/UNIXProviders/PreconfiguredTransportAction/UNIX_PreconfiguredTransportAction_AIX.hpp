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


UNIX_PreconfiguredTransportAction::UNIX_PreconfiguredTransportAction(void)
{
}

UNIX_PreconfiguredTransportAction::~UNIX_PreconfiguredTransportAction(void)
{
}

Boolean UNIX_PreconfiguredTransportAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PreconfiguredTransportAction::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PreconfiguredTransportAction::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PreconfiguredTransportAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PreconfiguredTransportAction::getCaption() const
{
	return _caption;
}

void UNIX_PreconfiguredTransportAction::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PreconfiguredTransportAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PreconfiguredTransportAction::getDescription() const
{
	return _description;
}

void UNIX_PreconfiguredTransportAction::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PreconfiguredTransportAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PreconfiguredTransportAction::getElementName() const
{
	return _elementName;
}

void UNIX_PreconfiguredTransportAction::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PreconfiguredTransportAction::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PreconfiguredTransportAction::getGeneration() const
{
	return _generation;
}

void UNIX_PreconfiguredTransportAction::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PreconfiguredTransportAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_PreconfiguredTransportAction::getCommonName() const
{
	return _commonName;
}

void UNIX_PreconfiguredTransportAction::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_PreconfiguredTransportAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_PreconfiguredTransportAction::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_PreconfiguredTransportAction::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_PreconfiguredTransportAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PreconfiguredTransportAction::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PreconfiguredTransportAction::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PreconfiguredTransportAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PreconfiguredTransportAction::getSystemName() const
{
	return _systemName;
}

void UNIX_PreconfiguredTransportAction::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PreconfiguredTransportAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_PreconfiguredTransportAction::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_PreconfiguredTransportAction::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_PreconfiguredTransportAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_PreconfiguredTransportAction::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_PreconfiguredTransportAction::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_PreconfiguredTransportAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PreconfiguredTransportAction::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PreconfiguredTransportAction::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PreconfiguredTransportAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_PreconfiguredTransportAction::getPolicyActionName() const
{
	return _policyActionName;
}

void UNIX_PreconfiguredTransportAction::setPolicyActionName(String &value)
{
	_policyActionName = value;
}

Boolean UNIX_PreconfiguredTransportAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_PreconfiguredTransportAction::getDoActionLogging() const
{
	return _doActionLogging;
}

void UNIX_PreconfiguredTransportAction::setDoActionLogging(Boolean &value)
{
	_doActionLogging = value;
}

Boolean UNIX_PreconfiguredTransportAction::getDoPacketLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_PACKET_LOGGING, getDoPacketLogging());
	return true;
}

Boolean UNIX_PreconfiguredTransportAction::getDoPacketLogging() const
{
	return _doPacketLogging;
}

void UNIX_PreconfiguredTransportAction::setDoPacketLogging(Boolean &value)
{
	_doPacketLogging = value;
}

Boolean UNIX_PreconfiguredTransportAction::getLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIFETIME_SECONDS, getLifetimeSeconds());
	return true;
}

Uint64 UNIX_PreconfiguredTransportAction::getLifetimeSeconds() const
{
	return _lifetimeSeconds;
}

void UNIX_PreconfiguredTransportAction::setLifetimeSeconds(Uint64 &value)
{
	_lifetimeSeconds = value;
}

Boolean UNIX_PreconfiguredTransportAction::getLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIFETIME_KILOBYTES, getLifetimeKilobytes());
	return true;
}

Uint64 UNIX_PreconfiguredTransportAction::getLifetimeKilobytes() const
{
	return _lifetimeKilobytes;
}

void UNIX_PreconfiguredTransportAction::setLifetimeKilobytes(Uint64 &value)
{
	_lifetimeKilobytes = value;
}


void UNIX_PreconfiguredTransportAction::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PreconfiguredTransportAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_PreconfiguredTransportAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_doPacketLogging = Boolean(false);
	_lifetimeSeconds = Uint64(0);
	_lifetimeKilobytes = Uint64(0);

}

Boolean UNIX_PreconfiguredTransportAction::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DoPacketLogging"))
			{
				Boolean doPacketLoggingValue;
				property.getValue().get(doPacketLoggingValue);
				setDoPacketLogging(doPacketLoggingValue);
			}
			else if (String::equal(property.getName().getString(), "LifetimeSeconds"))
			{
				Uint64 lifetimeSecondsValue;
				property.getValue().get(lifetimeSecondsValue);
				setLifetimeSeconds(lifetimeSecondsValue);
			}
			else if (String::equal(property.getName().getString(), "LifetimeKilobytes"))
			{
				Uint64 lifetimeKilobytesValue;
				property.getValue().get(lifetimeKilobytesValue);
				setLifetimeKilobytes(lifetimeKilobytesValue);
			}
	}
	return true;
}


Boolean UNIX_PreconfiguredTransportAction::initialize()
{
	return false;
}

Boolean UNIX_PreconfiguredTransportAction::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PreconfiguredTransportAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_PreconfiguredTransportAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_doPacketLogging = Boolean(false);
	_lifetimeSeconds = Uint64(0);
	_lifetimeKilobytes = Uint64(0);
	
	return false;
}

Boolean UNIX_PreconfiguredTransportAction::finalize()
{
	return false;
}


Boolean UNIX_PreconfiguredTransportAction::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PreconfiguredTransportAction::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PreconfiguredTransportAction::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PreconfiguredTransportAction::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PreconfiguredTransportAction::validateInstance()
{
	return true;
}

