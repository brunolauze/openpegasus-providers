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


#include "UNIX_ReplicationServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_ReplicationServiceProvider::UNIX_ReplicationServiceProvider()
{
}

UNIX_ReplicationServiceProvider::~UNIX_ReplicationServiceProvider()
{
}

CIMInstance UNIX_ReplicationServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_ReplicationService &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_ManagedElement Properties
	if (instanceObject.getInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getCaption(p)) inst.addProperty(p);
	if (instanceObject.getDescription(p)) inst.addProperty(p);
	if (instanceObject.getElementName(p)) inst.addProperty(p);
	if (instanceObject.getGeneration(p)) inst.addProperty(p);
	if (className.equal("CIM_ManagedElement")) return inst;
	
	//CIM_ManagedSystemElement Properties
	if (instanceObject.getInstallDate(p)) inst.addProperty(p);
	if (instanceObject.getName(p)) inst.addProperty(p);
	if (instanceObject.getOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getStatusDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getStatus(p)) inst.addProperty(p);
	if (instanceObject.getHealthState(p)) inst.addProperty(p);
	if (instanceObject.getCommunicationStatus(p)) inst.addProperty(p);
	if (instanceObject.getDetailedStatus(p)) inst.addProperty(p);
	if (instanceObject.getOperatingStatus(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryStatus(p)) inst.addProperty(p);
	if (className.equal("CIM_ManagedSystemElement")) return inst;
	
	//CIM_LogicalElement Properties
	if (className.equal("CIM_LogicalElement")) return inst;
	
	//CIM_EnabledLogicalElement Properties
	if (instanceObject.getEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getOtherEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getRequestedState(p)) inst.addProperty(p);
	if (instanceObject.getEnabledDefault(p)) inst.addProperty(p);
	if (instanceObject.getTimeOfLastStateChange(p)) inst.addProperty(p);
	if (instanceObject.getAvailableRequestedStates(p)) inst.addProperty(p);
	if (instanceObject.getTransitioningToState(p)) inst.addProperty(p);
	if (className.equal("CIM_EnabledLogicalElement")) return inst;
	
	//CIM_Service Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryOwnerName(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryOwnerContact(p)) inst.addProperty(p);
	if (instanceObject.getStartMode(p)) inst.addProperty(p);
	if (instanceObject.getStarted(p)) inst.addProperty(p);
	if (instanceObject.getLoSID(p)) inst.addProperty(p);
	if (instanceObject.getLoSOrgID(p)) inst.addProperty(p);
	if (className.equal("CIM_Service")) return inst;
	
	//CIM_ReplicationService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_ReplicationServiceProvider::constructKeyBindings(const UNIX_ReplicationService& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		instanceObject.getSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		instanceObject.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		instanceObject.getName(),
		CIMKeyBinding::STRING));


	return keys;
}

