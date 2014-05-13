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


UNIX_StorageReplicationCapabilities::UNIX_StorageReplicationCapabilities(void)
{
}

UNIX_StorageReplicationCapabilities::~UNIX_StorageReplicationCapabilities(void)
{
}

Boolean UNIX_StorageReplicationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageReplicationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageReplicationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageReplicationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageReplicationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_StorageReplicationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageReplicationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageReplicationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_StorageReplicationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageReplicationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageReplicationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_StorageReplicationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageReplicationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageReplicationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_StorageReplicationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageReplicationCapabilities::getSupportedSynchronizationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONIZATION_TYPE, getSupportedSynchronizationType());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getSupportedSynchronizationType() const
{
	return _supportedSynchronizationType;
}

void UNIX_StorageReplicationCapabilities::setSupportedSynchronizationType(Uint16 &value)
{
	_supportedSynchronizationType = value;
}

Boolean UNIX_StorageReplicationCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_StorageReplicationCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_StorageReplicationCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_StorageReplicationCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}

Boolean UNIX_StorageReplicationCapabilities::getInitialReplicationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_REPLICATION_STATE, getInitialReplicationState());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getInitialReplicationState() const
{
	return _initialReplicationState;
}

void UNIX_StorageReplicationCapabilities::setInitialReplicationState(Uint16 &value)
{
	_initialReplicationState = value;
}

Boolean UNIX_StorageReplicationCapabilities::getSupportedSpecializedElements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SPECIALIZED_ELEMENTS, getSupportedSpecializedElements());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getSupportedSpecializedElements() const
{
	return _supportedSpecializedElements;
}

void UNIX_StorageReplicationCapabilities::setSupportedSpecializedElements(Array<Uint16> &value)
{
	_supportedSpecializedElements = value;
}

Boolean UNIX_StorageReplicationCapabilities::getSupportedModifyOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MODIFY_OPERATIONS, getSupportedModifyOperations());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getSupportedModifyOperations() const
{
	return _supportedModifyOperations;
}

void UNIX_StorageReplicationCapabilities::setSupportedModifyOperations(Array<Uint16> &value)
{
	_supportedModifyOperations = value;
}

Boolean UNIX_StorageReplicationCapabilities::getReplicaHostAccessibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICA_HOST_ACCESSIBILITY, getReplicaHostAccessibility());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getReplicaHostAccessibility() const
{
	return _replicaHostAccessibility;
}

void UNIX_StorageReplicationCapabilities::setReplicaHostAccessibility(Uint16 &value)
{
	_replicaHostAccessibility = value;
}

Boolean UNIX_StorageReplicationCapabilities::getHostAccessibleState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_ACCESSIBLE_STATE, getHostAccessibleState());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getHostAccessibleState() const
{
	return _hostAccessibleState;
}

