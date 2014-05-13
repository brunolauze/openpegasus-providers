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


#include "UNIX_TierServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_TierServiceProvider::UNIX_TierServiceProvider()
{
}

UNIX_TierServiceProvider::~UNIX_TierServiceProvider()
{
}

CIMInstance UNIX_TierServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_TierService &instanceObject) const
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
	
	//CIM_TierService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_TierServiceProvider::constructKeyBindings(const UNIX_TierService& instanceObject) const
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

void UNIX_TierServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_TierService") && !objectReference.getClassName().equal("CIM_TierService")) {
		String classMessage;
		classMessage.append("UNIX_TierService Provider");
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
	
	if (methodName.equal("CreateStorageTier")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateStorageTier method.
		Uint32 invokeCreateStorageTierReturnValue;

		String inElementName;
		CIMInstance inMembers;
		String inTierSettingData;
		CIMInstance inGoal;
		CIMInstance inTierDomain;
		CIMInstance inJob;
		CIMInstance inStorageTier;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "TierSettingData"))
			{
				p.getValue().get(inTierSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "TierDomain"))
			{
				p.getValue().get(inTierDomain);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "StorageTier"))
			{
				p.getValue().get(inStorageTier);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateStorageTierReturnValue = _p.invokeCreateStorageTier(

			inElementName,
			inMembers,
			inTierSettingData,
			inGoal,
			inTierDomain,
			inJob,
			inStorageTier
		);
		_p.finalize();
		handler.deliver(invokeCreateStorageTierReturnValue);

	}
	else if (methodName.equal("DeleteStorageTier")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteStorageTier method.
		Uint32 invokeDeleteStorageTierReturnValue;

		String inTierSettingData;
		CIMInstance inJob;
		CIMInstance inStorageTier;
		Boolean inForce;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TierSettingData"))
			{
				p.getValue().get(inTierSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "StorageTier"))
			{
				p.getValue().get(inStorageTier);
			}
			if (String::equalNoCase(p.getParameterName(), "Force"))
			{
				p.getValue().get(inForce);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteStorageTierReturnValue = _p.invokeDeleteStorageTier(

			inTierSettingData,
			inJob,
			inStorageTier,
			inForce
		);
		_p.finalize();
		handler.deliver(invokeDeleteStorageTierReturnValue);

	}
	else if (methodName.equal("AddToStorageTier")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddToStorageTier method.
		Uint32 invokeAddToStorageTierReturnValue;

		CIMInstance inMembers;
		String inTierSettingData;
		CIMInstance inGoal;
		CIMInstance inJob;
		CIMInstance inStorageTier;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "TierSettingData"))
			{
				p.getValue().get(inTierSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "StorageTier"))
			{
				p.getValue().get(inStorageTier);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddToStorageTierReturnValue = _p.invokeAddToStorageTier(

			inMembers,
			inTierSettingData,
			inGoal,
			inJob,
			inStorageTier
		);
		_p.finalize();
		handler.deliver(invokeAddToStorageTierReturnValue);

	}
	else if (methodName.equal("RemoveFromStorageTier")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RemoveFromStorageTier method.
		Uint32 invokeRemoveFromStorageTierReturnValue;

		CIMInstance inMembers;
		String inTierSettingData;
		CIMInstance inJob;
		CIMInstance inStorageTier;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "TierSettingData"))
			{
				p.getValue().get(inTierSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "StorageTier"))
			{
				p.getValue().get(inStorageTier);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRemoveFromStorageTierReturnValue = _p.invokeRemoveFromStorageTier(

			inMembers,
			inTierSettingData,
			inJob,
			inStorageTier
		);
		_p.finalize();
		handler.deliver(invokeRemoveFromStorageTierReturnValue);

	}
	else if (methodName.equal("CreateTierDomain")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateTierDomain method.
		Uint32 invokeCreateTierDomainReturnValue;

		String inElementName;
		String inTierSettingData;
		CIMInstance inJob;
		CIMInstance inTierDomain;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "TierSettingData"))
			{
				p.getValue().get(inTierSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "TierDomain"))
			{
				p.getValue().get(inTierDomain);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateTierDomainReturnValue = _p.invokeCreateTierDomain(

			inElementName,
			inTierSettingData,
			inJob,
			inTierDomain
		);
		_p.finalize();
		handler.deliver(invokeCreateTierDomainReturnValue);

	}
	else if (methodName.equal("DeleteTierDomain")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteTierDomain method.
		Uint32 invokeDeleteTierDomainReturnValue;

		CIMInstance inJob;
		Boolean inForce;
		CIMInstance inTierDomain;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Force"))
			{
				p.getValue().get(inForce);
			}
			if (String::equalNoCase(p.getParameterName(), "TierDomain"))
			{
				p.getValue().get(inTierDomain);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteTierDomainReturnValue = _p.invokeDeleteTierDomain(

			inJob,
			inForce,
			inTierDomain
		);
		_p.finalize();
		handler.deliver(invokeDeleteTierDomainReturnValue);

	}
	else if (methodName.equal("ModifyStorageTierDomainAssociation")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifyStorageTierDomainAssociation method.
		Uint32 invokeModifyStorageTierDomainAssociationReturnValue;

		CIMInstance inRemoveFromTierDomain;
		CIMInstance inAddToTierDomain;
		String inTierSettingData;
		CIMInstance inJob;
		CIMInstance inStorageTier;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RemoveFromTierDomain"))
			{
				p.getValue().get(inRemoveFromTierDomain);
			}
			if (String::equalNoCase(p.getParameterName(), "AddToTierDomain"))
			{
				p.getValue().get(inAddToTierDomain);
			}
			if (String::equalNoCase(p.getParameterName(), "TierSettingData"))
			{
				p.getValue().get(inTierSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "StorageTier"))
			{
				p.getValue().get(inStorageTier);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifyStorageTierDomainAssociationReturnValue = _p.invokeModifyStorageTierDomainAssociation(

			inRemoveFromTierDomain,
			inAddToTierDomain,
			inTierSettingData,
			inJob,
			inStorageTier
		);
		_p.finalize();
		handler.deliver(invokeModifyStorageTierDomainAssociationReturnValue);

	}
	else if (methodName.equal("GetStorageTierCandidateObjects")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetStorageTierCandidateObjects method.
		Uint32 invokeGetStorageTierCandidateObjectsReturnValue;

		CIMInstance inInElements;
		String inTierSettingData;
		CIMInstance inGoal;
		CIMInstance inJob;
		CIMInstance inCandidates;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "InElements"))
			{
				p.getValue().get(inInElements);
			}
			if (String::equalNoCase(p.getParameterName(), "TierSettingData"))
			{
				p.getValue().get(inTierSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
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
		invokeGetStorageTierCandidateObjectsReturnValue = _p.invokeGetStorageTierCandidateObjects(

			inInElements,
			inTierSettingData,
			inGoal,
			inJob,
			inCandidates
		);
		_p.finalize();
		handler.deliver(invokeGetStorageTierCandidateObjectsReturnValue);

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
		message.append("UNIX_TierService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_TierServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_TierServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_TierService
#define CLASS_IMPLEMENTATION_NAME "UNIX_TierService"
#define BASE_CLASS_NAME "CIM_TierService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

