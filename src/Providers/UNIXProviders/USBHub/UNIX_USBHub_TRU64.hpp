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


UNIX_USBHub::UNIX_USBHub(void)
{
}

UNIX_USBHub::~UNIX_USBHub(void)
{
}

Boolean UNIX_USBHub::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_USBHub::getInstanceID() const
{
	return _instanceID;
}

void UNIX_USBHub::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_USBHub::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_USBHub::getCaption() const
{
	return _caption;
}

void UNIX_USBHub::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_USBHub::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_USBHub::getDescription() const
{
	return _description;
}

void UNIX_USBHub::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_USBHub::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_USBHub::getElementName() const
{
	return _elementName;
}

void UNIX_USBHub::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_USBHub::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_USBHub::getGeneration() const
{
	return _generation;
}

void UNIX_USBHub::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_USBHub::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_USBHub::getInstallDate() const
{
	return _installDate;
}

void UNIX_USBHub::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_USBHub::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_USBHub::getName() const
{
	return _name;
}

void UNIX_USBHub::setName(String &value)
{
	_name = value;
}

Boolean UNIX_USBHub::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_USBHub::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_USBHub::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_USBHub::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_USBHub::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_USBHub::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_USBHub::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_USBHub::getStatus() const
{
	return _status;
}

void UNIX_USBHub::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_USBHub::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_USBHub::getHealthState() const
{
	return _healthState;
}

void UNIX_USBHub::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_USBHub::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_USBHub::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_USBHub::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_USBHub::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_USBHub::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_USBHub::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_USBHub::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_USBHub::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_USBHub::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_USBHub::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_USBHub::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_USBHub::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_USBHub::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_USBHub::getEnabledState() const
{
	return _enabledState;
}

void UNIX_USBHub::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_USBHub::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_USBHub::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_USBHub::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_USBHub::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_USBHub::getRequestedState() const
{
	return _requestedState;
}

void UNIX_USBHub::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_USBHub::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_USBHub::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_USBHub::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_USBHub::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_USBHub::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_USBHub::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_USBHub::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_USBHub::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_USBHub::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_USBHub::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_USBHub::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_USBHub::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_USBHub::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_USBHub::getAllocationState() const
{
	return _allocationState;
}

void UNIX_USBHub::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_USBHub::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_USBHub::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_USBHub::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_USBHub::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_USBHub::getSystemName() const
{
	return _systemName;
}

void UNIX_USBHub::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_USBHub::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_USBHub::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_USBHub::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_USBHub::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_USBHub::getDeviceID() const
{
	return _deviceID;
}

void UNIX_USBHub::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_USBHub::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_USBHub::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_USBHub::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_USBHub::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_USBHub::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_USBHub::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_USBHub::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_USBHub::getAvailability() const
{
	return _availability;
}

void UNIX_USBHub::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_USBHub::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_USBHub::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_USBHub::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_USBHub::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_USBHub::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_USBHub::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_USBHub::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_USBHub::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_USBHub::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_USBHub::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_USBHub::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_USBHub::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_USBHub::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_USBHub::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_USBHub::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_USBHub::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_USBHub::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_USBHub::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_USBHub::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_USBHub::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_USBHub::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_USBHub::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_USBHub::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_USBHub::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_USBHub::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_USBHub::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_USBHub::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_USBHub::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_USBHub::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_USBHub::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_USBHub::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_USBHub::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_USBHub::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_USBHub::getUSBVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USB_VERSION, getUSBVersion());
	return true;
}

Uint16 UNIX_USBHub::getUSBVersion() const
{
	return _uSBVersion;
}

void UNIX_USBHub::setUSBVersion(Uint16 &value)
{
	_uSBVersion = value;
}

Boolean UNIX_USBHub::getClassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_CODE, getClassCode());
	return true;
}

Uint8 UNIX_USBHub::getClassCode() const
{
	return _classCode;
}

