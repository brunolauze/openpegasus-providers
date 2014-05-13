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
2.25.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
Capabilities and management of the Printer LogicalDevice. The ABNF for CIM references to PWG Standards and MIBs is in the directory 'ftp://ftp.pwg.org/pub/pwg/general/process' in the file 'pwg-cim-references-format-20060309.txt'. Examples 
include: (a) a MappingStrings reference to a PWG Standard is 'PWG5101-1.PWG|Section 4 Media Color Names'; 
(b) a MappingStrings reference to a PWG MIB is 'MIB.PWG|PWG-IMAGING-COUNTER-MIB.icMonitorCompletedJobs'. 
Note: A Printer shall be associated with at least one of every required component (e.g., PrintMarker) via an instance of the PrinterComponent class. A Printer may be associated with zero or more optional components (e.g., PrintSupply) via an instance of the ConcreteComponent class. See: Model in section 2 of Printer MIB (RFC 3805).
*/


/* **** MappingStrings *** */
/*
MIB.IETF|Printer-MIB.prtGeneralEntry
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

			UNIX_Printer:
				PrinterStatus UInt16
				DetectedErrorState UInt16
				ErrorInformation String
				PaperSizesSupported UInt16
				PaperTypesAvailable String
				DefaultPaperType String
				CurrentPaperType String
				LanguagesSupported UInt16
				MimeTypesSupported String
				CurrentLanguage UInt16
				CurrentMimeType String
				DefaultLanguage UInt16
				DefaultMimeType String
				JobCountSinceLastReset UInt32
				TimeOfLastReset DateTime
				Capabilities UInt16
				CapabilityDescriptions String
				DefaultCapabilities UInt16
				CurrentCapabilities UInt16
				MaxCopies UInt32
				DefaultCopies UInt32
				MaxNumberUp UInt32
				DefaultNumberUp UInt32
				HorizontalResolution UInt32
				VerticalResolution UInt32
				CharSetsSupported String
				CurrentCharSet String
				NaturalLanguagesSupported String
				CurrentNaturalLanguage String
				MaxSizeSupported UInt32
				AvailableJobSheets String
				MarkingTechnology UInt16
				CurrentOperator String
				ServicePerson String
				SerialNumber String
				CriticalAlerts UInt32
				AllAlerts UInt32
				ConsoleDisabled Boolean
				ConsoleNaturalLanguage String
				ConsoleDisplayBufferText String


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

			UNIX_Printer:


*/

#ifndef __UNIX_PRINTER_H
#define __UNIX_PRINTER_H


#include "CIM_LogicalDevice.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_PrinterDeps.h"


#ifndef PROPERTY_PRINTER_STATUS
#define PROPERTY_PRINTER_STATUS \
					"PrinterStatus"
#endif

#ifndef PROPERTY_DETECTED_ERROR_STATE
#define PROPERTY_DETECTED_ERROR_STATE \
					"DetectedErrorState"
#endif

#ifndef PROPERTY_ERROR_INFORMATION
#define PROPERTY_ERROR_INFORMATION \
					"ErrorInformation"
#endif

#ifndef PROPERTY_PAPER_SIZES_SUPPORTED
#define PROPERTY_PAPER_SIZES_SUPPORTED \
					"PaperSizesSupported"
#endif

#ifndef PROPERTY_PAPER_TYPES_AVAILABLE
#define PROPERTY_PAPER_TYPES_AVAILABLE \
					"PaperTypesAvailable"
#endif

#ifndef PROPERTY_DEFAULT_PAPER_TYPE
#define PROPERTY_DEFAULT_PAPER_TYPE \
					"DefaultPaperType"
#endif

#ifndef PROPERTY_CURRENT_PAPER_TYPE
#define PROPERTY_CURRENT_PAPER_TYPE \
					"CurrentPaperType"
#endif

#ifndef PROPERTY_LANGUAGES_SUPPORTED
#define PROPERTY_LANGUAGES_SUPPORTED \
					"LanguagesSupported"
#endif

#ifndef PROPERTY_MIME_TYPES_SUPPORTED
#define PROPERTY_MIME_TYPES_SUPPORTED \
					"MimeTypesSupported"
#endif

#ifndef PROPERTY_CURRENT_LANGUAGE
#define PROPERTY_CURRENT_LANGUAGE \
					"CurrentLanguage"
#endif

#ifndef PROPERTY_CURRENT_MIME_TYPE
#define PROPERTY_CURRENT_MIME_TYPE \
					"CurrentMimeType"
