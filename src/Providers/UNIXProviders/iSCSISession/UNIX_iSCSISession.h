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
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Pipes
*/


/* **** Description *** */
/*
iSCSISession is a network pipe between an initiator and target SCSIProtocolEndpoints. An iSCSISession is composed of one or more TCP connections which MUST be selected from a SystemSpecificCollection representing an iSCSI Portal Group. NetworkPipeComposition aggregates NetworkPipe instances representing iSCSI connections, which are associated to TCPProtocolEndpoints. Only an iSCSI initiator can create an iSCSI Session, an iSCSI Target MUST accept (or reject) a session request. EndOfNetworkPipe associates iSCSISession with SCSIProtocolEndpoint.
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

			CIM_NetworkPipe:
				Directionality UInt16
				AggregationBehavior UInt16

			UNIX_iSCSISession:
				SessionType UInt16
				TSIH UInt32
				EndPointName String
				CurrentConnections UInt32
				InitialR2T Boolean
				ImmediateData Boolean
				MaxOutstandingR2T UInt32
				MaxUnsolicitedFirstDataBurstLength UInt32
				MaxDataBurstLength UInt32
				DataSequenceInOrder Boolean
				DataPDUInOrder Boolean
				ErrorRecoveryLevel UInt32
				MaxConnectionsPerSession UInt32
				DefaultTimeToWait UInt32
				DefaultTimeToRetain UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_NetworkPipe:

			UNIX_iSCSISession:


*/

#ifndef __UNIX_ISCSISESSION_H
#define __UNIX_ISCSISESSION_H


#include "CIM_NetworkPipe.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_iSCSISessionDeps.h"


#ifndef PROPERTY_SESSION_TYPE
#define PROPERTY_SESSION_TYPE \
					"SessionType"
#endif

#ifndef PROPERTY_T_S_I_H
#define PROPERTY_T_S_I_H \
					"TSIH"
#endif

#ifndef PROPERTY_END_POINT_NAME
#define PROPERTY_END_POINT_NAME \
					"EndPointName"
#endif

#ifndef PROPERTY_CURRENT_CONNECTIONS
#define PROPERTY_CURRENT_CONNECTIONS \
					"CurrentConnections"
#endif

#ifndef PROPERTY_INITIAL_R_2_T
#define PROPERTY_INITIAL_R_2_T \
					"InitialR2T"
#endif

#ifndef PROPERTY_IMMEDIATE_DATA
#define PROPERTY_IMMEDIATE_DATA \
					"ImmediateData"
#endif

#ifndef PROPERTY_MAX_OUTSTANDING_R_2_T
#define PROPERTY_MAX_OUTSTANDING_R_2_T \
					"MaxOutstandingR2T"
#endif

#ifndef PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH
#define PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH \
					"MaxUnsolicitedFirstDataBurstLength"
#endif

#ifndef PROPERTY_MAX_DATA_BURST_LENGTH
#define PROPERTY_MAX_DATA_BURST_LENGTH \
					"MaxDataBurstLength"
#endif

#ifndef PROPERTY_DATA_SEQUENCE_IN_ORDER
#define PROPERTY_DATA_SEQUENCE_IN_ORDER \
					"DataSequenceInOrder"
#endif

#ifndef PROPERTY_DATA_P_D_U_IN_ORDER
#define PROPERTY_DATA_P_D_U_IN_ORDER \
					"DataPDUInOrder"
#endif

#ifndef PROPERTY_ERROR_RECOVERY_LEVEL
#define PROPERTY_ERROR_RECOVERY_LEVEL \
					"ErrorRecoveryLevel"
#endif

#ifndef PROPERTY_MAX_CONNECTIONS_PER_SESSION
#define PROPERTY_MAX_CONNECTIONS_PER_SESSION \
					"MaxConnectionsPerSession"
#endif

#ifndef PROPERTY_DEFAULT_TIME_TO_WAIT
#define PROPERTY_DEFAULT_TIME_TO_WAIT \
					"DefaultTimeToWait"
#endif

#ifndef PROPERTY_DEFAULT_TIME_TO_RETAIN
#define PROPERTY_DEFAULT_TIME_TO_RETAIN \
					"DefaultTimeToRetain"
