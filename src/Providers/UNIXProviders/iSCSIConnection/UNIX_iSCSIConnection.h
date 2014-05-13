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
2.18.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::iSCSI
*/


/* **** Description *** */
/*
This class contains the attributes of and negotiated values for, an iSCSI Connection which is modeled as a subclass of NetworkPipe. The original settings that are a starting point for negotiation are found in the class iSCSIConnectionSettings.
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

			UNIX_iSCSIConnection:
				ConnectionID UInt32
				MaxReceiveDataSegmentLength UInt32
				MaxTransmitDataSegmentLength UInt32
				HeaderDigestMethod UInt16
				OtherHeaderDigestMethod String
				DataDigestMethod UInt16
				OtherDataDigestMethod String
				ReceivingMarkers Boolean
				SendingMarkers Boolean
				ActiveiSCSIVersion Boolean
				AuthenticationMethodUsed UInt16
				MutualAuthentication Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_NetworkPipe:

			UNIX_iSCSIConnection:


*/

#ifndef __UNIX_ISCSICONNECTION_H
#define __UNIX_ISCSICONNECTION_H


#include "CIM_NetworkPipe.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_iSCSIConnectionDeps.h"


#ifndef PROPERTY_CONNECTION_ID
#define PROPERTY_CONNECTION_ID \
					"ConnectionID"
#endif

#ifndef PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH
#define PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH \
					"MaxReceiveDataSegmentLength"
#endif

#ifndef PROPERTY_MAX_TRANSMIT_DATA_SEGMENT_LENGTH
#define PROPERTY_MAX_TRANSMIT_DATA_SEGMENT_LENGTH \
					"MaxTransmitDataSegmentLength"
#endif

#ifndef PROPERTY_HEADER_DIGEST_METHOD
#define PROPERTY_HEADER_DIGEST_METHOD \
					"HeaderDigestMethod"
#endif

#ifndef PROPERTY_OTHER_HEADER_DIGEST_METHOD
#define PROPERTY_OTHER_HEADER_DIGEST_METHOD \
					"OtherHeaderDigestMethod"
#endif

#ifndef PROPERTY_DATA_DIGEST_METHOD
#define PROPERTY_DATA_DIGEST_METHOD \
					"DataDigestMethod"
#endif

#ifndef PROPERTY_OTHER_DATA_DIGEST_METHOD
#define PROPERTY_OTHER_DATA_DIGEST_METHOD \
					"OtherDataDigestMethod"
#endif

#ifndef PROPERTY_RECEIVING_MARKERS
#define PROPERTY_RECEIVING_MARKERS \
					"ReceivingMarkers"
#endif

#ifndef PROPERTY_SENDING_MARKERS
#define PROPERTY_SENDING_MARKERS \
					"SendingMarkers"
#endif

#ifndef PROPERTY_ACTIVEI_S_CS_I_VERSION
#define PROPERTY_ACTIVEI_S_CS_I_VERSION \
					"ActiveiSCSIVersion"
#endif

#ifndef PROPERTY_AUTHENTICATION_METHOD_USED
#define PROPERTY_AUTHENTICATION_METHOD_USED \
					"AuthenticationMethodUsed"
#endif

#ifndef PROPERTY_MUTUAL_AUTHENTICATION
#define PROPERTY_MUTUAL_AUTHENTICATION \
					"MutualAuthentication"
#endif



class UNIX_iSCSIConnection :
	public CIM_NetworkPipe
{
public:

	UNIX_iSCSIConnection();
	~UNIX_iSCSIConnection();

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
	virtual Boolean getConnectionID(CIMProperty&) const;
	virtual Uint32 getConnectionID() const;
	virtual void setConnectionID(Uint32&);
	virtual Boolean getMaxReceiveDataSegmentLength(CIMProperty&) const;
	virtual Uint32 getMaxReceiveDataSegmentLength() const;
	virtual void setMaxReceiveDataSegmentLength(Uint32&);
	virtual Boolean getMaxTransmitDataSegmentLength(CIMProperty&) const;
	virtual Uint32 getMaxTransmitDataSegmentLength() const;
	virtual void setMaxTransmitDataSegmentLength(Uint32&);
	virtual Boolean getHeaderDigestMethod(CIMProperty&) const;
	virtual Uint16 getHeaderDigestMethod() const;
	virtual void setHeaderDigestMethod(Uint16&);
	virtual Boolean getOtherHeaderDigestMethod(CIMProperty&) const;
	virtual String getOtherHeaderDigestMethod() const;
	virtual void setOtherHeaderDigestMethod(String&);
	virtual Boolean getDataDigestMethod(CIMProperty&) const;
	virtual Uint16 getDataDigestMethod() const;
	virtual void setDataDigestMethod(Uint16&);
	virtual Boolean getOtherDataDigestMethod(CIMProperty&) const;
	virtual String getOtherDataDigestMethod() const;
	virtual void setOtherDataDigestMethod(String&);
	virtual Boolean getReceivingMarkers(CIMProperty&) const;
	virtual Boolean getReceivingMarkers() const;
	virtual void setReceivingMarkers(Boolean&);
	virtual Boolean getSendingMarkers(CIMProperty&) const;
	virtual Boolean getSendingMarkers() const;
	virtual void setSendingMarkers(Boolean&);
	virtual Boolean getActiveiSCSIVersion(CIMProperty&) const;
	virtual Boolean getActiveiSCSIVersion() const;
	virtual void setActiveiSCSIVersion(Boolean&);
	virtual Boolean getAuthenticationMethodUsed(CIMProperty&) const;
	virtual Uint16 getAuthenticationMethodUsed() const;
	virtual void setAuthenticationMethodUsed(Uint16&);
	virtual Boolean getMutualAuthentication(CIMProperty&) const;
	virtual Boolean getMutualAuthentication() const;
	virtual void setMutualAuthentication(Boolean&);

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
	Uint32 _connectionID;
	Uint32 _maxReceiveDataSegmentLength;
	Uint32 _maxTransmitDataSegmentLength;
	Uint16 _headerDigestMethod;
	String _otherHeaderDigestMethod;
	Uint16 _dataDigestMethod;
	String _otherDataDigestMethod;
	Boolean _receivingMarkers;
	Boolean _sendingMarkers;
	Boolean _activeiSCSIVersion;
	Uint16 _authenticationMethodUsed;
	Boolean _mutualAuthentication;

#	include "UNIX_iSCSIConnectionPrivate.h"


};

#endif /* UNIX_ISCSICONNECTION */
