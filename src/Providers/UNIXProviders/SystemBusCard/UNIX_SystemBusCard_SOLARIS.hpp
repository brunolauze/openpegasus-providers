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


UNIX_SystemBusCard::UNIX_SystemBusCard(void)
{
}

UNIX_SystemBusCard::~UNIX_SystemBusCard(void)
{
}

Boolean UNIX_SystemBusCard::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SystemBusCard::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SystemBusCard::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SystemBusCard::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SystemBusCard::getCaption() const
{
	return _caption;
}

void UNIX_SystemBusCard::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SystemBusCard::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SystemBusCard::getDescription() const
{
	return _description;
}

void UNIX_SystemBusCard::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SystemBusCard::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SystemBusCard::getElementName() const
{
	return _elementName;
}

void UNIX_SystemBusCard::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SystemBusCard::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SystemBusCard::getGeneration() const
{
	return _generation;
}

void UNIX_SystemBusCard::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SystemBusCard::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SystemBusCard::getInstallDate() const
{
	return _installDate;
}

void UNIX_SystemBusCard::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SystemBusCard::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SystemBusCard::getName() const
{
	return _name;
}

void UNIX_SystemBusCard::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SystemBusCard::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SystemBusCard::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SystemBusCard::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SystemBusCard::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SystemBusCard::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SystemBusCard::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SystemBusCard::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SystemBusCard::getStatus() const
{
	return _status;
}

void UNIX_SystemBusCard::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SystemBusCard::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SystemBusCard::getHealthState() const
{
	return _healthState;
}

void UNIX_SystemBusCard::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SystemBusCard::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SystemBusCard::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SystemBusCard::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SystemBusCard::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SystemBusCard::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SystemBusCard::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SystemBusCard::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SystemBusCard::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SystemBusCard::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SystemBusCard::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SystemBusCard::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SystemBusCard::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SystemBusCard::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_SystemBusCard::getTag() const
{
	return _tag;
}

void UNIX_SystemBusCard::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_SystemBusCard::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SystemBusCard::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SystemBusCard::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SystemBusCard::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_SystemBusCard::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_SystemBusCard::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_SystemBusCard::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_SystemBusCard::getModel() const
{
	return _model;
}

void UNIX_SystemBusCard::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_SystemBusCard::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_SystemBusCard::getSKU() const
{
	return _sKU;
}

void UNIX_SystemBusCard::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_SystemBusCard::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_SystemBusCard::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_SystemBusCard::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_SystemBusCard::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SystemBusCard::getVersion() const
{
	return _version;
}

void UNIX_SystemBusCard::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_SystemBusCard::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_SystemBusCard::getPartNumber() const
{
	return _partNumber;
}

void UNIX_SystemBusCard::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_SystemBusCard::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_SystemBusCard::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_SystemBusCard::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_SystemBusCard::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_SystemBusCard::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_SystemBusCard::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_SystemBusCard::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_SystemBusCard::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_SystemBusCard::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_SystemBusCard::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_SystemBusCard::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_SystemBusCard::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_SystemBusCard::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_SystemBusCard::getUserTracking() const
{
	return _userTracking;
}

void UNIX_SystemBusCard::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_SystemBusCard::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_SystemBusCard::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_SystemBusCard::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_SystemBusCard::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_SystemBusCard::getRemovalConditions() const
{
	return _removalConditions;
}

void UNIX_SystemBusCard::setRemovalConditions(Uint16 &value)
{
	_removalConditions = value;
}

Boolean UNIX_SystemBusCard::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_SystemBusCard::getRemovable() const
{
	return _removable;
}

void UNIX_SystemBusCard::setRemovable(Boolean &value)
{
	_removable = value;
}

Boolean UNIX_SystemBusCard::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_SystemBusCard::getReplaceable() const
{
	return _replaceable;
}

void UNIX_SystemBusCard::setReplaceable(Boolean &value)
{
	_replaceable = value;
}

