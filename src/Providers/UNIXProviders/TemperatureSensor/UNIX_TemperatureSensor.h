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


/* **** Deprecated *** */
/*
CIM_NumericSensor
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Sensors
*/


/* **** Description *** */
/*
The use of this class is being deprecated in lieu of the additions to Sensor and Numeric Sensor. A TemperatureSensor can be defined by setting the SensorType property, inherited from Sensor, to 2 ("Temperature").
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

			CIM_Sensor:
				SensorType UInt16
				OtherSensorTypeDescription String
				PossibleStates String
				CurrentState String
				PollingInterval UInt64
				SensorContext String

			CIM_NumericSensor:
				BaseUnits UInt16
				UnitModifier SInt32
				RateUnits UInt16
				CurrentReading SInt32
				NominalReading SInt32
				NormalMax SInt32
				NormalMin SInt32
				MaxReadable SInt32
				MinReadable SInt32
				Resolution UInt32
				Tolerance SInt32
				Accuracy SInt32
				IsLinear Boolean
				Hysteresis UInt32
				LowerThresholdNonCritical SInt32
				UpperThresholdNonCritical SInt32
				LowerThresholdCritical SInt32
				UpperThresholdCritical SInt32
				LowerThresholdFatal SInt32
				UpperThresholdFatal SInt32
				SupportedThresholds UInt16
				EnabledThresholds UInt16
				SettableThresholds UInt16
				ProgrammaticAccuracy UInt32
				AccuracyUnits String
				ValueFormulation UInt16

			UNIX_TemperatureSensor:


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

			CIM_Sensor:

			CIM_NumericSensor:
				RestoreDefaultThresholds UInt32
				GetNonLinearFactors UInt32

			UNIX_TemperatureSensor:


*/

#ifndef __UNIX_TEMPERATURESENSOR_H
#define __UNIX_TEMPERATURESENSOR_H


#include "CIM_NumericSensor.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_TemperatureSensorDeps.h"




