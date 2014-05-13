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
2.17.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::CoolingAndPower
*/


/* **** Description *** */
/*
Capabilities and management of the PowerSupply.The PowerSupply may have two input voltage ranges. The attributes of each input voltage (high and low voltage bounds, high and low frequency bounds, maximum input power, and maximum output power) are modeled separately. Additional attributes of the power supply including the active input voltage range and type of range switching may also be modeled.
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

			UNIX_PowerSupply:
				IsSwitchingSupply Boolean
				Range1InputVoltageLow UInt32
				Range1InputVoltageHigh UInt32
				Range1InputFrequencyLow UInt32
				Range1InputFrequencyHigh UInt32
				Range2InputVoltageLow UInt32
				Range2InputVoltageHigh UInt32
				Range2InputFrequencyLow UInt32
				Range2InputFrequencyHigh UInt32
				ActiveInputVoltage UInt16
				TypeOfRangeSwitching UInt16
				TotalOutputPower UInt32
				Range1MaxOutputPower UInt32
				Range2MaxOutputPower UInt32
				Range1MaxInputPower UInt32
				Range2MaxInputPower UInt32
				InputPowerUnits String
				IsACInput Boolean
				NumberOfPhasesUtilized UInt32
				NominalPhaseWiring UInt32


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

			UNIX_PowerSupply:


*/

#ifndef __UNIX_POWERSUPPLY_H
#define __UNIX_POWERSUPPLY_H


#include "CIM_PowerSource.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_PowerSupplyDeps.h"


#ifndef PROPERTY_IS_SWITCHING_SUPPLY
#define PROPERTY_IS_SWITCHING_SUPPLY \
					"IsSwitchingSupply"
#endif

#ifndef PROPERTY_RANGE_1_INPUT_VOLTAGE_LOW
#define PROPERTY_RANGE_1_INPUT_VOLTAGE_LOW \
					"Range1InputVoltageLow"
#endif

#ifndef PROPERTY_RANGE_1_INPUT_VOLTAGE_HIGH
#define PROPERTY_RANGE_1_INPUT_VOLTAGE_HIGH \
					"Range1InputVoltageHigh"
#endif

#ifndef PROPERTY_RANGE_1_INPUT_FREQUENCY_LOW
#define PROPERTY_RANGE_1_INPUT_FREQUENCY_LOW \
					"Range1InputFrequencyLow"
#endif

#ifndef PROPERTY_RANGE_1_INPUT_FREQUENCY_HIGH
#define PROPERTY_RANGE_1_INPUT_FREQUENCY_HIGH \
					"Range1InputFrequencyHigh"
#endif

#ifndef PROPERTY_RANGE_2_INPUT_VOLTAGE_LOW
#define PROPERTY_RANGE_2_INPUT_VOLTAGE_LOW \
					"Range2InputVoltageLow"
#endif

#ifndef PROPERTY_RANGE_2_INPUT_VOLTAGE_HIGH
#define PROPERTY_RANGE_2_INPUT_VOLTAGE_HIGH \
					"Range2InputVoltageHigh"
#endif

#ifndef PROPERTY_RANGE_2_INPUT_FREQUENCY_LOW
#define PROPERTY_RANGE_2_INPUT_FREQUENCY_LOW \
					"Range2InputFrequencyLow"
#endif

#ifndef PROPERTY_RANGE_2_INPUT_FREQUENCY_HIGH
#define PROPERTY_RANGE_2_INPUT_FREQUENCY_HIGH \
					"Range2InputFrequencyHigh"
#endif

#ifndef PROPERTY_ACTIVE_INPUT_VOLTAGE
#define PROPERTY_ACTIVE_INPUT_VOLTAGE \
					"ActiveInputVoltage"
#endif

#ifndef PROPERTY_TYPE_OF_RANGE_SWITCHING
#define PROPERTY_TYPE_OF_RANGE_SWITCHING \
					"TypeOfRangeSwitching"
#endif

#ifndef PROPERTY_TOTAL_OUTPUT_POWER
#define PROPERTY_TOTAL_OUTPUT_POWER \
					"TotalOutputPower"
#endif

#ifndef PROPERTY_RANGE_1_MAX_OUTPUT_POWER
#define PROPERTY_RANGE_1_MAX_OUTPUT_POWER \
					"Range1MaxOutputPower"
#endif

#ifndef PROPERTY_RANGE_2_MAX_OUTPUT_POWER
#define PROPERTY_RANGE_2_MAX_OUTPUT_POWER \
					"Range2MaxOutputPower"
#endif

#ifndef PROPERTY_RANGE_1_MAX_INPUT_POWER
#define PROPERTY_RANGE_1_MAX_INPUT_POWER \
					"Range1MaxInputPower"
#endif

#ifndef PROPERTY_RANGE_2_MAX_INPUT_POWER
#define PROPERTY_RANGE_2_MAX_INPUT_POWER \
					"Range2MaxInputPower"
#endif

#ifndef PROPERTY_INPUT_POWER_UNITS
#define PROPERTY_INPUT_POWER_UNITS \
					"InputPowerUnits"
#endif

#ifndef PROPERTY_IS_A_C_INPUT
#define PROPERTY_IS_A_C_INPUT \
					"IsACInput"
#endif

#ifndef PROPERTY_NUMBER_OF_PHASES_UTILIZED
#define PROPERTY_NUMBER_OF_PHASES_UTILIZED \
					"NumberOfPhasesUtilized"
#endif

