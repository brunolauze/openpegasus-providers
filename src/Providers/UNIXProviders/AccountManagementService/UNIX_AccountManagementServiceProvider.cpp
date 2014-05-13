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


#include "UNIX_AccountManagementServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_AccountManagementServiceProvider::UNIX_AccountManagementServiceProvider()
{
}

UNIX_AccountManagementServiceProvider::~UNIX_AccountManagementServiceProvider()
{
}

CIMInstance UNIX_AccountManagementServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_AccountManagementService &instanceObject) const
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
	
	//CIM_AccountManagementService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_AccountManagementServiceProvider::constructKeyBindings(const UNIX_AccountManagementService& instanceObject) const
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

void UNIX_AccountManagementServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_AccountManagementService") && !objectReference.getClassName().equal("CIM_AccountManagementService")) {
		String classMessage;
		classMessage.append("UNIX_AccountManagementService Provider");
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
	
	if (methodName.equal("CreateAccount")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateAccount method.
		Uint32 invokeCreateAccountReturnValue;

		CIMInstance inSystem;
		String inAccountTemplate;
		CIMInstance inAccount;
		CIMInstance inIdentities;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "System"))
			{
				p.getValue().get(inSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "AccountTemplate"))
			{
				p.getValue().get(inAccountTemplate);
			}
			if (String::equalNoCase(p.getParameterName(), "Account"))
			{
				p.getValue().get(inAccount);
			}
			if (String::equalNoCase(p.getParameterName(), "Identities"))
			{
				p.getValue().get(inIdentities);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateAccountReturnValue = _p.invokeCreateAccount(

			inSystem,
			inAccountTemplate,
			inAccount,
			inIdentities
		);
		_p.finalize();
		handler.deliver(invokeCreateAccountReturnValue);

	}
	else if (methodName.equal("CreateUserContact")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateUserContact method.
		Uint32 invokeCreateUserContactReturnValue;

		CIMInstance inSystem;
		String inUserContactTemplate;
		CIMInstance inUserContact;
		CIMInstance inIdentities;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "System"))
			{
				p.getValue().get(inSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "UserContactTemplate"))
			{
				p.getValue().get(inUserContactTemplate);
			}
			if (String::equalNoCase(p.getParameterName(), "UserContact"))
			{
				p.getValue().get(inUserContact);
			}
			if (String::equalNoCase(p.getParameterName(), "Identities"))
			{
				p.getValue().get(inIdentities);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateUserContactReturnValue = _p.invokeCreateUserContact(

			inSystem,
			inUserContactTemplate,
			inUserContact,
			inIdentities
		);
		_p.finalize();
		handler.deliver(invokeCreateUserContactReturnValue);

	}
	else if (methodName.equal("CreateUserContactByIdentity")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateUserContactByIdentity method.
		Uint32 invokeCreateUserContactByIdentityReturnValue;

		CIMInstance inSystem;
		String inUserContactTemplate;
		CIMInstance inIdentity;
		CIMInstance inUserContact;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "System"))
			{
				p.getValue().get(inSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "UserContactTemplate"))
			{
				p.getValue().get(inUserContactTemplate);
			}
			if (String::equalNoCase(p.getParameterName(), "Identity"))
			{
				p.getValue().get(inIdentity);
			}
			if (String::equalNoCase(p.getParameterName(), "UserContact"))
			{
				p.getValue().get(inUserContact);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateUserContactByIdentityReturnValue = _p.invokeCreateUserContactByIdentity(

			inSystem,
			inUserContactTemplate,
			inIdentity,
			inUserContact
		);
		_p.finalize();
		handler.deliver(invokeCreateUserContactByIdentityReturnValue);

	}
	else if (methodName.equal("GetAccounts")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetAccounts method.
		Uint32 invokeGetAccountsReturnValue;

		String inUserID;
		CIMInstance inAccounts;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "UserID"))
			{
				p.getValue().get(inUserID);
			}
			if (String::equalNoCase(p.getParameterName(), "Accounts"))
			{
				p.getValue().get(inAccounts);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetAccountsReturnValue = _p.invokeGetAccounts(

			inUserID,
			inAccounts
		);
		_p.finalize();
		handler.deliver(invokeGetAccountsReturnValue);

	}
	else if (methodName.equal("GetUserContacts")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetUserContacts method.
		Uint32 invokeGetUserContactsReturnValue;

		String inUserID;
		CIMInstance inUserContacts;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "UserID"))
			{
				p.getValue().get(inUserID);
			}
			if (String::equalNoCase(p.getParameterName(), "UserContacts"))
			{
				p.getValue().get(inUserContacts);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetUserContactsReturnValue = _p.invokeGetUserContacts(

			inUserID,
			inUserContacts
		);
		_p.finalize();
		handler.deliver(invokeGetUserContactsReturnValue);

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
		message.append("UNIX_AccountManagementService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_AccountManagementServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_AccountManagementServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_AccountManagementService
#define CLASS_IMPLEMENTATION_NAME "UNIX_AccountManagementService"
#define BASE_CLASS_NAME "CIM_AccountManagementService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