void UNIX_StorageReplicationCapabilities::setHostAccessibleState(Array<Uint16> &value)
{
	_hostAccessibleState = value;
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceLimitSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_SUPPORTED, getSpaceLimitSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceLimitSupported() const
{
	return _spaceLimitSupported;
}

void UNIX_StorageReplicationCapabilities::setSpaceLimitSupported(Boolean &value)
{
	_spaceLimitSupported = value;
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceReservationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_RESERVATION_SUPPORTED, getSpaceReservationSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceReservationSupported() const
{
	return _spaceReservationSupported;
}

void UNIX_StorageReplicationCapabilities::setSpaceReservationSupported(Boolean &value)
{
	_spaceReservationSupported = value;
}

Boolean UNIX_StorageReplicationCapabilities::getLocalMirrorSnapshotSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_MIRROR_SNAPSHOT_SUPPORTED, getLocalMirrorSnapshotSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getLocalMirrorSnapshotSupported() const
{
	return _localMirrorSnapshotSupported;
}

void UNIX_StorageReplicationCapabilities::setLocalMirrorSnapshotSupported(Boolean &value)
{
	_localMirrorSnapshotSupported = value;
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteMirrorSnapshotSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_MIRROR_SNAPSHOT_SUPPORTED, getRemoteMirrorSnapshotSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteMirrorSnapshotSupported() const
{
	return _remoteMirrorSnapshotSupported;
}

void UNIX_StorageReplicationCapabilities::setRemoteMirrorSnapshotSupported(Boolean &value)
{
	_remoteMirrorSnapshotSupported = value;
}

Boolean UNIX_StorageReplicationCapabilities::getIncrementalDeltasSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCREMENTAL_DELTAS_SUPPORTED, getIncrementalDeltasSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getIncrementalDeltasSupported() const
{
	return _incrementalDeltasSupported;
}

void UNIX_StorageReplicationCapabilities::setIncrementalDeltasSupported(Boolean &value)
{
	_incrementalDeltasSupported = value;
}

Boolean UNIX_StorageReplicationCapabilities::getPersistentReplicasSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT_REPLICAS_SUPPORTED, getPersistentReplicasSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getPersistentReplicasSupported() const
{
	return _persistentReplicasSupported;
}

void UNIX_StorageReplicationCapabilities::setPersistentReplicasSupported(Boolean &value)
{
	_persistentReplicasSupported = value;
}

Boolean UNIX_StorageReplicationCapabilities::getBidirectionalConnectionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BIDIRECTIONAL_CONNECTIONS_SUPPORTED, getBidirectionalConnectionsSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getBidirectionalConnectionsSupported() const
{
	return _bidirectionalConnectionsSupported;
}

void UNIX_StorageReplicationCapabilities::setBidirectionalConnectionsSupported(Boolean &value)
{
	_bidirectionalConnectionsSupported = value;
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumReplicasPerSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_REPLICAS_PER_SOURCE, getMaximumReplicasPerSource());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumReplicasPerSource() const
{
	return _maximumReplicasPerSource;
}

void UNIX_StorageReplicationCapabilities::setMaximumReplicasPerSource(Uint16 &value)
{
	_maximumReplicasPerSource = value;
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumPortsPerConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PORTS_PER_CONNECTION, getMaximumPortsPerConnection());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumPortsPerConnection() const
{
	return _maximumPortsPerConnection;
}

void UNIX_StorageReplicationCapabilities::setMaximumPortsPerConnection(Uint16 &value)
{
	_maximumPortsPerConnection = value;
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumConnectionsPerPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_CONNECTIONS_PER_PORT, getMaximumConnectionsPerPort());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumConnectionsPerPort() const
{
	return _maximumConnectionsPerPort;
}

void UNIX_StorageReplicationCapabilities::setMaximumConnectionsPerPort(Uint16 &value)
{
	_maximumConnectionsPerPort = value;
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumPeerConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PEER_CONNECTIONS, getMaximumPeerConnections());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumPeerConnections() const
{
	return _maximumPeerConnections;
}

void UNIX_StorageReplicationCapabilities::setMaximumPeerConnections(Uint16 &value)
{
	_maximumPeerConnections = value;
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumLocalReplicationDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_LOCAL_REPLICATION_DEPTH, getMaximumLocalReplicationDepth());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumLocalReplicationDepth() const
{
	return _maximumLocalReplicationDepth;
}

void UNIX_StorageReplicationCapabilities::setMaximumLocalReplicationDepth(Uint16 &value)
{
	_maximumLocalReplicationDepth = value;
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumRemoteReplicationDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_REMOTE_REPLICATION_DEPTH, getMaximumRemoteReplicationDepth());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumRemoteReplicationDepth() const
{
	return _maximumRemoteReplicationDepth;
}

void UNIX_StorageReplicationCapabilities::setMaximumRemoteReplicationDepth(Uint16 &value)
{
	_maximumRemoteReplicationDepth = value;
}

Boolean UNIX_StorageReplicationCapabilities::getInitialSynchronizationDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_SYNCHRONIZATION_DEFAULT, getInitialSynchronizationDefault());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getInitialSynchronizationDefault() const
{
	return _initialSynchronizationDefault;
}

void UNIX_StorageReplicationCapabilities::setInitialSynchronizationDefault(Uint16 &value)
{
	_initialSynchronizationDefault = value;
}

Boolean UNIX_StorageReplicationCapabilities::getReplicationPriorityDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_PRIORITY_DEFAULT, getReplicationPriorityDefault());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getReplicationPriorityDefault() const
{
	return _replicationPriorityDefault;
}

void UNIX_StorageReplicationCapabilities::setReplicationPriorityDefault(Uint16 &value)
{
	_replicationPriorityDefault = value;
}

Boolean UNIX_StorageReplicationCapabilities::getLowSpaceWarningThresholdDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOW_SPACE_WARNING_THRESHOLD_DEFAULT, getLowSpaceWarningThresholdDefault());
	return true;
}

