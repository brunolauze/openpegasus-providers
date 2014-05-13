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


UNIX_PhysicalTape::UNIX_PhysicalTape(void)
{
}

UNIX_PhysicalTape::~UNIX_PhysicalTape(void)
{
}

Boolean UNIX_PhysicalTape::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalTape::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PhysicalTape::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PhysicalTape::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalTape::getCaption() const
{
	return _caption;
}

void UNIX_PhysicalTape::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PhysicalTape::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalTape::getDescription() const
{
	return _description;
}

void UNIX_PhysicalTape::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PhysicalTape::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalTape::getElementName() const
{
	return _elementName;
}

void UNIX_PhysicalTape::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PhysicalTape::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PhysicalTape::getGeneration() const
{
	return _generation;
}

void UNIX_PhysicalTape::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PhysicalTape::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalTape::getInstallDate() const
{
	return _installDate;
}

void UNIX_PhysicalTape::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PhysicalTape::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalTape::getName() const
{
	return _name;
}

void UNIX_PhysicalTape::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PhysicalTape::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalTape::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PhysicalTape::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PhysicalTape::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalTape::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PhysicalTape::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PhysicalTape::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalTape::getStatus() const
{
	return _status;
}

void UNIX_PhysicalTape::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PhysicalTape::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalTape::getHealthState() const
{
	return _healthState;
}

void UNIX_PhysicalTape::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PhysicalTape::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalTape::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PhysicalTape::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PhysicalTape::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalTape::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PhysicalTape::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PhysicalTape::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalTape::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PhysicalTape::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PhysicalTape::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalTape::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PhysicalTape::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PhysicalTape::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalTape::getTag() const
{
	return _tag;
}

void UNIX_PhysicalTape::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_PhysicalTape::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalTape::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_PhysicalTape::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_PhysicalTape::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalTape::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_PhysicalTape::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_PhysicalTape::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalTape::getModel() const
{
	return _model;
}

void UNIX_PhysicalTape::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_PhysicalTape::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalTape::getSKU() const
{
	return _sKU;
}

void UNIX_PhysicalTape::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_PhysicalTape::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalTape::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_PhysicalTape::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_PhysicalTape::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalTape::getVersion() const
{
	return _version;
}

void UNIX_PhysicalTape::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_PhysicalTape::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalTape::getPartNumber() const
{
	return _partNumber;
}

void UNIX_PhysicalTape::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_PhysicalTape::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalTape::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PhysicalTape::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PhysicalTape::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalTape::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_PhysicalTape::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_PhysicalTape::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalTape::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_PhysicalTape::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_PhysicalTape::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalTape::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_PhysicalTape::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_PhysicalTape::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalTape::getUserTracking() const
{
	return _userTracking;
}

void UNIX_PhysicalTape::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_PhysicalTape::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalTape::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_PhysicalTape::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_PhysicalTape::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_PhysicalTape::getRemovalConditions() const
{
	return _removalConditions;
}

void UNIX_PhysicalTape::setRemovalConditions(Uint16 &value)
{
	_removalConditions = value;
}

Boolean UNIX_PhysicalTape::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_PhysicalTape::getRemovable() const
{
	return _removable;
}

void UNIX_PhysicalTape::setRemovable(Boolean &value)
{
	_removable = value;
}

Boolean UNIX_PhysicalTape::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_PhysicalTape::getReplaceable() const
{
	return _replaceable;
}

void UNIX_PhysicalTape::setReplaceable(Boolean &value)
{
	_replaceable = value;
}

Boolean UNIX_PhysicalTape::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_PhysicalTape::getHotSwappable() const
{
	return _hotSwappable;
}

void UNIX_PhysicalTape::setHotSwappable(Boolean &value)
{
	_hotSwappable = value;
}

Boolean UNIX_PhysicalTape::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_PhysicalTape::getCapacity() const
{
	return _capacity;
}

void UNIX_PhysicalTape::setCapacity(Uint64 &value)
{
	_capacity = value;
}

Boolean UNIX_PhysicalTape::getMediaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPE, getMediaType());
	return true;
}

Uint16 UNIX_PhysicalTape::getMediaType() const
{
	return _mediaType;
}

void UNIX_PhysicalTape::setMediaType(Uint16 &value)
{
	_mediaType = value;
}

Boolean UNIX_PhysicalTape::getMediaDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_DESCRIPTION, getMediaDescription());
	return true;
}

String UNIX_PhysicalTape::getMediaDescription() const
{
	return _mediaDescription;
}

void UNIX_PhysicalTape::setMediaDescription(String &value)
{
	_mediaDescription = value;
}

Boolean UNIX_PhysicalTape::getWriteProtectOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_PROTECT_ON, getWriteProtectOn());
	return true;
}

Boolean UNIX_PhysicalTape::getWriteProtectOn() const
{
	return _writeProtectOn;
}

void UNIX_PhysicalTape::setWriteProtectOn(Boolean &value)
{
	_writeProtectOn = value;
}

Boolean UNIX_PhysicalTape::getCleanerMedia(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLEANER_MEDIA, getCleanerMedia());
	return true;
}

