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


UNIX_StorageMediaLocation::UNIX_StorageMediaLocation(void)
{
}

UNIX_StorageMediaLocation::~UNIX_StorageMediaLocation(void)
{
}

Boolean UNIX_StorageMediaLocation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageMediaLocation::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageMediaLocation::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageMediaLocation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageMediaLocation::getCaption() const
{
	return _caption;
}

void UNIX_StorageMediaLocation::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageMediaLocation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageMediaLocation::getDescription() const
{
	return _description;
}

void UNIX_StorageMediaLocation::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageMediaLocation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageMediaLocation::getElementName() const
{
	return _elementName;
}

void UNIX_StorageMediaLocation::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageMediaLocation::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageMediaLocation::getGeneration() const
{
	return _generation;
}

void UNIX_StorageMediaLocation::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageMediaLocation::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StorageMediaLocation::getInstallDate() const
{
	return _installDate;
}

void UNIX_StorageMediaLocation::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_StorageMediaLocation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StorageMediaLocation::getName() const
{
	return _name;
}

void UNIX_StorageMediaLocation::setName(String &value)
{
	_name = value;
}

Boolean UNIX_StorageMediaLocation::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StorageMediaLocation::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_StorageMediaLocation::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_StorageMediaLocation::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StorageMediaLocation::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_StorageMediaLocation::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_StorageMediaLocation::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StorageMediaLocation::getStatus() const
{
	return _status;
}

void UNIX_StorageMediaLocation::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_StorageMediaLocation::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getHealthState() const
{
	return _healthState;
}

void UNIX_StorageMediaLocation::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_StorageMediaLocation::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_StorageMediaLocation::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_StorageMediaLocation::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_StorageMediaLocation::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_StorageMediaLocation::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_StorageMediaLocation::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_StorageMediaLocation::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_StorageMediaLocation::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_StorageMediaLocation::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_StorageMediaLocation::getTag() const
{
	return _tag;
}

void UNIX_StorageMediaLocation::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_StorageMediaLocation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_StorageMediaLocation::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_StorageMediaLocation::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_StorageMediaLocation::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_StorageMediaLocation::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_StorageMediaLocation::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_StorageMediaLocation::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_StorageMediaLocation::getModel() const
{
	return _model;
}

void UNIX_StorageMediaLocation::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_StorageMediaLocation::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_StorageMediaLocation::getSKU() const
{
	return _sKU;
}

void UNIX_StorageMediaLocation::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_StorageMediaLocation::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_StorageMediaLocation::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_StorageMediaLocation::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_StorageMediaLocation::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_StorageMediaLocation::getVersion() const
{
	return _version;
}

void UNIX_StorageMediaLocation::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_StorageMediaLocation::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_StorageMediaLocation::getPartNumber() const
{
	return _partNumber;
}

void UNIX_StorageMediaLocation::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_StorageMediaLocation::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_StorageMediaLocation::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_StorageMediaLocation::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_StorageMediaLocation::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_StorageMediaLocation::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_StorageMediaLocation::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_StorageMediaLocation::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_StorageMediaLocation::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_StorageMediaLocation::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_StorageMediaLocation::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_StorageMediaLocation::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_StorageMediaLocation::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_StorageMediaLocation::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_StorageMediaLocation::getUserTracking() const
{
	return _userTracking;
}

void UNIX_StorageMediaLocation::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_StorageMediaLocation::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_StorageMediaLocation::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_StorageMediaLocation::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_StorageMediaLocation::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getRemovalConditions() const
{
	return _removalConditions;
}

void UNIX_StorageMediaLocation::setRemovalConditions(Uint16 &value)
{
	_removalConditions = value;
}

Boolean UNIX_StorageMediaLocation::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_StorageMediaLocation::getRemovable() const
{
	return _removable;
}

void UNIX_StorageMediaLocation::setRemovable(Boolean &value)
{
	_removable = value;
}

Boolean UNIX_StorageMediaLocation::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_StorageMediaLocation::getReplaceable() const
{
	return _replaceable;
}

void UNIX_StorageMediaLocation::setReplaceable(Boolean &value)
{
	_replaceable = value;
}

Boolean UNIX_StorageMediaLocation::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_StorageMediaLocation::getHotSwappable() const
{
	return _hotSwappable;
}

void UNIX_StorageMediaLocation::setHotSwappable(Boolean &value)
{
	_hotSwappable = value;
}

Boolean UNIX_StorageMediaLocation::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_StorageMediaLocation::getHeight() const
{
	return _height;
}

void UNIX_StorageMediaLocation::setHeight(Real32 &value)
{
	_height = value;
}

Boolean UNIX_StorageMediaLocation::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_StorageMediaLocation::getDepth() const
{
	return _depth;
}

void UNIX_StorageMediaLocation::setDepth(Real32 &value)
{
	_depth = value;
}

Boolean UNIX_StorageMediaLocation::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_StorageMediaLocation::getWidth() const
{
	return _width;
}

void UNIX_StorageMediaLocation::setWidth(Real32 &value)
{
	_width = value;
}

Boolean UNIX_StorageMediaLocation::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_StorageMediaLocation::getWeight() const
{
	return _weight;
}

void UNIX_StorageMediaLocation::setWeight(Real32 &value)
{
	_weight = value;
}

Boolean UNIX_StorageMediaLocation::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getPackageType() const
{
	return _packageType;
}

void UNIX_StorageMediaLocation::setPackageType(Uint16 &value)
{
	_packageType = value;
}