Uint8 UNIX_StorageReplicationCapabilities::getLowSpaceWarningThresholdDefault() const
{
	return _lowSpaceWarningThresholdDefault;
}

void UNIX_StorageReplicationCapabilities::setLowSpaceWarningThresholdDefault(Uint8 &value)
{
	_lowSpaceWarningThresholdDefault = value;
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceLimitWarningThresholdDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD_DEFAULT, getSpaceLimitWarningThresholdDefault());
	return true;
}

Uint8 UNIX_StorageReplicationCapabilities::getSpaceLimitWarningThresholdDefault() const
{
	return _spaceLimitWarningThresholdDefault;
}

void UNIX_StorageReplicationCapabilities::setSpaceLimitWarningThresholdDefault(Uint8 &value)
{
	_spaceLimitWarningThresholdDefault = value;
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteReplicationServicePointAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_REPLICATION_SERVICE_POINT_ACCESS, getRemoteReplicationServicePointAccess());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteReplicationServicePointAccess() const
{
	return _remoteReplicationServicePointAccess;
}

void UNIX_StorageReplicationCapabilities::setRemoteReplicationServicePointAccess(Uint16 &value)
{
	_remoteReplicationServicePointAccess = value;
}

Boolean UNIX_StorageReplicationCapabilities::getAlternateReplicationServicePointAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALTERNATE_REPLICATION_SERVICE_POINT_ACCESS, getAlternateReplicationServicePointAccess());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getAlternateReplicationServicePointAccess() const
{
	return _alternateReplicationServicePointAccess;
}

void UNIX_StorageReplicationCapabilities::setAlternateReplicationServicePointAccess(Uint16 &value)
{
	_alternateReplicationServicePointAccess = value;
}

Boolean UNIX_StorageReplicationCapabilities::getDeltaReplicaPoolAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_REPLICA_POOL_ACCESS, getDeltaReplicaPoolAccess());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getDeltaReplicaPoolAccess() const
{
	return _deltaReplicaPoolAccess;
}

void UNIX_StorageReplicationCapabilities::setDeltaReplicaPoolAccess(Uint16 &value)
{
	_deltaReplicaPoolAccess = value;
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteBufferElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_BUFFER_ELEMENT_TYPE, getRemoteBufferElementType());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteBufferElementType() const
{
	return _remoteBufferElementType;
}

void UNIX_StorageReplicationCapabilities::setRemoteBufferElementType(Uint16 &value)
{
	_remoteBufferElementType = value;
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteBufferHost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_BUFFER_HOST, getRemoteBufferHost());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteBufferHost() const
{
	return _remoteBufferHost;
}

void UNIX_StorageReplicationCapabilities::setRemoteBufferHost(Uint16 &value)
{
	_remoteBufferHost = value;
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteBufferLocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_BUFFER_LOCATION, getRemoteBufferLocation());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteBufferLocation() const
{
	return _remoteBufferLocation;
}

void UNIX_StorageReplicationCapabilities::setRemoteBufferLocation(Uint16 &value)
{
	_remoteBufferLocation = value;
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteBufferSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_BUFFER_SUPPORTED, getRemoteBufferSupported());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteBufferSupported() const
{
	return _remoteBufferSupported;
}

void UNIX_StorageReplicationCapabilities::setRemoteBufferSupported(Uint16 &value)
{
	_remoteBufferSupported = value;
}

Boolean UNIX_StorageReplicationCapabilities::getUseReplicationBufferDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLICATION_BUFFER_DEFAULT, getUseReplicationBufferDefault());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getUseReplicationBufferDefault() const
{
	return _useReplicationBufferDefault;
}

