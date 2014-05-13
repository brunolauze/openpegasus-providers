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


UNIX_MPLSTunnel::UNIX_MPLSTunnel(void)
{
}

UNIX_MPLSTunnel::~UNIX_MPLSTunnel(void)
{
}

Boolean UNIX_MPLSTunnel::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSTunnel::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSTunnel::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSTunnel::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSTunnel::getCaption() const
{
	return _caption;
}

void UNIX_MPLSTunnel::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSTunnel::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSTunnel::getDescription() const
{
	return _description;
}

void UNIX_MPLSTunnel::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSTunnel::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSTunnel::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSTunnel::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSTunnel::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSTunnel::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSTunnel::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSTunnel::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MPLSTunnel::getInstallDate() const
{
	return _installDate;
}

void UNIX_MPLSTunnel::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_MPLSTunnel::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MPLSTunnel::getName() const
{
	return _name;
}

void UNIX_MPLSTunnel::setName(String &value)
{
	_name = value;
}

Boolean UNIX_MPLSTunnel::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MPLSTunnel::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_MPLSTunnel::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_MPLSTunnel::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MPLSTunnel::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_MPLSTunnel::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_MPLSTunnel::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MPLSTunnel::getStatus() const
{
	return _status;
}

void UNIX_MPLSTunnel::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_MPLSTunnel::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MPLSTunnel::getHealthState() const
{
	return _healthState;
}

void UNIX_MPLSTunnel::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_MPLSTunnel::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MPLSTunnel::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_MPLSTunnel::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_MPLSTunnel::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MPLSTunnel::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_MPLSTunnel::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_MPLSTunnel::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MPLSTunnel::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_MPLSTunnel::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_MPLSTunnel::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MPLSTunnel::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_MPLSTunnel::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_MPLSTunnel::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_MPLSTunnel::getEnabledState() const
{
	return _enabledState;
}

void UNIX_MPLSTunnel::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_MPLSTunnel::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_MPLSTunnel::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_MPLSTunnel::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_MPLSTunnel::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_MPLSTunnel::getRequestedState() const
{
	return _requestedState;
}

void UNIX_MPLSTunnel::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_MPLSTunnel::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_MPLSTunnel::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_MPLSTunnel::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_MPLSTunnel::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_MPLSTunnel::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_MPLSTunnel::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_MPLSTunnel::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_MPLSTunnel::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_MPLSTunnel::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_MPLSTunnel::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_MPLSTunnel::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_MPLSTunnel::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_MPLSTunnel::getEstablished(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTABLISHED, getEstablished());
	return true;
}

Boolean UNIX_MPLSTunnel::getEstablished() const
{
	return _established;
}

void UNIX_MPLSTunnel::setEstablished(Boolean &value)
{
	_established = value;
}

Boolean UNIX_MPLSTunnel::getIsResilient(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_RESILIENT, getIsResilient());
	return true;
}

Boolean UNIX_MPLSTunnel::getIsResilient() const
{
	return _isResilient;
}

void UNIX_MPLSTunnel::setIsResilient(Boolean &value)
{
	_isResilient = value;
}

Boolean UNIX_MPLSTunnel::getBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH, getBandwidth());
	return true;
}

Uint32 UNIX_MPLSTunnel::getBandwidth() const
{
	return _bandwidth;
}

void UNIX_MPLSTunnel::setBandwidth(Uint32 &value)
{
	_bandwidth = value;
}

Boolean UNIX_MPLSTunnel::getReservedBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVED_BANDWIDTH, getReservedBandwidth());
	return true;
}

Uint32 UNIX_MPLSTunnel::getReservedBandwidth() const
{
	return _reservedBandwidth;
}

void UNIX_MPLSTunnel::setReservedBandwidth(Uint32 &value)
{
	_reservedBandwidth = value;
}

Boolean UNIX_MPLSTunnel::getActiveBandwidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_BANDWIDTH, getActiveBandwidth());
	return true;
}

