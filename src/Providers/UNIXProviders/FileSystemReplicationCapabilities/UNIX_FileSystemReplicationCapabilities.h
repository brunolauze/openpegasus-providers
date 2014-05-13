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
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
This subclass defines the replication capabilities of a ReplicationService. Multiple instances of FileSystemReplicationCapabilities may be associated with a ReplicationService using ElementCapabilities. A provider should create one instance for each supported SynchronizationType.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_FileSystemReplicationCapabilities:
				SupportedReplicationType UInt16
				SupportedAsynchronousActions UInt16
				SupportedSynchronousActions UInt16
				InitialReplicationState UInt16
				SupportedOperations UInt16
				ReplicaHostAccessibility UInt16
				HostAccessibleState UInt16
				SpaceLimitSupported Boolean
				SpaceReservationSupported Boolean
				LocalMirrorSnapshotSupported Boolean
				RemoteMirrorSnapshotSupported Boolean
				IncrementalDeltasSupported Boolean
				PersistentReplicasSupported Boolean
				BidirectionalConnectionsSupported Boolean
				MaximumReplicasPerSource UInt16
				MaximumPortsPerConnection UInt16
				MaximumConnectionsPerPort UInt16
				MaximumPeerConnections UInt16
				MaximumLocalReplicationDepth UInt16
				MaximumRemoteReplicationDepth UInt16
				ReplicationPriorityDefault UInt16
				LowSpaceWarningThresholdDefault UInt8
				SpaceLimitWarningThresholdDefault UInt8
				DeltaReplicaPoolAccess UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_FileSystemReplicationCapabilities:


*/

#ifndef __UNIX_FILESYSTEMREPLICATIONCAPABILITIES_H
#define __UNIX_FILESYSTEMREPLICATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_FileSystemReplicationCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_REPLICATION_TYPE
#define PROPERTY_SUPPORTED_REPLICATION_TYPE \
					"SupportedReplicationType"
#endif

#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SupportedAsynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif

#ifndef PROPERTY_INITIAL_REPLICATION_STATE
#define PROPERTY_INITIAL_REPLICATION_STATE \
					"InitialReplicationState"
#endif

#ifndef PROPERTY_SUPPORTED_OPERATIONS
#define PROPERTY_SUPPORTED_OPERATIONS \
					"SupportedOperations"
#endif

#ifndef PROPERTY_REPLICA_HOST_ACCESSIBILITY
#define PROPERTY_REPLICA_HOST_ACCESSIBILITY \
					"ReplicaHostAccessibility"
#endif

#ifndef PROPERTY_HOST_ACCESSIBLE_STATE
#define PROPERTY_HOST_ACCESSIBLE_STATE \
					"HostAccessibleState"
#endif

#ifndef PROPERTY_SPACE_LIMIT_SUPPORTED
#define PROPERTY_SPACE_LIMIT_SUPPORTED \
					"SpaceLimitSupported"
#endif

#ifndef PROPERTY_SPACE_RESERVATION_SUPPORTED
#define PROPERTY_SPACE_RESERVATION_SUPPORTED \
					"SpaceReservationSupported"
#endif

#ifndef PROPERTY_LOCAL_MIRROR_SNAPSHOT_SUPPORTED
#define PROPERTY_LOCAL_MIRROR_SNAPSHOT_SUPPORTED \
					"LocalMirrorSnapshotSupported"
#endif

#ifndef PROPERTY_REMOTE_MIRROR_SNAPSHOT_SUPPORTED
#define PROPERTY_REMOTE_MIRROR_SNAPSHOT_SUPPORTED \
					"RemoteMirrorSnapshotSupported"
#endif

#ifndef PROPERTY_INCREMENTAL_DELTAS_SUPPORTED
#define PROPERTY_INCREMENTAL_DELTAS_SUPPORTED \
					"IncrementalDeltasSupported"
#endif

#ifndef PROPERTY_PERSISTENT_REPLICAS_SUPPORTED
#define PROPERTY_PERSISTENT_REPLICAS_SUPPORTED \
					"PersistentReplicasSupported"
#endif

#ifndef PROPERTY_BIDIRECTIONAL_CONNECTIONS_SUPPORTED
#define PROPERTY_BIDIRECTIONAL_CONNECTIONS_SUPPORTED \
					"BidirectionalConnectionsSupported"
