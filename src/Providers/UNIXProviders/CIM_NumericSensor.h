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
2.16.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Sensors
*/


/* **** Description *** */
/*
A Numeric Sensor is capable of returning numeric readings and optionally supports thresholds settings.
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


*/

#ifndef __CIM_NUMERICSENSOR_H
#define __CIM_NUMERICSENSOR_H


#include "CIM_Sensor.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_BASE_UNITS
#define PROPERTY_BASE_UNITS \
					"BaseUnits"
#endif

#ifndef PROPERTY_UNIT_MODIFIER
#define PROPERTY_UNIT_MODIFIER \
					"UnitModifier"
#endif

#ifndef PROPERTY_RATE_UNITS
#define PROPERTY_RATE_UNITS \
					"RateUnits"
#endif

#ifndef PROPERTY_CURRENT_READING
#define PROPERTY_CURRENT_READING \
					"CurrentReading"
#endif

#ifndef PROPERTY_NOMINAL_READING
#define PROPERTY_NOMINAL_READING \
					"NominalReading"
#endif

#ifndef PROPERTY_NORMAL_MAX
#define PROPERTY_NORMAL_MAX \
					"NormalMax"
#endif

#ifndef PROPERTY_NORMAL_MIN
#define PROPERTY_NORMAL_MIN \
					"NormalMin"
#endif

#ifndef PROPERTY_MAX_READABLE
#define PROPERTY_MAX_READABLE \
					"MaxReadable"
#endif

#ifndef PROPERTY_MIN_READABLE
#define PROPERTY_MIN_READABLE \
					"MinReadable"
#endif

#ifndef PROPERTY_RESOLUTION
#define PROPERTY_RESOLUTION \
					"Resolution"
#endif

#ifndef PROPERTY_TOLERANCE
#define PROPERTY_TOLERANCE \
					"Tolerance"
#endif

#ifndef PROPERTY_ACCURACY
#define PROPERTY_ACCURACY \
					"Accuracy"
#endif

#ifndef PROPERTY_IS_LINEAR
#define PROPERTY_IS_LINEAR \
					"IsLinear"
#endif

#ifndef PROPERTY_HYSTERESIS
#define PROPERTY_HYSTERESIS \
					"Hysteresis"
#endif

#ifndef PROPERTY_LOWER_THRESHOLD_NON_CRITICAL
#define PROPERTY_LOWER_THRESHOLD_NON_CRITICAL \
					"LowerThresholdNonCritical"
#endif

#ifndef PROPERTY_UPPER_THRESHOLD_NON_CRITICAL
#define PROPERTY_UPPER_THRESHOLD_NON_CRITICAL \
					"UpperThresholdNonCritical"
#endif

#ifndef PROPERTY_LOWER_THRESHOLD_CRITICAL
#define PROPERTY_LOWER_THRESHOLD_CRITICAL \
					"LowerThresholdCritical"
#endif

#ifndef PROPERTY_UPPER_THRESHOLD_CRITICAL
#define PROPERTY_UPPER_THRESHOLD_CRITICAL \
					"UpperThresholdCritical"
#endif

#ifndef PROPERTY_LOWER_THRESHOLD_FATAL
#define PROPERTY_LOWER_THRESHOLD_FATAL \
					"LowerThresholdFatal"
#endif

#ifndef PROPERTY_UPPER_THRESHOLD_FATAL
#define PROPERTY_UPPER_THRESHOLD_FATAL \
					"UpperThresholdFatal"
#endif

#ifndef PROPERTY_SUPPORTED_THRESHOLDS
#define PROPERTY_SUPPORTED_THRESHOLDS \
					"SupportedThresholds"
#endif

#ifndef PROPERTY_ENABLED_THRESHOLDS
#define PROPERTY_ENABLED_THRESHOLDS \
					"EnabledThresholds"
#endif

#ifndef PROPERTY_SETTABLE_THRESHOLDS
#define PROPERTY_SETTABLE_THRESHOLDS \
					"SettableThresholds"
#endif

#ifndef PROPERTY_PROGRAMMATIC_ACCURACY
#define PROPERTY_PROGRAMMATIC_ACCURACY \
					"ProgrammaticAccuracy"
#endif

#ifndef PROPERTY_ACCURACY_UNITS
#define PROPERTY_ACCURACY_UNITS \
					"AccuracyUnits"
#endif

#ifndef PROPERTY_VALUE_FORMULATION
#define PROPERTY_VALUE_FORMULATION \
					"ValueFormulation"
#endif