Uint32 UNIX_MPLSTunnel::getActiveBandwidth() const
{
	return _activeBandwidth;
}

void UNIX_MPLSTunnel::setActiveBandwidth(Uint32 &value)
{
	_activeBandwidth = value;
}

Boolean UNIX_MPLSTunnel::getReoptimizationFreq(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REOPTIMIZATION_FREQ, getReoptimizationFreq());
	return true;
}

Uint32 UNIX_MPLSTunnel::getReoptimizationFreq() const
{
	return _reoptimizationFreq;
}

void UNIX_MPLSTunnel::setReoptimizationFreq(Uint32 &value)
{
	_reoptimizationFreq = value;
}

Boolean UNIX_MPLSTunnel::getLockdown(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCKDOWN, getLockdown());
	return true;
}

Boolean UNIX_MPLSTunnel::getLockdown() const
{
	return _lockdown;
}

void UNIX_MPLSTunnel::setLockdown(Boolean &value)
{
	_lockdown = value;
}

Boolean UNIX_MPLSTunnel::getExcludeAllAffinity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCLUDE_ALL_AFFINITY, getExcludeAllAffinity());
	return true;
}

Uint32 UNIX_MPLSTunnel::getExcludeAllAffinity() const
{
	return _excludeAllAffinity;
}

void UNIX_MPLSTunnel::setExcludeAllAffinity(Uint32 &value)
{
	_excludeAllAffinity = value;
}

Boolean UNIX_MPLSTunnel::getIncludeAllAffinity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_ALL_AFFINITY, getIncludeAllAffinity());
	return true;
}

Uint32 UNIX_MPLSTunnel::getIncludeAllAffinity() const
{
	return _includeAllAffinity;
}

void UNIX_MPLSTunnel::setIncludeAllAffinity(Uint32 &value)
{
	_includeAllAffinity = value;
}

Boolean UNIX_MPLSTunnel::getIncludeAnyAffinity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_ANY_AFFINITY, getIncludeAnyAffinity());
	return true;
}

Uint32 UNIX_MPLSTunnel::getIncludeAnyAffinity() const
{
	return _includeAnyAffinity;
}

void UNIX_MPLSTunnel::setIncludeAnyAffinity(Uint32 &value)
{
	_includeAnyAffinity = value;
}

Boolean UNIX_MPLSTunnel::getHoldingPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLDING_PRIORITY, getHoldingPriority());
	return true;
}

Uint8 UNIX_MPLSTunnel::getHoldingPriority() const
{
	return _holdingPriority;
}

void UNIX_MPLSTunnel::setHoldingPriority(Uint8 &value)
{
	_holdingPriority = value;
}

Boolean UNIX_MPLSTunnel::getSetupPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETUP_PRIORITY, getSetupPriority());
	return true;
}

Uint8 UNIX_MPLSTunnel::getSetupPriority() const
{
	return _setupPriority;
}

void UNIX_MPLSTunnel::setSetupPriority(Uint8 &value)
{
	_setupPriority = value;
}

Boolean UNIX_MPLSTunnel::getIsPersistent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PERSISTENT, getIsPersistent());
	return true;
}

Boolean UNIX_MPLSTunnel::getIsPersistent() const
{
	return _isPersistent;
}

void UNIX_MPLSTunnel::setIsPersistent(Boolean &value)
{
	_isPersistent = value;
}

Boolean UNIX_MPLSTunnel::getIsPinned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PINNED, getIsPinned());
	return true;
}

Boolean UNIX_MPLSTunnel::getIsPinned() const
{
	return _isPinned;
}

void UNIX_MPLSTunnel::setIsPinned(Boolean &value)
{
	_isPinned = value;
}

Boolean UNIX_MPLSTunnel::getLocalProtectionAvailable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PROTECTION_AVAILABLE, getLocalProtectionAvailable());
	return true;
}

Boolean UNIX_MPLSTunnel::getLocalProtectionAvailable() const
{
	return _localProtectionAvailable;
}