Boolean UNIX_StorageMediaLocation::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_StorageMediaLocation::getOtherPackageType() const
{
	return _otherPackageType;
}

void UNIX_StorageMediaLocation::setOtherPackageType(String &value)
{
	_otherPackageType = value;
}

Boolean UNIX_StorageMediaLocation::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_StorageMediaLocation::getVendorCompatibilityStrings() const
{
	return _vendorCompatibilityStrings;
}

void UNIX_StorageMediaLocation::setVendorCompatibilityStrings(Array<String> &value)
{
	_vendorCompatibilityStrings = value;
}

Boolean UNIX_StorageMediaLocation::getLocationCoordinates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_COORDINATES, getLocationCoordinates());
	return true;
}

String UNIX_StorageMediaLocation::getLocationCoordinates() const
{
	return _locationCoordinates;
}

void UNIX_StorageMediaLocation::setLocationCoordinates(String &value)
{
	_locationCoordinates = value;
}

Boolean UNIX_StorageMediaLocation::getLocationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_TYPE, getLocationType());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getLocationType() const
{
	return _locationType;
}

void UNIX_StorageMediaLocation::setLocationType(Uint16 &value)
{
	_locationType = value;
}

Boolean UNIX_StorageMediaLocation::getMediaTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPES_SUPPORTED, getMediaTypesSupported());
	return true;
}

Array<Uint16> UNIX_StorageMediaLocation::getMediaTypesSupported() const
{
	return _mediaTypesSupported;
}

void UNIX_StorageMediaLocation::setMediaTypesSupported(Array<Uint16> &value)
{
	_mediaTypesSupported = value;
}

Boolean UNIX_StorageMediaLocation::getMediaSizesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZES_SUPPORTED, getMediaSizesSupported());
	return true;
}

Array<Real32> UNIX_StorageMediaLocation::getMediaSizesSupported() const
{
	return _mediaSizesSupported;
}

void UNIX_StorageMediaLocation::setMediaSizesSupported(Array<Real32> &value)
{
	_mediaSizesSupported = value;
}

Boolean UNIX_StorageMediaLocation::getMediaCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_CAPACITY, getMediaCapacity());
	return true;
}

Uint32 UNIX_StorageMediaLocation::getMediaCapacity() const
{
	return _mediaCapacity;
}

void UNIX_StorageMediaLocation::setMediaCapacity(Uint32 &value)
{
	_mediaCapacity = value;
}

Boolean UNIX_StorageMediaLocation::getTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_DESCRIPTIONS, getTypeDescriptions());
	return true;
}

Array<String> UNIX_StorageMediaLocation::getTypeDescriptions() const
{
	return _typeDescriptions;
}

void UNIX_StorageMediaLocation::setTypeDescriptions(Array<String> &value)
{
	_typeDescriptions = value;
}


void UNIX_StorageMediaLocation::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageMediaLocation");
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
	_creationClassName = String("UNIX_StorageMediaLocation");
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
	_locationCoordinates = String ("");
	_locationType = Uint16(0);
	_mediaTypesSupported.clear();
	_mediaSizesSupported.clear();
	_mediaCapacity = Uint32(0);
	_typeDescriptions.clear();

}

Boolean UNIX_StorageMediaLocation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LocationCoordinates"))
			{
				String locationCoordinatesValue;
				property.getValue().get(locationCoordinatesValue);
				setLocationCoordinates(locationCoordinatesValue);
			}
			else if (String::equal(property.getName().getString(), "LocationType"))
			{
				Uint16 locationTypeValue;
				property.getValue().get(locationTypeValue);
				setLocationType(locationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "MediaTypesSupported"))
			{
				Array<Uint16> mediaTypesSupportedValue;
				property.getValue().get(mediaTypesSupportedValue);
				setMediaTypesSupported(mediaTypesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MediaSizesSupported"))
			{
				Array<Real32> mediaSizesSupportedValue;
				property.getValue().get(mediaSizesSupportedValue);
				setMediaSizesSupported(mediaSizesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MediaCapacity"))
			{
				Uint32 mediaCapacityValue;
				property.getValue().get(mediaCapacityValue);
				setMediaCapacity(mediaCapacityValue);
			}
			else if (String::equal(property.getName().getString(), "TypeDescriptions"))
			{
				Array<String> typeDescriptionsValue;
				property.getValue().get(typeDescriptionsValue);
				setTypeDescriptions(typeDescriptionsValue);
			}
	}
	return true;
}

Uint32 UNIX_StorageMediaLocation::invokeIsCompatible(
		CIMInstance &inElementToCheck
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method IsCompatible */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageMediaLocation::initialize()
{
	return false;
}

Boolean UNIX_StorageMediaLocation::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageMediaLocation");
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
	_creationClassName = String("UNIX_StorageMediaLocation");
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
	_locationCoordinates = String ("");
	_locationType = Uint16(0);
	_mediaTypesSupported.clear();
	_mediaSizesSupported.clear();
	_mediaCapacity = Uint32(0);
	_typeDescriptions.clear();
	
	return false;
}

Boolean UNIX_StorageMediaLocation::finalize()
{
	return false;
}

Boolean UNIX_StorageMediaLocation::loadByName(const String name)
{
	return false;
}

Boolean UNIX_StorageMediaLocation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageMediaLocation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageMediaLocation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageMediaLocation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageMediaLocation::validateInstance()
{
	return true;
}