Boolean UNIX_SystemBusCard::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_SystemBusCard::getHotSwappable() const
{
	return _hotSwappable;
}

void UNIX_SystemBusCard::setHotSwappable(Boolean &value)
{
	_hotSwappable = value;
}

Boolean UNIX_SystemBusCard::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_SystemBusCard::getHeight() const
{
	return _height;
}

void UNIX_SystemBusCard::setHeight(Real32 &value)
{
	_height = value;
}

Boolean UNIX_SystemBusCard::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_SystemBusCard::getDepth() const
{
	return _depth;
}

void UNIX_SystemBusCard::setDepth(Real32 &value)
{
	_depth = value;
}

Boolean UNIX_SystemBusCard::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_SystemBusCard::getWidth() const
{
	return _width;
}

void UNIX_SystemBusCard::setWidth(Real32 &value)
{
	_width = value;
}

Boolean UNIX_SystemBusCard::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_SystemBusCard::getWeight() const
{
	return _weight;
}

void UNIX_SystemBusCard::setWeight(Real32 &value)
{
	_weight = value;
}

Boolean UNIX_SystemBusCard::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_SystemBusCard::getPackageType() const
{
	return _packageType;
}

void UNIX_SystemBusCard::setPackageType(Uint16 &value)
{
	_packageType = value;
}

Boolean UNIX_SystemBusCard::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_SystemBusCard::getOtherPackageType() const
{
	return _otherPackageType;
}

void UNIX_SystemBusCard::setOtherPackageType(String &value)
{
	_otherPackageType = value;
}

Boolean UNIX_SystemBusCard::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_SystemBusCard::getVendorCompatibilityStrings() const
{
	return _vendorCompatibilityStrings;
}

void UNIX_SystemBusCard::setVendorCompatibilityStrings(Array<String> &value)
{
	_vendorCompatibilityStrings = value;
}

Boolean UNIX_SystemBusCard::getHostingBoard(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOSTING_BOARD, getHostingBoard());
	return true;
}

Boolean UNIX_SystemBusCard::getHostingBoard() const
{
	return _hostingBoard;
}

void UNIX_SystemBusCard::setHostingBoard(Boolean &value)
{
	_hostingBoard = value;
}

Boolean UNIX_SystemBusCard::getSlotLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SLOT_LAYOUT, getSlotLayout());
	return true;
}

String UNIX_SystemBusCard::getSlotLayout() const
{
	return _slotLayout;
}

void UNIX_SystemBusCard::setSlotLayout(String &value)
{
	_slotLayout = value;
}

Boolean UNIX_SystemBusCard::getRequiresDaughterBoard(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRES_DAUGHTER_BOARD, getRequiresDaughterBoard());
	return true;
}

Boolean UNIX_SystemBusCard::getRequiresDaughterBoard() const
{
	return _requiresDaughterBoard;
}

void UNIX_SystemBusCard::setRequiresDaughterBoard(Boolean &value)
{
	_requiresDaughterBoard = value;
}

Boolean UNIX_SystemBusCard::getSpecialRequirements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPECIAL_REQUIREMENTS, getSpecialRequirements());
	return true;
}

Boolean UNIX_SystemBusCard::getSpecialRequirements() const
{
	return _specialRequirements;
}

void UNIX_SystemBusCard::setSpecialRequirements(Boolean &value)
{
	_specialRequirements = value;
}

Boolean UNIX_SystemBusCard::getRequirementsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIREMENTS_DESCRIPTION, getRequirementsDescription());
	return true;
}

String UNIX_SystemBusCard::getRequirementsDescription() const
{
	return _requirementsDescription;
}

void UNIX_SystemBusCard::setRequirementsDescription(String &value)
{
	_requirementsDescription = value;
}

Boolean UNIX_SystemBusCard::getOperatingVoltages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_VOLTAGES, getOperatingVoltages());
	return true;
}

Array<Sint16> UNIX_SystemBusCard::getOperatingVoltages() const
{
	return _operatingVoltages;
}

