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


/* **** Version *** */
/*
2.36.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
This class defines a view class for a physical computer system.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_View:

			UNIX_PhysicalComputerSystemView:
				EnabledState UInt16
				RequestedState UInt16
				OperationalStatus UInt16
				HealthState UInt16
				FRUInfoSupported Boolean
				Tag String
				Manufacturer String
				Model String
				SKU String
				SerialNumber String
				Version String
				PartNumber String
				PowerUtilizationModesSupported UInt16
				PowerUtilizationMode UInt16
				PowerAllocationLimit UInt64
				NumericSensorElementName String
				NumericSensorEnabledState UInt16
				NumericSensorHealthState UInt16
				NumericSensorCurrentState String
				NumericSensorPrimaryStatus UInt16
				NumericSensorBaseUnits UInt16
				NumericSensorUnitModifier SInt32
				NumericSensorRateUnits UInt16
				NumericSensorCurrentReading SInt32
				NumericSensorSensorType UInt16
				NumericSensorOtherSensorTypeDescription String
				NumericSensorUpperThresholdNonCritical SInt32
				NumericSensorUpperThresholdCritical SInt32
				NumericSensorUpperThresholdFatal SInt32
				LogInstanceID String
				LogMaxNumberOfRecords UInt64
				LogCurrentNumberOfRecords UInt64
				LogOverWritePolicy UInt16
				LogState UInt16
				StructuredBootString String
				PersistentBootConfigOrder UInt8
				OneTimeBootSource UInt8
				NumberOfProcessors UInt16
				NumberOfProcessorCores UInt16
				NumberOfProcessorThreads UInt16
				ProcessorFamily UInt16
				ProcessorMaxClockSpeed UInt32
				MemoryBlockSize UInt64
				MemoryNumberOfBlocks UInt64
				MemoryConsumableBlocks UInt64
				CurrentBIOSMajorVersion UInt16
				CurrentBIOSMinorVersion UInt16
				CurrentBIOSRevisionNumber UInt16
				CurrentBIOSBuildNumber UInt16
				CurrentManagementFirmwareMajorVersion UInt16
				CurrentManagementFirmwareMinorVersion UInt16
				CurrentManagementFirmwareRevisionNumber UInt16
				CurrentManagementFirmwareBuildNumber UInt16
				CurrentManagementFirmwareElementName String
				CurrentManagementFirmwareVersionString String
				OSType UInt16
				OSVersion String
				OSEnabledState UInt16
				CurrentBIOSVersionString String
				Dedicated UInt16
				IdentifyingDescriptions String
				OtherDedicatedDescriptions String
				OtherIdentifyingInfo String
				ProcessorCurrentClockSpeed UInt32
				NumericSensorContext String
				NumericSensorLowerThresholdCritical SInt32
				NumericSensorLowerThresholdFatal SInt32
				NumericSensorLowerThresholdNonCritical SInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_View:

			UNIX_PhysicalComputerSystemView:
				RequestStateChange UInt32
				ClearLog UInt32
				InstallSoftwareFromURI UInt32
				ModifyPersistentBootConfigOrder UInt32
				SetOneTimeBootSource UInt32


*/

#ifndef __UNIX_PHYSICALCOMPUTERSYSTEMVIEW_H
#define __UNIX_PHYSICALCOMPUTERSYSTEMVIEW_H


#include "CIM_View.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_PhysicalComputerSystemViewDeps.h"


#ifndef PROPERTY_ENABLED_STATE
#define PROPERTY_ENABLED_STATE \
					"EnabledState"
#endif

#ifndef PROPERTY_REQUESTED_STATE
#define PROPERTY_REQUESTED_STATE \
					"RequestedState"
#endif

#ifndef PROPERTY_OPERATIONAL_STATUS
#define PROPERTY_OPERATIONAL_STATUS \
					"OperationalStatus"
#endif

#ifndef PROPERTY_HEALTH_STATE
#define PROPERTY_HEALTH_STATE \
					"HealthState"
#endif

#ifndef PROPERTY_F_R_U_INFO_SUPPORTED
#define PROPERTY_F_R_U_INFO_SUPPORTED \
					"FRUInfoSupported"
#endif

#ifndef PROPERTY_TAG
#define PROPERTY_TAG \
					"Tag"
#endif

