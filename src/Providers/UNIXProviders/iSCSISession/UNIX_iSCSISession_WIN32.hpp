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


UNIX_iSCSISession::UNIX_iSCSISession(void)
{
}

UNIX_iSCSISession::~UNIX_iSCSISession(void)
{
}

Boolean UNIX_iSCSISession::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSISession::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSISession::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSISession::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSISession::getCaption() const
{
	return _caption;
}

void UNIX_iSCSISession::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSISession::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSISession::getDescription() const
{
	return _description;
}

void UNIX_iSCSISession::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSISession::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSISession::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSISession::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSISession::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSISession::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSISession::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSISession::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_iSCSISession::getInstallDate() const
{
	return _installDate;
}

void UNIX_iSCSISession::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_iSCSISession::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_iSCSISession::getName() const
{
	return _name;
}

void UNIX_iSCSISession::setName(String &value)
{
	_name = value;
}

Boolean UNIX_iSCSISession::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_iSCSISession::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_iSCSISession::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_iSCSISession::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_iSCSISession::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_iSCSISession::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_iSCSISession::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_iSCSISession::getStatus() const
{
	return _status;
}

void UNIX_iSCSISession::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_iSCSISession::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_iSCSISession::getHealthState() const
{
	return _healthState;
}

void UNIX_iSCSISession::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_iSCSISession::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_iSCSISession::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_iSCSISession::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_iSCSISession::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_iSCSISession::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_iSCSISession::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_iSCSISession::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_iSCSISession::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_iSCSISession::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_iSCSISession::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_iSCSISession::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_iSCSISession::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_iSCSISession::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_iSCSISession::getEnabledState() const
{
	return _enabledState;
}

void UNIX_iSCSISession::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_iSCSISession::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_iSCSISession::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_iSCSISession::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_iSCSISession::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_iSCSISession::getRequestedState() const
{
	return _requestedState;
}

void UNIX_iSCSISession::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_iSCSISession::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_iSCSISession::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_iSCSISession::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_iSCSISession::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_iSCSISession::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_iSCSISession::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_iSCSISession::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_iSCSISession::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_iSCSISession::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_iSCSISession::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_iSCSISession::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_iSCSISession::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_iSCSISession::getDirectionality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTIONALITY, getDirectionality());
	return true;
}

Uint16 UNIX_iSCSISession::getDirectionality() const
{
	return _directionality;
}

void UNIX_iSCSISession::setDirectionality(Uint16 &value)
{
	_directionality = value;
}

Boolean UNIX_iSCSISession::getAggregationBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGREGATION_BEHAVIOR, getAggregationBehavior());
	return true;
}

Uint16 UNIX_iSCSISession::getAggregationBehavior() const
{
	return _aggregationBehavior;
}

void UNIX_iSCSISession::setAggregationBehavior(Uint16 &value)
{
	_aggregationBehavior = value;
}

Boolean UNIX_iSCSISession::getSessionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_TYPE, getSessionType());
	return true;
}

Uint16 UNIX_iSCSISession::getSessionType() const
{
	return _sessionType;
}

void UNIX_iSCSISession::setSessionType(Uint16 &value)
{
	_sessionType = value;
}

Boolean UNIX_iSCSISession::getTSIH(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_S_I_H, getTSIH());
	return true;
}

Uint32 UNIX_iSCSISession::getTSIH() const
{
	return _tSIH;
}

void UNIX_iSCSISession::setTSIH(Uint32 &value)
{
	_tSIH = value;
}

Boolean UNIX_iSCSISession::getEndPointName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_END_POINT_NAME, getEndPointName());
	return true;
}

String UNIX_iSCSISession::getEndPointName() const
{
	return _endPointName;
}

void UNIX_iSCSISession::setEndPointName(String &value)
{
	_endPointName = value;
}

Boolean UNIX_iSCSISession::getCurrentConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CONNECTIONS, getCurrentConnections());
	return true;
}

Uint32 UNIX_iSCSISession::getCurrentConnections() const
{
	return _currentConnections;
}

void UNIX_iSCSISession::setCurrentConnections(Uint32 &value)
{
	_currentConnections = value;
}

Boolean UNIX_iSCSISession::getInitialR2T(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_R_2_T, getInitialR2T());
	return true;
}

Boolean UNIX_iSCSISession::getInitialR2T() const
{
	return _initialR2T;
}

void UNIX_iSCSISession::setInitialR2T(Boolean &value)
{
	_initialR2T = value;
}

Boolean UNIX_iSCSISession::getImmediateData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMMEDIATE_DATA, getImmediateData());
	return true;
}

Boolean UNIX_iSCSISession::getImmediateData() const
{
	return _immediateData;
}

