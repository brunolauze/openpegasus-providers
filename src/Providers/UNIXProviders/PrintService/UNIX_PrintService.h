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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
The Service that provides support for printing. The basic assumption of the Printing Model is that a PrintService accepts a PrintJob for processing, using its PrintSAP. The Job is then placed on a PrintQueue (that is indicated by the QueueForPrintService association). Printers take Jobs from Queues (indicated by the PrinterServicingQueue association). The ABNF for CIM references to PWG Standards and MIBs is in the directory 'ftp://ftp.pwg.org/pub/pwg/general/process' in the file 'pwg-cim-references-format-20060309.txt'. An example for a MappingStrings reference to a PWG Standard is 'PWG5101-1.PWG|Section 4 Media Color Names'. An example for a MappingStrings reference to a PWG MIB is 'MIB.PWG|PWG-IMAGING-COUNTER-MIB.icMonitorCompletedJobs'.
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

			CIM_Service:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				PrimaryOwnerName String
				PrimaryOwnerContact String
				StartMode String
				Started Boolean
				LoSID String
				LoSOrgID String

			UNIX_PrintService:
				PaperTypesAvailable String
				LanguagesSupported UInt16
				MimeTypesSupported String
				Capabilities UInt16
				CapabilityDescriptions String
				AvailableFilters String
				AuthenticationSupported String
				Charset String
				DriverInstallerURI String
				IsAcceptingJobs Boolean
				Location String
				MakeAndModel String
				MessageFromOperator String
				MoreInfoManufacturerURI String
				MoreInfoURI String
				MultipleOperationTimeout UInt32
				NaturalLanguage String
				SecuritySupported String
				State UInt16
				StateMessage String
				StateReasons String
				Uptime UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_Service:
				StartService UInt32
				StopService UInt32
				ChangeAffectedElementsAssignedSequence UInt32

			UNIX_PrintService:


*/

#ifndef __UNIX_PRINTSERVICE_H
#define __UNIX_PRINTSERVICE_H


#include "CIM_Service.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_PrintServiceDeps.h"


#ifndef PROPERTY_PAPER_TYPES_AVAILABLE
#define PROPERTY_PAPER_TYPES_AVAILABLE \
					"PaperTypesAvailable"
#endif

#ifndef PROPERTY_LANGUAGES_SUPPORTED
#define PROPERTY_LANGUAGES_SUPPORTED \
					"LanguagesSupported"
#endif

#ifndef PROPERTY_MIME_TYPES_SUPPORTED
#define PROPERTY_MIME_TYPES_SUPPORTED \
					"MimeTypesSupported"
#endif

#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_CAPABILITY_DESCRIPTIONS
#define PROPERTY_CAPABILITY_DESCRIPTIONS \
					"CapabilityDescriptions"
#endif

#ifndef PROPERTY_AVAILABLE_FILTERS
#define PROPERTY_AVAILABLE_FILTERS \
					"AvailableFilters"
#endif

#ifndef PROPERTY_AUTHENTICATION_SUPPORTED
#define PROPERTY_AUTHENTICATION_SUPPORTED \
					"AuthenticationSupported"
#endif

#ifndef PROPERTY_CHARSET
#define PROPERTY_CHARSET \
					"Charset"
#endif

#ifndef PROPERTY_DRIVER_INSTALLER_U_R_I
#define PROPERTY_DRIVER_INSTALLER_U_R_I \
					"DriverInstallerURI"
#endif

#ifndef PROPERTY_IS_ACCEPTING_JOBS
#define PROPERTY_IS_ACCEPTING_JOBS \
					"IsAcceptingJobs"
#endif

#ifndef PROPERTY_LOCATION
#define PROPERTY_LOCATION \
					"Location"
#endif

#ifndef PROPERTY_MAKE_AND_MODEL
#define PROPERTY_MAKE_AND_MODEL \
					"MakeAndModel"
#endif

#ifndef PROPERTY_MESSAGE_FROM_OPERATOR
#define PROPERTY_MESSAGE_FROM_OPERATOR \
					"MessageFromOperator"
#endif

#ifndef PROPERTY_MORE_INFO_MANUFACTURER_U_R_I
#define PROPERTY_MORE_INFO_MANUFACTURER_U_R_I \
					"MoreInfoManufacturerURI"
#endif

#ifndef PROPERTY_MORE_INFO_U_R_I
#define PROPERTY_MORE_INFO_U_R_I \
					"MoreInfoURI"
#endif

#ifndef PROPERTY_MULTIPLE_OPERATION_TIMEOUT
#define PROPERTY_MULTIPLE_OPERATION_TIMEOUT \
					"MultipleOperationTimeout"
#endif

#ifndef PROPERTY_NATURAL_LANGUAGE
#define PROPERTY_NATURAL_LANGUAGE \
					"NaturalLanguage"
#endif

#ifndef PROPERTY_SECURITY_SUPPORTED
#define PROPERTY_SECURITY_SUPPORTED \
					"SecuritySupported"
#endif

#ifndef PROPERTY_STATE
#define PROPERTY_STATE \
					"State"
#endif

#ifndef PROPERTY_STATE_MESSAGE
#define PROPERTY_STATE_MESSAGE \
					"StateMessage"
#endif

#ifndef PROPERTY_STATE_REASONS
#define PROPERTY_STATE_REASONS \
					"StateReasons"
#endif

#ifndef PROPERTY_UPTIME
#define PROPERTY_UPTIME \
					"Uptime"
#endif



