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


UNIX_PhysicalMedia::UNIX_PhysicalMedia(void)
{
}

UNIX_PhysicalMedia::~UNIX_PhysicalMedia(void)
{
}

Boolean UNIX_PhysicalMedia::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalMedia::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PhysicalMedia::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PhysicalMedia::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalMedia::getCaption() const
{
	return _caption;
}

void UNIX_PhysicalMedia::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PhysicalMedia::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalMedia::getDescription() const
{
	return _description;
}

void UNIX_PhysicalMedia::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PhysicalMedia::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalMedia::getElementName() const
{
	return _elementName;
}

void UNIX_PhysicalMedia::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PhysicalMedia::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PhysicalMedia::getGeneration() const
{
	return _generation;
}

void UNIX_PhysicalMedia::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PhysicalMedia::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalMedia::getInstallDate() const
{
	return _installDate;
}

void UNIX_PhysicalMedia::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PhysicalMedia::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalMedia::getName() const
{
	return _name;
}

void UNIX_PhysicalMedia::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PhysicalMedia::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalMedia::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PhysicalMedia::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PhysicalMedia::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalMedia::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PhysicalMedia::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PhysicalMedia::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalMedia::getStatus() const
{
	return _status;
}

void UNIX_PhysicalMedia::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PhysicalMedia::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalMedia::getHealthState() const
{
	return _healthState;
}

void UNIX_PhysicalMedia::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PhysicalMedia::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalMedia::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PhysicalMedia::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PhysicalMedia::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalMedia::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PhysicalMedia::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PhysicalMedia::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalMedia::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PhysicalMedia::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PhysicalMedia::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalMedia::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PhysicalMedia::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PhysicalMedia::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalMedia::getTag() const
{
	return _tag;
}

void UNIX_PhysicalMedia::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_PhysicalMedia::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalMedia::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PhysicalMedia::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PhysicalMedia::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalMedia::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_PhysicalMedia::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_PhysicalMedia::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalMedia::getModel() const
{
	return _model;
}

void UNIX_PhysicalMedia::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_PhysicalMedia::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalMedia::getSKU() const
{
	return _sKU;
}

void UNIX_PhysicalMedia::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_PhysicalMedia::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalMedia::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_PhysicalMedia::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_PhysicalMedia::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalMedia::getVersion() const
{
	return _version;
}

void UNIX_PhysicalMedia::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_PhysicalMedia::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalMedia::getPartNumber() const
{
	return _partNumber;
}

void UNIX_PhysicalMedia::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_PhysicalMedia::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalMedia::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PhysicalMedia::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PhysicalMedia::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalMedia::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_PhysicalMedia::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_PhysicalMedia::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalMedia::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_PhysicalMedia::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_PhysicalMedia::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalMedia::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_PhysicalMedia::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_PhysicalMedia::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalMedia::getUserTracking() const
{
	return _userTracking;
}

void UNIX_PhysicalMedia::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_PhysicalMedia::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalMedia::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_PhysicalMedia::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_PhysicalMedia::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_PhysicalMedia::getRemovalConditions() const
{
	return _removalConditions;
}

void UNIX_PhysicalMedia::setRemovalConditions(Uint16 &value)
{
	_removalConditions = value;
}

Boolean UNIX_PhysicalMedia::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_PhysicalMedia::getRemovable() const
{
	return _removable;
}

void UNIX_PhysicalMedia::setRemovable(Boolean &value)
{
	_removable = value;
}

Boolean UNIX_PhysicalMedia::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_PhysicalMedia::getReplaceable() const
{
	return _replaceable;
}

void UNIX_PhysicalMedia::setReplaceable(Boolean &value)
{
	_replaceable = value;
}

Boolean UNIX_PhysicalMedia::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_PhysicalMedia::getHotSwappable() const
{
	return _hotSwappable;
}

void UNIX_PhysicalMedia::setHotSwappable(Boolean &value)
{
	_hotSwappable = value;
}

Boolean UNIX_PhysicalMedia::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_PhysicalMedia::getCapacity() const
{
	return _capacity;
}

void UNIX_PhysicalMedia::setCapacity(Uint64 &value)
{
	_capacity = value;
}

Boolean UNIX_PhysicalMedia::getMediaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPE, getMediaType());
	return true;
}

Uint16 UNIX_PhysicalMedia::getMediaType() const
{
	return _mediaType;
}

