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


UNIX_X509CredentialFilterEntry::UNIX_X509CredentialFilterEntry(void)
{
}

UNIX_X509CredentialFilterEntry::~UNIX_X509CredentialFilterEntry(void)
{
}

Boolean UNIX_X509CredentialFilterEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_X509CredentialFilterEntry::getInstanceID() const
{
	return _instanceID;
}

void UNIX_X509CredentialFilterEntry::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_X509CredentialFilterEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_X509CredentialFilterEntry::getCaption() const
{
	return _caption;
}

void UNIX_X509CredentialFilterEntry::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_X509CredentialFilterEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_X509CredentialFilterEntry::getDescription() const
{
	return _description;
}

void UNIX_X509CredentialFilterEntry::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_X509CredentialFilterEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getElementName() const
{
	return _elementName;
}

void UNIX_X509CredentialFilterEntry::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_X509CredentialFilterEntry::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_X509CredentialFilterEntry::getGeneration() const
{
	return _generation;
}

void UNIX_X509CredentialFilterEntry::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_X509CredentialFilterEntry::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_X509CredentialFilterEntry::getInstallDate() const
{
	return _installDate;
}

void UNIX_X509CredentialFilterEntry::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_X509CredentialFilterEntry::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getName() const
{
	return _name;
}

void UNIX_X509CredentialFilterEntry::setName(String &value)
{
	_name = value;
}

Boolean UNIX_X509CredentialFilterEntry::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_X509CredentialFilterEntry::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_X509CredentialFilterEntry::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_X509CredentialFilterEntry::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_X509CredentialFilterEntry::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_X509CredentialFilterEntry::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_X509CredentialFilterEntry::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_X509CredentialFilterEntry::getStatus() const
{
	return _status;
}

void UNIX_X509CredentialFilterEntry::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_X509CredentialFilterEntry::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getHealthState() const
{
	return _healthState;
}

void UNIX_X509CredentialFilterEntry::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_X509CredentialFilterEntry::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_X509CredentialFilterEntry::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_X509CredentialFilterEntry::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_X509CredentialFilterEntry::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_X509CredentialFilterEntry::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_X509CredentialFilterEntry::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_X509CredentialFilterEntry::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_X509CredentialFilterEntry::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_X509CredentialFilterEntry::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_X509CredentialFilterEntry::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_X509CredentialFilterEntry::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getSystemName() const
{
	return _systemName;
}

void UNIX_X509CredentialFilterEntry::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_X509CredentialFilterEntry::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_X509CredentialFilterEntry::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_X509CredentialFilterEntry::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_X509CredentialFilterEntry::getIsNegated() const
{
	return _isNegated;
}

void UNIX_X509CredentialFilterEntry::setIsNegated(Boolean &value)
{
	_isNegated = value;
}

Boolean UNIX_X509CredentialFilterEntry::getMatchFieldName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_FIELD_NAME, getMatchFieldName());
	return true;
}

Uint32 UNIX_X509CredentialFilterEntry::getMatchFieldName() const
{
	return _matchFieldName;
}

void UNIX_X509CredentialFilterEntry::setMatchFieldName(Uint32 &value)
{
	_matchFieldName = value;
}

Boolean UNIX_X509CredentialFilterEntry::getMatchFieldValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_FIELD_VALUE, getMatchFieldValue());
	return true;
}

String UNIX_X509CredentialFilterEntry::getMatchFieldValue() const
{
	return _matchFieldValue;
}

void UNIX_X509CredentialFilterEntry::setMatchFieldValue(String &value)
{
	_matchFieldValue = value;
}


void UNIX_X509CredentialFilterEntry::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("X509CredentialFilterEntry");
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
	_creationClassName = String("UNIX_X509CredentialFilterEntry");
	_isNegated = Boolean(false);
	_matchFieldName = Uint32(0);
	_matchFieldValue = String ("");

}

Boolean UNIX_X509CredentialFilterEntry::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MatchFieldName"))
			{
				Uint32 matchFieldNameValue;
				property.getValue().get(matchFieldNameValue);
				setMatchFieldName(matchFieldNameValue);
			}
			else if (String::equal(property.getName().getString(), "MatchFieldValue"))
			{
				String matchFieldValueValue;
				property.getValue().get(matchFieldValueValue);
				setMatchFieldValue(matchFieldValueValue);
			}
	}
	return true;
}


Boolean UNIX_X509CredentialFilterEntry::initialize()
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("X509CredentialFilterEntry");
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
	_creationClassName = String("UNIX_X509CredentialFilterEntry");
	_isNegated = Boolean(false);
	_matchFieldName = Uint32(0);
	_matchFieldValue = String ("");
	
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::finalize()
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::loadByName(const String name)
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_X509CredentialFilterEntry::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::validateInstance()
{
	return true;
}

