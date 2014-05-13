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


UNIX_Slot::UNIX_Slot(void)
{
}

UNIX_Slot::~UNIX_Slot(void)
{
}

Boolean UNIX_Slot::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Slot::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Slot::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Slot::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Slot::getCaption() const
{
	return _caption;
}

void UNIX_Slot::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Slot::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Slot::getDescription() const
{
	return _description;
}

void UNIX_Slot::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Slot::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Slot::getElementName() const
{
	return _elementName;
}

void UNIX_Slot::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Slot::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Slot::getGeneration() const
{
	return _generation;
}

void UNIX_Slot::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Slot::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Slot::getInstallDate() const
{
	return _installDate;
}

void UNIX_Slot::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Slot::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Slot::getName() const
{
	return _name;
}

void UNIX_Slot::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Slot::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Slot::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Slot::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Slot::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Slot::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Slot::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Slot::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Slot::getStatus() const
{
	return _status;
}

void UNIX_Slot::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Slot::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Slot::getHealthState() const
{
	return _healthState;
}

void UNIX_Slot::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Slot::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Slot::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Slot::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Slot::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Slot::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Slot::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Slot::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Slot::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Slot::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Slot::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Slot::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Slot::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Slot::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Slot::getTag() const
{
	return _tag;
}

void UNIX_Slot::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_Slot::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Slot::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Slot::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Slot::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Slot::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_Slot::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_Slot::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Slot::getModel() const
{
	return _model;
}

void UNIX_Slot::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_Slot::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Slot::getSKU() const
{
	return _sKU;
}

void UNIX_Slot::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_Slot::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Slot::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_Slot::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_Slot::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Slot::getVersion() const
{
	return _version;
}

void UNIX_Slot::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_Slot::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Slot::getPartNumber() const
{
	return _partNumber;
}

void UNIX_Slot::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_Slot::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Slot::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Slot::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Slot::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Slot::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_Slot::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_Slot::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Slot::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_Slot::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_Slot::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Slot::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_Slot::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_Slot::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Slot::getUserTracking() const
{
	return _userTracking;
}

void UNIX_Slot::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_Slot::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Slot::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_Slot::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_Slot::getConnectorPinout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_PINOUT, getConnectorPinout());
	return true;
}

String UNIX_Slot::getConnectorPinout() const
{
	return _connectorPinout;
}

void UNIX_Slot::setConnectorPinout(String &value)
{
	_connectorPinout = value;
}

Boolean UNIX_Slot::getConnectorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_TYPE, getConnectorType());
	return true;
}

Array<Uint16> UNIX_Slot::getConnectorType() const
{
	return _connectorType;
}

void UNIX_Slot::setConnectorType(Array<Uint16> &value)
{
	_connectorType = value;
}

Boolean UNIX_Slot::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_Slot::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_Slot::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_Slot::getConnectorGender(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_GENDER, getConnectorGender());
	return true;
}

Uint16 UNIX_Slot::getConnectorGender() const
{
	return _connectorGender;
}

void UNIX_Slot::setConnectorGender(Uint16 &value)
{
	_connectorGender = value;
}

Boolean UNIX_Slot::getConnectorElectricalCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_ELECTRICAL_CHARACTERISTICS, getConnectorElectricalCharacteristics());
	return true;
}

Array<Uint16> UNIX_Slot::getConnectorElectricalCharacteristics() const
{
	return _connectorElectricalCharacteristics;
}

void UNIX_Slot::setConnectorElectricalCharacteristics(Array<Uint16> &value)
{
	_connectorElectricalCharacteristics = value;
}

Boolean UNIX_Slot::getOtherElectricalCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ELECTRICAL_CHARACTERISTICS, getOtherElectricalCharacteristics());
	return true;
}

Array<String> UNIX_Slot::getOtherElectricalCharacteristics() const
{
	return _otherElectricalCharacteristics;
}

