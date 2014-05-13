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


UNIX_PhysicalMemory::UNIX_PhysicalMemory(void)
{
}

UNIX_PhysicalMemory::~UNIX_PhysicalMemory(void)
{
}

Boolean UNIX_PhysicalMemory::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalMemory::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PhysicalMemory::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PhysicalMemory::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalMemory::getCaption() const
{
	return _caption;
}

void UNIX_PhysicalMemory::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PhysicalMemory::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalMemory::getDescription() const
{
	return _description;
}

void UNIX_PhysicalMemory::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PhysicalMemory::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalMemory::getElementName() const
{
	return _elementName;
}

void UNIX_PhysicalMemory::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PhysicalMemory::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PhysicalMemory::getGeneration() const
{
	return _generation;
}

void UNIX_PhysicalMemory::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PhysicalMemory::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalMemory::getInstallDate() const
{
	return _installDate;
}

void UNIX_PhysicalMemory::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PhysicalMemory::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalMemory::getName() const
{
	return _name;
}

void UNIX_PhysicalMemory::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PhysicalMemory::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalMemory::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PhysicalMemory::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PhysicalMemory::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalMemory::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PhysicalMemory::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PhysicalMemory::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalMemory::getStatus() const
{
	return _status;
}

void UNIX_PhysicalMemory::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PhysicalMemory::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalMemory::getHealthState() const
{
	return _healthState;
}

void UNIX_PhysicalMemory::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PhysicalMemory::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalMemory::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PhysicalMemory::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PhysicalMemory::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalMemory::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PhysicalMemory::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PhysicalMemory::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalMemory::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PhysicalMemory::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PhysicalMemory::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalMemory::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PhysicalMemory::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PhysicalMemory::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalMemory::getTag() const
{
	return _tag;
}

void UNIX_PhysicalMemory::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_PhysicalMemory::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalMemory::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PhysicalMemory::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PhysicalMemory::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalMemory::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_PhysicalMemory::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_PhysicalMemory::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalMemory::getModel() const
{
	return _model;
}

void UNIX_PhysicalMemory::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_PhysicalMemory::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalMemory::getSKU() const
{
	return _sKU;
}

void UNIX_PhysicalMemory::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_PhysicalMemory::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalMemory::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_PhysicalMemory::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_PhysicalMemory::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalMemory::getVersion() const
{
	return _version;
}

void UNIX_PhysicalMemory::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_PhysicalMemory::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalMemory::getPartNumber() const
{
	return _partNumber;
}

void UNIX_PhysicalMemory::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_PhysicalMemory::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalMemory::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PhysicalMemory::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PhysicalMemory::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalMemory::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_PhysicalMemory::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_PhysicalMemory::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalMemory::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_PhysicalMemory::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_PhysicalMemory::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalMemory::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_PhysicalMemory::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_PhysicalMemory::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalMemory::getUserTracking() const
{
	return _userTracking;
}

void UNIX_PhysicalMemory::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_PhysicalMemory::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalMemory::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_PhysicalMemory::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_PhysicalMemory::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_PhysicalMemory::getRemovalConditions() const
{
	return _removalConditions;
}

void UNIX_PhysicalMemory::setRemovalConditions(Uint16 &value)
{
	_removalConditions = value;
}

Boolean UNIX_PhysicalMemory::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_PhysicalMemory::getRemovable() const
{
	return _removable;
}

void UNIX_PhysicalMemory::setRemovable(Boolean &value)
{
	_removable = value;
}

Boolean UNIX_PhysicalMemory::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_PhysicalMemory::getReplaceable() const
{
	return _replaceable;
}

void UNIX_PhysicalMemory::setReplaceable(Boolean &value)
{
	_replaceable = value;
}

Boolean UNIX_PhysicalMemory::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_PhysicalMemory::getHotSwappable() const
{
	return _hotSwappable;
}

void UNIX_PhysicalMemory::setHotSwappable(Boolean &value)
{
	_hotSwappable = value;
}

Boolean UNIX_PhysicalMemory::getFormFactor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORM_FACTOR, getFormFactor());
	return true;
}

Uint16 UNIX_PhysicalMemory::getFormFactor() const
{
	return _formFactor;
}