void UNIX_StorageReplicationCapabilities::setUseReplicationBufferDefault(Uint16 &value)
{
	_useReplicationBufferDefault = value;
}

Boolean UNIX_StorageReplicationCapabilities::getPeerConnectionProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_CONNECTION_PROTOCOL, getPeerConnectionProtocol());
	return true;
}

String UNIX_StorageReplicationCapabilities::getPeerConnectionProtocol() const
{
	return _peerConnectionProtocol;
}

void UNIX_StorageReplicationCapabilities::setPeerConnectionProtocol(String &value)
{
	_peerConnectionProtocol = value;
}


void UNIX_StorageReplicationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageReplicationCapabilities");
	_generation = Uint64(0);
	_supportedSynchronizationType = Uint16(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_initialReplicationState = Uint16(0);
	_supportedSpecializedElements.clear();
	_supportedModifyOperations.clear();
	_replicaHostAccessibility = Uint16(0);
	_hostAccessibleState.clear();
	_spaceLimitSupported = Boolean(false);
	_spaceReservationSupported = Boolean(false);
	_localMirrorSnapshotSupported = Boolean(false);
	_remoteMirrorSnapshotSupported = Boolean(false);
	_incrementalDeltasSupported = Boolean(false);
	_persistentReplicasSupported = Boolean(false);
	_bidirectionalConnectionsSupported = Boolean(false);
	_maximumReplicasPerSource = Uint16(0);
	_maximumPortsPerConnection = Uint16(0);
	_maximumConnectionsPerPort = Uint16(0);
	_maximumPeerConnections = Uint16(0);
	_maximumLocalReplicationDepth = Uint16(0);
	_maximumRemoteReplicationDepth = Uint16(0);
	_initialSynchronizationDefault = Uint16(0);
	_replicationPriorityDefault = Uint16(0);
	_lowSpaceWarningThresholdDefault = Uint8(0);
	_spaceLimitWarningThresholdDefault = Uint8(0);
	_remoteReplicationServicePointAccess = Uint16(0);
	_alternateReplicationServicePointAccess = Uint16(0);
	_deltaReplicaPoolAccess = Uint16(0);
	_remoteBufferElementType = Uint16(0);
	_remoteBufferHost = Uint16(0);
	_remoteBufferLocation = Uint16(0);
	_remoteBufferSupported = Uint16(0);
	_useReplicationBufferDefault = Uint16(0);
	_peerConnectionProtocol = String ("");

}