void UNIX_PhysicalMedia::setMediaType(Uint16 &value)
{
	_mediaType = value;
}

Boolean UNIX_PhysicalMedia::getMediaDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_DESCRIPTION, getMediaDescription());
	return true;
}

String UNIX_PhysicalMedia::getMediaDescription() const
{
	return _mediaDescription;
}

void UNIX_PhysicalMedia::setMediaDescription(String &value)
{
	_mediaDescription = value;
}

Boolean UNIX_PhysicalMedia::getWriteProtectOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_PROTECT_ON, getWriteProtectOn());
	return true;
}

Boolean UNIX_PhysicalMedia::getWriteProtectOn() const
{
	return _writeProtectOn;
}

void UNIX_PhysicalMedia::setWriteProtectOn(Boolean &value)
{
	_writeProtectOn = value;
}

Boolean UNIX_PhysicalMedia::getCleanerMedia(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLEANER_MEDIA, getCleanerMedia());
	return true;
}

Boolean UNIX_PhysicalMedia::getCleanerMedia() const
{
	return _cleanerMedia;
}

void UNIX_PhysicalMedia::setCleanerMedia(Boolean &value)
{
	_cleanerMedia = value;
}

Boolean UNIX_PhysicalMedia::getMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZE, getMediaSize());
	return true;
}

Real32 UNIX_PhysicalMedia::getMediaSize() const
{
	return _mediaSize;
}

void UNIX_PhysicalMedia::setMediaSize(Real32 &value)
{
	_mediaSize = value;
}

Boolean UNIX_PhysicalMedia::getMaxMounts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MOUNTS, getMaxMounts());
	return true;
}

Uint64 UNIX_PhysicalMedia::getMaxMounts() const
{
	return _maxMounts;
}

void UNIX_PhysicalMedia::setMaxMounts(Uint64 &value)
{
	_maxMounts = value;
}

Boolean UNIX_PhysicalMedia::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_PhysicalMedia::getMountCount() const
{
	return _mountCount;
}

void UNIX_PhysicalMedia::setMountCount(Uint64 &value)
{
	_mountCount = value;
}

Boolean UNIX_PhysicalMedia::getDualSided(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUAL_SIDED, getDualSided());
	return true;
}

Boolean UNIX_PhysicalMedia::getDualSided() const
{
	return _dualSided;
}

void UNIX_PhysicalMedia::setDualSided(Boolean &value)
{
	_dualSided = value;
}

Boolean UNIX_PhysicalMedia::getPhysicalLabels(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_LABELS, getPhysicalLabels());
	return true;
}

Array<String> UNIX_PhysicalMedia::getPhysicalLabels() const
{
	return _physicalLabels;
}

void UNIX_PhysicalMedia::setPhysicalLabels(Array<String> &value)
{
	_physicalLabels = value;
}

Boolean UNIX_PhysicalMedia::getLabelStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_STATES, getLabelStates());
	return true;
}

Array<Uint16> UNIX_PhysicalMedia::getLabelStates() const
{
	return _labelStates;
}

void UNIX_PhysicalMedia::setLabelStates(Array<Uint16> &value)
{
	_labelStates = value;
}

Boolean UNIX_PhysicalMedia::getLabelFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_FORMATS, getLabelFormats());
	return true;
}

Array<Uint16> UNIX_PhysicalMedia::getLabelFormats() const
{
	return _labelFormats;
}

void UNIX_PhysicalMedia::setLabelFormats(Array<Uint16> &value)
{
	_labelFormats = value;
}

Boolean UNIX_PhysicalMedia::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_PhysicalMedia::getTimeOfLastMount() const
{
	return _timeOfLastMount;
}

void UNIX_PhysicalMedia::setTimeOfLastMount(CIMDateTime &value)
{
	_timeOfLastMount = value;
}

Boolean UNIX_PhysicalMedia::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_PhysicalMedia::getTotalMountTime() const
{
	return _totalMountTime;
}

void UNIX_PhysicalMedia::setTotalMountTime(Uint64 &value)
{
	_totalMountTime = value;
}


