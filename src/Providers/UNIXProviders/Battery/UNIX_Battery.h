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
2.26.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::CoolingAndPower
*/


/* **** Description *** */
/*
Capabilities and management of the Battery. This class applies to both batteries in Laptop Systems and other internal or external batteries, such as an uninterruptible power supply (UPS).
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				EnabledState UInt16
				OtherEnabledState String
				RequestedState UInt16
				EnabledDefault UInt16
				TimeOfLastStateChange DateTime
				AvailableRequestedStates UInt16
				TransitioningToState UInt16

			CIM_AllocatedLogicalElement:
				AllocationState String

			CIM_LogicalDevice:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				DeviceID String
				PowerManagementSupported Boolean
				PowerManagementCapabilities UInt16
				Availability UInt16
				StatusInfo UInt16
				LastErrorCode UInt32
				ErrorDescription String
				ErrorCleared Boolean
				OtherIdentifyingInfo String
				PowerOnHours UInt64
				TotalPowerOnHours UInt64
				IdentifyingDescriptions String
				AdditionalAvailability UInt16
				MaxQuiesceTime UInt64
				LocationIndicator UInt16

			CIM_PowerSource:
				RatedMaxOutputPower UInt32
				OutputPowerUnits String
				IsACOutput Boolean

			UNIX_Battery:
				BatteryStatus UInt16
				TimeOnBattery UInt32
				EstimatedRunTime UInt32
				EstimatedChargeRemaining UInt16
				Chemistry UInt16
				DesignCapacity UInt32
				FullChargeCapacity UInt32
				DesignVoltage UInt64
				SmartBatteryVersion String
				TimeToFullCharge UInt32
				ExpectedLife UInt32
				MaxRechargeTime UInt32
				RechargeCount UInt32
				MaxRechargeCount UInt32
				RemainingCapacity UInt32
				RemainingCapacityMaxError UInt8
				ChargingStatus UInt16
				OtherChemistryDescription String
				HealthPercent UInt8
				PermanentErrorInfo UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_AllocatedLogicalElement:

			CIM_LogicalDevice:
				SetPowerState UInt32
				Reset UInt32
				EnableDevice UInt32
				OnlineDevice UInt32
				QuiesceDevice UInt32
				SaveProperties UInt32
				RestoreProperties UInt32

			CIM_PowerSource:

			UNIX_Battery:


*/

#ifndef __UNIX_BATTERY_H
#define __UNIX_BATTERY_H


#include "CIM_PowerSource.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_BatteryDeps.h"


#ifndef PROPERTY_BATTERY_STATUS
#define PROPERTY_BATTERY_STATUS \
					"BatteryStatus"
#endif

#ifndef PROPERTY_TIME_ON_BATTERY
#define PROPERTY_TIME_ON_BATTERY \
					"TimeOnBattery"
#endif

#ifndef PROPERTY_ESTIMATED_RUN_TIME
#define PROPERTY_ESTIMATED_RUN_TIME \
					"EstimatedRunTime"
#endif

#ifndef PROPERTY_ESTIMATED_CHARGE_REMAINING
#define PROPERTY_ESTIMATED_CHARGE_REMAINING \
					"EstimatedChargeRemaining"
#endif

#ifndef PROPERTY_CHEMISTRY
#define PROPERTY_CHEMISTRY \
					"Chemistry"
#endif

#ifndef PROPERTY_DESIGN_CAPACITY
#define PROPERTY_DESIGN_CAPACITY \
					"DesignCapacity"
#endif

#ifndef PROPERTY_FULL_CHARGE_CAPACITY
#define PROPERTY_FULL_CHARGE_CAPACITY \
					"FullChargeCapacity"
#endif

#ifndef PROPERTY_DESIGN_VOLTAGE
#define PROPERTY_DESIGN_VOLTAGE \
					"DesignVoltage"
#endif

#ifndef PROPERTY_SMART_BATTERY_VERSION
#define PROPERTY_SMART_BATTERY_VERSION \
					"SmartBatteryVersion"
#endif

#ifndef PROPERTY_TIME_TO_FULL_CHARGE
#define PROPERTY_TIME_TO_FULL_CHARGE \
					"TimeToFullCharge"
#endif

#ifndef PROPERTY_EXPECTED_LIFE
#define PROPERTY_EXPECTED_LIFE \
					"ExpectedLife"
#endif

#ifndef PROPERTY_MAX_RECHARGE_TIME
#define PROPERTY_MAX_RECHARGE_TIME \
					"MaxRechargeTime"
#endif

#ifndef PROPERTY_RECHARGE_COUNT
#define PROPERTY_RECHARGE_COUNT \
					"RechargeCount"
#endif

#ifndef PROPERTY_MAX_RECHARGE_COUNT
#define PROPERTY_MAX_RECHARGE_COUNT \
					"MaxRechargeCount"
#endif

#ifndef PROPERTY_REMAINING_CAPACITY
#define PROPERTY_REMAINING_CAPACITY \
					"RemainingCapacity"
#endif

