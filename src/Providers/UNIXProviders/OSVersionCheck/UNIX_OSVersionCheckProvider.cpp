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


#include "UNIX_OSVersionCheckProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_OSVersionCheckProvider::UNIX_OSVersionCheckProvider()
{
}

UNIX_OSVersionCheckProvider::~UNIX_OSVersionCheckProvider()
{
}

CIMInstance UNIX_OSVersionCheckProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_OSVersionCheck &instanceObject) const
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
	
	//CIM_Check Properties
	if (instanceObject.getName(p)) inst.addProperty(p);
	if (instanceObject.getVersion(p)) inst.addProperty(p);
	if (instanceObject.getSoftwareElementState(p)) inst.addProperty(p);
	if (instanceObject.getSoftwareElementID(p)) inst.addProperty(p);
	if (instanceObject.getTargetOperatingSystem(p)) inst.addProperty(p);
	if (instanceObject.getCheckID(p)) inst.addProperty(p);
	if (instanceObject.getCheckMode(p)) inst.addProperty(p);
	if (className.equal("CIM_Check")) return inst;
	
	//CIM_OSVersionCheck Properties
	if (instanceObject.getMinimumVersion(p)) inst.addProperty(p);
	if (instanceObject.getMaximumVersion(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_OSVersionCheckProvider::constructKeyBindings(const UNIX_OSVersionCheck& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		instanceObject.getName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_VERSION,
		instanceObject.getVersion(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SOFTWARE_ELEMENT_STATE,
		CIMValue(instanceObject.getSoftwareElementState()).toString(),
		CIMKeyBinding::NUMERIC));
	keys.append(CIMKeyBinding(
		PROPERTY_SOFTWARE_ELEMENT_ID,
		instanceObject.getSoftwareElementID(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_TARGET_OPERATING_SYSTEM,
		CIMValue(instanceObject.getTargetOperatingSystem()).toString(),
		CIMKeyBinding::NUMERIC));
	keys.append(CIMKeyBinding(
		PROPERTY_CHECK_ID,
		instanceObject.getCheckID(),
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

void UNIX_OSVersionCheckProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_OSVersionCheck") && !objectReference.getClassName().equal("CIM_OSVersionCheck")) {
		String classMessage;
		classMessage.append("UNIX_OSVersionCheck Provider");
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
	
	if (methodName.equal("Invoke")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking Invoke method.
		Uint32 invokeInvokeReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeInvokeReturnValue = _p.invokeInvoke();
		_p.finalize();
		handler.deliver(invokeInvokeReturnValue);

	}
	else if (methodName.equal("InvokeOnSystem")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking InvokeOnSystem method.
		Uint32 invokeInvokeOnSystemReturnValue;

		CIMInstance inTargetSystem;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TargetSystem"))
			{
				p.getValue().get(inTargetSystem);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeInvokeOnSystemReturnValue = _p.invokeInvokeOnSystem(

			inTargetSystem
		);
		_p.finalize();
		handler.deliver(invokeInvokeOnSystemReturnValue);

	}
	else {
		String message;
		message.append("UNIX_OSVersionCheck");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_OSVersionCheckProvider
#define UNIX_PROVIDER_NAME "UNIX_OSVersionCheckProvider"
#define CLASS_IMPLEMENTATION UNIX_OSVersionCheck
#define CLASS_IMPLEMENTATION_NAME "UNIX_OSVersionCheck"
#define BASE_CLASS_NAME "CIM_OSVersionCheck"
#define NUMKEYS_CLASS_IMPLEMENTATION 6


#include "UNIXProviderBase.hpp"

