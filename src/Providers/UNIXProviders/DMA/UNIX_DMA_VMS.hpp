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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_DMA::UNIX_DMA(void)
{
}

UNIX_DMA::~UNIX_DMA(void)
{
}

Boolean UNIX_DMA::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DMA::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DMA::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DMA::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DMA::getCaption() const
{
	return _caption;
}

void UNIX_DMA::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DMA::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DMA::getDescription() const
{
	return _description;
}

void UNIX_DMA::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DMA::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DMA::getElementName() const
{
	return _elementName;
}

void UNIX_DMA::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DMA::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DMA::getGeneration() const
{
	return _generation;
}

void UNIX_DMA::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DMA::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DMA::getInstallDate() const
{
	return _installDate;
}

void UNIX_DMA::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_DMA::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DMA::getName() const
{
	return _name;
}

void UNIX_DMA::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DMA::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DMA::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_DMA::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_DMA::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DMA::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_DMA::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_DMA::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DMA::getStatus() const
{
	return _status;
}

void UNIX_DMA::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_DMA::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DMA::getHealthState() const
{
	return _healthState;
}

void UNIX_DMA::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_DMA::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DMA::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DMA::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DMA::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DMA::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DMA::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DMA::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DMA::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DMA::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DMA::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DMA::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DMA::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DMA::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DMA::getEnabledState() const
{
	return _enabledState;
}

void UNIX_DMA::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_DMA::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DMA::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_DMA::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_DMA::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DMA::getRequestedState() const
{
	return _requestedState;
}

void UNIX_DMA::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_DMA::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DMA::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_DMA::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_DMA::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DMA::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_DMA::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_DMA::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DMA::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_DMA::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_DMA::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DMA::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_DMA::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_DMA::getShareable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHAREABLE, getShareable());
	return true;
}

Boolean UNIX_DMA::getShareable() const
{
	return _shareable;
}

void UNIX_DMA::setShareable(Boolean &value)
{
	_shareable = value;
}

Boolean UNIX_DMA::getImplementationInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPLEMENTATION_INFO, getImplementationInfo());
	return true;
}

Uint16 UNIX_DMA::getImplementationInfo() const
{
	return _implementationInfo;
}

void UNIX_DMA::setImplementationInfo(Uint16 &value)
{
	_implementationInfo = value;
}

Boolean UNIX_DMA::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_DMA::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_DMA::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_DMA::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_DMA::getCSName() const
{
	return _cSName;
}

void UNIX_DMA::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_DMA::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DMA::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_DMA::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_DMA::getDMAChannel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DMA_CHANNEL, getDMAChannel());
	return true;
}

Uint32 UNIX_DMA::getDMAChannel() const
{
	return _dMAChannel;
}

void UNIX_DMA::setDMAChannel(Uint32 &value)
{
	_dMAChannel = value;
}

Boolean UNIX_DMA::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DMA::getAvailability() const
{
	return _availability;
}

void UNIX_DMA::setAvailability(Uint16 &value)
{
	_availability = value;
}

Boolean UNIX_DMA::getBurstMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_MODE, getBurstMode());
	return true;
}

Boolean UNIX_DMA::getBurstMode() const
{
	return _burstMode;
}

void UNIX_DMA::setBurstMode(Boolean &value)
{
	_burstMode = value;
}

Boolean UNIX_DMA::getTransferWidths(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSFER_WIDTHS, getTransferWidths());
	return true;
}

Array<Uint16> UNIX_DMA::getTransferWidths() const
{
	return _transferWidths;
}

void UNIX_DMA::setTransferWidths(Array<Uint16> &value)
{
	_transferWidths = value;
}

Boolean UNIX_DMA::getAddressSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SIZE, getAddressSize());
	return true;
}

Uint16 UNIX_DMA::getAddressSize() const
{
	return _addressSize;
}

void UNIX_DMA::setAddressSize(Uint16 &value)
{
	_addressSize = value;
}

Boolean UNIX_DMA::getMaxTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TRANSFER_SIZE, getMaxTransferSize());
	return true;
}

Uint32 UNIX_DMA::getMaxTransferSize() const
{
	return _maxTransferSize;
}

void UNIX_DMA::setMaxTransferSize(Uint32 &value)
{
	_maxTransferSize = value;
}

Boolean UNIX_DMA::getByteMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTE_MODE, getByteMode());
	return true;
}

Uint16 UNIX_DMA::getByteMode() const
{
	return _byteMode;
}

void UNIX_DMA::setByteMode(Uint16 &value)
{
	_byteMode = value;
}

Boolean UNIX_DMA::getWordMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORD_MODE, getWordMode());
	return true;
}

Uint16 UNIX_DMA::getWordMode() const
{
	return _wordMode;
}

void UNIX_DMA::setWordMode(Uint16 &value)
{
	_wordMode = value;
}

Boolean UNIX_DMA::getChannelTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANNEL_TIMING, getChannelTiming());
	return true;
}

Uint16 UNIX_DMA::getChannelTiming() const
{
	return _channelTiming;
}

void UNIX_DMA::setChannelTiming(Uint16 &value)
{
	_channelTiming = value;
}

Boolean UNIX_DMA::getTypeCTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_C_TIMING, getTypeCTiming());
	return true;
}

Uint16 UNIX_DMA::getTypeCTiming() const
{
	return _typeCTiming;
}

void UNIX_DMA::setTypeCTiming(Uint16 &value)
{
	_typeCTiming = value;
}


