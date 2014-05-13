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


/* **** Deprecated *** */
/*
CIM_ProtocolService
*/


/* **** Version *** */
/*
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
ObjectManagerCommunicationMechanism is deprecated. This class combined the concept of capabilities and accesspoint, but did not model the types of access properly. The new model uses CIM_ProtocolService, CIM_ServiceAccessPoint and Capabilities to describe the information.
The class, ObjectManagerCommunicationMechanism, describes access to an ObjectManager. It describes a protocol and data encoding that can be used for communication. When all instances of this class are enumerated for an ObjectManager (using the CommMechanismForManager association), all possible protocol and encoding schemes will be known. Also, specific capabilities (for example, basic read or query) that are supported in the protocol/encoding are described - using the ProfilesSupported property.
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

			UNIX_ObjectManagerCommunicationMechanism:
				CommunicationMechanism UInt16
				OtherCommunicationMechanismDescription String
				FunctionalProfilesSupported UInt16
				FunctionalProfileDescriptions String
				MultipleOperationsSupported Boolean
				AuthenticationMechanismsSupported UInt16
				AuthenticationMechanismDescriptions String
				Version String
				AdvertiseTypes UInt16
				AdvertiseTypeDescriptions String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_ServiceAccessPoint:

			UNIX_ObjectManagerCommunicationMechanism:


*/

#ifndef __UNIX_OBJECTMANAGERCOMMUNICATIONMECHANISM_H
#define __UNIX_OBJECTMANAGERCOMMUNICATIONMECHANISM_H


#include "CIM_ServiceAccessPoint.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_ObjectManagerCommunicationMechanismDeps.h"


#ifndef PROPERTY_COMMUNICATION_MECHANISM
#define PROPERTY_COMMUNICATION_MECHANISM \
					"CommunicationMechanism"
#endif

#ifndef PROPERTY_OTHER_COMMUNICATION_MECHANISM_DESCRIPTION
#define PROPERTY_OTHER_COMMUNICATION_MECHANISM_DESCRIPTION \
					"OtherCommunicationMechanismDescription"
#endif

#ifndef PROPERTY_FUNCTIONAL_PROFILES_SUPPORTED
#define PROPERTY_FUNCTIONAL_PROFILES_SUPPORTED \
					"FunctionalProfilesSupported"
#endif

#ifndef PROPERTY_FUNCTIONAL_PROFILE_DESCRIPTIONS
#define PROPERTY_FUNCTIONAL_PROFILE_DESCRIPTIONS \
					"FunctionalProfileDescriptions"
#endif

#ifndef PROPERTY_MULTIPLE_OPERATIONS_SUPPORTED
#define PROPERTY_MULTIPLE_OPERATIONS_SUPPORTED \
					"MultipleOperationsSupported"
#endif

#ifndef PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED
#define PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED \
					"AuthenticationMechanismsSupported"
#endif

#ifndef PROPERTY_AUTHENTICATION_MECHANISM_DESCRIPTIONS
#define PROPERTY_AUTHENTICATION_MECHANISM_DESCRIPTIONS \
					"AuthenticationMechanismDescriptions"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_ADVERTISE_TYPES
#define PROPERTY_ADVERTISE_TYPES \
					"AdvertiseTypes"
#endif

#ifndef PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS
#define PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS \
					"AdvertiseTypeDescriptions"
#endif



class UNIX_ObjectManagerCommunicationMechanism :
	public CIM_ServiceAccessPoint
{
public:

	UNIX_ObjectManagerCommunicationMechanism();
	~UNIX_ObjectManagerCommunicationMechanism();

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
	virtual Boolean getCommunicationMechanism(CIMProperty&) const;
	virtual Uint16 getCommunicationMechanism() const;
	virtual void setCommunicationMechanism(Uint16&);
	virtual Boolean getOtherCommunicationMechanismDescription(CIMProperty&) const;
	virtual String getOtherCommunicationMechanismDescription() const;
	virtual void setOtherCommunicationMechanismDescription(String&);
	virtual Boolean getFunctionalProfilesSupported(CIMProperty&) const;
	virtual Array<Uint16> getFunctionalProfilesSupported() const;
	virtual void setFunctionalProfilesSupported(Array<Uint16>&);
	virtual Boolean getFunctionalProfileDescriptions(CIMProperty&) const;
	virtual Array<String> getFunctionalProfileDescriptions() const;
	virtual void setFunctionalProfileDescriptions(Array<String>&);
	virtual Boolean getMultipleOperationsSupported(CIMProperty&) const;
	virtual Boolean getMultipleOperationsSupported() const;
	virtual void setMultipleOperationsSupported(Boolean&);
	virtual Boolean getAuthenticationMechanismsSupported(CIMProperty&) const;
	virtual Array<Uint16> getAuthenticationMechanismsSupported() const;
	virtual void setAuthenticationMechanismsSupported(Array<Uint16>&);
	virtual Boolean getAuthenticationMechanismDescriptions(CIMProperty&) const;
	virtual Array<String> getAuthenticationMechanismDescriptions() const;
	virtual void setAuthenticationMechanismDescriptions(Array<String>&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getAdvertiseTypes(CIMProperty&) const;
	virtual Array<Uint16> getAdvertiseTypes() const;
	virtual void setAdvertiseTypes(Array<Uint16>&);
	virtual Boolean getAdvertiseTypeDescriptions(CIMProperty&) const;
	virtual Array<String> getAdvertiseTypeDescriptions() const;
	virtual void setAdvertiseTypeDescriptions(Array<String>&);

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
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	Uint16 _communicationMechanism;
	String _otherCommunicationMechanismDescription;
	Array<Uint16> _functionalProfilesSupported;
	Array<String> _functionalProfileDescriptions;
	Boolean _multipleOperationsSupported;
	Array<Uint16> _authenticationMechanismsSupported;
	Array<String> _authenticationMechanismDescriptions;
	String _version;
	Array<Uint16> _advertiseTypes;
	Array<String> _advertiseTypeDescriptions;

#	include "UNIX_ObjectManagerCommunicationMechanismPrivate.h"


};

#endif /* UNIX_OBJECTMANAGERCOMMUNICATIONMECHANISM */