void UNIX_MPLSTunnel::setLocalProtectionAvailable(Boolean &value)
{
	_localProtectionAvailable = value;
}

Boolean UNIX_MPLSTunnel::getIsAdaptive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ADAPTIVE, getIsAdaptive());
	return true;
}

Boolean UNIX_MPLSTunnel::getIsAdaptive() const
{
	return _isAdaptive;
}

void UNIX_MPLSTunnel::setIsAdaptive(Boolean &value)
{
	_isAdaptive = value;
}

Boolean UNIX_MPLSTunnel::getIsDynamicallyRouted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DYNAMICALLY_ROUTED, getIsDynamicallyRouted());
	return true;
}

Boolean UNIX_MPLSTunnel::getIsDynamicallyRouted() const
{
	return _isDynamicallyRouted;
}

void UNIX_MPLSTunnel::setIsDynamicallyRouted(Boolean &value)
{
	_isDynamicallyRouted = value;
}

Boolean UNIX_MPLSTunnel::getIngressMayReroute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INGRESS_MAY_REROUTE, getIngressMayReroute());
	return true;
}

Boolean UNIX_MPLSTunnel::getIngressMayReroute() const
{
	return _ingressMayReroute;
}

void UNIX_MPLSTunnel::setIngressMayReroute(Boolean &value)
{
	_ingressMayReroute = value;
}

Boolean UNIX_MPLSTunnel::getIngressLSRId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INGRESS_L_S_R_ID, getIngressLSRId());
	return true;
}

Uint32 UNIX_MPLSTunnel::getIngressLSRId() const
{
	return _ingressLSRId;
}

void UNIX_MPLSTunnel::setIngressLSRId(Uint32 &value)
{
	_ingressLSRId = value;
}

Boolean UNIX_MPLSTunnel::getEgressLSRId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EGRESS_L_S_R_ID, getEgressLSRId());
	return true;
}

Uint32 UNIX_MPLSTunnel::getEgressLSRId() const
{
	return _egressLSRId;
}

void UNIX_MPLSTunnel::setEgressLSRId(Uint32 &value)
{
	_egressLSRId = value;
}

Boolean UNIX_MPLSTunnel::getTunnelSignalingProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_SIGNALING_PROTOCOL, getTunnelSignalingProtocol());
	return true;
}

Uint8 UNIX_MPLSTunnel::getTunnelSignalingProtocol() const
{
	return _tunnelSignalingProtocol;
}

void UNIX_MPLSTunnel::setTunnelSignalingProtocol(Uint8 &value)
{
	_tunnelSignalingProtocol = value;
}

Boolean UNIX_MPLSTunnel::getTunnelManagementOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_MANAGEMENT_OWNER, getTunnelManagementOwner());
	return true;
}

Uint8 UNIX_MPLSTunnel::getTunnelManagementOwner() const
{
	return _tunnelManagementOwner;
}

void UNIX_MPLSTunnel::setTunnelManagementOwner(Uint8 &value)
{
	_tunnelManagementOwner = value;
}

Boolean UNIX_MPLSTunnel::getTunnelInstancePriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_INSTANCE_PRIORITY, getTunnelInstancePriority());
	return true;
}

Uint32 UNIX_MPLSTunnel::getTunnelInstancePriority() const
{
	return _tunnelInstancePriority;
}

void UNIX_MPLSTunnel::setTunnelInstancePriority(Uint32 &value)
{
	_tunnelInstancePriority = value;
}

Boolean UNIX_MPLSTunnel::getTunnelRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TUNNEL_ROLE, getTunnelRole());
	return true;
}

Uint16 UNIX_MPLSTunnel::getTunnelRole() const
{
	return _tunnelRole;
}

void UNIX_MPLSTunnel::setTunnelRole(Uint16 &value)
{
	_tunnelRole = value;
}