#ifndef PROPERTY_MANUFACTURER
#define PROPERTY_MANUFACTURER \
					"Manufacturer"
#endif

#ifndef PROPERTY_MODEL
#define PROPERTY_MODEL \
					"Model"
#endif

#ifndef PROPERTY_S_K_U
#define PROPERTY_S_K_U \
					"SKU"
#endif

#ifndef PROPERTY_SERIAL_NUMBER
#define PROPERTY_SERIAL_NUMBER \
					"SerialNumber"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_PART_NUMBER
#define PROPERTY_PART_NUMBER \
					"PartNumber"
#endif

#ifndef PROPERTY_POWER_UTILIZATION_MODES_SUPPORTED
#define PROPERTY_POWER_UTILIZATION_MODES_SUPPORTED \
					"PowerUtilizationModesSupported"
#endif

#ifndef PROPERTY_POWER_UTILIZATION_MODE
#define PROPERTY_POWER_UTILIZATION_MODE \
					"PowerUtilizationMode"
#endif

#ifndef PROPERTY_POWER_ALLOCATION_LIMIT
#define PROPERTY_POWER_ALLOCATION_LIMIT \
					"PowerAllocationLimit"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_ELEMENT_NAME
#define PROPERTY_NUMERIC_SENSOR_ELEMENT_NAME \
					"NumericSensorElementName"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_ENABLED_STATE
#define PROPERTY_NUMERIC_SENSOR_ENABLED_STATE \
					"NumericSensorEnabledState"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_HEALTH_STATE
#define PROPERTY_NUMERIC_SENSOR_HEALTH_STATE \
					"NumericSensorHealthState"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_CURRENT_STATE
#define PROPERTY_NUMERIC_SENSOR_CURRENT_STATE \
					"NumericSensorCurrentState"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_PRIMARY_STATUS
#define PROPERTY_NUMERIC_SENSOR_PRIMARY_STATUS \
					"NumericSensorPrimaryStatus"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_BASE_UNITS
#define PROPERTY_NUMERIC_SENSOR_BASE_UNITS \
					"NumericSensorBaseUnits"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_UNIT_MODIFIER
#define PROPERTY_NUMERIC_SENSOR_UNIT_MODIFIER \
					"NumericSensorUnitModifier"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_RATE_UNITS
#define PROPERTY_NUMERIC_SENSOR_RATE_UNITS \
					"NumericSensorRateUnits"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_CURRENT_READING
#define PROPERTY_NUMERIC_SENSOR_CURRENT_READING \
					"NumericSensorCurrentReading"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_SENSOR_TYPE
#define PROPERTY_NUMERIC_SENSOR_SENSOR_TYPE \
					"NumericSensorSensorType"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_OTHER_SENSOR_TYPE_DESCRIPTION
#define PROPERTY_NUMERIC_SENSOR_OTHER_SENSOR_TYPE_DESCRIPTION \
					"NumericSensorOtherSensorTypeDescription"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_NON_CRITICAL
#define PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_NON_CRITICAL \
					"NumericSensorUpperThresholdNonCritical"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_CRITICAL
#define PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_CRITICAL \
					"NumericSensorUpperThresholdCritical"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_FATAL
#define PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_FATAL \
					"NumericSensorUpperThresholdFatal"
#endif

#ifndef PROPERTY_LOG_INSTANCE_ID
#define PROPERTY_LOG_INSTANCE_ID \
					"LogInstanceID"
#endif

#ifndef PROPERTY_LOG_MAX_NUMBER_OF_RECORDS
#define PROPERTY_LOG_MAX_NUMBER_OF_RECORDS \
					"LogMaxNumberOfRecords"
#endif

#ifndef PROPERTY_LOG_CURRENT_NUMBER_OF_RECORDS
#define PROPERTY_LOG_CURRENT_NUMBER_OF_RECORDS \
					"LogCurrentNumberOfRecords"
#endif

#ifndef PROPERTY_LOG_OVER_WRITE_POLICY
#define PROPERTY_LOG_OVER_WRITE_POLICY \
					"LogOverWritePolicy"
#endif

#ifndef PROPERTY_LOG_STATE
#define PROPERTY_LOG_STATE \
					"LogState"
#endif

#ifndef PROPERTY_STRUCTURED_BOOT_STRING
#define PROPERTY_STRUCTURED_BOOT_STRING \
					"StructuredBootString"
#endif

