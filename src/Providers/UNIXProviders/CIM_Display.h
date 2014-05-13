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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.25.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::UserDevices
*/


/* **** Description *** */
/*
Display is a superclass for grouping the miscellaneous display devices that exist. Most of the properties are derived from analogous command codes in the Monitor Command and Control Set (MCCS) specifications Version 2.2 from VESA.
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

			CIM_UserDevice:
				IsLocked Boolean

			CIM_Display:
				Contrast UInt32
				DisplayCharacteristics UInt16
				MaxContrast UInt32
				Brightness UInt32
				ColorModePreset UInt16
				ColorModePresetCapabilities UInt16
				CurrentResolutionH UInt16
				CurrentResolutionV UInt16
				DisplayMode UInt16
				DisplayModeCapabilities UInt16
				DisplayTechnologyType UInt16
				FrequencyH UInt32
				FrequencyV UInt32
				InputSource UInt16
				InputSourceCapabilities UInt16
				MCCSVersionNumber String
				MaxBrightness UInt32
				OtherScalerManufacturerDescription String
				PerformAutoSetup UInt16
				ScalerManufacturer UInt16


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

			CIM_UserDevice:

			CIM_Display:
				ButtonLock UInt32
				RestoreFactoryDefault UInt32


*/

#ifndef __CIM_DISPLAY_H
#define __CIM_DISPLAY_H


#include "CIM_UserDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_CONTRAST
#define PROPERTY_CONTRAST \
					"Contrast"
#endif

#ifndef PROPERTY_DISPLAY_CHARACTERISTICS
#define PROPERTY_DISPLAY_CHARACTERISTICS \
					"DisplayCharacteristics"
#endif

#ifndef PROPERTY_MAX_CONTRAST
#define PROPERTY_MAX_CONTRAST \
					"MaxContrast"
#endif

#ifndef PROPERTY_BRIGHTNESS
#define PROPERTY_BRIGHTNESS \
					"Brightness"
#endif

#ifndef PROPERTY_COLOR_MODE_PRESET
#define PROPERTY_COLOR_MODE_PRESET \
					"ColorModePreset"
#endif

#ifndef PROPERTY_COLOR_MODE_PRESET_CAPABILITIES
#define PROPERTY_COLOR_MODE_PRESET_CAPABILITIES \
					"ColorModePresetCapabilities"
#endif

#ifndef PROPERTY_CURRENT_RESOLUTION_H
#define PROPERTY_CURRENT_RESOLUTION_H \
					"CurrentResolutionH"
#endif

#ifndef PROPERTY_CURRENT_RESOLUTION_V
#define PROPERTY_CURRENT_RESOLUTION_V \
					"CurrentResolutionV"
#endif

#ifndef PROPERTY_DISPLAY_MODE
#define PROPERTY_DISPLAY_MODE \
					"DisplayMode"
#endif

#ifndef PROPERTY_DISPLAY_MODE_CAPABILITIES
#define PROPERTY_DISPLAY_MODE_CAPABILITIES \
					"DisplayModeCapabilities"
#endif

#ifndef PROPERTY_DISPLAY_TECHNOLOGY_TYPE
#define PROPERTY_DISPLAY_TECHNOLOGY_TYPE \
					"DisplayTechnologyType"
#endif

#ifndef PROPERTY_FREQUENCY_H
#define PROPERTY_FREQUENCY_H \
					"FrequencyH"
#endif

#ifndef PROPERTY_FREQUENCY_V
#define PROPERTY_FREQUENCY_V \
					"FrequencyV"
#endif

#ifndef PROPERTY_INPUT_SOURCE
#define PROPERTY_INPUT_SOURCE \
					"InputSource"
#endif

#ifndef PROPERTY_INPUT_SOURCE_CAPABILITIES
#define PROPERTY_INPUT_SOURCE_CAPABILITIES \
					"InputSourceCapabilities"
#endif

#ifndef PROPERTY_M_C_CS_VERSION_NUMBER
#define PROPERTY_M_C_CS_VERSION_NUMBER \
					"MCCSVersionNumber"
#endif

#ifndef PROPERTY_MAX_BRIGHTNESS
#define PROPERTY_MAX_BRIGHTNESS \
					"MaxBrightness"
#endif

#ifndef PROPERTY_OTHER_SCALER_MANUFACTURER_DESCRIPTION
#define PROPERTY_OTHER_SCALER_MANUFACTURER_DESCRIPTION \
					"OtherScalerManufacturerDescription"
#endif