void UNIX_Slot::setOtherElectricalCharacteristics(Array<String> &value)
{
	_otherElectricalCharacteristics = value;
}

Boolean UNIX_Slot::getNumPhysicalPins(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUM_PHYSICAL_PINS, getNumPhysicalPins());
	return true;
}

Uint32 UNIX_Slot::getNumPhysicalPins() const
{
	return _numPhysicalPins;
}

void UNIX_Slot::setNumPhysicalPins(Uint32 &value)
{
	_numPhysicalPins = value;
}

Boolean UNIX_Slot::getConnectorLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_LAYOUT, getConnectorLayout());
	return true;
}

Uint16 UNIX_Slot::getConnectorLayout() const
{
	return _connectorLayout;
}

void UNIX_Slot::setConnectorLayout(Uint16 &value)
{
	_connectorLayout = value;
}

Boolean UNIX_Slot::getConnectorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_DESCRIPTION, getConnectorDescription());
	return true;
}

String UNIX_Slot::getConnectorDescription() const
{
	return _connectorDescription;
}

void UNIX_Slot::setConnectorDescription(String &value)
{
	_connectorDescription = value;
}

Boolean UNIX_Slot::getSupportsHotPlug(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_HOT_PLUG, getSupportsHotPlug());
	return true;
}

Boolean UNIX_Slot::getSupportsHotPlug() const
{
	return _supportsHotPlug;
}

void UNIX_Slot::setSupportsHotPlug(Boolean &value)
{
	_supportsHotPlug = value;
}

Boolean UNIX_Slot::getHeightAllowed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT_ALLOWED, getHeightAllowed());
	return true;
}

Real32 UNIX_Slot::getHeightAllowed() const
{
	return _heightAllowed;
}

void UNIX_Slot::setHeightAllowed(Real32 &value)
{
	_heightAllowed = value;
}

Boolean UNIX_Slot::getLengthAllowed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LENGTH_ALLOWED, getLengthAllowed());
	return true;
}

Real32 UNIX_Slot::getLengthAllowed() const
{
	return _lengthAllowed;
}

void UNIX_Slot::setLengthAllowed(Real32 &value)
{
	_lengthAllowed = value;
}

Boolean UNIX_Slot::getMaxDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_WIDTH, getMaxDataWidth());
	return true;
}

Uint16 UNIX_Slot::getMaxDataWidth() const
{
	return _maxDataWidth;
}

void UNIX_Slot::setMaxDataWidth(Uint16 &value)
{
	_maxDataWidth = value;
}

Boolean UNIX_Slot::getVccMixedVoltageSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VCC_MIXED_VOLTAGE_SUPPORT, getVccMixedVoltageSupport());
	return true;
}

Array<Uint16> UNIX_Slot::getVccMixedVoltageSupport() const
{
	return _vccMixedVoltageSupport;
}

void UNIX_Slot::setVccMixedVoltageSupport(Array<Uint16> &value)
{
	_vccMixedVoltageSupport = value;
}

Boolean UNIX_Slot::getVppMixedVoltageSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VPP_MIXED_VOLTAGE_SUPPORT, getVppMixedVoltageSupport());
	return true;
}

Array<Uint16> UNIX_Slot::getVppMixedVoltageSupport() const
{
	return _vppMixedVoltageSupport;
}

void UNIX_Slot::setVppMixedVoltageSupport(Array<Uint16> &value)
{
	_vppMixedVoltageSupport = value;
}

Boolean UNIX_Slot::getThermalRating(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THERMAL_RATING, getThermalRating());
	return true;
}

Uint32 UNIX_Slot::getThermalRating() const
{
	return _thermalRating;
}

void UNIX_Slot::setThermalRating(Uint32 &value)
{
	_thermalRating = value;
}

Boolean UNIX_Slot::getSpecialPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPECIAL_PURPOSE, getSpecialPurpose());
	return true;
}

Boolean UNIX_Slot::getSpecialPurpose() const
{
	return _specialPurpose;
}

