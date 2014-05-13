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
2.27.0
*/


/* **** ClassConstraint *** */
/*
inv: AccessContext=10
inv: InfoFormat=200 or InfoFormat=206
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::LaunchInContext
*/


/* **** Description *** */
/*
Each instance provides a flexible representation of a URI stored in the AccessInfo property that is used to launch a management service. This URI may contain dynamic information in the form of parameters that can used to modify the URI for use in a specific context.
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

			CIM_RemoteServiceAccessPoint:
				AccessInfo String
				InfoFormat UInt16
				OtherInfoFormatDescription String
				AccessContext UInt16
				OtherAccessContext String

			UNIX_LaunchInContextSAP:
				ParameterName String
				ParameterDescription String
				ParameterDerivation String
				ParameterConstraints String
				ParameterType UInt16
				SupportedFeatureName String
				SupportedFeatureDescription String
				ManagedClasses String
				ManagementIsRestricted Boolean
				LaunchMessage String
				LaunchMessageProtocolOperation UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_ServiceAccessPoint:

			CIM_RemoteServiceAccessPoint:

			UNIX_LaunchInContextSAP:
				GetDerivedParametersForElement UInt32


*/

#ifndef __UNIX_LAUNCHINCONTEXTSAP_H
#define __UNIX_LAUNCHINCONTEXTSAP_H


#include "CIM_RemoteServiceAccessPoint.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_LaunchInContextSAPDeps.h"


#ifndef PROPERTY_PARAMETER_NAME
#define PROPERTY_PARAMETER_NAME \
					"ParameterName"
#endif

#ifndef PROPERTY_PARAMETER_DESCRIPTION
#define PROPERTY_PARAMETER_DESCRIPTION \
					"ParameterDescription"
#endif

#ifndef PROPERTY_PARAMETER_DERIVATION
#define PROPERTY_PARAMETER_DERIVATION \
					"ParameterDerivation"
#endif

#ifndef PROPERTY_PARAMETER_CONSTRAINTS
#define PROPERTY_PARAMETER_CONSTRAINTS \
					"ParameterConstraints"
#endif

#ifndef PROPERTY_PARAMETER_TYPE
#define PROPERTY_PARAMETER_TYPE \
					"ParameterType"
#endif

#ifndef PROPERTY_SUPPORTED_FEATURE_NAME
#define PROPERTY_SUPPORTED_FEATURE_NAME \
					"SupportedFeatureName"
#endif

#ifndef PROPERTY_SUPPORTED_FEATURE_DESCRIPTION
#define PROPERTY_SUPPORTED_FEATURE_DESCRIPTION \
					"SupportedFeatureDescription"
#endif

#ifndef PROPERTY_MANAGED_CLASSES
#define PROPERTY_MANAGED_CLASSES \
					"ManagedClasses"
#endif

#ifndef PROPERTY_MANAGEMENT_IS_RESTRICTED
#define PROPERTY_MANAGEMENT_IS_RESTRICTED \
					"ManagementIsRestricted"
#endif

#ifndef PROPERTY_LAUNCH_MESSAGE
#define PROPERTY_LAUNCH_MESSAGE \
					"LaunchMessage"
#endif

#ifndef PROPERTY_LAUNCH_MESSAGE_PROTOCOL_OPERATION
#define PROPERTY_LAUNCH_MESSAGE_PROTOCOL_OPERATION \
					"LaunchMessageProtocolOperation"
#endif



class UNIX_LaunchInContextSAP :
	public CIM_RemoteServiceAccessPoint
{
public:

	UNIX_LaunchInContextSAP();
	~UNIX_LaunchInContextSAP();

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
	virtual Boolean getAccessInfo(CIMProperty&) const;
	virtual String getAccessInfo() const;
	virtual void setAccessInfo(String&);
	virtual Boolean getInfoFormat(CIMProperty&) const;
	virtual Uint16 getInfoFormat() const;
	virtual void setInfoFormat(Uint16&);
	virtual Boolean getOtherInfoFormatDescription(CIMProperty&) const;
	virtual String getOtherInfoFormatDescription() const;
	virtual void setOtherInfoFormatDescription(String&);
	virtual Boolean getAccessContext(CIMProperty&) const;
	virtual Uint16 getAccessContext() const;
	virtual void setAccessContext(Uint16&);
	virtual Boolean getOtherAccessContext(CIMProperty&) const;
	virtual String getOtherAccessContext() const;
	virtual void setOtherAccessContext(String&);
	virtual Boolean getParameterName(CIMProperty&) const;
	virtual Array<String> getParameterName() const;
	virtual void setParameterName(Array<String>&);
	virtual Boolean getParameterDescription(CIMProperty&) const;
	virtual Array<String> getParameterDescription() const;
	virtual void setParameterDescription(Array<String>&);
	virtual Boolean getParameterDerivation(CIMProperty&) const;
	virtual Array<String> getParameterDerivation() const;
	virtual void setParameterDerivation(Array<String>&);
	virtual Boolean getParameterConstraints(CIMProperty&) const;
	virtual Array<String> getParameterConstraints() const;
	virtual void setParameterConstraints(Array<String>&);
	virtual Boolean getParameterType(CIMProperty&) const;
	virtual Array<Uint16> getParameterType() const;
	virtual void setParameterType(Array<Uint16>&);
	virtual Boolean getSupportedFeatureName(CIMProperty&) const;
	virtual Array<String> getSupportedFeatureName() const;
	virtual void setSupportedFeatureName(Array<String>&);
	virtual Boolean getSupportedFeatureDescription(CIMProperty&) const;
	virtual Array<String> getSupportedFeatureDescription() const;
	virtual void setSupportedFeatureDescription(Array<String>&);
	virtual Boolean getManagedClasses(CIMProperty&) const;
	virtual Array<String> getManagedClasses() const;
	virtual void setManagedClasses(Array<String>&);
	virtual Boolean getManagementIsRestricted(CIMProperty&) const;
	virtual Boolean getManagementIsRestricted() const;
	virtual void setManagementIsRestricted(Boolean&);
	virtual Boolean getLaunchMessage(CIMProperty&) const;
	virtual String getLaunchMessage() const;
	virtual void setLaunchMessage(String&);
	virtual Boolean getLaunchMessageProtocolOperation(CIMProperty&) const;
	virtual Uint16 getLaunchMessageProtocolOperation() const;
	virtual void setLaunchMessageProtocolOperation(Uint16&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeGetDerivedParametersForElement(
		CIMInstance &inSelf,
		Array<String> &inParameterValue
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
	String _accessInfo;
	Uint16 _infoFormat;
	String _otherInfoFormatDescription;
	Uint16 _accessContext;
	String _otherAccessContext;
	Array<String> _parameterName;
	Array<String> _parameterDescription;
	Array<String> _parameterDerivation;
	Array<String> _parameterConstraints;
	Array<Uint16> _parameterType;
	Array<String> _supportedFeatureName;
	Array<String> _supportedFeatureDescription;
	Array<String> _managedClasses;
	Boolean _managementIsRestricted;
	String _launchMessage;
	Uint16 _launchMessageProtocolOperation;

#	include "UNIX_LaunchInContextSAPPrivate.h"


};

#endif /* UNIX_LAUNCHINCONTEXTSAP */
