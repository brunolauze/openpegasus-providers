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


UNIX_PhysicalComputerSystemView::UNIX_PhysicalComputerSystemView(void)
{
}

UNIX_PhysicalComputerSystemView::~UNIX_PhysicalComputerSystemView(void)
{
}

Boolean UNIX_PhysicalComputerSystemView::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalComputerSystemView::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PhysicalComputerSystemView::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalComputerSystemView::getCaption() const
{
	return _caption;
}

void UNIX_PhysicalComputerSystemView::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PhysicalComputerSystemView::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalComputerSystemView::getDescription() const
{
	return _description;
}

void UNIX_PhysicalComputerSystemView::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PhysicalComputerSystemView::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalComputerSystemView::getElementName() const
{
	return _elementName;
}

void UNIX_PhysicalComputerSystemView::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PhysicalComputerSystemView::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getGeneration() const
{
	return _generation;
}

void UNIX_PhysicalComputerSystemView::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PhysicalComputerSystemView::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getEnabledState() const
{
	return _enabledState;
}

void UNIX_PhysicalComputerSystemView::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_PhysicalComputerSystemView::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getRequestedState() const
{
	return _requestedState;
}

void UNIX_PhysicalComputerSystemView::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_PhysicalComputerSystemView::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PhysicalComputerSystemView::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PhysicalComputerSystemView::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getHealthState() const
{
	return _healthState;
}

void UNIX_PhysicalComputerSystemView::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PhysicalComputerSystemView::getFRUInfoSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_U_INFO_SUPPORTED, getFRUInfoSupported());
	return true;
}

Boolean UNIX_PhysicalComputerSystemView::getFRUInfoSupported() const
{
	return _fRUInfoSupported;
}

void UNIX_PhysicalComputerSystemView::setFRUInfoSupported(Boolean &value)
{
	_fRUInfoSupported = value;
}

Boolean UNIX_PhysicalComputerSystemView::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalComputerSystemView::getTag() const
{
	return _tag;
}

void UNIX_PhysicalComputerSystemView::setTag(String &value)
{
	_tag = value;
}

Boolean UNIX_PhysicalComputerSystemView::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalComputerSystemView::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_PhysicalComputerSystemView::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_PhysicalComputerSystemView::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalComputerSystemView::getModel() const
{
	return _model;
}

void UNIX_PhysicalComputerSystemView::setModel(String &value)
{
	_model = value;
}

Boolean UNIX_PhysicalComputerSystemView::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalComputerSystemView::getSKU() const
{
	return _sKU;
}

void UNIX_PhysicalComputerSystemView::setSKU(String &value)
{
	_sKU = value;
}

Boolean UNIX_PhysicalComputerSystemView::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalComputerSystemView::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_PhysicalComputerSystemView::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_PhysicalComputerSystemView::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalComputerSystemView::getVersion() const
{
	return _version;
}

void UNIX_PhysicalComputerSystemView::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_PhysicalComputerSystemView::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalComputerSystemView::getPartNumber() const
{
	return _partNumber;
}

void UNIX_PhysicalComputerSystemView::setPartNumber(String &value)
{
	_partNumber = value;
}

Boolean UNIX_PhysicalComputerSystemView::getPowerUtilizationModesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_UTILIZATION_MODES_SUPPORTED, getPowerUtilizationModesSupported());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getPowerUtilizationModesSupported() const
{
	return _powerUtilizationModesSupported;
}

void UNIX_PhysicalComputerSystemView::setPowerUtilizationModesSupported(Array<Uint16> &value)
{
	_powerUtilizationModesSupported = value;
}

Boolean UNIX_PhysicalComputerSystemView::getPowerUtilizationMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_UTILIZATION_MODE, getPowerUtilizationMode());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getPowerUtilizationMode() const
{
	return _powerUtilizationMode;
}

void UNIX_PhysicalComputerSystemView::setPowerUtilizationMode(Uint16 &value)
{
	_powerUtilizationMode = value;
}

Boolean UNIX_PhysicalComputerSystemView::getPowerAllocationLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ALLOCATION_LIMIT, getPowerAllocationLimit());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getPowerAllocationLimit() const
{
	return _powerAllocationLimit;
}

