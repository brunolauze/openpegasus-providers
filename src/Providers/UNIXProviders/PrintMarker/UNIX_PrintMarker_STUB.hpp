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


UNIX_PrintMarker::UNIX_PrintMarker(void)
{
}

UNIX_PrintMarker::~UNIX_PrintMarker(void)
{
}

Boolean UNIX_PrintMarker::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintMarker::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintMarker::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintMarker::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintMarker::getCaption() const
{
	return _caption;
}

void UNIX_PrintMarker::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintMarker::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintMarker::getDescription() const
{
	return _description;
}

void UNIX_PrintMarker::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintMarker::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintMarker::getElementName() const
{
	return _elementName;
}

void UNIX_PrintMarker::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintMarker::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintMarker::getGeneration() const
{
	return _generation;
}

void UNIX_PrintMarker::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintMarker::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintMarker::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintMarker::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintMarker::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintMarker::getName() const
{
	return _name;
}

void UNIX_PrintMarker::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintMarker::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintMarker::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintMarker::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintMarker::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintMarker::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintMarker::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintMarker::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintMarker::getStatus() const
{
	return _status;
}

void UNIX_PrintMarker::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintMarker::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintMarker::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintMarker::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintMarker::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintMarker::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintMarker::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintMarker::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintMarker::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintMarker::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintMarker::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintMarker::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintMarker::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintMarker::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintMarker::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintMarker::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintMarker::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintMarker::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintMarker::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintMarker::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Boolean UNIX_PrintMarker::getIsDefault() const
{
	return _isDefault;
}

void UNIX_PrintMarker::setIsDefault(Boolean &value)
{
	_isDefault = value;
}

Boolean UNIX_PrintMarker::getMarkTech(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MARK_TECH, getMarkTech());
	return true;
}

Uint32 UNIX_PrintMarker::getMarkTech() const
{
	return _markTech;
}

void UNIX_PrintMarker::setMarkTech(Uint32 &value)
{
	_markTech = value;
}

Boolean UNIX_PrintMarker::getOtherMarkTechDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MARK_TECH_DESCRIPTION, getOtherMarkTechDescription());
	return true;
}

String UNIX_PrintMarker::getOtherMarkTechDescription() const
{
	return _otherMarkTechDescription;
}

void UNIX_PrintMarker::setOtherMarkTechDescription(String &value)
{
	_otherMarkTechDescription = value;
}

Boolean UNIX_PrintMarker::getCounterUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTER_UNIT, getCounterUnit());
	return true;
}

Uint32 UNIX_PrintMarker::getCounterUnit() const
{
	return _counterUnit;
}

void UNIX_PrintMarker::setCounterUnit(Uint32 &value)
{
	_counterUnit = value;
}

Boolean UNIX_PrintMarker::getOtherCounterUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COUNTER_UNIT, getOtherCounterUnit());
	return true;
}

String UNIX_PrintMarker::getOtherCounterUnit() const
{
	return _otherCounterUnit;
}

void UNIX_PrintMarker::setOtherCounterUnit(String &value)
{
	_otherCounterUnit = value;
}

Boolean UNIX_PrintMarker::getLifeCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIFE_COUNT, getLifeCount());
	return true;
}

Uint32 UNIX_PrintMarker::getLifeCount() const
{
	return _lifeCount;
}

void UNIX_PrintMarker::setLifeCount(Uint32 &value)
{
	_lifeCount = value;
}

Boolean UNIX_PrintMarker::getPowerOnCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_COUNT, getPowerOnCount());
	return true;
}

Uint32 UNIX_PrintMarker::getPowerOnCount() const
{
	return _powerOnCount;
}

void UNIX_PrintMarker::setPowerOnCount(Uint32 &value)
{
	_powerOnCount = value;
}

Boolean UNIX_PrintMarker::getProcessColorants(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_COLORANTS, getProcessColorants());
	return true;
}

Uint32 UNIX_PrintMarker::getProcessColorants() const
{
	return _processColorants;
}

void UNIX_PrintMarker::setProcessColorants(Uint32 &value)
{
	_processColorants = value;
}

Boolean UNIX_PrintMarker::getSpotColorants(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPOT_COLORANTS, getSpotColorants());
	return true;
}

Uint32 UNIX_PrintMarker::getSpotColorants() const
{
	return _spotColorants;
}

void UNIX_PrintMarker::setSpotColorants(Uint32 &value)
{
	_spotColorants = value;
}

Boolean UNIX_PrintMarker::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintMarker::getAvailabilityStatus() const
{
	return _availabilityStatus;
}

void UNIX_PrintMarker::setAvailabilityStatus(Uint32 &value)
{
	_availabilityStatus = value;
}

Boolean UNIX_PrintMarker::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintMarker::getOtherAvailabilityStatus() const
{
	return _otherAvailabilityStatus;
}