void UNIX_iSCSISession::setImmediateData(Boolean &value)
{
	_immediateData = value;
}

Boolean UNIX_iSCSISession::getMaxOutstandingR2T(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_OUTSTANDING_R_2_T, getMaxOutstandingR2T());
	return true;
}

Uint32 UNIX_iSCSISession::getMaxOutstandingR2T() const
{
	return _maxOutstandingR2T;
}

void UNIX_iSCSISession::setMaxOutstandingR2T(Uint32 &value)
{
	_maxOutstandingR2T = value;
}

Boolean UNIX_iSCSISession::getMaxUnsolicitedFirstDataBurstLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH, getMaxUnsolicitedFirstDataBurstLength());
	return true;
}

Uint32 UNIX_iSCSISession::getMaxUnsolicitedFirstDataBurstLength() const
{
	return _maxUnsolicitedFirstDataBurstLength;
}

void UNIX_iSCSISession::setMaxUnsolicitedFirstDataBurstLength(Uint32 &value)
{
	_maxUnsolicitedFirstDataBurstLength = value;
}

Boolean UNIX_iSCSISession::getMaxDataBurstLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_BURST_LENGTH, getMaxDataBurstLength());
	return true;
}

Uint32 UNIX_iSCSISession::getMaxDataBurstLength() const
{
	return _maxDataBurstLength;
}

void UNIX_iSCSISession::setMaxDataBurstLength(Uint32 &value)
{
	_maxDataBurstLength = value;
}

Boolean UNIX_iSCSISession::getDataSequenceInOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_SEQUENCE_IN_ORDER, getDataSequenceInOrder());
	return true;
}

Boolean UNIX_iSCSISession::getDataSequenceInOrder() const
{
	return _dataSequenceInOrder;
}

void UNIX_iSCSISession::setDataSequenceInOrder(Boolean &value)
{
	_dataSequenceInOrder = value;
}

Boolean UNIX_iSCSISession::getDataPDUInOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_P_D_U_IN_ORDER, getDataPDUInOrder());
	return true;
}

Boolean UNIX_iSCSISession::getDataPDUInOrder() const
{
	return _dataPDUInOrder;
}

void UNIX_iSCSISession::setDataPDUInOrder(Boolean &value)
{
	_dataPDUInOrder = value;
}

Boolean UNIX_iSCSISession::getErrorRecoveryLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RECOVERY_LEVEL, getErrorRecoveryLevel());
	return true;
}

Uint32 UNIX_iSCSISession::getErrorRecoveryLevel() const
{
	return _errorRecoveryLevel;
}

void UNIX_iSCSISession::setErrorRecoveryLevel(Uint32 &value)
{
	_errorRecoveryLevel = value;
}

Boolean UNIX_iSCSISession::getMaxConnectionsPerSession(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS_PER_SESSION, getMaxConnectionsPerSession());
	return true;
}

Uint32 UNIX_iSCSISession::getMaxConnectionsPerSession() const
{
	return _maxConnectionsPerSession;
}

void UNIX_iSCSISession::setMaxConnectionsPerSession(Uint32 &value)
{
	_maxConnectionsPerSession = value;
}

Boolean UNIX_iSCSISession::getDefaultTimeToWait(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_WAIT, getDefaultTimeToWait());
	return true;
}

Uint32 UNIX_iSCSISession::getDefaultTimeToWait() const
{
	return _defaultTimeToWait;
}

void UNIX_iSCSISession::setDefaultTimeToWait(Uint32 &value)
{
	_defaultTimeToWait = value;
}

Boolean UNIX_iSCSISession::getDefaultTimeToRetain(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_RETAIN, getDefaultTimeToRetain());
	return true;
}

Uint32 UNIX_iSCSISession::getDefaultTimeToRetain() const
{
	return _defaultTimeToRetain;
}

void UNIX_iSCSISession::setDefaultTimeToRetain(Uint32 &value)
{
	_defaultTimeToRetain = value;
}


void UNIX_iSCSISession::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSISession");
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
	_sessionType = Uint16(0);
	_tSIH = Uint32(0);
	_endPointName = String ("");
	_currentConnections = Uint32(0);
	_initialR2T = Boolean(false);
	_immediateData = Boolean(false);
	_maxOutstandingR2T = Uint32(0);
	_maxUnsolicitedFirstDataBurstLength = Uint32(0);
	_maxDataBurstLength = Uint32(0);
	_dataSequenceInOrder = Boolean(false);
	_dataPDUInOrder = Boolean(false);
	_errorRecoveryLevel = Uint32(0);
	_maxConnectionsPerSession = Uint32(0);
	_defaultTimeToWait = Uint32(0);
	_defaultTimeToRetain = Uint32(0);

}

