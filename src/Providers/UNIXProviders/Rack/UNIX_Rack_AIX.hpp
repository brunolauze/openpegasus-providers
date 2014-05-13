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


UNIX_Rack::UNIX_Rack(void)
{
}

UNIX_Rack::~UNIX_Rack(void)
{
}

Boolean UNIX_Rack::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Rack::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Rack::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Rack::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Rack::getCaption() const
{
	return _caption;
}

void UNIX_Rack::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Rack::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Rack::getDescription() const
{
	return _description;
}

void UNIX_Rack::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Rack::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Rack::getElementName() const
{
	return _elementName;
}

void UNIX_Rack::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Rack::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Rack::getGeneration() const
{
	return _generation;
}

void UNIX_Rack::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Rack::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Rack::getInstallDate() const
{
	return _installDate;
}

void UNIX_Rack::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Rack::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Rack::getName() const
{
	return _name;
}

void UNIX_Rack::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Rack::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Rack::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Rack::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Rack::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Rack::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Rack::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Rack::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Rack::getStatus() const
{
	return _status;
}

void UNIX_Rack::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Rack::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Rack::getHealthState() const
{
	return _healthState;
}

void UNIX_Rack::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Rack::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Rack::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Rack::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Rack::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Rack::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Rack::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Rack::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Rack::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Rack::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Rack::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Rack::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Rack::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Rack::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Rack::getTag() const
{
	return _tag;
}

void UNIX_Rack::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_Rack::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Rack::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Rack::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Rack::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Rack::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_Rack::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_Rack::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Rack::getModel() const
{
	return _model;
}

void UNIX_Rack::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_Rack::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Rack::getSKU() const
{
	return _sKU;
}

void UNIX_Rack::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_Rack::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Rack::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_Rack::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_Rack::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Rack::getVersion() const
{
	return _version;
}

void UNIX_Rack::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_Rack::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Rack::getPartNumber() const
{
	return _partNumber;
}

void UNIX_Rack::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_Rack::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Rack::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Rack::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Rack::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Rack::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_Rack::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_Rack::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Rack::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_Rack::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_Rack::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Rack::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_Rack::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_Rack::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Rack::getUserTracking() const
{
	return _userTracking;
}

void UNIX_Rack::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_Rack::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Rack::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_Rack::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_Rack::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_Rack::getRemovalConditions() const
{
	return _removalConditions;
}

void UNIX_Rack::setRemovalConditions(Uint16 &value)
{
	_removalConditions = value;
}

Boolean UNIX_Rack::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_Rack::getRemovable() const
{
	return _removable;
}

void UNIX_Rack::setRemovable(Boolean &value)
{
	_removable = value;
}

Boolean UNIX_Rack::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_Rack::getReplaceable() const
{
	return _replaceable;
}

void UNIX_Rack::setReplaceable(Boolean &value)
{
	_replaceable = value;
}

Boolean UNIX_Rack::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_Rack::getHotSwappable() const
{
	return _hotSwappable;
}

void UNIX_Rack::setHotSwappable(Boolean &value)
{
	_hotSwappable = value;
}

Boolean UNIX_Rack::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_Rack::getHeight() const
{
	return _height;
}

void UNIX_Rack::setHeight(Real32 &value)
{
	_height = value;
}

Boolean UNIX_Rack::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_Rack::getDepth() const
{
	return _depth;
}

void UNIX_Rack::setDepth(Real32 &value)
{
	_depth = value;
}

Boolean UNIX_Rack::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_Rack::getWidth() const
{
	return _width;
}

void UNIX_Rack::setWidth(Real32 &value)
{
	_width = value;
}

Boolean UNIX_Rack::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_Rack::getWeight() const
{
	return _weight;
}

void UNIX_Rack::setWeight(Real32 &value)
{
	_weight = value;
}

Boolean UNIX_Rack::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_Rack::getPackageType() const
{
	return _packageType;
}

void UNIX_Rack::setPackageType(Uint16 &value)
{
	_packageType = value;
}

