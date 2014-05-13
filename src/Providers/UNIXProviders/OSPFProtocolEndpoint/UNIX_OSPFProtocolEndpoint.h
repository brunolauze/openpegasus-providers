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
CIM::Network::ProtocolEndpoints
*/


/* **** Description *** */
/*
This class represents the OSPF configuration of an interface running OSPF. The instance of this class should be connected to an IPProtocolEndpoint instance via a BindsTo association. The IPProtocolEndpoint instance is the Antecedent and the OSPFProtocolEndpoint instance is the Dependent in the BindsTo association.
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

			CIM_OSPFProtocolEndpointBase:
				TransitDelay UInt16
				RetransmitInterval UInt16
				AuthType UInt16
				OtherAuthType String
				AuthKey String

			UNIX_OSPFProtocolEndpoint:
				Priority UInt8
				PollInterval UInt16
				Cost UInt16
				IfDemand Boolean


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

			CIM_OSPFProtocolEndpointBase:

			UNIX_OSPFProtocolEndpoint:


*/

#ifndef __UNIX_OSPFPROTOCOLENDPOINT_H
#define __UNIX_OSPFPROTOCOLENDPOINT_H


#include "CIM_OSPFProtocolEndpointBase.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_OSPFProtocolEndpointDeps.h"


#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif

#ifndef PROPERTY_POLL_INTERVAL
#define PROPERTY_POLL_INTERVAL \
					"PollInterval"
#endif

#ifndef PROPERTY_COST
#define PROPERTY_COST \
					"Cost"
#endif

#ifndef PROPERTY_IF_DEMAND
#define PROPERTY_IF_DEMAND \
					"IfDemand"
#endif



class UNIX_OSPFProtocolEndpoint :
	public CIM_OSPFProtocolEndpointBase
{
public:

	UNIX_OSPFProtocolEndpoint();
	~UNIX_OSPFProtocolEndpoint();

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
	virtual Boolean getTransitDelay(CIMProperty&) const;
	virtual Uint16 getTransitDelay() const;
	virtual void setTransitDelay(Uint16&);
	virtual Boolean getRetransmitInterval(CIMProperty&) const;
	virtual Uint16 getRetransmitInterval() const;
	virtual void setRetransmitInterval(Uint16&);
	virtual Boolean getAuthType(CIMProperty&) const;
	virtual Uint16 getAuthType() const;
	virtual void setAuthType(Uint16&);
	virtual Boolean getOtherAuthType(CIMProperty&) const;
	virtual String getOtherAuthType() const;
	virtual void setOtherAuthType(String&);
	virtual Boolean getAuthKey(CIMProperty&) const;
	virtual String getAuthKey() const;
	virtual void setAuthKey(String&);
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint8 getPriority() const;
	virtual void setPriority(Uint8&);
	virtual Boolean getPollInterval(CIMProperty&) const;
	virtual Uint16 getPollInterval() const;
	virtual void setPollInterval(Uint16&);
	virtual Boolean getCost(CIMProperty&) const;
	virtual Uint16 getCost() const;
	virtual void setCost(Uint16&);
	virtual Boolean getIfDemand(CIMProperty&) const;
	virtual Boolean getIfDemand() const;
	virtual void setIfDemand(Boolean&);

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
	Uint16 _transitDelay;
	Uint16 _retransmitInterval;
	Uint16 _authType;
	String _otherAuthType;
	String _authKey;
	Uint8 _priority;
	Uint16 _pollInterval;
	Uint16 _cost;
	Boolean _ifDemand;

#	include "UNIX_OSPFProtocolEndpointPrivate.h"


};

#endif /* UNIX_OSPFPROTOCOLENDPOINT */