void UNIX_PhysicalMemory::setFormFactor(Uint16 &value)
{
	_formFactor = value;
}

Boolean UNIX_PhysicalMemory::getMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_TYPE, getMemoryType());
	return true;
}

Uint16 UNIX_PhysicalMemory::getMemoryType() const
{
	return _memoryType;
}

void UNIX_PhysicalMemory::setMemoryType(Uint16 &value)
{
	_memoryType = value;
}

Boolean UNIX_PhysicalMemory::getTotalWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_WIDTH, getTotalWidth());
	return true;
}

Uint16 UNIX_PhysicalMemory::getTotalWidth() const
{
	return _totalWidth;
}

void UNIX_PhysicalMemory::setTotalWidth(Uint16 &value)
{
	_totalWidth = value;
}

Boolean UNIX_PhysicalMemory::getDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_WIDTH, getDataWidth());
	return true;
}

Uint16 UNIX_PhysicalMemory::getDataWidth() const
{
	return _dataWidth;
}

void UNIX_PhysicalMemory::setDataWidth(Uint16 &value)
{
	_dataWidth = value;
}

Boolean UNIX_PhysicalMemory::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint32 UNIX_PhysicalMemory::getSpeed() const
{
	return _speed;
}

void UNIX_PhysicalMemory::setSpeed(Uint32 &value)
{
	_speed = value;
}

Boolean UNIX_PhysicalMemory::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_PhysicalMemory::getCapacity() const
{
	return _capacity;
}

void UNIX_PhysicalMemory::setCapacity(Uint64 &value)
{
	_capacity = value;
}

Boolean UNIX_PhysicalMemory::getBankLabel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANK_LABEL, getBankLabel());
	return true;
}

String UNIX_PhysicalMemory::getBankLabel() const
{
	return _bankLabel;
}

void UNIX_PhysicalMemory::setBankLabel(String &value)
{
	_bankLabel = value;
}

Boolean UNIX_PhysicalMemory::getPositionInRow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSITION_IN_ROW, getPositionInRow());
	return true;
}

Uint32 UNIX_PhysicalMemory::getPositionInRow() const
{
	return _positionInRow;
}

void UNIX_PhysicalMemory::setPositionInRow(Uint32 &value)
{
	_positionInRow = value;
}

Boolean UNIX_PhysicalMemory::getInterleavePosition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERLEAVE_POSITION, getInterleavePosition());
	return true;
}

Uint32 UNIX_PhysicalMemory::getInterleavePosition() const
{
	return _interleavePosition;
}

void UNIX_PhysicalMemory::setInterleavePosition(Uint32 &value)
{
	_interleavePosition = value;
}

Boolean UNIX_PhysicalMemory::getIsSpeedInMhz(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SPEED_IN_MHZ, getIsSpeedInMhz());
	return true;
}

Boolean UNIX_PhysicalMemory::getIsSpeedInMhz() const
{
	return _isSpeedInMhz;
}

void UNIX_PhysicalMemory::setIsSpeedInMhz(Boolean &value)
{
	_isSpeedInMhz = value;
}

Boolean UNIX_PhysicalMemory::getMaxMemorySpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEMORY_SPEED, getMaxMemorySpeed());
	return true;
}

Uint32 UNIX_PhysicalMemory::getMaxMemorySpeed() const
{
	return _maxMemorySpeed;
}

void UNIX_PhysicalMemory::setMaxMemorySpeed(Uint32 &value)
{
	_maxMemorySpeed = value;
}

Boolean UNIX_PhysicalMemory::getConfiguredMemoryClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURED_MEMORY_CLOCK_SPEED, getConfiguredMemoryClockSpeed());
	return true;
}

Uint32 UNIX_PhysicalMemory::getConfiguredMemoryClockSpeed() const
{
	return _configuredMemoryClockSpeed;
}

void UNIX_PhysicalMemory::setConfiguredMemoryClockSpeed(Uint32 &value)
{
	_configuredMemoryClockSpeed = value;
}


