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


UNIX_IPsecTransportAction::UNIX_IPsecTransportAction(void)
{
}

UNIX_IPsecTransportAction::~UNIX_IPsecTransportAction(void)
{
}

Boolean UNIX_IPsecTransportAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPsecTransportAction::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPsecTransportAction::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPsecTransportAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPsecTransportAction::getCaption() const
{
	return _caption;
}

void UNIX_IPsecTransportAction::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPsecTransportAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPsecTransportAction::getDescription() const
{
	return _description;
}

void UNIX_IPsecTransportAction::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPsecTransportAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPsecTransportAction::getElementName() const
{
	return _elementName;
}

void UNIX_IPsecTransportAction::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPsecTransportAction::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPsecTransportAction::getGeneration() const
{
	return _generation;
}

void UNIX_IPsecTransportAction::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPsecTransportAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_IPsecTransportAction::getCommonName() const
{
	return _commonName;
}

void UNIX_IPsecTransportAction::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_IPsecTransportAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_IPsecTransportAction::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_IPsecTransportAction::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_IPsecTransportAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPsecTransportAction::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IPsecTransportAction::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IPsecTransportAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPsecTransportAction::getSystemName() const
{
	return _systemName;
}

void UNIX_IPsecTransportAction::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IPsecTransportAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_IPsecTransportAction::getPolicyRuleCreationClassName() const
{
	return _policyRuleCreationClassName;
}

void UNIX_IPsecTransportAction::setPolicyRuleCreationClassName(String &value)
{
	_policyRuleCreationClassName = value;
}

Boolean UNIX_IPsecTransportAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_IPsecTransportAction::getPolicyRuleName() const
{
	return _policyRuleName;
}

void UNIX_IPsecTransportAction::setPolicyRuleName(String &value)
{
	_policyRuleName = value;
}

Boolean UNIX_IPsecTransportAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPsecTransportAction::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IPsecTransportAction::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IPsecTransportAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_IPsecTransportAction::getPolicyActionName() const
{
	return _policyActionName;
}

void UNIX_IPsecTransportAction::setPolicyActionName(String &value)
{
	_policyActionName = value;
}

Boolean UNIX_IPsecTransportAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_IPsecTransportAction::getDoActionLogging() const
{
	return _doActionLogging;
}

void UNIX_IPsecTransportAction::setDoActionLogging(Boolean &value)
{
	_doActionLogging = value;
}

Boolean UNIX_IPsecTransportAction::getDoPacketLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_PACKET_LOGGING, getDoPacketLogging());
	return true;
}

Boolean UNIX_IPsecTransportAction::getDoPacketLogging() const
{
	return _doPacketLogging;
}

void UNIX_IPsecTransportAction::setDoPacketLogging(Boolean &value)
{
	_doPacketLogging = value;
}

Boolean UNIX_IPsecTransportAction::getMinLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_SECONDS, getMinLifetimeSeconds());
	return true;
}

Uint64 UNIX_IPsecTransportAction::getMinLifetimeSeconds() const
{
	return _minLifetimeSeconds;
}

void UNIX_IPsecTransportAction::setMinLifetimeSeconds(Uint64 &value)
{
	_minLifetimeSeconds = value;
}

Boolean UNIX_IPsecTransportAction::getIdleDurationSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_DURATION_SECONDS, getIdleDurationSeconds());
	return true;
}

Uint64 UNIX_IPsecTransportAction::getIdleDurationSeconds() const
{
	return _idleDurationSeconds;
}

void UNIX_IPsecTransportAction::setIdleDurationSeconds(Uint64 &value)
{
	_idleDurationSeconds = value;
}

Boolean UNIX_IPsecTransportAction::getMinLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_KILOBYTES, getMinLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IPsecTransportAction::getMinLifetimeKilobytes() const
{
	return _minLifetimeKilobytes;
}

void UNIX_IPsecTransportAction::setMinLifetimeKilobytes(Uint64 &value)
{
	_minLifetimeKilobytes = value;
}

Boolean UNIX_IPsecTransportAction::getUsePFS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_P_FS, getUsePFS());
	return true;
}

Boolean UNIX_IPsecTransportAction::getUsePFS() const
{
	return _usePFS;
}

void UNIX_IPsecTransportAction::setUsePFS(Boolean &value)
{
	_usePFS = value;
}

Boolean UNIX_IPsecTransportAction::getUsePhase1Group(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_PHASE_1_GROUP, getUsePhase1Group());
	return true;
}