#endif

#ifndef PROPERTY_MAXIMUM_REPLICAS_PER_SOURCE
#define PROPERTY_MAXIMUM_REPLICAS_PER_SOURCE \
					"MaximumReplicasPerSource"
#endif

#ifndef PROPERTY_MAXIMUM_PORTS_PER_CONNECTION
#define PROPERTY_MAXIMUM_PORTS_PER_CONNECTION \
					"MaximumPortsPerConnection"
#endif

#ifndef PROPERTY_MAXIMUM_CONNECTIONS_PER_PORT
#define PROPERTY_MAXIMUM_CONNECTIONS_PER_PORT \
					"MaximumConnectionsPerPort"
#endif

#ifndef PROPERTY_MAXIMUM_PEER_CONNECTIONS
#define PROPERTY_MAXIMUM_PEER_CONNECTIONS \
					"MaximumPeerConnections"
#endif

#ifndef PROPERTY_MAXIMUM_LOCAL_REPLICATION_DEPTH
#define PROPERTY_MAXIMUM_LOCAL_REPLICATION_DEPTH \
					"MaximumLocalReplicationDepth"
#endif

#ifndef PROPERTY_MAXIMUM_REMOTE_REPLICATION_DEPTH
#define PROPERTY_MAXIMUM_REMOTE_REPLICATION_DEPTH \
					"MaximumRemoteReplicationDepth"
#endif

#ifndef PROPERTY_REPLICATION_PRIORITY_DEFAULT
#define PROPERTY_REPLICATION_PRIORITY_DEFAULT \
					"ReplicationPriorityDefault"
#endif

#ifndef PROPERTY_LOW_SPACE_WARNING_THRESHOLD_DEFAULT
#define PROPERTY_LOW_SPACE_WARNING_THRESHOLD_DEFAULT \
					"LowSpaceWarningThresholdDefault"
#endif

#ifndef PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD_DEFAULT
#define PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD_DEFAULT \
					"SpaceLimitWarningThresholdDefault"
#endif

#ifndef PROPERTY_DELTA_REPLICA_POOL_ACCESS
#define PROPERTY_DELTA_REPLICA_POOL_ACCESS \
					"DeltaReplicaPoolAccess"
#endif