Boolean UNIX_PhysicalTape::getCleanerMedia() const
{
	return _cleanerMedia;
}

void UNIX_PhysicalTape::setCleanerMedia(Boolean &value)
{
	_cleanerMedia = value;
}

Boolean UNIX_PhysicalTape::getMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZE, getMediaSize());
	return true;
}

Real32 UNIX_PhysicalTape::getMediaSize() const
{
	return _mediaSize;
}

void UNIX_PhysicalTape::setMediaSize(Real32 &value)
{
	_mediaSize = value;
}

Boolean UNIX_PhysicalTape::getMaxMounts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MOUNTS, getMaxMounts());
	return true;
}

Uint64 UNIX_PhysicalTape::getMaxMounts() const
{
	return _maxMounts;
}

void UNIX_PhysicalTape::setMaxMounts(Uint64 &value)
{
	_maxMounts = value;
}

Boolean UNIX_PhysicalTape::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_PhysicalTape::getMountCount() const
{
	return _mountCount;
}

void UNIX_PhysicalTape::setMountCount(Uint64 &value)
{
	_mountCount = value;
}

Boolean UNIX_PhysicalTape::getDualSided(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUAL_SIDED, getDualSided());
	return true;
}

Boolean UNIX_PhysicalTape::getDualSided() const
{
	return _dualSided;
}

void UNIX_PhysicalTape::setDualSided(Boolean &value)
{
	_dualSided = value;
}

Boolean UNIX_PhysicalTape::getPhysicalLabels(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_LABELS, getPhysicalLabels());
	return true;
}

Array<String> UNIX_PhysicalTape::getPhysicalLabels() const
{
	return _physicalLabels;
}

void UNIX_PhysicalTape::setPhysicalLabels(Array<String> &value)
{
	_physicalLabels = value;
}

Boolean UNIX_PhysicalTape::getLabelStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_STATES, getLabelStates());
	return true;
}

Array<Uint16> UNIX_PhysicalTape::getLabelStates() const
{
	return _labelStates;
}

void UNIX_PhysicalTape::setLabelStates(Array<Uint16> &value)
{
	_labelStates = value;
}

Boolean UNIX_PhysicalTape::getLabelFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_FORMATS, getLabelFormats());
	return true;
}

Array<Uint16> UNIX_PhysicalTape::getLabelFormats() const
{
	return _labelFormats;
}

void UNIX_PhysicalTape::setLabelFormats(Array<Uint16> &value)
{
	_labelFormats = value;
}

Boolean UNIX_PhysicalTape::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_PhysicalTape::getTimeOfLastMount() const
{
	return _timeOfLastMount;
}

void UNIX_PhysicalTape::setTimeOfLastMount(CIMDateTime &value)
{
	_timeOfLastMount = value;
}

Boolean UNIX_PhysicalTape::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_PhysicalTape::getTotalMountTime() const
{
	return _totalMountTime;
}

void UNIX_PhysicalTape::setTotalMountTime(Uint64 &value)
{
	_totalMountTime = value;
}

Boolean UNIX_PhysicalTape::getTapeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAPE_LENGTH, getTapeLength());
	return true;
}

Real32 UNIX_PhysicalTape::getTapeLength() const
{
	return _tapeLength;
}

void UNIX_PhysicalTape::setTapeLength(Real32 &value)
{
	_tapeLength = value;
}

Boolean UNIX_PhysicalTape::getUnloadAnywhere(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_ANYWHERE, getUnloadAnywhere());
	return true;
}

Boolean UNIX_PhysicalTape::getUnloadAnywhere() const
{
	return _unloadAnywhere;
}

void UNIX_PhysicalTape::setUnloadAnywhere(Boolean &value)
{
	_unloadAnywhere = value;
}


void UNIX_PhysicalTape::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalTape");
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
	_creationClassName = String("UNIX_PhysicalTape");
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
	_tapeLength = Real32(0);
	_unloadAnywhere = Boolean(false);

}

Boolean UNIX_PhysicalTape::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TapeLength"))
			{
				Real32 tapeLengthValue;
				property.getValue().get(tapeLengthValue);
				setTapeLength(tapeLengthValue);
			}
			else if (String::equal(property.getName().getString(), "UnloadAnywhere"))
			{
				Boolean unloadAnywhereValue;
				property.getValue().get(unloadAnywhereValue);
				setUnloadAnywhere(unloadAnywhereValue);
			}
	}
	return true;
}


Boolean UNIX_PhysicalTape::initialize()
{
	return false;
}

Boolean UNIX_PhysicalTape::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalTape");
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
	_creationClassName = String("UNIX_PhysicalTape");
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
	_tapeLength = Real32(0);
	_unloadAnywhere = Boolean(false);
	
	return false;
}

Boolean UNIX_PhysicalTape::finalize()
{
	return false;
}

Boolean UNIX_PhysicalTape::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PhysicalTape::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PhysicalTape::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalTape::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalTape::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalTape::validateInstance()
{
	return true;
}