Boolean UNIX_StorageReplicationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedSynchronizationType"))
			{
				Uint16 supportedSynchronizationTypeValue;
				property.getValue().get(supportedSynchronizationTypeValue);
				setSupportedSynchronizationType(supportedSynchronizationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedAsynchronousActions"))
			{
				Array<Uint16> supportedAsynchronousActionsValue;
				property.getValue().get(supportedAsynchronousActionsValue);
				setSupportedAsynchronousActions(supportedAsynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedSynchronousActions"))
			{
				Array<Uint16> supportedSynchronousActionsValue;
				property.getValue().get(supportedSynchronousActionsValue);
				setSupportedSynchronousActions(supportedSynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "InitialReplicationState"))
			{
				Uint16 initialReplicationStateValue;
				property.getValue().get(initialReplicationStateValue);
				setInitialReplicationState(initialReplicationStateValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedSpecializedElements"))
			{
				Array<Uint16> supportedSpecializedElementsValue;
				property.getValue().get(supportedSpecializedElementsValue);
				setSupportedSpecializedElements(supportedSpecializedElementsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedModifyOperations"))
			{
				Array<Uint16> supportedModifyOperationsValue;
				property.getValue().get(supportedModifyOperationsValue);
				setSupportedModifyOperations(supportedModifyOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "ReplicaHostAccessibility"))
			{
				Uint16 replicaHostAccessibilityValue;
				property.getValue().get(replicaHostAccessibilityValue);
				setReplicaHostAccessibility(replicaHostAccessibilityValue);
			}
			else if (String::equal(property.getName().getString(), "HostAccessibleState"))
			{
				Array<Uint16> hostAccessibleStateValue;
				property.getValue().get(hostAccessibleStateValue);
				setHostAccessibleState(hostAccessibleStateValue);
			}
			else if (String::equal(property.getName().getString(), "SpaceLimitSupported"))
			{
				Boolean spaceLimitSupportedValue;
				property.getValue().get(spaceLimitSupportedValue);
				setSpaceLimitSupported(spaceLimitSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SpaceReservationSupported"))
			{
				Boolean spaceReservationSupportedValue;
				property.getValue().get(spaceReservationSupportedValue);
				setSpaceReservationSupported(spaceReservationSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "LocalMirrorSnapshotSupported"))
			{
				Boolean localMirrorSnapshotSupportedValue;
				property.getValue().get(localMirrorSnapshotSupportedValue);
				setLocalMirrorSnapshotSupported(localMirrorSnapshotSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteMirrorSnapshotSupported"))
			{
				Boolean remoteMirrorSnapshotSupportedValue;
				property.getValue().get(remoteMirrorSnapshotSupportedValue);
				setRemoteMirrorSnapshotSupported(remoteMirrorSnapshotSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "IncrementalDeltasSupported"))
			{
				Boolean incrementalDeltasSupportedValue;
				property.getValue().get(incrementalDeltasSupportedValue);
				setIncrementalDeltasSupported(incrementalDeltasSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PersistentReplicasSupported"))
			{
				Boolean persistentReplicasSupportedValue;
				property.getValue().get(persistentReplicasSupportedValue);
				setPersistentReplicasSupported(persistentReplicasSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "BidirectionalConnectionsSupported"))
			{
				Boolean bidirectionalConnectionsSupportedValue;
				property.getValue().get(bidirectionalConnectionsSupportedValue);
				setBidirectionalConnectionsSupported(bidirectionalConnectionsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumReplicasPerSource"))
			{
				Uint16 maximumReplicasPerSourceValue;
				property.getValue().get(maximumReplicasPerSourceValue);
				setMaximumReplicasPerSource(maximumReplicasPerSourceValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumPortsPerConnection"))
			{
				Uint16 maximumPortsPerConnectionValue;
				property.getValue().get(maximumPortsPerConnectionValue);
				setMaximumPortsPerConnection(maximumPortsPerConnectionValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumConnectionsPerPort"))
			{
				Uint16 maximumConnectionsPerPortValue;
				property.getValue().get(maximumConnectionsPerPortValue);
				setMaximumConnectionsPerPort(maximumConnectionsPerPortValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumPeerConnections"))
			{
				Uint16 maximumPeerConnectionsValue;
				property.getValue().get(maximumPeerConnectionsValue);
				setMaximumPeerConnections(maximumPeerConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumLocalReplicationDepth"))
			{
				Uint16 maximumLocalReplicationDepthValue;
				property.getValue().get(maximumLocalReplicationDepthValue);
				setMaximumLocalReplicationDepth(maximumLocalReplicationDepthValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumRemoteReplicationDepth"))
			{
				Uint16 maximumRemoteReplicationDepthValue;
				property.getValue().get(maximumRemoteReplicationDepthValue);
				setMaximumRemoteReplicationDepth(maximumRemoteReplicationDepthValue);
			}
			else if (String::equal(property.getName().getString(), "InitialSynchronizationDefault"))
			{
				Uint16 initialSynchronizationDefaultValue;
				property.getValue().get(initialSynchronizationDefaultValue);
				setInitialSynchronizationDefault(initialSynchronizationDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "ReplicationPriorityDefault"))
			{
				Uint16 replicationPriorityDefaultValue;
				property.getValue().get(replicationPriorityDefaultValue);
				setReplicationPriorityDefault(replicationPriorityDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "LowSpaceWarningThresholdDefault"))
			{
				Uint8 lowSpaceWarningThresholdDefaultValue;
				property.getValue().get(lowSpaceWarningThresholdDefaultValue);
				setLowSpaceWarningThresholdDefault(lowSpaceWarningThresholdDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "SpaceLimitWarningThresholdDefault"))
			{
				Uint8 spaceLimitWarningThresholdDefaultValue;
				property.getValue().get(spaceLimitWarningThresholdDefaultValue);
				setSpaceLimitWarningThresholdDefault(spaceLimitWarningThresholdDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteReplicationServicePointAccess"))
			{
				Uint16 remoteReplicationServicePointAccessValue;
				property.getValue().get(remoteReplicationServicePointAccessValue);
				setRemoteReplicationServicePointAccess(remoteReplicationServicePointAccessValue);
			}
			else if (String::equal(property.getName().getString(), "AlternateReplicationServicePointAccess"))
			{
				Uint16 alternateReplicationServicePointAccessValue;
				property.getValue().get(alternateReplicationServicePointAccessValue);
				setAlternateReplicationServicePointAccess(alternateReplicationServicePointAccessValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaReplicaPoolAccess"))
			{
				Uint16 deltaReplicaPoolAccessValue;
				property.getValue().get(deltaReplicaPoolAccessValue);
				setDeltaReplicaPoolAccess(deltaReplicaPoolAccessValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteBufferElementType"))
			{
				Uint16 remoteBufferElementTypeValue;
				property.getValue().get(remoteBufferElementTypeValue);
				setRemoteBufferElementType(remoteBufferElementTypeValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteBufferHost"))
			{
				Uint16 remoteBufferHostValue;
				property.getValue().get(remoteBufferHostValue);
				setRemoteBufferHost(remoteBufferHostValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteBufferLocation"))
			{
				Uint16 remoteBufferLocationValue;
				property.getValue().get(remoteBufferLocationValue);
				setRemoteBufferLocation(remoteBufferLocationValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteBufferSupported"))
			{
				Uint16 remoteBufferSupportedValue;
				property.getValue().get(remoteBufferSupportedValue);
				setRemoteBufferSupported(remoteBufferSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "UseReplicationBufferDefault"))
			{
				Uint16 useReplicationBufferDefaultValue;
				property.getValue().get(useReplicationBufferDefaultValue);
				setUseReplicationBufferDefault(useReplicationBufferDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "PeerConnectionProtocol"))
			{
				String peerConnectionProtocolValue;
				property.getValue().get(peerConnectionProtocolValue);
				setPeerConnectionProtocol(peerConnectionProtocolValue);
			}
	}
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageReplicationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageReplicationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageReplicationCapabilities");
	_generation = Uint64(0);
	_supportedSynchronizationType = Uint16(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_initialReplicationState = Uint16(0);
	_supportedSpecializedElements.clear();
	_supportedModifyOperations.clear();
	_replicaHostAccessibility = Uint16(0);
	_hostAccessibleState.clear();
	_spaceLimitSupported = Boolean(false);
	_spaceReservationSupported = Boolean(false);
	_localMirrorSnapshotSupported = Boolean(false);
	_remoteMirrorSnapshotSupported = Boolean(false);
	_incrementalDeltasSupported = Boolean(false);
	_persistentReplicasSupported = Boolean(false);
	_bidirectionalConnectionsSupported = Boolean(false);
	_maximumReplicasPerSource = Uint16(0);
	_maximumPortsPerConnection = Uint16(0);
	_maximumConnectionsPerPort = Uint16(0);
	_maximumPeerConnections = Uint16(0);
	_maximumLocalReplicationDepth = Uint16(0);
	_maximumRemoteReplicationDepth = Uint16(0);
	_initialSynchronizationDefault = Uint16(0);
	_replicationPriorityDefault = Uint16(0);
	_lowSpaceWarningThresholdDefault = Uint8(0);
	_spaceLimitWarningThresholdDefault = Uint8(0);
	_remoteReplicationServicePointAccess = Uint16(0);
	_alternateReplicationServicePointAccess = Uint16(0);
	_deltaReplicaPoolAccess = Uint16(0);
	_remoteBufferElementType = Uint16(0);
	_remoteBufferHost = Uint16(0);
	_remoteBufferLocation = Uint16(0);
	_remoteBufferSupported = Uint16(0);
	_useReplicationBufferDefault = Uint16(0);
	_peerConnectionProtocol = String ("");
	
	return false;
}

Boolean UNIX_StorageReplicationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_StorageReplicationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageReplicationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageReplicationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageReplicationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageReplicationCapabilities::validateInstance()
{
	return true;
}