void UNIX_PhysicalComputerSystemView::setPowerAllocationLimit(Uint64 &value)
{
	_powerAllocationLimit = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_ELEMENT_NAME, getNumericSensorElementName());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getNumericSensorElementName() const
{
	return _numericSensorElementName;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorElementName(Array<String> &value)
{
	_numericSensorElementName = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_ENABLED_STATE, getNumericSensorEnabledState());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorEnabledState() const
{
	return _numericSensorEnabledState;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorEnabledState(Array<Uint16> &value)
{
	_numericSensorEnabledState = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_HEALTH_STATE, getNumericSensorHealthState());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorHealthState() const
{
	return _numericSensorHealthState;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorHealthState(Array<Uint16> &value)
{
	_numericSensorHealthState = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_CURRENT_STATE, getNumericSensorCurrentState());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getNumericSensorCurrentState() const
{
	return _numericSensorCurrentState;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorCurrentState(Array<String> &value)
{
	_numericSensorCurrentState = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_PRIMARY_STATUS, getNumericSensorPrimaryStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorPrimaryStatus() const
{
	return _numericSensorPrimaryStatus;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorPrimaryStatus(Array<Uint16> &value)
{
	_numericSensorPrimaryStatus = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorBaseUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_BASE_UNITS, getNumericSensorBaseUnits());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorBaseUnits() const
{
	return _numericSensorBaseUnits;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorBaseUnits(Array<Uint16> &value)
{
	_numericSensorBaseUnits = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorUnitModifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_UNIT_MODIFIER, getNumericSensorUnitModifier());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorUnitModifier() const
{
	return _numericSensorUnitModifier;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorUnitModifier(Array<Sint32> &value)
{
	_numericSensorUnitModifier = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorRateUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_RATE_UNITS, getNumericSensorRateUnits());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorRateUnits() const
{
	return _numericSensorRateUnits;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorRateUnits(Array<Uint16> &value)
{
	_numericSensorRateUnits = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_CURRENT_READING, getNumericSensorCurrentReading());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorCurrentReading() const
{
	return _numericSensorCurrentReading;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorCurrentReading(Array<Sint32> &value)
{
	_numericSensorCurrentReading = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_SENSOR_TYPE, getNumericSensorSensorType());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorSensorType() const
{
	return _numericSensorSensorType;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorSensorType(Array<Uint16> &value)
{
	_numericSensorSensorType = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_OTHER_SENSOR_TYPE_DESCRIPTION, getNumericSensorOtherSensorTypeDescription());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getNumericSensorOtherSensorTypeDescription() const
{
	return _numericSensorOtherSensorTypeDescription;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorOtherSensorTypeDescription(Array<String> &value)
{
	_numericSensorOtherSensorTypeDescription = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_NON_CRITICAL, getNumericSensorUpperThresholdNonCritical());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdNonCritical() const
{
	return _numericSensorUpperThresholdNonCritical;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorUpperThresholdNonCritical(Array<Sint32> &value)
{
	_numericSensorUpperThresholdNonCritical = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_CRITICAL, getNumericSensorUpperThresholdCritical());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdCritical() const
{
	return _numericSensorUpperThresholdCritical;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorUpperThresholdCritical(Array<Sint32> &value)
{
	_numericSensorUpperThresholdCritical = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_FATAL, getNumericSensorUpperThresholdFatal());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdFatal() const
{
	return _numericSensorUpperThresholdFatal;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorUpperThresholdFatal(Array<Sint32> &value)
{
	_numericSensorUpperThresholdFatal = value;
}

Boolean UNIX_PhysicalComputerSystemView::getLogInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_INSTANCE_ID, getLogInstanceID());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getLogInstanceID() const
{
	return _logInstanceID;
}

void UNIX_PhysicalComputerSystemView::setLogInstanceID(Array<String> &value)
{
	_logInstanceID = value;
}

Boolean UNIX_PhysicalComputerSystemView::getLogMaxNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_MAX_NUMBER_OF_RECORDS, getLogMaxNumberOfRecords());
	return true;
}

Array<Uint64> UNIX_PhysicalComputerSystemView::getLogMaxNumberOfRecords() const
{
	return _logMaxNumberOfRecords;
}

void UNIX_PhysicalComputerSystemView::setLogMaxNumberOfRecords(Array<Uint64> &value)
{
	_logMaxNumberOfRecords = value;
}

Boolean UNIX_PhysicalComputerSystemView::getLogCurrentNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_CURRENT_NUMBER_OF_RECORDS, getLogCurrentNumberOfRecords());
	return true;
}

Array<Uint64> UNIX_PhysicalComputerSystemView::getLogCurrentNumberOfRecords() const
{
	return _logCurrentNumberOfRecords;
}

void UNIX_PhysicalComputerSystemView::setLogCurrentNumberOfRecords(Array<Uint64> &value)
{
	_logCurrentNumberOfRecords = value;
}

Boolean UNIX_PhysicalComputerSystemView::getLogOverWritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OVER_WRITE_POLICY, getLogOverWritePolicy());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getLogOverWritePolicy() const
{
	return _logOverWritePolicy;
}

void UNIX_PhysicalComputerSystemView::setLogOverWritePolicy(Array<Uint16> &value)
{
	_logOverWritePolicy = value;
}

Boolean UNIX_PhysicalComputerSystemView::getLogState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STATE, getLogState());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getLogState() const
{
	return _logState;
}

void UNIX_PhysicalComputerSystemView::setLogState(Array<Uint16> &value)
{
	_logState = value;
}

Boolean UNIX_PhysicalComputerSystemView::getStructuredBootString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STRUCTURED_BOOT_STRING, getStructuredBootString());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getStructuredBootString() const
{
	return _structuredBootString;
}

void UNIX_PhysicalComputerSystemView::setStructuredBootString(Array<String> &value)
{
	_structuredBootString = value;
}

Boolean UNIX_PhysicalComputerSystemView::getPersistentBootConfigOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT_BOOT_CONFIG_ORDER, getPersistentBootConfigOrder());
	return true;
}

Array<Uint8> UNIX_PhysicalComputerSystemView::getPersistentBootConfigOrder() const
{
	return _persistentBootConfigOrder;
}

void UNIX_PhysicalComputerSystemView::setPersistentBootConfigOrder(Array<Uint8> &value)
{
	_persistentBootConfigOrder = value;
}

Boolean UNIX_PhysicalComputerSystemView::getOneTimeBootSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONE_TIME_BOOT_SOURCE, getOneTimeBootSource());
	return true;
}

Uint8 UNIX_PhysicalComputerSystemView::getOneTimeBootSource() const
{
	return _oneTimeBootSource;
}

void UNIX_PhysicalComputerSystemView::setOneTimeBootSource(Uint8 &value)
{
	_oneTimeBootSource = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumberOfProcessors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSORS, getNumberOfProcessors());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getNumberOfProcessors() const
{
	return _numberOfProcessors;
}

void UNIX_PhysicalComputerSystemView::setNumberOfProcessors(Uint16 &value)
{
	_numberOfProcessors = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumberOfProcessorCores(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSOR_CORES, getNumberOfProcessorCores());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getNumberOfProcessorCores() const
{
	return _numberOfProcessorCores;
}

void UNIX_PhysicalComputerSystemView::setNumberOfProcessorCores(Uint16 &value)
{
	_numberOfProcessorCores = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumberOfProcessorThreads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSOR_THREADS, getNumberOfProcessorThreads());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getNumberOfProcessorThreads() const
{
	return _numberOfProcessorThreads;
}

void UNIX_PhysicalComputerSystemView::setNumberOfProcessorThreads(Uint16 &value)
{
	_numberOfProcessorThreads = value;
}

Boolean UNIX_PhysicalComputerSystemView::getProcessorFamily(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESSOR_FAMILY, getProcessorFamily());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getProcessorFamily() const
{
	return _processorFamily;
}

void UNIX_PhysicalComputerSystemView::setProcessorFamily(Uint16 &value)
{
	_processorFamily = value;
}

Boolean UNIX_PhysicalComputerSystemView::getProcessorMaxClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESSOR_MAX_CLOCK_SPEED, getProcessorMaxClockSpeed());
	return true;
}

Uint32 UNIX_PhysicalComputerSystemView::getProcessorMaxClockSpeed() const
{
	return _processorMaxClockSpeed;
}

void UNIX_PhysicalComputerSystemView::setProcessorMaxClockSpeed(Uint32 &value)
{
	_processorMaxClockSpeed = value;
}

Boolean UNIX_PhysicalComputerSystemView::getMemoryBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_BLOCK_SIZE, getMemoryBlockSize());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getMemoryBlockSize() const
{
	return _memoryBlockSize;
}

void UNIX_PhysicalComputerSystemView::setMemoryBlockSize(Uint64 &value)
{
	_memoryBlockSize = value;
}

Boolean UNIX_PhysicalComputerSystemView::getMemoryNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_NUMBER_OF_BLOCKS, getMemoryNumberOfBlocks());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getMemoryNumberOfBlocks() const
{
	return _memoryNumberOfBlocks;
}

