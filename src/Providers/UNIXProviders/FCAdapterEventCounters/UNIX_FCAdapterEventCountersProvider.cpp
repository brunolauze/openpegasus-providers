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


#include "UNIX_FCAdapterEventCountersProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_FCAdapterEventCountersProvider::UNIX_FCAdapterEventCountersProvider()
{
}

UNIX_FCAdapterEventCountersProvider::~UNIX_FCAdapterEventCountersProvider()
{
}

CIMInstance UNIX_FCAdapterEventCountersProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_FCAdapterEventCounters &instanceObject) const
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
	
	//CIM_StatisticalInformation Properties
	if (instanceObject.getName(p)) inst.addProperty(p);
	if (className.equal("CIM_StatisticalInformation")) return inst;
	
	//CIM_DeviceStatisticalInformation Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getDeviceCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (className.equal("CIM_DeviceStatisticalInformation")) return inst;
	
	//CIM_FCAdapterEventCounters Properties
	if (instanceObject.getABTSFramesReceived(p)) inst.addProperty(p);
	if (instanceObject.getABTSFramesSent(p)) inst.addProperty(p);
	if (instanceObject.getFBSYsReceived(p)) inst.addProperty(p);
	if (instanceObject.getPBSYsReceived(p)) inst.addProperty(p);
	if (instanceObject.getPBSYsSent(p)) inst.addProperty(p);
	if (instanceObject.getFRJTsReceived(p)) inst.addProperty(p);
	if (instanceObject.getPRJTsReceived(p)) inst.addProperty(p);
	if (instanceObject.getPRJTsSent(p)) inst.addProperty(p);
	if (instanceObject.getPRLIsRejected(p)) inst.addProperty(p);
	if (instanceObject.getPRLOsRejected(p)) inst.addProperty(p);
	if (instanceObject.getABTSFramesRejected(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_FCAdapterEventCountersProvider::constructKeyBindings(const UNIX_FCAdapterEventCounters& instanceObject) const
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
		PROPERTY_DEVICE_CREATION_CLASS_NAME,
		instanceObject.getDeviceCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DEVICE_ID,
		instanceObject.getDeviceID(),
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

void UNIX_FCAdapterEventCountersProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_FCAdapterEventCounters") && !objectReference.getClassName().equal("CIM_FCAdapterEventCounters")) {
		String classMessage;
		classMessage.append("UNIX_FCAdapterEventCounters Provider");
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
	
	if (methodName.equal("ResetCounter")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ResetCounter method.
		Uint32 invokeResetCounterReturnValue;

		Uint16 inSelectedCounter;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SelectedCounter"))
			{
				p.getValue().get(inSelectedCounter);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeResetCounterReturnValue = _p.invokeResetCounter(

			inSelectedCounter
		);
		_p.finalize();
		handler.deliver(invokeResetCounterReturnValue);

	}
	else {
		String message;
		message.append("UNIX_FCAdapterEventCounters");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_FCAdapterEventCountersProvider
#define UNIX_PROVIDER_NAME "UNIX_FCAdapterEventCountersProvider"
#define CLASS_IMPLEMENTATION UNIX_FCAdapterEventCounters
#define CLASS_IMPLEMENTATION_NAME "UNIX_FCAdapterEventCounters"
#define BASE_CLASS_NAME "CIM_FCAdapterEventCounters"
#define NUMKEYS_CLASS_IMPLEMENTATION 6


#include "UNIXProviderBase.hpp"