Boolean UNIX_Rack::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_Rack::getOtherPackageType() const
{
	return _otherPackageType;
}

void UNIX_Rack::setOtherPackageType(String &value)
{
	_otherPackageType = value;
}

Boolean UNIX_Rack::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_Rack::getVendorCompatibilityStrings() const
{
	return _vendorCompatibilityStrings;
}

void UNIX_Rack::setVendorCompatibilityStrings(Array<String> &value)
{
	_vendorCompatibilityStrings = value;
}

Boolean UNIX_Rack::getCableManagementStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CABLE_MANAGEMENT_STRATEGY, getCableManagementStrategy());
	return true;
}

String UNIX_Rack::getCableManagementStrategy() const
{
	return _cableManagementStrategy;
}

void UNIX_Rack::setCableManagementStrategy(String &value)
{
	_cableManagementStrategy = value;
}

Boolean UNIX_Rack::getServicePhilosophy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_PHILOSOPHY, getServicePhilosophy());
	return true;
}

Array<Uint16> UNIX_Rack::getServicePhilosophy() const
{
	return _servicePhilosophy;
}

void UNIX_Rack::setServicePhilosophy(Array<Uint16> &value)
{
	_servicePhilosophy = value;
}

Boolean UNIX_Rack::getServiceDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_DESCRIPTIONS, getServiceDescriptions());
	return true;
}

Array<String> UNIX_Rack::getServiceDescriptions() const
{
	return _serviceDescriptions;
}

void UNIX_Rack::setServiceDescriptions(Array<String> &value)
{
	_serviceDescriptions = value;
}

Boolean UNIX_Rack::getLockPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCK_PRESENT, getLockPresent());
	return true;
}

Boolean UNIX_Rack::getLockPresent() const
{
	return _lockPresent;
}

void UNIX_Rack::setLockPresent(Boolean &value)
{
	_lockPresent = value;
}

Boolean UNIX_Rack::getAudibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIBLE_ALARM, getAudibleAlarm());
	return true;
}

Boolean UNIX_Rack::getAudibleAlarm() const
{
	return _audibleAlarm;
}

void UNIX_Rack::setAudibleAlarm(Boolean &value)
{
	_audibleAlarm = value;
}

Boolean UNIX_Rack::getVisibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VISIBLE_ALARM, getVisibleAlarm());
	return true;
}

Boolean UNIX_Rack::getVisibleAlarm() const
{
	return _visibleAlarm;
}

void UNIX_Rack::setVisibleAlarm(Boolean &value)
{
	_visibleAlarm = value;
}

Boolean UNIX_Rack::getSecurityBreach(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_BREACH, getSecurityBreach());
	return true;
}

Uint16 UNIX_Rack::getSecurityBreach() const
{
	return _securityBreach;
}

void UNIX_Rack::setSecurityBreach(Uint16 &value)
{
	_securityBreach = value;
}

Boolean UNIX_Rack::getBreachDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREACH_DESCRIPTION, getBreachDescription());
	return true;
}

String UNIX_Rack::getBreachDescription() const
{
	return _breachDescription;
}

void UNIX_Rack::setBreachDescription(String &value)
{
	_breachDescription = value;
}

Boolean UNIX_Rack::getIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LOCKED, getIsLocked());
	return true;
}

Boolean UNIX_Rack::getIsLocked() const
{
	return _isLocked;
}

void UNIX_Rack::setIsLocked(Boolean &value)
{
	_isLocked = value;
}

Boolean UNIX_Rack::getTypeOfRack(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_RACK, getTypeOfRack());
	return true;
}

Uint16 UNIX_Rack::getTypeOfRack() const
{
	return _typeOfRack;
}

void UNIX_Rack::setTypeOfRack(Uint16 &value)
{
	_typeOfRack = value;
}

Boolean UNIX_Rack::getCountryDesignation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRY_DESIGNATION, getCountryDesignation());
	return true;
}

String UNIX_Rack::getCountryDesignation() const
{
	return _countryDesignation;
}