class CIM_NumericSensor :
	public CIM_Sensor
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getBaseUnits(CIMProperty&) const=0;
	virtual Uint16 getBaseUnits() const=0;
	virtual void setBaseUnits(Uint16&)=0;
	virtual Boolean getUnitModifier(CIMProperty&) const=0;
	virtual Sint32 getUnitModifier() const=0;
	virtual void setUnitModifier(Sint32&)=0;
	virtual Boolean getRateUnits(CIMProperty&) const=0;
	virtual Uint16 getRateUnits() const=0;
	virtual void setRateUnits(Uint16&)=0;
	virtual Boolean getCurrentReading(CIMProperty&) const=0;
	virtual Sint32 getCurrentReading() const=0;
	virtual void setCurrentReading(Sint32&)=0;
	virtual Boolean getNominalReading(CIMProperty&) const=0;
	virtual Sint32 getNominalReading() const=0;
	virtual void setNominalReading(Sint32&)=0;
	virtual Boolean getNormalMax(CIMProperty&) const=0;
	virtual Sint32 getNormalMax() const=0;
	virtual void setNormalMax(Sint32&)=0;
	virtual Boolean getNormalMin(CIMProperty&) const=0;
	virtual Sint32 getNormalMin() const=0;
	virtual void setNormalMin(Sint32&)=0;
	virtual Boolean getMaxReadable(CIMProperty&) const=0;
	virtual Sint32 getMaxReadable() const=0;
	virtual void setMaxReadable(Sint32&)=0;
	virtual Boolean getMinReadable(CIMProperty&) const=0;
	virtual Sint32 getMinReadable() const=0;
	virtual void setMinReadable(Sint32&)=0;
	virtual Boolean getResolution(CIMProperty&) const=0;
	virtual Uint32 getResolution() const=0;
	virtual void setResolution(Uint32&)=0;
	virtual Boolean getTolerance(CIMProperty&) const=0;
	virtual Sint32 getTolerance() const=0;
	virtual void setTolerance(Sint32&)=0;
	virtual Boolean getAccuracy(CIMProperty&) const=0;
	virtual Sint32 getAccuracy() const=0;
	virtual void setAccuracy(Sint32&)=0;
	virtual Boolean getIsLinear(CIMProperty&) const=0;
	virtual Boolean getIsLinear() const=0;
	virtual void setIsLinear(Boolean&)=0;
	virtual Boolean getHysteresis(CIMProperty&) const=0;
	virtual Uint32 getHysteresis() const=0;
	virtual void setHysteresis(Uint32&)=0;
	virtual Boolean getLowerThresholdNonCritical(CIMProperty&) const=0;
	virtual Sint32 getLowerThresholdNonCritical() const=0;
	virtual void setLowerThresholdNonCritical(Sint32&)=0;
	virtual Boolean getUpperThresholdNonCritical(CIMProperty&) const=0;
	virtual Sint32 getUpperThresholdNonCritical() const=0;
	virtual void setUpperThresholdNonCritical(Sint32&)=0;
	virtual Boolean getLowerThresholdCritical(CIMProperty&) const=0;
	virtual Sint32 getLowerThresholdCritical() const=0;
	virtual void setLowerThresholdCritical(Sint32&)=0;
	virtual Boolean getUpperThresholdCritical(CIMProperty&) const=0;
	virtual Sint32 getUpperThresholdCritical() const=0;
	virtual void setUpperThresholdCritical(Sint32&)=0;
	virtual Boolean getLowerThresholdFatal(CIMProperty&) const=0;
	virtual Sint32 getLowerThresholdFatal() const=0;
	virtual void setLowerThresholdFatal(Sint32&)=0;
	virtual Boolean getUpperThresholdFatal(CIMProperty&) const=0;
	virtual Sint32 getUpperThresholdFatal() const=0;
	virtual void setUpperThresholdFatal(Sint32&)=0;
	virtual Boolean getSupportedThresholds(CIMProperty&) const=0;
	virtual Array<Uint16> getSupportedThresholds() const=0;
	virtual void setSupportedThresholds(Array<Uint16>&)=0;
	virtual Boolean getEnabledThresholds(CIMProperty&) const=0;
	virtual Array<Uint16> getEnabledThresholds() const=0;
	virtual void setEnabledThresholds(Array<Uint16>&)=0;
	virtual Boolean getSettableThresholds(CIMProperty&) const=0;
	virtual Array<Uint16> getSettableThresholds() const=0;
	virtual void setSettableThresholds(Array<Uint16>&)=0;
	virtual Boolean getProgrammaticAccuracy(CIMProperty&) const=0;
	virtual Uint32 getProgrammaticAccuracy() const=0;
	virtual void setProgrammaticAccuracy(Uint32&)=0;
	virtual Boolean getAccuracyUnits(CIMProperty&) const=0;
	virtual String getAccuracyUnits() const=0;
	virtual void setAccuracyUnits(String&)=0;
	virtual Boolean getValueFormulation(CIMProperty&) const=0;
	virtual Uint16 getValueFormulation() const=0;
	virtual void setValueFormulation(Uint16&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeSetPowerState(
		Uint16 &inPowerState,
		CIMDateTime &inTime
	)=0;

	virtual Uint32 invokeReset()=0;

	virtual Uint32 invokeEnableDevice(
		Boolean &inEnabled
	)=0;

	virtual Uint32 invokeOnlineDevice(
		Boolean &inOnline
	)=0;

	virtual Uint32 invokeQuiesceDevice(
		Boolean &inQuiesce
	)=0;

	virtual Uint32 invokeSaveProperties()=0;

	virtual Uint32 invokeRestoreProperties()=0;

	virtual Uint32 invokeRestoreDefaultThresholds()=0;

	virtual Uint32 invokeGetNonLinearFactors(
		Sint32 &inSensorReading,
		Sint32 &inAccuracy,
		Uint32 &inResolution,
		Sint32 &inTolerance,
		Uint32 &inHysteresis
	)=0;



private:

};

#endif /* CIM_NUMERICSENSOR */
