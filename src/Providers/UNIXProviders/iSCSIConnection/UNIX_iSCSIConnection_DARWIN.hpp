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


UNIX_iSCSIConnection::UNIX_iSCSIConnection(void)
{
}

UNIX_iSCSIConnection::~UNIX_iSCSIConnection(void)
{
}

Boolean UNIX_iSCSIConnection::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSIConnection::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSIConnection::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSIConnection::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSIConnection::getCaption() const
{
	return _caption;
}

void UNIX_iSCSIConnection::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSIConnection::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSIConnection::getDescription() const
{
	return _description;
}

void UNIX_iSCSIConnection::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSIConnection::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSIConnection::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSIConnection::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSIConnection::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSIConnection::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSIConnection::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSIConnection::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_iSCSIConnection::getInstallDate() const
{
	return _installDate;
}

void UNIX_iSCSIConnection::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_iSCSIConnection::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_iSCSIConnection::getName() const
{
	return _name;
}

void UNIX_iSCSIConnection::setName(String &value)
{
	_name = value;
}

Boolean UNIX_iSCSIConnection::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_iSCSIConnection::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_iSCSIConnection::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_iSCSIConnection::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_iSCSIConnection::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_iSCSIConnection::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_iSCSIConnection::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_iSCSIConnection::getStatus() const
{
	return _status;
}

void UNIX_iSCSIConnection::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_iSCSIConnection::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_iSCSIConnection::getHealthState() const
{
	return _healthState;
}

void UNIX_iSCSIConnection::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_iSCSIConnection::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_iSCSIConnection::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_iSCSIConnection::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_iSCSIConnection::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_iSCSIConnection::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_iSCSIConnection::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_iSCSIConnection::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_iSCSIConnection::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_iSCSIConnection::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_iSCSIConnection::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_iSCSIConnection::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_iSCSIConnection::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_iSCSIConnection::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_iSCSIConnection::getEnabledState() const
{
	return _enabledState;
}

void UNIX_iSCSIConnection::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_iSCSIConnection::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_iSCSIConnection::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_iSCSIConnection::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_iSCSIConnection::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_iSCSIConnection::getRequestedState() const
{
	return _requestedState;
}

void UNIX_iSCSIConnection::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_iSCSIConnection::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_iSCSIConnection::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_iSCSIConnection::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_iSCSIConnection::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_iSCSIConnection::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_iSCSIConnection::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_iSCSIConnection::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_iSCSIConnection::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_iSCSIConnection::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_iSCSIConnection::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_iSCSIConnection::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_iSCSIConnection::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_iSCSIConnection::getDirectionality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTIONALITY, getDirectionality());
	return true;
}

Uint16 UNIX_iSCSIConnection::getDirectionality() const
{
	return _directionality;
}

void UNIX_iSCSIConnection::setDirectionality(Uint16 &value)
{
	_directionality = value;
}

Boolean UNIX_iSCSIConnection::getAggregationBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGREGATION_BEHAVIOR, getAggregationBehavior());
	return true;
}

Uint16 UNIX_iSCSIConnection::getAggregationBehavior() const
{
	return _aggregationBehavior;
}

void UNIX_iSCSIConnection::setAggregationBehavior(Uint16 &value)
{
	_aggregationBehavior = value;
}

Boolean UNIX_iSCSIConnection::getConnectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_ID, getConnectionID());
	return true;
}

Uint32 UNIX_iSCSIConnection::getConnectionID() const
{
	return _connectionID;
}

void UNIX_iSCSIConnection::setConnectionID(Uint32 &value)
{
	_connectionID = value;
}

Boolean UNIX_iSCSIConnection::getMaxReceiveDataSegmentLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH, getMaxReceiveDataSegmentLength());
	return true;
}

Uint32 UNIX_iSCSIConnection::getMaxReceiveDataSegmentLength() const
{
	return _maxReceiveDataSegmentLength;
}

void UNIX_iSCSIConnection::setMaxReceiveDataSegmentLength(Uint32 &value)
{
	_maxReceiveDataSegmentLength = value;
}

Boolean UNIX_iSCSIConnection::getMaxTransmitDataSegmentLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TRANSMIT_DATA_SEGMENT_LENGTH, getMaxTransmitDataSegmentLength());
	return true;
}

Uint32 UNIX_iSCSIConnection::getMaxTransmitDataSegmentLength() const
{
	return _maxTransmitDataSegmentLength;
}

