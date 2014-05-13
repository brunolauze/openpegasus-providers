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
CIM_ComputerSystem
CIM_StorageLibraryCapabilities
*/


/* **** Version *** */
/*
2.9.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageLib
*/


/* **** Description *** */
/*
A StorageLibrary is a collection of ManagedSystemElements that operate together to provide cartridge library capabilities. This object serves as an aggregation point to group the following elements: MediaTransferDevices, a Label Reader, a library Door, MediaAccessDevices, and other Library components. 
The use of this class is deprecated in favor of CIM_ComputerSystem. Originally it was felt that a media library could be purely mechanical and thus not a ComputerSystem. However all manageable libraries are ComputerSystems. This change simplifies the use of the model by client software.
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

			CIM_AllocatedLogicalElement:
				AllocationState String

			CIM_System:
				CreationClassName String
				NameFormat String
				PrimaryOwnerName String
				PrimaryOwnerContact String
				Roles String
				OtherIdentifyingInfo String
				IdentifyingDescriptions String

			UNIX_StorageLibrary:
				Capabilities UInt16
				Overfilled Boolean
				AuditNeeded Boolean
				AuditInProgress Boolean
				MaxAuditTime UInt64
				Automated Boolean
				RoboticsEnabled Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_AllocatedLogicalElement:

			CIM_System:

			UNIX_StorageLibrary:
				EnableRobotics UInt32


*/

#ifndef __UNIX_STORAGELIBRARY_H
#define __UNIX_STORAGELIBRARY_H


#include "CIM_System.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_StorageLibraryDeps.h"


#ifndef PROPERTY_CAPABILITIES
#define PROPERTY_CAPABILITIES \
					"Capabilities"
#endif

#ifndef PROPERTY_OVERFILLED
#define PROPERTY_OVERFILLED \
					"Overfilled"
#endif

#ifndef PROPERTY_AUDIT_NEEDED
#define PROPERTY_AUDIT_NEEDED \
					"AuditNeeded"
#endif

#ifndef PROPERTY_AUDIT_IN_PROGRESS
#define PROPERTY_AUDIT_IN_PROGRESS \
					"AuditInProgress"
#endif

#ifndef PROPERTY_MAX_AUDIT_TIME
#define PROPERTY_MAX_AUDIT_TIME \
					"MaxAuditTime"
#endif

#ifndef PROPERTY_AUTOMATED
#define PROPERTY_AUTOMATED \
					"Automated"
#endif

#ifndef PROPERTY_ROBOTICS_ENABLED
#define PROPERTY_ROBOTICS_ENABLED \
					"RoboticsEnabled"
#endif



class UNIX_StorageLibrary :
	public CIM_System
{
public:

	UNIX_StorageLibrary();
	~UNIX_StorageLibrary();

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
	virtual Boolean getAllocationState(CIMProperty&) const;
	virtual String getAllocationState() const;
	virtual void setAllocationState(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual String getNameFormat() const;
	virtual void setNameFormat(String&);
	virtual Boolean getPrimaryOwnerName(CIMProperty&) const;
	virtual String getPrimaryOwnerName() const;
	virtual void setPrimaryOwnerName(String&);
	virtual Boolean getPrimaryOwnerContact(CIMProperty&) const;
	virtual String getPrimaryOwnerContact() const;
	virtual void setPrimaryOwnerContact(String&);
	virtual Boolean getRoles(CIMProperty&) const;
	virtual Array<String> getRoles() const;
	virtual void setRoles(Array<String>&);
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual void setOtherIdentifyingInfo(Array<String>&);
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual void setIdentifyingDescriptions(Array<String>&);
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual void setCapabilities(Array<Uint16>&);
	virtual Boolean getOverfilled(CIMProperty&) const;
	virtual Boolean getOverfilled() const;
	virtual void setOverfilled(Boolean&);
	virtual Boolean getAuditNeeded(CIMProperty&) const;
	virtual Boolean getAuditNeeded() const;
	virtual void setAuditNeeded(Boolean&);
	virtual Boolean getAuditInProgress(CIMProperty&) const;
	virtual Boolean getAuditInProgress() const;
	virtual void setAuditInProgress(Boolean&);
	virtual Boolean getMaxAuditTime(CIMProperty&) const;
	virtual Uint64 getMaxAuditTime() const;
	virtual void setMaxAuditTime(Uint64&);
	virtual Boolean getAutomated(CIMProperty&) const;
	virtual Boolean getAutomated() const;
	virtual void setAutomated(Boolean&);
	virtual Boolean getRoboticsEnabled(CIMProperty&) const;
	virtual Boolean getRoboticsEnabled() const;
	virtual void setRoboticsEnabled(Boolean&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeEnableRobotics(
		Boolean &inEnable
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
	String _allocationState;
	String _creationClassName;
	String _nameFormat;
	String _primaryOwnerName;
	String _primaryOwnerContact;
	Array<String> _roles;
	Array<String> _otherIdentifyingInfo;
	Array<String> _identifyingDescriptions;
	Array<Uint16> _capabilities;
	Boolean _overfilled;
	Boolean _auditNeeded;
	Boolean _auditInProgress;
	Uint64 _maxAuditTime;
	Boolean _automated;
	Boolean _roboticsEnabled;

#	include "UNIX_StorageLibraryPrivate.h"


};

#endif /* UNIX_STORAGELIBRARY */
