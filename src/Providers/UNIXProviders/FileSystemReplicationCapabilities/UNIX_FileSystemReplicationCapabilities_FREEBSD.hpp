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


UNIX_FileSystemReplicationCapabilities::UNIX_FileSystemReplicationCapabilities(void)
{
}

UNIX_FileSystemReplicationCapabilities::~UNIX_FileSystemReplicationCapabilities(void)
{
}

Boolean UNIX_FileSystemReplicationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSystemReplicationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileSystemReplicationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSystemReplicationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FileSystemReplicationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSystemReplicationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FileSystemReplicationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSystemReplicationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FileSystemReplicationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileSystemReplicationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FileSystemReplicationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSupportedReplicationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_REPLICATION_TYPE, getSupportedReplicationType());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getSupportedReplicationType() const
{
	return _supportedReplicationType;
}

void UNIX_FileSystemReplicationCapabilities::setSupportedReplicationType(Uint16 &value)
{
	_supportedReplicationType = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_FileSystemReplicationCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_FileSystemReplicationCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_FileSystemReplicationCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_FileSystemReplicationCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getInitialReplicationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_REPLICATION_STATE, getInitialReplicationState());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getInitialReplicationState() const
{
	return _initialReplicationState;
}

void UNIX_FileSystemReplicationCapabilities::setInitialReplicationState(Uint16 &value)
{
	_initialReplicationState = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSupportedOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_OPERATIONS, getSupportedOperations());
	return true;
}

Array<Uint16> UNIX_FileSystemReplicationCapabilities::getSupportedOperations() const
{
	return _supportedOperations;
}

void UNIX_FileSystemReplicationCapabilities::setSupportedOperations(Array<Uint16> &value)
{
	_supportedOperations = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getReplicaHostAccessibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICA_HOST_ACCESSIBILITY, getReplicaHostAccessibility());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getReplicaHostAccessibility() const
{
	return _replicaHostAccessibility;
}

void UNIX_FileSystemReplicationCapabilities::setReplicaHostAccessibility(Uint16 &value)
{
	_replicaHostAccessibility = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getHostAccessibleState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_ACCESSIBLE_STATE, getHostAccessibleState());
	return true;
}

Array<Uint16> UNIX_FileSystemReplicationCapabilities::getHostAccessibleState() const
{
	return _hostAccessibleState;
}

void UNIX_FileSystemReplicationCapabilities::setHostAccessibleState(Array<Uint16> &value)
{
	_hostAccessibleState = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSpaceLimitSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_SUPPORTED, getSpaceLimitSupported());
	return true;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSpaceLimitSupported() const
{
	return _spaceLimitSupported;
}

void UNIX_FileSystemReplicationCapabilities::setSpaceLimitSupported(Boolean &value)
{
	_spaceLimitSupported = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSpaceReservationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_RESERVATION_SUPPORTED, getSpaceReservationSupported());
	return true;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSpaceReservationSupported() const
{
	return _spaceReservationSupported;
}

void UNIX_FileSystemReplicationCapabilities::setSpaceReservationSupported(Boolean &value)
{
	_spaceReservationSupported = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getLocalMirrorSnapshotSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_MIRROR_SNAPSHOT_SUPPORTED, getLocalMirrorSnapshotSupported());
	return true;
}

Boolean UNIX_FileSystemReplicationCapabilities::getLocalMirrorSnapshotSupported() const
{
	return _localMirrorSnapshotSupported;
}

void UNIX_FileSystemReplicationCapabilities::setLocalMirrorSnapshotSupported(Boolean &value)
{
	_localMirrorSnapshotSupported = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getRemoteMirrorSnapshotSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_MIRROR_SNAPSHOT_SUPPORTED, getRemoteMirrorSnapshotSupported());
	return true;
}

Boolean UNIX_FileSystemReplicationCapabilities::getRemoteMirrorSnapshotSupported() const
{
	return _remoteMirrorSnapshotSupported;
}

void UNIX_FileSystemReplicationCapabilities::setRemoteMirrorSnapshotSupported(Boolean &value)
{
	_remoteMirrorSnapshotSupported = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getIncrementalDeltasSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCREMENTAL_DELTAS_SUPPORTED, getIncrementalDeltasSupported());
	return true;
}

Boolean UNIX_FileSystemReplicationCapabilities::getIncrementalDeltasSupported() const
{
	return _incrementalDeltasSupported;
}

void UNIX_FileSystemReplicationCapabilities::setIncrementalDeltasSupported(Boolean &value)
{
	_incrementalDeltasSupported = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getPersistentReplicasSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT_REPLICAS_SUPPORTED, getPersistentReplicasSupported());
	return true;
}

Boolean UNIX_FileSystemReplicationCapabilities::getPersistentReplicasSupported() const
{
	return _persistentReplicasSupported;
}

void UNIX_FileSystemReplicationCapabilities::setPersistentReplicasSupported(Boolean &value)
{
	_persistentReplicasSupported = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getBidirectionalConnectionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BIDIRECTIONAL_CONNECTIONS_SUPPORTED, getBidirectionalConnectionsSupported());
	return true;
}

Boolean UNIX_FileSystemReplicationCapabilities::getBidirectionalConnectionsSupported() const
{
	return _bidirectionalConnectionsSupported;
}

void UNIX_FileSystemReplicationCapabilities::setBidirectionalConnectionsSupported(Boolean &value)
{
	_bidirectionalConnectionsSupported = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getMaximumReplicasPerSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_REPLICAS_PER_SOURCE, getMaximumReplicasPerSource());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getMaximumReplicasPerSource() const
{
	return _maximumReplicasPerSource;
}

