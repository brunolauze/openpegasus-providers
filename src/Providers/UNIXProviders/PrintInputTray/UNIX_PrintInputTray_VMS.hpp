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


UNIX_PrintInputTray::UNIX_PrintInputTray(void)
{
}

UNIX_PrintInputTray::~UNIX_PrintInputTray(void)
{
}

Boolean UNIX_PrintInputTray::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintInputTray::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintInputTray::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintInputTray::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintInputTray::getCaption() const
{
	return _caption;
}

void UNIX_PrintInputTray::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintInputTray::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintInputTray::getDescription() const
{
	return _description;
}

void UNIX_PrintInputTray::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintInputTray::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintInputTray::getElementName() const
{
	return _elementName;
}

void UNIX_PrintInputTray::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintInputTray::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintInputTray::getGeneration() const
{
	return _generation;
}

void UNIX_PrintInputTray::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintInputTray::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintInputTray::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintInputTray::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintInputTray::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintInputTray::getName() const
{
	return _name;
}

void UNIX_PrintInputTray::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintInputTray::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintInputTray::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintInputTray::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintInputTray::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintInputTray::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintInputTray::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintInputTray::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintInputTray::getStatus() const
{
	return _status;
}

void UNIX_PrintInputTray::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintInputTray::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintInputTray::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintInputTray::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintInputTray::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintInputTray::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintInputTray::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintInputTray::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintInputTray::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintInputTray::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintInputTray::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintInputTray::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintInputTray::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintInputTray::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintInputTray::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintInputTray::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintInputTray::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintInputTray::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintInputTray::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintInputTray::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Boolean UNIX_PrintInputTray::getIsDefault() const
{
	return _isDefault;
}

void UNIX_PrintInputTray::setIsDefault(Boolean &value)
{
	_isDefault = value;
}

Boolean UNIX_PrintInputTray::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintInputTray::getLocalizedDescription() const
{
	return _localizedDescription;
}

void UNIX_PrintInputTray::setLocalizedDescription(String &value)
{
	_localizedDescription = value;
}

Boolean UNIX_PrintInputTray::getType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE, getType());
	return true;
}

Uint32 UNIX_PrintInputTray::getType() const
{
	return _type;
}

void UNIX_PrintInputTray::setType(Uint32 &value)
{
	_type = value;
}

Boolean UNIX_PrintInputTray::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PrintInputTray::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_PrintInputTray::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_PrintInputTray::getCapacityUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY_UNIT, getCapacityUnit());
	return true;
}

Uint32 UNIX_PrintInputTray::getCapacityUnit() const
{
	return _capacityUnit;
}

void UNIX_PrintInputTray::setCapacityUnit(Uint32 &value)
{
	_capacityUnit = value;
}

Boolean UNIX_PrintInputTray::getOtherCapacityUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CAPACITY_UNIT, getOtherCapacityUnit());
	return true;
}

String UNIX_PrintInputTray::getOtherCapacityUnit() const
{
	return _otherCapacityUnit;
}

void UNIX_PrintInputTray::setOtherCapacityUnit(String &value)
{
	_otherCapacityUnit = value;
}

Boolean UNIX_PrintInputTray::getMaxCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY_BASIS, getMaxCapacityBasis());
	return true;
}

Uint16 UNIX_PrintInputTray::getMaxCapacityBasis() const
{
	return _maxCapacityBasis;
}

void UNIX_PrintInputTray::setMaxCapacityBasis(Uint16 &value)
{
	_maxCapacityBasis = value;
}

Boolean UNIX_PrintInputTray::getMaxCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY, getMaxCapacity());
	return true;
}

Uint32 UNIX_PrintInputTray::getMaxCapacity() const
{
	return _maxCapacity;
}

void UNIX_PrintInputTray::setMaxCapacity(Uint32 &value)
{
	_maxCapacity = value;
}

Boolean UNIX_PrintInputTray::getCurrentLevelBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LEVEL_BASIS, getCurrentLevelBasis());
	return true;
}

Uint16 UNIX_PrintInputTray::getCurrentLevelBasis() const
{
	return _currentLevelBasis;
}

