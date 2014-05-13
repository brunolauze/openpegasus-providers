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
2.14.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Logs
*/


/* **** Description *** */
/*
MessageLog represents any type of event, error or informational register or chronicle. The object describes the existence of the log and its characteristics. Several methods are defined for retrieving, writing and deleting log entries, and maintaining the log. This type of log uses iterators to access the log records, whereas its peer class, RecordLog, uses more abstracted access mechanisms.
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

			CIM_Log:
				MaxNumberOfRecords UInt64
				CurrentNumberOfRecords UInt64
				LogState UInt16
				OverwritePolicy UInt16

			UNIX_MessageLog:
				CreationClassName String
				Capabilities UInt16
				CapabilitiesDescriptions String
				MaxLogSize UInt64
				SizeOfHeader UInt64
				HeaderFormat String
				MaxRecordSize UInt64
				SizeOfRecordHeader UInt64
				RecordHeaderFormat String
				OtherPolicyDescription String
				TimeWhenOutdated DateTime
				PercentageNearFull UInt8
				LastChange UInt16
				TimeOfLastChange DateTime
				RecordLastChanged UInt64
				IsFrozen Boolean
				CharacterSet UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_Log:
				ClearLog UInt32

			UNIX_MessageLog:
				PositionToFirstRecord UInt32
				PositionAtRecord UInt32
				GetRecord UInt32
				DeleteRecord UInt32
				WriteRecord UInt32
				CancelIteration UInt32
				FreezeLog UInt32
				FlagRecordForOverwrite UInt32


*/

#ifndef __UNIX_MESSAGELOG_H
#define __UNIX_MESSAGELOG_H


#include "CIM_Log.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_MessageLogDeps.h"


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_CAPABILITIES_DESCRIPTIONS
#define PROPERTY_CAPABILITIES_DESCRIPTIONS \
					"CapabilitiesDescriptions"
#endif

#ifndef PROPERTY_MAX_LOG_SIZE
#define PROPERTY_MAX_LOG_SIZE \
					"MaxLogSize"
#endif

#ifndef PROPERTY_SIZE_OF_HEADER
#define PROPERTY_SIZE_OF_HEADER \
					"SizeOfHeader"
#endif

#ifndef PROPERTY_HEADER_FORMAT
#define PROPERTY_HEADER_FORMAT \
					"HeaderFormat"
#endif

#ifndef PROPERTY_MAX_RECORD_SIZE
#define PROPERTY_MAX_RECORD_SIZE \
					"MaxRecordSize"
#endif

#ifndef PROPERTY_SIZE_OF_RECORD_HEADER
#define PROPERTY_SIZE_OF_RECORD_HEADER \
					"SizeOfRecordHeader"
#endif

#ifndef PROPERTY_RECORD_HEADER_FORMAT
#define PROPERTY_RECORD_HEADER_FORMAT \
					"RecordHeaderFormat"
#endif

#ifndef PROPERTY_OTHER_POLICY_DESCRIPTION
#define PROPERTY_OTHER_POLICY_DESCRIPTION \
					"OtherPolicyDescription"
#endif

#ifndef PROPERTY_TIME_WHEN_OUTDATED
#define PROPERTY_TIME_WHEN_OUTDATED \
					"TimeWhenOutdated"
#endif

#ifndef PROPERTY_PERCENTAGE_NEAR_FULL
#define PROPERTY_PERCENTAGE_NEAR_FULL \
					"PercentageNearFull"
#endif

#ifndef PROPERTY_LAST_CHANGE
#define PROPERTY_LAST_CHANGE \
					"LastChange"
#endif

#ifndef PROPERTY_TIME_OF_LAST_CHANGE
#define PROPERTY_TIME_OF_LAST_CHANGE \
					"TimeOfLastChange"
#endif

#ifndef PROPERTY_RECORD_LAST_CHANGED
#define PROPERTY_RECORD_LAST_CHANGED \
					"RecordLastChanged"
#endif

#ifndef PROPERTY_IS_FROZEN
#define PROPERTY_IS_FROZEN \
					"IsFrozen"
#endif

#ifndef PROPERTY_CHARACTER_SET
#define PROPERTY_CHARACTER_SET \
					"CharacterSet"
#endif