void UNIX_MPLSTunnel::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSTunnel");
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
	_established = Boolean(false);
	_isResilient = Boolean(false);
	_bandwidth = Uint32(0);
	_reservedBandwidth = Uint32(0);
	_activeBandwidth = Uint32(0);
	_reoptimizationFreq = Uint32(0);
	_lockdown = Boolean(false);
	_excludeAllAffinity = Uint32(0);
	_includeAllAffinity = Uint32(0);
	_includeAnyAffinity = Uint32(0);
	_holdingPriority = Uint8(0);
	_setupPriority = Uint8(0);
	_isPersistent = Boolean(false);
	_isPinned = Boolean(false);
	_localProtectionAvailable = Boolean(false);
	_isAdaptive = Boolean(false);
	_isDynamicallyRouted = Boolean(false);
	_ingressMayReroute = Boolean(false);
	_ingressLSRId = Uint32(0);
	_egressLSRId = Uint32(0);
	_tunnelSignalingProtocol = Uint8(0);
	_tunnelManagementOwner = Uint8(0);
	_tunnelInstancePriority = Uint32(0);
	_tunnelRole = Uint16(0);

}

Boolean UNIX_MPLSTunnel::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Established"))
			{
				Boolean establishedValue;
				property.getValue().get(establishedValue);
				setEstablished(establishedValue);
			}
			else if (String::equal(property.getName().getString(), "IsResilient"))
			{
				Boolean isResilientValue;
				property.getValue().get(isResilientValue);
				setIsResilient(isResilientValue);
			}
			else if (String::equal(property.getName().getString(), "Bandwidth"))
			{
				Uint32 bandwidthValue;
				property.getValue().get(bandwidthValue);
				setBandwidth(bandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "ReservedBandwidth"))
			{
				Uint32 reservedBandwidthValue;
				property.getValue().get(reservedBandwidthValue);
				setReservedBandwidth(reservedBandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "ActiveBandwidth"))
			{
				Uint32 activeBandwidthValue;
				property.getValue().get(activeBandwidthValue);
				setActiveBandwidth(activeBandwidthValue);
			}
			else if (String::equal(property.getName().getString(), "ReoptimizationFreq"))
			{
				Uint32 reoptimizationFreqValue;
				property.getValue().get(reoptimizationFreqValue);
				setReoptimizationFreq(reoptimizationFreqValue);
			}
			else if (String::equal(property.getName().getString(), "Lockdown"))
			{
				Boolean lockdownValue;
				property.getValue().get(lockdownValue);
				setLockdown(lockdownValue);
			}
			else if (String::equal(property.getName().getString(), "ExcludeAllAffinity"))
			{
				Uint32 excludeAllAffinityValue;
				property.getValue().get(excludeAllAffinityValue);
				setExcludeAllAffinity(excludeAllAffinityValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAllAffinity"))
			{
				Uint32 includeAllAffinityValue;
				property.getValue().get(includeAllAffinityValue);
				setIncludeAllAffinity(includeAllAffinityValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeAnyAffinity"))
			{
				Uint32 includeAnyAffinityValue;
				property.getValue().get(includeAnyAffinityValue);
				setIncludeAnyAffinity(includeAnyAffinityValue);
			}
			else if (String::equal(property.getName().getString(), "HoldingPriority"))
			{
				Uint8 holdingPriorityValue;
				property.getValue().get(holdingPriorityValue);
				setHoldingPriority(holdingPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "SetupPriority"))
			{
				Uint8 setupPriorityValue;
				property.getValue().get(setupPriorityValue);
				setSetupPriority(setupPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "IsPersistent"))
			{
				Boolean isPersistentValue;
				property.getValue().get(isPersistentValue);
				setIsPersistent(isPersistentValue);
			}
			else if (String::equal(property.getName().getString(), "IsPinned"))
			{
				Boolean isPinnedValue;
				property.getValue().get(isPinnedValue);
				setIsPinned(isPinnedValue);
			}
			else if (String::equal(property.getName().getString(), "LocalProtectionAvailable"))
			{
				Boolean localProtectionAvailableValue;
				property.getValue().get(localProtectionAvailableValue);
				setLocalProtectionAvailable(localProtectionAvailableValue);
			}
			else if (String::equal(property.getName().getString(), "IsAdaptive"))
			{
				Boolean isAdaptiveValue;
				property.getValue().get(isAdaptiveValue);
				setIsAdaptive(isAdaptiveValue);
			}
			else if (String::equal(property.getName().getString(), "IsDynamicallyRouted"))
			{
				Boolean isDynamicallyRoutedValue;
				property.getValue().get(isDynamicallyRoutedValue);
				setIsDynamicallyRouted(isDynamicallyRoutedValue);
			}
			else if (String::equal(property.getName().getString(), "IngressMayReroute"))
			{
				Boolean ingressMayRerouteValue;
				property.getValue().get(ingressMayRerouteValue);
				setIngressMayReroute(ingressMayRerouteValue);
			}
			else if (String::equal(property.getName().getString(), "IngressLSRId"))
			{
				Uint32 ingressLSRIdValue;
				property.getValue().get(ingressLSRIdValue);
				setIngressLSRId(ingressLSRIdValue);
			}
			else if (String::equal(property.getName().getString(), "EgressLSRId"))
			{
				Uint32 egressLSRIdValue;
				property.getValue().get(egressLSRIdValue);
				setEgressLSRId(egressLSRIdValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelSignalingProtocol"))
			{
				Uint8 tunnelSignalingProtocolValue;
				property.getValue().get(tunnelSignalingProtocolValue);
				setTunnelSignalingProtocol(tunnelSignalingProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelManagementOwner"))
			{
				Uint8 tunnelManagementOwnerValue;
				property.getValue().get(tunnelManagementOwnerValue);
				setTunnelManagementOwner(tunnelManagementOwnerValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelInstancePriority"))
			{
				Uint32 tunnelInstancePriorityValue;
				property.getValue().get(tunnelInstancePriorityValue);
				setTunnelInstancePriority(tunnelInstancePriorityValue);
			}
			else if (String::equal(property.getName().getString(), "TunnelRole"))
			{
				Uint16 tunnelRoleValue;
				property.getValue().get(tunnelRoleValue);
				setTunnelRole(tunnelRoleValue);
			}
	}
	return true;
}

Uint32 UNIX_MPLSTunnel::invokeRequestStateChange(
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


Boolean UNIX_MPLSTunnel::initialize()
{
	return false;
}

Boolean UNIX_MPLSTunnel::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSTunnel");
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
	_established = Boolean(false);
	_isResilient = Boolean(false);
	_bandwidth = Uint32(0);
	_reservedBandwidth = Uint32(0);
	_activeBandwidth = Uint32(0);
	_reoptimizationFreq = Uint32(0);
	_lockdown = Boolean(false);
	_excludeAllAffinity = Uint32(0);
	_includeAllAffinity = Uint32(0);
	_includeAnyAffinity = Uint32(0);
	_holdingPriority = Uint8(0);
	_setupPriority = Uint8(0);
	_isPersistent = Boolean(false);
	_isPinned = Boolean(false);
	_localProtectionAvailable = Boolean(false);
	_isAdaptive = Boolean(false);
	_isDynamicallyRouted = Boolean(false);
	_ingressMayReroute = Boolean(false);
	_ingressLSRId = Uint32(0);
	_egressLSRId = Uint32(0);
	_tunnelSignalingProtocol = Uint8(0);
	_tunnelManagementOwner = Uint8(0);
	_tunnelInstancePriority = Uint32(0);
	_tunnelRole = Uint16(0);
	
	return false;
}

Boolean UNIX_MPLSTunnel::finalize()
{
	return false;
}

Boolean UNIX_MPLSTunnel::loadByName(const String name)
{
	return false;
}

Boolean UNIX_MPLSTunnel::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSTunnel::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSTunnel::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSTunnel::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSTunnel::validateInstance()
{
	return true;
}

