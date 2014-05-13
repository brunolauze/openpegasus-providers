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


UNIX_Chassis::UNIX_Chassis(void)
{
}

UNIX_Chassis::~UNIX_Chassis(void)
{
}

Boolean UNIX_Chassis::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Chassis::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Chassis::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Chassis::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Chassis::getCaption() const
{
	return _caption;
}

void UNIX_Chassis::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Chassis::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Chassis::getDescription() const
{
	return _description;
}

void UNIX_Chassis::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Chassis::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Chassis::getElementName() const
{
	return _elementName;
}

void UNIX_Chassis::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Chassis::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Chassis::getGeneration() const
{
	return _generation;
}

void UNIX_Chassis::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Chassis::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Chassis::getInstallDate() const
{
	return _installDate;
}

void UNIX_Chassis::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Chassis::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Chassis::getName() const
{
	return _name;
}

void UNIX_Chassis::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Chassis::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Chassis::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Chassis::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Chassis::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Chassis::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Chassis::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Chassis::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Chassis::getStatus() const
{
	return _status;
}

void UNIX_Chassis::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Chassis::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Chassis::getHealthState() const
{
	return _healthState;
}

void UNIX_Chassis::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Chassis::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Chassis::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Chassis::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Chassis::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Chassis::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Chassis::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Chassis::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Chassis::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Chassis::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Chassis::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Chassis::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Chassis::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Chassis::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Chassis::getTag() const
{
	return _tag;
}

void UNIX_Chassis::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_Chassis::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Chassis::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Chassis::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Chassis::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Chassis::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_Chassis::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_Chassis::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Chassis::getModel() const
{
	return _model;
}

void UNIX_Chassis::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_Chassis::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Chassis::getSKU() const
{
	return _sKU;
}

void UNIX_Chassis::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_Chassis::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Chassis::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_Chassis::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_Chassis::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Chassis::getVersion() const
{
	return _version;
}

void UNIX_Chassis::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_Chassis::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Chassis::getPartNumber() const
{
	return _partNumber;
}

void UNIX_Chassis::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_Chassis::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Chassis::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_Chassis::setOtherIdentifyingInfo(String &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_Chassis::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Chassis::getPoweredOn() const
{
	return _poweredOn;
}

void UNIX_Chassis::setPoweredOn(Boolean &value)
{
	_poweredOn = value;
}

Boolean UNIX_Chassis::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Chassis::getManufactureDate() const
{
	return _manufactureDate;
}

void UNIX_Chassis::setManufactureDate(CIMDateTime &value)
{
	_manufactureDate = value;
}

Boolean UNIX_Chassis::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Chassis::getVendorEquipmentType() const
{
	return _vendorEquipmentType;
}

void UNIX_Chassis::setVendorEquipmentType(String &value)
{
	_vendorEquipmentType = value;
}

Boolean UNIX_Chassis::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Chassis::getUserTracking() const
{
	return _userTracking;
}

void UNIX_Chassis::setUserTracking(String &value)
{
	_userTracking = value;
}

Boolean UNIX_Chassis::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Chassis::getCanBeFRUed() const
{
	return _canBeFRUed;
}

void UNIX_Chassis::setCanBeFRUed(Boolean &value)
{
	_canBeFRUed = value;
}

Boolean UNIX_Chassis::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_Chassis::getRemovalConditions() const
{
	return _removalConditions;
}

void UNIX_Chassis::setRemovalConditions(Uint16 &value)
{
	_removalConditions = value;
}

Boolean UNIX_Chassis::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_Chassis::getRemovable() const
{
	return _removable;
}

void UNIX_Chassis::setRemovable(Boolean &value)
{
	_removable = value;
}

Boolean UNIX_Chassis::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_Chassis::getReplaceable() const
{
	return _replaceable;
}

void UNIX_Chassis::setReplaceable(Boolean &value)
{
	_replaceable = value;
}

Boolean UNIX_Chassis::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_Chassis::getHotSwappable() const
{
	return _hotSwappable;
}

void UNIX_Chassis::setHotSwappable(Boolean &value)
{
	_hotSwappable = value;
}

Boolean UNIX_Chassis::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_Chassis::getHeight() const
{
	return _height;
}

void UNIX_Chassis::setHeight(Real32 &value)
{
	_height = value;
}

Boolean UNIX_Chassis::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_Chassis::getDepth() const
{
	return _depth;
}

void UNIX_Chassis::setDepth(Real32 &value)
{
	_depth = value;
}

Boolean UNIX_Chassis::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_Chassis::getWidth() const
{
	return _width;
}

void UNIX_Chassis::setWidth(Real32 &value)
{
	_width = value;
}

Boolean UNIX_Chassis::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_Chassis::getWeight() const
{
	return _weight;
}

void UNIX_Chassis::setWeight(Real32 &value)
{
	_weight = value;
}

Boolean UNIX_Chassis::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_Chassis::getPackageType() const
{
	return _packageType;
}

void UNIX_Chassis::setPackageType(Uint16 &value)
{
	_packageType = value;
}

Boolean UNIX_Chassis::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_Chassis::getOtherPackageType() const
{
	return _otherPackageType;
}

void UNIX_Chassis::setOtherPackageType(String &value)
{
	_otherPackageType = value;
}

Boolean UNIX_Chassis::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_Chassis::getVendorCompatibilityStrings() const
{
	return _vendorCompatibilityStrings;
}

void UNIX_Chassis::setVendorCompatibilityStrings(Array<String> &value)
{
	_vendorCompatibilityStrings = value;
}

Boolean UNIX_Chassis::getCableManagementStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CABLE_MANAGEMENT_STRATEGY, getCableManagementStrategy());
	return true;
}

