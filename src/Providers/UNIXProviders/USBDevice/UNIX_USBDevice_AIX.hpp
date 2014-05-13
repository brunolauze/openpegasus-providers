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


UNIX_USBDevice::UNIX_USBDevice(void)
{
}

UNIX_USBDevice::~UNIX_USBDevice(void)
{
}

Boolean UNIX_USBDevice::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_USBDevice::getInstanceID() const
{
	return _instanceID;
}

void UNIX_USBDevice::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_USBDevice::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_USBDevice::getCaption() const
{
	return _caption;
}

void UNIX_USBDevice::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_USBDevice::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_USBDevice::getDescription() const
{
	return _description;
}

void UNIX_USBDevice::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_USBDevice::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_USBDevice::getElementName() const
{
	return _elementName;
}

void UNIX_USBDevice::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_USBDevice::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_USBDevice::getGeneration() const
{
	return _generation;
}

void UNIX_USBDevice::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_USBDevice::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_USBDevice::getInstallDate() const
{
	return _installDate;
}

void UNIX_USBDevice::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_USBDevice::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_USBDevice::getName() const
{
	return _name;
}

void UNIX_USBDevice::setName(String &value)
{
	_name = value;
}

Boolean UNIX_USBDevice::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_USBDevice::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_USBDevice::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_USBDevice::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_USBDevice::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_USBDevice::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_USBDevice::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_USBDevice::getStatus() const
{
	return _status;
}

void UNIX_USBDevice::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_USBDevice::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_USBDevice::getHealthState() const
{
	return _healthState;
}

void UNIX_USBDevice::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_USBDevice::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_USBDevice::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_USBDevice::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_USBDevice::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_USBDevice::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_USBDevice::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_USBDevice::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_USBDevice::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_USBDevice::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_USBDevice::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_USBDevice::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_USBDevice::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_USBDevice::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_USBDevice::getEnabledState() const
{
	return _enabledState;
}

void UNIX_USBDevice::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_USBDevice::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_USBDevice::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_USBDevice::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_USBDevice::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_USBDevice::getRequestedState() const
{
	return _requestedState;
}

void UNIX_USBDevice::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_USBDevice::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_USBDevice::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_USBDevice::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_USBDevice::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_USBDevice::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_USBDevice::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_USBDevice::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_USBDevice::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_USBDevice::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_USBDevice::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_USBDevice::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_USBDevice::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_USBDevice::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_USBDevice::getAllocationState() const
{
	return _allocationState;
}

void UNIX_USBDevice::setAllocationState(String &value)
{
	_allocationState = value;
}

Boolean UNIX_USBDevice::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_USBDevice::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_USBDevice::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_USBDevice::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_USBDevice::getSystemName() const
{
	return _systemName;
}

void UNIX_USBDevice::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_USBDevice::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_USBDevice::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_USBDevice::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_USBDevice::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_USBDevice::getDeviceID() const
{
	return _deviceID;
}

void UNIX_USBDevice::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_USBDevice::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_USBDevice::getPowerManagementSupported() const
{
	return _powerManagementSupported;
}

void UNIX_USBDevice::setPowerManagementSupported(Boolean &value)
{
	_powerManagementSupported = value;
}

Boolean UNIX_USBDevice::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_USBDevice::getPowerManagementCapabilities() const
{
	return _powerManagementCapabilities;
}

void UNIX_USBDevice::setPowerManagementCapabilities(Array<Uint16> &value)
{
	_powerManagementCapabilities = value;
}

Boolean UNIX_USBDevice::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_USBDevice::getAvailability() const
{
	return _availability;
}

void UNIX_USBDevice::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_USBDevice::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_USBDevice::getStatusInfo() const
{
	return _statusInfo;
}

void UNIX_USBDevice::setStatusInfo(Uint16 &value)
{
	_statusInfo = value;
}

Boolean UNIX_USBDevice::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_USBDevice::getLastErrorCode() const
{
	return _lastErrorCode;
}

void UNIX_USBDevice::setLastErrorCode(Uint32 &value)
{
	_lastErrorCode = value;
}

