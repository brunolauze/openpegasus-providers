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


#include "UNIX_RoleBasedAuthorizationServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_RoleBasedAuthorizationServiceProvider::UNIX_RoleBasedAuthorizationServiceProvider()
{
}

UNIX_RoleBasedAuthorizationServiceProvider::~UNIX_RoleBasedAuthorizationServiceProvider()
{
}

CIMInstance UNIX_RoleBasedAuthorizationServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_RoleBasedAuthorizationService &instanceObject) const
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
	
	//CIM_SecurityService Properties
	if (className.equal("CIM_SecurityService")) return inst;
	
	//CIM_AuthorizationService Properties
	if (className.equal("UNIX_AuthorizationService")) return inst;
	
	//CIM_PrivilegeManagementService Properties
	if (className.equal("UNIX_PrivilegeManagementService")) return inst;
	
	//CIM_RoleBasedAuthorizationService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_RoleBasedAuthorizationServiceProvider::constructKeyBindings(const UNIX_RoleBasedAuthorizationService& instanceObject) const
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

void UNIX_RoleBasedAuthorizationServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_RoleBasedAuthorizationService") && !objectReference.getClassName().equal("CIM_RoleBasedAuthorizationService")) {
		String classMessage;
		classMessage.append("UNIX_RoleBasedAuthorizationService Provider");
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
	
	if (methodName.equal("AssignRoles")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AssignRoles method.
		Uint32 invokeAssignRolesReturnValue;

		CIMInstance inIdentity;
		CIMInstance inRoles;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Identity"))
			{
				p.getValue().get(inIdentity);
			}
			if (String::equalNoCase(p.getParameterName(), "Roles"))
			{
				p.getValue().get(inRoles);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAssignRolesReturnValue = _p.invokeAssignRoles(

			inIdentity,
			inRoles
		);
		_p.finalize();
		handler.deliver(invokeAssignRolesReturnValue);

	}
	else if (methodName.equal("ModifyRole")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifyRole method.
		Uint32 invokeModifyRoleReturnValue;

		Array<String> inPrivileges;
		CIMInstance inRoleLimitedToTargets;
		CIMInstance inRole;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Privileges"))
			{
				p.getValue().get(inPrivileges);
			}
			if (String::equalNoCase(p.getParameterName(), "RoleLimitedToTargets"))
			{
				p.getValue().get(inRoleLimitedToTargets);
			}
			if (String::equalNoCase(p.getParameterName(), "Role"))
			{
				p.getValue().get(inRole);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifyRoleReturnValue = _p.invokeModifyRole(

			inPrivileges,
			inRoleLimitedToTargets,
			inRole
		);
		_p.finalize();
		handler.deliver(invokeModifyRoleReturnValue);

	}
	else if (methodName.equal("ShowRoles")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ShowRoles method.
		Uint32 invokeShowRolesReturnValue;

		CIMInstance inSubject;
		CIMInstance inTarget;
		Array<String> inRoles;
		Array<String> inPrivileges;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Subject"))
			{
				p.getValue().get(inSubject);
			}
			if (String::equalNoCase(p.getParameterName(), "Target"))
			{
				p.getValue().get(inTarget);
			}
			if (String::equalNoCase(p.getParameterName(), "Roles"))
			{
				p.getValue().get(inRoles);
			}
			if (String::equalNoCase(p.getParameterName(), "Privileges"))
			{
				p.getValue().get(inPrivileges);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeShowRolesReturnValue = _p.invokeShowRoles(

			inSubject,
			inTarget,
			inRoles,
			inPrivileges
		);
		_p.finalize();
		handler.deliver(invokeShowRolesReturnValue);

	}
	else if (methodName.equal("CreateRole")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateRole method.
		Uint32 invokeCreateRoleReturnValue;

		String inRoleTemplate;
		CIMInstance inOwningSystem;
		Array<String> inPrivileges;
		CIMInstance inRoleLimitedToTargets;
		CIMInstance inRole;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RoleTemplate"))
			{
				p.getValue().get(inRoleTemplate);
			}
			if (String::equalNoCase(p.getParameterName(), "OwningSystem"))
			{
				p.getValue().get(inOwningSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "Privileges"))
			{
				p.getValue().get(inPrivileges);
			}
			if (String::equalNoCase(p.getParameterName(), "RoleLimitedToTargets"))
			{
				p.getValue().get(inRoleLimitedToTargets);
			}
			if (String::equalNoCase(p.getParameterName(), "Role"))
			{
				p.getValue().get(inRole);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateRoleReturnValue = _p.invokeCreateRole(

			inRoleTemplate,
			inOwningSystem,
			inPrivileges,
			inRoleLimitedToTargets,
			inRole
		);
		_p.finalize();
		handler.deliver(invokeCreateRoleReturnValue);

	}
	else if (methodName.equal("DeleteRole")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteRole method.
		Uint32 invokeDeleteRoleReturnValue;

		CIMInstance inRole;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Role"))
			{
				p.getValue().get(inRole);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteRoleReturnValue = _p.invokeDeleteRole(

			inRole
		);
		_p.finalize();
		handler.deliver(invokeDeleteRoleReturnValue);

	}
	else if (methodName.equal("AssignAccess")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AssignAccess method.
		Uint32 invokeAssignAccessReturnValue;

		CIMInstance inSubject;
		Boolean inPrivilegeGranted;
		Array<Uint16> inActivities;
		Array<String> inActivityQualifiers;
		Array<Uint16> inQualifierFormats;
		CIMInstance inTarget;
		CIMInstance inPrivilege;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Subject"))
			{
				p.getValue().get(inSubject);
			}
			if (String::equalNoCase(p.getParameterName(), "PrivilegeGranted"))
			{
				p.getValue().get(inPrivilegeGranted);
			}
			if (String::equalNoCase(p.getParameterName(), "Activities"))
			{
				p.getValue().get(inActivities);
			}
			if (String::equalNoCase(p.getParameterName(), "ActivityQualifiers"))
			{
				p.getValue().get(inActivityQualifiers);
			}
			if (String::equalNoCase(p.getParameterName(), "QualifierFormats"))
			{
				p.getValue().get(inQualifierFormats);
			}
			if (String::equalNoCase(p.getParameterName(), "Target"))
			{
				p.getValue().get(inTarget);
			}
			if (String::equalNoCase(p.getParameterName(), "Privilege"))
			{
				p.getValue().get(inPrivilege);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAssignAccessReturnValue = _p.invokeAssignAccess(

			inSubject,
			inPrivilegeGranted,
			inActivities,
			inActivityQualifiers,
			inQualifierFormats,
			inTarget,
			inPrivilege
		);
		_p.finalize();
		handler.deliver(invokeAssignAccessReturnValue);

	}
	else if (methodName.equal("RemoveAccess")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RemoveAccess method.
		Uint32 invokeRemoveAccessReturnValue;

		CIMInstance inSubject;
		CIMInstance inPrivilege;
		CIMInstance inTarget;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Subject"))
			{
				p.getValue().get(inSubject);
			}
			if (String::equalNoCase(p.getParameterName(), "Privilege"))
			{
				p.getValue().get(inPrivilege);
			}
			if (String::equalNoCase(p.getParameterName(), "Target"))
			{
				p.getValue().get(inTarget);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRemoveAccessReturnValue = _p.invokeRemoveAccess(

			inSubject,
			inPrivilege,
			inTarget
		);
		_p.finalize();
		handler.deliver(invokeRemoveAccessReturnValue);

	}
	else if (methodName.equal("ShowAccess")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ShowAccess method.
		Uint32 invokeShowAccessReturnValue;

		CIMInstance inSubject;
		CIMInstance inTarget;
		CIMInstance inOutSubjects;
		CIMInstance inOutTargets;
		Array<String> inPrivileges;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Subject"))
			{
				p.getValue().get(inSubject);
			}
			if (String::equalNoCase(p.getParameterName(), "Target"))
			{
				p.getValue().get(inTarget);
			}
			if (String::equalNoCase(p.getParameterName(), "OutSubjects"))
			{
				p.getValue().get(inOutSubjects);
			}
			if (String::equalNoCase(p.getParameterName(), "OutTargets"))
			{
				p.getValue().get(inOutTargets);
			}
			if (String::equalNoCase(p.getParameterName(), "Privileges"))
			{
				p.getValue().get(inPrivileges);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeShowAccessReturnValue = _p.invokeShowAccess(

			inSubject,
			inTarget,
			inOutSubjects,
			inOutTargets,
			inPrivileges
		);
		_p.finalize();
		handler.deliver(invokeShowAccessReturnValue);

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
		message.append("UNIX_RoleBasedAuthorizationService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_RoleBasedAuthorizationServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_RoleBasedAuthorizationServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_RoleBasedAuthorizationService
#define CLASS_IMPLEMENTATION_NAME "UNIX_RoleBasedAuthorizationService"
#define BASE_CLASS_NAME "CIM_RoleBasedAuthorizationService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