#ifndef PROPERTY_REMAINING_CAPACITY_MAX_ERROR
#define PROPERTY_REMAINING_CAPACITY_MAX_ERROR \
					"RemainingCapacityMaxError"
#endif

#ifndef PROPERTY_CHARGING_STATUS
#define PROPERTY_CHARGING_STATUS \
					"ChargingStatus"
#endif

#ifndef PROPERTY_OTHER_CHEMISTRY_DESCRIPTION
#define PROPERTY_OTHER_CHEMISTRY_DESCRIPTION \
					"OtherChemistryDescription"
#endif

#ifndef PROPERTY_HEALTH_PERCENT
#define PROPERTY_HEALTH_PERCENT \
					"HealthPercent"
#endif

#ifndef PROPERTY_PERMANENT_ERROR_INFO
#define PROPERTY_PERMANENT_ERROR_INFO \
					"PermanentErrorInfo"
#endif



class UNIX_Battery :
	public CIM_PowerSource
{
public:

	UNIX_Battery();
	~UNIX_Battery();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual void setEnabledState(Uint16&);
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual void setOtherEnabledState(String&);
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual void setRequestedState(Uint16&);
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual void setEnabledDefault(Uint16&);
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual void setTimeOfLastStateChange(CIMDateTime&);
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual void setAvailableRequestedStates(Array<Uint16>&);
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual void setTransitioningToState(Uint16&);
	virtual Boolean getAllocationState(CIMProperty&) const;
	virtual String getAllocationState() const;
	virtual void setAllocationState(String&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual void setDeviceID(String&);
	virtual Boolean getPowerManagementSupported(CIMProperty&) const;
	virtual Boolean getPowerManagementSupported() const;
	virtual void setPowerManagementSupported(Boolean&);
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerManagementCapabilities() const;
	virtual void setPowerManagementCapabilities(Array<Uint16>&);
	virtual Boolean getAvailability(CIMProperty&) const;
	virtual Uint16 getAvailability() const;
	virtual void setAvailability(Uint16&);
	virtual Boolean getStatusInfo(CIMProperty&) const;
	virtual Uint16 getStatusInfo() const;
	virtual void setStatusInfo(Uint16&);
	virtual Boolean getLastErrorCode(CIMProperty&) const;
	virtual Uint32 getLastErrorCode() const;
	virtual void setLastErrorCode(Uint32&);
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual void setErrorDescription(String&);
	virtual Boolean getErrorCleared(CIMProperty&) const;
	virtual Boolean getErrorCleared() const;
	virtual void setErrorCleared(Boolean&);
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual void setOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getPowerOnHours(CIMProperty&) const;
	virtual Uint64 getPowerOnHours() const;
	virtual void setPowerOnHours(Uint64&);
	virtual Boolean getTotalPowerOnHours(CIMProperty&) const;
	virtual Uint64 getTotalPowerOnHours() const;
	virtual void setTotalPowerOnHours(Uint64&);
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual void setIdentifyingDescriptions(Array<String>&);
	virtual Boolean getAdditionalAvailability(CIMProperty&) const;
	virtual Array<Uint16> getAdditionalAvailability() const;
	virtual void setAdditionalAvailability(Array<Uint16>&);
	virtual Boolean getMaxQuiesceTime(CIMProperty&) const;
	virtual Uint64 getMaxQuiesceTime() const;
	virtual void setMaxQuiesceTime(Uint64&);
	virtual Boolean getLocationIndicator(CIMProperty&) const;
	virtual Uint16 getLocationIndicator() const;
	virtual void setLocationIndicator(Uint16&);
	virtual Boolean getRatedMaxOutputPower(CIMProperty&) const;
	virtual Uint32 getRatedMaxOutputPower() const;
	virtual void setRatedMaxOutputPower(Uint32&);
	virtual Boolean getOutputPowerUnits(CIMProperty&) const;
	virtual String getOutputPowerUnits() const;
	virtual void setOutputPowerUnits(String&);
	virtual Boolean getIsACOutput(CIMProperty&) const;
	virtual Boolean getIsACOutput() const;
	virtual void setIsACOutput(Boolean&);
	virtual Boolean getBatteryStatus(CIMProperty&) const;
	virtual Uint16 getBatteryStatus() const;
	virtual void setBatteryStatus(Uint16&);
	virtual Boolean getTimeOnBattery(CIMProperty&) const;
	virtual Uint32 getTimeOnBattery() const;
	virtual void setTimeOnBattery(Uint32&);
	virtual Boolean getEstimatedRunTime(CIMProperty&) const;
	virtual Uint32 getEstimatedRunTime() const;
	virtual void setEstimatedRunTime(Uint32&);
	virtual Boolean getEstimatedChargeRemaining(CIMProperty&) const;
	virtual Uint16 getEstimatedChargeRemaining() const;
	virtual void setEstimatedChargeRemaining(Uint16&);
	virtual Boolean getChemistry(CIMProperty&) const;
	virtual Uint16 getChemistry() const;
	virtual void setChemistry(Uint16&);
	virtual Boolean getDesignCapacity(CIMProperty&) const;
	virtual Uint32 getDesignCapacity() const;
	virtual void setDesignCapacity(Uint32&);
	virtual Boolean getFullChargeCapacity(CIMProperty&) const;
	virtual Uint32 getFullChargeCapacity() const;
	virtual void setFullChargeCapacity(Uint32&);
	virtual Boolean getDesignVoltage(CIMProperty&) const;
	virtual Uint64 getDesignVoltage() const;
	virtual void setDesignVoltage(Uint64&);
	virtual Boolean getSmartBatteryVersion(CIMProperty&) const;
	virtual String getSmartBatteryVersion() const;
	virtual void setSmartBatteryVersion(String&);
	virtual Boolean getTimeToFullCharge(CIMProperty&) const;
	virtual Uint32 getTimeToFullCharge() const;
	virtual void setTimeToFullCharge(Uint32&);
	virtual Boolean getExpectedLife(CIMProperty&) const;
	virtual Uint32 getExpectedLife() const;
	virtual void setExpectedLife(Uint32&);
	virtual Boolean getMaxRechargeTime(CIMProperty&) const;
	virtual Uint32 getMaxRechargeTime() const;
	virtual void setMaxRechargeTime(Uint32&);
	virtual Boolean getRechargeCount(CIMProperty&) const;
	virtual Uint32 getRechargeCount() const;
	virtual void setRechargeCount(Uint32&);
	virtual Boolean getMaxRechargeCount(CIMProperty&) const;
	virtual Uint32 getMaxRechargeCount() const;
	virtual void setMaxRechargeCount(Uint32&);
	virtual Boolean getRemainingCapacity(CIMProperty&) const;
	virtual Uint32 getRemainingCapacity() const;
	virtual void setRemainingCapacity(Uint32&);
	virtual Boolean getRemainingCapacityMaxError(CIMProperty&) const;
	virtual Uint8 getRemainingCapacityMaxError() const;
	virtual void setRemainingCapacityMaxError(Uint8&);
	virtual Boolean getChargingStatus(CIMProperty&) const;
	virtual Uint16 getChargingStatus() const;
	virtual void setChargingStatus(Uint16&);
	virtual Boolean getOtherChemistryDescription(CIMProperty&) const;
	virtual String getOtherChemistryDescription() const;
	virtual void setOtherChemistryDescription(String&);
	virtual Boolean getHealthPercent(CIMProperty&) const;
	virtual Uint8 getHealthPercent() const;
	virtual void setHealthPercent(Uint8&);
	virtual Boolean getPermanentErrorInfo(CIMProperty&) const;
	virtual Uint16 getPermanentErrorInfo() const;
	virtual void setPermanentErrorInfo(Uint16&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	);

	virtual Uint32 invokeReset();

	virtual Uint32 invokeEnableDevice(
		Boolean &inEnabled
	);

	virtual Uint32 invokeOnlineDevice(
		Boolean &inOnline
	);

	virtual Uint32 invokeQuiesceDevice(
		Boolean &inQuiesce
	);

	virtual Uint32 invokeSaveProperties();

	virtual Uint32 invokeRestoreProperties();



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	Uint16 _enabledState;
	String _otherEnabledState;
	Uint16 _requestedState;
	Uint16 _enabledDefault;
	CIMDateTime _timeOfLastStateChange;
	Array<Uint16> _availableRequestedStates;
	Uint16 _transitioningToState;
	String _allocationState;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _deviceID;
	Boolean _powerManagementSupported;
	Array<Uint16> _powerManagementCapabilities;
	Uint16 _availability;
	Uint16 _statusInfo;
	Uint32 _lastErrorCode;
	String _errorDescription;
	Boolean _errorCleared;
	Array<String> _otherIdentifyingInfo;
	Uint64 _powerOnHours;
	Uint64 _totalPowerOnHours;
	Array<String> _identifyingDescriptions;
	Array<Uint16> _additionalAvailability;
	Uint64 _maxQuiesceTime;
	Uint16 _locationIndicator;
	Uint32 _ratedMaxOutputPower;
	String _outputPowerUnits;
	Boolean _isACOutput;
	Uint16 _batteryStatus;
	Uint32 _timeOnBattery;
	Uint32 _estimatedRunTime;
	Uint16 _estimatedChargeRemaining;
	Uint16 _chemistry;
	Uint32 _designCapacity;
	Uint32 _fullChargeCapacity;
	Uint64 _designVoltage;
	String _smartBatteryVersion;
	Uint32 _timeToFullCharge;
	Uint32 _expectedLife;
	Uint32 _maxRechargeTime;
	Uint32 _rechargeCount;
	Uint32 _maxRechargeCount;
	Uint32 _remainingCapacity;
	Uint8 _remainingCapacityMaxError;
	Uint16 _chargingStatus;
	String _otherChemistryDescription;
	Uint8 _healthPercent;
	Uint16 _permanentErrorInfo;

#	include "UNIX_BatteryPrivate.h"


};

#endif /* UNIX_BATTERY */