Boolean UNIX_IPsecTransportAction::getUsePhase1Group() const
{
	return _usePhase1Group;
}

void UNIX_IPsecTransportAction::setUsePhase1Group(Boolean &value)
{
	_usePhase1Group = value;
}

Boolean UNIX_IPsecTransportAction::getGroupId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupId());
	return true;
}

Uint16 UNIX_IPsecTransportAction::getGroupId() const
{
	return _groupId;
}

void UNIX_IPsecTransportAction::setGroupId(Uint16 &value)
{
	_groupId = value;
}

Boolean UNIX_IPsecTransportAction::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IPsecTransportAction::getVendorID() const
{
	return _vendorID;
}

void UNIX_IPsecTransportAction::setVendorID(String &value)
{
	_vendorID = value;
}

Boolean UNIX_IPsecTransportAction::getGranularity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GRANULARITY, getGranularity());
	return true;
}

Uint16 UNIX_IPsecTransportAction::getGranularity() const
{
	return _granularity;
}

void UNIX_IPsecTransportAction::setGranularity(Uint16 &value)
{
	_granularity = value;
}

Boolean UNIX_IPsecTransportAction::getOtherGranularity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_GRANULARITY, getOtherGranularity());
	return true;
}

String UNIX_IPsecTransportAction::getOtherGranularity() const
{
	return _otherGranularity;
}

void UNIX_IPsecTransportAction::setOtherGranularity(String &value)
{
	_otherGranularity = value;
}


void UNIX_IPsecTransportAction::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPsecTransportAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_IPsecTransportAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_doPacketLogging = Boolean(false);
	_minLifetimeSeconds = Uint64(0);
	_idleDurationSeconds = Uint64(0);
	_minLifetimeKilobytes = Uint64(0);
	_usePFS = Boolean(false);
	_usePhase1Group = Boolean(false);
	_groupId = Uint16(0);
	_vendorID = String ("");
	_granularity = Uint16(0);
	_otherGranularity = String ("");

}

Boolean UNIX_IPsecTransportAction::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "UsePFS"))
			{
				Boolean usePFSValue;
				property.getValue().get(usePFSValue);
				setUsePFS(usePFSValue);
			}
			else if (String::equal(property.getName().getString(), "UsePhase1Group"))
			{
				Boolean usePhase1GroupValue;
				property.getValue().get(usePhase1GroupValue);
				setUsePhase1Group(usePhase1GroupValue);
			}
			else if (String::equal(property.getName().getString(), "GroupId"))
			{
				Uint16 groupIdValue;
				property.getValue().get(groupIdValue);
				setGroupId(groupIdValue);
			}
			else if (String::equal(property.getName().getString(), "VendorID"))
			{
				String vendorIDValue;
				property.getValue().get(vendorIDValue);
				setVendorID(vendorIDValue);
			}
			else if (String::equal(property.getName().getString(), "Granularity"))
			{
				Uint16 granularityValue;
				property.getValue().get(granularityValue);
				setGranularity(granularityValue);
			}
			else if (String::equal(property.getName().getString(), "OtherGranularity"))
			{
				String otherGranularityValue;
				property.getValue().get(otherGranularityValue);
				setOtherGranularity(otherGranularityValue);
			}
	}
	return true;
}


Boolean UNIX_IPsecTransportAction::initialize()
{
	return false;
}

Boolean UNIX_IPsecTransportAction::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPsecTransportAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_policyRuleCreationClassName = String ("");
	_policyRuleName = String ("");
	_creationClassName = String("UNIX_IPsecTransportAction");
	_policyActionName = String ("");
	_doActionLogging = Boolean(false);
	_doPacketLogging = Boolean(false);
	_minLifetimeSeconds = Uint64(0);
	_idleDurationSeconds = Uint64(0);
	_minLifetimeKilobytes = Uint64(0);
	_usePFS = Boolean(false);
	_usePhase1Group = Boolean(false);
	_groupId = Uint16(0);
	_vendorID = String ("");
	_granularity = Uint16(0);
	_otherGranularity = String ("");
	
	return false;
}

Boolean UNIX_IPsecTransportAction::finalize()
{
	return false;
}


Boolean UNIX_IPsecTransportAction::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPsecTransportAction::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPsecTransportAction::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPsecTransportAction::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPsecTransportAction::validateInstance()
{
	return true;
}

