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
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::UserDevices
*/


/* **** Description *** */
/*
Capabilities and management of the FlatPanel LogicalDevice.
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

			UNIX_FlatPanel:
				HorizontalResolution UInt32
				VerticalResolution UInt32
				ScanMode UInt16
				DisplayType UInt16
				LightSource UInt16
				SupportsColor Boolean
				BuiltIn UInt16


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

			UNIX_FlatPanel:


*/

#ifndef __UNIX_FLATPANEL_H
#define __UNIX_FLATPANEL_H


#include "CIM_Display.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_FlatPanelDeps.h"


#ifndef PROPERTY_HORIZONTAL_RESOLUTION
#define PROPERTY_HORIZONTAL_RESOLUTION \
					"HorizontalResolution"
#endif

#ifndef PROPERTY_VERTICAL_RESOLUTION
#define PROPERTY_VERTICAL_RESOLUTION \
					"VerticalResolution"
#endif

#ifndef PROPERTY_SCAN_MODE
#define PROPERTY_SCAN_MODE \
					"ScanMode"
#endif

#ifndef PROPERTY_DISPLAY_TYPE
#define PROPERTY_DISPLAY_TYPE \
					"DisplayType"
#endif

#ifndef PROPERTY_LIGHT_SOURCE
#define PROPERTY_LIGHT_SOURCE \
					"LightSource"
#endif

#ifndef PROPERTY_SUPPORTS_COLOR
#define PROPERTY_SUPPORTS_COLOR \
					"SupportsColor"
#endif

#ifndef PROPERTY_BUILT_IN
#define PROPERTY_BUILT_IN \
					"BuiltIn"
#endif