String UNIX_Chassis::getCableManagementStrategy() const
{
	return _cableManagementStrategy;
}

void UNIX_Chassis::setCableManagementStrategy(String &value)
{
	_cableManagementStrategy = value;
}

Boolean UNIX_Chassis::getServicePhilosophy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_PHILOSOPHY, getServicePhilosophy());
	return true;
}

Array<Uint16> UNIX_Chassis::getServicePhilosophy() const
{
	return _servicePhilosophy;
}

void UNIX_Chassis::setServicePhilosophy(Array<Uint16> &value)
{
	_servicePhilosophy = value;
}

Boolean UNIX_Chassis::getServiceDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_DESCRIPTIONS, getServiceDescriptions());
	return true;
}

Array<String> UNIX_Chassis::getServiceDescriptions() const
{
	return _serviceDescriptions;
}

void UNIX_Chassis::setServiceDescriptions(Array<String> &value)
{
	_serviceDescriptions = value;
}

Boolean UNIX_Chassis::getLockPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCK_PRESENT, getLockPresent());
	return true;
}

Boolean UNIX_Chassis::getLockPresent() const
{
	return _lockPresent;
}

void UNIX_Chassis::setLockPresent(Boolean &value)
{
	_lockPresent = value;
}

Boolean UNIX_Chassis::getAudibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIBLE_ALARM, getAudibleAlarm());
	return true;
}

Boolean UNIX_Chassis::getAudibleAlarm() const
{
	return _audibleAlarm;
}

void UNIX_Chassis::setAudibleAlarm(Boolean &value)
{
	_audibleAlarm = value;
}

Boolean UNIX_Chassis::getVisibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VISIBLE_ALARM, getVisibleAlarm());
	return true;
}

Boolean UNIX_Chassis::getVisibleAlarm() const
{
	return _visibleAlarm;
}

void UNIX_Chassis::setVisibleAlarm(Boolean &value)
{
	_visibleAlarm = value;
}

Boolean UNIX_Chassis::getSecurityBreach(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_BREACH, getSecurityBreach());
	return true;
}

Uint16 UNIX_Chassis::getSecurityBreach() const
{
	return _securityBreach;
}

void UNIX_Chassis::setSecurityBreach(Uint16 &value)
{
	_securityBreach = value;
}

Boolean UNIX_Chassis::getBreachDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREACH_DESCRIPTION, getBreachDescription());
	return true;
}

String UNIX_Chassis::getBreachDescription() const
{
	return _breachDescription;
}

void UNIX_Chassis::setBreachDescription(String &value)
{
	_breachDescription = value;
}

Boolean UNIX_Chassis::getIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LOCKED, getIsLocked());
	return true;
}

Boolean UNIX_Chassis::getIsLocked() const
{
	return _isLocked;
}

void UNIX_Chassis::setIsLocked(Boolean &value)
{
	_isLocked = value;
}

Boolean UNIX_Chassis::getNumberOfPowerCords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_POWER_CORDS, getNumberOfPowerCords());
	return true;
}

