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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::MPLS
*/


/* **** Description *** */
/*
This class is used to represent an MPLS Label Switch Path (LSP). This is usually a path from an ingress to an egress label edge router, through a sequence of label switch routers. Sometimes an LSP is a series of hop-by-hop LSPs that go from the ingress to egress LSRs. For example, using unordered downstream unsolicited mode in LDP, the result is a series of 'mini' LSPs along the path, each with incoming and outgoing labels, and a FEC to accept traffic onto the 'mini' LSP at each hop. 

An instance describes either an existing LSP, or the user's configurations of one to be established in the network. The boolean property, Established, indicates the state of the instance. 

Note that MPLSLSP subclasses from EnabledLogicalElement. This allows (via inherited properties) the explicit enabling and disabling of the path, as well as the ability to request that the path be 'tested' or shut down.
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

			UNIX_MPLSLSP:
				Established Boolean
				NestingLevel UInt16
				LocalLSPId UInt16
				IngressIPAddresses String
				EgressIPAddresses String
				IngressMayReroute Boolean
				IsPersistent Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			UNIX_MPLSLSP:


*/

#ifndef __UNIX_MPLSLSP_H
#define __UNIX_MPLSLSP_H


#include "CIM_EnabledLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_MPLSLSPDeps.h"


#ifndef PROPERTY_ESTABLISHED
#define PROPERTY_ESTABLISHED \
					"Established"
#endif

#ifndef PROPERTY_NESTING_LEVEL
#define PROPERTY_NESTING_LEVEL \
					"NestingLevel"
#endif

#ifndef PROPERTY_LOCAL_L_SPID
#define PROPERTY_LOCAL_L_SPID \
					"LocalLSPId"
#endif

#ifndef PROPERTY_INGRESS_IP_ADDRESSES
#define PROPERTY_INGRESS_IP_ADDRESSES \
					"IngressIPAddresses"
#endif

#ifndef PROPERTY_EGRESS_IP_ADDRESSES
#define PROPERTY_EGRESS_IP_ADDRESSES \
					"EgressIPAddresses"
#endif

#ifndef PROPERTY_INGRESS_MAY_REROUTE
#define PROPERTY_INGRESS_MAY_REROUTE \
					"IngressMayReroute"
#endif

#ifndef PROPERTY_IS_PERSISTENT
#define PROPERTY_IS_PERSISTENT \
					"IsPersistent"
#endif



class UNIX_MPLSLSP :
	public CIM_EnabledLogicalElement
{
public:

	UNIX_MPLSLSP();
	~UNIX_MPLSLSP();

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
	virtual Boolean getEstablished(CIMProperty&) const;
	virtual Boolean getEstablished() const;
	virtual void setEstablished(Boolean&);
	virtual Boolean getNestingLevel(CIMProperty&) const;
	virtual Uint16 getNestingLevel() const;
	virtual void setNestingLevel(Uint16&);
	virtual Boolean getLocalLSPId(CIMProperty&) const;
	virtual Uint16 getLocalLSPId() const;
	virtual void setLocalLSPId(Uint16&);
	virtual Boolean getIngressIPAddresses(CIMProperty&) const;
	virtual Array<String> getIngressIPAddresses() const;
	virtual void setIngressIPAddresses(Array<String>&);
	virtual Boolean getEgressIPAddresses(CIMProperty&) const;
	virtual Array<String> getEgressIPAddresses() const;
	virtual void setEgressIPAddresses(Array<String>&);
	virtual Boolean getIngressMayReroute(CIMProperty&) const;
	virtual Boolean getIngressMayReroute() const;
	virtual void setIngressMayReroute(Boolean&);
	virtual Boolean getIsPersistent(CIMProperty&) const;
	virtual Boolean getIsPersistent() const;
	virtual void setIsPersistent(Boolean&);

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
	Boolean _established;
	Uint16 _nestingLevel;
	Uint16 _localLSPId;
	Array<String> _ingressIPAddresses;
	Array<String> _egressIPAddresses;
	Boolean _ingressMayReroute;
	Boolean _isPersistent;

#	include "UNIX_MPLSLSPPrivate.h"


};

#endif /* UNIX_MPLSLSP */
