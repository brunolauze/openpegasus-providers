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


UNIX_IPSOFilterEntry::UNIX_IPSOFilterEntry(void)
{
}

UNIX_IPSOFilterEntry::~UNIX_IPSOFilterEntry(void)
{
}

Boolean UNIX_IPSOFilterEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPSOFilterEntry::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPSOFilterEntry::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPSOFilterEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPSOFilterEntry::getCaption() const
{
	return _caption;
}

void UNIX_IPSOFilterEntry::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPSOFilterEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPSOFilterEntry::getDescription() const
{
	return _description;
}

void UNIX_IPSOFilterEntry::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPSOFilterEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPSOFilterEntry::getElementName() const
{
	return _elementName;
}

void UNIX_IPSOFilterEntry::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPSOFilterEntry::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPSOFilterEntry::getGeneration() const
{
	return _generation;
}

void UNIX_IPSOFilterEntry::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPSOFilterEntry::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IPSOFilterEntry::getInstallDate() const
{
	return _installDate;
}

void UNIX_IPSOFilterEntry::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_IPSOFilterEntry::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPSOFilterEntry::getName() const
{
	return _name;
}

void UNIX_IPSOFilterEntry::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IPSOFilterEntry::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IPSOFilterEntry::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_IPSOFilterEntry::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_IPSOFilterEntry::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IPSOFilterEntry::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_IPSOFilterEntry::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_IPSOFilterEntry::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IPSOFilterEntry::getStatus() const
{
	return _status;
}

void UNIX_IPSOFilterEntry::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_IPSOFilterEntry::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getHealthState() const
{
	return _healthState;
}

void UNIX_IPSOFilterEntry::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_IPSOFilterEntry::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_IPSOFilterEntry::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_IPSOFilterEntry::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_IPSOFilterEntry::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_IPSOFilterEntry::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_IPSOFilterEntry::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_IPSOFilterEntry::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_IPSOFilterEntry::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_IPSOFilterEntry::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPSOFilterEntry::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IPSOFilterEntry::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IPSOFilterEntry::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPSOFilterEntry::getSystemName() const
{
	return _systemName;
}

void UNIX_IPSOFilterEntry::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IPSOFilterEntry::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPSOFilterEntry::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IPSOFilterEntry::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IPSOFilterEntry::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_IPSOFilterEntry::getIsNegated() const
{
	return _isNegated;
}

void UNIX_IPSOFilterEntry::setIsNegated(Boolean &value)
{
	_isNegated = value;
}

Boolean UNIX_IPSOFilterEntry::getMatchConditionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_CONDITION_TYPE, getMatchConditionType());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getMatchConditionType() const
{
	return _matchConditionType;
}

void UNIX_IPSOFilterEntry::setMatchConditionType(Uint16 &value)
{
	_matchConditionType = value;
}

Boolean UNIX_IPSOFilterEntry::getClassificationLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSIFICATION_LEVEL, getClassificationLevel());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getClassificationLevel() const
{
	return _classificationLevel;
}

void UNIX_IPSOFilterEntry::setClassificationLevel(Uint16 &value)
{
	_classificationLevel = value;
}

Boolean UNIX_IPSOFilterEntry::getOtherClassificationLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CLASSIFICATION_LEVEL, getOtherClassificationLevel());
	return true;
}

String UNIX_IPSOFilterEntry::getOtherClassificationLevel() const
{
	return _otherClassificationLevel;
}

void UNIX_IPSOFilterEntry::setOtherClassificationLevel(String &value)
{
	_otherClassificationLevel = value;
}

Boolean UNIX_IPSOFilterEntry::getProtectionAuthorities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTECTION_AUTHORITIES, getProtectionAuthorities());
	return true;
}

Array<Uint16> UNIX_IPSOFilterEntry::getProtectionAuthorities() const
{
	return _protectionAuthorities;
}

void UNIX_IPSOFilterEntry::setProtectionAuthorities(Array<Uint16> &value)
{
	_protectionAuthorities = value;
}

Boolean UNIX_IPSOFilterEntry::getOtherProtectionAuthorities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTECTION_AUTHORITIES, getOtherProtectionAuthorities());
	return true;
}

Array<String> UNIX_IPSOFilterEntry::getOtherProtectionAuthorities() const
{
	return _otherProtectionAuthorities;
}

void UNIX_IPSOFilterEntry::setOtherProtectionAuthorities(Array<String> &value)
{
	_otherProtectionAuthorities = value;
}


void UNIX_IPSOFilterEntry::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPSOFilterEntry");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IPSOFilterEntry");
	_isNegated = Boolean(false);
	_matchConditionType = Uint16(0);
	_classificationLevel = Uint16(0);
	_otherClassificationLevel = String ("");
	_protectionAuthorities.clear();
	_otherProtectionAuthorities.clear();

}

Boolean UNIX_IPSOFilterEntry::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
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
			else if (String::equal(property.getName().getString(), "IsNegated"))
			{
				Boolean isNegatedValue;
				property.getValue().get(isNegatedValue);
				setIsNegated(isNegatedValue);
			}
			else if (String::equal(property.getName().getString(), "MatchConditionType"))
			{
				Uint16 matchConditionTypeValue;
				property.getValue().get(matchConditionTypeValue);
				setMatchConditionType(matchConditionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ClassificationLevel"))
			{
				Uint16 classificationLevelValue;
				property.getValue().get(classificationLevelValue);
				setClassificationLevel(classificationLevelValue);
			}
			else if (String::equal(property.getName().getString(), "OtherClassificationLevel"))
			{
				String otherClassificationLevelValue;
				property.getValue().get(otherClassificationLevelValue);
				setOtherClassificationLevel(otherClassificationLevelValue);
			}
			else if (String::equal(property.getName().getString(), "ProtectionAuthorities"))
			{
				Array<Uint16> protectionAuthoritiesValue;
				property.getValue().get(protectionAuthoritiesValue);
				setProtectionAuthorities(protectionAuthoritiesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherProtectionAuthorities"))
			{
				Array<String> otherProtectionAuthoritiesValue;
				property.getValue().get(otherProtectionAuthoritiesValue);
				setOtherProtectionAuthorities(otherProtectionAuthoritiesValue);
			}
	}
	return true;
}


Boolean UNIX_IPSOFilterEntry::initialize()
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPSOFilterEntry");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IPSOFilterEntry");
	_isNegated = Boolean(false);
	_matchConditionType = Uint16(0);
	_classificationLevel = Uint16(0);
	_otherClassificationLevel = String ("");
	_protectionAuthorities.clear();
	_otherProtectionAuthorities.clear();
	
	return false;
}

Boolean UNIX_IPSOFilterEntry::finalize()
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_IPSOFilterEntry::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::validateInstance()
{
	return true;
}