void UNIX_PrintInputTray::setCurrentLevelBasis(Uint16 &value)
{
	_currentLevelBasis = value;
}

Boolean UNIX_PrintInputTray::getCurrentLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LEVEL, getCurrentLevel());
	return true;
}

Uint32 UNIX_PrintInputTray::getCurrentLevel() const
{
	return _currentLevel;
}

void UNIX_PrintInputTray::setCurrentLevel(Uint32 &value)
{
	_currentLevel = value;
}

Boolean UNIX_PrintInputTray::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintInputTray::getAvailabilityStatus() const
{
	return _availabilityStatus;
}

void UNIX_PrintInputTray::setAvailabilityStatus(Uint32 &value)
{
	_availabilityStatus = value;
}

Boolean UNIX_PrintInputTray::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintInputTray::getOtherAvailabilityStatus() const
{
	return _otherAvailabilityStatus;
}

void UNIX_PrintInputTray::setOtherAvailabilityStatus(String &value)
{
	_otherAvailabilityStatus = value;
}

Boolean UNIX_PrintInputTray::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintInputTray::getNonCriticalAlertsPresent() const
{
	return _nonCriticalAlertsPresent;
}

void UNIX_PrintInputTray::setNonCriticalAlertsPresent(Boolean &value)
{
	_nonCriticalAlertsPresent = value;
}

Boolean UNIX_PrintInputTray::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintInputTray::getCriticalAlertsPresent() const
{
	return _criticalAlertsPresent;
}

void UNIX_PrintInputTray::setCriticalAlertsPresent(Boolean &value)
{
	_criticalAlertsPresent = value;
}

Boolean UNIX_PrintInputTray::getMediaSizeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZE_NAME, getMediaSizeName());
	return true;
}

String UNIX_PrintInputTray::getMediaSizeName() const
{
	return _mediaSizeName;
}

void UNIX_PrintInputTray::setMediaSizeName(String &value)
{
	_mediaSizeName = value;
}

Boolean UNIX_PrintInputTray::getMediaName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_NAME, getMediaName());
	return true;
}

String UNIX_PrintInputTray::getMediaName() const
{
	return _mediaName;
}

void UNIX_PrintInputTray::setMediaName(String &value)
{
	_mediaName = value;
}

Boolean UNIX_PrintInputTray::getMediaWeightBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_WEIGHT_BASIS, getMediaWeightBasis());
	return true;
}

Uint16 UNIX_PrintInputTray::getMediaWeightBasis() const
{
	return _mediaWeightBasis;
}

void UNIX_PrintInputTray::setMediaWeightBasis(Uint16 &value)
{
	_mediaWeightBasis = value;
}

Boolean UNIX_PrintInputTray::getMediaWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_WEIGHT, getMediaWeight());
	return true;
}

Uint32 UNIX_PrintInputTray::getMediaWeight() const
{
	return _mediaWeight;
}

void UNIX_PrintInputTray::setMediaWeight(Uint32 &value)
{
	_mediaWeight = value;
}

Boolean UNIX_PrintInputTray::getMediaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPE, getMediaType());
	return true;
}

String UNIX_PrintInputTray::getMediaType() const
{
	return _mediaType;
}

void UNIX_PrintInputTray::setMediaType(String &value)
{
	_mediaType = value;
}

Boolean UNIX_PrintInputTray::getMediaColor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_COLOR, getMediaColor());
	return true;
}

String UNIX_PrintInputTray::getMediaColor() const
{
	return _mediaColor;
}

void UNIX_PrintInputTray::setMediaColor(String &value)
{
	_mediaColor = value;
}


void UNIX_PrintInputTray::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintInputTray");
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
	_isDefault = Boolean(false);
	_localizedDescription = String ("");
	_type = Uint32(0);
	_otherTypeDescription = String ("");
	_capacityUnit = Uint32(0);
	_otherCapacityUnit = String ("");
	_maxCapacityBasis = Uint16(0);
	_maxCapacity = Uint32(0);
	_currentLevelBasis = Uint16(0);
	_currentLevel = Uint32(0);
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	_mediaSizeName = String ("");
	_mediaName = String ("");
	_mediaWeightBasis = Uint16(0);
	_mediaWeight = Uint32(0);
	_mediaType = String ("");
	_mediaColor = String ("");

}