Uint16 UNIX_Chassis::getNumberOfPowerCords() const
{
	return _numberOfPowerCords;
}

void UNIX_Chassis::setNumberOfPowerCords(Uint16 &value)
{
	_numberOfPowerCords = value;
}

Boolean UNIX_Chassis::getCurrentRequiredOrProduced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_REQUIRED_OR_PRODUCED, getCurrentRequiredOrProduced());
	return true;
}

Sint16 UNIX_Chassis::getCurrentRequiredOrProduced() const
{
	return _currentRequiredOrProduced;
}

void UNIX_Chassis::setCurrentRequiredOrProduced(Sint16 &value)
{
	_currentRequiredOrProduced = value;
}

Boolean UNIX_Chassis::getHeatGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEAT_GENERATION, getHeatGeneration());
	return true;
}

Uint16 UNIX_Chassis::getHeatGeneration() const
{
	return _heatGeneration;
}

void UNIX_Chassis::setHeatGeneration(Uint16 &value)
{
	_heatGeneration = value;
}

Boolean UNIX_Chassis::getChassisTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHASSIS_TYPES, getChassisTypes());
	return true;
}

Array<Uint16> UNIX_Chassis::getChassisTypes() const
{
	return _chassisTypes;
}

void UNIX_Chassis::setChassisTypes(Array<Uint16> &value)
{
	_chassisTypes = value;
}

Boolean UNIX_Chassis::getTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_DESCRIPTIONS, getTypeDescriptions());
	return true;
}

Array<String> UNIX_Chassis::getTypeDescriptions() const
{
	return _typeDescriptions;
}

void UNIX_Chassis::setTypeDescriptions(Array<String> &value)
{
	_typeDescriptions = value;
}

Boolean UNIX_Chassis::getChassisPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHASSIS_PACKAGE_TYPE, getChassisPackageType());
	return true;
}

Uint16 UNIX_Chassis::getChassisPackageType() const
{
	return _chassisPackageType;
}

void UNIX_Chassis::setChassisPackageType(Uint16 &value)
{
	_chassisPackageType = value;
}

Boolean UNIX_Chassis::getChassisTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHASSIS_TYPE_DESCRIPTION, getChassisTypeDescription());
	return true;
}

String UNIX_Chassis::getChassisTypeDescription() const
{
	return _chassisTypeDescription;
}

void UNIX_Chassis::setChassisTypeDescription(String &value)
{
	_chassisTypeDescription = value;
}

Boolean UNIX_Chassis::getMultipleSystemSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_SYSTEM_SUPPORT, getMultipleSystemSupport());
	return true;
}

Uint16 UNIX_Chassis::getMultipleSystemSupport() const
{
	return _multipleSystemSupport;
}

void UNIX_Chassis::setMultipleSystemSupport(Uint16 &value)
{
	_multipleSystemSupport = value;
}

Boolean UNIX_Chassis::getRackMountable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RACK_MOUNTABLE, getRackMountable());
	return true;
}

Uint16 UNIX_Chassis::getRackMountable() const
{
	return _rackMountable;
}

void UNIX_Chassis::setRackMountable(Uint16 &value)
{
	_rackMountable = value;
}

Boolean UNIX_Chassis::getInputCurrentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_CURRENT_TYPE, getInputCurrentType());
	return true;
}

Uint16 UNIX_Chassis::getInputCurrentType() const
{
	return _inputCurrentType;
}

void UNIX_Chassis::setInputCurrentType(Uint16 &value)
{
	_inputCurrentType = value;
}

Boolean UNIX_Chassis::getOtherInputCurrentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INPUT_CURRENT_TYPE, getOtherInputCurrentType());
	return true;
}

String UNIX_Chassis::getOtherInputCurrentType() const
{
	return _otherInputCurrentType;
}

void UNIX_Chassis::setOtherInputCurrentType(String &value)
{
	_otherInputCurrentType = value;
}

Boolean UNIX_Chassis::getInputVoltage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_VOLTAGE, getInputVoltage());
	return true;
}

Sint32 UNIX_Chassis::getInputVoltage() const
{
	return _inputVoltage;
}

void UNIX_Chassis::setInputVoltage(Sint32 &value)
{
	_inputVoltage = value;
}