void UNIX_Rack::setCountryDesignation(String &value)
{
	_countryDesignation = value;
}


void UNIX_Rack::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Rack");
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
	_creationClassName = String("UNIX_Rack");
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
	_cableManagementStrategy = String ("");
	_servicePhilosophy.clear();
	_serviceDescriptions.clear();
	_lockPresent = Boolean(false);
	_audibleAlarm = Boolean(false);
	_visibleAlarm = Boolean(false);
	_securityBreach = Uint16(0);
	_breachDescription = String ("");
	_isLocked = Boolean(false);
	_typeOfRack = Uint16(0);
	_countryDesignation = String ("");

}

Boolean UNIX_Rack::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CableManagementStrategy"))
			{
				String cableManagementStrategyValue;
				property.getValue().get(cableManagementStrategyValue);
				setCableManagementStrategy(cableManagementStrategyValue);
			}
			else if (String::equal(property.getName().getString(), "ServicePhilosophy"))
			{
				Array<Uint16> servicePhilosophyValue;
				property.getValue().get(servicePhilosophyValue);
				setServicePhilosophy(servicePhilosophyValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceDescriptions"))
			{
				Array<String> serviceDescriptionsValue;
				property.getValue().get(serviceDescriptionsValue);
				setServiceDescriptions(serviceDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "LockPresent"))
			{
				Boolean lockPresentValue;
				property.getValue().get(lockPresentValue);
				setLockPresent(lockPresentValue);
			}
			else if (String::equal(property.getName().getString(), "AudibleAlarm"))
			{
				Boolean audibleAlarmValue;
				property.getValue().get(audibleAlarmValue);
				setAudibleAlarm(audibleAlarmValue);
			}
			else if (String::equal(property.getName().getString(), "VisibleAlarm"))
			{
				Boolean visibleAlarmValue;
				property.getValue().get(visibleAlarmValue);
				setVisibleAlarm(visibleAlarmValue);
			}
			else if (String::equal(property.getName().getString(), "SecurityBreach"))
			{
				Uint16 securityBreachValue;
				property.getValue().get(securityBreachValue);
				setSecurityBreach(securityBreachValue);
			}
			else if (String::equal(property.getName().getString(), "BreachDescription"))
			{
				String breachDescriptionValue;
				property.getValue().get(breachDescriptionValue);
				setBreachDescription(breachDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "IsLocked"))
			{
				Boolean isLockedValue;
				property.getValue().get(isLockedValue);
				setIsLocked(isLockedValue);
			}
			else if (String::equal(property.getName().getString(), "TypeOfRack"))
			{
				Uint16 typeOfRackValue;
				property.getValue().get(typeOfRackValue);
				setTypeOfRack(typeOfRackValue);
			}
			else if (String::equal(property.getName().getString(), "CountryDesignation"))
			{
				String countryDesignationValue;
				property.getValue().get(countryDesignationValue);
				setCountryDesignation(countryDesignationValue);
			}
	}
	return true;
}

Uint32 UNIX_Rack::invokeIsCompatible(
		CIMInstance &inElementToCheck
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method IsCompatible */
	
	
	
	return returnValue;
}


Boolean UNIX_Rack::initialize()
{
	return false;
}

Boolean UNIX_Rack::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Rack");
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
	_creationClassName = String("UNIX_Rack");
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
	_cableManagementStrategy = String ("");
	_servicePhilosophy.clear();
	_serviceDescriptions.clear();
	_lockPresent = Boolean(false);
	_audibleAlarm = Boolean(false);
	_visibleAlarm = Boolean(false);
	_securityBreach = Uint16(0);
	_breachDescription = String ("");
	_isLocked = Boolean(false);
	_typeOfRack = Uint16(0);
	_countryDesignation = String ("");
	
	return false;
}

Boolean UNIX_Rack::finalize()
{
	return false;
}

Boolean UNIX_Rack::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Rack::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Rack::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Rack::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Rack::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Rack::validateInstance()
{
	return true;
}

