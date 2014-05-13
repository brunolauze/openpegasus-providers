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


#include "UNIX_FileSystemReplicationServiceCapabilitiesProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_FileSystemReplicationServiceCapabilitiesProvider::UNIX_FileSystemReplicationServiceCapabilitiesProvider()
{
}

UNIX_FileSystemReplicationServiceCapabilitiesProvider::~UNIX_FileSystemReplicationServiceCapabilitiesProvider()
{
}

CIMInstance UNIX_FileSystemReplicationServiceCapabilitiesProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_FileSystemReplicationServiceCapabilities &instanceObject) const
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
	
	//CIM_Capabilities Properties
	if (className.equal("CIM_Capabilities")) return inst;
	
	//CIM_FileSystemReplicationServiceCapabilities Properties
	if (instanceObject.getSupportedReplicationTypes(p)) inst.addProperty(p);
	if (instanceObject.getSupportedStorageObjects(p)) inst.addProperty(p);
	if (instanceObject.getSupportedAsynchronousActions(p)) inst.addProperty(p);
	if (instanceObject.getSupportedSynchronousActions(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_FileSystemReplicationServiceCapabilitiesProvider::constructKeyBindings(const UNIX_FileSystemReplicationServiceCapabilities& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
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

void UNIX_FileSystemReplicationServiceCapabilitiesProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_FileSystemReplicationServiceCapabilities") && !objectReference.getClassName().equal("CIM_FileSystemReplicationServiceCapabilities")) {
		String classMessage;
		classMessage.append("UNIX_FileSystemReplicationServiceCapabilities Provider");
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
	
	if (methodName.equal("ConvertSyncTypeToReplicationType")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ConvertSyncTypeToReplicationType method.
		Uint32 invokeConvertSyncTypeToReplicationTypeReturnValue;

		Uint16 inSyncType;
		Uint16 inMode;
		Uint16 inLocalOrRemote;
		Uint16 inSupportedReplicationTypes;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "LocalOrRemote"))
			{
				p.getValue().get(inLocalOrRemote);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedReplicationTypes"))
			{
				p.getValue().get(inSupportedReplicationTypes);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeConvertSyncTypeToReplicationTypeReturnValue = _p.invokeConvertSyncTypeToReplicationType(

			inSyncType,
			inMode,
			inLocalOrRemote,
			inSupportedReplicationTypes
		);
		_p.finalize();
		handler.deliver(invokeConvertSyncTypeToReplicationTypeReturnValue);

	}
	else if (methodName.equal("ConvertReplicationTypeToSyncType")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ConvertReplicationTypeToSyncType method.
		Uint32 invokeConvertReplicationTypeToSyncTypeReturnValue;

		Uint16 inReplicationType;
		Uint16 inSyncType;
		Uint16 inMode;
		Uint16 inLocalOrRemote;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncType"))
			{
				p.getValue().get(inSyncType);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "LocalOrRemote"))
			{
				p.getValue().get(inLocalOrRemote);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeConvertReplicationTypeToSyncTypeReturnValue = _p.invokeConvertReplicationTypeToSyncType(

			inReplicationType,
			inSyncType,
			inMode,
			inLocalOrRemote
		);
		_p.finalize();
		handler.deliver(invokeConvertReplicationTypeToSyncTypeReturnValue);

	}
	else if (methodName.equal("GetSupportedCopyStates")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedCopyStates method.
		Uint32 invokeGetSupportedCopyStatesReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inSupportedCopyStates;
		Array<Boolean> inHostAccessible;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedCopyStates"))
			{
				p.getValue().get(inSupportedCopyStates);
			}
			if (String::equalNoCase(p.getParameterName(), "HostAccessible"))
			{
				p.getValue().get(inHostAccessible);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedCopyStatesReturnValue = _p.invokeGetSupportedCopyStates(

			inReplicationType,
			inSupportedCopyStates,
			inHostAccessible
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedCopyStatesReturnValue);

	}
	else if (methodName.equal("GetSupportedGroupCopyStates")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedGroupCopyStates method.
		Uint32 invokeGetSupportedGroupCopyStatesReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inSupportedCopyStates;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedCopyStates"))
			{
				p.getValue().get(inSupportedCopyStates);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedGroupCopyStatesReturnValue = _p.invokeGetSupportedGroupCopyStates(

			inReplicationType,
			inSupportedCopyStates
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedGroupCopyStatesReturnValue);

	}
	else if (methodName.equal("GetSupportedWaitForCopyStates")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedWaitForCopyStates method.
		Uint32 invokeGetSupportedWaitForCopyStatesReturnValue;

		Uint16 inReplicationType;
		Uint16 inMethodName;
		Array<Uint16> inSupportedCopyStates;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "MethodName"))
			{
				p.getValue().get(inMethodName);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedCopyStates"))
			{
				p.getValue().get(inSupportedCopyStates);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedWaitForCopyStatesReturnValue = _p.invokeGetSupportedWaitForCopyStates(

			inReplicationType,
			inMethodName,
			inSupportedCopyStates
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedWaitForCopyStatesReturnValue);

	}
	else if (methodName.equal("GetSupportedFeatures")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedFeatures method.
		Uint32 invokeGetSupportedFeaturesReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inFeatures;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "Features"))
			{
				p.getValue().get(inFeatures);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedFeaturesReturnValue = _p.invokeGetSupportedFeatures(

			inReplicationType,
			inFeatures
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedFeaturesReturnValue);

	}
	else if (methodName.equal("GetSupportedGroupFeatures")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedGroupFeatures method.
		Uint32 invokeGetSupportedGroupFeaturesReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inGroupFeatures;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "GroupFeatures"))
			{
				p.getValue().get(inGroupFeatures);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedGroupFeaturesReturnValue = _p.invokeGetSupportedGroupFeatures(

			inReplicationType,
			inGroupFeatures
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedGroupFeaturesReturnValue);

	}
	else if (methodName.equal("GetSupportedConsistency")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedConsistency method.
		Uint32 invokeGetSupportedConsistencyReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inSupportedConsistency;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedConsistency"))
			{
				p.getValue().get(inSupportedConsistency);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedConsistencyReturnValue = _p.invokeGetSupportedConsistency(

			inReplicationType,
			inSupportedConsistency
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedConsistencyReturnValue);

	}
	else if (methodName.equal("GetSupportedOperations")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedOperations method.
		Uint32 invokeGetSupportedOperationsReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inSupportedOperations;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedOperations"))
			{
				p.getValue().get(inSupportedOperations);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedOperationsReturnValue = _p.invokeGetSupportedOperations(

			inReplicationType,
			inSupportedOperations
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedOperationsReturnValue);

	}
	else if (methodName.equal("GetSupportedGroupOperations")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedGroupOperations method.
		Uint32 invokeGetSupportedGroupOperationsReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inSupportedGroupOperations;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedGroupOperations"))
			{
				p.getValue().get(inSupportedGroupOperations);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedGroupOperationsReturnValue = _p.invokeGetSupportedGroupOperations(

			inReplicationType,
			inSupportedGroupOperations
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedGroupOperationsReturnValue);

	}
	else if (methodName.equal("GetSupportedListOperations")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedListOperations method.
		Uint32 invokeGetSupportedListOperationsReturnValue;

		Uint16 inReplicationType;
		Uint16 inSynchronizationType;
		Array<Uint16> inSupportedListOperations;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SynchronizationType"))
			{
				p.getValue().get(inSynchronizationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedListOperations"))
			{
				p.getValue().get(inSupportedListOperations);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedListOperationsReturnValue = _p.invokeGetSupportedListOperations(

			inReplicationType,
			inSynchronizationType,
			inSupportedListOperations
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedListOperationsReturnValue);

	}
	else if (methodName.equal("GetSupportedSettingsDefineStateOperations")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedSettingsDefineStateOperations method.
		Uint32 invokeGetSupportedSettingsDefineStateOperationsReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inSupportedOperations;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedOperations"))
			{
				p.getValue().get(inSupportedOperations);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedSettingsDefineStateOperationsReturnValue = _p.invokeGetSupportedSettingsDefineStateOperations(

			inReplicationType,
			inSupportedOperations
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedSettingsDefineStateOperationsReturnValue);

	}
	else if (methodName.equal("GetSupportedThinProvisioningFeatures")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedThinProvisioningFeatures method.
		Uint32 invokeGetSupportedThinProvisioningFeaturesReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inSupportedThinProvisioningFeatures;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedThinProvisioningFeatures"))
			{
				p.getValue().get(inSupportedThinProvisioningFeatures);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedThinProvisioningFeaturesReturnValue = _p.invokeGetSupportedThinProvisioningFeatures(

			inReplicationType,
			inSupportedThinProvisioningFeatures
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedThinProvisioningFeaturesReturnValue);

	}
	else if (methodName.equal("GetSupportedMaximum")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedMaximum method.
		Uint32 invokeGetSupportedMaximumReturnValue;

		Uint16 inReplicationType;
		Uint16 inComponent;
		Uint16 inMaxValue;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "Component"))
			{
				p.getValue().get(inComponent);
			}
			if (String::equalNoCase(p.getParameterName(), "MaxValue"))
			{
				p.getValue().get(inMaxValue);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedMaximumReturnValue = _p.invokeGetSupportedMaximum(

			inReplicationType,
			inComponent,
			inMaxValue
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedMaximumReturnValue);

	}
	else if (methodName.equal("GetDefaultConsistency")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetDefaultConsistency method.
		Uint32 invokeGetDefaultConsistencyReturnValue;

		Uint16 inReplicationType;
		Uint16 inDefaultConsistency;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "DefaultConsistency"))
			{
				p.getValue().get(inDefaultConsistency);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetDefaultConsistencyReturnValue = _p.invokeGetDefaultConsistency(

			inReplicationType,
			inDefaultConsistency
		);
		_p.finalize();
		handler.deliver(invokeGetDefaultConsistencyReturnValue);

	}
	else if (methodName.equal("GetDefaultGroupPersistency")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetDefaultGroupPersistency method.
		Uint32 invokeGetDefaultGroupPersistencyReturnValue;

		Uint16 inDefaultGroupPersistency;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DefaultGroupPersistency"))
			{
				p.getValue().get(inDefaultGroupPersistency);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetDefaultGroupPersistencyReturnValue = _p.invokeGetDefaultGroupPersistency(

			inDefaultGroupPersistency
		);
		_p.finalize();
		handler.deliver(invokeGetDefaultGroupPersistencyReturnValue);

	}
	else if (methodName.equal("GetSupportedReplicationSettingData")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedReplicationSettingData method.
		Uint32 invokeGetSupportedReplicationSettingDataReturnValue;

		Uint16 inReplicationType;
		Uint16 inPropertyName;
		Array<Uint64> inSupportedValues;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "PropertyName"))
			{
				p.getValue().get(inPropertyName);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedValues"))
			{
				p.getValue().get(inSupportedValues);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedReplicationSettingDataReturnValue = _p.invokeGetSupportedReplicationSettingData(

			inReplicationType,
			inPropertyName,
			inSupportedValues
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedReplicationSettingDataReturnValue);

	}
	else if (methodName.equal("GetDefaultReplicationSettingData")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetDefaultReplicationSettingData method.
		Uint32 invokeGetDefaultReplicationSettingDataReturnValue;

		Uint16 inReplicationType;
		String inDefaultInstance;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "DefaultInstance"))
			{
				p.getValue().get(inDefaultInstance);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetDefaultReplicationSettingDataReturnValue = _p.invokeGetDefaultReplicationSettingData(

			inReplicationType,
			inDefaultInstance
		);
		_p.finalize();
		handler.deliver(invokeGetDefaultReplicationSettingDataReturnValue);

	}
	else if (methodName.equal("GetSupportedConnectionFeatures")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedConnectionFeatures method.
		Uint32 invokeGetSupportedConnectionFeaturesReturnValue;

		CIMInstance inconnection;
		Array<Uint16> inSupportedConnectionFeatures;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "connection"))
			{
				p.getValue().get(inconnection);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedConnectionFeatures"))
			{
				p.getValue().get(inSupportedConnectionFeatures);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedConnectionFeaturesReturnValue = _p.invokeGetSupportedConnectionFeatures(

			inconnection,
			inSupportedConnectionFeatures
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedConnectionFeaturesReturnValue);

	}
	else if (methodName.equal("GetSynchronizationSupported")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSynchronizationSupported method.
		Uint32 invokeGetSynchronizationSupportedReturnValue;

		CIMInstance inLocalElement;
		CIMInstance inOtherElement;
		CIMInstance inOtherElementAccessPoint;
		Uint16 inMethodName;
		String inReplicationSettingData;
		Array<Uint16> inSyncTypes;
		Array<Uint16> inModes;
		Array<Uint16> inLocalElementRole;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "LocalElement"))
			{
				p.getValue().get(inLocalElement);
			}
			if (String::equalNoCase(p.getParameterName(), "OtherElement"))
			{
				p.getValue().get(inOtherElement);
			}
			if (String::equalNoCase(p.getParameterName(), "OtherElementAccessPoint"))
			{
				p.getValue().get(inOtherElementAccessPoint);
			}
			if (String::equalNoCase(p.getParameterName(), "MethodName"))
			{
				p.getValue().get(inMethodName);
			}
			if (String::equalNoCase(p.getParameterName(), "ReplicationSettingData"))
			{
				p.getValue().get(inReplicationSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "SyncTypes"))
			{
				p.getValue().get(inSyncTypes);
			}
			if (String::equalNoCase(p.getParameterName(), "Modes"))
			{
				p.getValue().get(inModes);
			}
			if (String::equalNoCase(p.getParameterName(), "LocalElementRole"))
			{
				p.getValue().get(inLocalElementRole);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSynchronizationSupportedReturnValue = _p.invokeGetSynchronizationSupported(

			inLocalElement,
			inOtherElement,
			inOtherElementAccessPoint,
			inMethodName,
			inReplicationSettingData,
			inSyncTypes,
			inModes,
			inLocalElementRole
		);
		_p.finalize();
		handler.deliver(invokeGetSynchronizationSupportedReturnValue);

	}
	else if (methodName.equal("GetSupportedStorageCompressionFeatures")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStorageCompressionFeatures method.
		Uint32 invokeGetSupportedStorageCompressionFeaturesReturnValue;

		Uint16 inReplicationType;
		Array<Uint16> inSupportedStorageCompressionFeatures;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ReplicationType"))
			{
				p.getValue().get(inReplicationType);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedStorageCompressionFeatures"))
			{
				p.getValue().get(inSupportedStorageCompressionFeatures);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedStorageCompressionFeaturesReturnValue = _p.invokeGetSupportedStorageCompressionFeatures(

			inReplicationType,
			inSupportedStorageCompressionFeatures
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStorageCompressionFeaturesReturnValue);

	}
	else if (methodName.equal("CreateGoalSettings")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateGoalSettings method.
		Uint16 invokeCreateGoalSettingsReturnValue;

		Array<String> inTemplateGoalSettings;
		Array<String> inSupportedGoalSettings;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TemplateGoalSettings"))
			{
				p.getValue().get(inTemplateGoalSettings);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedGoalSettings"))
			{
				p.getValue().get(inSupportedGoalSettings);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateGoalSettingsReturnValue = _p.invokeCreateGoalSettings(

			inTemplateGoalSettings,
			inSupportedGoalSettings
		);
		_p.finalize();
		handler.deliver(invokeCreateGoalSettingsReturnValue);

	}
	else {
		String message;
		message.append("UNIX_FileSystemReplicationServiceCapabilities");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_FileSystemReplicationServiceCapabilitiesProvider
#define UNIX_PROVIDER_NAME "UNIX_FileSystemReplicationServiceCapabilitiesProvider"
#define CLASS_IMPLEMENTATION UNIX_FileSystemReplicationServiceCapabilities
#define CLASS_IMPLEMENTATION_NAME "UNIX_FileSystemReplicationServiceCapabilities"
#define BASE_CLASS_NAME "CIM_FileSystemReplicationServiceCapabilities"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