#ifndef PROPERTY_PERSISTENT_BOOT_CONFIG_ORDER
#define PROPERTY_PERSISTENT_BOOT_CONFIG_ORDER \
					"PersistentBootConfigOrder"
#endif

#ifndef PROPERTY_ONE_TIME_BOOT_SOURCE
#define PROPERTY_ONE_TIME_BOOT_SOURCE \
					"OneTimeBootSource"
#endif

#ifndef PROPERTY_NUMBER_OF_PROCESSORS
#define PROPERTY_NUMBER_OF_PROCESSORS \
					"NumberOfProcessors"
#endif

#ifndef PROPERTY_NUMBER_OF_PROCESSOR_CORES
#define PROPERTY_NUMBER_OF_PROCESSOR_CORES \
					"NumberOfProcessorCores"
#endif

#ifndef PROPERTY_NUMBER_OF_PROCESSOR_THREADS
#define PROPERTY_NUMBER_OF_PROCESSOR_THREADS \
					"NumberOfProcessorThreads"
#endif

#ifndef PROPERTY_PROCESSOR_FAMILY
#define PROPERTY_PROCESSOR_FAMILY \
					"ProcessorFamily"
#endif

#ifndef PROPERTY_PROCESSOR_MAX_CLOCK_SPEED
#define PROPERTY_PROCESSOR_MAX_CLOCK_SPEED \
					"ProcessorMaxClockSpeed"
#endif

#ifndef PROPERTY_MEMORY_BLOCK_SIZE
#define PROPERTY_MEMORY_BLOCK_SIZE \
					"MemoryBlockSize"
#endif

#ifndef PROPERTY_MEMORY_NUMBER_OF_BLOCKS
#define PROPERTY_MEMORY_NUMBER_OF_BLOCKS \
					"MemoryNumberOfBlocks"
#endif

#ifndef PROPERTY_MEMORY_CONSUMABLE_BLOCKS
#define PROPERTY_MEMORY_CONSUMABLE_BLOCKS \
					"MemoryConsumableBlocks"
#endif

#ifndef PROPERTY_CURRENT_BIOS_MAJOR_VERSION
#define PROPERTY_CURRENT_BIOS_MAJOR_VERSION \
					"CurrentBIOSMajorVersion"
#endif

#ifndef PROPERTY_CURRENT_BIOS_MINOR_VERSION
#define PROPERTY_CURRENT_BIOS_MINOR_VERSION \
					"CurrentBIOSMinorVersion"
#endif

#ifndef PROPERTY_CURRENT_BIOS_REVISION_NUMBER
#define PROPERTY_CURRENT_BIOS_REVISION_NUMBER \
					"CurrentBIOSRevisionNumber"
#endif

#ifndef PROPERTY_CURRENT_BIOS_BUILD_NUMBER
#define PROPERTY_CURRENT_BIOS_BUILD_NUMBER \
					"CurrentBIOSBuildNumber"
#endif

#ifndef PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MAJOR_VERSION
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MAJOR_VERSION \
					"CurrentManagementFirmwareMajorVersion"
#endif

#ifndef PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MINOR_VERSION
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MINOR_VERSION \
					"CurrentManagementFirmwareMinorVersion"
#endif

#ifndef PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_REVISION_NUMBER
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_REVISION_NUMBER \
					"CurrentManagementFirmwareRevisionNumber"
#endif

#ifndef PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_BUILD_NUMBER
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_BUILD_NUMBER \
					"CurrentManagementFirmwareBuildNumber"
#endif

#ifndef PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_ELEMENT_NAME
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_ELEMENT_NAME \
					"CurrentManagementFirmwareElementName"
#endif

#ifndef PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_VERSION_STRING
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_VERSION_STRING \
					"CurrentManagementFirmwareVersionString"
#endif

#ifndef PROPERTY_OS_TYPE
#define PROPERTY_OS_TYPE \
					"OSType"
#endif

#ifndef PROPERTY_OS_VERSION
#define PROPERTY_OS_VERSION \
					"OSVersion"
#endif

#ifndef PROPERTY_OS_ENABLED_STATE
#define PROPERTY_OS_ENABLED_STATE \
					"OSEnabledState"
#endif

#ifndef PROPERTY_CURRENT_BIOS_VERSION_STRING
#define PROPERTY_CURRENT_BIOS_VERSION_STRING \
					"CurrentBIOSVersionString"
