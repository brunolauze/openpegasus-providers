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


UNIX_PrintInterpreter::UNIX_PrintInterpreter(void)
{
}

UNIX_PrintInterpreter::~UNIX_PrintInterpreter(void)
{
}

Boolean UNIX_PrintInterpreter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintInterpreter::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintInterpreter::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintInterpreter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintInterpreter::getCaption() const
{
	return _caption;
}

void UNIX_PrintInterpreter::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintInterpreter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintInterpreter::getDescription() const
{
	return _description;
}

void UNIX_PrintInterpreter::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintInterpreter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintInterpreter::getElementName() const
{
	return _elementName;
}

void UNIX_PrintInterpreter::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintInterpreter::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintInterpreter::getGeneration() const
{
	return _generation;
}

void UNIX_PrintInterpreter::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintInterpreter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintInterpreter::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintInterpreter::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintInterpreter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintInterpreter::getName() const
{
	return _name;
}

void UNIX_PrintInterpreter::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintInterpreter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintInterpreter::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintInterpreter::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintInterpreter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintInterpreter::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintInterpreter::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintInterpreter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintInterpreter::getStatus() const
{
	return _status;
}

void UNIX_PrintInterpreter::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintInterpreter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintInterpreter::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintInterpreter::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintInterpreter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintInterpreter::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintInterpreter::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintInterpreter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintInterpreter::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintInterpreter::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintInterpreter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintInterpreter::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintInterpreter::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintInterpreter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintInterpreter::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintInterpreter::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintInterpreter::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintInterpreter::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintInterpreter::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintInterpreter::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintInterpreter::getLocalizedDescription() const
{
	return _localizedDescription;
}

void UNIX_PrintInterpreter::setLocalizedDescription(String &value)
{
	_localizedDescription = value;
}

Boolean UNIX_PrintInterpreter::getLangType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANG_TYPE, getLangType());
	return true;
}

Uint32 UNIX_PrintInterpreter::getLangType() const
{
	return _langType;
}

void UNIX_PrintInterpreter::setLangType(Uint32 &value)
{
	_langType = value;
}

Boolean UNIX_PrintInterpreter::getOtherLangTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LANG_TYPE_DESCRIPTION, getOtherLangTypeDescription());
	return true;
}

String UNIX_PrintInterpreter::getOtherLangTypeDescription() const
{
	return _otherLangTypeDescription;
}

void UNIX_PrintInterpreter::setOtherLangTypeDescription(String &value)
{
	_otherLangTypeDescription = value;
}

Boolean UNIX_PrintInterpreter::getLangLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANG_LEVEL, getLangLevel());
	return true;
}

String UNIX_PrintInterpreter::getLangLevel() const
{
	return _langLevel;
}

void UNIX_PrintInterpreter::setLangLevel(String &value)
{
	_langLevel = value;
}

Boolean UNIX_PrintInterpreter::getAddressabilityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESSABILITY_BASIS, getAddressabilityBasis());
	return true;
}

Uint16 UNIX_PrintInterpreter::getAddressabilityBasis() const
{
	return _addressabilityBasis;
}

void UNIX_PrintInterpreter::setAddressabilityBasis(Uint16 &value)
{
	_addressabilityBasis = value;
}

Boolean UNIX_PrintInterpreter::getFeedAddressability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FEED_ADDRESSABILITY, getFeedAddressability());
	return true;
}

Uint32 UNIX_PrintInterpreter::getFeedAddressability() const
{
	return _feedAddressability;
}

void UNIX_PrintInterpreter::setFeedAddressability(Uint32 &value)
{
	_feedAddressability = value;
}

Boolean UNIX_PrintInterpreter::getXFeedAddressability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_FEED_ADDRESSABILITY, getXFeedAddressability());
	return true;
}

Uint32 UNIX_PrintInterpreter::getXFeedAddressability() const
{
	return _xFeedAddressability;
}

void UNIX_PrintInterpreter::setXFeedAddressability(Uint32 &value)
{
	_xFeedAddressability = value;
}

Boolean UNIX_PrintInterpreter::getDefaultCharSetIn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_CHAR_SET_IN, getDefaultCharSetIn());
	return true;
}

String UNIX_PrintInterpreter::getDefaultCharSetIn() const
{
	return _defaultCharSetIn;
}

void UNIX_PrintInterpreter::setDefaultCharSetIn(String &value)
{
	_defaultCharSetIn = value;
}

Boolean UNIX_PrintInterpreter::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintInterpreter::getAvailabilityStatus() const
{
	return _availabilityStatus;
}

void UNIX_PrintInterpreter::setAvailabilityStatus(Uint32 &value)
{
	_availabilityStatus = value;
}

Boolean UNIX_PrintInterpreter::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintInterpreter::getOtherAvailabilityStatus() const
{
	return _otherAvailabilityStatus;
}