void UNIX_Slot::setSpecialPurpose(Boolean &value)
{
	_specialPurpose = value;
}

Boolean UNIX_Slot::getPurposeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE_DESCRIPTION, getPurposeDescription());
	return true;
}

String UNIX_Slot::getPurposeDescription() const
{
	return _purposeDescription;
}

void UNIX_Slot::setPurposeDescription(String &value)
{
	_purposeDescription = value;
}

Boolean UNIX_Slot::getNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER, getNumber());
	return true;
}

Uint16 UNIX_Slot::getNumber() const
{
	return _number;
}

void UNIX_Slot::setNumber(Uint16 &value)
{
	_number = value;
}

Boolean UNIX_Slot::getPowered(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED, getPowered());
	return true;
}

Boolean UNIX_Slot::getPowered() const
{
	return _powered;
}

void UNIX_Slot::setPowered(Boolean &value)
{
	_powered = value;
}

Boolean UNIX_Slot::getOpenSwitch(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPEN_SWITCH, getOpenSwitch());
	return true;
}

Boolean UNIX_Slot::getOpenSwitch() const
{
	return _openSwitch;
}

void UNIX_Slot::setOpenSwitch(Boolean &value)
{
	_openSwitch = value;
}

Boolean UNIX_Slot::getMaxLinkWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LINK_WIDTH, getMaxLinkWidth());
	return true;
}

Uint16 UNIX_Slot::getMaxLinkWidth() const
{
	return _maxLinkWidth;
}

void UNIX_Slot::setMaxLinkWidth(Uint16 &value)
{
	_maxLinkWidth = value;
}

Boolean UNIX_Slot::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_Slot::getVendorCompatibilityStrings() const
{
	return _vendorCompatibilityStrings;
}

void UNIX_Slot::setVendorCompatibilityStrings(Array<String> &value)
{
	_vendorCompatibilityStrings = value;
}


void UNIX_Slot::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Slot");
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
	_tag = String ("");
	_creationClassName = String("UNIX_Slot");
	_manufacturer = String ("");
	_model = String ("");
	_sKU = String ("");
	_serialNumber = String ("");
	_version = String ("");
	_partNumber = String ("");
	_otherIdentifyingInfo = String ("");
	_poweredOn = Boolean(false);
	_manufactureDate = CIMHelper::getCurrentTime();
	_vendorEquipmentType = String ("");
	_userTracking = String ("");
	_canBeFRUed = Boolean(false);
	_connectorPinout = String ("");
	_connectorType.clear();
	_otherTypeDescription = String ("");
	_connectorGender = Uint16(0);
	_connectorElectricalCharacteristics.clear();
	_otherElectricalCharacteristics.clear();
	_numPhysicalPins = Uint32(0);
	_connectorLayout = Uint16(0);
	_connectorDescription = String ("");
	_supportsHotPlug = Boolean(false);
	_heightAllowed = Real32(0);
	_lengthAllowed = Real32(0);
	_maxDataWidth = Uint16(0);
	_vccMixedVoltageSupport.clear();
	_vppMixedVoltageSupport.clear();
	_thermalRating = Uint32(0);
	_specialPurpose = Boolean(false);
	_purposeDescription = String ("");
	_number = Uint16(0);
	_powered = Boolean(false);
	_openSwitch = Boolean(false);
	_maxLinkWidth = Uint16(0);
	_vendorCompatibilityStrings.clear();

}