class UNIX_FlatPanel :
	public CIM_Display
{
public:

	UNIX_FlatPanel();
	~UNIX_FlatPanel();

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
	virtual Boolean getIsLocked(CIMProperty&) const;
	virtual Boolean getIsLocked() const;
	virtual void setIsLocked(Boolean&);
	virtual Boolean getContrast(CIMProperty&) const;
	virtual Uint32 getContrast() const;
	virtual void setContrast(Uint32&);
	virtual Boolean getDisplayCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getDisplayCharacteristics() const;
	virtual void setDisplayCharacteristics(Array<Uint16>&);
	virtual Boolean getMaxContrast(CIMProperty&) const;
	virtual Uint32 getMaxContrast() const;
	virtual void setMaxContrast(Uint32&);
	virtual Boolean getBrightness(CIMProperty&) const;
	virtual Uint32 getBrightness() const;
	virtual void setBrightness(Uint32&);
	virtual Boolean getColorModePreset(CIMProperty&) const;
	virtual Uint16 getColorModePreset() const;
	virtual void setColorModePreset(Uint16&);
	virtual Boolean getColorModePresetCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getColorModePresetCapabilities() const;
	virtual void setColorModePresetCapabilities(Array<Uint16>&);
	virtual Boolean getCurrentResolutionH(CIMProperty&) const;
	virtual Uint16 getCurrentResolutionH() const;
	virtual void setCurrentResolutionH(Uint16&);
	virtual Boolean getCurrentResolutionV(CIMProperty&) const;
	virtual Uint16 getCurrentResolutionV() const;
	virtual void setCurrentResolutionV(Uint16&);
	virtual Boolean getDisplayMode(CIMProperty&) const;
	virtual Uint16 getDisplayMode() const;
	virtual void setDisplayMode(Uint16&);
	virtual Boolean getDisplayModeCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getDisplayModeCapabilities() const;
	virtual void setDisplayModeCapabilities(Array<Uint16>&);
	virtual Boolean getDisplayTechnologyType(CIMProperty&) const;
	virtual Uint16 getDisplayTechnologyType() const;
	virtual void setDisplayTechnologyType(Uint16&);
	virtual Boolean getFrequencyH(CIMProperty&) const;
	virtual Uint32 getFrequencyH() const;
	virtual void setFrequencyH(Uint32&);
	virtual Boolean getFrequencyV(CIMProperty&) const;
	virtual Uint32 getFrequencyV() const;
	virtual void setFrequencyV(Uint32&);
	virtual Boolean getInputSource(CIMProperty&) const;
	virtual Uint16 getInputSource() const;
	virtual void setInputSource(Uint16&);
	virtual Boolean getInputSourceCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getInputSourceCapabilities() const;
	virtual void setInputSourceCapabilities(Array<Uint16>&);
	virtual Boolean getMCCSVersionNumber(CIMProperty&) const;
	virtual String getMCCSVersionNumber() const;
	virtual void setMCCSVersionNumber(String&);
	virtual Boolean getMaxBrightness(CIMProperty&) const;
	virtual Uint32 getMaxBrightness() const;
	virtual void setMaxBrightness(Uint32&);
	virtual Boolean getOtherScalerManufacturerDescription(CIMProperty&) const;
	virtual String getOtherScalerManufacturerDescription() const;
	virtual void setOtherScalerManufacturerDescription(String&);
	virtual Boolean getPerformAutoSetup(CIMProperty&) const;
	virtual Uint16 getPerformAutoSetup() const;
	virtual void setPerformAutoSetup(Uint16&);
	virtual Boolean getScalerManufacturer(CIMProperty&) const;
	virtual Uint16 getScalerManufacturer() const;
	virtual void setScalerManufacturer(Uint16&);
	virtual Boolean getHorizontalResolution(CIMProperty&) const;
	virtual Uint32 getHorizontalResolution() const;
	virtual void setHorizontalResolution(Uint32&);
	virtual Boolean getVerticalResolution(CIMProperty&) const;
	virtual Uint32 getVerticalResolution() const;
	virtual void setVerticalResolution(Uint32&);
	virtual Boolean getScanMode(CIMProperty&) const;
	virtual Uint16 getScanMode() const;
	virtual void setScanMode(Uint16&);
	virtual Boolean getDisplayType(CIMProperty&) const;
	virtual Uint16 getDisplayType() const;
	virtual void setDisplayType(Uint16&);
	virtual Boolean getLightSource(CIMProperty&) const;
	virtual Uint16 getLightSource() const;
	virtual void setLightSource(Uint16&);
	virtual Boolean getSupportsColor(CIMProperty&) const;
	virtual Boolean getSupportsColor() const;
	virtual void setSupportsColor(Boolean&);
	virtual Boolean getBuiltIn(CIMProperty&) const;
	virtual Uint16 getBuiltIn() const;
	virtual void setBuiltIn(Uint16&);

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

	virtual Uint32 invokeButtonLock(
		Uint16 &inOSDParam,
		Uint16 &inPowerButtonParam
	);

	virtual Uint32 invokeRestoreFactoryDefault(
		Uint16 &inRestoreMode
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
	Boolean _isLocked;
	Uint32 _contrast;
	Array<Uint16> _displayCharacteristics;
	Uint32 _maxContrast;
	Uint32 _brightness;
	Uint16 _colorModePreset;
	Array<Uint16> _colorModePresetCapabilities;
	Uint16 _currentResolutionH;
	Uint16 _currentResolutionV;
	Uint16 _displayMode;
	Array<Uint16> _displayModeCapabilities;
	Uint16 _displayTechnologyType;
	Uint32 _frequencyH;
	Uint32 _frequencyV;
	Uint16 _inputSource;
	Array<Uint16> _inputSourceCapabilities;
	String _mCCSVersionNumber;
	Uint32 _maxBrightness;
	String _otherScalerManufacturerDescription;
	Uint16 _performAutoSetup;
	Uint16 _scalerManufacturer;
	Uint32 _horizontalResolution;
	Uint32 _verticalResolution;
	Uint16 _scanMode;
	Uint16 _displayType;
	Uint16 _lightSource;
	Boolean _supportsColor;
	Uint16 _builtIn;

#	include "UNIX_FlatPanelPrivate.h"


};

#endif /* UNIX_FLATPANEL */
