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


#include "UNIX_SpanningTreeServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_SpanningTreeServiceProvider::UNIX_SpanningTreeServiceProvider()
{
}

UNIX_SpanningTreeServiceProvider::~UNIX_SpanningTreeServiceProvider()
{
}

CIMInstance UNIX_SpanningTreeServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_SpanningTreeService &instanceObject) const
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
	
	//CIM_NetworkService Properties
	if (instanceObject.getKeywords(p)) inst.addProperty(p);
	if (instanceObject.getServiceURL(p)) inst.addProperty(p);
	if (instanceObject.getStartupConditions(p)) inst.addProperty(p);
	if (instanceObject.getStartupParameters(p)) inst.addProperty(p);
	if (className.equal("CIM_NetworkService")) return inst;
	
	//CIM_ForwardingService Properties
	if (instanceObject.getProtocolType(p)) inst.addProperty(p);
	if (instanceObject.getOtherProtocolType(p)) inst.addProperty(p);
	if (className.equal("CIM_ForwardingService")) return inst;
	
	//CIM_SpanningTreeService Properties
	if (instanceObject.getProtocolSpec(p)) inst.addProperty(p);
	if (instanceObject.getPriority(p)) inst.addProperty(p);
	if (instanceObject.getSpanningTreeBridgeAddress(p)) inst.addProperty(p);
	if (instanceObject.getDesignatedRoot(p)) inst.addProperty(p);
	if (instanceObject.getRootCost(p)) inst.addProperty(p);
	if (instanceObject.getRootPort(p)) inst.addProperty(p);
	if (instanceObject.getMaxAge(p)) inst.addProperty(p);
	if (instanceObject.getHelloTime(p)) inst.addProperty(p);
	if (instanceObject.getHoldTime(p)) inst.addProperty(p);
	if (instanceObject.getForwardDelay(p)) inst.addProperty(p);
	if (instanceObject.getBridgeMaxAge(p)) inst.addProperty(p);
	if (instanceObject.getBridgeHelloTime(p)) inst.addProperty(p);
	if (instanceObject.getBridgeForwardDelay(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_SpanningTreeServiceProvider::constructKeyBindings(const UNIX_SpanningTreeService& instanceObject) const
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

void UNIX_SpanningTreeServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_SpanningTreeService") && !objectReference.getClassName().equal("CIM_SpanningTreeService")) {
		String classMessage;
		classMessage.append("UNIX_SpanningTreeService Provider");
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
	
	if (methodName.equal("StartService")) {

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
		message.append("UNIX_SpanningTreeService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_SpanningTreeServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_SpanningTreeServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_SpanningTreeService
#define CLASS_IMPLEMENTATION_NAME "UNIX_SpanningTreeService"
#define BASE_CLASS_NAME "CIM_SpanningTreeService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