#ifndef PROPERTY_PERFORM_AUTO_SETUP
#define PROPERTY_PERFORM_AUTO_SETUP \
					"PerformAutoSetup"
#endif

#ifndef PROPERTY_SCALER_MANUFACTURER
#define PROPERTY_SCALER_MANUFACTURER \
					"ScalerManufacturer"
#endif



class CIM_Display :
	public CIM_UserDevice
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

	virtual Boolean getContrast(CIMProperty&) const=0;
	virtual Uint32 getContrast() const=0;
	virtual void setContrast(Uint32&)=0;
	virtual Boolean getDisplayCharacteristics(CIMProperty&) const=0;
	virtual Array<Uint16> getDisplayCharacteristics() const=0;
	virtual void setDisplayCharacteristics(Array<Uint16>&)=0;
	virtual Boolean getMaxContrast(CIMProperty&) const=0;
	virtual Uint32 getMaxContrast() const=0;
	virtual void setMaxContrast(Uint32&)=0;
	virtual Boolean getBrightness(CIMProperty&) const=0;
	virtual Uint32 getBrightness() const=0;
	virtual void setBrightness(Uint32&)=0;
	virtual Boolean getColorModePreset(CIMProperty&) const=0;
	virtual Uint16 getColorModePreset() const=0;
	virtual void setColorModePreset(Uint16&)=0;
	virtual Boolean getColorModePresetCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getColorModePresetCapabilities() const=0;
	virtual void setColorModePresetCapabilities(Array<Uint16>&)=0;
	virtual Boolean getCurrentResolutionH(CIMProperty&) const=0;
	virtual Uint16 getCurrentResolutionH() const=0;
	virtual void setCurrentResolutionH(Uint16&)=0;
	virtual Boolean getCurrentResolutionV(CIMProperty&) const=0;
	virtual Uint16 getCurrentResolutionV() const=0;
	virtual void setCurrentResolutionV(Uint16&)=0;
	virtual Boolean getDisplayMode(CIMProperty&) const=0;
	virtual Uint16 getDisplayMode() const=0;
	virtual void setDisplayMode(Uint16&)=0;
	virtual Boolean getDisplayModeCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getDisplayModeCapabilities() const=0;
	virtual void setDisplayModeCapabilities(Array<Uint16>&)=0;
	virtual Boolean getDisplayTechnologyType(CIMProperty&) const=0;
	virtual Uint16 getDisplayTechnologyType() const=0;
	virtual void setDisplayTechnologyType(Uint16&)=0;
	virtual Boolean getFrequencyH(CIMProperty&) const=0;
	virtual Uint32 getFrequencyH() const=0;
	virtual void setFrequencyH(Uint32&)=0;
	virtual Boolean getFrequencyV(CIMProperty&) const=0;
	virtual Uint32 getFrequencyV() const=0;
	virtual void setFrequencyV(Uint32&)=0;
	virtual Boolean getInputSource(CIMProperty&) const=0;
	virtual Uint16 getInputSource() const=0;
	virtual void setInputSource(Uint16&)=0;
	virtual Boolean getInputSourceCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getInputSourceCapabilities() const=0;
	virtual void setInputSourceCapabilities(Array<Uint16>&)=0;
	virtual Boolean getMCCSVersionNumber(CIMProperty&) const=0;
	virtual String getMCCSVersionNumber() const=0;
	virtual void setMCCSVersionNumber(String&)=0;
	virtual Boolean getMaxBrightness(CIMProperty&) const=0;
	virtual Uint32 getMaxBrightness() const=0;
	virtual void setMaxBrightness(Uint32&)=0;
	virtual Boolean getOtherScalerManufacturerDescription(CIMProperty&) const=0;
	virtual String getOtherScalerManufacturerDescription() const=0;
	virtual void setOtherScalerManufacturerDescription(String&)=0;
	virtual Boolean getPerformAutoSetup(CIMProperty&) const=0;
	virtual Uint16 getPerformAutoSetup() const=0;
	virtual void setPerformAutoSetup(Uint16&)=0;
	virtual Boolean getScalerManufacturer(CIMProperty&) const=0;
	virtual Uint16 getScalerManufacturer() const=0;
	virtual void setScalerManufacturer(Uint16&)=0;

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

	virtual Uint32 invokeButtonLock(
		Uint16 &inOSDParam,
		Uint16 &inPowerButtonParam
	)=0;

	virtual Uint32 invokeRestoreFactoryDefault(
		Uint16 &inRestoreMode
	)=0;



private:

};

#endif /* CIM_DISPLAY */
