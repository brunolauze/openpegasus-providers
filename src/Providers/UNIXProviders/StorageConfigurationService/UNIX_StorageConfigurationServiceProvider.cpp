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


#include "UNIX_StorageConfigurationServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_StorageConfigurationServiceProvider::UNIX_StorageConfigurationServiceProvider()
{
}

UNIX_StorageConfigurationServiceProvider::~UNIX_StorageConfigurationServiceProvider()
{
}

CIMInstance UNIX_StorageConfigurationServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageConfigurationService &instanceObject) const
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
	
	//CIM_StorageConfigurationService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_StorageConfigurationServiceProvider::constructKeyBindings(const UNIX_StorageConfigurationService& instanceObject) const
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

void UNIX_StorageConfigurationServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_StorageConfigurationService") && !objectReference.getClassName().equal("CIM_StorageConfigurationService")) {
		String classMessage;
		classMessage.append("UNIX_StorageConfigurationService Provider");
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
	
	if (methodName.equal("CreateOrModifyStoragePool")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateOrModifyStoragePool method.
		Uint32 invokeCreateOrModifyStoragePoolReturnValue;

		String inElementName;
		CIMInstance inJob;
		CIMInstance inGoal;
		Uint64 inSize;
		Array<String> inInPools;
		Array<String> inInExtents;
		CIMInstance inPool;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "Size"))
			{
				p.getValue().get(inSize);
			}
			if (String::equalNoCase(p.getParameterName(), "InPools"))
			{
				p.getValue().get(inInPools);
			}
			if (String::equalNoCase(p.getParameterName(), "InExtents"))
			{
				p.getValue().get(inInExtents);
			}
			if (String::equalNoCase(p.getParameterName(), "Pool"))
			{
				p.getValue().get(inPool);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateOrModifyStoragePoolReturnValue = _p.invokeCreateOrModifyStoragePool(

			inElementName,
			inJob,
			inGoal,
			inSize,
			inInPools,
			inInExtents,
			inPool
		);
		_p.finalize();
		handler.deliver(invokeCreateOrModifyStoragePoolReturnValue);

	}
	else if (methodName.equal("CreateOrModifyElementFromStoragePool")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateOrModifyElementFromStoragePool method.
		Uint32 invokeCreateOrModifyElementFromStoragePoolReturnValue;

		String inElementName;
		Uint16 inElementType;
		CIMInstance inJob;
		CIMInstance inGoal;
		Uint64 inSize;
		CIMInstance inInPool;
		CIMInstance inTheElement;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "Size"))
			{
				p.getValue().get(inSize);
			}
			if (String::equalNoCase(p.getParameterName(), "InPool"))
			{
				p.getValue().get(inInPool);
			}
			if (String::equalNoCase(p.getParameterName(), "TheElement"))
			{
				p.getValue().get(inTheElement);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateOrModifyElementFromStoragePoolReturnValue = _p.invokeCreateOrModifyElementFromStoragePool(

			inElementName,
			inElementType,
			inJob,
			inGoal,
			inSize,
			inInPool,
			inTheElement
		);
		_p.finalize();
		handler.deliver(invokeCreateOrModifyElementFromStoragePoolReturnValue);

	}
	else if (methodName.equal("DeleteStoragePool")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteStoragePool method.
		Uint32 invokeDeleteStoragePoolReturnValue;

		CIMInstance inJob;
		CIMInstance inPool;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Pool"))
			{
				p.getValue().get(inPool);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteStoragePoolReturnValue = _p.invokeDeleteStoragePool(

			inJob,
			inPool
		);
		_p.finalize();
		handler.deliver(invokeDeleteStoragePoolReturnValue);

	}
	else if (methodName.equal("ReturnToStoragePool")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ReturnToStoragePool method.
		Uint32 invokeReturnToStoragePoolReturnValue;

		CIMInstance inJob;
		CIMInstance inTheElement;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "TheElement"))
			{
				p.getValue().get(inTheElement);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeReturnToStoragePoolReturnValue = _p.invokeReturnToStoragePool(

			inJob,
			inTheElement
		);
		_p.finalize();
		handler.deliver(invokeReturnToStoragePoolReturnValue);

	}
	else if (methodName.equal("CreateReplica")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateReplica method.
		Uint32 invokeCreateReplicaReturnValue;

		String inElementName;
		CIMInstance inJob;
		CIMInstance inSourceElement;
		CIMInstance inTargetElement;
		CIMInstance inTargetSettingGoal;
		CIMInstance inTargetPool;
		Uint16 inCopyType;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceElement"))
			{
				p.getValue().get(inSourceElement);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElement"))
			{
				p.getValue().get(inTargetElement);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSettingGoal"))
			{
				p.getValue().get(inTargetSettingGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPool"))
			{
				p.getValue().get(inTargetPool);
			}
			if (String::equalNoCase(p.getParameterName(), "CopyType"))
			{
				p.getValue().get(inCopyType);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateReplicaReturnValue = _p.invokeCreateReplica(

			inElementName,
			inJob,
			inSourceElement,
			inTargetElement,
			inTargetSettingGoal,
			inTargetPool,
			inCopyType
		);
		_p.finalize();
		handler.deliver(invokeCreateReplicaReturnValue);

	}
	else if (methodName.equal("ModifySynchronization")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifySynchronization method.
		Uint32 invokeModifySynchronizationReturnValue;

		Uint16 inOperation;
		CIMInstance inJob;
		CIMInstance inSynchronization;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Operation"))
			{
				p.getValue().get(inOperation);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Synchronization"))
			{
				p.getValue().get(inSynchronization);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifySynchronizationReturnValue = _p.invokeModifySynchronization(

			inOperation,
			inJob,
			inSynchronization
		);
		_p.finalize();
		handler.deliver(invokeModifySynchronizationReturnValue);

	}
	else if (methodName.equal("AttachReplica")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AttachReplica method.
		Uint32 invokeAttachReplicaReturnValue;

		CIMInstance inJob;
		CIMInstance inSourceElement;
		CIMInstance inTargetElement;
		Uint16 inCopyType;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceElement"))
			{
				p.getValue().get(inSourceElement);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElement"))
			{
				p.getValue().get(inTargetElement);
			}
			if (String::equalNoCase(p.getParameterName(), "CopyType"))
			{
				p.getValue().get(inCopyType);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAttachReplicaReturnValue = _p.invokeAttachReplica(

			inJob,
			inSourceElement,
			inTargetElement,
			inCopyType
		);
		_p.finalize();
		handler.deliver(invokeAttachReplicaReturnValue);

	}
	else if (methodName.equal("AttachOrModifyReplica")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AttachOrModifyReplica method.
		Uint32 invokeAttachOrModifyReplicaReturnValue;

		CIMInstance inJob;
		CIMInstance inSourceElement;
		CIMInstance inTargetElement;
		Uint16 inCopyType;
		String inGoal;
		CIMInstance inReplicationPipe;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceElement"))
			{
				p.getValue().get(inSourceElement);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElement"))
			{
				p.getValue().get(inTargetElement);
			}
			if (String::equalNoCase(p.getParameterName(), "CopyType"))
			{
				p.getValue().get(inCopyType);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationPipe"))
			{
				p.getValue().get(inReplicationPipe);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAttachOrModifyReplicaReturnValue = _p.invokeAttachOrModifyReplica(

			inJob,
			inSourceElement,
			inTargetElement,
			inCopyType,
			inGoal,
			inReplicationPipe
		);
		_p.finalize();
		handler.deliver(invokeAttachOrModifyReplicaReturnValue);

	}
	else if (methodName.equal("CreateOrModifyReplicationPipe")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateOrModifyReplicationPipe method.
		Uint32 invokeCreateOrModifyReplicationPipeReturnValue;

		String inPipeElementName;
		CIMInstance inSourceSystem;
		CIMInstance inTargetSystem;
		CIMInstance inSourceEndpoint;
		CIMInstance inTargetEndpoint;
		String inGoal;
		CIMInstance inReplicationPipe;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "PipeElementName"))
			{
				p.getValue().get(inPipeElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceSystem"))
			{
				p.getValue().get(inSourceSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetSystem"))
			{
				p.getValue().get(inTargetSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "SourceEndpoint"))
			{
				p.getValue().get(inSourceEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetEndpoint"))
			{
				p.getValue().get(inTargetEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationPipe"))
			{
				p.getValue().get(inReplicationPipe);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateOrModifyReplicationPipeReturnValue = _p.invokeCreateOrModifyReplicationPipe(

			inPipeElementName,
			inSourceSystem,
			inTargetSystem,
			inSourceEndpoint,
			inTargetEndpoint,
			inGoal,
			inReplicationPipe
		);
		_p.finalize();
		handler.deliver(invokeCreateOrModifyReplicationPipeReturnValue);

	}
	else if (methodName.equal("CreateReplicationBuffer")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateReplicationBuffer method.
		Uint32 invokeCreateReplicationBufferReturnValue;

		CIMInstance inJob;
		CIMInstance inHost;
		CIMInstance inTargetElement;
		CIMInstance inTargetPool;
		CIMInstance inReplicaBuffer;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Host"))
			{
				p.getValue().get(inHost);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElement"))
			{
				p.getValue().get(inTargetElement);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPool"))
			{
				p.getValue().get(inTargetPool);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicaBuffer"))
			{
				p.getValue().get(inReplicaBuffer);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateReplicationBufferReturnValue = _p.invokeCreateReplicationBuffer(

			inJob,
			inHost,
			inTargetElement,
			inTargetPool,
			inReplicaBuffer
		);
		_p.finalize();
		handler.deliver(invokeCreateReplicationBufferReturnValue);

	}
	else if (methodName.equal("CreateOrModifyElementFromElements")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateOrModifyElementFromElements method.
		Uint32 invokeCreateOrModifyElementFromElementsReturnValue;

		String inElementName;
		Uint16 inElementType;
		CIMInstance inJob;
		CIMInstance inGoal;
		Uint64 inSize;
		CIMInstance inInElements;
		CIMInstance inTheElement;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "Size"))
			{
				p.getValue().get(inSize);
			}
			if (String::equalNoCase(p.getParameterName(), "InElements"))
			{
				p.getValue().get(inInElements);
			}
			if (String::equalNoCase(p.getParameterName(), "TheElement"))
			{
				p.getValue().get(inTheElement);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateOrModifyElementFromElementsReturnValue = _p.invokeCreateOrModifyElementFromElements(

			inElementName,
			inElementType,
			inJob,
			inGoal,
			inSize,
			inInElements,
			inTheElement
		);
		_p.finalize();
		handler.deliver(invokeCreateOrModifyElementFromElementsReturnValue);

	}
	else if (methodName.equal("ScsiScan")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ScsiScan method.
		Uint32 invokeScsiScanReturnValue;

		CIMInstance inJob;
		Uint16 inConnectionType;
		String inOtherConnectionType;
		CIMInstance inInitiators;
		Array<String> inTargets;
		Array<String> inLogicalUnits;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectionType"))
			{
				p.getValue().get(inConnectionType);
			}
			if (String::equalNoCase(p.getParameterName(), "OtherConnectionType"))
			{
				p.getValue().get(inOtherConnectionType);
			}
			if (String::equalNoCase(p.getParameterName(), "Initiators"))
			{
				p.getValue().get(inInitiators);
			}
			if (String::equalNoCase(p.getParameterName(), "Targets"))
			{
				p.getValue().get(inTargets);
			}
			if (String::equalNoCase(p.getParameterName(), "LogicalUnits"))
			{
				p.getValue().get(inLogicalUnits);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeScsiScanReturnValue = _p.invokeScsiScan(

			inJob,
			inConnectionType,
			inOtherConnectionType,
			inInitiators,
			inTargets,
			inLogicalUnits
		);
		_p.finalize();
		handler.deliver(invokeScsiScanReturnValue);

	}
	else if (methodName.equal("RequestUsageChange")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RequestUsageChange method.
		Uint32 invokeRequestUsageChangeReturnValue;

		Uint16 inOperation;
		Uint16 inUsageValue;
		String inOtherUsageDescription;
		CIMInstance inJob;
		CIMInstance inTheElement;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Operation"))
			{
				p.getValue().get(inOperation);
			}
			if (String::equalNoCase(p.getParameterName(), "UsageValue"))
			{
				p.getValue().get(inUsageValue);
			}
			if (String::equalNoCase(p.getParameterName(), "OtherUsageDescription"))
			{
				p.getValue().get(inOtherUsageDescription);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "TheElement"))
			{
				p.getValue().get(inTheElement);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRequestUsageChangeReturnValue = _p.invokeRequestUsageChange(

			inOperation,
			inUsageValue,
			inOtherUsageDescription,
			inJob,
			inTheElement
		);
		_p.finalize();
		handler.deliver(invokeRequestUsageChangeReturnValue);

	}
	else if (methodName.equal("GetElementsBasedOnUsage")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetElementsBasedOnUsage method.
		Uint32 invokeGetElementsBasedOnUsageReturnValue;

		Uint16 inElementType;
		Uint16 inUsage;
		Uint16 inCriteria;
		CIMInstance inThePool;
		CIMInstance inTheElements;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "Usage"))
			{
				p.getValue().get(inUsage);
			}
			if (String::equalNoCase(p.getParameterName(), "Criteria"))
			{
				p.getValue().get(inCriteria);
			}
			if (String::equalNoCase(p.getParameterName(), "ThePool"))
			{
				p.getValue().get(inThePool);
			}
			if (String::equalNoCase(p.getParameterName(), "TheElements"))
			{
				p.getValue().get(inTheElements);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetElementsBasedOnUsageReturnValue = _p.invokeGetElementsBasedOnUsage(

			inElementType,
			inUsage,
			inCriteria,
			inThePool,
			inTheElements
		);
		_p.finalize();
		handler.deliver(invokeGetElementsBasedOnUsageReturnValue);

	}
	else if (methodName.equal("AssignStorageResourceAffinity")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AssignStorageResourceAffinity method.
		Uint32 invokeAssignStorageResourceAffinityReturnValue;

		Uint16 inResourceType;
		CIMInstance inJob;
		CIMInstance inStorageProcessor;
		CIMInstance inStorageResources;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ResourceType"))
			{
				p.getValue().get(inResourceType);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "StorageProcessor"))
			{
				p.getValue().get(inStorageProcessor);
			}
			if (String::equalNoCase(p.getParameterName(), "StorageResources"))
			{
				p.getValue().get(inStorageResources);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAssignStorageResourceAffinityReturnValue = _p.invokeAssignStorageResourceAffinity(

			inResourceType,
			inJob,
			inStorageProcessor,
			inStorageResources
		);
		_p.finalize();
		handler.deliver(invokeAssignStorageResourceAffinityReturnValue);

	}
	else if (methodName.equal("ReturnElementsToStoragePool")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ReturnElementsToStoragePool method.
		Uint32 invokeReturnElementsToStoragePoolReturnValue;

		Uint16 inOptions;
		CIMInstance inJob;
		CIMInstance inTheElements;
		
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
			if (String::equalNoCase(p.getParameterName(), "TheElements"))
			{
				p.getValue().get(inTheElements);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeReturnElementsToStoragePoolReturnValue = _p.invokeReturnElementsToStoragePool(

			inOptions,
			inJob,
			inTheElements
		);
		_p.finalize();
		handler.deliver(invokeReturnElementsToStoragePoolReturnValue);

	}
	else if (methodName.equal("CreateElementsFromStoragePools")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateElementsFromStoragePools method.
		Uint32 invokeCreateElementsFromStoragePoolsReturnValue;

		Array<String> inElementNames;
		Uint16 inElementType;
		Uint64 inElementCount;
		CIMInstance inJob;
		CIMInstance inGoal;
		Uint64 inSize;
		CIMInstance inInPools;
		CIMInstance inTheElements;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementNames"))
			{
				p.getValue().get(inElementNames);
			}
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "ElementCount"))
			{
				p.getValue().get(inElementCount);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "Size"))
			{
				p.getValue().get(inSize);
			}
			if (String::equalNoCase(p.getParameterName(), "InPools"))
			{
				p.getValue().get(inInPools);
			}
			if (String::equalNoCase(p.getParameterName(), "TheElements"))
			{
				p.getValue().get(inTheElements);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateElementsFromStoragePoolsReturnValue = _p.invokeCreateElementsFromStoragePools(

			inElementNames,
			inElementType,
			inElementCount,
			inJob,
			inGoal,
			inSize,
			inInPools,
			inTheElements
		);
		_p.finalize();
		handler.deliver(invokeCreateElementsFromStoragePoolsReturnValue);

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
		message.append("UNIX_StorageConfigurationService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_StorageConfigurationServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageConfigurationServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageConfigurationService
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageConfigurationService"
#define BASE_CLASS_NAME "CIM_StorageConfigurationService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

