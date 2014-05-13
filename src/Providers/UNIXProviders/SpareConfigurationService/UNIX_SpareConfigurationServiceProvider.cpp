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


#include "UNIX_SpareConfigurationServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_SpareConfigurationServiceProvider::UNIX_SpareConfigurationServiceProvider()
{
}

UNIX_SpareConfigurationServiceProvider::~UNIX_SpareConfigurationServiceProvider()
{
}

CIMInstance UNIX_SpareConfigurationServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_SpareConfigurationService &instanceObject) const
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
	
	//CIM_SpareConfigurationService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_SpareConfigurationServiceProvider::constructKeyBindings(const UNIX_SpareConfigurationService& instanceObject) const
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

void UNIX_SpareConfigurationServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_SpareConfigurationService") && !objectReference.getClassName().equal("CIM_SpareConfigurationService")) {
		String classMessage;
		classMessage.append("UNIX_SpareConfigurationService Provider");
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
	
	if (methodName.equal("AssignSpares")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AssignSpares method.
		Uint32 invokeAssignSparesReturnValue;

		CIMInstance inJob;
		CIMInstance inInPool;
		CIMInstance inInExtents;
		CIMInstance inRedundancySet;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "InPool"))
			{
				p.getValue().get(inInPool);
			}
			if (String::equalNoCase(p.getParameterName(), "InExtents"))
			{
				p.getValue().get(inInExtents);
			}
			if (String::equalNoCase(p.getParameterName(), "RedundancySet"))
			{
				p.getValue().get(inRedundancySet);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAssignSparesReturnValue = _p.invokeAssignSpares(

			inJob,
			inInPool,
			inInExtents,
			inRedundancySet
		);
		_p.finalize();
		handler.deliver(invokeAssignSparesReturnValue);

	}
	else if (methodName.equal("UnassignSpares")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking UnassignSpares method.
		Uint32 invokeUnassignSparesReturnValue;

		CIMInstance inJob;
		CIMInstance inInPool;
		CIMInstance inInExtents;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "InPool"))
			{
				p.getValue().get(inInPool);
			}
			if (String::equalNoCase(p.getParameterName(), "InExtents"))
			{
				p.getValue().get(inInExtents);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeUnassignSparesReturnValue = _p.invokeUnassignSpares(

			inJob,
			inInPool,
			inInExtents
		);
		_p.finalize();
		handler.deliver(invokeUnassignSparesReturnValue);

	}
	else if (methodName.equal("RebuildStorageExtent")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RebuildStorageExtent method.
		Uint32 invokeRebuildStorageExtentReturnValue;

		CIMInstance inJob;
		CIMInstance inTarget;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Target"))
			{
				p.getValue().get(inTarget);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRebuildStorageExtentReturnValue = _p.invokeRebuildStorageExtent(

			inJob,
			inTarget
		);
		_p.finalize();
		handler.deliver(invokeRebuildStorageExtentReturnValue);

	}
	else if (methodName.equal("CheckParityConsistency")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CheckParityConsistency method.
		Uint32 invokeCheckParityConsistencyReturnValue;

		CIMInstance inJob;
		CIMInstance inTarget;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Target"))
			{
				p.getValue().get(inTarget);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCheckParityConsistencyReturnValue = _p.invokeCheckParityConsistency(

			inJob,
			inTarget
		);
		_p.finalize();
		handler.deliver(invokeCheckParityConsistencyReturnValue);

	}
	else if (methodName.equal("RepairParity")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RepairParity method.
		Uint32 invokeRepairParityReturnValue;

		CIMInstance inJob;
		CIMInstance inTarget;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Target"))
			{
				p.getValue().get(inTarget);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRepairParityReturnValue = _p.invokeRepairParity(

			inJob,
			inTarget
		);
		_p.finalize();
		handler.deliver(invokeRepairParityReturnValue);

	}
	else if (methodName.equal("GetAvailableSpareExtents")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetAvailableSpareExtents method.
		Uint32 invokeGetAvailableSpareExtentsReturnValue;

		CIMInstance inInPool;
		CIMInstance inRedundancySet;
		CIMInstance inAvailableExtents;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "InPool"))
			{
				p.getValue().get(inInPool);
			}
			if (String::equalNoCase(p.getParameterName(), "RedundancySet"))
			{
				p.getValue().get(inRedundancySet);
			}
			if (String::equalNoCase(p.getParameterName(), "AvailableExtents"))
			{
				p.getValue().get(inAvailableExtents);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetAvailableSpareExtentsReturnValue = _p.invokeGetAvailableSpareExtents(

			inInPool,
			inRedundancySet,
			inAvailableExtents
		);
		_p.finalize();
		handler.deliver(invokeGetAvailableSpareExtentsReturnValue);

	}
	else if (methodName.equal("CheckStorageElement")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CheckStorageElement method.
		Uint32 invokeCheckStorageElementReturnValue;

		Uint16 inCheckType;
		Uint16 inCheckMode;
		CIMInstance inTargetElement;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "CheckType"))
			{
				p.getValue().get(inCheckType);
			}
			if (String::equalNoCase(p.getParameterName(), "CheckMode"))
			{
				p.getValue().get(inCheckMode);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetElement"))
			{
				p.getValue().get(inTargetElement);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCheckStorageElementReturnValue = _p.invokeCheckStorageElement(

			inCheckType,
			inCheckMode,
			inTargetElement,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeCheckStorageElementReturnValue);

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
		message.append("UNIX_SpareConfigurationService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_SpareConfigurationServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_SpareConfigurationServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_SpareConfigurationService
#define CLASS_IMPLEMENTATION_NAME "UNIX_SpareConfigurationService"
#define BASE_CLASS_NAME "CIM_SpareConfigurationService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

