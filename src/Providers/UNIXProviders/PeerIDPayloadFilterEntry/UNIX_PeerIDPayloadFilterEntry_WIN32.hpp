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


UNIX_PeerIDPayloadFilterEntry::UNIX_PeerIDPayloadFilterEntry(void)
{
}

UNIX_PeerIDPayloadFilterEntry::~UNIX_PeerIDPayloadFilterEntry(void)
{
}

Boolean UNIX_PeerIDPayloadFilterEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PeerIDPayloadFilterEntry::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getCaption() const
{
	return _caption;
}

void UNIX_PeerIDPayloadFilterEntry::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getDescription() const
{
	return _description;
}

void UNIX_PeerIDPayloadFilterEntry::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getElementName() const
{
	return _elementName;
}

void UNIX_PeerIDPayloadFilterEntry::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PeerIDPayloadFilterEntry::getGeneration() const
{
	return _generation;
}

void UNIX_PeerIDPayloadFilterEntry::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PeerIDPayloadFilterEntry::getInstallDate() const
{
	return _installDate;
}

void UNIX_PeerIDPayloadFilterEntry::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getName() const
{
	return _name;
}

void UNIX_PeerIDPayloadFilterEntry::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PeerIDPayloadFilterEntry::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PeerIDPayloadFilterEntry::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PeerIDPayloadFilterEntry::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PeerIDPayloadFilterEntry::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getStatus() const
{
	return _status;
}

void UNIX_PeerIDPayloadFilterEntry::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PeerIDPayloadFilterEntry::getHealthState() const
{
	return _healthState;
}

void UNIX_PeerIDPayloadFilterEntry::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PeerIDPayloadFilterEntry::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PeerIDPayloadFilterEntry::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PeerIDPayloadFilterEntry::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PeerIDPayloadFilterEntry::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PeerIDPayloadFilterEntry::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PeerIDPayloadFilterEntry::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PeerIDPayloadFilterEntry::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PeerIDPayloadFilterEntry::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PeerIDPayloadFilterEntry::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getSystemName() const
{
	return _systemName;
}

void UNIX_PeerIDPayloadFilterEntry::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PeerIDPayloadFilterEntry::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getIsNegated() const
{
	return _isNegated;
}

void UNIX_PeerIDPayloadFilterEntry::setIsNegated(Boolean &value)
{
	_isNegated = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getMatchIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_IDENTITY_TYPE, getMatchIdentityType());
	return true;
}

Uint16 UNIX_PeerIDPayloadFilterEntry::getMatchIdentityType() const
{
	return _matchIdentityType;
}

void UNIX_PeerIDPayloadFilterEntry::setMatchIdentityType(Uint16 &value)
{
	_matchIdentityType = value;
}

Boolean UNIX_PeerIDPayloadFilterEntry::getMatchIdentityValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_IDENTITY_VALUE, getMatchIdentityValue());
	return true;
}

String UNIX_PeerIDPayloadFilterEntry::getMatchIdentityValue() const
{
	return _matchIdentityValue;
}

void UNIX_PeerIDPayloadFilterEntry::setMatchIdentityValue(String &value)
{
	_matchIdentityValue = value;
}


void UNIX_PeerIDPayloadFilterEntry::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PeerIDPayloadFilterEntry");
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
	_creationClassName = String("UNIX_PeerIDPayloadFilterEntry");
	_isNegated = Boolean(false);
	_matchIdentityType = Uint16(0);
	_matchIdentityValue = String ("");

}

Boolean UNIX_PeerIDPayloadFilterEntry::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MatchIdentityType"))
			{
				Uint16 matchIdentityTypeValue;
				property.getValue().get(matchIdentityTypeValue);
				setMatchIdentityType(matchIdentityTypeValue);
			}
			else if (String::equal(property.getName().getString(), "MatchIdentityValue"))
			{
				String matchIdentityValueValue;
				property.getValue().get(matchIdentityValueValue);
				setMatchIdentityValue(matchIdentityValueValue);
			}
	}
	return true;
}


Boolean UNIX_PeerIDPayloadFilterEntry::initialize()
{
	return false;
}

Boolean UNIX_PeerIDPayloadFilterEntry::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PeerIDPayloadFilterEntry");
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
	_creationClassName = String("UNIX_PeerIDPayloadFilterEntry");
	_isNegated = Boolean(false);
	_matchIdentityType = Uint16(0);
	_matchIdentityValue = String ("");
	
	return false;
}

Boolean UNIX_PeerIDPayloadFilterEntry::finalize()
{
	return false;
}

Boolean UNIX_PeerIDPayloadFilterEntry::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PeerIDPayloadFilterEntry::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PeerIDPayloadFilterEntry::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PeerIDPayloadFilterEntry::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PeerIDPayloadFilterEntry::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PeerIDPayloadFilterEntry::validateInstance()
{
	return true;
}