void UNIX_iSCSIConnection::setMaxTransmitDataSegmentLength(Uint32 &value)
{
	_maxTransmitDataSegmentLength = value;
}

Boolean UNIX_iSCSIConnection::getHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEADER_DIGEST_METHOD, getHeaderDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnection::getHeaderDigestMethod() const
{
	return _headerDigestMethod;
}

void UNIX_iSCSIConnection::setHeaderDigestMethod(Uint16 &value)
{
	_headerDigestMethod = value;
}

Boolean UNIX_iSCSIConnection::getOtherHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HEADER_DIGEST_METHOD, getOtherHeaderDigestMethod());
	return true;
}

String UNIX_iSCSIConnection::getOtherHeaderDigestMethod() const
{
	return _otherHeaderDigestMethod;
}

void UNIX_iSCSIConnection::setOtherHeaderDigestMethod(String &value)
{
	_otherHeaderDigestMethod = value;
}

Boolean UNIX_iSCSIConnection::getDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_DIGEST_METHOD, getDataDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnection::getDataDigestMethod() const
{
	return _dataDigestMethod;
}

void UNIX_iSCSIConnection::setDataDigestMethod(Uint16 &value)
{
	_dataDigestMethod = value;
}

Boolean UNIX_iSCSIConnection::getOtherDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DATA_DIGEST_METHOD, getOtherDataDigestMethod());
	return true;
}

String UNIX_iSCSIConnection::getOtherDataDigestMethod() const
{
	return _otherDataDigestMethod;
}

void UNIX_iSCSIConnection::setOtherDataDigestMethod(String &value)
{
	_otherDataDigestMethod = value;
}

Boolean UNIX_iSCSIConnection::getReceivingMarkers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVING_MARKERS, getReceivingMarkers());
	return true;
}

Boolean UNIX_iSCSIConnection::getReceivingMarkers() const
{
	return _receivingMarkers;
}

void UNIX_iSCSIConnection::setReceivingMarkers(Boolean &value)
{
	_receivingMarkers = value;
}

Boolean UNIX_iSCSIConnection::getSendingMarkers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENDING_MARKERS, getSendingMarkers());
	return true;
}

Boolean UNIX_iSCSIConnection::getSendingMarkers() const
{
	return _sendingMarkers;
}

void UNIX_iSCSIConnection::setSendingMarkers(Boolean &value)
{
	_sendingMarkers = value;
}

Boolean UNIX_iSCSIConnection::getActiveiSCSIVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVEI_S_CS_I_VERSION, getActiveiSCSIVersion());
	return true;
}

Boolean UNIX_iSCSIConnection::getActiveiSCSIVersion() const
{
	return _activeiSCSIVersion;
}

void UNIX_iSCSIConnection::setActiveiSCSIVersion(Boolean &value)
{
	_activeiSCSIVersion = value;
}

Boolean UNIX_iSCSIConnection::getAuthenticationMethodUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD_USED, getAuthenticationMethodUsed());
	return true;
}

Uint16 UNIX_iSCSIConnection::getAuthenticationMethodUsed() const
{
	return _authenticationMethodUsed;
}

void UNIX_iSCSIConnection::setAuthenticationMethodUsed(Uint16 &value)
{
	_authenticationMethodUsed = value;
}

Boolean UNIX_iSCSIConnection::getMutualAuthentication(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MUTUAL_AUTHENTICATION, getMutualAuthentication());
	return true;
}

Boolean UNIX_iSCSIConnection::getMutualAuthentication() const
{
	return _mutualAuthentication;
}

void UNIX_iSCSIConnection::setMutualAuthentication(Boolean &value)
{
	_mutualAuthentication = value;
}


void UNIX_iSCSIConnection::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSIConnection");
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
	_directionality = Uint16(0);
	_aggregationBehavior = Uint16(0);
	_connectionID = Uint32(0);
	_maxReceiveDataSegmentLength = Uint32(0);
	_maxTransmitDataSegmentLength = Uint32(0);
	_headerDigestMethod = Uint16(0);
	_otherHeaderDigestMethod = String ("");
	_dataDigestMethod = Uint16(0);
	_otherDataDigestMethod = String ("");
	_receivingMarkers = Boolean(false);
	_sendingMarkers = Boolean(false);
	_activeiSCSIVersion = Boolean(false);
	_authenticationMethodUsed = Uint16(0);
	_mutualAuthentication = Boolean(false);

}

