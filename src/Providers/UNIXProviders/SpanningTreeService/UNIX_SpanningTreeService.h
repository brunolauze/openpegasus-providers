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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::SwitchingBridging
*/


/* **** Description *** */
/*
This service class represents the capability of a switch to participate in the distributed construction of a spanning tree.
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

			CIM_NetworkService:
				Keywords String
				ServiceURL String
				StartupConditions String
				StartupParameters String

			CIM_ForwardingService:
				ProtocolType UInt16
				OtherProtocolType String

			UNIX_SpanningTreeService:
				ProtocolSpec UInt16
				Priority UInt16
				SpanningTreeBridgeAddress String
				DesignatedRoot String
				RootCost UInt16
				RootPort UInt16
				MaxAge UInt32
				HelloTime UInt32
				HoldTime UInt32
				ForwardDelay UInt32
				BridgeMaxAge UInt32
				BridgeHelloTime UInt32
				BridgeForwardDelay UInt32


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

			CIM_NetworkService:

			CIM_ForwardingService:

			UNIX_SpanningTreeService:


*/

#ifndef __UNIX_SPANNINGTREESERVICE_H
#define __UNIX_SPANNINGTREESERVICE_H


#include "CIM_ForwardingService.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_SpanningTreeServiceDeps.h"


#ifndef PROPERTY_PROTOCOL_SPEC
#define PROPERTY_PROTOCOL_SPEC \
					"ProtocolSpec"
#endif

#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif

#ifndef PROPERTY_SPANNING_TREE_BRIDGE_ADDRESS
#define PROPERTY_SPANNING_TREE_BRIDGE_ADDRESS \
					"SpanningTreeBridgeAddress"
#endif

#ifndef PROPERTY_DESIGNATED_ROOT
#define PROPERTY_DESIGNATED_ROOT \
					"DesignatedRoot"
#endif

#ifndef PROPERTY_ROOT_COST
#define PROPERTY_ROOT_COST \
					"RootCost"
#endif

#ifndef PROPERTY_ROOT_PORT
#define PROPERTY_ROOT_PORT \
					"RootPort"
#endif

#ifndef PROPERTY_MAX_AGE
#define PROPERTY_MAX_AGE \
					"MaxAge"
#endif

#ifndef PROPERTY_HELLO_TIME
#define PROPERTY_HELLO_TIME \
					"HelloTime"
#endif

#ifndef PROPERTY_HOLD_TIME
#define PROPERTY_HOLD_TIME \
					"HoldTime"
#endif

#ifndef PROPERTY_FORWARD_DELAY
#define PROPERTY_FORWARD_DELAY \
					"ForwardDelay"
#endif

#ifndef PROPERTY_BRIDGE_MAX_AGE
#define PROPERTY_BRIDGE_MAX_AGE \
					"BridgeMaxAge"
#endif

#ifndef PROPERTY_BRIDGE_HELLO_TIME
#define PROPERTY_BRIDGE_HELLO_TIME \
					"BridgeHelloTime"
#endif

#ifndef PROPERTY_BRIDGE_FORWARD_DELAY
#define PROPERTY_BRIDGE_FORWARD_DELAY \
					"BridgeForwardDelay"
#endif



class UNIX_SpanningTreeService :
	public CIM_ForwardingService
{
public:

	UNIX_SpanningTreeService();
	~UNIX_SpanningTreeService();

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
	virtual Boolean getKeywords(CIMProperty&) const;
	virtual Array<String> getKeywords() const;
	virtual void setKeywords(Array<String>&);
	virtual Boolean getServiceURL(CIMProperty&) const;
	virtual String getServiceURL() const;
	virtual void setServiceURL(String&);
	virtual Boolean getStartupConditions(CIMProperty&) const;
	virtual Array<String> getStartupConditions() const;
	virtual void setStartupConditions(Array<String>&);
	virtual Boolean getStartupParameters(CIMProperty&) const;
	virtual Array<String> getStartupParameters() const;
	virtual void setStartupParameters(Array<String>&);
	virtual Boolean getProtocolType(CIMProperty&) const;
	virtual Uint16 getProtocolType() const;
	virtual void setProtocolType(Uint16&);
	virtual Boolean getOtherProtocolType(CIMProperty&) const;
	virtual String getOtherProtocolType() const;
	virtual void setOtherProtocolType(String&);
	virtual Boolean getProtocolSpec(CIMProperty&) const;
	virtual Uint16 getProtocolSpec() const;
	virtual void setProtocolSpec(Uint16&);
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint16 getPriority() const;
	virtual void setPriority(Uint16&);
	virtual Boolean getSpanningTreeBridgeAddress(CIMProperty&) const;
	virtual String getSpanningTreeBridgeAddress() const;
	virtual void setSpanningTreeBridgeAddress(String&);
	virtual Boolean getDesignatedRoot(CIMProperty&) const;
	virtual String getDesignatedRoot() const;
	virtual void setDesignatedRoot(String&);
	virtual Boolean getRootCost(CIMProperty&) const;
	virtual Uint16 getRootCost() const;
	virtual void setRootCost(Uint16&);
	virtual Boolean getRootPort(CIMProperty&) const;
	virtual Uint16 getRootPort() const;
	virtual void setRootPort(Uint16&);
	virtual Boolean getMaxAge(CIMProperty&) const;
	virtual Uint32 getMaxAge() const;
	virtual void setMaxAge(Uint32&);
	virtual Boolean getHelloTime(CIMProperty&) const;
	virtual Uint32 getHelloTime() const;
	virtual void setHelloTime(Uint32&);
	virtual Boolean getHoldTime(CIMProperty&) const;
	virtual Uint32 getHoldTime() const;
	virtual void setHoldTime(Uint32&);
	virtual Boolean getForwardDelay(CIMProperty&) const;
	virtual Uint32 getForwardDelay() const;
	virtual void setForwardDelay(Uint32&);
	virtual Boolean getBridgeMaxAge(CIMProperty&) const;
	virtual Uint32 getBridgeMaxAge() const;
	virtual void setBridgeMaxAge(Uint32&);
	virtual Boolean getBridgeHelloTime(CIMProperty&) const;
	virtual Uint32 getBridgeHelloTime() const;
	virtual void setBridgeHelloTime(Uint32&);
	virtual Boolean getBridgeForwardDelay(CIMProperty&) const;
	virtual Uint32 getBridgeForwardDelay() const;
	virtual void setBridgeForwardDelay(Uint32&);

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
	Array<String> _keywords;
	String _serviceURL;
	Array<String> _startupConditions;
	Array<String> _startupParameters;
	Uint16 _protocolType;
	String _otherProtocolType;
	Uint16 _protocolSpec;
	Uint16 _priority;
	String _spanningTreeBridgeAddress;
	String _designatedRoot;
	Uint16 _rootCost;
	Uint16 _rootPort;
	Uint32 _maxAge;
	Uint32 _helloTime;
	Uint32 _holdTime;
	Uint32 _forwardDelay;
	Uint32 _bridgeMaxAge;
	Uint32 _bridgeHelloTime;
	Uint32 _bridgeForwardDelay;

#	include "UNIX_SpanningTreeServicePrivate.h"


};

#endif /* UNIX_SPANNINGTREESERVICE */