#endif

#ifndef PROPERTY_DEFAULT_LANGUAGE
#define PROPERTY_DEFAULT_LANGUAGE \
					"DefaultLanguage"
#endif

#ifndef PROPERTY_DEFAULT_MIME_TYPE
#define PROPERTY_DEFAULT_MIME_TYPE \
					"DefaultMimeType"
#endif

#ifndef PROPERTY_JOB_COUNT_SINCE_LAST_RESET
#define PROPERTY_JOB_COUNT_SINCE_LAST_RESET \
					"JobCountSinceLastReset"
#endif

#ifndef PROPERTY_TIME_OF_LAST_RESET
#define PROPERTY_TIME_OF_LAST_RESET \
					"TimeOfLastReset"
#endif

#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_CAPABILITY_DESCRIPTIONS
#define PROPERTY_CAPABILITY_DESCRIPTIONS \
					"CapabilityDescriptions"
#endif

#ifndef PROPERTY_DEFAULT_CAPABILITIES
#define PROPERTY_DEFAULT_CAPABILITIES \
					"DefaultCapabilities"
#endif

#ifndef PROPERTY_CURRENT_CAPABILITIES
#define PROPERTY_CURRENT_CAPABILITIES \
					"CurrentCapabilities"
#endif

#ifndef PROPERTY_MAX_COPIES
#define PROPERTY_MAX_COPIES \
					"MaxCopies"
#endif

#ifndef PROPERTY_DEFAULT_COPIES
#define PROPERTY_DEFAULT_COPIES \
					"DefaultCopies"
#endif

#ifndef PROPERTY_MAX_NUMBER_UP
#define PROPERTY_MAX_NUMBER_UP \
					"MaxNumberUp"
#endif

#ifndef PROPERTY_DEFAULT_NUMBER_UP
#define PROPERTY_DEFAULT_NUMBER_UP \
					"DefaultNumberUp"
#endif

#ifndef PROPERTY_HORIZONTAL_RESOLUTION
#define PROPERTY_HORIZONTAL_RESOLUTION \
					"HorizontalResolution"
#endif

#ifndef PROPERTY_VERTICAL_RESOLUTION
#define PROPERTY_VERTICAL_RESOLUTION \
					"VerticalResolution"
#endif

#ifndef PROPERTY_CHAR_SETS_SUPPORTED
#define PROPERTY_CHAR_SETS_SUPPORTED \
					"CharSetsSupported"
#endif

#ifndef PROPERTY_CURRENT_CHAR_SET
#define PROPERTY_CURRENT_CHAR_SET \
					"CurrentCharSet"
#endif

#ifndef PROPERTY_NATURAL_LANGUAGES_SUPPORTED
#define PROPERTY_NATURAL_LANGUAGES_SUPPORTED \
					"NaturalLanguagesSupported"
#endif

#ifndef PROPERTY_CURRENT_NATURAL_LANGUAGE
#define PROPERTY_CURRENT_NATURAL_LANGUAGE \
					"CurrentNaturalLanguage"
#endif

#ifndef PROPERTY_MAX_SIZE_SUPPORTED
#define PROPERTY_MAX_SIZE_SUPPORTED \
					"MaxSizeSupported"
#endif

#ifndef PROPERTY_AVAILABLE_JOB_SHEETS
#define PROPERTY_AVAILABLE_JOB_SHEETS \
					"AvailableJobSheets"
#endif

#ifndef PROPERTY_MARKING_TECHNOLOGY
#define PROPERTY_MARKING_TECHNOLOGY \
					"MarkingTechnology"
#endif

#ifndef PROPERTY_CURRENT_OPERATOR
#define PROPERTY_CURRENT_OPERATOR \
					"CurrentOperator"
#endif

#ifndef PROPERTY_SERVICE_PERSON
#define PROPERTY_SERVICE_PERSON \
					"ServicePerson"
#endif

#ifndef PROPERTY_SERIAL_NUMBER
#define PROPERTY_SERIAL_NUMBER \
					"SerialNumber"
#endif

#ifndef PROPERTY_CRITICAL_ALERTS
#define PROPERTY_CRITICAL_ALERTS \
					"CriticalAlerts"
#endif

#ifndef PROPERTY_ALL_ALERTS
#define PROPERTY_ALL_ALERTS \
					"AllAlerts"
#endif

#ifndef PROPERTY_CONSOLE_DISABLED
#define PROPERTY_CONSOLE_DISABLED \
					"ConsoleDisabled"
#endif