void UNIX_PrintInterpreter::setOtherAvailabilityStatus(String &value)
{
	_otherAvailabilityStatus = value;
}

Boolean UNIX_PrintInterpreter::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintInterpreter::getNonCriticalAlertsPresent() const
{
	return _nonCriticalAlertsPresent;
}

void UNIX_PrintInterpreter::setNonCriticalAlertsPresent(Boolean &value)
{
	_nonCriticalAlertsPresent = value;
}

Boolean UNIX_PrintInterpreter::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintInterpreter::getCriticalAlertsPresent() const
{
	return _criticalAlertsPresent;
}

void UNIX_PrintInterpreter::setCriticalAlertsPresent(Boolean &value)
{
	_criticalAlertsPresent = value;
}


void UNIX_PrintInterpreter::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintInterpreter");
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
	_sNMPRowId = Uint32(0);
	_localizedDescription = String ("");
	_langType = Uint32(0);
	_otherLangTypeDescription = String ("");
	_langLevel = String ("");
	_addressabilityBasis = Uint16(0);
	_feedAddressability = Uint32(0);
	_xFeedAddressability = Uint32(0);
	_defaultCharSetIn = String ("");
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);

}

Boolean UNIX_PrintInterpreter::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SNMPRowId"))
			{
				Uint32 sNMPRowIdValue;
				property.getValue().get(sNMPRowIdValue);
				setSNMPRowId(sNMPRowIdValue);
			}
			else if (String::equal(property.getName().getString(), "LocalizedDescription"))
			{
				String localizedDescriptionValue;
				property.getValue().get(localizedDescriptionValue);
				setLocalizedDescription(localizedDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "LangType"))
			{
				Uint32 langTypeValue;
				property.getValue().get(langTypeValue);
				setLangType(langTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLangTypeDescription"))
			{
				String otherLangTypeDescriptionValue;
				property.getValue().get(otherLangTypeDescriptionValue);
				setOtherLangTypeDescription(otherLangTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "LangLevel"))
			{
				String langLevelValue;
				property.getValue().get(langLevelValue);
				setLangLevel(langLevelValue);
			}
			else if (String::equal(property.getName().getString(), "AddressabilityBasis"))
			{
				Uint16 addressabilityBasisValue;
				property.getValue().get(addressabilityBasisValue);
				setAddressabilityBasis(addressabilityBasisValue);
			}
			else if (String::equal(property.getName().getString(), "FeedAddressability"))
			{
				Uint32 feedAddressabilityValue;
				property.getValue().get(feedAddressabilityValue);
				setFeedAddressability(feedAddressabilityValue);
			}
			else if (String::equal(property.getName().getString(), "XFeedAddressability"))
			{
				Uint32 xFeedAddressabilityValue;
				property.getValue().get(xFeedAddressabilityValue);
				setXFeedAddressability(xFeedAddressabilityValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultCharSetIn"))
			{
				String defaultCharSetInValue;
				property.getValue().get(defaultCharSetInValue);
				setDefaultCharSetIn(defaultCharSetInValue);
			}
			else if (String::equal(property.getName().getString(), "AvailabilityStatus"))
			{
				Uint32 availabilityStatusValue;
				property.getValue().get(availabilityStatusValue);
				setAvailabilityStatus(availabilityStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAvailabilityStatus"))
			{
				String otherAvailabilityStatusValue;
				property.getValue().get(otherAvailabilityStatusValue);
				setOtherAvailabilityStatus(otherAvailabilityStatusValue);
			}
			else if (String::equal(property.getName().getString(), "NonCriticalAlertsPresent"))
			{
				Boolean nonCriticalAlertsPresentValue;
				property.getValue().get(nonCriticalAlertsPresentValue);
				setNonCriticalAlertsPresent(nonCriticalAlertsPresentValue);
			}
			else if (String::equal(property.getName().getString(), "CriticalAlertsPresent"))
			{
				Boolean criticalAlertsPresentValue;
				property.getValue().get(criticalAlertsPresentValue);
				setCriticalAlertsPresent(criticalAlertsPresentValue);
			}
	}
	return true;
}


Boolean UNIX_PrintInterpreter::initialize()
{
	return false;
}

Boolean UNIX_PrintInterpreter::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintInterpreter");
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
	_sNMPRowId = Uint32(0);
	_localizedDescription = String ("");
	_langType = Uint32(0);
	_otherLangTypeDescription = String ("");
	_langLevel = String ("");
	_addressabilityBasis = Uint16(0);
	_feedAddressability = Uint32(0);
	_xFeedAddressability = Uint32(0);
	_defaultCharSetIn = String ("");
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	
	return false;
}

Boolean UNIX_PrintInterpreter::finalize()
{
	return false;
}

Boolean UNIX_PrintInterpreter::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintInterpreter::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PrintInterpreter::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInterpreter::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInterpreter::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInterpreter::validateInstance()
{
	return true;
}