Boolean UNIX_iSCSISession::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SessionType"))
			{
				Uint16 sessionTypeValue;
				property.getValue().get(sessionTypeValue);
				setSessionType(sessionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "TSIH"))
			{
				Uint32 tSIHValue;
				property.getValue().get(tSIHValue);
				setTSIH(tSIHValue);
			}
			else if (String::equal(property.getName().getString(), "EndPointName"))
			{
				String endPointNameValue;
				property.getValue().get(endPointNameValue);
				setEndPointName(endPointNameValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentConnections"))
			{
				Uint32 currentConnectionsValue;
				property.getValue().get(currentConnectionsValue);
				setCurrentConnections(currentConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "InitialR2T"))
			{
				Boolean initialR2TValue;
				property.getValue().get(initialR2TValue);
				setInitialR2T(initialR2TValue);
			}
			else if (String::equal(property.getName().getString(), "ImmediateData"))
			{
				Boolean immediateDataValue;
				property.getValue().get(immediateDataValue);
				setImmediateData(immediateDataValue);
			}
			else if (String::equal(property.getName().getString(), "MaxOutstandingR2T"))
			{
				Uint32 maxOutstandingR2TValue;
				property.getValue().get(maxOutstandingR2TValue);
				setMaxOutstandingR2T(maxOutstandingR2TValue);
			}
			else if (String::equal(property.getName().getString(), "MaxUnsolicitedFirstDataBurstLength"))
			{
				Uint32 maxUnsolicitedFirstDataBurstLengthValue;
				property.getValue().get(maxUnsolicitedFirstDataBurstLengthValue);
				setMaxUnsolicitedFirstDataBurstLength(maxUnsolicitedFirstDataBurstLengthValue);
			}
			else if (String::equal(property.getName().getString(), "MaxDataBurstLength"))
			{
				Uint32 maxDataBurstLengthValue;
				property.getValue().get(maxDataBurstLengthValue);
				setMaxDataBurstLength(maxDataBurstLengthValue);
			}
			else if (String::equal(property.getName().getString(), "DataSequenceInOrder"))
			{
				Boolean dataSequenceInOrderValue;
				property.getValue().get(dataSequenceInOrderValue);
				setDataSequenceInOrder(dataSequenceInOrderValue);
			}
			else if (String::equal(property.getName().getString(), "DataPDUInOrder"))
			{
				Boolean dataPDUInOrderValue;
				property.getValue().get(dataPDUInOrderValue);
				setDataPDUInOrder(dataPDUInOrderValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorRecoveryLevel"))
			{
				Uint32 errorRecoveryLevelValue;
				property.getValue().get(errorRecoveryLevelValue);
				setErrorRecoveryLevel(errorRecoveryLevelValue);
			}
			else if (String::equal(property.getName().getString(), "MaxConnectionsPerSession"))
			{
				Uint32 maxConnectionsPerSessionValue;
				property.getValue().get(maxConnectionsPerSessionValue);
				setMaxConnectionsPerSession(maxConnectionsPerSessionValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultTimeToWait"))
			{
				Uint32 defaultTimeToWaitValue;
				property.getValue().get(defaultTimeToWaitValue);
				setDefaultTimeToWait(defaultTimeToWaitValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultTimeToRetain"))
			{
				Uint32 defaultTimeToRetainValue;
				property.getValue().get(defaultTimeToRetainValue);
				setDefaultTimeToRetain(defaultTimeToRetainValue);
			}
	}
	return true;
}

Uint32 UNIX_iSCSISession::invokeRequestStateChange(
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


Boolean UNIX_iSCSISession::initialize()
{
	return false;
}

Boolean UNIX_iSCSISession::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSISession");
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
	_sessionType = Uint16(0);
	_tSIH = Uint32(0);
	_endPointName = String ("");
	_currentConnections = Uint32(0);
	_initialR2T = Boolean(false);
	_immediateData = Boolean(false);
	_maxOutstandingR2T = Uint32(0);
	_maxUnsolicitedFirstDataBurstLength = Uint32(0);
	_maxDataBurstLength = Uint32(0);
	_dataSequenceInOrder = Boolean(false);
	_dataPDUInOrder = Boolean(false);
	_errorRecoveryLevel = Uint32(0);
	_maxConnectionsPerSession = Uint32(0);
	_defaultTimeToWait = Uint32(0);
	_defaultTimeToRetain = Uint32(0);
	
	return false;
}

Boolean UNIX_iSCSISession::finalize()
{
	return false;
}

Boolean UNIX_iSCSISession::loadByName(const String name)
{
	return false;
}

Boolean UNIX_iSCSISession::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_iSCSISession::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISession::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISession::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISession::validateInstance()
{
	return true;
}