Boolean UNIX_USBDevice::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_USBDevice::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_USBDevice::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_USBDevice::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_USBDevice::getErrorCleared() const
{
	return _errorCleared;
}

void UNIX_USBDevice::setErrorCleared(Boolean &value)
{
	_errorCleared = value;
}

Boolean UNIX_USBDevice::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_USBDevice::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_USBDevice::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_USBDevice::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_USBDevice::getPowerOnHours() const
{
	return _powerOnHours;
}

void UNIX_USBDevice::setPowerOnHours(Uint64 &value)
{
	_powerOnHours = value;
}

Boolean UNIX_USBDevice::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_USBDevice::getTotalPowerOnHours() const
{
	return _totalPowerOnHours;
}

void UNIX_USBDevice::setTotalPowerOnHours(Uint64 &value)
{
	_totalPowerOnHours = value;
}

Boolean UNIX_USBDevice::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_USBDevice::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_USBDevice::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_USBDevice::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_USBDevice::getAdditionalAvailability() const
{
	return _additionalAvailability;
}

void UNIX_USBDevice::setAdditionalAvailability(Array<Uint16> &value)
{
	_additionalAvailability = value;
}

Boolean UNIX_USBDevice::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_USBDevice::getMaxQuiesceTime() const
{
	return _maxQuiesceTime;
}

void UNIX_USBDevice::setMaxQuiesceTime(Uint64 &value)
{
	_maxQuiesceTime = value;
}

Boolean UNIX_USBDevice::getLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_INDICATOR, getLocationIndicator());
	return true;
}

Uint16 UNIX_USBDevice::getLocationIndicator() const
{
	return _locationIndicator;
}

void UNIX_USBDevice::setLocationIndicator(Uint16 &value)
{
	_locationIndicator = value;
}

Boolean UNIX_USBDevice::getUSBVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USB_VERSION, getUSBVersion());
	return true;
}

Uint16 UNIX_USBDevice::getUSBVersion() const
{
	return _uSBVersion;
}

void UNIX_USBDevice::setUSBVersion(Uint16 &value)
{
	_uSBVersion = value;
}

Boolean UNIX_USBDevice::getClassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_CODE, getClassCode());
	return true;
}

Uint8 UNIX_USBDevice::getClassCode() const
{
	return _classCode;
}

void UNIX_USBDevice::setClassCode(Uint8 &value)
{
	_classCode = value;
}

Boolean UNIX_USBDevice::getSubclassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBCLASS_CODE, getSubclassCode());
	return true;
}

Uint8 UNIX_USBDevice::getSubclassCode() const
{
	return _subclassCode;
}

void UNIX_USBDevice::setSubclassCode(Uint8 &value)
{
	_subclassCode = value;
}

Boolean UNIX_USBDevice::getProtocolCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CODE, getProtocolCode());
	return true;
}

Uint8 UNIX_USBDevice::getProtocolCode() const
{
	return _protocolCode;
}

void UNIX_USBDevice::setProtocolCode(Uint8 &value)
{
	_protocolCode = value;
}

Boolean UNIX_USBDevice::getUSBVersionInBCD(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USB_VERSION_IN_B_C_D, getUSBVersionInBCD());
	return true;
}

Uint16 UNIX_USBDevice::getUSBVersionInBCD() const
{
	return _uSBVersionInBCD;
}

void UNIX_USBDevice::setUSBVersionInBCD(Uint16 &value)
{
	_uSBVersionInBCD = value;
}

Boolean UNIX_USBDevice::getMaxPacketSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PACKET_SIZE, getMaxPacketSize());
	return true;
}

Uint8 UNIX_USBDevice::getMaxPacketSize() const
{
	return _maxPacketSize;
}

void UNIX_USBDevice::setMaxPacketSize(Uint8 &value)
{
	_maxPacketSize = value;
}

Boolean UNIX_USBDevice::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

Uint16 UNIX_USBDevice::getVendorID() const
{
	return _vendorID;
}