Boolean UNIX_PrintInputTray::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsDefault"))
			{
				Boolean isDefaultValue;
				property.getValue().get(isDefaultValue);
				setIsDefault(isDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "LocalizedDescription"))
			{
				String localizedDescriptionValue;
				property.getValue().get(localizedDescriptionValue);
				setLocalizedDescription(localizedDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "Type"))
			{
				Uint32 typeValue;
				property.getValue().get(typeValue);
				setType(typeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CapacityUnit"))
			{
				Uint32 capacityUnitValue;
				property.getValue().get(capacityUnitValue);
				setCapacityUnit(capacityUnitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCapacityUnit"))
			{
				String otherCapacityUnitValue;
				property.getValue().get(otherCapacityUnitValue);
				setOtherCapacityUnit(otherCapacityUnitValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCapacityBasis"))
			{
				Uint16 maxCapacityBasisValue;
				property.getValue().get(maxCapacityBasisValue);
				setMaxCapacityBasis(maxCapacityBasisValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCapacity"))
			{
				Uint32 maxCapacityValue;
				property.getValue().get(maxCapacityValue);
				setMaxCapacity(maxCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentLevelBasis"))
			{
				Uint16 currentLevelBasisValue;
				property.getValue().get(currentLevelBasisValue);
				setCurrentLevelBasis(currentLevelBasisValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentLevel"))
			{
				Uint32 currentLevelValue;
				property.getValue().get(currentLevelValue);
				setCurrentLevel(currentLevelValue);
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
			else if (String::equal(property.getName().getString(), "MediaSizeName"))
			{
				String mediaSizeNameValue;
				property.getValue().get(mediaSizeNameValue);
				setMediaSizeName(mediaSizeNameValue);
			}
			else if (String::equal(property.getName().getString(), "MediaName"))
			{
				String mediaNameValue;
				property.getValue().get(mediaNameValue);
				setMediaName(mediaNameValue);
			}
			else if (String::equal(property.getName().getString(), "MediaWeightBasis"))
			{
				Uint16 mediaWeightBasisValue;
				property.getValue().get(mediaWeightBasisValue);
				setMediaWeightBasis(mediaWeightBasisValue);
			}
			else if (String::equal(property.getName().getString(), "MediaWeight"))
			{
				Uint32 mediaWeightValue;
				property.getValue().get(mediaWeightValue);
				setMediaWeight(mediaWeightValue);
			}
			else if (String::equal(property.getName().getString(), "MediaType"))
			{
				String mediaTypeValue;
				property.getValue().get(mediaTypeValue);
				setMediaType(mediaTypeValue);
			}
			else if (String::equal(property.getName().getString(), "MediaColor"))
			{
				String mediaColorValue;
				property.getValue().get(mediaColorValue);
				setMediaColor(mediaColorValue);
			}
	}
	return true;
}


Boolean UNIX_PrintInputTray::initialize()
{
	return false;
}

Boolean UNIX_PrintInputTray::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintInputTray");
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
	_isDefault = Boolean(false);
	_localizedDescription = String ("");
	_type = Uint32(0);
	_otherTypeDescription = String ("");
	_capacityUnit = Uint32(0);
	_otherCapacityUnit = String ("");
	_maxCapacityBasis = Uint16(0);
	_maxCapacity = Uint32(0);
	_currentLevelBasis = Uint16(0);
	_currentLevel = Uint32(0);
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	_mediaSizeName = String ("");
	_mediaName = String ("");
	_mediaWeightBasis = Uint16(0);
	_mediaWeight = Uint32(0);
	_mediaType = String ("");
	_mediaColor = String ("");
	
	return false;
}

Boolean UNIX_PrintInputTray::finalize()
{
	return false;
}

Boolean UNIX_PrintInputTray::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintInputTray::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintInputTray::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInputTray::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInputTray::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInputTray::validateInstance()
{
	return true;
}

