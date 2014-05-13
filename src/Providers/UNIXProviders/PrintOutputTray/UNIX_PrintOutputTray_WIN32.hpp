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


UNIX_PrintOutputTray::UNIX_PrintOutputTray(void)
{
}

UNIX_PrintOutputTray::~UNIX_PrintOutputTray(void)
{
}

Boolean UNIX_PrintOutputTray::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintOutputTray::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintOutputTray::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintOutputTray::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintOutputTray::getCaption() const
{
	return _caption;
}

void UNIX_PrintOutputTray::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintOutputTray::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintOutputTray::getDescription() const
{
	return _description;
}

void UNIX_PrintOutputTray::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintOutputTray::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintOutputTray::getElementName() const
{
	return _elementName;
}

void UNIX_PrintOutputTray::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintOutputTray::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintOutputTray::getGeneration() const
{
	return _generation;
}

void UNIX_PrintOutputTray::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintOutputTray::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintOutputTray::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintOutputTray::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintOutputTray::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintOutputTray::getName() const
{
	return _name;
}

void UNIX_PrintOutputTray::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintOutputTray::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintOutputTray::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintOutputTray::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintOutputTray::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintOutputTray::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintOutputTray::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintOutputTray::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintOutputTray::getStatus() const
{
	return _status;
}

void UNIX_PrintOutputTray::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintOutputTray::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintOutputTray::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintOutputTray::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintOutputTray::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintOutputTray::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintOutputTray::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintOutputTray::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintOutputTray::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintOutputTray::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintOutputTray::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintOutputTray::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintOutputTray::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintOutputTray::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintOutputTray::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintOutputTray::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintOutputTray::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintOutputTray::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintOutputTray::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintOutputTray::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Boolean UNIX_PrintOutputTray::getIsDefault() const
{
	return _isDefault;
}

void UNIX_PrintOutputTray::setIsDefault(Boolean &value)
{
	_isDefault = value;
}

Boolean UNIX_PrintOutputTray::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintOutputTray::getLocalizedDescription() const
{
	return _localizedDescription;
}

void UNIX_PrintOutputTray::setLocalizedDescription(String &value)
{
	_localizedDescription = value;
}

Boolean UNIX_PrintOutputTray::getType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE, getType());
	return true;
}

Uint32 UNIX_PrintOutputTray::getType() const
{
	return _type;
}

void UNIX_PrintOutputTray::setType(Uint32 &value)
{
	_type = value;
}

Boolean UNIX_PrintOutputTray::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PrintOutputTray::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_PrintOutputTray::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_PrintOutputTray::getCapacityUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY_UNIT, getCapacityUnit());
	return true;
}

Uint32 UNIX_PrintOutputTray::getCapacityUnit() const
{
	return _capacityUnit;
}

void UNIX_PrintOutputTray::setCapacityUnit(Uint32 &value)
{
	_capacityUnit = value;
}

Boolean UNIX_PrintOutputTray::getOtherCapacityUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CAPACITY_UNIT, getOtherCapacityUnit());
	return true;
}

String UNIX_PrintOutputTray::getOtherCapacityUnit() const
{
	return _otherCapacityUnit;
}

void UNIX_PrintOutputTray::setOtherCapacityUnit(String &value)
{
	_otherCapacityUnit = value;
}

Boolean UNIX_PrintOutputTray::getMaxCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY_BASIS, getMaxCapacityBasis());
	return true;
}

Uint16 UNIX_PrintOutputTray::getMaxCapacityBasis() const
{
	return _maxCapacityBasis;
}

void UNIX_PrintOutputTray::setMaxCapacityBasis(Uint16 &value)
{
	_maxCapacityBasis = value;
}

Boolean UNIX_PrintOutputTray::getMaxCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY, getMaxCapacity());
	return true;
}

Uint32 UNIX_PrintOutputTray::getMaxCapacity() const
{
	return _maxCapacity;
}

void UNIX_PrintOutputTray::setMaxCapacity(Uint32 &value)
{
	_maxCapacity = value;
}

Boolean UNIX_PrintOutputTray::getRemainingCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY_BASIS, getRemainingCapacityBasis());
	return true;
}

Uint16 UNIX_PrintOutputTray::getRemainingCapacityBasis() const
{
	return _remainingCapacityBasis;
}

void UNIX_PrintOutputTray::setRemainingCapacityBasis(Uint16 &value)
{
	_remainingCapacityBasis = value;
}

Boolean UNIX_PrintOutputTray::getRemainingCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY, getRemainingCapacity());
	return true;
}

Uint32 UNIX_PrintOutputTray::getRemainingCapacity() const
{
	return _remainingCapacity;
}

void UNIX_PrintOutputTray::setRemainingCapacity(Uint32 &value)
{
	_remainingCapacity = value;
}

Boolean UNIX_PrintOutputTray::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintOutputTray::getAvailabilityStatus() const
{
	return _availabilityStatus;
}

void UNIX_PrintOutputTray::setAvailabilityStatus(Uint32 &value)
{
	_availabilityStatus = value;
}

Boolean UNIX_PrintOutputTray::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintOutputTray::getOtherAvailabilityStatus() const
{
	return _otherAvailabilityStatus;
}

void UNIX_PrintOutputTray::setOtherAvailabilityStatus(String &value)
{
	_otherAvailabilityStatus = value;
}

Boolean UNIX_PrintOutputTray::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintOutputTray::getNonCriticalAlertsPresent() const
{
	return _nonCriticalAlertsPresent;
}

void UNIX_PrintOutputTray::setNonCriticalAlertsPresent(Boolean &value)
{
	_nonCriticalAlertsPresent = value;
}

Boolean UNIX_PrintOutputTray::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintOutputTray::getCriticalAlertsPresent() const
{
	return _criticalAlertsPresent;
}

void UNIX_PrintOutputTray::setCriticalAlertsPresent(Boolean &value)
{
	_criticalAlertsPresent = value;
}


void UNIX_PrintOutputTray::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintOutputTray");
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
	_remainingCapacityBasis = Uint16(0);
	_remainingCapacity = Uint32(0);
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);

}

Boolean UNIX_PrintOutputTray::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RemainingCapacityBasis"))
			{
				Uint16 remainingCapacityBasisValue;
				property.getValue().get(remainingCapacityBasisValue);
				setRemainingCapacityBasis(remainingCapacityBasisValue);
			}
			else if (String::equal(property.getName().getString(), "RemainingCapacity"))
			{
				Uint32 remainingCapacityValue;
				property.getValue().get(remainingCapacityValue);
				setRemainingCapacity(remainingCapacityValue);
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


Boolean UNIX_PrintOutputTray::initialize()
{
	return false;
}

Boolean UNIX_PrintOutputTray::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintOutputTray");
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
	_remainingCapacityBasis = Uint16(0);
	_remainingCapacity = Uint32(0);
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	
	return false;
}

Boolean UNIX_PrintOutputTray::finalize()
{
	return false;
}

Boolean UNIX_PrintOutputTray::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintOutputTray::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintOutputTray::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintOutputTray::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintOutputTray::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintOutputTray::validateInstance()
{
	return true;
}