void UNIX_SystemBusCard::setOperatingVoltages(Array<Sint16> &value)
{
	_operatingVoltages = value;
}

Boolean UNIX_SystemBusCard::getBusType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_TYPE, getBusType());
	return true;
}

Uint16 UNIX_SystemBusCard::getBusType() const
{
	return _busType;
}

void UNIX_SystemBusCard::setBusType(Uint16 &value)
{
	_busType = value;
}

Boolean UNIX_SystemBusCard::getBusWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_WIDTH, getBusWidth());
	return true;
}

Uint16 UNIX_SystemBusCard::getBusWidth() const
{
	return _busWidth;
}

void UNIX_SystemBusCard::setBusWidth(Uint16 &value)
{
	_busWidth = value;
}

Boolean UNIX_SystemBusCard::getBusLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_LAYOUT, getBusLayout());
	return true;
}

Uint16 UNIX_SystemBusCard::getBusLayout() const
{
	return _busLayout;
}

void UNIX_SystemBusCard::setBusLayout(Uint16 &value)
{
	_busLayout = value;
}


void UNIX_SystemBusCard::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SystemBusCard");
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
	_creationClassName = String("UNIX_SystemBusCard");
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
	_removalConditions = Uint16(0);
	_removable = Boolean(false);
	_replaceable = Boolean(false);
	_hotSwappable = Boolean(false);
	_height = Real32(0);
	_depth = Real32(0);
	_width = Real32(0);
	_weight = Real32(0);
	_packageType = Uint16(0);
	_otherPackageType = String ("");
	_vendorCompatibilityStrings.clear();
	_hostingBoard = Boolean(false);
	_slotLayout = String ("");
	_requiresDaughterBoard = Boolean(false);
	_specialRequirements = Boolean(false);
	_requirementsDescription = String ("");
	_operatingVoltages.clear();
	_busType = Uint16(0);
	_busWidth = Uint16(0);
	_busLayout = Uint16(0);

}

