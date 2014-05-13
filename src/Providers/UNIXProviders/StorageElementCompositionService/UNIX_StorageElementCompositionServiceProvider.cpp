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


#include "UNIX_StorageElementCompositionServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_StorageElementCompositionServiceProvider::UNIX_StorageElementCompositionServiceProvider()
{
}

UNIX_StorageElementCompositionServiceProvider::~UNIX_StorageElementCompositionServiceProvider()
{
}

CIMInstance UNIX_StorageElementCompositionServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageElementCompositionService &instanceObject) const
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
	
	//CIM_StorageElementCompositionService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_StorageElementCompositionServiceProvider::constructKeyBindings(const UNIX_StorageElementCompositionService& instanceObject) const
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

void UNIX_StorageElementCompositionServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_StorageElementCompositionService") && !objectReference.getClassName().equal("CIM_StorageElementCompositionService")) {
		String classMessage;
		classMessage.append("UNIX_StorageElementCompositionService Provider");
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
	
	if (methodName.equal("CreateOrModifyCompositeElement")) {

		if (inParameters.size() != 10)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateOrModifyCompositeElement method.
		Uint32 invokeCreateOrModifyCompositeElementReturnValue;

		String inElementName;
		Uint16 inElementType;
		CIMInstance inJob;
		CIMInstance inGoal;
		CIMInstance inRepresentativeElement;
		Uint64 inSize;
		CIMInstance inInElements;
		CIMInstance inTheElement;
		Uint16 inCompositeType;
		Uint16 inElementSource;
		
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
			if (String::equalNoCase(p.getParameterName(), "RepresentativeElement"))
			{
				p.getValue().get(inRepresentativeElement);
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
			if (String::equalNoCase(p.getParameterName(), "CompositeType"))
			{
				p.getValue().get(inCompositeType);
			}
			if (String::equalNoCase(p.getParameterName(), "ElementSource"))
			{
				p.getValue().get(inElementSource);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateOrModifyCompositeElementReturnValue = _p.invokeCreateOrModifyCompositeElement(

			inElementName,
			inElementType,
			inJob,
			inGoal,
			inRepresentativeElement,
			inSize,
			inInElements,
			inTheElement,
			inCompositeType,
			inElementSource
		);
		_p.finalize();
		handler.deliver(invokeCreateOrModifyCompositeElementReturnValue);

	}
	else if (methodName.equal("ReturnElementToElements")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ReturnElementToElements method.
		Uint32 invokeReturnElementToElementsReturnValue;

		CIMInstance inJob;
		CIMInstance inTheElement;
		CIMInstance inOutElements;
		
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
			if (String::equalNoCase(p.getParameterName(), "OutElements"))
			{
				p.getValue().get(inOutElements);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeReturnElementToElementsReturnValue = _p.invokeReturnElementToElements(

			inJob,
			inTheElement,
			inOutElements
		);
		_p.finalize();
		handler.deliver(invokeReturnElementToElementsReturnValue);

	}
	else if (methodName.equal("RemoveElementsFromElement")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RemoveElementsFromElement method.
		Uint32 invokeRemoveElementsFromElementReturnValue;

		CIMInstance inJob;
		CIMInstance inTheElement;
		CIMInstance inInElements;
		
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
			if (String::equalNoCase(p.getParameterName(), "InElements"))
			{
				p.getValue().get(inInElements);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRemoveElementsFromElementReturnValue = _p.invokeRemoveElementsFromElement(

			inJob,
			inTheElement,
			inInElements
		);
		_p.finalize();
		handler.deliver(invokeRemoveElementsFromElementReturnValue);

	}
	else if (methodName.equal("GetAvailableElements")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetAvailableElements method.
		Uint32 invokeGetAvailableElementsReturnValue;

		CIMInstance inJob;
		CIMInstance inInPools;
		CIMInstance inGoal;
		Uint16 inElementType;
		CIMInstance inRepresentativeElement;
		CIMInstance inCandidates;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "InPools"))
			{
				p.getValue().get(inInPools);
			}
			if (String::equalNoCase(p.getParameterName(), "Goal"))
			{
				p.getValue().get(inGoal);
			}
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "RepresentativeElement"))
			{
				p.getValue().get(inRepresentativeElement);
			}
			if (String::equalNoCase(p.getParameterName(), "Candidates"))
			{
				p.getValue().get(inCandidates);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetAvailableElementsReturnValue = _p.invokeGetAvailableElements(

			inJob,
			inInPools,
			inGoal,
			inElementType,
			inRepresentativeElement,
			inCandidates
		);
		_p.finalize();
		handler.deliver(invokeGetAvailableElementsReturnValue);

	}
	else if (methodName.equal("GetCompositeElements")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetCompositeElements method.
		Uint32 invokeGetCompositeElementsReturnValue;

		CIMInstance inJob;
		CIMInstance inTheElement;
		Uint16 inRequestType;
		CIMInstance inOutElements;
		Array<Uint16> inOutElementTypes;
		
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
			if (String::equalNoCase(p.getParameterName(), "RequestType"))
			{
				p.getValue().get(inRequestType);
			}
			if (String::equalNoCase(p.getParameterName(), "OutElements"))
			{
				p.getValue().get(inOutElements);
			}
			if (String::equalNoCase(p.getParameterName(), "OutElementTypes"))
			{
				p.getValue().get(inOutElementTypes);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetCompositeElementsReturnValue = _p.invokeGetCompositeElements(

			inJob,
			inTheElement,
			inRequestType,
			inOutElements,
			inOutElementTypes
		);
		_p.finalize();
		handler.deliver(invokeGetCompositeElementsReturnValue);

	}
	else if (methodName.equal("GetSupportedStripeLengths")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStripeLengths method.
		Uint32 invokeGetSupportedStripeLengthsReturnValue;

		Uint16 inElementType;
		Array<Uint64> inStripeLengths;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "StripeLengths"))
			{
				p.getValue().get(inStripeLengths);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedStripeLengthsReturnValue = _p.invokeGetSupportedStripeLengths(

			inElementType,
			inStripeLengths
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStripeLengthsReturnValue);

	}
	else if (methodName.equal("GetSupportedStripeLengthRange")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStripeLengthRange method.
		Uint32 invokeGetSupportedStripeLengthRangeReturnValue;

		Uint16 inElementType;
		Uint64 inMinimumStripeLength;
		Uint64 inMaximumStripeLength;
		Uint64 inStripeLengthDivisor;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "MinimumStripeLength"))
			{
				p.getValue().get(inMinimumStripeLength);
			}
			if (String::equalNoCase(p.getParameterName(), "MaximumStripeLength"))
			{
				p.getValue().get(inMaximumStripeLength);
			}
			if (String::equalNoCase(p.getParameterName(), "StripeLengthDivisor"))
			{
				p.getValue().get(inStripeLengthDivisor);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedStripeLengthRangeReturnValue = _p.invokeGetSupportedStripeLengthRange(

			inElementType,
			inMinimumStripeLength,
			inMaximumStripeLength,
			inStripeLengthDivisor
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStripeLengthRangeReturnValue);

	}
	else if (methodName.equal("GetSupportedStripeDepths")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStripeDepths method.
		Uint32 invokeGetSupportedStripeDepthsReturnValue;

		Uint16 inElementType;
		Array<Uint64> inStripeDepths;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "StripeDepths"))
			{
				p.getValue().get(inStripeDepths);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedStripeDepthsReturnValue = _p.invokeGetSupportedStripeDepths(

			inElementType,
			inStripeDepths
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStripeDepthsReturnValue);

	}
	else if (methodName.equal("GetSupportedStripeDepthRange")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStripeDepthRange method.
		Uint32 invokeGetSupportedStripeDepthRangeReturnValue;

		Uint16 inElementType;
		Uint64 inMinimumStripeDepth;
		Uint64 inMaximumStripeDepth;
		Uint64 inStripeDepthDivisor;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementType"))
			{
				p.getValue().get(inElementType);
			}
			if (String::equalNoCase(p.getParameterName(), "MinimumStripeDepth"))
			{
				p.getValue().get(inMinimumStripeDepth);
			}
			if (String::equalNoCase(p.getParameterName(), "MaximumStripeDepth"))
			{
				p.getValue().get(inMaximumStripeDepth);
			}
			if (String::equalNoCase(p.getParameterName(), "StripeDepthDivisor"))
			{
				p.getValue().get(inStripeDepthDivisor);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedStripeDepthRangeReturnValue = _p.invokeGetSupportedStripeDepthRange(

			inElementType,
			inMinimumStripeDepth,
			inMaximumStripeDepth,
			inStripeDepthDivisor
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStripeDepthRangeReturnValue);

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
		message.append("UNIX_StorageElementCompositionService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_StorageElementCompositionServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageElementCompositionServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageElementCompositionService
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageElementCompositionService"
#define BASE_CLASS_NAME "CIM_StorageElementCompositionService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