void UNIX_PhysicalComputerSystemView::setMemoryNumberOfBlocks(Uint64 &value)
{
	_memoryNumberOfBlocks = value;
}

Boolean UNIX_PhysicalComputerSystemView::getMemoryConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_CONSUMABLE_BLOCKS, getMemoryConsumableBlocks());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getMemoryConsumableBlocks() const
{
	return _memoryConsumableBlocks;
}

void UNIX_PhysicalComputerSystemView::setMemoryConsumableBlocks(Uint64 &value)
{
	_memoryConsumableBlocks = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BIOS_MAJOR_VERSION, getCurrentBIOSMajorVersion());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentBIOSMajorVersion() const
{
	return _currentBIOSMajorVersion;
}

void UNIX_PhysicalComputerSystemView::setCurrentBIOSMajorVersion(Uint16 &value)
{
	_currentBIOSMajorVersion = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BIOS_MINOR_VERSION, getCurrentBIOSMinorVersion());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentBIOSMinorVersion() const
{
	return _currentBIOSMinorVersion;
}

void UNIX_PhysicalComputerSystemView::setCurrentBIOSMinorVersion(Uint16 &value)
{
	_currentBIOSMinorVersion = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BIOS_REVISION_NUMBER, getCurrentBIOSRevisionNumber());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentBIOSRevisionNumber() const
{
	return _currentBIOSRevisionNumber;
}

void UNIX_PhysicalComputerSystemView::setCurrentBIOSRevisionNumber(Uint16 &value)
{
	_currentBIOSRevisionNumber = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BIOS_BUILD_NUMBER, getCurrentBIOSBuildNumber());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentBIOSBuildNumber() const
{
	return _currentBIOSBuildNumber;
}

void UNIX_PhysicalComputerSystemView::setCurrentBIOSBuildNumber(Uint16 &value)
{
	_currentBIOSBuildNumber = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MAJOR_VERSION, getCurrentManagementFirmwareMajorVersion());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareMajorVersion() const
{
	return _currentManagementFirmwareMajorVersion;
}

void UNIX_PhysicalComputerSystemView::setCurrentManagementFirmwareMajorVersion(Uint16 &value)
{
	_currentManagementFirmwareMajorVersion = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MINOR_VERSION, getCurrentManagementFirmwareMinorVersion());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareMinorVersion() const
{
	return _currentManagementFirmwareMinorVersion;
}

void UNIX_PhysicalComputerSystemView::setCurrentManagementFirmwareMinorVersion(Uint16 &value)
{
	_currentManagementFirmwareMinorVersion = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_REVISION_NUMBER, getCurrentManagementFirmwareRevisionNumber());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareRevisionNumber() const
{
	return _currentManagementFirmwareRevisionNumber;
}

