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


#include "UNIX_RegisteredSubProfileProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_RegisteredSubProfileProvider::UNIX_RegisteredSubProfileProvider()
{
}

UNIX_RegisteredSubProfileProvider::~UNIX_RegisteredSubProfileProvider()
{
}

CIMInstance UNIX_RegisteredSubProfileProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_RegisteredSubProfile &instanceObject) const
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
	
	//CIM_RegisteredSpecification Properties
	if (instanceObject.getSpecificationType(p)) inst.addProperty(p);
	if (instanceObject.getOtherSpecificationType(p)) inst.addProperty(p);
	if (instanceObject.getRegisteredOrganization(p)) inst.addProperty(p);
	if (instanceObject.getOtherRegisteredOrganization(p)) inst.addProperty(p);
	if (instanceObject.getRegisteredName(p)) inst.addProperty(p);
	if (instanceObject.getRegisteredVersion(p)) inst.addProperty(p);
	if (instanceObject.getAdvertiseTypes(p)) inst.addProperty(p);
	if (instanceObject.getAdvertiseTypeDescriptions(p)) inst.addProperty(p);
	if (className.equal("UNIX_RegisteredSpecification")) return inst;
	
	//CIM_RegisteredProfile Properties
	if (instanceObject.getImplementedFeatures(p)) inst.addProperty(p);
	if (className.equal("UNIX_RegisteredProfile")) return inst;
	
	//CIM_RegisteredSubProfile Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_RegisteredSubProfileProvider::constructKeyBindings(const UNIX_RegisteredSubProfile& instanceObject) const
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

void UNIX_RegisteredSubProfileProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_RegisteredSubProfile") && !objectReference.getClassName().equal("CIM_RegisteredSubProfile")) {
		String classMessage;
		classMessage.append("UNIX_RegisteredSubProfile Provider");
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
	
	if (methodName.equal("CloseConformantInstances")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CloseConformantInstances method.
		Uint32 invokeCloseConformantInstancesReturnValue;

		String inEnumerationContext;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "EnumerationContext"))
			{
				p.getValue().get(inEnumerationContext);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCloseConformantInstancesReturnValue = _p.invokeCloseConformantInstances(

			inEnumerationContext
		);
		_p.finalize();
		handler.deliver(invokeCloseConformantInstancesReturnValue);

	}
	else if (methodName.equal("OpenConformantInstances")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking OpenConformantInstances method.
		Uint32 invokeOpenConformantInstancesReturnValue;

		String inResultClass;
		Array<String> inIncludedPropertyList;
		Uint32 inOperationTimeout;
		Boolean inContinueOnError;
		Uint32 inMaxObjectCount;
		String inEnumerationContext;
		Boolean inEndOfSequence;
		Array<Uint16> inInstanceType;
		Array<String> inInstanceWithPathList;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ResultClass"))
			{
				p.getValue().get(inResultClass);
			}
			if (String::equalNoCase(p.getParameterName(), "IncludedPropertyList"))
			{
				p.getValue().get(inIncludedPropertyList);
			}
			if (String::equalNoCase(p.getParameterName(), "OperationTimeout"))
			{
				p.getValue().get(inOperationTimeout);
			}
			if (String::equalNoCase(p.getParameterName(), "ContinueOnError"))
			{
				p.getValue().get(inContinueOnError);
			}
			if (String::equalNoCase(p.getParameterName(), "MaxObjectCount"))
			{
				p.getValue().get(inMaxObjectCount);
			}
			if (String::equalNoCase(p.getParameterName(), "EnumerationContext"))
			{
				p.getValue().get(inEnumerationContext);
			}
			if (String::equalNoCase(p.getParameterName(), "EndOfSequence"))
			{
				p.getValue().get(inEndOfSequence);
			}
			if (String::equalNoCase(p.getParameterName(), "InstanceType"))
			{
				p.getValue().get(inInstanceType);
			}
			if (String::equalNoCase(p.getParameterName(), "InstanceWithPathList"))
			{
				p.getValue().get(inInstanceWithPathList);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeOpenConformantInstancesReturnValue = _p.invokeOpenConformantInstances(

			inResultClass,
			inIncludedPropertyList,
			inOperationTimeout,
			inContinueOnError,
			inMaxObjectCount,
			inEnumerationContext,
			inEndOfSequence,
			inInstanceType,
			inInstanceWithPathList
		);
		_p.finalize();
		handler.deliver(invokeOpenConformantInstancesReturnValue);

	}
	else if (methodName.equal("PullConformantInstances")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking PullConformantInstances method.
		Uint32 invokePullConformantInstancesReturnValue;

		Uint32 inMaxObjectCount;
		String inEnumerationContext;
		Boolean inEndOfSequence;
		Array<Uint16> inInstanceType;
		Array<String> inInstanceWithPathList;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MaxObjectCount"))
			{
				p.getValue().get(inMaxObjectCount);
			}
			if (String::equalNoCase(p.getParameterName(), "EnumerationContext"))
			{
				p.getValue().get(inEnumerationContext);
			}
			if (String::equalNoCase(p.getParameterName(), "EndOfSequence"))
			{
				p.getValue().get(inEndOfSequence);
			}
			if (String::equalNoCase(p.getParameterName(), "InstanceType"))
			{
				p.getValue().get(inInstanceType);
			}
			if (String::equalNoCase(p.getParameterName(), "InstanceWithPathList"))
			{
				p.getValue().get(inInstanceWithPathList);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokePullConformantInstancesReturnValue = _p.invokePullConformantInstances(

			inMaxObjectCount,
			inEnumerationContext,
			inEndOfSequence,
			inInstanceType,
			inInstanceWithPathList
		);
		_p.finalize();
		handler.deliver(invokePullConformantInstancesReturnValue);

	}
	else if (methodName.equal("GetCentralInstances")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetCentralInstances method.
		Uint8 invokeGetCentralInstancesReturnValue;

		CIMInstance inCentralInstances;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "CentralInstances"))
			{
				p.getValue().get(inCentralInstances);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetCentralInstancesReturnValue = _p.invokeGetCentralInstances(

			inCentralInstances
		);
		_p.finalize();
		handler.deliver(invokeGetCentralInstancesReturnValue);

	}
	else {
		String message;
		message.append("UNIX_RegisteredSubProfile");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_RegisteredSubProfileProvider
#define UNIX_PROVIDER_NAME "UNIX_RegisteredSubProfileProvider"
#define CLASS_IMPLEMENTATION UNIX_RegisteredSubProfile
#define CLASS_IMPLEMENTATION_NAME "UNIX_RegisteredSubProfile"
#define BASE_CLASS_NAME "CIM_RegisteredSubProfile"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

