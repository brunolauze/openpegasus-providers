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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::SystemResources
*/


/* **** Description *** */
/*
Personal computer architecture DMA.
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

			CIM_SystemResource:
				Shareable Boolean
				ImplementationInfo UInt16

			UNIX_DMA:
				CSCreationClassName String
				CSName String
				CreationClassName String
				DMAChannel UInt32
				Availability UInt16
				BurstMode Boolean
				TransferWidths UInt16
				AddressSize UInt16
				MaxTransferSize UInt32
				ByteMode UInt16
				WordMode UInt16
				ChannelTiming UInt16
				TypeCTiming UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_SystemResource:

			UNIX_DMA:


*/

#ifndef __UNIX_DMA_H
#define __UNIX_DMA_H


#include "CIM_SystemResource.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_DMADeps.h"


#ifndef PROPERTY_CS_CREATION_CLASS_NAME
#define PROPERTY_CS_CREATION_CLASS_NAME \
					"CSCreationClassName"
#endif

#ifndef PROPERTY_CS_NAME
#define PROPERTY_CS_NAME \
					"CSName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_DMA_CHANNEL
#define PROPERTY_DMA_CHANNEL \
					"DMAChannel"
#endif

#ifndef PROPERTY_AVAILABILITY
#define PROPERTY_AVAILABILITY \
					"Availability"
#endif

#ifndef PROPERTY_BURST_MODE
#define PROPERTY_BURST_MODE \
					"BurstMode"
#endif

#ifndef PROPERTY_TRANSFER_WIDTHS
#define PROPERTY_TRANSFER_WIDTHS \
					"TransferWidths"
#endif

#ifndef PROPERTY_ADDRESS_SIZE
#define PROPERTY_ADDRESS_SIZE \
					"AddressSize"
#endif

#ifndef PROPERTY_MAX_TRANSFER_SIZE
#define PROPERTY_MAX_TRANSFER_SIZE \
					"MaxTransferSize"
#endif

#ifndef PROPERTY_BYTE_MODE
#define PROPERTY_BYTE_MODE \
					"ByteMode"
#endif

#ifndef PROPERTY_WORD_MODE
#define PROPERTY_WORD_MODE \
					"WordMode"
#endif

#ifndef PROPERTY_CHANNEL_TIMING
#define PROPERTY_CHANNEL_TIMING \
					"ChannelTiming"
#endif

#ifndef PROPERTY_TYPE_C_TIMING
#define PROPERTY_TYPE_C_TIMING \
					"TypeCTiming"
#endif



class UNIX_DMA :
	public CIM_SystemResource
{
public:

	UNIX_DMA();
	~UNIX_DMA();

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
	virtual Boolean getShareable(CIMProperty&) const;
	virtual Boolean getShareable() const;
	virtual void setShareable(Boolean&);
	virtual Boolean getImplementationInfo(CIMProperty&) const;
	virtual Uint16 getImplementationInfo() const;
	virtual void setImplementationInfo(Uint16&);
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual void setCSCreationClassName(String&);
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual void setCSName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getDMAChannel(CIMProperty&) const;
	virtual Uint32 getDMAChannel() const;
	virtual void setDMAChannel(Uint32&);
	virtual Boolean getAvailability(CIMProperty&) const;
	virtual Uint16 getAvailability() const;
	virtual void setAvailability(Uint16&);
	virtual Boolean getBurstMode(CIMProperty&) const;
	virtual Boolean getBurstMode() const;
	virtual void setBurstMode(Boolean&);
	virtual Boolean getTransferWidths(CIMProperty&) const;
	virtual Array<Uint16> getTransferWidths() const;
	virtual void setTransferWidths(Array<Uint16>&);
	virtual Boolean getAddressSize(CIMProperty&) const;
	virtual Uint16 getAddressSize() const;
	virtual void setAddressSize(Uint16&);
	virtual Boolean getMaxTransferSize(CIMProperty&) const;
	virtual Uint32 getMaxTransferSize() const;
	virtual void setMaxTransferSize(Uint32&);
	virtual Boolean getByteMode(CIMProperty&) const;
	virtual Uint16 getByteMode() const;
	virtual void setByteMode(Uint16&);
	virtual Boolean getWordMode(CIMProperty&) const;
	virtual Uint16 getWordMode() const;
	virtual void setWordMode(Uint16&);
	virtual Boolean getChannelTiming(CIMProperty&) const;
	virtual Uint16 getChannelTiming() const;
	virtual void setChannelTiming(Uint16&);
	virtual Boolean getTypeCTiming(CIMProperty&) const;
	virtual Uint16 getTypeCTiming() const;
	virtual void setTypeCTiming(Uint16&);

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
	Boolean _shareable;
	Uint16 _implementationInfo;
	String _cSCreationClassName;
	String _cSName;
	String _creationClassName;
	Uint32 _dMAChannel;
	Uint16 _availability;
	Boolean _burstMode;
	Array<Uint16> _transferWidths;
	Uint16 _addressSize;
	Uint32 _maxTransferSize;
	Uint16 _byteMode;
	Uint16 _wordMode;
	Uint16 _channelTiming;
	Uint16 _typeCTiming;

#	include "UNIX_DMAPrivate.h"


};

#endif /* UNIX_DMA */