void UNIX_PhysicalComputerSystemView::setCurrentManagementFirmwareRevisionNumber(Uint16 &value)
{
	_currentManagementFirmwareRevisionNumber = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_BUILD_NUMBER, getCurrentManagementFirmwareBuildNumber());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareBuildNumber() const
{
	return _currentManagementFirmwareBuildNumber;
}

void UNIX_PhysicalComputerSystemView::setCurrentManagementFirmwareBuildNumber(Uint16 &value)
{
	_currentManagementFirmwareBuildNumber = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_ELEMENT_NAME, getCurrentManagementFirmwareElementName());
	return true;
}

String UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareElementName() const
{
	return _currentManagementFirmwareElementName;
}

void UNIX_PhysicalComputerSystemView::setCurrentManagementFirmwareElementName(String &value)
{
	_currentManagementFirmwareElementName = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareVersionString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_VERSION_STRING, getCurrentManagementFirmwareVersionString());
	return true;
}

String UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareVersionString() const
{
	return _currentManagementFirmwareVersionString;
}

void UNIX_PhysicalComputerSystemView::setCurrentManagementFirmwareVersionString(String &value)
{
	_currentManagementFirmwareVersionString = value;
}

Boolean UNIX_PhysicalComputerSystemView::getOSType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_TYPE, getOSType());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getOSType() const
{
	return _oSType;
}

void UNIX_PhysicalComputerSystemView::setOSType(Uint16 &value)
{
	_oSType = value;
}

Boolean UNIX_PhysicalComputerSystemView::getOSVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_VERSION, getOSVersion());
	return true;
}

String UNIX_PhysicalComputerSystemView::getOSVersion() const
{
	return _oSVersion;
}

void UNIX_PhysicalComputerSystemView::setOSVersion(String &value)
{
	_oSVersion = value;
}

Boolean UNIX_PhysicalComputerSystemView::getOSEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_ENABLED_STATE, getOSEnabledState());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getOSEnabledState() const
{
	return _oSEnabledState;
}

void UNIX_PhysicalComputerSystemView::setOSEnabledState(Uint16 &value)
{
	_oSEnabledState = value;
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSVersionString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BIOS_VERSION_STRING, getCurrentBIOSVersionString());
	return true;
}

String UNIX_PhysicalComputerSystemView::getCurrentBIOSVersionString() const
{
	return _currentBIOSVersionString;
}

void UNIX_PhysicalComputerSystemView::setCurrentBIOSVersionString(String &value)
{
	_currentBIOSVersionString = value;
}

Boolean UNIX_PhysicalComputerSystemView::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getDedicated() const
{
	return _dedicated;
}

void UNIX_PhysicalComputerSystemView::setDedicated(Array<Uint16> &value)
{
	_dedicated = value;
}

Boolean UNIX_PhysicalComputerSystemView::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getIdentifyingDescriptions() const
{
	return _identifyingDescriptions;
}

void UNIX_PhysicalComputerSystemView::setIdentifyingDescriptions(Array<String> &value)
{
	_identifyingDescriptions = value;
}

Boolean UNIX_PhysicalComputerSystemView::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getOtherDedicatedDescriptions() const
{
	return _otherDedicatedDescriptions;
}

void UNIX_PhysicalComputerSystemView::setOtherDedicatedDescriptions(Array<String> &value)
{
	_otherDedicatedDescriptions = value;
}

Boolean UNIX_PhysicalComputerSystemView::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getOtherIdentifyingInfo() const
{
	return _otherIdentifyingInfo;
}

void UNIX_PhysicalComputerSystemView::setOtherIdentifyingInfo(Array<String> &value)
{
	_otherIdentifyingInfo = value;
}

Boolean UNIX_PhysicalComputerSystemView::getProcessorCurrentClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESSOR_CURRENT_CLOCK_SPEED, getProcessorCurrentClockSpeed());
	return true;
}

Uint32 UNIX_PhysicalComputerSystemView::getProcessorCurrentClockSpeed() const
{
	return _processorCurrentClockSpeed;
}

