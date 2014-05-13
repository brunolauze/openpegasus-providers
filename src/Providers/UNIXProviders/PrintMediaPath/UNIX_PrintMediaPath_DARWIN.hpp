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


UNIX_PrintMediaPath::UNIX_PrintMediaPath(void)
{
}

UNIX_PrintMediaPath::~UNIX_PrintMediaPath(void)
{
}

Boolean UNIX_PrintMediaPath::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintMediaPath::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintMediaPath::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintMediaPath::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintMediaPath::getCaption() const
{
	return _caption;
}

void UNIX_PrintMediaPath::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintMediaPath::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintMediaPath::getDescription() const
{
	return _description;
}

void UNIX_PrintMediaPath::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintMediaPath::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintMediaPath::getElementName() const
{
	return _elementName;
}

void UNIX_PrintMediaPath::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintMediaPath::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintMediaPath::getGeneration() const
{
	return _generation;
}

void UNIX_PrintMediaPath::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintMediaPath::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintMediaPath::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintMediaPath::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintMediaPath::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintMediaPath::getName() const
{
	return _name;
}

void UNIX_PrintMediaPath::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintMediaPath::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintMediaPath::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintMediaPath::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintMediaPath::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintMediaPath::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintMediaPath::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintMediaPath::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintMediaPath::getStatus() const
{
	return _status;
}

void UNIX_PrintMediaPath::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintMediaPath::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintMediaPath::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintMediaPath::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintMediaPath::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintMediaPath::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintMediaPath::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintMediaPath::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintMediaPath::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintMediaPath::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintMediaPath::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintMediaPath::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintMediaPath::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintMediaPath::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintMediaPath::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintMediaPath::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintMediaPath::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintMediaPath::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintMediaPath::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintMediaPath::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Boolean UNIX_PrintMediaPath::getIsDefault() const
{
	return _isDefault;
}

void UNIX_PrintMediaPath::setIsDefault(Boolean &value)
{
	_isDefault = value;
}

Boolean UNIX_PrintMediaPath::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintMediaPath::getLocalizedDescription() const
{
	return _localizedDescription;
}

void UNIX_PrintMediaPath::setLocalizedDescription(String &value)
{
	_localizedDescription = value;
}

Boolean UNIX_PrintMediaPath::getType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE, getType());
	return true;
}

Uint32 UNIX_PrintMediaPath::getType() const
{
	return _type;
}

void UNIX_PrintMediaPath::setType(Uint32 &value)
{
	_type = value;
}

Boolean UNIX_PrintMediaPath::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PrintMediaPath::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_PrintMediaPath::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_PrintMediaPath::getMaxSpeedUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED_UNIT, getMaxSpeedUnit());
	return true;
}

Uint32 UNIX_PrintMediaPath::getMaxSpeedUnit() const
{
	return _maxSpeedUnit;
}

void UNIX_PrintMediaPath::setMaxSpeedUnit(Uint32 &value)
{
	_maxSpeedUnit = value;
}

Boolean UNIX_PrintMediaPath::getMaxSpeedBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED_BASIS, getMaxSpeedBasis());
	return true;
}

Uint16 UNIX_PrintMediaPath::getMaxSpeedBasis() const
{
	return _maxSpeedBasis;
}

void UNIX_PrintMediaPath::setMaxSpeedBasis(Uint16 &value)
{
	_maxSpeedBasis = value;
}

Boolean UNIX_PrintMediaPath::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint32 UNIX_PrintMediaPath::getMaxSpeed() const
{
	return _maxSpeed;
}

void UNIX_PrintMediaPath::setMaxSpeed(Uint32 &value)
{
	_maxSpeed = value;
}

Boolean UNIX_PrintMediaPath::getMaxMediaSizeNameBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE_NAME_BASIS, getMaxMediaSizeNameBasis());
	return true;
}

Uint16 UNIX_PrintMediaPath::getMaxMediaSizeNameBasis() const
{
	return _maxMediaSizeNameBasis;
}

void UNIX_PrintMediaPath::setMaxMediaSizeNameBasis(Uint16 &value)
{
	_maxMediaSizeNameBasis = value;
}

Boolean UNIX_PrintMediaPath::getMaxMediaSizeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE_NAME, getMaxMediaSizeName());
	return true;
}

String UNIX_PrintMediaPath::getMaxMediaSizeName() const
{
	return _maxMediaSizeName;
}

void UNIX_PrintMediaPath::setMaxMediaSizeName(String &value)
{
	_maxMediaSizeName = value;
}

Boolean UNIX_PrintMediaPath::getMinMediaSizeNameBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_MEDIA_SIZE_NAME_BASIS, getMinMediaSizeNameBasis());
	return true;
}

Uint16 UNIX_PrintMediaPath::getMinMediaSizeNameBasis() const
{
	return _minMediaSizeNameBasis;
}