void UNIX_USBHub::setClassCode(Uint8 &value)
{
	_classCode = value;
}

Boolean UNIX_USBHub::getSubclassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBCLASS_CODE, getSubclassCode());
	return true;
}

Uint8 UNIX_USBHub::getSubclassCode() const
{
	return _subclassCode;
}

void UNIX_USBHub::setSubclassCode(Uint8 &value)
{
	_subclassCode = value;
}

Boolean UNIX_USBHub::getProtocolCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CODE, getProtocolCode());
	return true;
}

Uint8 UNIX_USBHub::getProtocolCode() const
{
	return _protocolCode;
}

void UNIX_USBHub::setProtocolCode(Uint8 &value)
{
	_protocolCode = value;
}

Boolean UNIX_USBHub::getUSBVersionInBCD(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USB_VERSION_IN_B_C_D, getUSBVersionInBCD());
	return true;
}

Uint16 UNIX_USBHub::getUSBVersionInBCD() const
{
	return _uSBVersionInBCD;
}

void UNIX_USBHub::setUSBVersionInBCD(Uint16 &value)
{
	_uSBVersionInBCD = value;
}

Boolean UNIX_USBHub::getMaxPacketSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PACKET_SIZE, getMaxPacketSize());
	return true;
}

Uint8 UNIX_USBHub::getMaxPacketSize() const
{
	return _maxPacketSize;
}

void UNIX_USBHub::setMaxPacketSize(Uint8 &value)
{
	_maxPacketSize = value;
}

Boolean UNIX_USBHub::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

Uint16 UNIX_USBHub::getVendorID() const
{
	return _vendorID;
}

void UNIX_USBHub::setVendorID(Uint16 &value)
{
	_vendorID = value;
}

Boolean UNIX_USBHub::getProductID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_ID, getProductID());
	return true;
}

Uint16 UNIX_USBHub::getProductID() const
{
	return _productID;
}

void UNIX_USBHub::setProductID(Uint16 &value)
{
	_productID = value;
}

Boolean UNIX_USBHub::getDeviceReleaseNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_RELEASE_NUMBER, getDeviceReleaseNumber());
	return true;
}

Uint16 UNIX_USBHub::getDeviceReleaseNumber() const
{
	return _deviceReleaseNumber;
}

void UNIX_USBHub::setDeviceReleaseNumber(Uint16 &value)
{
	_deviceReleaseNumber = value;
}

Boolean UNIX_USBHub::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_USBHub::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_USBHub::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_USBHub::getProduct(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT, getProduct());
	return true;
}

String UNIX_USBHub::getProduct() const
{
	return _product;
}

void UNIX_USBHub::setProduct(String &value)
{
	_product = value;
}

Boolean UNIX_USBHub::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_USBHub::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_USBHub::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_USBHub::getNumberOfConfigs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_CONFIGS, getNumberOfConfigs());
	return true;
}

Uint8 UNIX_USBHub::getNumberOfConfigs() const
{
	return _numberOfConfigs;
}

void UNIX_USBHub::setNumberOfConfigs(Uint8 &value)
{
	_numberOfConfigs = value;
}

Boolean UNIX_USBHub::getCurrentConfigValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CONFIG_VALUE, getCurrentConfigValue());
	return true;
}

Uint8 UNIX_USBHub::getCurrentConfigValue() const
{
	return _currentConfigValue;
}

void UNIX_USBHub::setCurrentConfigValue(Uint8 &value)
{
	_currentConfigValue = value;
}

Boolean UNIX_USBHub::getCurrentAlternateSettings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_ALTERNATE_SETTINGS, getCurrentAlternateSettings());
	return true;
}

Array<Uint8> UNIX_USBHub::getCurrentAlternateSettings() const
{
	return _currentAlternateSettings;
}

void UNIX_USBHub::setCurrentAlternateSettings(Array<Uint8> &value)
{
	_currentAlternateSettings = value;
}