class UNIX_PrintService :
	public CIM_Service
{
public:

	UNIX_PrintService();
	~UNIX_PrintService();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getPrimaryOwnerName(CIMProperty&) const;
	virtual String getPrimaryOwnerName() const;
	virtual void setPrimaryOwnerName(String&);
	virtual Boolean getPrimaryOwnerContact(CIMProperty&) const;
	virtual String getPrimaryOwnerContact() const;
	virtual void setPrimaryOwnerContact(String&);
	virtual Boolean getStartMode(CIMProperty&) const;
	virtual String getStartMode() const;
	virtual void setStartMode(String&);
	virtual Boolean getStarted(CIMProperty&) const;
	virtual Boolean getStarted() const;
	virtual void setStarted(Boolean&);
	virtual Boolean getLoSID(CIMProperty&) const;
	virtual String getLoSID() const;
	virtual void setLoSID(String&);
	virtual Boolean getLoSOrgID(CIMProperty&) const;
	virtual String getLoSOrgID() const;
	virtual void setLoSOrgID(String&);
	virtual Boolean getPaperTypesAvailable(CIMProperty&) const;
	virtual Array<String> getPaperTypesAvailable() const;
	virtual void setPaperTypesAvailable(Array<String>&);
	virtual Boolean getLanguagesSupported(CIMProperty&) const;
	virtual Array<Uint16> getLanguagesSupported() const;
	virtual void setLanguagesSupported(Array<Uint16>&);
	virtual Boolean getMimeTypesSupported(CIMProperty&) const;
	virtual Array<String> getMimeTypesSupported() const;
	virtual void setMimeTypesSupported(Array<String>&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual void setCapabilityDescriptions(Array<String>&);
	virtual Boolean getAvailableFilters(CIMProperty&) const;
	virtual Array<String> getAvailableFilters() const;
	virtual void setAvailableFilters(Array<String>&);
	virtual Boolean getAuthenticationSupported(CIMProperty&) const;
	virtual Array<String> getAuthenticationSupported() const;
	virtual void setAuthenticationSupported(Array<String>&);
	virtual Boolean getCharset(CIMProperty&) const;
	virtual String getCharset() const;
	virtual void setCharset(String&);
	virtual Boolean getDriverInstallerURI(CIMProperty&) const;
	virtual String getDriverInstallerURI() const;
	virtual void setDriverInstallerURI(String&);
	virtual Boolean getIsAcceptingJobs(CIMProperty&) const;
	virtual Boolean getIsAcceptingJobs() const;
	virtual void setIsAcceptingJobs(Boolean&);
	virtual Boolean getLocation(CIMProperty&) const;
	virtual String getLocation() const;
	virtual void setLocation(String&);
	virtual Boolean getMakeAndModel(CIMProperty&) const;
	virtual String getMakeAndModel() const;
	virtual void setMakeAndModel(String&);
	virtual Boolean getMessageFromOperator(CIMProperty&) const;
	virtual String getMessageFromOperator() const;
	virtual void setMessageFromOperator(String&);
	virtual Boolean getMoreInfoManufacturerURI(CIMProperty&) const;
	virtual String getMoreInfoManufacturerURI() const;
	virtual void setMoreInfoManufacturerURI(String&);
	virtual Boolean getMoreInfoURI(CIMProperty&) const;
	virtual String getMoreInfoURI() const;
	virtual void setMoreInfoURI(String&);
	virtual Boolean getMultipleOperationTimeout(CIMProperty&) const;
	virtual Uint32 getMultipleOperationTimeout() const;
	virtual void setMultipleOperationTimeout(Uint32&);
	virtual Boolean getNaturalLanguage(CIMProperty&) const;
	virtual String getNaturalLanguage() const;
	virtual void setNaturalLanguage(String&);
	virtual Boolean getSecuritySupported(CIMProperty&) const;
	virtual Array<String> getSecuritySupported() const;
	virtual void setSecuritySupported(Array<String>&);
	virtual Boolean getState(CIMProperty&) const;
	virtual Uint16 getState() const;
	virtual void setState(Uint16&);
	virtual Boolean getStateMessage(CIMProperty&) const;
	virtual String getStateMessage() const;
	virtual void setStateMessage(String&);
	virtual Boolean getStateReasons(CIMProperty&) const;
	virtual Array<String> getStateReasons() const;
	virtual void setStateReasons(Array<String>&);
	virtual Boolean getUptime(CIMProperty&) const;
	virtual Uint32 getUptime() const;
	virtual void setUptime(Uint32&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeStartService();

	virtual Uint32 invokeStopService();

	virtual Uint32 invokeChangeAffectedElementsAssignedSequence(
		CIMInstance &inManagedElements,
		Array<Uint16> &inAssignedSequence,
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
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _primaryOwnerName;
	String _primaryOwnerContact;
	String _startMode;
	Boolean _started;
	String _loSID;
	String _loSOrgID;
	Array<String> _paperTypesAvailable;
	Array<Uint16> _languagesSupported;
	Array<String> _mimeTypesSupported;
	Array<Uint16> _capabilities;
	Array<String> _capabilityDescriptions;
	Array<String> _availableFilters;
	Array<String> _authenticationSupported;
	String _charset;
	String _driverInstallerURI;
	Boolean _isAcceptingJobs;
	String _location;
	String _makeAndModel;
	String _messageFromOperator;
	String _moreInfoManufacturerURI;
	String _moreInfoURI;
	Uint32 _multipleOperationTimeout;
	String _naturalLanguage;
	Array<String> _securitySupported;
	Uint16 _state;
	String _stateMessage;
	Array<String> _stateReasons;
	Uint32 _uptime;

#	include "UNIX_PrintServicePrivate.h"


};

#endif /* UNIX_PRINTSERVICE */
