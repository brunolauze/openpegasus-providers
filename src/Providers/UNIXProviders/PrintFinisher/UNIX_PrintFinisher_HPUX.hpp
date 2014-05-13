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


UNIX_PrintFinisher::UNIX_PrintFinisher(void)
{
}

UNIX_PrintFinisher::~UNIX_PrintFinisher(void)
{
}

Boolean UNIX_PrintFinisher::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintFinisher::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintFinisher::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintFinisher::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintFinisher::getCaption() const
{
	return _caption;
}

void UNIX_PrintFinisher::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintFinisher::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintFinisher::getDescription() const
{
	return _description;
}

void UNIX_PrintFinisher::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintFinisher::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintFinisher::getElementName() const
{
	return _elementName;
}

void UNIX_PrintFinisher::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintFinisher::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintFinisher::getGeneration() const
{
	return _generation;
}

void UNIX_PrintFinisher::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintFinisher::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintFinisher::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintFinisher::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintFinisher::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintFinisher::getName() const
{
	return _name;
}

void UNIX_PrintFinisher::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintFinisher::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintFinisher::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintFinisher::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintFinisher::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintFinisher::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintFinisher::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintFinisher::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintFinisher::getStatus() const
{
	return _status;
}

void UNIX_PrintFinisher::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintFinisher::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintFinisher::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintFinisher::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintFinisher::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintFinisher::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintFinisher::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintFinisher::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintFinisher::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintFinisher::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintFinisher::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintFinisher::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintFinisher::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintFinisher::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintFinisher::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintFinisher::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintFinisher::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintFinisher::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintFinisher::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintFinisher::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintFinisher::getLocalizedDescription() const
{
	return _localizedDescription;
}

void UNIX_PrintFinisher::setLocalizedDescription(String &value)
{
	_localizedDescription = value;
}

Boolean UNIX_PrintFinisher::getType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE, getType());
	return true;
}

Uint32 UNIX_PrintFinisher::getType() const
{
	return _type;
}

void UNIX_PrintFinisher::setType(Uint32 &value)
{
	_type = value;
}

Boolean UNIX_PrintFinisher::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PrintFinisher::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_PrintFinisher::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_PrintFinisher::getPresentOnOff(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRESENT_ON_OFF, getPresentOnOff());
	return true;
}

Uint32 UNIX_PrintFinisher::getPresentOnOff() const
{
	return _presentOnOff;
}

void UNIX_PrintFinisher::setPresentOnOff(Uint32 &value)
{
	_presentOnOff = value;
}

Boolean UNIX_PrintFinisher::getCapacityUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY_UNIT, getCapacityUnit());
	return true;
}

Uint32 UNIX_PrintFinisher::getCapacityUnit() const
{
	return _capacityUnit;
}

void UNIX_PrintFinisher::setCapacityUnit(Uint32 &value)
{
	_capacityUnit = value;
}

Boolean UNIX_PrintFinisher::getOtherCapacityUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CAPACITY_UNIT, getOtherCapacityUnit());
	return true;
}

String UNIX_PrintFinisher::getOtherCapacityUnit() const
{
	return _otherCapacityUnit;
}

void UNIX_PrintFinisher::setOtherCapacityUnit(String &value)
{
	_otherCapacityUnit = value;
}

Boolean UNIX_PrintFinisher::getMaxCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY_BASIS, getMaxCapacityBasis());
	return true;
}

Uint16 UNIX_PrintFinisher::getMaxCapacityBasis() const
{
	return _maxCapacityBasis;
}

void UNIX_PrintFinisher::setMaxCapacityBasis(Uint16 &value)
{
	_maxCapacityBasis = value;
}

Boolean UNIX_PrintFinisher::getMaxCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY, getMaxCapacity());
	return true;
}

Uint32 UNIX_PrintFinisher::getMaxCapacity() const
{
	return _maxCapacity;
}