#endif



class UNIX_iSCSISession :
	public CIM_NetworkPipe
{
public:

	UNIX_iSCSISession();
	~UNIX_iSCSISession();

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
	virtual Boolean getDirectionality(CIMProperty&) const;
	virtual Uint16 getDirectionality() const;
	virtual void setDirectionality(Uint16&);
	virtual Boolean getAggregationBehavior(CIMProperty&) const;
	virtual Uint16 getAggregationBehavior() const;
	virtual void setAggregationBehavior(Uint16&);
	virtual Boolean getSessionType(CIMProperty&) const;
	virtual Uint16 getSessionType() const;
	virtual void setSessionType(Uint16&);
	virtual Boolean getTSIH(CIMProperty&) const;
	virtual Uint32 getTSIH() const;
	virtual void setTSIH(Uint32&);
	virtual Boolean getEndPointName(CIMProperty&) const;
	virtual String getEndPointName() const;
	virtual void setEndPointName(String&);
	virtual Boolean getCurrentConnections(CIMProperty&) const;
	virtual Uint32 getCurrentConnections() const;
	virtual void setCurrentConnections(Uint32&);
	virtual Boolean getInitialR2T(CIMProperty&) const;
	virtual Boolean getInitialR2T() const;
	virtual void setInitialR2T(Boolean&);
	virtual Boolean getImmediateData(CIMProperty&) const;
	virtual Boolean getImmediateData() const;
	virtual void setImmediateData(Boolean&);
	virtual Boolean getMaxOutstandingR2T(CIMProperty&) const;
	virtual Uint32 getMaxOutstandingR2T() const;
	virtual void setMaxOutstandingR2T(Uint32&);
	virtual Boolean getMaxUnsolicitedFirstDataBurstLength(CIMProperty&) const;
	virtual Uint32 getMaxUnsolicitedFirstDataBurstLength() const;
	virtual void setMaxUnsolicitedFirstDataBurstLength(Uint32&);
	virtual Boolean getMaxDataBurstLength(CIMProperty&) const;
	virtual Uint32 getMaxDataBurstLength() const;
	virtual void setMaxDataBurstLength(Uint32&);
	virtual Boolean getDataSequenceInOrder(CIMProperty&) const;
	virtual Boolean getDataSequenceInOrder() const;
	virtual void setDataSequenceInOrder(Boolean&);
	virtual Boolean getDataPDUInOrder(CIMProperty&) const;
	virtual Boolean getDataPDUInOrder() const;
	virtual void setDataPDUInOrder(Boolean&);
	virtual Boolean getErrorRecoveryLevel(CIMProperty&) const;
	virtual Uint32 getErrorRecoveryLevel() const;
	virtual void setErrorRecoveryLevel(Uint32&);
	virtual Boolean getMaxConnectionsPerSession(CIMProperty&) const;
	virtual Uint32 getMaxConnectionsPerSession() const;
	virtual void setMaxConnectionsPerSession(Uint32&);
	virtual Boolean getDefaultTimeToWait(CIMProperty&) const;
	virtual Uint32 getDefaultTimeToWait() const;
	virtual void setDefaultTimeToWait(Uint32&);
	virtual Boolean getDefaultTimeToRetain(CIMProperty&) const;
	virtual Uint32 getDefaultTimeToRetain() const;
	virtual void setDefaultTimeToRetain(Uint32&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
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
	Uint16 _directionality;
	Uint16 _aggregationBehavior;
	Uint16 _sessionType;
	Uint32 _tSIH;
	String _endPointName;
	Uint32 _currentConnections;
	Boolean _initialR2T;
	Boolean _immediateData;
	Uint32 _maxOutstandingR2T;
	Uint32 _maxUnsolicitedFirstDataBurstLength;
	Uint32 _maxDataBurstLength;
	Boolean _dataSequenceInOrder;
	Boolean _dataPDUInOrder;
	Uint32 _errorRecoveryLevel;
	Uint32 _maxConnectionsPerSession;
	Uint32 _defaultTimeToWait;
	Uint32 _defaultTimeToRetain;

#	include "UNIX_iSCSISessionPrivate.h"


};

#endif /* UNIX_ISCSISESSION */