class UNIX_FileSystemReplicationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_FileSystemReplicationCapabilities();
	~UNIX_FileSystemReplicationCapabilities();

	virtual Boolean initialize();
	virtual Boolean load(int&);
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
	virtual Boolean getSupportedReplicationType(CIMProperty&) const;
	virtual Uint16 getSupportedReplicationType() const;
	virtual void setSupportedReplicationType(Uint16&);
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual void setSupportedAsynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual void setSupportedSynchronousActions(Array<Uint16>&);
	virtual Boolean getInitialReplicationState(CIMProperty&) const;
	virtual Uint16 getInitialReplicationState() const;
	virtual void setInitialReplicationState(Uint16&);
	virtual Boolean getSupportedOperations(CIMProperty&) const;
	virtual Array<Uint16> getSupportedOperations() const;
	virtual void setSupportedOperations(Array<Uint16>&);
	virtual Boolean getReplicaHostAccessibility(CIMProperty&) const;
	virtual Uint16 getReplicaHostAccessibility() const;
	virtual void setReplicaHostAccessibility(Uint16&);
	virtual Boolean getHostAccessibleState(CIMProperty&) const;
	virtual Array<Uint16> getHostAccessibleState() const;
	virtual void setHostAccessibleState(Array<Uint16>&);
	virtual Boolean getSpaceLimitSupported(CIMProperty&) const;
	virtual Boolean getSpaceLimitSupported() const;
	virtual void setSpaceLimitSupported(Boolean&);
	virtual Boolean getSpaceReservationSupported(CIMProperty&) const;
	virtual Boolean getSpaceReservationSupported() const;
	virtual void setSpaceReservationSupported(Boolean&);
	virtual Boolean getLocalMirrorSnapshotSupported(CIMProperty&) const;
	virtual Boolean getLocalMirrorSnapshotSupported() const;
	virtual void setLocalMirrorSnapshotSupported(Boolean&);
	virtual Boolean getRemoteMirrorSnapshotSupported(CIMProperty&) const;
	virtual Boolean getRemoteMirrorSnapshotSupported() const;
	virtual void setRemoteMirrorSnapshotSupported(Boolean&);
	virtual Boolean getIncrementalDeltasSupported(CIMProperty&) const;
	virtual Boolean getIncrementalDeltasSupported() const;
	virtual void setIncrementalDeltasSupported(Boolean&);
	virtual Boolean getPersistentReplicasSupported(CIMProperty&) const;
	virtual Boolean getPersistentReplicasSupported() const;
	virtual void setPersistentReplicasSupported(Boolean&);
	virtual Boolean getBidirectionalConnectionsSupported(CIMProperty&) const;
	virtual Boolean getBidirectionalConnectionsSupported() const;
	virtual void setBidirectionalConnectionsSupported(Boolean&);
	virtual Boolean getMaximumReplicasPerSource(CIMProperty&) const;
	virtual Uint16 getMaximumReplicasPerSource() const;
	virtual void setMaximumReplicasPerSource(Uint16&);
	virtual Boolean getMaximumPortsPerConnection(CIMProperty&) const;
	virtual Uint16 getMaximumPortsPerConnection() const;
	virtual void setMaximumPortsPerConnection(Uint16&);
	virtual Boolean getMaximumConnectionsPerPort(CIMProperty&) const;
	virtual Uint16 getMaximumConnectionsPerPort() const;
	virtual void setMaximumConnectionsPerPort(Uint16&);
	virtual Boolean getMaximumPeerConnections(CIMProperty&) const;
	virtual Uint16 getMaximumPeerConnections() const;
	virtual void setMaximumPeerConnections(Uint16&);
	virtual Boolean getMaximumLocalReplicationDepth(CIMProperty&) const;
	virtual Uint16 getMaximumLocalReplicationDepth() const;
	virtual void setMaximumLocalReplicationDepth(Uint16&);
	virtual Boolean getMaximumRemoteReplicationDepth(CIMProperty&) const;
	virtual Uint16 getMaximumRemoteReplicationDepth() const;
	virtual void setMaximumRemoteReplicationDepth(Uint16&);
	virtual Boolean getReplicationPriorityDefault(CIMProperty&) const;
	virtual Uint16 getReplicationPriorityDefault() const;
	virtual void setReplicationPriorityDefault(Uint16&);
	virtual Boolean getLowSpaceWarningThresholdDefault(CIMProperty&) const;
	virtual Uint8 getLowSpaceWarningThresholdDefault() const;
	virtual void setLowSpaceWarningThresholdDefault(Uint8&);
	virtual Boolean getSpaceLimitWarningThresholdDefault(CIMProperty&) const;
	virtual Uint8 getSpaceLimitWarningThresholdDefault() const;
	virtual void setSpaceLimitWarningThresholdDefault(Uint8&);
	virtual Boolean getDeltaReplicaPoolAccess(CIMProperty&) const;
	virtual Uint16 getDeltaReplicaPoolAccess() const;
	virtual void setDeltaReplicaPoolAccess(Uint16&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _supportedReplicationType;
	Array<Uint16> _supportedAsynchronousActions;
	Array<Uint16> _supportedSynchronousActions;
	Uint16 _initialReplicationState;
	Array<Uint16> _supportedOperations;
	Uint16 _replicaHostAccessibility;
	Array<Uint16> _hostAccessibleState;
	Boolean _spaceLimitSupported;
	Boolean _spaceReservationSupported;
	Boolean _localMirrorSnapshotSupported;
	Boolean _remoteMirrorSnapshotSupported;
	Boolean _incrementalDeltasSupported;
	Boolean _persistentReplicasSupported;
	Boolean _bidirectionalConnectionsSupported;
	Uint16 _maximumReplicasPerSource;
	Uint16 _maximumPortsPerConnection;
	Uint16 _maximumConnectionsPerPort;
	Uint16 _maximumPeerConnections;
	Uint16 _maximumLocalReplicationDepth;
	Uint16 _maximumRemoteReplicationDepth;
	Uint16 _replicationPriorityDefault;
	Uint8 _lowSpaceWarningThresholdDefault;
	Uint8 _spaceLimitWarningThresholdDefault;
	Uint16 _deltaReplicaPoolAccess;

#	include "UNIX_FileSystemReplicationCapabilitiesPrivate.h"


};

#endif /* UNIX_FILESYSTEMREPLICATIONCAPABILITIES */
