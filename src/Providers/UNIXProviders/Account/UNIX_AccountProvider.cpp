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


#include "UNIX_AccountProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_AccountProvider::UNIX_AccountProvider()
{
}

UNIX_AccountProvider::~UNIX_AccountProvider()
{
}

CIMInstance UNIX_AccountProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Account &instanceObject) const
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
	
	//CIM_Account Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getUserID(p)) inst.addProperty(p);
	if (instanceObject.getObjectClass(p)) inst.addProperty(p);
	if (instanceObject.getDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getHost(p)) inst.addProperty(p);
	if (instanceObject.getLocalityName(p)) inst.addProperty(p);
	if (instanceObject.getOrganizationName(p)) inst.addProperty(p);
	if (instanceObject.getOU(p)) inst.addProperty(p);
	if (instanceObject.getSeeAlso(p)) inst.addProperty(p);
	if (instanceObject.getUserCertificate(p)) inst.addProperty(p);
	if (instanceObject.getUserPassword(p)) inst.addProperty(p);
	if (instanceObject.getPasswordHistoryDepth(p)) inst.addProperty(p);
	if (instanceObject.getPasswordExpiration(p)) inst.addProperty(p);
	if (instanceObject.getComplexPasswordRulesEnforced(p)) inst.addProperty(p);
	if (instanceObject.getInactivityTimeout(p)) inst.addProperty(p);
	if (instanceObject.getMaximumSuccessiveLoginFailures(p)) inst.addProperty(p);
	if (instanceObject.getLastLogin(p)) inst.addProperty(p);
	if (instanceObject.getUserPasswordEncryptionAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getOtherUserPasswordEncryptionAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getUserPasswordEncoding(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_AccountProvider::constructKeyBindings(const UNIX_Account& instanceObject) const
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

void UNIX_AccountProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_Account") && !objectReference.getClassName().equal("CIM_Account")) {
		String classMessage;
		classMessage.append("UNIX_Account Provider");
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
	
	if (methodName.equal("RequestStateChange")) {

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
		message.append("UNIX_Account");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_AccountProvider
#define UNIX_PROVIDER_NAME "UNIX_AccountProvider"
#define CLASS_IMPLEMENTATION UNIX_Account
#define CLASS_IMPLEMENTATION_NAME "UNIX_Account"
#define BASE_CLASS_NAME "CIM_Account"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1

#define __createInstance_H
/*
================================================================================
NAME              : createInstance
DESCRIPTION       : Create UNIX_Account instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_AccountProvider::createInstance(
	const OperationContext& context,
	const CIMObjectPath& ref,
	const CIMInstance& instanceObject,
	ObjectPathResponseHandler& handler)
{
	if (!ref.getClassName().equal("UNIX_Account") && !ref.getClassName().equal("CIM_Account")) {
		String classMessage;
		classMessage.append("UNIX_Account Provider");
		classMessage.append (" does not support class ");
		classMessage.append (ref.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle createInstance request from object path reference.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		ref.getClassName(),
		ref.getKeyBindings());
	
	if (_p.find(localReference.getKeyBindings())) {
		throw CIMObjectAlreadyExistsException(
				localReference.toString());
	}
	else {
		if (_p.loadInstance(instanceObject)) {
			if (_p.validateInstance()) {
				if (_p.createInstance(context)) {
					/* Deliver Instance */
					CIMInstance creationResult = constructInstance(
							localReference.getClassName(), 
							CIMNamespaceName("root/cimv2"), 
							_p);
					handler.deliver(creationResult.getPath());
					/* Send Create Indication */
				}
				else {
					/* Raise Creating Exception */
				}
			}
			else {
				/* Raise Validate Exception */
			}
		}
		else {
			/* Raise Loading Exception */
		}
	}
	handler.complete();
}

#define __deleteInstance_H
/*
================================================================================
NAME              : deleteInstance
DESCRIPTION       : Delete UNIX_Account instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_AccountProvider::deleteInstance(
	const OperationContext& context,
	const CIMObjectPath& ref,
	ResponseHandler& handler)
{
	if (!ref.getClassName().equal("UNIX_Account") && !ref.getClassName().equal("CIM_Account")) {
		String classMessage;
		classMessage.append("UNIX_Account Provider");
		classMessage.append (" does not support class ");
		classMessage.append (ref.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle deleteInstance request from object path reference.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		ref.getClassName(),
		ref.getKeyBindings());
	
	if (_p.find(localReference.getKeyBindings())) {
		if (!_p.deleteInstance(context)) {
			/* Send Delete Indication */
		}
		else {
			/* Raise Delete Exception */
		}
	}
	else {
		throw CIMObjectNotFoundException(
				localReference.toString());
	}
	handler.complete();
}

#define __modifyInstance_H
/*
================================================================================
NAME              : modifyInstance
DESCRIPTION       : Modify UNIX_Account instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_AccountProvider::modifyInstance(
	const OperationContext& context,
	const CIMObjectPath& ref,
	const CIMInstance& instanceObject,
	const Boolean includeQualifiers,
	const CIMPropertyList& propertyList,
	ResponseHandler& handler)
{
	if (!ref.getClassName().equal("UNIX_Account") && !ref.getClassName().equal("CIM_Account")) {
		String classMessage;
		classMessage.append("UNIX_Account Provider");
		classMessage.append (" does not support class ");
		classMessage.append (ref.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle modifyInstance request from object path reference.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		ref.getClassName(),
		ref.getKeyBindings());
	
	if (_p.find(localReference.getKeyBindings())) {
		if (_p.loadInstance(instanceObject)) {
			if (_p.validateInstance()) {
				if (!_p.modifyInstance(context)) {
					/* Send Modify Indication */
				}
				else {
					/* Raise Modify Exception */
				}
			}
			else {
				/* Raise Validation Exception */
			}
		}
	}
	else {
		throw CIMObjectNotFoundException(
				localReference.toString());
	}
	handler.complete();
}


#include "UNIXProviderBase.hpp"

