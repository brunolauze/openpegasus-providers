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


#include "UNIX_StorageRedundancySetProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_StorageRedundancySetProvider::UNIX_StorageRedundancySetProvider()
{
}

UNIX_StorageRedundancySetProvider::~UNIX_StorageRedundancySetProvider()
{
}

CIMInstance UNIX_StorageRedundancySetProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageRedundancySet &instanceObject) const
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
	
	//CIM_Collection Properties
	if (className.equal("CIM_Collection")) return inst;
	
	//CIM_SystemSpecificCollection Properties
	if (className.equal("CIM_SystemSpecificCollection")) return inst;
	
	//CIM_RedundancySet Properties
	if (instanceObject.getRedundancyStatus(p)) inst.addProperty(p);
	if (instanceObject.getTypeOfSet(p)) inst.addProperty(p);
	if (instanceObject.getMinNumberNeeded(p)) inst.addProperty(p);
	if (instanceObject.getMaxNumberSupported(p)) inst.addProperty(p);
	if (instanceObject.getVendorIdentifyingInfo(p)) inst.addProperty(p);
	if (instanceObject.getOtherTypeOfSet(p)) inst.addProperty(p);
	if (instanceObject.getLoadBalanceAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getOtherLoadBalanceAlgorithm(p)) inst.addProperty(p);
	if (className.equal("UNIX_RedundancySet")) return inst;
	
	//CIM_StorageRedundancySet Properties
	if (instanceObject.getTypeOfAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getOtherAlgorithm(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_StorageRedundancySetProvider::constructKeyBindings(const UNIX_StorageRedundancySet& instanceObject) const
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

void UNIX_StorageRedundancySetProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_StorageRedundancySet") && !objectReference.getClassName().equal("CIM_StorageRedundancySet")) {
		String classMessage;
		classMessage.append("UNIX_StorageRedundancySet Provider");
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
	
	if (methodName.equal("Failover")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking Failover method.
		Uint32 invokeFailoverReturnValue;

		CIMInstance inFailoverFrom;
		CIMInstance inFailoverTo;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "FailoverFrom"))
			{
				p.getValue().get(inFailoverFrom);
			}
			if (String::equalNoCase(p.getParameterName(), "FailoverTo"))
			{
				p.getValue().get(inFailoverTo);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeFailoverReturnValue = _p.invokeFailover(

			inFailoverFrom,
			inFailoverTo
		);
		_p.finalize();
		handler.deliver(invokeFailoverReturnValue);

	}
	else {
		String message;
		message.append("UNIX_StorageRedundancySet");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_StorageRedundancySetProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageRedundancySetProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageRedundancySet
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageRedundancySet"
#define BASE_CLASS_NAME "CIM_StorageRedundancySet"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