void UNIX_PrintMediaPath::setMinMediaSizeNameBasis(Uint16 &value)
{
	_minMediaSizeNameBasis = value;
}

Boolean UNIX_PrintMediaPath::getMinMediaSizeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_MEDIA_SIZE_NAME, getMinMediaSizeName());
	return true;
}

String UNIX_PrintMediaPath::getMinMediaSizeName() const
{
	return _minMediaSizeName;
}

void UNIX_PrintMediaPath::setMinMediaSizeName(String &value)
{
	_minMediaSizeName = value;
}

Boolean UNIX_PrintMediaPath::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintMediaPath::getAvailabilityStatus() const
{
	return _availabilityStatus;
}

void UNIX_PrintMediaPath::setAvailabilityStatus(Uint32 &value)
{
	_availabilityStatus = value;
}

Boolean UNIX_PrintMediaPath::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintMediaPath::getOtherAvailabilityStatus() const
{
	return _otherAvailabilityStatus;
}

void UNIX_PrintMediaPath::setOtherAvailabilityStatus(String &value)
{
	_otherAvailabilityStatus = value;
}

Boolean UNIX_PrintMediaPath::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintMediaPath::getNonCriticalAlertsPresent() const
{
	return _nonCriticalAlertsPresent;
}

void UNIX_PrintMediaPath::setNonCriticalAlertsPresent(Boolean &value)
{
	_nonCriticalAlertsPresent = value;
}

Boolean UNIX_PrintMediaPath::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintMediaPath::getCriticalAlertsPresent() const
{
	return _criticalAlertsPresent;
}

void UNIX_PrintMediaPath::setCriticalAlertsPresent(Boolean &value)
{
	_criticalAlertsPresent = value;
}


void UNIX_PrintMediaPath::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintMediaPath");
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
	_maxSpeedUnit = Uint32(0);
	_maxSpeedBasis = Uint16(0);
	_maxSpeed = Uint32(0);
	_maxMediaSizeNameBasis = Uint16(0);
	_maxMediaSizeName = String ("");
	_minMediaSizeNameBasis = Uint16(0);
	_minMediaSizeName = String ("");
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);

}

Boolean UNIX_PrintMediaPath::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxSpeedUnit"))
			{
				Uint32 maxSpeedUnitValue;
				property.getValue().get(maxSpeedUnitValue);
				setMaxSpeedUnit(maxSpeedUnitValue);
			}
			else if (String::equal(property.getName().getString(), "MaxSpeedBasis"))
			{
				Uint16 maxSpeedBasisValue;
				property.getValue().get(maxSpeedBasisValue);
				setMaxSpeedBasis(maxSpeedBasisValue);
			}
			else if (String::equal(property.getName().getString(), "MaxSpeed"))
			{
				Uint32 maxSpeedValue;
				property.getValue().get(maxSpeedValue);
				setMaxSpeed(maxSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxMediaSizeNameBasis"))
			{
				Uint16 maxMediaSizeNameBasisValue;
				property.getValue().get(maxMediaSizeNameBasisValue);
				setMaxMediaSizeNameBasis(maxMediaSizeNameBasisValue);
			}
			else if (String::equal(property.getName().getString(), "MaxMediaSizeName"))
			{
				String maxMediaSizeNameValue;
				property.getValue().get(maxMediaSizeNameValue);
				setMaxMediaSizeName(maxMediaSizeNameValue);
			}
			else if (String::equal(property.getName().getString(), "MinMediaSizeNameBasis"))
			{
				Uint16 minMediaSizeNameBasisValue;
				property.getValue().get(minMediaSizeNameBasisValue);
				setMinMediaSizeNameBasis(minMediaSizeNameBasisValue);
			}
			else if (String::equal(property.getName().getString(), "MinMediaSizeName"))
			{
				String minMediaSizeNameValue;
				property.getValue().get(minMediaSizeNameValue);
				setMinMediaSizeName(minMediaSizeNameValue);
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


Boolean UNIX_PrintMediaPath::initialize()
{
	return false;
}

Boolean UNIX_PrintMediaPath::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintMediaPath");
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
	_maxSpeedUnit = Uint32(0);
	_maxSpeedBasis = Uint16(0);
	_maxSpeed = Uint32(0);
	_maxMediaSizeNameBasis = Uint16(0);
	_maxMediaSizeName = String ("");
	_minMediaSizeNameBasis = Uint16(0);
	_minMediaSizeName = String ("");
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	
	return false;
}

Boolean UNIX_PrintMediaPath::finalize()
{
	return false;
}

Boolean UNIX_PrintMediaPath::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintMediaPath::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintMediaPath::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintMediaPath::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintMediaPath::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintMediaPath::validateInstance()
{
	return true;
}