#ifndef PROPERTY_NOMINAL_PHASE_WIRING
#define PROPERTY_NOMINAL_PHASE_WIRING \
					"NominalPhaseWiring"
#endif



class UNIX_PowerSupply :
	public CIM_PowerSource
{
public:

	UNIX_PowerSupply();
	~UNIX_PowerSupply();

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
	virtual Boolean getIsSwitchingSupply(CIMProperty&) const;
	virtual Boolean getIsSwitchingSupply() const;
	virtual void setIsSwitchingSupply(Boolean&);
	virtual Boolean getRange1InputVoltageLow(CIMProperty&) const;
	virtual Uint32 getRange1InputVoltageLow() const;
	virtual void setRange1InputVoltageLow(Uint32&);
	virtual Boolean getRange1InputVoltageHigh(CIMProperty&) const;
	virtual Uint32 getRange1InputVoltageHigh() const;
	virtual void setRange1InputVoltageHigh(Uint32&);
	virtual Boolean getRange1InputFrequencyLow(CIMProperty&) const;
	virtual Uint32 getRange1InputFrequencyLow() const;
	virtual void setRange1InputFrequencyLow(Uint32&);
	virtual Boolean getRange1InputFrequencyHigh(CIMProperty&) const;
	virtual Uint32 getRange1InputFrequencyHigh() const;
	virtual void setRange1InputFrequencyHigh(Uint32&);
	virtual Boolean getRange2InputVoltageLow(CIMProperty&) const;
	virtual Uint32 getRange2InputVoltageLow() const;
	virtual void setRange2InputVoltageLow(Uint32&);
	virtual Boolean getRange2InputVoltageHigh(CIMProperty&) const;
	virtual Uint32 getRange2InputVoltageHigh() const;
	virtual void setRange2InputVoltageHigh(Uint32&);
	virtual Boolean getRange2InputFrequencyLow(CIMProperty&) const;
	virtual Uint32 getRange2InputFrequencyLow() const;
	virtual void setRange2InputFrequencyLow(Uint32&);
	virtual Boolean getRange2InputFrequencyHigh(CIMProperty&) const;
	virtual Uint32 getRange2InputFrequencyHigh() const;
	virtual void setRange2InputFrequencyHigh(Uint32&);
	virtual Boolean getActiveInputVoltage(CIMProperty&) const;
	virtual Uint16 getActiveInputVoltage() const;
	virtual void setActiveInputVoltage(Uint16&);
	virtual Boolean getTypeOfRangeSwitching(CIMProperty&) const;
	virtual Uint16 getTypeOfRangeSwitching() const;
	virtual void setTypeOfRangeSwitching(Uint16&);
	virtual Boolean getTotalOutputPower(CIMProperty&) const;
	virtual Uint32 getTotalOutputPower() const;
	virtual void setTotalOutputPower(Uint32&);
	virtual Boolean getRange1MaxOutputPower(CIMProperty&) const;
	virtual Uint32 getRange1MaxOutputPower() const;
	virtual void setRange1MaxOutputPower(Uint32&);
	virtual Boolean getRange2MaxOutputPower(CIMProperty&) const;
	virtual Uint32 getRange2MaxOutputPower() const;
	virtual void setRange2MaxOutputPower(Uint32&);
	virtual Boolean getRange1MaxInputPower(CIMProperty&) const;
	virtual Uint32 getRange1MaxInputPower() const;
	virtual void setRange1MaxInputPower(Uint32&);
	virtual Boolean getRange2MaxInputPower(CIMProperty&) const;
	virtual Uint32 getRange2MaxInputPower() const;
	virtual void setRange2MaxInputPower(Uint32&);
	virtual Boolean getInputPowerUnits(CIMProperty&) const;
	virtual String getInputPowerUnits() const;
	virtual void setInputPowerUnits(String&);
	virtual Boolean getIsACInput(CIMProperty&) const;
	virtual Boolean getIsACInput() const;
	virtual void setIsACInput(Boolean&);
	virtual Boolean getNumberOfPhasesUtilized(CIMProperty&) const;
	virtual Uint32 getNumberOfPhasesUtilized() const;
	virtual void setNumberOfPhasesUtilized(Uint32&);
	virtual Boolean getNominalPhaseWiring(CIMProperty&) const;
	virtual Array<Uint32> getNominalPhaseWiring() const;
	virtual void setNominalPhaseWiring(Array<Uint32>&);

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
	Boolean _isSwitchingSupply;
	Uint32 _range1InputVoltageLow;
	Uint32 _range1InputVoltageHigh;
	Uint32 _range1InputFrequencyLow;
	Uint32 _range1InputFrequencyHigh;
	Uint32 _range2InputVoltageLow;
	Uint32 _range2InputVoltageHigh;
	Uint32 _range2InputFrequencyLow;
	Uint32 _range2InputFrequencyHigh;
	Uint16 _activeInputVoltage;
	Uint16 _typeOfRangeSwitching;
	Uint32 _totalOutputPower;
	Uint32 _range1MaxOutputPower;
	Uint32 _range2MaxOutputPower;
	Uint32 _range1MaxInputPower;
	Uint32 _range2MaxInputPower;
	String _inputPowerUnits;
	Boolean _isACInput;
	Uint32 _numberOfPhasesUtilized;
	Array<Uint32> _nominalPhaseWiring;

#	include "UNIX_PowerSupplyPrivate.h"


};

#endif /* UNIX_POWERSUPPLY */