void UNIX_PrintMarker::setOtherAvailabilityStatus(String &value)
{
	_otherAvailabilityStatus = value;
}

Boolean UNIX_PrintMarker::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintMarker::getNonCriticalAlertsPresent() const
{
	return _nonCriticalAlertsPresent;
}

void UNIX_PrintMarker::setNonCriticalAlertsPresent(Boolean &value)
{
	_nonCriticalAlertsPresent = value;
}

Boolean UNIX_PrintMarker::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintMarker::getCriticalAlertsPresent() const
{
	return _criticalAlertsPresent;
}

void UNIX_PrintMarker::setCriticalAlertsPresent(Boolean &value)
{
	_criticalAlertsPresent = value;
}

Boolean UNIX_PrintMarker::getAddressabilityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESSABILITY_BASIS, getAddressabilityBasis());
	return true;
}

Uint16 UNIX_PrintMarker::getAddressabilityBasis() const
{
	return _addressabilityBasis;
}

void UNIX_PrintMarker::setAddressabilityBasis(Uint16 &value)
{
	_addressabilityBasis = value;
}

Boolean UNIX_PrintMarker::getFeedAddressability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FEED_ADDRESSABILITY, getFeedAddressability());
	return true;
}

Uint32 UNIX_PrintMarker::getFeedAddressability() const
{
	return _feedAddressability;
}

void UNIX_PrintMarker::setFeedAddressability(Uint32 &value)
{
	_feedAddressability = value;
}

Boolean UNIX_PrintMarker::getXFeedAddressability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_FEED_ADDRESSABILITY, getXFeedAddressability());
	return true;
}

Uint32 UNIX_PrintMarker::getXFeedAddressability() const
{
	return _xFeedAddressability;
}

void UNIX_PrintMarker::setXFeedAddressability(Uint32 &value)
{
	_xFeedAddressability = value;
}


void UNIX_PrintMarker::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintMarker");
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
	_markTech = Uint32(0);
	_otherMarkTechDescription = String ("");
	_counterUnit = Uint32(0);
	_otherCounterUnit = String ("");
	_lifeCount = Uint32(0);
	_powerOnCount = Uint32(0);
	_processColorants = Uint32(0);
	_spotColorants = Uint32(0);
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	_addressabilityBasis = Uint16(0);
	_feedAddressability = Uint32(0);
	_xFeedAddressability = Uint32(0);

}

Boolean UNIX_PrintMarker::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MarkTech"))
			{
				Uint32 markTechValue;
				property.getValue().get(markTechValue);
				setMarkTech(markTechValue);
			}
			else if (String::equal(property.getName().getString(), "OtherMarkTechDescription"))
			{
				String otherMarkTechDescriptionValue;
				property.getValue().get(otherMarkTechDescriptionValue);
				setOtherMarkTechDescription(otherMarkTechDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CounterUnit"))
			{
				Uint32 counterUnitValue;
				property.getValue().get(counterUnitValue);
				setCounterUnit(counterUnitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCounterUnit"))
			{
				String otherCounterUnitValue;
				property.getValue().get(otherCounterUnitValue);
				setOtherCounterUnit(otherCounterUnitValue);
			}
			else if (String::equal(property.getName().getString(), "LifeCount"))
			{
				Uint32 lifeCountValue;
				property.getValue().get(lifeCountValue);
				setLifeCount(lifeCountValue);
			}
			else if (String::equal(property.getName().getString(), "PowerOnCount"))
			{
				Uint32 powerOnCountValue;
				property.getValue().get(powerOnCountValue);
				setPowerOnCount(powerOnCountValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessColorants"))
			{
				Uint32 processColorantsValue;
				property.getValue().get(processColorantsValue);
				setProcessColorants(processColorantsValue);
			}
			else if (String::equal(property.getName().getString(), "SpotColorants"))
			{
				Uint32 spotColorantsValue;
				property.getValue().get(spotColorantsValue);
				setSpotColorants(spotColorantsValue);
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
	}
	return true;
}


Boolean UNIX_PrintMarker::initialize()
{
	return false;
}

Boolean UNIX_PrintMarker::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintMarker");
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
	_markTech = Uint32(0);
	_otherMarkTechDescription = String ("");
	_counterUnit = Uint32(0);
	_otherCounterUnit = String ("");
	_lifeCount = Uint32(0);
	_powerOnCount = Uint32(0);
	_processColorants = Uint32(0);
	_spotColorants = Uint32(0);
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	_addressabilityBasis = Uint16(0);
	_feedAddressability = Uint32(0);
	_xFeedAddressability = Uint32(0);
	
	return false;
}

Boolean UNIX_PrintMarker::finalize()
{
	return false;
}

Boolean UNIX_PrintMarker::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintMarker::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintMarker::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintMarker::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintMarker::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintMarker::validateInstance()
{
	return true;
}

