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
2.40.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network
*/


/* **** Description *** */
/*
CIM_VLANNetwork represent the management aspects of a Virtual Local Area Network (VLAN) as used within a network switch.
*/


/* **** MappingStrings *** */
/*
Recommendation.ITU|M3100.Network
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

			CIM_AdminDomain:

			UNIX_Network:
				OtherTypeDescription String
				Type UInt16

			UNIX_VLANNetwork:
				VLANId UInt16
				SAIdentifier UInt32
				TransmissionSize UInt32
				TypeOfMedia UInt16
				PrivateVLANType UInt16
				PrimaryVLANId UInt16
				AssociatedVLANIds UInt16


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

			CIM_AdminDomain:

			UNIX_Network:
				CreateNetworkPipes UInt32

			UNIX_VLANNetwork:


*/

#ifndef __UNIX_VLANNETWORK_H
#define __UNIX_VLANNETWORK_H


#include <Network/UNIX_Network.h>
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_VLANNetworkDeps.h"


#ifndef PROPERTY_VLAN_ID
#define PROPERTY_VLAN_ID \
					"VLANId"
#endif

#ifndef PROPERTY_S_A_IDENTIFIER
#define PROPERTY_S_A_IDENTIFIER \
					"SAIdentifier"
#endif

#ifndef PROPERTY_TRANSMISSION_SIZE
#define PROPERTY_TRANSMISSION_SIZE \
					"TransmissionSize"
#endif

#ifndef PROPERTY_TYPE_OF_MEDIA
#define PROPERTY_TYPE_OF_MEDIA \
					"TypeOfMedia"
#endif

#ifndef PROPERTY_PRIVATE_VLAN_TYPE
#define PROPERTY_PRIVATE_VLAN_TYPE \
					"PrivateVLANType"
#endif

#ifndef PROPERTY_PRIMARY_VLAN_ID
#define PROPERTY_PRIMARY_VLAN_ID \
					"PrimaryVLANId"
#endif

#ifndef PROPERTY_ASSOCIATED_VLAN_IDS
#define PROPERTY_ASSOCIATED_VLAN_IDS \
					"AssociatedVLANIds"
#endif



class UNIX_VLANNetwork :
	public UNIX_Network
{
public:

	UNIX_VLANNetwork();
	~UNIX_VLANNetwork();

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
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual void setOtherTypeDescription(String&);
	virtual Boolean getType(CIMProperty&) const;
	virtual Array<Uint16> getType() const;
	virtual void setType(Array<Uint16>&);
	virtual Boolean getVLANId(CIMProperty&) const;
	virtual Uint16 getVLANId() const;
	virtual void setVLANId(Uint16&);
	virtual Boolean getSAIdentifier(CIMProperty&) const;
	virtual Uint32 getSAIdentifier() const;
	virtual void setSAIdentifier(Uint32&);
	virtual Boolean getTransmissionSize(CIMProperty&) const;
	virtual Uint32 getTransmissionSize() const;
	virtual void setTransmissionSize(Uint32&);
	virtual Boolean getTypeOfMedia(CIMProperty&) const;
	virtual Uint16 getTypeOfMedia() const;
	virtual void setTypeOfMedia(Uint16&);
	virtual Boolean getPrivateVLANType(CIMProperty&) const;
	virtual Uint16 getPrivateVLANType() const;
	virtual void setPrivateVLANType(Uint16&);
	virtual Boolean getPrimaryVLANId(CIMProperty&) const;
	virtual Uint16 getPrimaryVLANId() const;
	virtual void setPrimaryVLANId(Uint16&);
	virtual Boolean getAssociatedVLANIds(CIMProperty&) const;
	virtual Array<Uint16> getAssociatedVLANIds() const;
	virtual void setAssociatedVLANIds(Array<Uint16>&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);

	virtual Uint32 invokeCreateNetworkPipes(
		Array<Uint16> &inDirectionality,
		CIMInstance &inSourceSAP,
		CIMInstance &inSinkSAP,
		CIMInstance &inJob,
		CIMInstance &inNetworkPipe
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
	String _otherTypeDescription;
	Array<Uint16> _type;
	Uint16 _vLANId;
	Uint32 _sAIdentifier;
	Uint32 _transmissionSize;
	Uint16 _typeOfMedia;
	Uint16 _privateVLANType;
	Uint16 _primaryVLANId;
	Array<Uint16> _associatedVLANIds;

#	include "UNIX_VLANNetworkPrivate.h"


};

#endif /* UNIX_VLANNETWORK */
