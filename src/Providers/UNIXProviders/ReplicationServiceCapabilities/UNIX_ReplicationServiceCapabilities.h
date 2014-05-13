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
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
A subclass of Capabilities that defines the Capabilities of a ReplicationService. An instance of ReplicationServiceCapabilities is associated with a ReplicationService using ElementCapabilities.
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

			UNIX_ReplicationServiceCapabilities:
				SupportedReplicationTypes UInt16
				SupportedStorageObjects UInt16
				SupportedAsynchronousActions UInt16
				SupportedSynchronousActions UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_ReplicationServiceCapabilities:
				ConvertSyncTypeToReplicationType UInt32
				ConvertReplicationTypeToSyncType UInt32
				GetSupportedCopyStates UInt32
				GetSupportedGroupCopyStates UInt32
				GetSupportedWaitForCopyStates UInt32
				GetSupportedFeatures UInt32
				GetSupportedGroupFeatures UInt32
				GetSupportedConsistency UInt32
				GetSupportedOperations UInt32
				GetSupportedGroupOperations UInt32
				GetSupportedListOperations UInt32
				GetSupportedSettingsDefineStateOperations UInt32
				GetSupportedThinProvisioningFeatures UInt32
				GetSupportedMaximum UInt32
				GetDefaultConsistency UInt32
				GetDefaultGroupPersistency UInt32
				GetSupportedReplicationSettingData UInt32
				GetDefaultReplicationSettingData UInt32
				GetSupportedConnectionFeatures UInt32
				GetSynchronizationSupported UInt32
				GetSupportedStorageCompressionFeatures UInt32
				GetSupportedTokenizedReplicationType UInt32


*/

#ifndef __UNIX_REPLICATIONSERVICECAPABILITIES_H
#define __UNIX_REPLICATIONSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_ReplicationServiceCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_REPLICATION_TYPES
#define PROPERTY_SUPPORTED_REPLICATION_TYPES \
					"SupportedReplicationTypes"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_OBJECTS
#define PROPERTY_SUPPORTED_STORAGE_OBJECTS \
					"SupportedStorageObjects"
#endif

#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SupportedAsynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif



class UNIX_ReplicationServiceCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_ReplicationServiceCapabilities();
	~UNIX_ReplicationServiceCapabilities();

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
	virtual Boolean getSupportedReplicationTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedReplicationTypes() const;
	virtual void setSupportedReplicationTypes(Array<Uint16>&);
	virtual Boolean getSupportedStorageObjects(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageObjects() const;
	virtual void setSupportedStorageObjects(Array<Uint16>&);
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual void setSupportedAsynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual void setSupportedSynchronousActions(Array<Uint16>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);

	virtual Uint32 invokeConvertSyncTypeToReplicationType(
		Uint16 &inSyncType,
		Uint16 &inMode,
		Uint16 &inLocalOrRemote,
		Uint16 &inSupportedReplicationTypes
	);

	virtual Uint32 invokeConvertReplicationTypeToSyncType(
		Uint16 &inReplicationType,
		Uint16 &inSyncType,
		Uint16 &inMode,
		Uint16 &inLocalOrRemote
	);

	virtual Uint32 invokeGetSupportedCopyStates(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedCopyStates,
		Array<Boolean> &inHostAccessible,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedGroupCopyStates(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedCopyStates,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedWaitForCopyStates(
		Uint16 &inReplicationType,
		Uint16 &inMethodName,
		Array<Uint16> &inSupportedCopyStates,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inFeatures,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedGroupFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inGroupFeatures,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedConsistency(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedConsistency,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedOperations,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedGroupOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedGroupOperations,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedListOperations(
		Uint16 &inReplicationType,
		Uint16 &inSynchronizationType,
		Array<Uint16> &inSupportedListOperations,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedSettingsDefineStateOperations(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedOperations,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedThinProvisioningFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedThinProvisioningFeatures,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedMaximum(
		Uint16 &inReplicationType,
		Uint16 &inComponent,
		Uint64 &inMaxValue,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetDefaultConsistency(
		Uint16 &inReplicationType,
		Uint16 &inDefaultConsistency,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetDefaultGroupPersistency(
		Uint16 &inDefaultGroupPersistency
	);

	virtual Uint32 invokeGetSupportedReplicationSettingData(
		Uint16 &inReplicationType,
		Uint16 &inPropertyName,
		Array<Uint64> &inSupportedValues,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetDefaultReplicationSettingData(
		Uint16 &inReplicationType,
		String &inDefaultInstance
	);

	virtual Uint32 invokeGetSupportedConnectionFeatures(
		CIMInstance &inconnection,
		Array<Uint16> &inSupportedConnectionFeatures
	);

	virtual Uint32 invokeGetSynchronizationSupported(
		CIMInstance &inLocalElement,
		CIMInstance &inOtherElement,
		CIMInstance &inOtherElementAccessPoint,
		Uint16 &inMethodName,
		String &inReplicationSettingData,
		Array<Uint16> &inSyncTypes,
		Array<Uint16> &inModes,
		Array<Uint16> &inLocalElementRole
	);

	virtual Uint32 invokeGetSupportedStorageCompressionFeatures(
		Uint16 &inReplicationType,
		Array<Uint16> &inSupportedStorageCompressionFeatures,
		String &inReplicationSettingData
	);

	virtual Uint32 invokeGetSupportedTokenizedReplicationType(
		CIMInstance &inSourceElement,
		CIMInstance &inTargetElement,
		CIMInstance &inElementAccessPoint,
		String &inReplicationSettingData,
		Array<Uint16> &inReplicationTypes
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Array<Uint16> _supportedReplicationTypes;
	Array<Uint16> _supportedStorageObjects;
	Array<Uint16> _supportedAsynchronousActions;
	Array<Uint16> _supportedSynchronousActions;

#	include "UNIX_ReplicationServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_REPLICATIONSERVICECAPABILITIES */