class UNIX_TemperatureSensor :
	public CIM_NumericSensor
{
public:

	UNIX_TemperatureSensor();
	~UNIX_TemperatureSensor();

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
	virtual Boolean getSensorType(CIMProperty&) const;
	virtual Uint16 getSensorType() const;
	virtual void setSensorType(Uint16&);
	virtual Boolean getOtherSensorTypeDescription(CIMProperty&) const;
	virtual String getOtherSensorTypeDescription() const;
	virtual void setOtherSensorTypeDescription(String&);
	virtual Boolean getPossibleStates(CIMProperty&) const;
	virtual Array<String> getPossibleStates() const;
	virtual void setPossibleStates(Array<String>&);
	virtual Boolean getCurrentState(CIMProperty&) const;
	virtual String getCurrentState() const;
	virtual void setCurrentState(String&);
	virtual Boolean getPollingInterval(CIMProperty&) const;
	virtual Uint64 getPollingInterval() const;
	virtual void setPollingInterval(Uint64&);
	virtual Boolean getSensorContext(CIMProperty&) const;
	virtual String getSensorContext() const;
	virtual void setSensorContext(String&);
	virtual Boolean getBaseUnits(CIMProperty&) const;
	virtual Uint16 getBaseUnits() const;
	virtual void setBaseUnits(Uint16&);
	virtual Boolean getUnitModifier(CIMProperty&) const;
	virtual Sint32 getUnitModifier() const;
	virtual void setUnitModifier(Sint32&);
	virtual Boolean getRateUnits(CIMProperty&) const;
	virtual Uint16 getRateUnits() const;
	virtual void setRateUnits(Uint16&);
	virtual Boolean getCurrentReading(CIMProperty&) const;
	virtual Sint32 getCurrentReading() const;
	virtual void setCurrentReading(Sint32&);
	virtual Boolean getNominalReading(CIMProperty&) const;
	virtual Sint32 getNominalReading() const;
	virtual void setNominalReading(Sint32&);
	virtual Boolean getNormalMax(CIMProperty&) const;
	virtual Sint32 getNormalMax() const;
	virtual void setNormalMax(Sint32&);
	virtual Boolean getNormalMin(CIMProperty&) const;
	virtual Sint32 getNormalMin() const;
	virtual void setNormalMin(Sint32&);
	virtual Boolean getMaxReadable(CIMProperty&) const;
	virtual Sint32 getMaxReadable() const;
	virtual void setMaxReadable(Sint32&);
	virtual Boolean getMinReadable(CIMProperty&) const;
	virtual Sint32 getMinReadable() const;
	virtual void setMinReadable(Sint32&);
	virtual Boolean getResolution(CIMProperty&) const;
	virtual Uint32 getResolution() const;
	virtual void setResolution(Uint32&);
	virtual Boolean getTolerance(CIMProperty&) const;
	virtual Sint32 getTolerance() const;
	virtual void setTolerance(Sint32&);
	virtual Boolean getAccuracy(CIMProperty&) const;
	virtual Sint32 getAccuracy() const;
	virtual void setAccuracy(Sint32&);
	virtual Boolean getIsLinear(CIMProperty&) const;
	virtual Boolean getIsLinear() const;
	virtual void setIsLinear(Boolean&);
	virtual Boolean getHysteresis(CIMProperty&) const;
	virtual Uint32 getHysteresis() const;
	virtual void setHysteresis(Uint32&);
	virtual Boolean getLowerThresholdNonCritical(CIMProperty&) const;
	virtual Sint32 getLowerThresholdNonCritical() const;
	virtual void setLowerThresholdNonCritical(Sint32&);
	virtual Boolean getUpperThresholdNonCritical(CIMProperty&) const;
	virtual Sint32 getUpperThresholdNonCritical() const;
	virtual void setUpperThresholdNonCritical(Sint32&);
	virtual Boolean getLowerThresholdCritical(CIMProperty&) const;
	virtual Sint32 getLowerThresholdCritical() const;
	virtual void setLowerThresholdCritical(Sint32&);
	virtual Boolean getUpperThresholdCritical(CIMProperty&) const;
	virtual Sint32 getUpperThresholdCritical() const;
	virtual void setUpperThresholdCritical(Sint32&);
	virtual Boolean getLowerThresholdFatal(CIMProperty&) const;
	virtual Sint32 getLowerThresholdFatal() const;
	virtual void setLowerThresholdFatal(Sint32&);
	virtual Boolean getUpperThresholdFatal(CIMProperty&) const;
	virtual Sint32 getUpperThresholdFatal() const;
	virtual void setUpperThresholdFatal(Sint32&);
	virtual Boolean getSupportedThresholds(CIMProperty&) const;
	virtual Array<Uint16> getSupportedThresholds() const;
	virtual void setSupportedThresholds(Array<Uint16>&);
	virtual Boolean getEnabledThresholds(CIMProperty&) const;
	virtual Array<Uint16> getEnabledThresholds() const;
	virtual void setEnabledThresholds(Array<Uint16>&);
	virtual Boolean getSettableThresholds(CIMProperty&) const;
	virtual Array<Uint16> getSettableThresholds() const;
	virtual void setSettableThresholds(Array<Uint16>&);
	virtual Boolean getProgrammaticAccuracy(CIMProperty&) const;
	virtual Uint32 getProgrammaticAccuracy() const;
	virtual void setProgrammaticAccuracy(Uint32&);
	virtual Boolean getAccuracyUnits(CIMProperty&) const;
	virtual String getAccuracyUnits() const;
	virtual void setAccuracyUnits(String&);
	virtual Boolean getValueFormulation(CIMProperty&) const;
	virtual Uint16 getValueFormulation() const;
	virtual void setValueFormulation(Uint16&);

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

	virtual Uint32 invokeRestoreDefaultThresholds();

	virtual Uint32 invokeGetNonLinearFactors(
		Sint32 &inSensorReading,
		Sint32 &inAccuracy,
		Uint32 &inResolution,
		Sint32 &inTolerance,
		Uint32 &inHysteresis
	);



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
	Uint16 _sensorType;
	String _otherSensorTypeDescription;
	Array<String> _possibleStates;
	String _currentState;
	Uint64 _pollingInterval;
	String _sensorContext;
	Uint16 _baseUnits;
	Sint32 _unitModifier;
	Uint16 _rateUnits;
	Sint32 _currentReading;
	Sint32 _nominalReading;
	Sint32 _normalMax;
	Sint32 _normalMin;
	Sint32 _maxReadable;
	Sint32 _minReadable;
	Uint32 _resolution;
	Sint32 _tolerance;
	Sint32 _accuracy;
	Boolean _isLinear;
	Uint32 _hysteresis;
	Sint32 _lowerThresholdNonCritical;
	Sint32 _upperThresholdNonCritical;
	Sint32 _lowerThresholdCritical;
	Sint32 _upperThresholdCritical;
	Sint32 _lowerThresholdFatal;
	Sint32 _upperThresholdFatal;
	Array<Uint16> _supportedThresholds;
	Array<Uint16> _enabledThresholds;
	Array<Uint16> _settableThresholds;
	Uint32 _programmaticAccuracy;
	String _accuracyUnits;
	Uint16 _valueFormulation;

#	include "UNIX_TemperatureSensorPrivate.h"


};

#endif /* UNIX_TEMPERATURESENSOR */
