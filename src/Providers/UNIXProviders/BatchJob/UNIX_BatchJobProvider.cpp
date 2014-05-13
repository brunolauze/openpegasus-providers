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


#include "UNIX_BatchJobProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_BatchJobProvider::UNIX_BatchJobProvider()
{
}

UNIX_BatchJobProvider::~UNIX_BatchJobProvider()
{
}

CIMInstance UNIX_BatchJobProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_BatchJob &instanceObject) const
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
	
	//CIM_Job Properties
	if (instanceObject.getJobStatus(p)) inst.addProperty(p);
	if (instanceObject.getTimeSubmitted(p)) inst.addProperty(p);
	if (instanceObject.getScheduledStartTime(p)) inst.addProperty(p);
	if (instanceObject.getStartTime(p)) inst.addProperty(p);
	if (instanceObject.getElapsedTime(p)) inst.addProperty(p);
	if (instanceObject.getJobRunTimes(p)) inst.addProperty(p);
	if (instanceObject.getRunMonth(p)) inst.addProperty(p);
	if (instanceObject.getRunDay(p)) inst.addProperty(p);
	if (instanceObject.getRunDayOfWeek(p)) inst.addProperty(p);
	if (instanceObject.getRunStartInterval(p)) inst.addProperty(p);
	if (instanceObject.getLocalOrUtcTime(p)) inst.addProperty(p);
	if (instanceObject.getUntilTime(p)) inst.addProperty(p);
	if (instanceObject.getNotify(p)) inst.addProperty(p);
	if (instanceObject.getOwner(p)) inst.addProperty(p);
	if (instanceObject.getPriority(p)) inst.addProperty(p);
	if (instanceObject.getPercentComplete(p)) inst.addProperty(p);
	if (instanceObject.getDeleteOnCompletion(p)) inst.addProperty(p);
	if (instanceObject.getErrorCode(p)) inst.addProperty(p);
	if (instanceObject.getErrorDescription(p)) inst.addProperty(p);
	if (instanceObject.getRecoveryAction(p)) inst.addProperty(p);
	if (instanceObject.getOtherRecoveryAction(p)) inst.addProperty(p);
	if (className.equal("CIM_Job")) return inst;
	
	//UNIX_ConcreteJob Properties
	if (instanceObject.getJobState(p)) inst.addProperty(p);
	if (instanceObject.getTimeOfLastStateChange(p)) inst.addProperty(p);
	if (instanceObject.getTimeBeforeRemoval(p)) inst.addProperty(p);
	if (instanceObject.getMethodName(p)) inst.addProperty(p);
	if (instanceObject.getJobInParameters(p)) inst.addProperty(p);
	if (instanceObject.getJobOutParameters(p)) inst.addProperty(p);
	if (className.equal("UNIX_ConcreteJob")) return inst;
	
	//CIM_BatchJob Properties
	if (instanceObject.getMaxCPUTime(p)) inst.addProperty(p);
	if (instanceObject.getTimeCompleted(p)) inst.addProperty(p);
	if (instanceObject.getJobOrigination(p)) inst.addProperty(p);
	if (instanceObject.getTask(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_BatchJobProvider::constructKeyBindings(const UNIX_BatchJob& instanceObject) const
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

void UNIX_BatchJobProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_BatchJob") && !objectReference.getClassName().equal("CIM_BatchJob")) {
		String classMessage;
		classMessage.append("UNIX_BatchJob Provider");
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

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RequestStateChange method.
		Uint32 invokeRequestStateChangeReturnValue;

		Uint16 inRequestedState;
		CIMDateTime inTimeoutPeriod;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RequestedState"))
			{
				p.getValue().get(inRequestedState);
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
			inTimeoutPeriod
		);
		_p.finalize();
		handler.deliver(invokeRequestStateChangeReturnValue);

	}
	else if (methodName.equal("GetError")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetError method.
		Uint32 invokeGetErrorReturnValue;

		String inError;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Error"))
			{
				p.getValue().get(inError);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetErrorReturnValue = _p.invokeGetError(

			inError
		);
		_p.finalize();
		handler.deliver(invokeGetErrorReturnValue);

	}
	else if (methodName.equal("GetErrors")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetErrors method.
		Uint32 invokeGetErrorsReturnValue;

		Array<String> inErrors;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Errors"))
			{
				p.getValue().get(inErrors);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetErrorsReturnValue = _p.invokeGetErrors(

			inErrors
		);
		_p.finalize();
		handler.deliver(invokeGetErrorsReturnValue);

	}
	else if (methodName.equal("ResumeWithAction")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ResumeWithAction method.
		Uint32 invokeResumeWithActionReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeResumeWithActionReturnValue = _p.invokeResumeWithAction();
		_p.finalize();
		handler.deliver(invokeResumeWithActionReturnValue);

	}
	else if (methodName.equal("ResumeWithInput")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ResumeWithInput method.
		Uint32 invokeResumeWithInputReturnValue;

		Array<String> inInputs;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Inputs"))
			{
				p.getValue().get(inInputs);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeResumeWithInputReturnValue = _p.invokeResumeWithInput(

			inInputs
		);
		_p.finalize();
		handler.deliver(invokeResumeWithInputReturnValue);

	}
	else if (methodName.equal("KillJob")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking KillJob method.
		Uint32 invokeKillJobReturnValue;

		Boolean inDeleteOnKill;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DeleteOnKill"))
			{
				p.getValue().get(inDeleteOnKill);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeKillJobReturnValue = _p.invokeKillJob(

			inDeleteOnKill
		);
		_p.finalize();
		handler.deliver(invokeKillJobReturnValue);

	}
	else {
		String message;
		message.append("UNIX_BatchJob");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_BatchJobProvider
#define UNIX_PROVIDER_NAME "UNIX_BatchJobProvider"
#define CLASS_IMPLEMENTATION UNIX_BatchJob
#define CLASS_IMPLEMENTATION_NAME "UNIX_BatchJob"
#define BASE_CLASS_NAME "CIM_BatchJob"
#define NUMKEYS_CLASS_IMPLEMENTATION 1
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