#endif

#ifndef PROPERTY_DEDICATED
#define PROPERTY_DEDICATED \
					"Dedicated"
#endif

#ifndef PROPERTY_IDENTIFYING_DESCRIPTIONS
#define PROPERTY_IDENTIFYING_DESCRIPTIONS \
					"IdentifyingDescriptions"
#endif

#ifndef PROPERTY_OTHER_DEDICATED_DESCRIPTIONS
#define PROPERTY_OTHER_DEDICATED_DESCRIPTIONS \
					"OtherDedicatedDescriptions"
#endif

#ifndef PROPERTY_OTHER_IDENTIFYING_INFO
#define PROPERTY_OTHER_IDENTIFYING_INFO \
					"OtherIdentifyingInfo"
#endif

#ifndef PROPERTY_PROCESSOR_CURRENT_CLOCK_SPEED
#define PROPERTY_PROCESSOR_CURRENT_CLOCK_SPEED \
					"ProcessorCurrentClockSpeed"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_CONTEXT
#define PROPERTY_NUMERIC_SENSOR_CONTEXT \
					"NumericSensorContext"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_CRITICAL
#define PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_CRITICAL \
					"NumericSensorLowerThresholdCritical"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_FATAL
#define PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_FATAL \
					"NumericSensorLowerThresholdFatal"
#endif

#ifndef PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_NON_CRITICAL
#define PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_NON_CRITICAL \
					"NumericSensorLowerThresholdNonCritical"
#endif



