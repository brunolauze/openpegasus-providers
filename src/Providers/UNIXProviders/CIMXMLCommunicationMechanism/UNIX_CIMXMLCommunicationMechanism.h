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
CIM_CIMXMLCapabilities
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
This class specializes ObjectManagerCommunicationMechanism, adding properties specific to the CIM-XML protocol (XML encoding and CIM Operations).
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

			UNIX_CIMXMLCommunicationMechanism:
				CIMXMLProtocolVersion UInt16
				CIMValidated Boolean
				PulledEnumerationClosureOnExceedingServerLimitsSupported Boolean
				PulledEnumerationContinuationOnErrorSupported Boolean
				PulledEnumerationNoOperationTimeoutSupported Boolean
				PulledEnumerationMinimumOperationTimeout UInt32
				PulledEnumerationMaximumOperationTimeout UInt32


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

			UNIX_CIMXMLCommunicationMechanism:


*/

#ifndef __UNIX_CIMXMLCOMMUNICATIONMECHANISM_H
#define __UNIX_CIMXMLCOMMUNICATIONMECHANISM_H


#include <ObjectManagerCommunicationMechanism/UNIX_ObjectManagerCommunicationMechanism.h>
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_CIMXMLCommunicationMechanismDeps.h"


#ifndef PROPERTY_C_I_M_X_M_L_PROTOCOL_VERSION
#define PROPERTY_C_I_M_X_M_L_PROTOCOL_VERSION \
					"CIMXMLProtocolVersion"
#endif

#ifndef PROPERTY_C_I_M_VALIDATED
#define PROPERTY_C_I_M_VALIDATED \
					"CIMValidated"
#endif

#ifndef PROPERTY_PULLED_ENUMERATION_CLOSURE_ON_EXCEEDING_SERVER_LIMITS_SUPPORTED
#define PROPERTY_PULLED_ENUMERATION_CLOSURE_ON_EXCEEDING_SERVER_LIMITS_SUPPORTED \
					"PulledEnumerationClosureOnExceedingServerLimitsSupported"
#endif

#ifndef PROPERTY_PULLED_ENUMERATION_CONTINUATION_ON_ERROR_SUPPORTED
#define PROPERTY_PULLED_ENUMERATION_CONTINUATION_ON_ERROR_SUPPORTED \
					"PulledEnumerationContinuationOnErrorSupported"
#endif

#ifndef PROPERTY_PULLED_ENUMERATION_NO_OPERATION_TIMEOUT_SUPPORTED
#define PROPERTY_PULLED_ENUMERATION_NO_OPERATION_TIMEOUT_SUPPORTED \
					"PulledEnumerationNoOperationTimeoutSupported"
#endif

#ifndef PROPERTY_PULLED_ENUMERATION_MINIMUM_OPERATION_TIMEOUT
#define PROPERTY_PULLED_ENUMERATION_MINIMUM_OPERATION_TIMEOUT \
					"PulledEnumerationMinimumOperationTimeout"
#endif

#ifndef PROPERTY_PULLED_ENUMERATION_MAXIMUM_OPERATION_TIMEOUT
#define PROPERTY_PULLED_ENUMERATION_MAXIMUM_OPERATION_TIMEOUT \
					"PulledEnumerationMaximumOperationTimeout"
#endif



class UNIX_CIMXMLCommunicationMechanism :
	public UNIX_ObjectManagerCommunicationMechanism
{
public:

	UNIX_CIMXMLCommunicationMechanism();
	~UNIX_CIMXMLCommunicationMechanism();

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
	virtual Boolean getCIMXMLProtocolVersion(CIMProperty&) const;
	virtual Uint16 getCIMXMLProtocolVersion() const;
	virtual void setCIMXMLProtocolVersion(Uint16&);
	virtual Boolean getCIMValidated(CIMProperty&) const;
	virtual Boolean getCIMValidated() const;
	virtual void setCIMValidated(Boolean&);
	virtual Boolean getPulledEnumerationClosureOnExceedingServerLimitsSupported(CIMProperty&) const;
	virtual Boolean getPulledEnumerationClosureOnExceedingServerLimitsSupported() const;
	virtual void setPulledEnumerationClosureOnExceedingServerLimitsSupported(Boolean&);
	virtual Boolean getPulledEnumerationContinuationOnErrorSupported(CIMProperty&) const;
	virtual Boolean getPulledEnumerationContinuationOnErrorSupported() const;
	virtual void setPulledEnumerationContinuationOnErrorSupported(Boolean&);
	virtual Boolean getPulledEnumerationNoOperationTimeoutSupported(CIMProperty&) const;
	virtual Boolean getPulledEnumerationNoOperationTimeoutSupported() const;
	virtual void setPulledEnumerationNoOperationTimeoutSupported(Boolean&);
	virtual Boolean getPulledEnumerationMinimumOperationTimeout(CIMProperty&) const;
	virtual Uint32 getPulledEnumerationMinimumOperationTimeout() const;
	virtual void setPulledEnumerationMinimumOperationTimeout(Uint32&);
	virtual Boolean getPulledEnumerationMaximumOperationTimeout(CIMProperty&) const;
	virtual Uint32 getPulledEnumerationMaximumOperationTimeout() const;
	virtual void setPulledEnumerationMaximumOperationTimeout(Uint32&);

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
	Uint16 _cIMXMLProtocolVersion;
	Boolean _cIMValidated;
	Boolean _pulledEnumerationClosureOnExceedingServerLimitsSupported;
	Boolean _pulledEnumerationContinuationOnErrorSupported;
	Boolean _pulledEnumerationNoOperationTimeoutSupported;
	Uint32 _pulledEnumerationMinimumOperationTimeout;
	Uint32 _pulledEnumerationMaximumOperationTimeout;

#	include "UNIX_CIMXMLCommunicationMechanismPrivate.h"


};

#endif /* UNIX_CIMXMLCOMMUNICATIONMECHANISM */