void UNIX_FileSystemReplicationCapabilities::setMaximumReplicasPerSource(Uint16 &value)
{
	_maximumReplicasPerSource = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getMaximumPortsPerConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PORTS_PER_CONNECTION, getMaximumPortsPerConnection());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getMaximumPortsPerConnection() const
{
	return _maximumPortsPerConnection;
}

void UNIX_FileSystemReplicationCapabilities::setMaximumPortsPerConnection(Uint16 &value)
{
	_maximumPortsPerConnection = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getMaximumConnectionsPerPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_CONNECTIONS_PER_PORT, getMaximumConnectionsPerPort());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getMaximumConnectionsPerPort() const
{
	return _maximumConnectionsPerPort;
}

void UNIX_FileSystemReplicationCapabilities::setMaximumConnectionsPerPort(Uint16 &value)
{
	_maximumConnectionsPerPort = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getMaximumPeerConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PEER_CONNECTIONS, getMaximumPeerConnections());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getMaximumPeerConnections() const
{
	return _maximumPeerConnections;
}

void UNIX_FileSystemReplicationCapabilities::setMaximumPeerConnections(Uint16 &value)
{
	_maximumPeerConnections = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getMaximumLocalReplicationDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_LOCAL_REPLICATION_DEPTH, getMaximumLocalReplicationDepth());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getMaximumLocalReplicationDepth() const
{
	return _maximumLocalReplicationDepth;
}

void UNIX_FileSystemReplicationCapabilities::setMaximumLocalReplicationDepth(Uint16 &value)
{
	_maximumLocalReplicationDepth = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getMaximumRemoteReplicationDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_REMOTE_REPLICATION_DEPTH, getMaximumRemoteReplicationDepth());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getMaximumRemoteReplicationDepth() const
{
	return _maximumRemoteReplicationDepth;
}

void UNIX_FileSystemReplicationCapabilities::setMaximumRemoteReplicationDepth(Uint16 &value)
{
	_maximumRemoteReplicationDepth = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getReplicationPriorityDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_PRIORITY_DEFAULT, getReplicationPriorityDefault());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getReplicationPriorityDefault() const
{
	return _replicationPriorityDefault;
}

void UNIX_FileSystemReplicationCapabilities::setReplicationPriorityDefault(Uint16 &value)
{
	_replicationPriorityDefault = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getLowSpaceWarningThresholdDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOW_SPACE_WARNING_THRESHOLD_DEFAULT, getLowSpaceWarningThresholdDefault());
	return true;
}

Uint8 UNIX_FileSystemReplicationCapabilities::getLowSpaceWarningThresholdDefault() const
{
	return _lowSpaceWarningThresholdDefault;
}

void UNIX_FileSystemReplicationCapabilities::setLowSpaceWarningThresholdDefault(Uint8 &value)
{
	_lowSpaceWarningThresholdDefault = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getSpaceLimitWarningThresholdDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD_DEFAULT, getSpaceLimitWarningThresholdDefault());
	return true;
}

Uint8 UNIX_FileSystemReplicationCapabilities::getSpaceLimitWarningThresholdDefault() const
{
	return _spaceLimitWarningThresholdDefault;
}

void UNIX_FileSystemReplicationCapabilities::setSpaceLimitWarningThresholdDefault(Uint8 &value)
{
	_spaceLimitWarningThresholdDefault = value;
}

Boolean UNIX_FileSystemReplicationCapabilities::getDeltaReplicaPoolAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_REPLICA_POOL_ACCESS, getDeltaReplicaPoolAccess());
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::getDeltaReplicaPoolAccess() const
{
	return _deltaReplicaPoolAccess;
}

void UNIX_FileSystemReplicationCapabilities::setDeltaReplicaPoolAccess(Uint16 &value)
{
	_deltaReplicaPoolAccess = value;
}


void UNIX_FileSystemReplicationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemReplicationCapabilities");
	_generation = Uint64(0);
	_supportedReplicationType = Uint16(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_initialReplicationState = Uint16(0);
	_supportedOperations.clear();
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
	_replicationPriorityDefault = Uint16(0);
	_lowSpaceWarningThresholdDefault = Uint8(0);
	_spaceLimitWarningThresholdDefault = Uint8(0);
	_deltaReplicaPoolAccess = Uint16(0);

}

Boolean UNIX_FileSystemReplicationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedReplicationType"))
			{
				Uint16 supportedReplicationTypeValue;
				property.getValue().get(supportedReplicationTypeValue);
				setSupportedReplicationType(supportedReplicationTypeValue);
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
			else if (String::equal(property.getName().getString(), "SupportedOperations"))
			{
				Array<Uint16> supportedOperationsValue;
				property.getValue().get(supportedOperationsValue);
				setSupportedOperations(supportedOperationsValue);
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
			else if (String::equal(property.getName().getString(), "DeltaReplicaPoolAccess"))
			{
				Uint16 deltaReplicaPoolAccessValue;
				property.getValue().get(deltaReplicaPoolAccessValue);
				setDeltaReplicaPoolAccess(deltaReplicaPoolAccessValue);
			}
	}
	return true;
}

Uint16 UNIX_FileSystemReplicationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_FileSystemReplicationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FileSystemReplicationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemReplicationCapabilities");
	_generation = Uint64(0);
	_supportedReplicationType = Uint16(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_initialReplicationState = Uint16(0);
	_supportedOperations.clear();
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
	_replicationPriorityDefault = Uint16(0);
	_lowSpaceWarningThresholdDefault = Uint8(0);
	_spaceLimitWarningThresholdDefault = Uint8(0);
	_deltaReplicaPoolAccess = Uint16(0);
	
	return false;
}

Boolean UNIX_FileSystemReplicationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FileSystemReplicationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FileSystemReplicationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemReplicationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemReplicationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemReplicationCapabilities::validateInstance()
{
	return true;
}