void UNIX_PrintFinisher::setMaxCapacity(Uint32 &value)
{
	_maxCapacity = value;
}

Boolean UNIX_PrintFinisher::getCurrentCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CAPACITY_BASIS, getCurrentCapacityBasis());
	return true;
}

Uint16 UNIX_PrintFinisher::getCurrentCapacityBasis() const
{
	return _currentCapacityBasis;
}

void UNIX_PrintFinisher::setCurrentCapacityBasis(Uint16 &value)
{
	_currentCapacityBasis = value;
}

Boolean UNIX_PrintFinisher::getCurrentCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CAPACITY, getCurrentCapacity());
	return true;
}

Uint32 UNIX_PrintFinisher::getCurrentCapacity() const
{
	return _currentCapacity;
}

void UNIX_PrintFinisher::setCurrentCapacity(Uint32 &value)
{
	_currentCapacity = value;
}

Boolean UNIX_PrintFinisher::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintFinisher::getAvailabilityStatus() const
{
	return _availabilityStatus;
}

void UNIX_PrintFinisher::setAvailabilityStatus(Uint32 &value)
{
	_availabilityStatus = value;
}

Boolean UNIX_PrintFinisher::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintFinisher::getOtherAvailabilityStatus() const
{
	return _otherAvailabilityStatus;
}

void UNIX_PrintFinisher::setOtherAvailabilityStatus(String &value)
{
	_otherAvailabilityStatus = value;
}

Boolean UNIX_PrintFinisher::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintFinisher::getNonCriticalAlertsPresent() const
{
	return _nonCriticalAlertsPresent;
}

void UNIX_PrintFinisher::setNonCriticalAlertsPresent(Boolean &value)
{
	_nonCriticalAlertsPresent = value;
}

Boolean UNIX_PrintFinisher::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintFinisher::getCriticalAlertsPresent() const
{
	return _criticalAlertsPresent;
}

void UNIX_PrintFinisher::setCriticalAlertsPresent(Boolean &value)
{
	_criticalAlertsPresent = value;
}


void UNIX_PrintFinisher::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintFinisher");
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
	_type = Uint32(0);
	_otherTypeDescription = String ("");
	_presentOnOff = Uint32(0);
	_capacityUnit = Uint32(0);
	_otherCapacityUnit = String ("");
	_maxCapacityBasis = Uint16(0);
	_maxCapacity = Uint32(0);
	_currentCapacityBasis = Uint16(0);
	_currentCapacity = Uint32(0);
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);

}

Boolean UNIX_PrintFinisher::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PresentOnOff"))
			{
				Uint32 presentOnOffValue;
				property.getValue().get(presentOnOffValue);
				setPresentOnOff(presentOnOffValue);
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
			else if (String::equal(property.getName().getString(), "CurrentCapacityBasis"))
			{
				Uint16 currentCapacityBasisValue;
				property.getValue().get(currentCapacityBasisValue);
				setCurrentCapacityBasis(currentCapacityBasisValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentCapacity"))
			{
				Uint32 currentCapacityValue;
				property.getValue().get(currentCapacityValue);
				setCurrentCapacity(currentCapacityValue);
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


Boolean UNIX_PrintFinisher::initialize()
{
	return false;
}

Boolean UNIX_PrintFinisher::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintFinisher");
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
	_type = Uint32(0);
	_otherTypeDescription = String ("");
	_presentOnOff = Uint32(0);
	_capacityUnit = Uint32(0);
	_otherCapacityUnit = String ("");
	_maxCapacityBasis = Uint16(0);
	_maxCapacity = Uint32(0);
	_currentCapacityBasis = Uint16(0);
	_currentCapacity = Uint32(0);
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	
	return false;
}

Boolean UNIX_PrintFinisher::finalize()
{
	return false;
}

Boolean UNIX_PrintFinisher::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintFinisher::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintFinisher::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintFinisher::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintFinisher::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintFinisher::validateInstance()
{
	return true;
}

