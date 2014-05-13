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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Modems
*/


/* **** Description *** */
/*
The ISDNModem class, a kind of call-based Modem. Properties will be defined in a future release of the model.
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

			CIM_Modem:

			CIM_CallBasedModem:
				FallbackEnabled Boolean
				CompressionSupported UInt16
				OtherCompressionDescription String
				CompressionInfo UInt16
				OtherCompressionInfoDescription String
				ModulationSupported UInt16
				OtherModulationDescription String
				ModulationScheme UInt16
				OtherSchemeDescription String
				ErrorControlSupported UInt16
				OtherErrorControlDescription String
				ErrorControlInfo UInt16
				OtherErrorControlInfoDescription String
				TimeOfLastReset DateTime
				CallSpeed UInt32
				CallStatus UInt16
				CharsSent UInt32
				CharsReceived UInt32
				CharsLost UInt32
				BlocksSent UInt32
				BlocksResent UInt32
				BlocksReceived UInt32
				BlockErrors UInt32
				CallLength DateTime
				NumberDialed String

			UNIX_ISDNModem:


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

			CIM_Modem:

			CIM_CallBasedModem:

			UNIX_ISDNModem:


*/

#ifndef __UNIX_ISDNMODEM_H
#define __UNIX_ISDNMODEM_H


#include "CIM_CallBasedModem.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_ISDNModemDeps.h"




class UNIX_ISDNModem :
	public CIM_CallBasedModem
{
public:

	UNIX_ISDNModem();
	~UNIX_ISDNModem();

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
	virtual Boolean getFallbackEnabled(CIMProperty&) const;
	virtual Boolean getFallbackEnabled() const;
	virtual void setFallbackEnabled(Boolean&);
	virtual Boolean getCompressionSupported(CIMProperty&) const;
	virtual Array<Uint16> getCompressionSupported() const;
	virtual void setCompressionSupported(Array<Uint16>&);
	virtual Boolean getOtherCompressionDescription(CIMProperty&) const;
	virtual String getOtherCompressionDescription() const;
	virtual void setOtherCompressionDescription(String&);
	virtual Boolean getCompressionInfo(CIMProperty&) const;
	virtual Uint16 getCompressionInfo() const;
	virtual void setCompressionInfo(Uint16&);
	virtual Boolean getOtherCompressionInfoDescription(CIMProperty&) const;
	virtual String getOtherCompressionInfoDescription() const;
	virtual void setOtherCompressionInfoDescription(String&);
	virtual Boolean getModulationSupported(CIMProperty&) const;
	virtual Array<Uint16> getModulationSupported() const;
	virtual void setModulationSupported(Array<Uint16>&);
	virtual Boolean getOtherModulationDescription(CIMProperty&) const;
	virtual String getOtherModulationDescription() const;
	virtual void setOtherModulationDescription(String&);
	virtual Boolean getModulationScheme(CIMProperty&) const;
	virtual Uint16 getModulationScheme() const;
	virtual void setModulationScheme(Uint16&);
	virtual Boolean getOtherSchemeDescription(CIMProperty&) const;
	virtual String getOtherSchemeDescription() const;
	virtual void setOtherSchemeDescription(String&);
	virtual Boolean getErrorControlSupported(CIMProperty&) const;
	virtual Array<Uint16> getErrorControlSupported() const;
	virtual void setErrorControlSupported(Array<Uint16>&);
	virtual Boolean getOtherErrorControlDescription(CIMProperty&) const;
	virtual String getOtherErrorControlDescription() const;
	virtual void setOtherErrorControlDescription(String&);
	virtual Boolean getErrorControlInfo(CIMProperty&) const;
	virtual Uint16 getErrorControlInfo() const;
	virtual void setErrorControlInfo(Uint16&);
	virtual Boolean getOtherErrorControlInfoDescription(CIMProperty&) const;
	virtual String getOtherErrorControlInfoDescription() const;
	virtual void setOtherErrorControlInfoDescription(String&);
	virtual Boolean getTimeOfLastReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastReset() const;
	virtual void setTimeOfLastReset(CIMDateTime&);
	virtual Boolean getCallSpeed(CIMProperty&) const;
	virtual Uint32 getCallSpeed() const;
	virtual void setCallSpeed(Uint32&);
	virtual Boolean getCallStatus(CIMProperty&) const;
	virtual Uint16 getCallStatus() const;
	virtual void setCallStatus(Uint16&);
	virtual Boolean getCharsSent(CIMProperty&) const;
	virtual Uint32 getCharsSent() const;
	virtual void setCharsSent(Uint32&);
	virtual Boolean getCharsReceived(CIMProperty&) const;
	virtual Uint32 getCharsReceived() const;
	virtual void setCharsReceived(Uint32&);
	virtual Boolean getCharsLost(CIMProperty&) const;
	virtual Uint32 getCharsLost() const;
	virtual void setCharsLost(Uint32&);
	virtual Boolean getBlocksSent(CIMProperty&) const;
	virtual Uint32 getBlocksSent() const;
	virtual void setBlocksSent(Uint32&);
	virtual Boolean getBlocksResent(CIMProperty&) const;
	virtual Uint32 getBlocksResent() const;
	virtual void setBlocksResent(Uint32&);
	virtual Boolean getBlocksReceived(CIMProperty&) const;
	virtual Uint32 getBlocksReceived() const;
	virtual void setBlocksReceived(Uint32&);
	virtual Boolean getBlockErrors(CIMProperty&) const;
	virtual Uint32 getBlockErrors() const;
	virtual void setBlockErrors(Uint32&);
	virtual Boolean getCallLength(CIMProperty&) const;
	virtual CIMDateTime getCallLength() const;
	virtual void setCallLength(CIMDateTime&);
	virtual Boolean getNumberDialed(CIMProperty&) const;
	virtual String getNumberDialed() const;
	virtual void setNumberDialed(String&);

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
	Boolean _fallbackEnabled;
	Array<Uint16> _compressionSupported;
	String _otherCompressionDescription;
	Uint16 _compressionInfo;
	String _otherCompressionInfoDescription;
	Array<Uint16> _modulationSupported;
	String _otherModulationDescription;
	Uint16 _modulationScheme;
	String _otherSchemeDescription;
	Array<Uint16> _errorControlSupported;
	String _otherErrorControlDescription;
	Uint16 _errorControlInfo;
	String _otherErrorControlInfoDescription;
	CIMDateTime _timeOfLastReset;
	Uint32 _callSpeed;
	Uint16 _callStatus;
	Uint32 _charsSent;
	Uint32 _charsReceived;
	Uint32 _charsLost;
	Uint32 _blocksSent;
	Uint32 _blocksResent;
	Uint32 _blocksReceived;
	Uint32 _blockErrors;
	CIMDateTime _callLength;
	String _numberDialed;

#	include "UNIX_ISDNModemPrivate.h"


};

#endif /* UNIX_ISDNMODEM */