void UNIX_PhysicalMemory::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalMemory");
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
	_creationClassName = String("UNIX_PhysicalMemory");
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
	_formFactor = Uint16(0);
	_memoryType = Uint16(0);
	_totalWidth = Uint16(0);
	_dataWidth = Uint16(0);
	_speed = Uint32(0);
	_capacity = Uint64(0);
	_bankLabel = String ("");
	_positionInRow = Uint32(0);
	_interleavePosition = Uint32(0);
	_isSpeedInMhz = Boolean(false);
	_maxMemorySpeed = Uint32(0);
	_configuredMemoryClockSpeed = Uint32(0);

}

Boolean UNIX_PhysicalMemory::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FormFactor"))
			{
				Uint16 formFactorValue;
				property.getValue().get(formFactorValue);
				setFormFactor(formFactorValue);
			}
			else if (String::equal(property.getName().getString(), "MemoryType"))
			{
				Uint16 memoryTypeValue;
				property.getValue().get(memoryTypeValue);
				setMemoryType(memoryTypeValue);
			}
			else if (String::equal(property.getName().getString(), "TotalWidth"))
			{
				Uint16 totalWidthValue;
				property.getValue().get(totalWidthValue);
				setTotalWidth(totalWidthValue);
			}
			else if (String::equal(property.getName().getString(), "DataWidth"))
			{
				Uint16 dataWidthValue;
				property.getValue().get(dataWidthValue);
				setDataWidth(dataWidthValue);
			}
			else if (String::equal(property.getName().getString(), "Speed"))
			{
				Uint32 speedValue;
				property.getValue().get(speedValue);
				setSpeed(speedValue);
			}
			else if (String::equal(property.getName().getString(), "Capacity"))
			{
				Uint64 capacityValue;
				property.getValue().get(capacityValue);
				setCapacity(capacityValue);
			}
			else if (String::equal(property.getName().getString(), "BankLabel"))
			{
				String bankLabelValue;
				property.getValue().get(bankLabelValue);
				setBankLabel(bankLabelValue);
			}
			else if (String::equal(property.getName().getString(), "PositionInRow"))
			{
				Uint32 positionInRowValue;
				property.getValue().get(positionInRowValue);
				setPositionInRow(positionInRowValue);
			}
			else if (String::equal(property.getName().getString(), "InterleavePosition"))
			{
				Uint32 interleavePositionValue;
				property.getValue().get(interleavePositionValue);
				setInterleavePosition(interleavePositionValue);
			}
			else if (String::equal(property.getName().getString(), "IsSpeedInMhz"))
			{
				Boolean isSpeedInMhzValue;
				property.getValue().get(isSpeedInMhzValue);
				setIsSpeedInMhz(isSpeedInMhzValue);
			}
			else if (String::equal(property.getName().getString(), "MaxMemorySpeed"))
			{
				Uint32 maxMemorySpeedValue;
				property.getValue().get(maxMemorySpeedValue);
				setMaxMemorySpeed(maxMemorySpeedValue);
			}
			else if (String::equal(property.getName().getString(), "ConfiguredMemoryClockSpeed"))
			{
				Uint32 configuredMemoryClockSpeedValue;
				property.getValue().get(configuredMemoryClockSpeedValue);
				setConfiguredMemoryClockSpeed(configuredMemoryClockSpeedValue);
			}
	}
	return true;
}


Boolean UNIX_PhysicalMemory::initialize()
{
	return false;
}

Boolean UNIX_PhysicalMemory::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalMemory");
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
	_creationClassName = String("UNIX_PhysicalMemory");
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
	_formFactor = Uint16(0);
	_memoryType = Uint16(0);
	_totalWidth = Uint16(0);
	_dataWidth = Uint16(0);
	_speed = Uint32(0);
	_capacity = Uint64(0);
	_bankLabel = String ("");
	_positionInRow = Uint32(0);
	_interleavePosition = Uint32(0);
	_isSpeedInMhz = Boolean(false);
	_maxMemorySpeed = Uint32(0);
	_configuredMemoryClockSpeed = Uint32(0);
	
	return false;
}

Boolean UNIX_PhysicalMemory::finalize()
{
	return false;
}

Boolean UNIX_PhysicalMemory::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PhysicalMemory::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PhysicalMemory::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMemory::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMemory::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMemory::validateInstance()
{
	return true;
}