#ifndef PROPERTY_CONSOLE_NATURAL_LANGUAGE
#define PROPERTY_CONSOLE_NATURAL_LANGUAGE \
					"ConsoleNaturalLanguage"
#endif

#ifndef PROPERTY_CONSOLE_DISPLAY_BUFFER_TEXT
#define PROPERTY_CONSOLE_DISPLAY_BUFFER_TEXT \
					"ConsoleDisplayBufferText"
#endif



class UNIX_Printer :
	public CIM_LogicalDevice
{
public:

	UNIX_Printer();
	~UNIX_Printer();

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
	virtual Boolean getPrinterStatus(CIMProperty&) const;
	virtual Uint16 getPrinterStatus() const;
	virtual void setPrinterStatus(Uint16&);
	virtual Boolean getDetectedErrorState(CIMProperty&) const;
	virtual Uint16 getDetectedErrorState() const;
	virtual void setDetectedErrorState(Uint16&);
	virtual Boolean getErrorInformation(CIMProperty&) const;
	virtual Array<String> getErrorInformation() const;
	virtual void setErrorInformation(Array<String>&);
	virtual Boolean getPaperSizesSupported(CIMProperty&) const;
	virtual Array<Uint16> getPaperSizesSupported() const;
	virtual void setPaperSizesSupported(Array<Uint16>&);
	virtual Boolean getPaperTypesAvailable(CIMProperty&) const;
	virtual Array<String> getPaperTypesAvailable() const;
	virtual void setPaperTypesAvailable(Array<String>&);
	virtual Boolean getDefaultPaperType(CIMProperty&) const;
	virtual String getDefaultPaperType() const;
	virtual void setDefaultPaperType(String&);
	virtual Boolean getCurrentPaperType(CIMProperty&) const;
	virtual String getCurrentPaperType() const;
	virtual void setCurrentPaperType(String&);
	virtual Boolean getLanguagesSupported(CIMProperty&) const;
	virtual Array<Uint16> getLanguagesSupported() const;
	virtual void setLanguagesSupported(Array<Uint16>&);
	virtual Boolean getMimeTypesSupported(CIMProperty&) const;
	virtual Array<String> getMimeTypesSupported() const;
	virtual void setMimeTypesSupported(Array<String>&);
	virtual Boolean getCurrentLanguage(CIMProperty&) const;
	virtual Uint16 getCurrentLanguage() const;
	virtual void setCurrentLanguage(Uint16&);
	virtual Boolean getCurrentMimeType(CIMProperty&) const;
	virtual String getCurrentMimeType() const;
	virtual void setCurrentMimeType(String&);
	virtual Boolean getDefaultLanguage(CIMProperty&) const;
	virtual Uint16 getDefaultLanguage() const;
	virtual void setDefaultLanguage(Uint16&);
	virtual Boolean getDefaultMimeType(CIMProperty&) const;
	virtual String getDefaultMimeType() const;
	virtual void setDefaultMimeType(String&);
	virtual Boolean getJobCountSinceLastReset(CIMProperty&) const;
	virtual Uint32 getJobCountSinceLastReset() const;
	virtual void setJobCountSinceLastReset(Uint32&);
	virtual Boolean getTimeOfLastReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastReset() const;
	virtual void setTimeOfLastReset(CIMDateTime&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual void setCapabilityDescriptions(Array<String>&);
	virtual Boolean getDefaultCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getDefaultCapabilities() const;
	virtual void setDefaultCapabilities(Array<Uint16>&);
	virtual Boolean getCurrentCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCurrentCapabilities() const;
	virtual void setCurrentCapabilities(Array<Uint16>&);
	virtual Boolean getMaxCopies(CIMProperty&) const;
	virtual Uint32 getMaxCopies() const;
	virtual void setMaxCopies(Uint32&);
	virtual Boolean getDefaultCopies(CIMProperty&) const;
	virtual Uint32 getDefaultCopies() const;
	virtual void setDefaultCopies(Uint32&);
	virtual Boolean getMaxNumberUp(CIMProperty&) const;
	virtual Uint32 getMaxNumberUp() const;
	virtual void setMaxNumberUp(Uint32&);
	virtual Boolean getDefaultNumberUp(CIMProperty&) const;
	virtual Uint32 getDefaultNumberUp() const;
	virtual void setDefaultNumberUp(Uint32&);
	virtual Boolean getHorizontalResolution(CIMProperty&) const;
	virtual Uint32 getHorizontalResolution() const;
	virtual void setHorizontalResolution(Uint32&);
	virtual Boolean getVerticalResolution(CIMProperty&) const;
	virtual Uint32 getVerticalResolution() const;
	virtual void setVerticalResolution(Uint32&);
	virtual Boolean getCharSetsSupported(CIMProperty&) const;
	virtual Array<String> getCharSetsSupported() const;
	virtual void setCharSetsSupported(Array<String>&);
	virtual Boolean getCurrentCharSet(CIMProperty&) const;
	virtual String getCurrentCharSet() const;
	virtual void setCurrentCharSet(String&);
	virtual Boolean getNaturalLanguagesSupported(CIMProperty&) const;
	virtual Array<String> getNaturalLanguagesSupported() const;
	virtual void setNaturalLanguagesSupported(Array<String>&);
	virtual Boolean getCurrentNaturalLanguage(CIMProperty&) const;
	virtual String getCurrentNaturalLanguage() const;
	virtual void setCurrentNaturalLanguage(String&);
	virtual Boolean getMaxSizeSupported(CIMProperty&) const;
	virtual Uint32 getMaxSizeSupported() const;
	virtual void setMaxSizeSupported(Uint32&);
	virtual Boolean getAvailableJobSheets(CIMProperty&) const;
	virtual Array<String> getAvailableJobSheets() const;
	virtual void setAvailableJobSheets(Array<String>&);
	virtual Boolean getMarkingTechnology(CIMProperty&) const;
	virtual Uint16 getMarkingTechnology() const;
	virtual void setMarkingTechnology(Uint16&);
	virtual Boolean getCurrentOperator(CIMProperty&) const;
	virtual String getCurrentOperator() const;
	virtual void setCurrentOperator(String&);
	virtual Boolean getServicePerson(CIMProperty&) const;
	virtual String getServicePerson() const;
	virtual void setServicePerson(String&);
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual void setSerialNumber(String&);
	virtual Boolean getCriticalAlerts(CIMProperty&) const;
	virtual Uint32 getCriticalAlerts() const;
	virtual void setCriticalAlerts(Uint32&);
	virtual Boolean getAllAlerts(CIMProperty&) const;
	virtual Uint32 getAllAlerts() const;
	virtual void setAllAlerts(Uint32&);
	virtual Boolean getConsoleDisabled(CIMProperty&) const;
	virtual Boolean getConsoleDisabled() const;
	virtual void setConsoleDisabled(Boolean&);
	virtual Boolean getConsoleNaturalLanguage(CIMProperty&) const;
	virtual String getConsoleNaturalLanguage() const;
	virtual void setConsoleNaturalLanguage(String&);
	virtual Boolean getConsoleDisplayBufferText(CIMProperty&) const;
	virtual Array<String> getConsoleDisplayBufferText() const;
	virtual void setConsoleDisplayBufferText(Array<String>&);

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
	Uint16 _printerStatus;
	Uint16 _detectedErrorState;
	Array<String> _errorInformation;
	Array<Uint16> _paperSizesSupported;
	Array<String> _paperTypesAvailable;
	String _defaultPaperType;
	String _currentPaperType;
	Array<Uint16> _languagesSupported;
	Array<String> _mimeTypesSupported;
	Uint16 _currentLanguage;
	String _currentMimeType;
	Uint16 _defaultLanguage;
	String _defaultMimeType;
	Uint32 _jobCountSinceLastReset;
	CIMDateTime _timeOfLastReset;
	Array<Uint16> _capabilities;
	Array<String> _capabilityDescriptions;
	Array<Uint16> _defaultCapabilities;
	Array<Uint16> _currentCapabilities;
	Uint32 _maxCopies;
	Uint32 _defaultCopies;
	Uint32 _maxNumberUp;
	Uint32 _defaultNumberUp;
	Uint32 _horizontalResolution;
	Uint32 _verticalResolution;
	Array<String> _charSetsSupported;
	String _currentCharSet;
	Array<String> _naturalLanguagesSupported;
	String _currentNaturalLanguage;
	Uint32 _maxSizeSupported;
	Array<String> _availableJobSheets;
	Uint16 _markingTechnology;
	String _currentOperator;
	String _servicePerson;
	String _serialNumber;
	Uint32 _criticalAlerts;
	Uint32 _allAlerts;
	Boolean _consoleDisabled;
	String _consoleNaturalLanguage;
	Array<String> _consoleDisplayBufferText;

#	include "UNIX_PrinterPrivate.h"


};

#endif /* UNIX_PRINTER */
