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
CIM::System::Boot
*/


/* **** Description *** */
/*
This Service is implemented by a LogicalDevice (e.g. a NetworkAdapter or Modem) that is capable of sending alert messages to a remote destination. The alert messages reflect the state of one or more ManagedSystemElements. The Elements for which alert messages are forwarded, are defined by enumerating the ProvidesServiceToElement association for the Service. Out of Band (OOB) refers to the mechanisms in use when normal OS-based management mechanisms are not possible. This occurs when the OS is down or not functioning properly.
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

			UNIX_OOBAlertService:
				DestinationType UInt16
				OtherDestinationTypeDescription String
				DestinationAddress String
				MessageFormat UInt16
				OtherMessageFormatDescription String
				OnlySendsFixedMessage Boolean
				FixedPartOfMessage String
				DestinationIsAckCapable Boolean
				RetryCount UInt16
				RetryInterval UInt16
				PresenceHeartbeatCapable Boolean
				EnablePresenceHeartbeats Boolean


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

			UNIX_OOBAlertService:


*/

#ifndef __UNIX_OOBALERTSERVICE_H
#define __UNIX_OOBALERTSERVICE_H


#include "CIM_Service.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_OOBAlertServiceDeps.h"


#ifndef PROPERTY_DESTINATION_TYPE
#define PROPERTY_DESTINATION_TYPE \
					"DestinationType"
#endif

#ifndef PROPERTY_OTHER_DESTINATION_TYPE_DESCRIPTION
#define PROPERTY_OTHER_DESTINATION_TYPE_DESCRIPTION \
					"OtherDestinationTypeDescription"
#endif

#ifndef PROPERTY_DESTINATION_ADDRESS
#define PROPERTY_DESTINATION_ADDRESS \
					"DestinationAddress"
#endif

#ifndef PROPERTY_MESSAGE_FORMAT
#define PROPERTY_MESSAGE_FORMAT \
					"MessageFormat"
#endif

#ifndef PROPERTY_OTHER_MESSAGE_FORMAT_DESCRIPTION
#define PROPERTY_OTHER_MESSAGE_FORMAT_DESCRIPTION \
					"OtherMessageFormatDescription"
#endif

#ifndef PROPERTY_ONLY_SENDS_FIXED_MESSAGE
#define PROPERTY_ONLY_SENDS_FIXED_MESSAGE \
					"OnlySendsFixedMessage"
#endif

#ifndef PROPERTY_FIXED_PART_OF_MESSAGE
#define PROPERTY_FIXED_PART_OF_MESSAGE \
					"FixedPartOfMessage"
#endif

#ifndef PROPERTY_DESTINATION_IS_ACK_CAPABLE
#define PROPERTY_DESTINATION_IS_ACK_CAPABLE \
					"DestinationIsAckCapable"
#endif

#ifndef PROPERTY_RETRY_COUNT
#define PROPERTY_RETRY_COUNT \
					"RetryCount"
#endif

#ifndef PROPERTY_RETRY_INTERVAL
#define PROPERTY_RETRY_INTERVAL \
					"RetryInterval"
#endif

#ifndef PROPERTY_PRESENCE_HEARTBEAT_CAPABLE
#define PROPERTY_PRESENCE_HEARTBEAT_CAPABLE \
					"PresenceHeartbeatCapable"
#endif

#ifndef PROPERTY_ENABLE_PRESENCE_HEARTBEATS
#define PROPERTY_ENABLE_PRESENCE_HEARTBEATS \
					"EnablePresenceHeartbeats"
#endif



class UNIX_OOBAlertService :
	public CIM_Service
{
public:

	UNIX_OOBAlertService();
	~UNIX_OOBAlertService();

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
	virtual Boolean getDestinationType(CIMProperty&) const;
	virtual Uint16 getDestinationType() const;
	virtual void setDestinationType(Uint16&);
	virtual Boolean getOtherDestinationTypeDescription(CIMProperty&) const;
	virtual String getOtherDestinationTypeDescription() const;
	virtual void setOtherDestinationTypeDescription(String&);
	virtual Boolean getDestinationAddress(CIMProperty&) const;
	virtual String getDestinationAddress() const;
	virtual void setDestinationAddress(String&);
	virtual Boolean getMessageFormat(CIMProperty&) const;
	virtual Uint16 getMessageFormat() const;
	virtual void setMessageFormat(Uint16&);
	virtual Boolean getOtherMessageFormatDescription(CIMProperty&) const;
	virtual String getOtherMessageFormatDescription() const;
	virtual void setOtherMessageFormatDescription(String&);
	virtual Boolean getOnlySendsFixedMessage(CIMProperty&) const;
	virtual Boolean getOnlySendsFixedMessage() const;
	virtual void setOnlySendsFixedMessage(Boolean&);
	virtual Boolean getFixedPartOfMessage(CIMProperty&) const;
	virtual String getFixedPartOfMessage() const;
	virtual void setFixedPartOfMessage(String&);
	virtual Boolean getDestinationIsAckCapable(CIMProperty&) const;
	virtual Boolean getDestinationIsAckCapable() const;
	virtual void setDestinationIsAckCapable(Boolean&);
	virtual Boolean getRetryCount(CIMProperty&) const;
	virtual Uint16 getRetryCount() const;
	virtual void setRetryCount(Uint16&);
	virtual Boolean getRetryInterval(CIMProperty&) const;
	virtual Uint16 getRetryInterval() const;
	virtual void setRetryInterval(Uint16&);
	virtual Boolean getPresenceHeartbeatCapable(CIMProperty&) const;
	virtual Boolean getPresenceHeartbeatCapable() const;
	virtual void setPresenceHeartbeatCapable(Boolean&);
	virtual Boolean getEnablePresenceHeartbeats(CIMProperty&) const;
	virtual Boolean getEnablePresenceHeartbeats() const;
	virtual void setEnablePresenceHeartbeats(Boolean&);

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
	Uint16 _destinationType;
	String _otherDestinationTypeDescription;
	String _destinationAddress;
	Uint16 _messageFormat;
	String _otherMessageFormatDescription;
	Boolean _onlySendsFixedMessage;
	String _fixedPartOfMessage;
	Boolean _destinationIsAckCapable;
	Uint16 _retryCount;
	Uint16 _retryInterval;
	Boolean _presenceHeartbeatCapable;
	Boolean _enablePresenceHeartbeats;

#	include "UNIX_OOBAlertServicePrivate.h"


};

#endif /* UNIX_OOBALERTSERVICE */
