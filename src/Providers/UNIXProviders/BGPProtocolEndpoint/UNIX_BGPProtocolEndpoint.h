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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::ProtocolEndpoints
*/


/* **** Description *** */
/*
A ProtocolEndpoint that is dedicated to running BGP.
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

			CIM_ServiceAccessPoint:
				SystemCreationClassName String
				SystemName String
				CreationClassName String

			CIM_ProtocolEndpoint:
				NameFormat String
				ProtocolType UInt16
				ProtocolIFType UInt16
				OtherTypeDescription String
				BroadcastResetSupported Boolean

			UNIX_BGPProtocolEndpoint:
				IsEBGP Boolean
				IsEBGPMultihop Boolean
				LocalIdentifier String
				PeerIdentifier String
				State UInt16
				AdminStatus UInt16
				NegotiatedVersion String
				LocalAddress String
				LocalPort UInt16
				RemoteAddress String
				RemotePort UInt16
				RemoteAS UInt16
				ConnectRetryInterval UInt32
				HoldTimeConfigured UInt16
				KeepAliveConfigured UInt16
				MinASOriginationInterval UInt16
				MinRouteAdvertisementInterval UInt16
				HoldTime UInt16
				KeepAlive UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_ServiceAccessPoint:

			CIM_ProtocolEndpoint:
				BroadcastReset UInt32

			UNIX_BGPProtocolEndpoint:


*/

#ifndef __UNIX_BGPPROTOCOLENDPOINT_H
#define __UNIX_BGPPROTOCOLENDPOINT_H


#include "CIM_ProtocolEndpoint.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_BGPProtocolEndpointDeps.h"


#ifndef PROPERTY_IS_E_BGP
#define PROPERTY_IS_E_BGP \
					"IsEBGP"
#endif

#ifndef PROPERTY_IS_E_BGP_MULTIHOP
#define PROPERTY_IS_E_BGP_MULTIHOP \
					"IsEBGPMultihop"
#endif

#ifndef PROPERTY_LOCAL_IDENTIFIER
#define PROPERTY_LOCAL_IDENTIFIER \
					"LocalIdentifier"
#endif

#ifndef PROPERTY_PEER_IDENTIFIER
#define PROPERTY_PEER_IDENTIFIER \
					"PeerIdentifier"
#endif

#ifndef PROPERTY_STATE
#define PROPERTY_STATE \
					"State"
#endif

#ifndef PROPERTY_ADMIN_STATUS
#define PROPERTY_ADMIN_STATUS \
					"AdminStatus"
#endif

#ifndef PROPERTY_NEGOTIATED_VERSION
#define PROPERTY_NEGOTIATED_VERSION \
					"NegotiatedVersion"
#endif

#ifndef PROPERTY_LOCAL_ADDRESS
#define PROPERTY_LOCAL_ADDRESS \
					"LocalAddress"
#endif

#ifndef PROPERTY_LOCAL_PORT
#define PROPERTY_LOCAL_PORT \
					"LocalPort"
#endif

#ifndef PROPERTY_REMOTE_ADDRESS
#define PROPERTY_REMOTE_ADDRESS \
					"RemoteAddress"
#endif

#ifndef PROPERTY_REMOTE_PORT
#define PROPERTY_REMOTE_PORT \
					"RemotePort"
#endif

#ifndef PROPERTY_REMOTE_A_S
#define PROPERTY_REMOTE_A_S \
					"RemoteAS"
#endif

#ifndef PROPERTY_CONNECT_RETRY_INTERVAL
#define PROPERTY_CONNECT_RETRY_INTERVAL \
					"ConnectRetryInterval"
#endif

#ifndef PROPERTY_HOLD_TIME_CONFIGURED
#define PROPERTY_HOLD_TIME_CONFIGURED \
					"HoldTimeConfigured"
#endif

#ifndef PROPERTY_KEEP_ALIVE_CONFIGURED
#define PROPERTY_KEEP_ALIVE_CONFIGURED \
					"KeepAliveConfigured"
#endif

#ifndef PROPERTY_MIN_A_S_ORIGINATION_INTERVAL
#define PROPERTY_MIN_A_S_ORIGINATION_INTERVAL \
					"MinASOriginationInterval"
#endif

#ifndef PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL
#define PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL \
					"MinRouteAdvertisementInterval"
#endif

#ifndef PROPERTY_HOLD_TIME
#define PROPERTY_HOLD_TIME \
					"HoldTime"
#endif

#ifndef PROPERTY_KEEP_ALIVE
#define PROPERTY_KEEP_ALIVE \
					"KeepAlive"
#endif