Boolean UNIX_USBHub::getCommandTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_TIMEOUT, getCommandTimeout());
	return true;
}

CIMDateTime UNIX_USBHub::getCommandTimeout() const
{
	return _commandTimeout;
}

void UNIX_USBHub::setCommandTimeout(CIMDateTime &value)
{
	_commandTimeout = value;
}

Boolean UNIX_USBHub::getGangSwitched(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GANG_SWITCHED, getGangSwitched());
	return true;
}

Boolean UNIX_USBHub::getGangSwitched() const
{
	return _gangSwitched;
}

void UNIX_USBHub::setGangSwitched(Boolean &value)
{
	_gangSwitched = value;
}

Boolean UNIX_USBHub::getNumberOfPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PORTS, getNumberOfPorts());
	return true;
}

Uint8 UNIX_USBHub::getNumberOfPorts() const
{
	return _numberOfPorts;
}

void UNIX_USBHub::setNumberOfPorts(Uint8 &value)
{
	_numberOfPorts = value;
}


void UNIX_USBHub::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("USBHub");
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
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_allocationState = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_USBHub");
	_deviceID = String ("");
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String ("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	_powerOnHours = Uint64(0);
	_totalPowerOnHours = Uint64(0);
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_uSBVersion = Uint16(0);
	_classCode = Uint8(0);
	_subclassCode = Uint8(0);
	_protocolCode = Uint8(0);
	_uSBVersionInBCD = Uint16(0);
	_maxPacketSize = Uint8(0);
	_vendorID = Uint16(0);
	_productID = Uint16(0);
	_deviceReleaseNumber = Uint16(0);
	_manufacturer = String ("");
	_product = String ("");
	_serialNumber = String ("");
	_numberOfConfigs = Uint8(0);
	_currentConfigValue = Uint8(0);
	_currentAlternateSettings.clear();
	_commandTimeout = CIMHelper::getCurrentTime();
	_gangSwitched = Boolean(false);
	_numberOfPorts = Uint8(0);

}