void UNIX_PhysicalComputerSystemView::setProcessorCurrentClockSpeed(Uint32 &value)
{
	_processorCurrentClockSpeed = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_CONTEXT, getNumericSensorContext());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getNumericSensorContext() const
{
	return _numericSensorContext;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorContext(Array<String> &value)
{
	_numericSensorContext = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_CRITICAL, getNumericSensorLowerThresholdCritical());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdCritical() const
{
	return _numericSensorLowerThresholdCritical;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorLowerThresholdCritical(Array<Sint32> &value)
{
	_numericSensorLowerThresholdCritical = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_FATAL, getNumericSensorLowerThresholdFatal());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdFatal() const
{
	return _numericSensorLowerThresholdFatal;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorLowerThresholdFatal(Array<Sint32> &value)
{
	_numericSensorLowerThresholdFatal = value;
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_NON_CRITICAL, getNumericSensorLowerThresholdNonCritical());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdNonCritical() const
{
	return _numericSensorLowerThresholdNonCritical;
}

void UNIX_PhysicalComputerSystemView::setNumericSensorLowerThresholdNonCritical(Array<Sint32> &value)
{
	_numericSensorLowerThresholdNonCritical = value;
}


void UNIX_PhysicalComputerSystemView::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalComputerSystemView");
	_generation = Uint64(0);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_requestedState = Uint16(0);
	_operationalStatus.clear();
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_fRUInfoSupported = Boolean(false);
	_tag = String ("");
	_manufacturer = String ("");
	_model = String ("");
	_sKU = String ("");
	_serialNumber = String ("");
	_version = String ("");
	_partNumber = String ("");
	_powerUtilizationModesSupported.clear();
	_powerUtilizationMode = Uint16(0);
	_powerAllocationLimit = Uint64(0);
	_numericSensorElementName.clear();
	_numericSensorEnabledState.clear();
	_numericSensorHealthState.clear();
	_numericSensorCurrentState.clear();
	_numericSensorPrimaryStatus.clear();
	_numericSensorBaseUnits.clear();
	_numericSensorUnitModifier.clear();
	_numericSensorRateUnits.clear();
	_numericSensorCurrentReading.clear();
	_numericSensorSensorType.clear();
	_numericSensorOtherSensorTypeDescription.clear();
	_numericSensorUpperThresholdNonCritical.clear();
	_numericSensorUpperThresholdCritical.clear();
	_numericSensorUpperThresholdFatal.clear();
	_logInstanceID.clear();
	_logMaxNumberOfRecords.clear();
	_logCurrentNumberOfRecords.clear();
	_logOverWritePolicy.clear();
	_logState.clear();
	_structuredBootString.clear();
	_persistentBootConfigOrder.clear();
	_oneTimeBootSource = Uint8(0);
	_numberOfProcessors = Uint16(0);
	_numberOfProcessorCores = Uint16(0);
	_numberOfProcessorThreads = Uint16(0);
	_processorFamily = Uint16(0);
	_processorMaxClockSpeed = Uint32(0);
	_memoryBlockSize = Uint64(0);
	_memoryNumberOfBlocks = Uint64(0);
	_memoryConsumableBlocks = Uint64(0);
	_currentBIOSMajorVersion = Uint16(0);
	_currentBIOSMinorVersion = Uint16(0);
	_currentBIOSRevisionNumber = Uint16(0);
	_currentBIOSBuildNumber = Uint16(0);
	_currentManagementFirmwareMajorVersion = Uint16(0);
	_currentManagementFirmwareMinorVersion = Uint16(0);
	_currentManagementFirmwareRevisionNumber = Uint16(0);
	_currentManagementFirmwareBuildNumber = Uint16(0);
	_currentManagementFirmwareElementName = String ("");
	_currentManagementFirmwareVersionString = String ("");
	_oSType = Uint16(0);
	_oSVersion = String ("");
	_oSEnabledState = Uint16(0);
	_currentBIOSVersionString = String ("");
	_dedicated.clear();
	_identifyingDescriptions.clear();
	_otherDedicatedDescriptions.clear();
	_otherIdentifyingInfo.clear();
	_processorCurrentClockSpeed = Uint32(0);
	_numericSensorContext.clear();
	_numericSensorLowerThresholdCritical.clear();
	_numericSensorLowerThresholdFatal.clear();
	_numericSensorLowerThresholdNonCritical.clear();

}

Boolean UNIX_PhysicalComputerSystemView::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EnabledState"))
			{
				Uint16 enabledStateValue;
				property.getValue().get(enabledStateValue);
				setEnabledState(enabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedState"))
			{
				Uint16 requestedStateValue;
				property.getValue().get(requestedStateValue);
				setRequestedState(requestedStateValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "FRUInfoSupported"))
			{
				Boolean fRUInfoSupportedValue;
				property.getValue().get(fRUInfoSupportedValue);
				setFRUInfoSupported(fRUInfoSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "Tag"))
			{
				String tagValue;
				property.getValue().get(tagValue);
				setTag(tagValue);
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
			else if (String::equal(property.getName().getString(), "PowerUtilizationModesSupported"))
			{
				Array<Uint16> powerUtilizationModesSupportedValue;
				property.getValue().get(powerUtilizationModesSupportedValue);
				setPowerUtilizationModesSupported(powerUtilizationModesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PowerUtilizationMode"))
			{
				Uint16 powerUtilizationModeValue;
				property.getValue().get(powerUtilizationModeValue);
				setPowerUtilizationMode(powerUtilizationModeValue);
			}
			else if (String::equal(property.getName().getString(), "PowerAllocationLimit"))
			{
				Uint64 powerAllocationLimitValue;
				property.getValue().get(powerAllocationLimitValue);
				setPowerAllocationLimit(powerAllocationLimitValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorElementName"))
			{
				Array<String> numericSensorElementNameValue;
				property.getValue().get(numericSensorElementNameValue);
				setNumericSensorElementName(numericSensorElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorEnabledState"))
			{
				Array<Uint16> numericSensorEnabledStateValue;
				property.getValue().get(numericSensorEnabledStateValue);
				setNumericSensorEnabledState(numericSensorEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorHealthState"))
			{
				Array<Uint16> numericSensorHealthStateValue;
				property.getValue().get(numericSensorHealthStateValue);
				setNumericSensorHealthState(numericSensorHealthStateValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorCurrentState"))
			{
				Array<String> numericSensorCurrentStateValue;
				property.getValue().get(numericSensorCurrentStateValue);
				setNumericSensorCurrentState(numericSensorCurrentStateValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorPrimaryStatus"))
			{
				Array<Uint16> numericSensorPrimaryStatusValue;
				property.getValue().get(numericSensorPrimaryStatusValue);
				setNumericSensorPrimaryStatus(numericSensorPrimaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorBaseUnits"))
			{
				Array<Uint16> numericSensorBaseUnitsValue;
				property.getValue().get(numericSensorBaseUnitsValue);
				setNumericSensorBaseUnits(numericSensorBaseUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorUnitModifier"))
			{
				Array<Sint32> numericSensorUnitModifierValue;
				property.getValue().get(numericSensorUnitModifierValue);
				setNumericSensorUnitModifier(numericSensorUnitModifierValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorRateUnits"))
			{
				Array<Uint16> numericSensorRateUnitsValue;
				property.getValue().get(numericSensorRateUnitsValue);
				setNumericSensorRateUnits(numericSensorRateUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorCurrentReading"))
			{
				Array<Sint32> numericSensorCurrentReadingValue;
				property.getValue().get(numericSensorCurrentReadingValue);
				setNumericSensorCurrentReading(numericSensorCurrentReadingValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorSensorType"))
			{
				Array<Uint16> numericSensorSensorTypeValue;
				property.getValue().get(numericSensorSensorTypeValue);
				setNumericSensorSensorType(numericSensorSensorTypeValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorOtherSensorTypeDescription"))
			{
				Array<String> numericSensorOtherSensorTypeDescriptionValue;
				property.getValue().get(numericSensorOtherSensorTypeDescriptionValue);
				setNumericSensorOtherSensorTypeDescription(numericSensorOtherSensorTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorUpperThresholdNonCritical"))
			{
				Array<Sint32> numericSensorUpperThresholdNonCriticalValue;
				property.getValue().get(numericSensorUpperThresholdNonCriticalValue);
				setNumericSensorUpperThresholdNonCritical(numericSensorUpperThresholdNonCriticalValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorUpperThresholdCritical"))
			{
				Array<Sint32> numericSensorUpperThresholdCriticalValue;
				property.getValue().get(numericSensorUpperThresholdCriticalValue);
				setNumericSensorUpperThresholdCritical(numericSensorUpperThresholdCriticalValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorUpperThresholdFatal"))
			{
				Array<Sint32> numericSensorUpperThresholdFatalValue;
				property.getValue().get(numericSensorUpperThresholdFatalValue);
				setNumericSensorUpperThresholdFatal(numericSensorUpperThresholdFatalValue);
			}
			else if (String::equal(property.getName().getString(), "LogInstanceID"))
			{
				Array<String> logInstanceIDValue;
				property.getValue().get(logInstanceIDValue);
				setLogInstanceID(logInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "LogMaxNumberOfRecords"))
			{
				Array<Uint64> logMaxNumberOfRecordsValue;
				property.getValue().get(logMaxNumberOfRecordsValue);
				setLogMaxNumberOfRecords(logMaxNumberOfRecordsValue);
			}
			else if (String::equal(property.getName().getString(), "LogCurrentNumberOfRecords"))
			{
				Array<Uint64> logCurrentNumberOfRecordsValue;
				property.getValue().get(logCurrentNumberOfRecordsValue);
				setLogCurrentNumberOfRecords(logCurrentNumberOfRecordsValue);
			}
			else if (String::equal(property.getName().getString(), "LogOverWritePolicy"))
			{
				Array<Uint16> logOverWritePolicyValue;
				property.getValue().get(logOverWritePolicyValue);
				setLogOverWritePolicy(logOverWritePolicyValue);
			}
			else if (String::equal(property.getName().getString(), "LogState"))
			{
				Array<Uint16> logStateValue;
				property.getValue().get(logStateValue);
				setLogState(logStateValue);
			}
			else if (String::equal(property.getName().getString(), "StructuredBootString"))
			{
				Array<String> structuredBootStringValue;
				property.getValue().get(structuredBootStringValue);
				setStructuredBootString(structuredBootStringValue);
			}
			else if (String::equal(property.getName().getString(), "PersistentBootConfigOrder"))
			{
				Array<Uint8> persistentBootConfigOrderValue;
				property.getValue().get(persistentBootConfigOrderValue);
				setPersistentBootConfigOrder(persistentBootConfigOrderValue);
			}
			else if (String::equal(property.getName().getString(), "OneTimeBootSource"))
			{
				Uint8 oneTimeBootSourceValue;
				property.getValue().get(oneTimeBootSourceValue);
				setOneTimeBootSource(oneTimeBootSourceValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfProcessors"))
			{
				Uint16 numberOfProcessorsValue;
				property.getValue().get(numberOfProcessorsValue);
				setNumberOfProcessors(numberOfProcessorsValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfProcessorCores"))
			{
				Uint16 numberOfProcessorCoresValue;
				property.getValue().get(numberOfProcessorCoresValue);
				setNumberOfProcessorCores(numberOfProcessorCoresValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfProcessorThreads"))
			{
				Uint16 numberOfProcessorThreadsValue;
				property.getValue().get(numberOfProcessorThreadsValue);
				setNumberOfProcessorThreads(numberOfProcessorThreadsValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessorFamily"))
			{
				Uint16 processorFamilyValue;
				property.getValue().get(processorFamilyValue);
				setProcessorFamily(processorFamilyValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessorMaxClockSpeed"))
			{
				Uint32 processorMaxClockSpeedValue;
				property.getValue().get(processorMaxClockSpeedValue);
				setProcessorMaxClockSpeed(processorMaxClockSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "MemoryBlockSize"))
			{
				Uint64 memoryBlockSizeValue;
				property.getValue().get(memoryBlockSizeValue);
				setMemoryBlockSize(memoryBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MemoryNumberOfBlocks"))
			{
				Uint64 memoryNumberOfBlocksValue;
				property.getValue().get(memoryNumberOfBlocksValue);
				setMemoryNumberOfBlocks(memoryNumberOfBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "MemoryConsumableBlocks"))
			{
				Uint64 memoryConsumableBlocksValue;
				property.getValue().get(memoryConsumableBlocksValue);
				setMemoryConsumableBlocks(memoryConsumableBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentBIOSMajorVersion"))
			{
				Uint16 currentBIOSMajorVersionValue;
				property.getValue().get(currentBIOSMajorVersionValue);
				setCurrentBIOSMajorVersion(currentBIOSMajorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentBIOSMinorVersion"))
			{
				Uint16 currentBIOSMinorVersionValue;
				property.getValue().get(currentBIOSMinorVersionValue);
				setCurrentBIOSMinorVersion(currentBIOSMinorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentBIOSRevisionNumber"))
			{
				Uint16 currentBIOSRevisionNumberValue;
				property.getValue().get(currentBIOSRevisionNumberValue);
				setCurrentBIOSRevisionNumber(currentBIOSRevisionNumberValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentBIOSBuildNumber"))
			{
				Uint16 currentBIOSBuildNumberValue;
				property.getValue().get(currentBIOSBuildNumberValue);
				setCurrentBIOSBuildNumber(currentBIOSBuildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentManagementFirmwareMajorVersion"))
			{
				Uint16 currentManagementFirmwareMajorVersionValue;
				property.getValue().get(currentManagementFirmwareMajorVersionValue);
				setCurrentManagementFirmwareMajorVersion(currentManagementFirmwareMajorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentManagementFirmwareMinorVersion"))
			{
				Uint16 currentManagementFirmwareMinorVersionValue;
				property.getValue().get(currentManagementFirmwareMinorVersionValue);
				setCurrentManagementFirmwareMinorVersion(currentManagementFirmwareMinorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentManagementFirmwareRevisionNumber"))
			{
				Uint16 currentManagementFirmwareRevisionNumberValue;
				property.getValue().get(currentManagementFirmwareRevisionNumberValue);
				setCurrentManagementFirmwareRevisionNumber(currentManagementFirmwareRevisionNumberValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentManagementFirmwareBuildNumber"))
			{
				Uint16 currentManagementFirmwareBuildNumberValue;
				property.getValue().get(currentManagementFirmwareBuildNumberValue);
				setCurrentManagementFirmwareBuildNumber(currentManagementFirmwareBuildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentManagementFirmwareElementName"))
			{
				String currentManagementFirmwareElementNameValue;
				property.getValue().get(currentManagementFirmwareElementNameValue);
				setCurrentManagementFirmwareElementName(currentManagementFirmwareElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentManagementFirmwareVersionString"))
			{
				String currentManagementFirmwareVersionStringValue;
				property.getValue().get(currentManagementFirmwareVersionStringValue);
				setCurrentManagementFirmwareVersionString(currentManagementFirmwareVersionStringValue);
			}
			else if (String::equal(property.getName().getString(), "OSType"))
			{
				Uint16 oSTypeValue;
				property.getValue().get(oSTypeValue);
				setOSType(oSTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OSVersion"))
			{
				String oSVersionValue;
				property.getValue().get(oSVersionValue);
				setOSVersion(oSVersionValue);
			}
			else if (String::equal(property.getName().getString(), "OSEnabledState"))
			{
				Uint16 oSEnabledStateValue;
				property.getValue().get(oSEnabledStateValue);
				setOSEnabledState(oSEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentBIOSVersionString"))
			{
				String currentBIOSVersionStringValue;
				property.getValue().get(currentBIOSVersionStringValue);
				setCurrentBIOSVersionString(currentBIOSVersionStringValue);
			}
			else if (String::equal(property.getName().getString(), "Dedicated"))
			{
				Array<Uint16> dedicatedValue;
				property.getValue().get(dedicatedValue);
				setDedicated(dedicatedValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifyingDescriptions"))
			{
				Array<String> identifyingDescriptionsValue;
				property.getValue().get(identifyingDescriptionsValue);
				setIdentifyingDescriptions(identifyingDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDedicatedDescriptions"))
			{
				Array<String> otherDedicatedDescriptionsValue;
				property.getValue().get(otherDedicatedDescriptionsValue);
				setOtherDedicatedDescriptions(otherDedicatedDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherIdentifyingInfo"))
			{
				Array<String> otherIdentifyingInfoValue;
				property.getValue().get(otherIdentifyingInfoValue);
				setOtherIdentifyingInfo(otherIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessorCurrentClockSpeed"))
			{
				Uint32 processorCurrentClockSpeedValue;
				property.getValue().get(processorCurrentClockSpeedValue);
				setProcessorCurrentClockSpeed(processorCurrentClockSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorContext"))
			{
				Array<String> numericSensorContextValue;
				property.getValue().get(numericSensorContextValue);
				setNumericSensorContext(numericSensorContextValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorLowerThresholdCritical"))
			{
				Array<Sint32> numericSensorLowerThresholdCriticalValue;
				property.getValue().get(numericSensorLowerThresholdCriticalValue);
				setNumericSensorLowerThresholdCritical(numericSensorLowerThresholdCriticalValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorLowerThresholdFatal"))
			{
				Array<Sint32> numericSensorLowerThresholdFatalValue;
				property.getValue().get(numericSensorLowerThresholdFatalValue);
				setNumericSensorLowerThresholdFatal(numericSensorLowerThresholdFatalValue);
			}
			else if (String::equal(property.getName().getString(), "NumericSensorLowerThresholdNonCritical"))
			{
				Array<Sint32> numericSensorLowerThresholdNonCriticalValue;
				property.getValue().get(numericSensorLowerThresholdNonCriticalValue);
				setNumericSensorLowerThresholdNonCritical(numericSensorLowerThresholdNonCriticalValue);
			}
	}
	return true;
}

Uint32 UNIX_PhysicalComputerSystemView::invokeRequestStateChange(
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

Uint32 UNIX_PhysicalComputerSystemView::invokeClearLog(
		String &inLogInstanceID
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ClearLog */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalComputerSystemView::invokeInstallSoftwareFromURI(
		CIMInstance &inJob,
		Array<Uint16> &inClassifications,
		String &inURI,
		Array<Uint16> &inInstallOptions,
		Array<String> &inInstallOptionsValues
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method InstallSoftwareFromURI */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalComputerSystemView::invokeModifyPersistentBootConfigOrder(
		Array<String> &inStructuredBootString,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method ModifyPersistentBootConfigOrder */
	
	
	
	return returnValue;
}

Uint32 UNIX_PhysicalComputerSystemView::invokeSetOneTimeBootSource(
		String &inStructuredBootString,
		CIMInstance &inJob
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method SetOneTimeBootSource */
	
	
	
	return returnValue;
}


Boolean UNIX_PhysicalComputerSystemView::initialize()
{
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PhysicalComputerSystemView");
	_generation = Uint64(0);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_requestedState = Uint16(0);
	_operationalStatus.clear();
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_fRUInfoSupported = Boolean(false);
	_tag = String ("");
	_manufacturer = String ("");
	_model = String ("");
	_sKU = String ("");
	_serialNumber = String ("");
	_version = String ("");
	_partNumber = String ("");
	_powerUtilizationModesSupported.clear();
	_powerUtilizationMode = Uint16(0);
	_powerAllocationLimit = Uint64(0);
	_numericSensorElementName.clear();
	_numericSensorEnabledState.clear();
	_numericSensorHealthState.clear();
	_numericSensorCurrentState.clear();
	_numericSensorPrimaryStatus.clear();
	_numericSensorBaseUnits.clear();
	_numericSensorUnitModifier.clear();
	_numericSensorRateUnits.clear();
	_numericSensorCurrentReading.clear();
	_numericSensorSensorType.clear();
	_numericSensorOtherSensorTypeDescription.clear();
	_numericSensorUpperThresholdNonCritical.clear();
	_numericSensorUpperThresholdCritical.clear();
	_numericSensorUpperThresholdFatal.clear();
	_logInstanceID.clear();
	_logMaxNumberOfRecords.clear();
	_logCurrentNumberOfRecords.clear();
	_logOverWritePolicy.clear();
	_logState.clear();
	_structuredBootString.clear();
	_persistentBootConfigOrder.clear();
	_oneTimeBootSource = Uint8(0);
	_numberOfProcessors = Uint16(0);
	_numberOfProcessorCores = Uint16(0);
	_numberOfProcessorThreads = Uint16(0);
	_processorFamily = Uint16(0);
	_processorMaxClockSpeed = Uint32(0);
	_memoryBlockSize = Uint64(0);
	_memoryNumberOfBlocks = Uint64(0);
	_memoryConsumableBlocks = Uint64(0);
	_currentBIOSMajorVersion = Uint16(0);
	_currentBIOSMinorVersion = Uint16(0);
	_currentBIOSRevisionNumber = Uint16(0);
	_currentBIOSBuildNumber = Uint16(0);
	_currentManagementFirmwareMajorVersion = Uint16(0);
	_currentManagementFirmwareMinorVersion = Uint16(0);
	_currentManagementFirmwareRevisionNumber = Uint16(0);
	_currentManagementFirmwareBuildNumber = Uint16(0);
	_currentManagementFirmwareElementName = String ("");
	_currentManagementFirmwareVersionString = String ("");
	_oSType = Uint16(0);
	_oSVersion = String ("");
	_oSEnabledState = Uint16(0);
	_currentBIOSVersionString = String ("");
	_dedicated.clear();
	_identifyingDescriptions.clear();
	_otherDedicatedDescriptions.clear();
	_otherIdentifyingInfo.clear();
	_processorCurrentClockSpeed = Uint32(0);
	_numericSensorContext.clear();
	_numericSensorLowerThresholdCritical.clear();
	_numericSensorLowerThresholdFatal.clear();
	_numericSensorLowerThresholdNonCritical.clear();
	
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::finalize()
{
	return false;
}


Boolean UNIX_PhysicalComputerSystemView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::validateInstance()
{
	return true;
}