Boolean UNIX_SystemBusCard::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RemovalConditions"))
			{
				Uint16 removalConditionsValue;
				property.getValue().get(removalConditionsValue);
				setRemovalConditions(removalConditionsValue);
			}
			else if (String::equal(property.getName().getString(), "Removable"))
			{
				Boolean removableValue;
				property.getValue().get(removableValue);
				setRemovable(removableValue);
			}
			else if (String::equal(property.getName().getString(), "Replaceable"))
			{
				Boolean replaceableValue;
				property.getValue().get(replaceableValue);
				setReplaceable(replaceableValue);
			}
			else if (String::equal(property.getName().getString(), "HotSwappable"))
			{
				Boolean hotSwappableValue;
				property.getValue().get(hotSwappableValue);
				setHotSwappable(hotSwappableValue);
			}
			else if (String::equal(property.getName().getString(), "Height"))
			{
				Real32 heightValue;
				property.getValue().get(heightValue);
				setHeight(heightValue);
			}
			else if (String::equal(property.getName().getString(), "Depth"))
			{
				Real32 depthValue;
				property.getValue().get(depthValue);
				setDepth(depthValue);
			}
			else if (String::equal(property.getName().getString(), "Width"))
			{
				Real32 widthValue;
				property.getValue().get(widthValue);
				setWidth(widthValue);
			}
			else if (String::equal(property.getName().getString(), "Weight"))
			{
				Real32 weightValue;
				property.getValue().get(weightValue);
				setWeight(weightValue);
			}
			else if (String::equal(property.getName().getString(), "PackageType"))
			{
				Uint16 packageTypeValue;
				property.getValue().get(packageTypeValue);
				setPackageType(packageTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPackageType"))
			{
				String otherPackageTypeValue;
				property.getValue().get(otherPackageTypeValue);
				setOtherPackageType(otherPackageTypeValue);
			}
			else if (String::equal(property.getName().getString(), "VendorCompatibilityStrings"))
			{
				Array<String> vendorCompatibilityStringsValue;
				property.getValue().get(vendorCompatibilityStringsValue);
				setVendorCompatibilityStrings(vendorCompatibilityStringsValue);
			}
			else if (String::equal(property.getName().getString(), "HostingBoard"))
			{
				Boolean hostingBoardValue;
				property.getValue().get(hostingBoardValue);
				setHostingBoard(hostingBoardValue);
			}
			else if (String::equal(property.getName().getString(), "SlotLayout"))
			{
				String slotLayoutValue;
				property.getValue().get(slotLayoutValue);
				setSlotLayout(slotLayoutValue);
			}
			else if (String::equal(property.getName().getString(), "RequiresDaughterBoard"))
			{
				Boolean requiresDaughterBoardValue;
				property.getValue().get(requiresDaughterBoardValue);
				setRequiresDaughterBoard(requiresDaughterBoardValue);
			}
			else if (String::equal(property.getName().getString(), "SpecialRequirements"))
			{
				Boolean specialRequirementsValue;
				property.getValue().get(specialRequirementsValue);
				setSpecialRequirements(specialRequirementsValue);
			}
			else if (String::equal(property.getName().getString(), "RequirementsDescription"))
			{
				String requirementsDescriptionValue;
				property.getValue().get(requirementsDescriptionValue);
				setRequirementsDescription(requirementsDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingVoltages"))
			{
				Array<Sint16> operatingVoltagesValue;
				property.getValue().get(operatingVoltagesValue);
				setOperatingVoltages(operatingVoltagesValue);
			}
			else if (String::equal(property.getName().getString(), "BusType"))
			{
				Uint16 busTypeValue;
				property.getValue().get(busTypeValue);
				setBusType(busTypeValue);
			}
			else if (String::equal(property.getName().getString(), "BusWidth"))
			{
				Uint16 busWidthValue;
				property.getValue().get(busWidthValue);
				setBusWidth(busWidthValue);
			}
			else if (String::equal(property.getName().getString(), "BusLayout"))
			{
				Uint16 busLayoutValue;
				property.getValue().get(busLayoutValue);
				setBusLayout(busLayoutValue);
			}
	}
	return true;
}

Uint32 UNIX_SystemBusCard::invokeIsCompatible(
		CIMInstance &inElementToCheck
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method IsCompatible */
	
	
	
	return returnValue;
}

Uint32 UNIX_SystemBusCard::invokeConnectorPower(
		CIMInstance &inConnector,
		Boolean &inPoweredOn
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_PhysicalConnector inConnectorObject;
	inConnectorObject.loadInstance(inConnector);
	
	/* Execute method ConnectorPower */
	
	
	
	return returnValue;
}


Boolean UNIX_SystemBusCard::initialize()
{
	return false;
}

Boolean UNIX_SystemBusCard::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SystemBusCard");
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
	_creationClassName = String("UNIX_SystemBusCard");
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
	_removalConditions = Uint16(0);
	_removable = Boolean(false);
	_replaceable = Boolean(false);
	_hotSwappable = Boolean(false);
	_height = Real32(0);
	_depth = Real32(0);
	_width = Real32(0);
	_weight = Real32(0);
	_packageType = Uint16(0);
	_otherPackageType = String ("");
	_vendorCompatibilityStrings.clear();
	_hostingBoard = Boolean(false);
	_slotLayout = String ("");
	_requiresDaughterBoard = Boolean(false);
	_specialRequirements = Boolean(false);
	_requirementsDescription = String ("");
	_operatingVoltages.clear();
	_busType = Uint16(0);
	_busWidth = Uint16(0);
	_busLayout = Uint16(0);
	
	return false;
}

Boolean UNIX_SystemBusCard::finalize()
{
	return false;
}

Boolean UNIX_SystemBusCard::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SystemBusCard::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SystemBusCard::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemBusCard::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemBusCard::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemBusCard::validateInstance()
{
	return true;
}