#define __invokeMethod_H
/*
================================================================================
NAME              : invokeMethod
DESCRIPTION       : invokeMethod for the current instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_ReplicationServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_ReplicationService") && !objectReference.getClassName().equal("CIM_ReplicationService")) {
		String classMessage;
		classMessage.append("UNIX_ReplicationService Provider");
		classMessage.append (" does not support class ");
		classMessage.append (objectReference.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle invokeMethod request with input parameters.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		objectReference.getClassName(),
		objectReference.getKeyBindings());
	
	if (methodName.equal("CreateGroup")) {

		if (inParameters.size() != 8)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateGroup method.
		Uint32 invokeCreateGroupReturnValue;

		String inGroupName;
		CIMInstance inMembers;
		Boolean inPersistent;
		Boolean inDeleteOnEmptyElement;
		Boolean inDeleteOnUnassociated;
		CIMInstance inServiceAccessPoint;
		CIMInstance inReplicationGroup;
		String inReplicationSettingData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "GroupName"))
			{
				p.getValue().get(inGroupName);
			}
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "Persistent"))
			{
				p.getValue().get(inPersistent);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteOnEmptyElement"))
			{
				p.getValue().get(inDeleteOnEmptyElement);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteOnUnassociated"))
			{
				p.getValue().get(inDeleteOnUnassociated);
			}
			if (String::equalNoCase(p.getParameterName(), "ServiceAccessPoint"))
			{
				p.getValue().get(inServiceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationGroup"))
			{
				p.getValue().get(inReplicationGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateGroupReturnValue = _p.invokeCreateGroup(

			inGroupName,
			inMembers,
			inPersistent,
			inDeleteOnEmptyElement,
			inDeleteOnUnassociated,
			inServiceAccessPoint,
			inReplicationGroup,
			inReplicationSettingData
		);
		_p.finalize();
		handler.deliver(invokeCreateGroupReturnValue);

	}
	else if (methodName.equal("DeleteGroup")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteGroup method.
		Uint32 invokeDeleteGroupReturnValue;

		CIMInstance inReplicationGroup;
		CIMInstance inServiceAccessPoint;
		Boolean inRemoveElements;
		String inReplicationSettingData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationGroup"))
			{
				p.getValue().get(inReplicationGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "ServiceAccessPoint"))
			{
				p.getValue().get(inServiceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "RemoveElements"))
			{
				p.getValue().get(inRemoveElements);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteGroupReturnValue = _p.invokeDeleteGroup(

			inReplicationGroup,
			inServiceAccessPoint,
			inRemoveElements,
			inReplicationSettingData
		);
		_p.finalize();
		handler.deliver(invokeDeleteGroupReturnValue);

	}
	else if (methodName.equal("AddMembers")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddMembers method.
		Uint32 invokeAddMembersReturnValue;

		CIMInstance inMembers;
		CIMInstance inReplicationGroup;
		CIMInstance inServiceAccessPoint;
		String inReplicationSettingData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationGroup"))
			{
				p.getValue().get(inReplicationGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "ServiceAccessPoint"))
			{
				p.getValue().get(inServiceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddMembersReturnValue = _p.invokeAddMembers(

			inMembers,
			inReplicationGroup,
			inServiceAccessPoint,
			inReplicationSettingData
		);
		_p.finalize();
		handler.deliver(invokeAddMembersReturnValue);

	}
	else if (methodName.equal("RemoveMembers")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RemoveMembers method.
		Uint32 invokeRemoveMembersReturnValue;

		CIMInstance inMembers;
		Boolean inDeleteOnEmptyElement;
		CIMInstance inReplicationGroup;
		CIMInstance inServiceAccessPoint;
		String inReplicationSettingData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteOnEmptyElement"))
			{
				p.getValue().get(inDeleteOnEmptyElement);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationGroup"))
			{
				p.getValue().get(inReplicationGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "ServiceAccessPoint"))
			{
				p.getValue().get(inServiceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRemoveMembersReturnValue = _p.invokeRemoveMembers(

			inMembers,
			inDeleteOnEmptyElement,
			inReplicationGroup,
			inServiceAccessPoint,
			inReplicationSettingData
		);
		_p.finalize();
		handler.deliver(invokeRemoveMembersReturnValue);

	}
	else if (methodName.equal("CreateElementReplica")) {

		if (inParameters.size() != 14)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateElementReplica method.
		Uint32 invokeCreateElementReplicaReturnValue;

		String inElementName;
		Uint16 inSyncType;
		Uint16 inMode;
		CIMInstance inSourceElement;
		CIMInstance inSourceAccessPoint;
		CIMInstance inTargetElement;
		CIMInstance inTargetAccessPoint;
		String inReplicationSettingData;
		CIMInstance inJob;
		CIMInstance inSynchronization;
		CIMInstance inTargetSettingGoal;
		CIMInstance inTargetPool;
		Uint16 inWaitForCopyState;
		CIMInstance inConnectivityCollection;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceElement"))
			{
				p.getValue().get(inSourceElement);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceAccessPoint"))
			{
				p.getValue().get(inSourceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElement"))
			{
				p.getValue().get(inTargetElement);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetAccessPoint"))
			{
				p.getValue().get(inTargetAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronization"))
			{
				p.getValue().get(inSynchronization);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSettingGoal"))
			{
				p.getValue().get(inTargetSettingGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPool"))
			{
				p.getValue().get(inTargetPool);
			}
			if (String::equalNoCase(p.getParameterName(), "WaitForCopyState"))
			{
				p.getValue().get(inWaitForCopyState);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectivityCollection"))
			{
				p.getValue().get(inConnectivityCollection);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateElementReplicaReturnValue = _p.invokeCreateElementReplica(

			inElementName,
			inSyncType,
			inMode,
			inSourceElement,
			inSourceAccessPoint,
			inTargetElement,
			inTargetAccessPoint,
			inReplicationSettingData,
			inJob,
			inSynchronization,
			inTargetSettingGoal,
			inTargetPool,
			inWaitForCopyState,
			inConnectivityCollection
		);
		_p.finalize();
		handler.deliver(invokeCreateElementReplicaReturnValue);

	}
	else if (methodName.equal("CreateGroupReplica")) {

		if (inParameters.size() != 17)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateGroupReplica method.
		Uint32 invokeCreateGroupReplicaReturnValue;

		String inRelationshipName;
		Uint16 inSyncType;
		Uint16 inMode;
		CIMInstance inSourceGroup;
		CIMInstance inSourceElement;
		CIMInstance inSourceAccessPoint;
		CIMInstance inTargetGroup;
		Uint64 inTargetElementCount;
		CIMInstance inTargetAccessPoint;
		Uint16 inConsistency;
		String inReplicationSettingData;
		CIMInstance inJob;
		CIMInstance inSynchronization;
		CIMInstance inTargetSettingGoal;
		CIMInstance inTargetPool;
		Uint16 inWaitForCopyState;
		CIMInstance inConnectivityCollection;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RelationshipName"))
			{
				p.getValue().get(inRelationshipName);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceGroup"))
			{
				p.getValue().get(inSourceGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceElement"))
			{
				p.getValue().get(inSourceElement);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceAccessPoint"))
			{
				p.getValue().get(inSourceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetGroup"))
			{
				p.getValue().get(inTargetGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElementCount"))
			{
				p.getValue().get(inTargetElementCount);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetAccessPoint"))
			{
				p.getValue().get(inTargetAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Consistency"))
			{
				p.getValue().get(inConsistency);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronization"))
			{
				p.getValue().get(inSynchronization);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSettingGoal"))
			{
				p.getValue().get(inTargetSettingGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPool"))
			{
				p.getValue().get(inTargetPool);
			}
			if (String::equalNoCase(p.getParameterName(), "WaitForCopyState"))
			{
				p.getValue().get(inWaitForCopyState);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectivityCollection"))
			{
				p.getValue().get(inConnectivityCollection);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateGroupReplicaReturnValue = _p.invokeCreateGroupReplica(

			inRelationshipName,
			inSyncType,
			inMode,
			inSourceGroup,
			inSourceElement,
			inSourceAccessPoint,
			inTargetGroup,
			inTargetElementCount,
			inTargetAccessPoint,
			inConsistency,
			inReplicationSettingData,
			inJob,
			inSynchronization,
			inTargetSettingGoal,
			inTargetPool,
			inWaitForCopyState,
			inConnectivityCollection
		);
		_p.finalize();
		handler.deliver(invokeCreateGroupReplicaReturnValue);

	}
	else if (methodName.equal("CreateSynchronizationAspect")) {

		if (inParameters.size() != 10)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateSynchronizationAspect method.
		Uint32 invokeCreateSynchronizationAspectReturnValue;

		String inName;
		Uint16 inSyncType;
		Uint16 inMode;
		CIMInstance inSourceGroup;
		CIMInstance inSourceElement;
		CIMInstance inSourceAccessPoint;
		Uint16 inConsistency;
		String inReplicationSettingData;
		CIMInstance inJob;
		CIMInstance inSettingsState;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Name"))
			{
				p.getValue().get(inName);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceGroup"))
			{
				p.getValue().get(inSourceGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceElement"))
			{
				p.getValue().get(inSourceElement);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceAccessPoint"))
			{
				p.getValue().get(inSourceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Consistency"))
			{
				p.getValue().get(inConsistency);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "SettingsState"))
			{
				p.getValue().get(inSettingsState);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateSynchronizationAspectReturnValue = _p.invokeCreateSynchronizationAspect(

			inName,
			inSyncType,
			inMode,
			inSourceGroup,
			inSourceElement,
			inSourceAccessPoint,
			inConsistency,
			inReplicationSettingData,
			inJob,
			inSettingsState
		);
		_p.finalize();
		handler.deliver(invokeCreateSynchronizationAspectReturnValue);

	}
	else if (methodName.equal("ModifyReplicaSynchronization")) {

		if (inParameters.size() != 8)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifyReplicaSynchronization method.
		Uint32 invokeModifyReplicaSynchronizationReturnValue;

		Uint16 inOperation;
		CIMInstance inSynchronization;
		String inReplicationSettingData;
		CIMInstance inSyncPair;
		CIMInstance inJob;
		CIMInstance inSettingsState;
		Boolean inForce;
		Uint16 inWaitForCopyState;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Operation"))
			{
				p.getValue().get(inOperation);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronization"))
			{
				p.getValue().get(inSynchronization);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncPair"))
			{
				p.getValue().get(inSyncPair);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "SettingsState"))
			{
				p.getValue().get(inSettingsState);
			}
			if (String::equalNoCase(p.getParameterName(), "Force"))
			{
				p.getValue().get(inForce);
			}
			if (String::equalNoCase(p.getParameterName(), "WaitForCopyState"))
			{
				p.getValue().get(inWaitForCopyState);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifyReplicaSynchronizationReturnValue = _p.invokeModifyReplicaSynchronization(

			inOperation,
			inSynchronization,
			inReplicationSettingData,
			inSyncPair,
			inJob,
			inSettingsState,
			inForce,
			inWaitForCopyState
		);
		_p.finalize();
		handler.deliver(invokeModifyReplicaSynchronizationReturnValue);

	}
	else if (methodName.equal("ModifyListSynchronization")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifyListSynchronization method.
		Uint32 invokeModifyListSynchronizationReturnValue;

		Uint16 inOperation;
		CIMInstance inSynchronization;
		String inReplicationSettingData;
		CIMInstance inJob;
		CIMInstance inSettingsState;
		Boolean inForce;
		Uint16 inWaitForCopyState;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Operation"))
			{
				p.getValue().get(inOperation);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronization"))
			{
				p.getValue().get(inSynchronization);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "SettingsState"))
			{
				p.getValue().get(inSettingsState);
			}
			if (String::equalNoCase(p.getParameterName(), "Force"))
			{
				p.getValue().get(inForce);
			}
			if (String::equalNoCase(p.getParameterName(), "WaitForCopyState"))
			{
				p.getValue().get(inWaitForCopyState);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifyListSynchronizationReturnValue = _p.invokeModifyListSynchronization(

			inOperation,
			inSynchronization,
			inReplicationSettingData,
			inJob,
			inSettingsState,
			inForce,
			inWaitForCopyState
		);
		_p.finalize();
		handler.deliver(invokeModifyListSynchronizationReturnValue);

	}
	else if (methodName.equal("ModifySettingsDefineState")) {

		if (inParameters.size() != 12)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifySettingsDefineState method.
		Uint32 invokeModifySettingsDefineStateReturnValue;

		Uint16 inOperation;
		CIMInstance inSettingsState;
		CIMInstance inTargetElement;
		CIMInstance inTargetGroup;
		Uint64 inTargetElementCount;
		CIMInstance inTargetAccessPoint;
		CIMInstance inSynchronization;
		String inReplicationSettingData;
		CIMInstance inJob;
		CIMInstance inTargetSettingGoal;
		CIMInstance inTargetPool;
		Uint16 inWaitForCopyState;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Operation"))
			{
				p.getValue().get(inOperation);
			}
			if (String::equalNoCase(p.getParameterName(), "SettingsState"))
			{
				p.getValue().get(inSettingsState);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElement"))
			{
				p.getValue().get(inTargetElement);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetGroup"))
			{
				p.getValue().get(inTargetGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElementCount"))
			{
				p.getValue().get(inTargetElementCount);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetAccessPoint"))
			{
				p.getValue().get(inTargetAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronization"))
			{
				p.getValue().get(inSynchronization);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSettingGoal"))
			{
				p.getValue().get(inTargetSettingGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPool"))
			{
				p.getValue().get(inTargetPool);
			}
			if (String::equalNoCase(p.getParameterName(), "WaitForCopyState"))
			{
				p.getValue().get(inWaitForCopyState);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifySettingsDefineStateReturnValue = _p.invokeModifySettingsDefineState(

			inOperation,
			inSettingsState,
			inTargetElement,
			inTargetGroup,
			inTargetElementCount,
			inTargetAccessPoint,
			inSynchronization,
			inReplicationSettingData,
			inJob,
			inTargetSettingGoal,
			inTargetPool,
			inWaitForCopyState
		);
		_p.finalize();
		handler.deliver(invokeModifySettingsDefineStateReturnValue);

	}
	else if (methodName.equal("GetAvailableTargetElements")) {

		if (inParameters.size() != 8)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetAvailableTargetElements method.
		Uint32 invokeGetAvailableTargetElementsReturnValue;

		CIMInstance inSourceElement;
		Uint16 inSyncType;
		Uint16 inMode;
		String inReplicationSettingData;
		CIMInstance inTargetAccessPoint;
		CIMInstance inTargetSettingGoal;
		CIMInstance inTargetPools;
		CIMInstance inJob;
		CIMInstance inCandidates;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SourceElement"))
			{
				p.getValue().get(inSourceElement);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetAccessPoint"))
			{
				p.getValue().get(inTargetAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSettingGoal"))
			{
				p.getValue().get(inTargetSettingGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPools"))
			{
				p.getValue().get(inTargetPools);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Candidates"))
			{
				p.getValue().get(inCandidates);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetAvailableTargetElementsReturnValue = _p.invokeGetAvailableTargetElements(

			inSourceElement,
			inSyncType,
			inMode,
			inReplicationSettingData,
			inTargetAccessPoint,
			inTargetSettingGoal,
			inTargetPools,
			inJob,
			inCandidates
		);
		_p.finalize();
		handler.deliver(invokeGetAvailableTargetElementsReturnValue);

	}
	else if (methodName.equal("GetPeerSystems")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetPeerSystems method.
		Uint32 invokeGetPeerSystemsReturnValue;

		Uint16 inOptions;
		CIMInstance inJob;
		CIMInstance inSystems;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Options"))
			{
				p.getValue().get(inOptions);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Systems"))
			{
				p.getValue().get(inSystems);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetPeerSystemsReturnValue = _p.invokeGetPeerSystems(

			inOptions,
			inJob,
			inSystems
		);
		_p.finalize();
		handler.deliver(invokeGetPeerSystemsReturnValue);

	}
	else if (methodName.equal("GetReplicationRelationships")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetReplicationRelationships method.
		Uint32 invokeGetReplicationRelationshipsReturnValue;

		Uint16 inType;
		Uint16 inSyncType;
		Uint16 inMode;
		Uint16 inLocality;
		Uint16 inCopyState;
		CIMInstance inJob;
		CIMInstance inSynchronizations;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Type"))
			{
				p.getValue().get(inType);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "Locality"))
			{
				p.getValue().get(inLocality);
			}
			if (String::equalNoCase(p.getParameterName(), "CopyState"))
			{
				p.getValue().get(inCopyState);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronizations"))
			{
				p.getValue().get(inSynchronizations);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetReplicationRelationshipsReturnValue = _p.invokeGetReplicationRelationships(

			inType,
			inSyncType,
			inMode,
			inLocality,
			inCopyState,
			inJob,
			inSynchronizations
		);
		_p.finalize();
		handler.deliver(invokeGetReplicationRelationshipsReturnValue);

	}
	else if (methodName.equal("GetServiceAccessPoints")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetServiceAccessPoints method.
		Uint32 invokeGetServiceAccessPointsReturnValue;

		CIMInstance inSystem;
		CIMInstance inJob;
		CIMInstance inServiceAccessPoints;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "System"))
			{
				p.getValue().get(inSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "ServiceAccessPoints"))
			{
				p.getValue().get(inServiceAccessPoints);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetServiceAccessPointsReturnValue = _p.invokeGetServiceAccessPoints(

			inSystem,
			inJob,
			inServiceAccessPoints
		);
		_p.finalize();
		handler.deliver(invokeGetServiceAccessPointsReturnValue);

	}
	else if (methodName.equal("AddReplicationEntity")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddReplicationEntity method.
		Uint32 invokeAddReplicationEntityReturnValue;

		String inReplicationEntity;
		Boolean inPersistent;
		String inInstanceNamespace;
		CIMInstance inReplicationEntityPath;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationEntity"))
			{
				p.getValue().get(inReplicationEntity);
			}
			if (String::equalNoCase(p.getParameterName(), "Persistent"))
			{
				p.getValue().get(inPersistent);
			}
			if (String::equalNoCase(p.getParameterName(), "InstanceNamespace"))
			{
				p.getValue().get(inInstanceNamespace);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationEntityPath"))
			{
				p.getValue().get(inReplicationEntityPath);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddReplicationEntityReturnValue = _p.invokeAddReplicationEntity(

			inReplicationEntity,
			inPersistent,
			inInstanceNamespace,
			inReplicationEntityPath
		);
		_p.finalize();
		handler.deliver(invokeAddReplicationEntityReturnValue);

	}
	else if (methodName.equal("AddServiceAccessPoint")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddServiceAccessPoint method.
		Uint32 invokeAddServiceAccessPointReturnValue;

		String inServiceAccessPoint;
		String inInstanceNamespace;
		CIMInstance inServiceAccessPointPath;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ServiceAccessPoint"))
			{
				p.getValue().get(inServiceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "InstanceNamespace"))
			{
				p.getValue().get(inInstanceNamespace);
			}
			if (String::equalNoCase(p.getParameterName(), "ServiceAccessPointPath"))
			{
				p.getValue().get(inServiceAccessPointPath);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddServiceAccessPointReturnValue = _p.invokeAddServiceAccessPoint(

			inServiceAccessPoint,
			inInstanceNamespace,
			inServiceAccessPointPath
		);
		_p.finalize();
		handler.deliver(invokeAddServiceAccessPointReturnValue);

	}
	else if (methodName.equal("AddSharedSecret")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddSharedSecret method.
		Uint32 invokeAddSharedSecretReturnValue;

		String inSharedSecret;
		CIMInstance inServiceAccessPoint;
		String inInstanceNamespace;
		CIMInstance inSharedSecretPath;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SharedSecret"))
			{
				p.getValue().get(inSharedSecret);
			}
			if (String::equalNoCase(p.getParameterName(), "ServiceAccessPoint"))
			{
				p.getValue().get(inServiceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "InstanceNamespace"))
			{
				p.getValue().get(inInstanceNamespace);
			}
			if (String::equalNoCase(p.getParameterName(), "SharedSecretPath"))
			{
				p.getValue().get(inSharedSecretPath);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddSharedSecretReturnValue = _p.invokeAddSharedSecret(

			inSharedSecret,
			inServiceAccessPoint,
			inInstanceNamespace,
			inSharedSecretPath
		);
		_p.finalize();
		handler.deliver(invokeAddSharedSecretReturnValue);

	}
	else if (methodName.equal("CreateListReplica")) {

		if (inParameters.size() != 14)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateListReplica method.
		Uint32 invokeCreateListReplicaReturnValue;

		Array<String> inElementNames;
		Uint16 inSyncType;
		Uint16 inMode;
		CIMInstance inSourceElements;
		CIMInstance inSourceAccessPoint;
		CIMInstance inTargetElements;
		CIMInstance inTargetAccessPoint;
		String inReplicationSettingData;
		CIMInstance inJob;
		CIMInstance inSynchronizations;
		CIMInstance inTargetSettingGoal;
		CIMInstance inTargetPool;
		Uint16 inWaitForCopyState;
		CIMInstance inConnectivityCollection;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementNames"))
			{
				p.getValue().get(inElementNames);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceElements"))
			{
				p.getValue().get(inSourceElements);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceAccessPoint"))
			{
				p.getValue().get(inSourceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElements"))
			{
				p.getValue().get(inTargetElements);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetAccessPoint"))
			{
				p.getValue().get(inTargetAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronizations"))
			{
				p.getValue().get(inSynchronizations);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSettingGoal"))
			{
				p.getValue().get(inTargetSettingGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPool"))
			{
				p.getValue().get(inTargetPool);
			}
			if (String::equalNoCase(p.getParameterName(), "WaitForCopyState"))
			{
				p.getValue().get(inWaitForCopyState);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectivityCollection"))
			{
				p.getValue().get(inConnectivityCollection);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateListReplicaReturnValue = _p.invokeCreateListReplica(

			inElementNames,
			inSyncType,
			inMode,
			inSourceElements,
			inSourceAccessPoint,
			inTargetElements,
			inTargetAccessPoint,
			inReplicationSettingData,
			inJob,
			inSynchronizations,
			inTargetSettingGoal,
			inTargetPool,
			inWaitForCopyState,
			inConnectivityCollection
		);
		_p.finalize();
		handler.deliver(invokeCreateListReplicaReturnValue);

	}
	else if (methodName.equal("CreateGroupReplicaFromElements")) {

		if (inParameters.size() != 16)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateGroupReplicaFromElements method.
		Uint32 invokeCreateGroupReplicaFromElementsReturnValue;

		String inRelationshipName;
		Uint16 inSyncType;
		Uint16 inMode;
		CIMInstance inSourceElements;
		String inSourceGroupName;
		CIMInstance inSourceAccessPoint;
		CIMInstance inTargetGroup;
		CIMInstance inTargetAccessPoint;
		Uint16 inConsistency;
		String inReplicationSettingData;
		CIMInstance inJob;
		CIMInstance inSynchronization;
		CIMInstance inTargetSettingGoal;
		CIMInstance inTargetPool;
		Uint16 inWaitForCopyState;
		CIMInstance inConnectivityCollection;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RelationshipName"))
			{
				p.getValue().get(inRelationshipName);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceElements"))
			{
				p.getValue().get(inSourceElements);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceGroupName"))
			{
				p.getValue().get(inSourceGroupName);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceAccessPoint"))
			{
				p.getValue().get(inSourceAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetGroup"))
			{
				p.getValue().get(inTargetGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetAccessPoint"))
			{
				p.getValue().get(inTargetAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Consistency"))
			{
				p.getValue().get(inConsistency);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronization"))
			{
				p.getValue().get(inSynchronization);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSettingGoal"))
			{
				p.getValue().get(inTargetSettingGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPool"))
			{
				p.getValue().get(inTargetPool);
			}
			if (String::equalNoCase(p.getParameterName(), "WaitForCopyState"))
			{
				p.getValue().get(inWaitForCopyState);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectivityCollection"))
			{
				p.getValue().get(inConnectivityCollection);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateGroupReplicaFromElementsReturnValue = _p.invokeCreateGroupReplicaFromElements(

			inRelationshipName,
			inSyncType,
			inMode,
			inSourceElements,
			inSourceGroupName,
			inSourceAccessPoint,
			inTargetGroup,
			inTargetAccessPoint,
			inConsistency,
			inReplicationSettingData,
			inJob,
			inSynchronization,
			inTargetSettingGoal,
			inTargetPool,
			inWaitForCopyState,
			inConnectivityCollection
		);
		_p.finalize();
		handler.deliver(invokeCreateGroupReplicaFromElementsReturnValue);

	}
	else if (methodName.equal("GetReplicationRelationshipInstances")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetReplicationRelationshipInstances method.
		Uint32 invokeGetReplicationRelationshipInstancesReturnValue;

		Uint16 inType;
		Uint16 inSyncType;
		Uint16 inMode;
		Uint16 inLocality;
		Uint16 inCopyState;
		CIMInstance inJob;
		Array<String> inSynchronizations;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Type"))
			{
				p.getValue().get(inType);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "Locality"))
			{
				p.getValue().get(inLocality);
			}
			if (String::equalNoCase(p.getParameterName(), "CopyState"))
			{
				p.getValue().get(inCopyState);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronizations"))
			{
				p.getValue().get(inSynchronizations);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetReplicationRelationshipInstancesReturnValue = _p.invokeGetReplicationRelationshipInstances(

			inType,
			inSyncType,
			inMode,
			inLocality,
			inCopyState,
			inJob,
			inSynchronizations
		);
		_p.finalize();
		handler.deliver(invokeGetReplicationRelationshipInstancesReturnValue);

	}
	else if (methodName.equal("ModifyListSettingsDefineState")) {

		if (inParameters.size() != 12)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifyListSettingsDefineState method.
		Uint32 invokeModifyListSettingsDefineStateReturnValue;

		Uint16 inOperation;
		CIMInstance inSettingsStates;
		CIMInstance inTargetElements;
		CIMInstance inTargetGroups;
		Uint64 inTargetElementCount;
		CIMInstance inTargetAccessPoint;
		CIMInstance inSynchronizations;
		String inReplicationSettingData;
		CIMInstance inJob;
		CIMInstance inTargetSettingGoal;
		CIMInstance inTargetPool;
		Uint16 inWaitForCopyState;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Operation"))
			{
				p.getValue().get(inOperation);
			}
			if (String::equalNoCase(p.getParameterName(), "SettingsStates"))
			{
				p.getValue().get(inSettingsStates);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElements"))
			{
				p.getValue().get(inTargetElements);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetGroups"))
			{
				p.getValue().get(inTargetGroups);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElementCount"))
			{
				p.getValue().get(inTargetElementCount);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetAccessPoint"))
			{
				p.getValue().get(inTargetAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronizations"))
			{
				p.getValue().get(inSynchronizations);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSettingGoal"))
			{
				p.getValue().get(inTargetSettingGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPool"))
			{
				p.getValue().get(inTargetPool);
			}
			if (String::equalNoCase(p.getParameterName(), "WaitForCopyState"))
			{
				p.getValue().get(inWaitForCopyState);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifyListSettingsDefineStateReturnValue = _p.invokeModifyListSettingsDefineState(

			inOperation,
			inSettingsStates,
			inTargetElements,
			inTargetGroups,
			inTargetElementCount,
			inTargetAccessPoint,
			inSynchronizations,
			inReplicationSettingData,
			inJob,
			inTargetSettingGoal,
			inTargetPool,
			inWaitForCopyState
		);
		_p.finalize();
		handler.deliver(invokeModifyListSettingsDefineStateReturnValue);

	}
	else if (methodName.equal("AddToRemoteReplicationCollection")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddToRemoteReplicationCollection method.
		Uint32 invokeAddToRemoteReplicationCollectionReturnValue;

		CIMInstance inLocalAccessPoints;
		CIMInstance inRemoteAccessPoints;
		CIMInstance inRemoteComputerSystem;
		CIMInstance inJob;
		CIMInstance inConnectivityCollection;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "LocalAccessPoints"))
			{
				p.getValue().get(inLocalAccessPoints);
			}
			if (String::equalNoCase(p.getParameterName(), "RemoteAccessPoints"))
			{
				p.getValue().get(inRemoteAccessPoints);
			}
			if (String::equalNoCase(p.getParameterName(), "RemoteComputerSystem"))
			{
				p.getValue().get(inRemoteComputerSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectivityCollection"))
			{
				p.getValue().get(inConnectivityCollection);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddToRemoteReplicationCollectionReturnValue = _p.invokeAddToRemoteReplicationCollection(

			inLocalAccessPoints,
			inRemoteAccessPoints,
			inRemoteComputerSystem,
			inJob,
			inConnectivityCollection
		);
		_p.finalize();
		handler.deliver(invokeAddToRemoteReplicationCollectionReturnValue);

	}
	else if (methodName.equal("CreateRemoteReplicationCollection")) {

		if (inParameters.size() != 9)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateRemoteReplicationCollection method.
		Uint32 invokeCreateRemoteReplicationCollectionReturnValue;

		String inElementName;
		CIMInstance inLocalAccessPoints;
		CIMInstance inRemoteAccessPoints;
		CIMInstance inRemoteComputerSystem;
		Boolean inActive;
		Boolean inDeleteOnUnassociated;
		CIMInstance inJob;
		CIMInstance inConnectivityCollection;
		String inReplicationSettingData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "LocalAccessPoints"))
			{
				p.getValue().get(inLocalAccessPoints);
			}
			if (String::equalNoCase(p.getParameterName(), "RemoteAccessPoints"))
			{
				p.getValue().get(inRemoteAccessPoints);
			}
			if (String::equalNoCase(p.getParameterName(), "RemoteComputerSystem"))
			{
				p.getValue().get(inRemoteComputerSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "Active"))
			{
				p.getValue().get(inActive);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteOnUnassociated"))
			{
				p.getValue().get(inDeleteOnUnassociated);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectivityCollection"))
			{
				p.getValue().get(inConnectivityCollection);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateRemoteReplicationCollectionReturnValue = _p.invokeCreateRemoteReplicationCollection(

			inElementName,
			inLocalAccessPoints,
			inRemoteAccessPoints,
			inRemoteComputerSystem,
			inActive,
			inDeleteOnUnassociated,
			inJob,
			inConnectivityCollection,
			inReplicationSettingData
		);
		_p.finalize();
		handler.deliver(invokeCreateRemoteReplicationCollectionReturnValue);

	}
	else if (methodName.equal("RemoveFromRemoteReplicationCollection")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RemoveFromRemoteReplicationCollection method.
		Uint32 invokeRemoveFromRemoteReplicationCollectionReturnValue;

		CIMInstance inLocalAccessPoints;
		CIMInstance inRemoteAccessPoints;
		CIMInstance inRemoteComputerSystem;
		CIMInstance inJob;
		CIMInstance inConnectivityCollection;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "LocalAccessPoints"))
			{
				p.getValue().get(inLocalAccessPoints);
			}
			if (String::equalNoCase(p.getParameterName(), "RemoteAccessPoints"))
			{
				p.getValue().get(inRemoteAccessPoints);
			}
			if (String::equalNoCase(p.getParameterName(), "RemoteComputerSystem"))
			{
				p.getValue().get(inRemoteComputerSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectivityCollection"))
			{
				p.getValue().get(inConnectivityCollection);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRemoveFromRemoteReplicationCollectionReturnValue = _p.invokeRemoveFromRemoteReplicationCollection(

			inLocalAccessPoints,
			inRemoteAccessPoints,
			inRemoteComputerSystem,
			inJob,
			inConnectivityCollection
		);
		_p.finalize();
		handler.deliver(invokeRemoveFromRemoteReplicationCollectionReturnValue);

	}
	else if (methodName.equal("StartService")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking StartService method.
		Uint32 invokeStartServiceReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeStartServiceReturnValue = _p.invokeStartService();
		_p.finalize();
		handler.deliver(invokeStartServiceReturnValue);

	}
	else if (methodName.equal("StopService")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking StopService method.
		Uint32 invokeStopServiceReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeStopServiceReturnValue = _p.invokeStopService();
		_p.finalize();
		handler.deliver(invokeStopServiceReturnValue);

	}
	else if (methodName.equal("ChangeAffectedElementsAssignedSequence")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ChangeAffectedElementsAssignedSequence method.
		Uint32 invokeChangeAffectedElementsAssignedSequenceReturnValue;

		CIMInstance inManagedElements;
		Array<Uint16> inAssignedSequence;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ManagedElements"))
			{
				p.getValue().get(inManagedElements);
			}
			if (String::equalNoCase(p.getParameterName(), "AssignedSequence"))
			{
				p.getValue().get(inAssignedSequence);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeChangeAffectedElementsAssignedSequenceReturnValue = _p.invokeChangeAffectedElementsAssignedSequence(

			inManagedElements,
			inAssignedSequence,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeChangeAffectedElementsAssignedSequenceReturnValue);

	}
	else if (methodName.equal("RequestStateChange")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RequestStateChange method.
		Uint32 invokeRequestStateChangeReturnValue;

		Uint16 inRequestedState;
		CIMInstance inJob;
		CIMDateTime inTimeoutPeriod;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RequestedState"))
			{
				p.getValue().get(inRequestedState);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeoutPeriod"))
			{
				p.getValue().get(inTimeoutPeriod);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRequestStateChangeReturnValue = _p.invokeRequestStateChange(

			inRequestedState,
			inJob,
			inTimeoutPeriod
		);
		_p.finalize();
		handler.deliver(invokeRequestStateChangeReturnValue);

	}
	else {
		String message;
		message.append("UNIX_ReplicationService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_ReplicationServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_ReplicationServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_ReplicationService
#define CLASS_IMPLEMENTATION_NAME "UNIX_ReplicationService"
#define BASE_CLASS_NAME "CIM_ReplicationService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