void UNIX_PhysicalMedia::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalMedia");
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
	_creationClassName = String("UNIX_PhysicalMedia");
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
	_capacity = Uint64(0);
	_mediaType = Uint16(0);
	_mediaDescription = String ("");
	_writeProtectOn = Boolean(false);
	_cleanerMedia = Boolean(false);
	_mediaSize = Real32(0);
	_maxMounts = Uint64(0);
	_mountCount = Uint64(0);
	_dualSided = Boolean(false);
	_physicalLabels.clear();
	_labelStates.clear();
	_labelFormats.clear();
	_timeOfLastMount = CIMHelper::getCurrentTime();
	_totalMountTime = Uint64(0);

}

Boolean UNIX_PhysicalMedia::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Capacity"))
			{
				Uint64 capacityValue;
				property.getValue().get(capacityValue);
				setCapacity(capacityValue);
			}
			else if (String::equal(property.getName().getString(), "MediaType"))
			{
				Uint16 mediaTypeValue;
				property.getValue().get(mediaTypeValue);
				setMediaType(mediaTypeValue);
			}
			else if (String::equal(property.getName().getString(), "MediaDescription"))
			{
				String mediaDescriptionValue;
				property.getValue().get(mediaDescriptionValue);
				setMediaDescription(mediaDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "WriteProtectOn"))
			{
				Boolean writeProtectOnValue;
				property.getValue().get(writeProtectOnValue);
				setWriteProtectOn(writeProtectOnValue);
			}
			else if (String::equal(property.getName().getString(), "CleanerMedia"))
			{
				Boolean cleanerMediaValue;
				property.getValue().get(cleanerMediaValue);
				setCleanerMedia(cleanerMediaValue);
			}
			else if (String::equal(property.getName().getString(), "MediaSize"))
			{
				Real32 mediaSizeValue;
				property.getValue().get(mediaSizeValue);
				setMediaSize(mediaSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxMounts"))
			{
				Uint64 maxMountsValue;
				property.getValue().get(maxMountsValue);
				setMaxMounts(maxMountsValue);
			}
			else if (String::equal(property.getName().getString(), "MountCount"))
			{
				Uint64 mountCountValue;
				property.getValue().get(mountCountValue);
				setMountCount(mountCountValue);
			}
			else if (String::equal(property.getName().getString(), "DualSided"))
			{
				Boolean dualSidedValue;
				property.getValue().get(dualSidedValue);
				setDualSided(dualSidedValue);
			}
			else if (String::equal(property.getName().getString(), "PhysicalLabels"))
			{
				Array<String> physicalLabelsValue;
				property.getValue().get(physicalLabelsValue);
				setPhysicalLabels(physicalLabelsValue);
			}
			else if (String::equal(property.getName().getString(), "LabelStates"))
			{
				Array<Uint16> labelStatesValue;
				property.getValue().get(labelStatesValue);
				setLabelStates(labelStatesValue);
			}
			else if (String::equal(property.getName().getString(), "LabelFormats"))
			{
				Array<Uint16> labelFormatsValue;
				property.getValue().get(labelFormatsValue);
				setLabelFormats(labelFormatsValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastMount"))
			{
				CIMDateTime timeOfLastMountValue;
				property.getValue().get(timeOfLastMountValue);
				setTimeOfLastMount(timeOfLastMountValue);
			}
			else if (String::equal(property.getName().getString(), "TotalMountTime"))
			{
				Uint64 totalMountTimeValue;
				property.getValue().get(totalMountTimeValue);
				setTotalMountTime(totalMountTimeValue);
			}
	}
	return true;
}


Boolean UNIX_PhysicalMedia::initialize()
{
	return false;
}

Boolean UNIX_PhysicalMedia::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalMedia");
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
	_creationClassName = String("UNIX_PhysicalMedia");
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
	_capacity = Uint64(0);
	_mediaType = Uint16(0);
	_mediaDescription = String ("");
	_writeProtectOn = Boolean(false);
	_cleanerMedia = Boolean(false);
	_mediaSize = Real32(0);
	_maxMounts = Uint64(0);
	_mountCount = Uint64(0);
	_dualSided = Boolean(false);
	_physicalLabels.clear();
	_labelStates.clear();
	_labelFormats.clear();
	_timeOfLastMount = CIMHelper::getCurrentTime();
	_totalMountTime = Uint64(0);
	
	return false;
}

Boolean UNIX_PhysicalMedia::finalize()
{
	return false;
}

Boolean UNIX_PhysicalMedia::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PhysicalMedia::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PhysicalMedia::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMedia::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMedia::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMedia::validateInstance()
{
	return true;
}