void UNIX_DMA::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DMA");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_shareable = Boolean(false);
	_implementationInfo = Uint16(0);
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_creationClassName = String("UNIX_DMA");
	_dMAChannel = Uint32(0);
	_availability = Uint16(0);
	_burstMode = Boolean(false);
	_transferWidths.clear();
	_addressSize = Uint16(0);
	_maxTransferSize = Uint32(0);
	_byteMode = Uint16(0);
	_wordMode = Uint16(0);
	_channelTiming = Uint16(0);
	_typeCTiming = Uint16(0);

}

Boolean UNIX_DMA::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledState"))
			{
				Uint16 enabledStateValue;
				property.getValue().get(enabledStateValue);
				setEnabledState(enabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledState"))
			{
				String otherEnabledStateValue;
				property.getValue().get(otherEnabledStateValue);
				setOtherEnabledState(otherEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedState"))
			{
				Uint16 requestedStateValue;
				property.getValue().get(requestedStateValue);
				setRequestedState(requestedStateValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledDefault"))
			{
				Uint16 enabledDefaultValue;
				property.getValue().get(enabledDefaultValue);
				setEnabledDefault(enabledDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastStateChange"))
			{
				CIMDateTime timeOfLastStateChangeValue;
				property.getValue().get(timeOfLastStateChangeValue);
				setTimeOfLastStateChange(timeOfLastStateChangeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableRequestedStates"))
			{
				Array<Uint16> availableRequestedStatesValue;
				property.getValue().get(availableRequestedStatesValue);
				setAvailableRequestedStates(availableRequestedStatesValue);
			}
			else if (String::equal(property.getName().getString(), "TransitioningToState"))
			{
				Uint16 transitioningToStateValue;
				property.getValue().get(transitioningToStateValue);
				setTransitioningToState(transitioningToStateValue);
			}
			else if (String::equal(property.getName().getString(), "Shareable"))
			{
				Boolean shareableValue;
				property.getValue().get(shareableValue);
				setShareable(shareableValue);
			}
			else if (String::equal(property.getName().getString(), "ImplementationInfo"))
			{
				Uint16 implementationInfoValue;
				property.getValue().get(implementationInfoValue);
				setImplementationInfo(implementationInfoValue);
			}
			else if (String::equal(property.getName().getString(), "CSCreationClassName"))
			{
				String cSCreationClassNameValue;
				property.getValue().get(cSCreationClassNameValue);
				setCSCreationClassName(cSCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "CSName"))
			{
				String cSNameValue;
				property.getValue().get(cSNameValue);
				setCSName(cSNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DMAChannel"))
			{
				Uint32 dMAChannelValue;
				property.getValue().get(dMAChannelValue);
				setDMAChannel(dMAChannelValue);
			}
			else if (String::equal(property.getName().getString(), "Availability"))
			{
				Uint16 availabilityValue;
				property.getValue().get(availabilityValue);
				setAvailability(availabilityValue);
			}
			else if (String::equal(property.getName().getString(), "BurstMode"))
			{
				Boolean burstModeValue;
				property.getValue().get(burstModeValue);
				setBurstMode(burstModeValue);
			}
			else if (String::equal(property.getName().getString(), "TransferWidths"))
			{
				Array<Uint16> transferWidthsValue;
				property.getValue().get(transferWidthsValue);
				setTransferWidths(transferWidthsValue);
			}
			else if (String::equal(property.getName().getString(), "AddressSize"))
			{
				Uint16 addressSizeValue;
				property.getValue().get(addressSizeValue);
				setAddressSize(addressSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxTransferSize"))
			{
				Uint32 maxTransferSizeValue;
				property.getValue().get(maxTransferSizeValue);
				setMaxTransferSize(maxTransferSizeValue);
			}
			else if (String::equal(property.getName().getString(), "ByteMode"))
			{
				Uint16 byteModeValue;
				property.getValue().get(byteModeValue);
				setByteMode(byteModeValue);
			}
			else if (String::equal(property.getName().getString(), "WordMode"))
			{
				Uint16 wordModeValue;
				property.getValue().get(wordModeValue);
				setWordMode(wordModeValue);
			}
			else if (String::equal(property.getName().getString(), "ChannelTiming"))
			{
				Uint16 channelTimingValue;
				property.getValue().get(channelTimingValue);
				setChannelTiming(channelTimingValue);
			}
			else if (String::equal(property.getName().getString(), "TypeCTiming"))
			{
				Uint16 typeCTimingValue;
				property.getValue().get(typeCTimingValue);
				setTypeCTiming(typeCTimingValue);
			}
	}
	return true;
}

Uint32 UNIX_DMA::invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RequestStateChange */
	
	
	
	return returnValue;
}


Boolean UNIX_DMA::initialize()
{
	return false;
}

Boolean UNIX_DMA::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DMA");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_shareable = Boolean(false);
	_implementationInfo = Uint16(0);
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_creationClassName = String("UNIX_DMA");
	_dMAChannel = Uint32(0);
	_availability = Uint16(0);
	_burstMode = Boolean(false);
	_transferWidths.clear();
	_addressSize = Uint16(0);
	_maxTransferSize = Uint32(0);
	_byteMode = Uint16(0);
	_wordMode = Uint16(0);
	_channelTiming = Uint16(0);
	_typeCTiming = Uint16(0);
	
	return false;
}

Boolean UNIX_DMA::finalize()
{
	return false;
}

Boolean UNIX_DMA::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DMA::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String dMAChannelKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DMA_CHANNEL)) dMAChannelKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(String(std::to_string(getDMAChannel()).c_str()), dMAChannelKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DMA::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DMA::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DMA::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DMA::validateInstance()
{
	return true;
}

