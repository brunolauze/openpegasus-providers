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


UNIX_PrintSupply::UNIX_PrintSupply(void)
{
}

UNIX_PrintSupply::~UNIX_PrintSupply(void)
{
}

Boolean UNIX_PrintSupply::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintSupply::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintSupply::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintSupply::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintSupply::getCaption() const
{
	return _caption;
}

void UNIX_PrintSupply::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintSupply::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintSupply::getDescription() const
{
	return _description;
}

void UNIX_PrintSupply::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintSupply::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintSupply::getElementName() const
{
	return _elementName;
}

void UNIX_PrintSupply::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintSupply::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintSupply::getGeneration() const
{
	return _generation;
}

void UNIX_PrintSupply::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintSupply::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintSupply::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintSupply::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintSupply::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintSupply::getName() const
{
	return _name;
}

void UNIX_PrintSupply::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintSupply::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintSupply::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintSupply::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintSupply::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintSupply::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintSupply::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintSupply::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintSupply::getStatus() const
{
	return _status;
}

void UNIX_PrintSupply::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintSupply::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintSupply::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintSupply::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintSupply::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintSupply::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintSupply::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintSupply::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintSupply::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintSupply::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintSupply::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintSupply::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintSupply::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintSupply::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintSupply::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintSupply::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintSupply::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintSupply::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintSupply::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintSupply::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintSupply::getLocalizedDescription() const
{
	return _localizedDescription;
}

void UNIX_PrintSupply::setLocalizedDescription(String &value)
{
	_localizedDescription = value;
}

Boolean UNIX_PrintSupply::getClassification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSIFICATION, getClassification());
	return true;
}

Uint32 UNIX_PrintSupply::getClassification() const
{
	return _classification;
}

void UNIX_PrintSupply::setClassification(Uint32 &value)
{
	_classification = value;
}

Boolean UNIX_PrintSupply::getOtherClassification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CLASSIFICATION, getOtherClassification());
	return true;
}

String UNIX_PrintSupply::getOtherClassification() const
{
	return _otherClassification;
}

void UNIX_PrintSupply::setOtherClassification(String &value)
{
	_otherClassification = value;
}

Boolean UNIX_PrintSupply::getType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE, getType());
	return true;
}

Uint32 UNIX_PrintSupply::getType() const
{
	return _type;
}

void UNIX_PrintSupply::setType(Uint32 &value)
{
	_type = value;
}

Boolean UNIX_PrintSupply::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PrintSupply::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_PrintSupply::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_PrintSupply::getSupplyUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPLY_UNIT, getSupplyUnit());
	return true;
}

Uint32 UNIX_PrintSupply::getSupplyUnit() const
{
	return _supplyUnit;
}

void UNIX_PrintSupply::setSupplyUnit(Uint32 &value)
{
	_supplyUnit = value;
}

Boolean UNIX_PrintSupply::getOtherSupplyUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPLY_UNIT, getOtherSupplyUnit());
	return true;
}

String UNIX_PrintSupply::getOtherSupplyUnit() const
{
	return _otherSupplyUnit;
}

void UNIX_PrintSupply::setOtherSupplyUnit(String &value)
{
	_otherSupplyUnit = value;
}

Boolean UNIX_PrintSupply::getMaxCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY_BASIS, getMaxCapacityBasis());
	return true;
}

Uint16 UNIX_PrintSupply::getMaxCapacityBasis() const
{
	return _maxCapacityBasis;
}

void UNIX_PrintSupply::setMaxCapacityBasis(Uint16 &value)
{
	_maxCapacityBasis = value;
}

Boolean UNIX_PrintSupply::getMaxCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY, getMaxCapacity());
	return true;
}

Uint32 UNIX_PrintSupply::getMaxCapacity() const
{
	return _maxCapacity;
}

void UNIX_PrintSupply::setMaxCapacity(Uint32 &value)
{
	_maxCapacity = value;
}

Boolean UNIX_PrintSupply::getRemainingCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY_BASIS, getRemainingCapacityBasis());
	return true;
}

Uint16 UNIX_PrintSupply::getRemainingCapacityBasis() const
{
	return _remainingCapacityBasis;
}

void UNIX_PrintSupply::setRemainingCapacityBasis(Uint16 &value)
{
	_remainingCapacityBasis = value;
}

Boolean UNIX_PrintSupply::getRemainingCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY, getRemainingCapacity());
	return true;
}

Uint32 UNIX_PrintSupply::getRemainingCapacity() const
{
	return _remainingCapacity;
}

void UNIX_PrintSupply::setRemainingCapacity(Uint32 &value)
{
	_remainingCapacity = value;
}

Boolean UNIX_PrintSupply::getColorantRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLORANT_ROLE, getColorantRole());
	return true;
}

Uint32 UNIX_PrintSupply::getColorantRole() const
{
	return _colorantRole;
}

void UNIX_PrintSupply::setColorantRole(Uint32 &value)
{
	_colorantRole = value;
}