Boolean UNIX_iSCSIConnection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Directionality"))
			{
				Uint16 directionalityValue;
				property.getValue().get(directionalityValue);
				setDirectionality(directionalityValue);
			}
			else if (String::equal(property.getName().getString(), "AggregationBehavior"))
			{
				Uint16 aggregationBehaviorValue;
				property.getValue().get(aggregationBehaviorValue);
				setAggregationBehavior(aggregationBehaviorValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectionID"))
			{
				Uint32 connectionIDValue;
				property.getValue().get(connectionIDValue);
				setConnectionID(connectionIDValue);
			}
			else if (String::equal(property.getName().getString(), "MaxReceiveDataSegmentLength"))
			{
				Uint32 maxReceiveDataSegmentLengthValue;
				property.getValue().get(maxReceiveDataSegmentLengthValue);
				setMaxReceiveDataSegmentLength(maxReceiveDataSegmentLengthValue);
			}
			else if (String::equal(property.getName().getString(), "MaxTransmitDataSegmentLength"))
			{
				Uint32 maxTransmitDataSegmentLengthValue;
				property.getValue().get(maxTransmitDataSegmentLengthValue);
				setMaxTransmitDataSegmentLength(maxTransmitDataSegmentLengthValue);
			}
			else if (String::equal(property.getName().getString(), "HeaderDigestMethod"))
			{
				Uint16 headerDigestMethodValue;
				property.getValue().get(headerDigestMethodValue);
				setHeaderDigestMethod(headerDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherHeaderDigestMethod"))
			{
				String otherHeaderDigestMethodValue;
				property.getValue().get(otherHeaderDigestMethodValue);
				setOtherHeaderDigestMethod(otherHeaderDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "DataDigestMethod"))
			{
				Uint16 dataDigestMethodValue;
				property.getValue().get(dataDigestMethodValue);
				setDataDigestMethod(dataDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherDataDigestMethod"))
			{
				String otherDataDigestMethodValue;
				property.getValue().get(otherDataDigestMethodValue);
				setOtherDataDigestMethod(otherDataDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivingMarkers"))
			{
				Boolean receivingMarkersValue;
				property.getValue().get(receivingMarkersValue);
				setReceivingMarkers(receivingMarkersValue);
			}
			else if (String::equal(property.getName().getString(), "SendingMarkers"))
			{
				Boolean sendingMarkersValue;
				property.getValue().get(sendingMarkersValue);
				setSendingMarkers(sendingMarkersValue);
			}
			else if (String::equal(property.getName().getString(), "ActiveiSCSIVersion"))
			{
				Boolean activeiSCSIVersionValue;
				property.getValue().get(activeiSCSIVersionValue);
				setActiveiSCSIVersion(activeiSCSIVersionValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMethodUsed"))
			{
				Uint16 authenticationMethodUsedValue;
				property.getValue().get(authenticationMethodUsedValue);
				setAuthenticationMethodUsed(authenticationMethodUsedValue);
			}
			else if (String::equal(property.getName().getString(), "MutualAuthentication"))
			{
				Boolean mutualAuthenticationValue;
				property.getValue().get(mutualAuthenticationValue);
				setMutualAuthentication(mutualAuthenticationValue);
			}
	}
	return true;
}

Uint32 UNIX_iSCSIConnection::invokeRequestStateChange(
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


Boolean UNIX_iSCSIConnection::initialize()
{
	return false;
}

Boolean UNIX_iSCSIConnection::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSIConnection");
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
	_directionality = Uint16(0);
	_aggregationBehavior = Uint16(0);
	_connectionID = Uint32(0);
	_maxReceiveDataSegmentLength = Uint32(0);
	_maxTransmitDataSegmentLength = Uint32(0);
	_headerDigestMethod = Uint16(0);
	_otherHeaderDigestMethod = String ("");
	_dataDigestMethod = Uint16(0);
	_otherDataDigestMethod = String ("");
	_receivingMarkers = Boolean(false);
	_sendingMarkers = Boolean(false);
	_activeiSCSIVersion = Boolean(false);
	_authenticationMethodUsed = Uint16(0);
	_mutualAuthentication = Boolean(false);
	
	return false;
}

Boolean UNIX_iSCSIConnection::finalize()
{
	return false;
}

Boolean UNIX_iSCSIConnection::loadByName(const String name)
{
	return false;
}

Boolean UNIX_iSCSIConnection::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_iSCSIConnection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConnection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConnection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConnection::validateInstance()
{
	return true;
}