class UNIX_BGPProtocolEndpoint :
	public CIM_ProtocolEndpoint
{
public:

	UNIX_BGPProtocolEndpoint();
	~UNIX_BGPProtocolEndpoint();

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
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual String getNameFormat() const;
	virtual void setNameFormat(String&);
	virtual Boolean getProtocolType(CIMProperty&) const;
	virtual Uint16 getProtocolType() const;
	virtual void setProtocolType(Uint16&);
	virtual Boolean getProtocolIFType(CIMProperty&) const;
	virtual Uint16 getProtocolIFType() const;
	virtual void setProtocolIFType(Uint16&);
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getBroadcastResetSupported(CIMProperty&) const;
	virtual Boolean getBroadcastResetSupported() const;
	virtual void setBroadcastResetSupported(Boolean&);
	virtual Boolean getIsEBGP(CIMProperty&) const;
	virtual Boolean getIsEBGP() const;
	virtual void setIsEBGP(Boolean&);
	virtual Boolean getIsEBGPMultihop(CIMProperty&) const;
	virtual Boolean getIsEBGPMultihop() const;
	virtual void setIsEBGPMultihop(Boolean&);
	virtual Boolean getLocalIdentifier(CIMProperty&) const;
	virtual String getLocalIdentifier() const;
	virtual void setLocalIdentifier(String&);
	virtual Boolean getPeerIdentifier(CIMProperty&) const;
	virtual String getPeerIdentifier() const;
	virtual void setPeerIdentifier(String&);
	virtual Boolean getState(CIMProperty&) const;
	virtual Uint16 getState() const;
	virtual void setState(Uint16&);
	virtual Boolean getAdminStatus(CIMProperty&) const;
	virtual Uint16 getAdminStatus() const;
	virtual void setAdminStatus(Uint16&);
	virtual Boolean getNegotiatedVersion(CIMProperty&) const;
	virtual String getNegotiatedVersion() const;
	virtual void setNegotiatedVersion(String&);
	virtual Boolean getLocalAddress(CIMProperty&) const;
	virtual String getLocalAddress() const;
	virtual void setLocalAddress(String&);
	virtual Boolean getLocalPort(CIMProperty&) const;
	virtual Uint16 getLocalPort() const;
	virtual void setLocalPort(Uint16&);
	virtual Boolean getRemoteAddress(CIMProperty&) const;
	virtual String getRemoteAddress() const;
	virtual void setRemoteAddress(String&);
	virtual Boolean getRemotePort(CIMProperty&) const;
	virtual Uint16 getRemotePort() const;
	virtual void setRemotePort(Uint16&);
	virtual Boolean getRemoteAS(CIMProperty&) const;
	virtual Uint16 getRemoteAS() const;
	virtual void setRemoteAS(Uint16&);
	virtual Boolean getConnectRetryInterval(CIMProperty&) const;
	virtual Uint32 getConnectRetryInterval() const;
	virtual void setConnectRetryInterval(Uint32&);
	virtual Boolean getHoldTimeConfigured(CIMProperty&) const;
	virtual Uint16 getHoldTimeConfigured() const;
	virtual void setHoldTimeConfigured(Uint16&);
	virtual Boolean getKeepAliveConfigured(CIMProperty&) const;
	virtual Uint16 getKeepAliveConfigured() const;
	virtual void setKeepAliveConfigured(Uint16&);
	virtual Boolean getMinASOriginationInterval(CIMProperty&) const;
	virtual Uint16 getMinASOriginationInterval() const;
	virtual void setMinASOriginationInterval(Uint16&);
	virtual Boolean getMinRouteAdvertisementInterval(CIMProperty&) const;
	virtual Uint16 getMinRouteAdvertisementInterval() const;
	virtual void setMinRouteAdvertisementInterval(Uint16&);
	virtual Boolean getHoldTime(CIMProperty&) const;
	virtual Uint16 getHoldTime() const;
	virtual void setHoldTime(Uint16&);
	virtual Boolean getKeepAlive(CIMProperty&) const;
	virtual Uint16 getKeepAlive() const;
	virtual void setKeepAlive(Uint16&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeBroadcastReset();



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
	String _nameFormat;
	Uint16 _protocolType;
	Uint16 _protocolIFType;
	String _otherTypeDescription;
	Boolean _broadcastResetSupported;
	Boolean _isEBGP;
	Boolean _isEBGPMultihop;
	String _localIdentifier;
	String _peerIdentifier;
	Uint16 _state;
	Uint16 _adminStatus;
	String _negotiatedVersion;
	String _localAddress;
	Uint16 _localPort;
	String _remoteAddress;
	Uint16 _remotePort;
	Uint16 _remoteAS;
	Uint32 _connectRetryInterval;
	Uint16 _holdTimeConfigured;
	Uint16 _keepAliveConfigured;
	Uint16 _minASOriginationInterval;
	Uint16 _minRouteAdvertisementInterval;
	Uint16 _holdTime;
	Uint16 _keepAlive;

#	include "UNIX_BGPProtocolEndpointPrivate.h"


};

#endif /* UNIX_BGPPROTOCOLENDPOINT */