Boolean UNIX_PrintSupply::getOtherColorantRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COLORANT_ROLE, getOtherColorantRole());
	return true;
}

String UNIX_PrintSupply::getOtherColorantRole() const
{
	return _otherColorantRole;
}

void UNIX_PrintSupply::setOtherColorantRole(String &value)
{
	_otherColorantRole = value;
}

Boolean UNIX_PrintSupply::getColorantName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLORANT_NAME, getColorantName());
	return true;
}

Uint16 UNIX_PrintSupply::getColorantName() const
{
	return _colorantName;
}

void UNIX_PrintSupply::setColorantName(Uint16 &value)
{
	_colorantName = value;
}

Boolean UNIX_PrintSupply::getOtherColorantName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COLORANT_NAME, getOtherColorantName());
	return true;
}

String UNIX_PrintSupply::getOtherColorantName() const
{
	return _otherColorantName;
}

void UNIX_PrintSupply::setOtherColorantName(String &value)
{
	_otherColorantName = value;
}

Boolean UNIX_PrintSupply::getColorantTonality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLORANT_TONALITY, getColorantTonality());
	return true;
}

Uint32 UNIX_PrintSupply::getColorantTonality() const
{
	return _colorantTonality;
}

void UNIX_PrintSupply::setColorantTonality(Uint32 &value)
{
	_colorantTonality = value;
}


void UNIX_PrintSupply::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintSupply");
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
	_classification = Uint32(0);
	_otherClassification = String ("");
	_type = Uint32(0);
	_otherTypeDescription = String ("");
	_supplyUnit = Uint32(0);
	_otherSupplyUnit = String ("");
	_maxCapacityBasis = Uint16(0);
	_maxCapacity = Uint32(0);
	_remainingCapacityBasis = Uint16(0);
	_remainingCapacity = Uint32(0);
	_colorantRole = Uint32(0);
	_otherColorantRole = String ("");
	_colorantName = Uint16(0);
	_otherColorantName = String ("");
	_colorantTonality = Uint32(0);

}

Boolean UNIX_PrintSupply::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Classification"))
			{
				Uint32 classificationValue;
				property.getValue().get(classificationValue);
				setClassification(classificationValue);
			}
			else if (String::equal(property.getName().getString(), "OtherClassification"))
			{
				String otherClassificationValue;
				property.getValue().get(otherClassificationValue);
				setOtherClassification(otherClassificationValue);
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
			else if (String::equal(property.getName().getString(), "SupplyUnit"))
			{
				Uint32 supplyUnitValue;
				property.getValue().get(supplyUnitValue);
				setSupplyUnit(supplyUnitValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupplyUnit"))
			{
				String otherSupplyUnitValue;
				property.getValue().get(otherSupplyUnitValue);
				setOtherSupplyUnit(otherSupplyUnitValue);
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
			else if (String::equal(property.getName().getString(), "ColorantRole"))
			{
				Uint32 colorantRoleValue;
				property.getValue().get(colorantRoleValue);
				setColorantRole(colorantRoleValue);
			}
			else if (String::equal(property.getName().getString(), "OtherColorantRole"))
			{
				String otherColorantRoleValue;
				property.getValue().get(otherColorantRoleValue);
				setOtherColorantRole(otherColorantRoleValue);
			}
			else if (String::equal(property.getName().getString(), "ColorantName"))
			{
				Uint16 colorantNameValue;
				property.getValue().get(colorantNameValue);
				setColorantName(colorantNameValue);
			}
			else if (String::equal(property.getName().getString(), "OtherColorantName"))
			{
				String otherColorantNameValue;
				property.getValue().get(otherColorantNameValue);
				setOtherColorantName(otherColorantNameValue);
			}
			else if (String::equal(property.getName().getString(), "ColorantTonality"))
			{
				Uint32 colorantTonalityValue;
				property.getValue().get(colorantTonalityValue);
				setColorantTonality(colorantTonalityValue);
			}
	}
	return true;
}


Boolean UNIX_PrintSupply::initialize()
{
	return false;
}

Boolean UNIX_PrintSupply::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintSupply");
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
	_classification = Uint32(0);
	_otherClassification = String ("");
	_type = Uint32(0);
	_otherTypeDescription = String ("");
	_supplyUnit = Uint32(0);
	_otherSupplyUnit = String ("");
	_maxCapacityBasis = Uint16(0);
	_maxCapacity = Uint32(0);
	_remainingCapacityBasis = Uint16(0);
	_remainingCapacity = Uint32(0);
	_colorantRole = Uint32(0);
	_otherColorantRole = String ("");
	_colorantName = Uint16(0);
	_otherColorantName = String ("");
	_colorantTonality = Uint32(0);
	
	return false;
}

Boolean UNIX_PrintSupply::finalize()
{
	return false;
}

Boolean UNIX_PrintSupply::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintSupply::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintSupply::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintSupply::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintSupply::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintSupply::validateInstance()
{
	return true;
}

