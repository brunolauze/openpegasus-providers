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


#include "UNIX_BIOSServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_BIOSServiceProvider::UNIX_BIOSServiceProvider()
{
}

UNIX_BIOSServiceProvider::~UNIX_BIOSServiceProvider()
{
}

CIMInstance UNIX_BIOSServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_BIOSService &instanceObject) const
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
	
	//CIM_BIOSService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_BIOSServiceProvider::constructKeyBindings(const UNIX_BIOSService& instanceObject) const
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

void UNIX_BIOSServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_BIOSService") && !objectReference.getClassName().equal("CIM_BIOSService")) {
		String classMessage;
		classMessage.append("UNIX_BIOSService Provider");
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
	
	if (methodName.equal("SetBIOSAttribute")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SetBIOSAttribute method.
		Uint32 invokeSetBIOSAttributeReturnValue;

		CIMInstance inTargetBIOS;
		String inAttributeName;
		Array<String> inAttributeValue;
		String inAuthorizationToken;
		Uint32 inPasswordEncoding;
		Uint32 inSetResult;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TargetBIOS"))
			{
				p.getValue().get(inTargetBIOS);
			}
			if (String::equalNoCase(p.getParameterName(), "AttributeName"))
			{
				p.getValue().get(inAttributeName);
			}
			if (String::equalNoCase(p.getParameterName(), "AttributeValue"))
			{
				p.getValue().get(inAttributeValue);
			}
			if (String::equalNoCase(p.getParameterName(), "AuthorizationToken"))
			{
				p.getValue().get(inAuthorizationToken);
			}
			if (String::equalNoCase(p.getParameterName(), "PasswordEncoding"))
			{
				p.getValue().get(inPasswordEncoding);
			}
			if (String::equalNoCase(p.getParameterName(), "SetResult"))
			{
				p.getValue().get(inSetResult);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSetBIOSAttributeReturnValue = _p.invokeSetBIOSAttribute(

			inTargetBIOS,
			inAttributeName,
			inAttributeValue,
			inAuthorizationToken,
			inPasswordEncoding,
			inSetResult
		);
		_p.finalize();
		handler.deliver(invokeSetBIOSAttributeReturnValue);

	}
	else if (methodName.equal("SetBIOSAttributeEmbeddedInstance")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SetBIOSAttributeEmbeddedInstance method.
		Uint32 invokeSetBIOSAttributeEmbeddedInstanceReturnValue;

		CIMInstance inTargetBIOS;
		String inAttributeConfig;
		String inAuthorizationToken;
		Uint32 inPasswordEncoding;
		Uint32 inSetResult;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TargetBIOS"))
			{
				p.getValue().get(inTargetBIOS);
			}
			if (String::equalNoCase(p.getParameterName(), "AttributeConfig"))
			{
				p.getValue().get(inAttributeConfig);
			}
			if (String::equalNoCase(p.getParameterName(), "AuthorizationToken"))
			{
				p.getValue().get(inAuthorizationToken);
			}
			if (String::equalNoCase(p.getParameterName(), "PasswordEncoding"))
			{
				p.getValue().get(inPasswordEncoding);
			}
			if (String::equalNoCase(p.getParameterName(), "SetResult"))
			{
				p.getValue().get(inSetResult);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSetBIOSAttributeEmbeddedInstanceReturnValue = _p.invokeSetBIOSAttributeEmbeddedInstance(

			inTargetBIOS,
			inAttributeConfig,
			inAuthorizationToken,
			inPasswordEncoding,
			inSetResult
		);
		_p.finalize();
		handler.deliver(invokeSetBIOSAttributeEmbeddedInstanceReturnValue);

	}
	else if (methodName.equal("RestoreBIOSDefaults")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RestoreBIOSDefaults method.
		Uint32 invokeRestoreBIOSDefaultsReturnValue;

		CIMInstance inTargetBIOS;
		String inAuthorizationToken;
		Uint32 inPasswordEncoding;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TargetBIOS"))
			{
				p.getValue().get(inTargetBIOS);
			}
			if (String::equalNoCase(p.getParameterName(), "AuthorizationToken"))
			{
				p.getValue().get(inAuthorizationToken);
			}
			if (String::equalNoCase(p.getParameterName(), "PasswordEncoding"))
			{
				p.getValue().get(inPasswordEncoding);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRestoreBIOSDefaultsReturnValue = _p.invokeRestoreBIOSDefaults(

			inTargetBIOS,
			inAuthorizationToken,
			inPasswordEncoding
		);
		_p.finalize();
		handler.deliver(invokeRestoreBIOSDefaultsReturnValue);

	}
	else if (methodName.equal("ReadRawBIOSData")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ReadRawBIOSData method.
		Uint32 invokeReadRawBIOSDataReturnValue;

		CIMInstance inTargetBIOS;
		Uint32 inOffset;
		Uint32 inNumberOfBytes;
		Array<Uint8> inData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TargetBIOS"))
			{
				p.getValue().get(inTargetBIOS);
			}
			if (String::equalNoCase(p.getParameterName(), "Offset"))
			{
				p.getValue().get(inOffset);
			}
			if (String::equalNoCase(p.getParameterName(), "NumberOfBytes"))
			{
				p.getValue().get(inNumberOfBytes);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeReadRawBIOSDataReturnValue = _p.invokeReadRawBIOSData(

			inTargetBIOS,
			inOffset,
			inNumberOfBytes,
			inData
		);
		_p.finalize();
		handler.deliver(invokeReadRawBIOSDataReturnValue);

	}
	else if (methodName.equal("WriteRawBIOSData")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking WriteRawBIOSData method.
		Uint32 invokeWriteRawBIOSDataReturnValue;

		CIMInstance inTargetBIOS;
		Uint32 inOffset;
		Uint32 inNumberOfBytes;
		Array<Uint8> inData;
		String inAuthorizationToken;
		Uint32 inPasswordEncoding;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TargetBIOS"))
			{
				p.getValue().get(inTargetBIOS);
			}
			if (String::equalNoCase(p.getParameterName(), "Offset"))
			{
				p.getValue().get(inOffset);
			}
			if (String::equalNoCase(p.getParameterName(), "NumberOfBytes"))
			{
				p.getValue().get(inNumberOfBytes);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "AuthorizationToken"))
			{
				p.getValue().get(inAuthorizationToken);
			}
			if (String::equalNoCase(p.getParameterName(), "PasswordEncoding"))
			{
				p.getValue().get(inPasswordEncoding);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeWriteRawBIOSDataReturnValue = _p.invokeWriteRawBIOSData(

			inTargetBIOS,
			inOffset,
			inNumberOfBytes,
			inData,
			inAuthorizationToken,
			inPasswordEncoding
		);
		_p.finalize();
		handler.deliver(invokeWriteRawBIOSDataReturnValue);

	}
	else if (methodName.equal("SetBIOSAttributes")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SetBIOSAttributes method.
		Uint32 invokeSetBIOSAttributesReturnValue;

		CIMInstance inTargetBIOS;
		String inCollectionElementName;
		Array<String> inAttributeName;
		Array<String> inAttributeValue;
		String inAuthorizationToken;
		Uint32 inPasswordEncoding;
		Array<Uint32> inSetResult;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TargetBIOS"))
			{
				p.getValue().get(inTargetBIOS);
			}
			if (String::equalNoCase(p.getParameterName(), "CollectionElementName"))
			{
				p.getValue().get(inCollectionElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "AttributeName"))
			{
				p.getValue().get(inAttributeName);
			}
			if (String::equalNoCase(p.getParameterName(), "AttributeValue"))
			{
				p.getValue().get(inAttributeValue);
			}
			if (String::equalNoCase(p.getParameterName(), "AuthorizationToken"))
			{
				p.getValue().get(inAuthorizationToken);
			}
			if (String::equalNoCase(p.getParameterName(), "PasswordEncoding"))
			{
				p.getValue().get(inPasswordEncoding);
			}
			if (String::equalNoCase(p.getParameterName(), "SetResult"))
			{
				p.getValue().get(inSetResult);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSetBIOSAttributesReturnValue = _p.invokeSetBIOSAttributes(

			inTargetBIOS,
			inCollectionElementName,
			inAttributeName,
			inAttributeValue,
			inAuthorizationToken,
			inPasswordEncoding,
			inSetResult
		);
		_p.finalize();
		handler.deliver(invokeSetBIOSAttributesReturnValue);

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
		message.append("UNIX_BIOSService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_BIOSServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_BIOSServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_BIOSService
#define CLASS_IMPLEMENTATION_NAME "UNIX_BIOSService"
#define BASE_CLASS_NAME "CIM_BIOSService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