class UNIX_PhysicalComputerSystemView :
	public CIM_View
{
public:

	UNIX_PhysicalComputerSystemView();
	~UNIX_PhysicalComputerSystemView();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual void setEnabledState(Uint16&);
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual void setRequestedState(Uint16&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getFRUInfoSupported(CIMProperty&) const;
	virtual Boolean getFRUInfoSupported() const;
	virtual void setFRUInfoSupported(Boolean&);
	virtual Boolean getTag(CIMProperty&) const;
	virtual String getTag() const;
	virtual void setTag(String&);
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual void setManufacturer(String&);
	virtual Boolean getModel(CIMProperty&) const;
	virtual String getModel() const;
	virtual void setModel(String&);
	virtual Boolean getSKU(CIMProperty&) const;
	virtual String getSKU() const;
	virtual void setSKU(String&);
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual void setSerialNumber(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getPartNumber(CIMProperty&) const;
	virtual String getPartNumber() const;
	virtual void setPartNumber(String&);
	virtual Boolean getPowerUtilizationModesSupported(CIMProperty&) const;
	virtual Array<Uint16> getPowerUtilizationModesSupported() const;
	virtual void setPowerUtilizationModesSupported(Array<Uint16>&);
	virtual Boolean getPowerUtilizationMode(CIMProperty&) const;
	virtual Uint16 getPowerUtilizationMode() const;
	virtual void setPowerUtilizationMode(Uint16&);
	virtual Boolean getPowerAllocationLimit(CIMProperty&) const;
	virtual Uint64 getPowerAllocationLimit() const;
	virtual void setPowerAllocationLimit(Uint64&);
	virtual Boolean getNumericSensorElementName(CIMProperty&) const;
	virtual Array<String> getNumericSensorElementName() const;
	virtual void setNumericSensorElementName(Array<String>&);
	virtual Boolean getNumericSensorEnabledState(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorEnabledState() const;
	virtual void setNumericSensorEnabledState(Array<Uint16>&);
	virtual Boolean getNumericSensorHealthState(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorHealthState() const;
	virtual void setNumericSensorHealthState(Array<Uint16>&);
	virtual Boolean getNumericSensorCurrentState(CIMProperty&) const;
	virtual Array<String> getNumericSensorCurrentState() const;
	virtual void setNumericSensorCurrentState(Array<String>&);
	virtual Boolean getNumericSensorPrimaryStatus(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorPrimaryStatus() const;
	virtual void setNumericSensorPrimaryStatus(Array<Uint16>&);
	virtual Boolean getNumericSensorBaseUnits(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorBaseUnits() const;
	virtual void setNumericSensorBaseUnits(Array<Uint16>&);
	virtual Boolean getNumericSensorUnitModifier(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorUnitModifier() const;
	virtual void setNumericSensorUnitModifier(Array<Sint32>&);
	virtual Boolean getNumericSensorRateUnits(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorRateUnits() const;
	virtual void setNumericSensorRateUnits(Array<Uint16>&);
	virtual Boolean getNumericSensorCurrentReading(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorCurrentReading() const;
	virtual void setNumericSensorCurrentReading(Array<Sint32>&);
	virtual Boolean getNumericSensorSensorType(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorSensorType() const;
	virtual void setNumericSensorSensorType(Array<Uint16>&);
	virtual Boolean getNumericSensorOtherSensorTypeDescription(CIMProperty&) const;
	virtual Array<String> getNumericSensorOtherSensorTypeDescription() const;
	virtual void setNumericSensorOtherSensorTypeDescription(Array<String>&);
	virtual Boolean getNumericSensorUpperThresholdNonCritical(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorUpperThresholdNonCritical() const;
	virtual void setNumericSensorUpperThresholdNonCritical(Array<Sint32>&);
	virtual Boolean getNumericSensorUpperThresholdCritical(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorUpperThresholdCritical() const;
	virtual void setNumericSensorUpperThresholdCritical(Array<Sint32>&);
	virtual Boolean getNumericSensorUpperThresholdFatal(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorUpperThresholdFatal() const;
	virtual void setNumericSensorUpperThresholdFatal(Array<Sint32>&);
	virtual Boolean getLogInstanceID(CIMProperty&) const;
	virtual Array<String> getLogInstanceID() const;
	virtual void setLogInstanceID(Array<String>&);
	virtual Boolean getLogMaxNumberOfRecords(CIMProperty&) const;
	virtual Array<Uint64> getLogMaxNumberOfRecords() const;
	virtual void setLogMaxNumberOfRecords(Array<Uint64>&);
	virtual Boolean getLogCurrentNumberOfRecords(CIMProperty&) const;
	virtual Array<Uint64> getLogCurrentNumberOfRecords() const;
	virtual void setLogCurrentNumberOfRecords(Array<Uint64>&);
	virtual Boolean getLogOverWritePolicy(CIMProperty&) const;
	virtual Array<Uint16> getLogOverWritePolicy() const;
	virtual void setLogOverWritePolicy(Array<Uint16>&);
	virtual Boolean getLogState(CIMProperty&) const;
	virtual Array<Uint16> getLogState() const;
	virtual void setLogState(Array<Uint16>&);
	virtual Boolean getStructuredBootString(CIMProperty&) const;
	virtual Array<String> getStructuredBootString() const;
	virtual void setStructuredBootString(Array<String>&);
	virtual Boolean getPersistentBootConfigOrder(CIMProperty&) const;
	virtual Array<Uint8> getPersistentBootConfigOrder() const;
	virtual void setPersistentBootConfigOrder(Array<Uint8>&);
	virtual Boolean getOneTimeBootSource(CIMProperty&) const;
	virtual Uint8 getOneTimeBootSource() const;
	virtual void setOneTimeBootSource(Uint8&);
	virtual Boolean getNumberOfProcessors(CIMProperty&) const;
	virtual Uint16 getNumberOfProcessors() const;
	virtual void setNumberOfProcessors(Uint16&);
	virtual Boolean getNumberOfProcessorCores(CIMProperty&) const;
	virtual Uint16 getNumberOfProcessorCores() const;
	virtual void setNumberOfProcessorCores(Uint16&);
	virtual Boolean getNumberOfProcessorThreads(CIMProperty&) const;
	virtual Uint16 getNumberOfProcessorThreads() const;
	virtual void setNumberOfProcessorThreads(Uint16&);
	virtual Boolean getProcessorFamily(CIMProperty&) const;
	virtual Uint16 getProcessorFamily() const;
	virtual void setProcessorFamily(Uint16&);
	virtual Boolean getProcessorMaxClockSpeed(CIMProperty&) const;
	virtual Uint32 getProcessorMaxClockSpeed() const;
	virtual void setProcessorMaxClockSpeed(Uint32&);
	virtual Boolean getMemoryBlockSize(CIMProperty&) const;
	virtual Uint64 getMemoryBlockSize() const;
	virtual void setMemoryBlockSize(Uint64&);
	virtual Boolean getMemoryNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getMemoryNumberOfBlocks() const;
	virtual void setMemoryNumberOfBlocks(Uint64&);
	virtual Boolean getMemoryConsumableBlocks(CIMProperty&) const;
	virtual Uint64 getMemoryConsumableBlocks() const;
	virtual void setMemoryConsumableBlocks(Uint64&);
	virtual Boolean getCurrentBIOSMajorVersion(CIMProperty&) const;
	virtual Uint16 getCurrentBIOSMajorVersion() const;
	virtual void setCurrentBIOSMajorVersion(Uint16&);
	virtual Boolean getCurrentBIOSMinorVersion(CIMProperty&) const;
	virtual Uint16 getCurrentBIOSMinorVersion() const;
	virtual void setCurrentBIOSMinorVersion(Uint16&);
	virtual Boolean getCurrentBIOSRevisionNumber(CIMProperty&) const;
	virtual Uint16 getCurrentBIOSRevisionNumber() const;
	virtual void setCurrentBIOSRevisionNumber(Uint16&);
	virtual Boolean getCurrentBIOSBuildNumber(CIMProperty&) const;
	virtual Uint16 getCurrentBIOSBuildNumber() const;
	virtual void setCurrentBIOSBuildNumber(Uint16&);
	virtual Boolean getCurrentManagementFirmwareMajorVersion(CIMProperty&) const;
	virtual Uint16 getCurrentManagementFirmwareMajorVersion() const;
	virtual void setCurrentManagementFirmwareMajorVersion(Uint16&);
	virtual Boolean getCurrentManagementFirmwareMinorVersion(CIMProperty&) const;
	virtual Uint16 getCurrentManagementFirmwareMinorVersion() const;
	virtual void setCurrentManagementFirmwareMinorVersion(Uint16&);
	virtual Boolean getCurrentManagementFirmwareRevisionNumber(CIMProperty&) const;
	virtual Uint16 getCurrentManagementFirmwareRevisionNumber() const;
	virtual void setCurrentManagementFirmwareRevisionNumber(Uint16&);
	virtual Boolean getCurrentManagementFirmwareBuildNumber(CIMProperty&) const;
	virtual Uint16 getCurrentManagementFirmwareBuildNumber() const;
	virtual void setCurrentManagementFirmwareBuildNumber(Uint16&);
	virtual Boolean getCurrentManagementFirmwareElementName(CIMProperty&) const;
	virtual String getCurrentManagementFirmwareElementName() const;
	virtual void setCurrentManagementFirmwareElementName(String&);
	virtual Boolean getCurrentManagementFirmwareVersionString(CIMProperty&) const;
	virtual String getCurrentManagementFirmwareVersionString() const;
	virtual void setCurrentManagementFirmwareVersionString(String&);
	virtual Boolean getOSType(CIMProperty&) const;
	virtual Uint16 getOSType() const;
	virtual void setOSType(Uint16&);
	virtual Boolean getOSVersion(CIMProperty&) const;
	virtual String getOSVersion() const;
	virtual void setOSVersion(String&);
	virtual Boolean getOSEnabledState(CIMProperty&) const;
	virtual Uint16 getOSEnabledState() const;
	virtual void setOSEnabledState(Uint16&);
	virtual Boolean getCurrentBIOSVersionString(CIMProperty&) const;
	virtual String getCurrentBIOSVersionString() const;
	virtual void setCurrentBIOSVersionString(String&);
	virtual Boolean getDedicated(CIMProperty&) const;
	virtual Array<Uint16> getDedicated() const;
	virtual void setDedicated(Array<Uint16>&);
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual void setIdentifyingDescriptions(Array<String>&);
	virtual Boolean getOtherDedicatedDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherDedicatedDescriptions() const;
	virtual void setOtherDedicatedDescriptions(Array<String>&);
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual void setOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getProcessorCurrentClockSpeed(CIMProperty&) const;
	virtual Uint32 getProcessorCurrentClockSpeed() const;
	virtual void setProcessorCurrentClockSpeed(Uint32&);
	virtual Boolean getNumericSensorContext(CIMProperty&) const;
	virtual Array<String> getNumericSensorContext() const;
	virtual void setNumericSensorContext(Array<String>&);
	virtual Boolean getNumericSensorLowerThresholdCritical(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorLowerThresholdCritical() const;
	virtual void setNumericSensorLowerThresholdCritical(Array<Sint32>&);
	virtual Boolean getNumericSensorLowerThresholdFatal(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorLowerThresholdFatal() const;
	virtual void setNumericSensorLowerThresholdFatal(Array<Sint32>&);
	virtual Boolean getNumericSensorLowerThresholdNonCritical(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorLowerThresholdNonCritical() const;
	virtual void setNumericSensorLowerThresholdNonCritical(Array<Sint32>&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeClearLog(
		String &inLogInstanceID
	);

	virtual Uint32 invokeInstallSoftwareFromURI(
		CIMInstance &inJob,
		Array<Uint16> &inClassifications,
		String &inURI,
		Array<Uint16> &inInstallOptions,
		Array<String> &inInstallOptionsValues
	);

	virtual Uint32 invokeModifyPersistentBootConfigOrder(
		Array<String> &inStructuredBootString,
		CIMInstance &inJob
	);

	virtual Uint32 invokeSetOneTimeBootSource(
		String &inStructuredBootString,
		CIMInstance &inJob
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _enabledState;
	Uint16 _requestedState;
	Array<Uint16> _operationalStatus;
	Uint16 _healthState;
	Boolean _fRUInfoSupported;
	String _tag;
	String _manufacturer;
	String _model;
	String _sKU;
	String _serialNumber;
	String _version;
	String _partNumber;
	Array<Uint16> _powerUtilizationModesSupported;
	Uint16 _powerUtilizationMode;
	Uint64 _powerAllocationLimit;
	Array<String> _numericSensorElementName;
	Array<Uint16> _numericSensorEnabledState;
	Array<Uint16> _numericSensorHealthState;
	Array<String> _numericSensorCurrentState;
	Array<Uint16> _numericSensorPrimaryStatus;
	Array<Uint16> _numericSensorBaseUnits;
	Array<Sint32> _numericSensorUnitModifier;
	Array<Uint16> _numericSensorRateUnits;
	Array<Sint32> _numericSensorCurrentReading;
	Array<Uint16> _numericSensorSensorType;
	Array<String> _numericSensorOtherSensorTypeDescription;
	Array<Sint32> _numericSensorUpperThresholdNonCritical;
	Array<Sint32> _numericSensorUpperThresholdCritical;
	Array<Sint32> _numericSensorUpperThresholdFatal;
	Array<String> _logInstanceID;
	Array<Uint64> _logMaxNumberOfRecords;
	Array<Uint64> _logCurrentNumberOfRecords;
	Array<Uint16> _logOverWritePolicy;
	Array<Uint16> _logState;
	Array<String> _structuredBootString;
	Array<Uint8> _persistentBootConfigOrder;
	Uint8 _oneTimeBootSource;
	Uint16 _numberOfProcessors;
	Uint16 _numberOfProcessorCores;
	Uint16 _numberOfProcessorThreads;
	Uint16 _processorFamily;
	Uint32 _processorMaxClockSpeed;
	Uint64 _memoryBlockSize;
	Uint64 _memoryNumberOfBlocks;
	Uint64 _memoryConsumableBlocks;
	Uint16 _currentBIOSMajorVersion;
	Uint16 _currentBIOSMinorVersion;
	Uint16 _currentBIOSRevisionNumber;
	Uint16 _currentBIOSBuildNumber;
	Uint16 _currentManagementFirmwareMajorVersion;
	Uint16 _currentManagementFirmwareMinorVersion;
	Uint16 _currentManagementFirmwareRevisionNumber;
	Uint16 _currentManagementFirmwareBuildNumber;
	String _currentManagementFirmwareElementName;
	String _currentManagementFirmwareVersionString;
	Uint16 _oSType;
	String _oSVersion;
	Uint16 _oSEnabledState;
	String _currentBIOSVersionString;
	Array<Uint16> _dedicated;
	Array<String> _identifyingDescriptions;
	Array<String> _otherDedicatedDescriptions;
	Array<String> _otherIdentifyingInfo;
	Uint32 _processorCurrentClockSpeed;
	Array<String> _numericSensorContext;
	Array<Sint32> _numericSensorLowerThresholdCritical;
	Array<Sint32> _numericSensorLowerThresholdFatal;
	Array<Sint32> _numericSensorLowerThresholdNonCritical;

#	include "UNIX_PhysicalComputerSystemViewPrivate.h"


};

#endif /* UNIX_PHYSICALCOMPUTERSYSTEMVIEW */
