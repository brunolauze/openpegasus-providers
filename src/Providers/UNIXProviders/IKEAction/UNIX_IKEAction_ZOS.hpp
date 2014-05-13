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


UNIX_IKEAction::UNIX_IKEAction(void)
{
}

UNIX_IKEAction::~UNIX_IKEAction(void)
{
}

Boolean UNIX_IKEAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IKEAction::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IKEAction::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IKEAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IKEAction::getCaption() const
{
	return _caption;
}

void UNIX_IKEAction::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IKEAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IKEAction::getDescription() const
{
	return _description;
}

void UNIX_IKEAction::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IKEAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IKEAction::getElementName() const
{
	return _elementName;
}

void UNIX_IKEAction::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IKEAction::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IKEAction::getGeneration() const
{
	return _generation;
}

void UNIX_IKEAction::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IKEAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_IKEAction::getCommonName() const
{
	return _commonName;
}

void UNIX_IKEAction::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_IKEAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_IKEAction::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_IKEAction::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_IKEAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IKEAction::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IKEAction::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IKEAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IKEAction::getSystemName() const
{
	return _systemName;
}

void UNIX_IKEAction::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IKEAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_IKEAction::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_IKEAction::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_IKEAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_IKEAction::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_IKEAction::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_IKEAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IKEAction::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IKEAction::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IKEAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_IKEAction::getPolicyActionName() const
{
	return _policyActionName;
}

void UNIX_IKEAction::setPolicyActionName(String &value)
{
	_policyActionName = value;
}

Boolean UNIX_IKEAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_IKEAction::getDoActionLogging() const
{
	return _doActionLogging;
}

void UNIX_IKEAction::setDoActionLogging(Boolean &value)
{
	_doActionLogging = value;
}

Boolean UNIX_IKEAction::getDoPacketLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_PACKET_LOGGING, getDoPacketLogging());
	return true;
}

Boolean UNIX_IKEAction::getDoPacketLogging() const
{
	return _doPacketLogging;
}

void UNIX_IKEAction::setDoPacketLogging(Boolean &value)
{
	_doPacketLogging = value;
}

Boolean UNIX_IKEAction::getMinLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_SECONDS, getMinLifetimeSeconds());
	return true;
}

Uint64 UNIX_IKEAction::getMinLifetimeSeconds() const
{
	return _minLifetimeSeconds;
}

void UNIX_IKEAction::setMinLifetimeSeconds(Uint64 &value)
{
	_minLifetimeSeconds = value;
}

Boolean UNIX_IKEAction::getIdleDurationSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_DURATION_SECONDS, getIdleDurationSeconds());
	return true;
}

Uint64 UNIX_IKEAction::getIdleDurationSeconds() const
{
	return _idleDurationSeconds;
}

void UNIX_IKEAction::setIdleDurationSeconds(Uint64 &value)
{
	_idleDurationSeconds = value;
}

Boolean UNIX_IKEAction::getMinLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_KILOBYTES, getMinLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IKEAction::getMinLifetimeKilobytes() const
{
	return _minLifetimeKilobytes;
}

void UNIX_IKEAction::setMinLifetimeKilobytes(Uint64 &value)
{
	_minLifetimeKilobytes = value;
}

Boolean UNIX_IKEAction::getExchangeMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCHANGE_MODE, getExchangeMode());
	return true;
}

Uint16 UNIX_IKEAction::getExchangeMode() const
{
	return _exchangeMode;
}

void UNIX_IKEAction::setExchangeMode(Uint16 &value)
{
	_exchangeMode = value;
}

Boolean UNIX_IKEAction::getUseIKEIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_IKE_IDENTITY_TYPE, getUseIKEIdentityType());
	return true;
}

Uint16 UNIX_IKEAction::getUseIKEIdentityType() const
{
	return _useIKEIdentityType;
}

void UNIX_IKEAction::setUseIKEIdentityType(Uint16 &value)
{
	_useIKEIdentityType = value;
}

Boolean UNIX_IKEAction::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IKEAction::getVendorID() const
{
	return _vendorID;
}

void UNIX_IKEAction::setVendorID(String &value)
{
	_vendorID = value;
}

Boolean UNIX_IKEAction::getAggressiveModeGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGRESSIVE_MODE_GROUP_ID, getAggressiveModeGroupID());
	return true;
}

Uint16 UNIX_IKEAction::getAggressiveModeGroupID() const
{
	return _aggressiveModeGroupID;
}

void UNIX_IKEAction::setAggressiveModeGroupID(Uint16 &value)
{
	_aggressiveModeGroupID = value;
}


void UNIX_IKEAction::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IKEAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_IKEAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_doPacketLogging = Boolean(false);
	_minLifetimeSeconds = Uint64(0);
	_idleDurationSeconds = Uint64(0);
	_minLifetimeKilobytes = Uint64(0);
	_exchangeMode = Uint16(0);
	_useIKEIdentityType = Uint16(0);
	_vendorID = String ("");
	_aggressiveModeGroupID = Uint16(0);

}

Boolean UNIX_IKEAction::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MinLifetimeSeconds"))
			{
				Uint64 minLifetimeSecondsValue;
				property.getValue().get(minLifetimeSecondsValue);
				setMinLifetimeSeconds(minLifetimeSecondsValue);
			}
			else if (String::equal(property.getName().getString(), "IdleDurationSeconds"))
			{
				Uint64 idleDurationSecondsValue;
				property.getValue().get(idleDurationSecondsValue);
				setIdleDurationSeconds(idleDurationSecondsValue);
			}
			else if (String::equal(property.getName().getString(), "MinLifetimeKilobytes"))
			{
				Uint64 minLifetimeKilobytesValue;
				property.getValue().get(minLifetimeKilobytesValue);
				setMinLifetimeKilobytes(minLifetimeKilobytesValue);
			}
			else if (String::equal(property.getName().getString(), "ExchangeMode"))
			{
				Uint16 exchangeModeValue;
				property.getValue().get(exchangeModeValue);
				setExchangeMode(exchangeModeValue);
			}
			else if (String::equal(property.getName().getString(), "UseIKEIdentityType"))
			{
				Uint16 useIKEIdentityTypeValue;
				property.getValue().get(useIKEIdentityTypeValue);
				setUseIKEIdentityType(useIKEIdentityTypeValue);
			}
			else if (String::equal(property.getName().getString(), "VendorID"))
			{
				String vendorIDValue;
				property.getValue().get(vendorIDValue);
				setVendorID(vendorIDValue);
			}
			else if (String::equal(property.getName().getString(), "AggressiveModeGroupID"))
			{
				Uint16 aggressiveModeGroupIDValue;
				property.getValue().get(aggressiveModeGroupIDValue);
				setAggressiveModeGroupID(aggressiveModeGroupIDValue);
			}
	}
	return true;
}


Boolean UNIX_IKEAction::initialize()
{
	return false;
}

Boolean UNIX_IKEAction::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IKEAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_IKEAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_doPacketLogging = Boolean(false);
	_minLifetimeSeconds = Uint64(0);
	_idleDurationSeconds = Uint64(0);
	_minLifetimeKilobytes = Uint64(0);
	_exchangeMode = Uint16(0);
	_useIKEIdentityType = Uint16(0);
	_vendorID = String ("");
	_aggressiveModeGroupID = Uint16(0);
	
	return false;
}

Boolean UNIX_IKEAction::finalize()
{
	return false;
}


Boolean UNIX_IKEAction::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IKEAction::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKEAction::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKEAction::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKEAction::validateInstance()
{
	return true;
}