Boolean UNIX_Slot::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Tag"))
			{
				String tagValue;
				property.getValue().get(tagValue);
				setTag(tagValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Manufacturer"))
			{
				String manufacturerValue;
				property.getValue().get(manufacturerValue);
				setManufacturer(manufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "Model"))
			{
				String modelValue;
				property.getValue().get(modelValue);
				setModel(modelValue);
			}
			else if (String::equal(property.getName().getString(), "SKU"))
			{
				String sKUValue;
				property.getValue().get(sKUValue);
				setSKU(sKUValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				String serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "PartNumber"))
			{
				String partNumberValue;
				property.getValue().get(partNumberValue);
				setPartNumber(partNumberValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				String otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PoweredOn"))
			{
				Boolean poweredOnValue;
				property.getValue().get(poweredOnValue);
				setPoweredOn(poweredOnValue);
			}
			else if (String::equal(property.getName().getString(), "ManufactureDate"))
			{
				CIMDateTime manufactureDateValue;
				property.getValue().get(manufactureDateValue);
				setManufactureDate(manufactureDateValue);
			}
			else if (String::equal(property.getName().getString(), "VendorEquipmentType"))
			{
				String vendorEquipmentTypeValue;
				property.getValue().get(vendorEquipmentTypeValue);
				setVendorEquipmentType(vendorEquipmentTypeValue);
			}
			else if (String::equal(property.getName().getString(), "UserTracking"))
			{
				String userTrackingValue;
				property.getValue().get(userTrackingValue);
				setUserTracking(userTrackingValue);
			}
			else if (String::equal(property.getName().getString(), "CanBeFRUed"))
			{
				Boolean canBeFRUedValue;
				property.getValue().get(canBeFRUedValue);
				setCanBeFRUed(canBeFRUedValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorPinout"))
			{
				String connectorPinoutValue;
				property.getValue().get(connectorPinoutValue);
				setConnectorPinout(connectorPinoutValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorType"))
			{
				Array<Uint16> connectorTypeValue;
				property.getValue().get(connectorTypeValue);
				setConnectorType(connectorTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorGender"))
			{
				Uint16 connectorGenderValue;
				property.getValue().get(connectorGenderValue);
				setConnectorGender(connectorGenderValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorElectricalCharacteristics"))
			{
				Array<Uint16> connectorElectricalCharacteristicsValue;
				property.getValue().get(connectorElectricalCharacteristicsValue);
				setConnectorElectricalCharacteristics(connectorElectricalCharacteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherElectricalCharacteristics"))
			{
				Array<String> otherElectricalCharacteristicsValue;
				property.getValue().get(otherElectricalCharacteristicsValue);
				setOtherElectricalCharacteristics(otherElectricalCharacteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "NumPhysicalPins"))
			{
				Uint32 numPhysicalPinsValue;
				property.getValue().get(numPhysicalPinsValue);
				setNumPhysicalPins(numPhysicalPinsValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorLayout"))
			{
				Uint16 connectorLayoutValue;
				property.getValue().get(connectorLayoutValue);
				setConnectorLayout(connectorLayoutValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectorDescription"))
			{
				String connectorDescriptionValue;
				property.getValue().get(connectorDescriptionValue);
				setConnectorDescription(connectorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsHotPlug"))
			{
				Boolean supportsHotPlugValue;
				property.getValue().get(supportsHotPlugValue);
				setSupportsHotPlug(supportsHotPlugValue);
			}
			else if (String::equal(property.getName().getString(), "HeightAllowed"))
			{
				Real32 heightAllowedValue;
				property.getValue().get(heightAllowedValue);
				setHeightAllowed(heightAllowedValue);
			}
			else if (String::equal(property.getName().getString(), "LengthAllowed"))
			{
				Real32 lengthAllowedValue;
				property.getValue().get(lengthAllowedValue);
				setLengthAllowed(lengthAllowedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxDataWidth"))
			{
				Uint16 maxDataWidthValue;
				property.getValue().get(maxDataWidthValue);
				setMaxDataWidth(maxDataWidthValue);
			}
			else if (String::equal(property.getName().getString(), "VccMixedVoltageSupport"))
			{
				Array<Uint16> vccMixedVoltageSupportValue;
				property.getValue().get(vccMixedVoltageSupportValue);
				setVccMixedVoltageSupport(vccMixedVoltageSupportValue);
			}
			else if (String::equal(property.getName().getString(), "VppMixedVoltageSupport"))
			{
				Array<Uint16> vppMixedVoltageSupportValue;
				property.getValue().get(vppMixedVoltageSupportValue);
				setVppMixedVoltageSupport(vppMixedVoltageSupportValue);
			}
			else if (String::equal(property.getName().getString(), "ThermalRating"))
			{
				Uint32 thermalRatingValue;
				property.getValue().get(thermalRatingValue);
				setThermalRating(thermalRatingValue);
			}
			else if (String::equal(property.getName().getString(), "SpecialPurpose"))
			{
				Boolean specialPurposeValue;
				property.getValue().get(specialPurposeValue);
				setSpecialPurpose(specialPurposeValue);
			}
			else if (String::equal(property.getName().getString(), "PurposeDescription"))
			{
				String purposeDescriptionValue;
				property.getValue().get(purposeDescriptionValue);
				setPurposeDescription(purposeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "Number"))
			{
				Uint16 numberValue;
				property.getValue().get(numberValue);
				setNumber(numberValue);
			}
			else if (String::equal(property.getName().getString(), "Powered"))
			{
				Boolean poweredValue;
				property.getValue().get(poweredValue);
				setPowered(poweredValue);
			}
			else if (String::equal(property.getName().getString(), "OpenSwitch"))
			{
				Boolean openSwitchValue;
				property.getValue().get(openSwitchValue);
				setOpenSwitch(openSwitchValue);
			}
			else if (String::equal(property.getName().getString(), "MaxLinkWidth"))
			{
				Uint16 maxLinkWidthValue;
				property.getValue().get(maxLinkWidthValue);
				setMaxLinkWidth(maxLinkWidthValue);
			}
			else if (String::equal(property.getName().getString(), "VendorCompatibilityStrings"))
			{
				Array<String> vendorCompatibilityStringsValue;
				property.getValue().get(vendorCompatibilityStringsValue);
				setVendorCompatibilityStrings(vendorCompatibilityStringsValue);
			}
	}
	return true;
}


Boolean UNIX_Slot::initialize()
{
	return false;
}

Boolean UNIX_Slot::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Slot");
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
	_tag = String ("");
	_creationClassName = String("UNIX_Slot");
	_manufacturer = String ("");
	_model = String ("");
	_sKU = String ("");
	_serialNumber = String ("");
	_version = String ("");
	_partNumber = String ("");
	_otherIdentifyingInfo = String ("");
	_poweredOn = Boolean(false);
	_manufactureDate = CIMHelper::getCurrentTime();
	_vendorEquipmentType = String ("");
	_userTracking = String ("");
	_canBeFRUed = Boolean(false);
	_connectorPinout = String ("");
	_connectorType.clear();
	_otherTypeDescription = String ("");
	_connectorGender = Uint16(0);
	_connectorElectricalCharacteristics.clear();
	_otherElectricalCharacteristics.clear();
	_numPhysicalPins = Uint32(0);
	_connectorLayout = Uint16(0);
	_connectorDescription = String ("");
	_supportsHotPlug = Boolean(false);
	_heightAllowed = Real32(0);
	_lengthAllowed = Real32(0);
	_maxDataWidth = Uint16(0);
	_vccMixedVoltageSupport.clear();
	_vppMixedVoltageSupport.clear();
	_thermalRating = Uint32(0);
	_specialPurpose = Boolean(false);
	_purposeDescription = String ("");
	_number = Uint16(0);
	_powered = Boolean(false);
	_openSwitch = Boolean(false);
	_maxLinkWidth = Uint16(0);
	_vendorCompatibilityStrings.clear();
	
	return false;
}

Boolean UNIX_Slot::finalize()
{
	return false;
}

Boolean UNIX_Slot::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Slot::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String tagKey;
	String creationClassNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_TAG)) tagKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getTag(), tagKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Slot::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Slot::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Slot::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Slot::validateInstance()
{
	return true;
}