Boolean UNIX_USBHub::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EnabledState"))
			{
				Uint16 enabledStateValue;
				property.getValue().get(enabledStateValue);
				setEnabledState(enabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledState"))
			{
				String otherEnabledStateValue;
				property.getValue().get(otherEnabledStateValue);
				setOtherEnabledState(otherEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedState"))
			{
				Uint16 requestedStateValue;
				property.getValue().get(requestedStateValue);
				setRequestedState(requestedStateValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledDefault"))
			{
				Uint16 enabledDefaultValue;
				property.getValue().get(enabledDefaultValue);
				setEnabledDefault(enabledDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastStateChange"))
			{
				CIMDateTime timeOfLastStateChangeValue;
				property.getValue().get(timeOfLastStateChangeValue);
				setTimeOfLastStateChange(timeOfLastStateChangeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableRequestedStates"))
			{
				Array<Uint16> availableRequestedStatesValue;
				property.getValue().get(availableRequestedStatesValue);
				setAvailableRequestedStates(availableRequestedStatesValue);
			}
			else if (String::equal(property.getName().getString(), "TransitioningToState"))
			{
				Uint16 transitioningToStateValue;
				property.getValue().get(transitioningToStateValue);
				setTransitioningToState(transitioningToStateValue);
			}
			else if (String::equal(property.getName().getString(), "AllocationState"))
			{
				String allocationStateValue;
				property.getValue().get(allocationStateValue);
				setAllocationState(allocationStateValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceID"))
			{
				String deviceIDValue;
				property.getValue().get(deviceIDValue);
				setDeviceID(deviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementSupported"))
			{
				Boolean powerManagementSupportedValue;
				property.getValue().get(powerManagementSupportedValue);
				setPowerManagementSupported(powerManagementSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PowerManagementCapabilities"))
			{
				Array<Uint16> powerManagementCapabilitiesValue;
				property.getValue().get(powerManagementCapabilitiesValue);
				setPowerManagementCapabilities(powerManagementCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "Availability"))
			{
				Uint16 availabilityValue;
				property.getValue().get(availabilityValue);
				setAvailability(availabilityValue);
			}
			else if (String::equal(property.getName().getString(), "StatusInfo"))
			{
				Uint16 statusInfoValue;
				property.getValue().get(statusInfoValue);
				setStatusInfo(statusInfoValue);
			}
			else if (String::equal(property.getName().getString(), "LastErrorCode"))
			{
				Uint32 lastErrorCodeValue;
				property.getValue().get(lastErrorCodeValue);
				setLastErrorCode(lastErrorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDescription"))
			{
				String errorDescriptionValue;
				property.getValue().get(errorDescriptionValue);
				setErrorDescription(errorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCleared"))
			{
				Boolean errorClearedValue;
				property.getValue().get(errorClearedValue);
				setErrorCleared(errorClearedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				Array<String> otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "PowerOnHours"))
			{
				Uint64 powerOnHoursValue;
				property.getValue().get(powerOnHoursValue);
				setPowerOnHours(powerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "TotalPowerOnHours"))
			{
				Uint64 totalPowerOnHoursValue;
				property.getValue().get(totalPowerOnHoursValue);
				setTotalPowerOnHours(totalPowerOnHoursValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifyingDescriptions"))
			{
				Array<String> identifyingDescriptionsValue;
				property.getValue().get(identifyingDescriptionsValue);
				setIdentifyingDescriptions(identifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "AdditionalAvailability"))
			{
				Array<Uint16> additionalAvailabilityValue;
				property.getValue().get(additionalAvailabilityValue);
				setAdditionalAvailability(additionalAvailabilityValue);
			}
			else if (String::equal(property.getName().getString(), "MaxQuiesceTime"))
			{
				Uint64 maxQuiesceTimeValue;
				property.getValue().get(maxQuiesceTimeValue);
				setMaxQuiesceTime(maxQuiesceTimeValue);
			}
			else if (String::equal(property.getName().getString(), "LocationIndicator"))
			{
				Uint16 locationIndicatorValue;
				property.getValue().get(locationIndicatorValue);
				setLocationIndicator(locationIndicatorValue);
			}
			else if (String::equal(property.getName().getString(), "USBVersion"))
			{
				Uint16 uSBVersionValue;
				property.getValue().get(uSBVersionValue);
				setUSBVersion(uSBVersionValue);
			}
			else if (String::equal(property.getName().getString(), "ClassCode"))
			{
				Uint8 classCodeValue;
				property.getValue().get(classCodeValue);
				setClassCode(classCodeValue);
			}
			else if (String::equal(property.getName().getString(), "SubclassCode"))
			{
				Uint8 subclassCodeValue;
				property.getValue().get(subclassCodeValue);
				setSubclassCode(subclassCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolCode"))
			{
				Uint8 protocolCodeValue;
				property.getValue().get(protocolCodeValue);
				setProtocolCode(protocolCodeValue);
			}
			else if (String::equal(property.getName().getString(), "USBVersionInBCD"))
			{
				Uint16 uSBVersionInBCDValue;
				property.getValue().get(uSBVersionInBCDValue);
				setUSBVersionInBCD(uSBVersionInBCDValue);
			}
			else if (String::equal(property.getName().getString(), "MaxPacketSize"))
			{
				Uint8 maxPacketSizeValue;
				property.getValue().get(maxPacketSizeValue);
				setMaxPacketSize(maxPacketSizeValue);
			}
			else if (String::equal(property.getName().getString(), "VendorID"))
			{
				Uint16 vendorIDValue;
				property.getValue().get(vendorIDValue);
				setVendorID(vendorIDValue);
			}
			else if (String::equal(property.getName().getString(), "ProductID"))
			{
				Uint16 productIDValue;
				property.getValue().get(productIDValue);
				setProductID(productIDValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceReleaseNumber"))
			{
				Uint16 deviceReleaseNumberValue;
				property.getValue().get(deviceReleaseNumberValue);
				setDeviceReleaseNumber(deviceReleaseNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Manufacturer"))
			{
				String manufacturerValue;
				property.getValue().get(manufacturerValue);
				setManufacturer(manufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "Product"))
			{
				String productValue;
				property.getValue().get(productValue);
				setProduct(productValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				String serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfConfigs"))
			{
				Uint8 numberOfConfigsValue;
				property.getValue().get(numberOfConfigsValue);
				setNumberOfConfigs(numberOfConfigsValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentConfigValue"))
			{
				Uint8 currentConfigValueValue;
				property.getValue().get(currentConfigValueValue);
				setCurrentConfigValue(currentConfigValueValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentAlternateSettings"))
			{
				Array<Uint8> currentAlternateSettingsValue;
				property.getValue().get(currentAlternateSettingsValue);
				setCurrentAlternateSettings(currentAlternateSettingsValue);
			}
			else if (String::equal(property.getName().getString(), "CommandTimeout"))
			{
				CIMDateTime commandTimeoutValue;
				property.getValue().get(commandTimeoutValue);
				setCommandTimeout(commandTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "GangSwitched"))
			{
				Boolean gangSwitchedValue;
				property.getValue().get(gangSwitchedValue);
				setGangSwitched(gangSwitchedValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfPorts"))
			{
				Uint8 numberOfPortsValue;
				property.getValue().get(numberOfPortsValue);
				setNumberOfPorts(numberOfPortsValue);
			}
	}
	return true;
}

Uint32 UNIX_USBHub::invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RequestStateChange */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBHub::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBHub::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBHub::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBHub::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBHub::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBHub::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBHub::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBHub::invokeGetDescriptor(
		Uint8 &inRequestType,
		Uint16 &inRequestValue,
		Uint16 &inRequestIndex,
		Uint16 &inRequestLength,
		Array<Uint8> &inBuffer
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetDescriptor */
	
	
	
	return returnValue;
}


Boolean UNIX_USBHub::initialize()
{
	return false;
}

Boolean UNIX_USBHub::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("USBHub");
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
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_allocationState = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_USBHub");
	_deviceID = String ("");
	_powerManagementSupported = Boolean(false);
	_powerManagementCapabilities.clear();
	_availability = Uint16(0);
	_statusInfo = Uint16(0);
	_lastErrorCode = Uint32(0);
	_errorDescription = String ("");
	_errorCleared = Boolean(false);
	_otherIdentifyingInfo.clear();
	_powerOnHours = Uint64(0);
	_totalPowerOnHours = Uint64(0);
	_identifyingDescriptions.clear();
	_additionalAvailability.clear();
	_maxQuiesceTime = Uint64(0);
	_locationIndicator = Uint16(0);
	_uSBVersion = Uint16(0);
	_classCode = Uint8(0);
	_subclassCode = Uint8(0);
	_protocolCode = Uint8(0);
	_uSBVersionInBCD = Uint16(0);
	_maxPacketSize = Uint8(0);
	_vendorID = Uint16(0);
	_productID = Uint16(0);
	_deviceReleaseNumber = Uint16(0);
	_manufacturer = String ("");
	_product = String ("");
	_serialNumber = String ("");
	_numberOfConfigs = Uint8(0);
	_currentConfigValue = Uint8(0);
	_currentAlternateSettings.clear();
	_commandTimeout = CIMHelper::getCurrentTime();
	_gangSwitched = Boolean(false);
	_numberOfPorts = Uint8(0);
	
	return false;
}

Boolean UNIX_USBHub::finalize()
{
	return false;
}

Boolean UNIX_USBHub::loadByName(const String name)
{
	return false;
}

Boolean UNIX_USBHub::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getDeviceID(), deviceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_USBHub::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBHub::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBHub::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBHub::validateInstance()
{
	return true;
}