void UNIX_USBDevice::setVendorID(Uint16 &value)
{
	_vendorID = value;
}

Boolean UNIX_USBDevice::getProductID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_ID, getProductID());
	return true;
}

Uint16 UNIX_USBDevice::getProductID() const
{
	return _productID;
}

void UNIX_USBDevice::setProductID(Uint16 &value)
{
	_productID = value;
}

Boolean UNIX_USBDevice::getDeviceReleaseNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_RELEASE_NUMBER, getDeviceReleaseNumber());
	return true;
}

Uint16 UNIX_USBDevice::getDeviceReleaseNumber() const
{
	return _deviceReleaseNumber;
}

void UNIX_USBDevice::setDeviceReleaseNumber(Uint16 &value)
{
	_deviceReleaseNumber = value;
}

Boolean UNIX_USBDevice::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_USBDevice::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_USBDevice::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_USBDevice::getProduct(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT, getProduct());
	return true;
}

String UNIX_USBDevice::getProduct() const
{
	return _product;
}

void UNIX_USBDevice::setProduct(String &value)
{
	_product = value;
}

Boolean UNIX_USBDevice::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_USBDevice::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_USBDevice::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_USBDevice::getNumberOfConfigs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_CONFIGS, getNumberOfConfigs());
	return true;
}

Uint8 UNIX_USBDevice::getNumberOfConfigs() const
{
	return _numberOfConfigs;
}

void UNIX_USBDevice::setNumberOfConfigs(Uint8 &value)
{
	_numberOfConfigs = value;
}

Boolean UNIX_USBDevice::getCurrentConfigValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CONFIG_VALUE, getCurrentConfigValue());
	return true;
}

Uint8 UNIX_USBDevice::getCurrentConfigValue() const
{
	return _currentConfigValue;
}

void UNIX_USBDevice::setCurrentConfigValue(Uint8 &value)
{
	_currentConfigValue = value;
}

Boolean UNIX_USBDevice::getCurrentAlternateSettings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_ALTERNATE_SETTINGS, getCurrentAlternateSettings());
	return true;
}

Array<Uint8> UNIX_USBDevice::getCurrentAlternateSettings() const
{
	return _currentAlternateSettings;
}

void UNIX_USBDevice::setCurrentAlternateSettings(Array<Uint8> &value)
{
	_currentAlternateSettings = value;
}

Boolean UNIX_USBDevice::getCommandTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_TIMEOUT, getCommandTimeout());
	return true;
}

CIMDateTime UNIX_USBDevice::getCommandTimeout() const
{
	return _commandTimeout;
}

void UNIX_USBDevice::setCommandTimeout(CIMDateTime &value)
{
	_commandTimeout = value;
}


void UNIX_USBDevice::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("USBDevice");
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
	_creationClassName = String("UNIX_USBDevice");
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

}

Boolean UNIX_USBDevice::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}

Uint32 UNIX_USBDevice::invokeRequestStateChange(
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

Uint32 UNIX_USBDevice::invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SetPowerState */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBDevice::invokeReset()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Reset */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBDevice::invokeEnableDevice(
		Boolean &inEnabled
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method EnableDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBDevice::invokeOnlineDevice(
		Boolean &inOnline
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OnlineDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBDevice::invokeQuiesceDevice(
		Boolean &inQuiesce
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method QuiesceDevice */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBDevice::invokeSaveProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method SaveProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBDevice::invokeRestoreProperties()
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method RestoreProperties */
	
	
	
	return returnValue;
}

Uint32 UNIX_USBDevice::invokeGetDescriptor(
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


Boolean UNIX_USBDevice::initialize()
{
	return false;
}

Boolean UNIX_USBDevice::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("USBDevice");
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
	_creationClassName = String("UNIX_USBDevice");
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
	
	return false;
}

Boolean UNIX_USBDevice::finalize()
{
	return false;
}

Boolean UNIX_USBDevice::loadByName(const String name)
{
	return false;
}

Boolean UNIX_USBDevice::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_USBDevice::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBDevice::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBDevice::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBDevice::validateInstance()
{
	return true;
}