class UNIX_MessageLog :
	public CIM_Log
{
public:

	UNIX_MessageLog();
	~UNIX_MessageLog();

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
	virtual Boolean getMaxNumberOfRecords(CIMProperty&) const;
	virtual Uint64 getMaxNumberOfRecords() const;
	virtual void setMaxNumberOfRecords(Uint64&);
	virtual Boolean getCurrentNumberOfRecords(CIMProperty&) const;
	virtual Uint64 getCurrentNumberOfRecords() const;
	virtual void setCurrentNumberOfRecords(Uint64&);
	virtual Boolean getLogState(CIMProperty&) const;
	virtual Uint16 getLogState() const;
	virtual void setLogState(Uint16&);
	virtual Boolean getOverwritePolicy(CIMProperty&) const;
	virtual Uint16 getOverwritePolicy() const;
	virtual void setOverwritePolicy(Uint16&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getCapabilitiesDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilitiesDescriptions() const;
	virtual void setCapabilitiesDescriptions(Array<String>&);
	virtual Boolean getMaxLogSize(CIMProperty&) const;
	virtual Uint64 getMaxLogSize() const;
	virtual void setMaxLogSize(Uint64&);
	virtual Boolean getSizeOfHeader(CIMProperty&) const;
	virtual Uint64 getSizeOfHeader() const;
	virtual void setSizeOfHeader(Uint64&);
	virtual Boolean getHeaderFormat(CIMProperty&) const;
	virtual String getHeaderFormat() const;
	virtual void setHeaderFormat(String&);
	virtual Boolean getMaxRecordSize(CIMProperty&) const;
	virtual Uint64 getMaxRecordSize() const;
	virtual void setMaxRecordSize(Uint64&);
	virtual Boolean getSizeOfRecordHeader(CIMProperty&) const;
	virtual Uint64 getSizeOfRecordHeader() const;
	virtual void setSizeOfRecordHeader(Uint64&);
	virtual Boolean getRecordHeaderFormat(CIMProperty&) const;
	virtual String getRecordHeaderFormat() const;
	virtual void setRecordHeaderFormat(String&);
	virtual Boolean getOtherPolicyDescription(CIMProperty&) const;
	virtual String getOtherPolicyDescription() const;
	virtual void setOtherPolicyDescription(String&);
	virtual Boolean getTimeWhenOutdated(CIMProperty&) const;
	virtual CIMDateTime getTimeWhenOutdated() const;
	virtual void setTimeWhenOutdated(CIMDateTime&);
	virtual Boolean getPercentageNearFull(CIMProperty&) const;
	virtual Uint8 getPercentageNearFull() const;
	virtual void setPercentageNearFull(Uint8&);
	virtual Boolean getLastChange(CIMProperty&) const;
	virtual Uint16 getLastChange() const;
	virtual void setLastChange(Uint16&);
	virtual Boolean getTimeOfLastChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastChange() const;
	virtual void setTimeOfLastChange(CIMDateTime&);
	virtual Boolean getRecordLastChanged(CIMProperty&) const;
	virtual Uint64 getRecordLastChanged() const;
	virtual void setRecordLastChanged(Uint64&);
	virtual Boolean getIsFrozen(CIMProperty&) const;
	virtual Boolean getIsFrozen() const;
	virtual void setIsFrozen(Boolean&);
	virtual Boolean getCharacterSet(CIMProperty&) const;
	virtual Uint16 getCharacterSet() const;
	virtual void setCharacterSet(Uint16&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeClearLog();

	virtual Uint32 invokePositionToFirstRecord(
		String &inIterationIdentifier
	);

	virtual Uint32 invokePositionAtRecord(
		String &inIterationIdentifier,
		Boolean &inMoveAbsolute,
		Sint64 &inRecordNumber
	);

	virtual Uint32 invokeGetRecord(
		String &inIterationIdentifier,
		Boolean &inPositionToNext,
		Uint64 &inRecordNumber,
		Array<Uint8> &inRecordData
	);

	virtual Uint32 invokeDeleteRecord(
		String &inIterationIdentifier,
		Boolean &inPositionToNext,
		Uint64 &inRecordNumber,
		Array<Uint8> &inRecordData
	);

	virtual Uint32 invokeWriteRecord(
		String &inIterationIdentifier,
		Boolean &inPositionToNext,
		Array<Uint8> &inRecordData,
		Uint64 &inRecordNumber
	);

	virtual Uint32 invokeCancelIteration(
		String &inIterationIdentifier
	);

	virtual Uint32 invokeFreezeLog(
		Boolean &inFreeze
	);

	virtual Uint32 invokeFlagRecordForOverwrite(
		String &inIterationIdentifier,
		Boolean &inPositionToNext,
		Uint64 &inRecordNumber
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
	Uint64 _maxNumberOfRecords;
	Uint64 _currentNumberOfRecords;
	Uint16 _logState;
	Uint16 _overwritePolicy;
	String _creationClassName;
	Array<Uint16> _capabilities;
	Array<String> _capabilitiesDescriptions;
	Uint64 _maxLogSize;
	Uint64 _sizeOfHeader;
	String _headerFormat;
	Uint64 _maxRecordSize;
	Uint64 _sizeOfRecordHeader;
	String _recordHeaderFormat;
	String _otherPolicyDescription;
	CIMDateTime _timeWhenOutdated;
	Uint8 _percentageNearFull;
	Uint16 _lastChange;
	CIMDateTime _timeOfLastChange;
	Uint64 _recordLastChanged;
	Boolean _isFrozen;
	Uint16 _characterSet;

#	include "UNIX_MessageLogPrivate.h"


};

#endif /* UNIX_MESSAGELOG */