void UNIX_Chassis::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Chassis");
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
	_creationClassName = String("UNIX_Chassis");
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
	_numberOfPowerCords = Uint16(0);
	_currentRequiredOrProduced = Sint16(0);
	_heatGeneration = Uint16(0);
	_chassisTypes.clear();
	_typeDescriptions.clear();
	_chassisPackageType = Uint16(0);
	_chassisTypeDescription = String ("");
	_multipleSystemSupport = Uint16(0);
	_rackMountable = Uint16(0);
	_inputCurrentType = Uint16(0);
	_otherInputCurrentType = String ("");
	_inputVoltage = Sint32(0);

}

Boolean UNIX_Chassis::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NumberOfPowerCords"))
			{
				Uint16 numberOfPowerCordsValue;
				property.getValue().get(numberOfPowerCordsValue);
				setNumberOfPowerCords(numberOfPowerCordsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentRequiredOrProduced"))
			{
				Sint16 currentRequiredOrProducedValue;
				property.getValue().get(currentRequiredOrProducedValue);
				setCurrentRequiredOrProduced(currentRequiredOrProducedValue);
			}
			else if (String::equal(property.getName().getString(), "HeatGeneration"))
			{
				Uint16 heatGenerationValue;
				property.getValue().get(heatGenerationValue);
				setHeatGeneration(heatGenerationValue);
			}
			else if (String::equal(property.getName().getString(), "ChassisTypes"))
			{
				Array<Uint16> chassisTypesValue;
				property.getValue().get(chassisTypesValue);
				setChassisTypes(chassisTypesValue);
			}
			else if (String::equal(property.getName().getString(), "TypeDescriptions"))
			{
				Array<String> typeDescriptionsValue;
				property.getValue().get(typeDescriptionsValue);
				setTypeDescriptions(typeDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ChassisPackageType"))
			{
				Uint16 chassisPackageTypeValue;
				property.getValue().get(chassisPackageTypeValue);
				setChassisPackageType(chassisPackageTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ChassisTypeDescription"))
			{
				String chassisTypeDescriptionValue;
				property.getValue().get(chassisTypeDescriptionValue);
				setChassisTypeDescription(chassisTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleSystemSupport"))
			{
				Uint16 multipleSystemSupportValue;
				property.getValue().get(multipleSystemSupportValue);
				setMultipleSystemSupport(multipleSystemSupportValue);
			}
			else if (String::equal(property.getName().getString(), "RackMountable"))
			{
				Uint16 rackMountableValue;
				property.getValue().get(rackMountableValue);
				setRackMountable(rackMountableValue);
			}
			else if (String::equal(property.getName().getString(), "InputCurrentType"))
			{
				Uint16 inputCurrentTypeValue;
				property.getValue().get(inputCurrentTypeValue);
				setInputCurrentType(inputCurrentTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherInputCurrentType"))
			{
				String otherInputCurrentTypeValue;
				property.getValue().get(otherInputCurrentTypeValue);
				setOtherInputCurrentType(otherInputCurrentTypeValue);
			}
			else if (String::equal(property.getName().getString(), "InputVoltage"))
			{
				Sint32 inputVoltageValue;
				property.getValue().get(inputVoltageValue);
				setInputVoltage(inputVoltageValue);
			}
	}
	return true;
}

Uint32 UNIX_Chassis::invokeIsCompatible(
		CIMInstance &inElementToCheck
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method IsCompatible */
	
	
	
	return returnValue;
}


Boolean UNIX_Chassis::initialize()
{
	return false;
}

Boolean UNIX_Chassis::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Chassis");
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
	_creationClassName = String("UNIX_Chassis");
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
	_numberOfPowerCords = Uint16(0);
	_currentRequiredOrProduced = Sint16(0);
	_heatGeneration = Uint16(0);
	_chassisTypes.clear();
	_typeDescriptions.clear();
	_chassisPackageType = Uint16(0);
	_chassisTypeDescription = String ("");
	_multipleSystemSupport = Uint16(0);
	_rackMountable = Uint16(0);
	_inputCurrentType = Uint16(0);
	_otherInputCurrentType = String ("");
	_inputVoltage = Sint32(0);
	
	return false;
}

Boolean UNIX_Chassis::finalize()
{
	return false;
}

Boolean UNIX_Chassis::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Chassis::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Chassis::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Chassis::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Chassis::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Chassis::validateInstance()
{
	return true;
}

