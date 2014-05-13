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


#include "UNIX_MonitorResolutionProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_MonitorResolutionProvider::UNIX_MonitorResolutionProvider()
{
}

UNIX_MonitorResolutionProvider::~UNIX_MonitorResolutionProvider()
{
}

CIMInstance UNIX_MonitorResolutionProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_MonitorResolution &instanceObject) const
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
	
	//CIM_Setting Properties
	if (instanceObject.getSettingID(p)) inst.addProperty(p);
	if (className.equal("CIM_Setting")) return inst;
	
	//CIM_MonitorResolution Properties
	if (instanceObject.getHorizontalResolution(p)) inst.addProperty(p);
	if (instanceObject.getVerticalResolution(p)) inst.addProperty(p);
	if (instanceObject.getRefreshRate(p)) inst.addProperty(p);
	if (instanceObject.getMinRefreshRate(p)) inst.addProperty(p);
	if (instanceObject.getMaxRefreshRate(p)) inst.addProperty(p);
	if (instanceObject.getScanMode(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_MonitorResolutionProvider::constructKeyBindings(const UNIX_MonitorResolution& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SETTING_ID,
		instanceObject.getSettingID(),
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

void UNIX_MonitorResolutionProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_MonitorResolution") && !objectReference.getClassName().equal("CIM_MonitorResolution")) {
		String classMessage;
		classMessage.append("UNIX_MonitorResolution Provider");
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
	
	if (methodName.equal("VerifyOKToApplyToMSE")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking VerifyOKToApplyToMSE method.
		Uint32 invokeVerifyOKToApplyToMSEReturnValue;

		CIMInstance inMSE;
		CIMDateTime inTimeToApply;
		CIMDateTime inMustBeCompletedBy;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MSE"))
			{
				p.getValue().get(inMSE);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeToApply"))
			{
				p.getValue().get(inTimeToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "MustBeCompletedBy"))
			{
				p.getValue().get(inMustBeCompletedBy);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeVerifyOKToApplyToMSEReturnValue = _p.invokeVerifyOKToApplyToMSE(

			inMSE,
			inTimeToApply,
			inMustBeCompletedBy
		);
		_p.finalize();
		handler.deliver(invokeVerifyOKToApplyToMSEReturnValue);

	}
	else if (methodName.equal("ApplyToMSE")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplyToMSE method.
		Uint32 invokeApplyToMSEReturnValue;

		CIMInstance inMSE;
		CIMDateTime inTimeToApply;
		CIMDateTime inMustBeCompletedBy;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MSE"))
			{
				p.getValue().get(inMSE);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeToApply"))
			{
				p.getValue().get(inTimeToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "MustBeCompletedBy"))
			{
				p.getValue().get(inMustBeCompletedBy);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplyToMSEReturnValue = _p.invokeApplyToMSE(

			inMSE,
			inTimeToApply,
			inMustBeCompletedBy
		);
		_p.finalize();
		handler.deliver(invokeApplyToMSEReturnValue);

	}
	else if (methodName.equal("VerifyOKToApplyToCollection")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking VerifyOKToApplyToCollection method.
		Uint32 invokeVerifyOKToApplyToCollectionReturnValue;

		CIMInstance inCollection;
		CIMDateTime inTimeToApply;
		CIMDateTime inMustBeCompletedBy;
		Array<String> inCanNotApply;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Collection"))
			{
				p.getValue().get(inCollection);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeToApply"))
			{
				p.getValue().get(inTimeToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "MustBeCompletedBy"))
			{
				p.getValue().get(inMustBeCompletedBy);
			}
			if (String::equalNoCase(p.getParameterName(), "CanNotApply"))
			{
				p.getValue().get(inCanNotApply);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeVerifyOKToApplyToCollectionReturnValue = _p.invokeVerifyOKToApplyToCollection(

			inCollection,
			inTimeToApply,
			inMustBeCompletedBy,
			inCanNotApply
		);
		_p.finalize();
		handler.deliver(invokeVerifyOKToApplyToCollectionReturnValue);

	}
	else if (methodName.equal("ApplyToCollection")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplyToCollection method.
		Uint32 invokeApplyToCollectionReturnValue;

		CIMInstance inCollection;
		CIMDateTime inTimeToApply;
		Boolean inContinueOnError;
		CIMDateTime inMustBeCompletedBy;
		Array<String> inCanNotApply;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Collection"))
			{
				p.getValue().get(inCollection);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeToApply"))
			{
				p.getValue().get(inTimeToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "ContinueOnError"))
			{
				p.getValue().get(inContinueOnError);
			}
			if (String::equalNoCase(p.getParameterName(), "MustBeCompletedBy"))
			{
				p.getValue().get(inMustBeCompletedBy);
			}
			if (String::equalNoCase(p.getParameterName(), "CanNotApply"))
			{
				p.getValue().get(inCanNotApply);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplyToCollectionReturnValue = _p.invokeApplyToCollection(

			inCollection,
			inTimeToApply,
			inContinueOnError,
			inMustBeCompletedBy,
			inCanNotApply
		);
		_p.finalize();
		handler.deliver(invokeApplyToCollectionReturnValue);

	}
	else if (methodName.equal("VerifyOKToApplyIncrementalChangeToMSE")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking VerifyOKToApplyIncrementalChangeToMSE method.
		Uint32 invokeVerifyOKToApplyIncrementalChangeToMSEReturnValue;

		CIMInstance inMSE;
		CIMDateTime inTimeToApply;
		CIMDateTime inMustBeCompletedBy;
		Array<String> inPropertiesToApply;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MSE"))
			{
				p.getValue().get(inMSE);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeToApply"))
			{
				p.getValue().get(inTimeToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "MustBeCompletedBy"))
			{
				p.getValue().get(inMustBeCompletedBy);
			}
			if (String::equalNoCase(p.getParameterName(), "PropertiesToApply"))
			{
				p.getValue().get(inPropertiesToApply);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeVerifyOKToApplyIncrementalChangeToMSEReturnValue = _p.invokeVerifyOKToApplyIncrementalChangeToMSE(

			inMSE,
			inTimeToApply,
			inMustBeCompletedBy,
			inPropertiesToApply
		);
		_p.finalize();
		handler.deliver(invokeVerifyOKToApplyIncrementalChangeToMSEReturnValue);

	}
	else if (methodName.equal("ApplyIncrementalChangeToMSE")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplyIncrementalChangeToMSE method.
		Uint32 invokeApplyIncrementalChangeToMSEReturnValue;

		CIMInstance inMSE;
		CIMDateTime inTimeToApply;
		CIMDateTime inMustBeCompletedBy;
		Array<String> inPropertiesToApply;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MSE"))
			{
				p.getValue().get(inMSE);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeToApply"))
			{
				p.getValue().get(inTimeToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "MustBeCompletedBy"))
			{
				p.getValue().get(inMustBeCompletedBy);
			}
			if (String::equalNoCase(p.getParameterName(), "PropertiesToApply"))
			{
				p.getValue().get(inPropertiesToApply);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplyIncrementalChangeToMSEReturnValue = _p.invokeApplyIncrementalChangeToMSE(

			inMSE,
			inTimeToApply,
			inMustBeCompletedBy,
			inPropertiesToApply
		);
		_p.finalize();
		handler.deliver(invokeApplyIncrementalChangeToMSEReturnValue);

	}
	else if (methodName.equal("VerifyOKToApplyIncrementalChangeToCollection")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking VerifyOKToApplyIncrementalChangeToCollection method.
		Uint32 invokeVerifyOKToApplyIncrementalChangeToCollectionReturnValue;

		CIMInstance inCollection;
		CIMDateTime inTimeToApply;
		CIMDateTime inMustBeCompletedBy;
		Array<String> inPropertiesToApply;
		Array<String> inCanNotApply;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Collection"))
			{
				p.getValue().get(inCollection);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeToApply"))
			{
				p.getValue().get(inTimeToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "MustBeCompletedBy"))
			{
				p.getValue().get(inMustBeCompletedBy);
			}
			if (String::equalNoCase(p.getParameterName(), "PropertiesToApply"))
			{
				p.getValue().get(inPropertiesToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "CanNotApply"))
			{
				p.getValue().get(inCanNotApply);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeVerifyOKToApplyIncrementalChangeToCollectionReturnValue = _p.invokeVerifyOKToApplyIncrementalChangeToCollection(

			inCollection,
			inTimeToApply,
			inMustBeCompletedBy,
			inPropertiesToApply,
			inCanNotApply
		);
		_p.finalize();
		handler.deliver(invokeVerifyOKToApplyIncrementalChangeToCollectionReturnValue);

	}
	else if (methodName.equal("ApplyIncrementalChangeToCollection")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplyIncrementalChangeToCollection method.
		Uint32 invokeApplyIncrementalChangeToCollectionReturnValue;

		CIMInstance inCollection;
		CIMDateTime inTimeToApply;
		Boolean inContinueOnError;
		CIMDateTime inMustBeCompletedBy;
		Array<String> inPropertiesToApply;
		Array<String> inCanNotApply;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Collection"))
			{
				p.getValue().get(inCollection);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeToApply"))
			{
				p.getValue().get(inTimeToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "ContinueOnError"))
			{
				p.getValue().get(inContinueOnError);
			}
			if (String::equalNoCase(p.getParameterName(), "MustBeCompletedBy"))
			{
				p.getValue().get(inMustBeCompletedBy);
			}
			if (String::equalNoCase(p.getParameterName(), "PropertiesToApply"))
			{
				p.getValue().get(inPropertiesToApply);
			}
			if (String::equalNoCase(p.getParameterName(), "CanNotApply"))
			{
				p.getValue().get(inCanNotApply);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplyIncrementalChangeToCollectionReturnValue = _p.invokeApplyIncrementalChangeToCollection(

			inCollection,
			inTimeToApply,
			inContinueOnError,
			inMustBeCompletedBy,
			inPropertiesToApply,
			inCanNotApply
		);
		_p.finalize();
		handler.deliver(invokeApplyIncrementalChangeToCollectionReturnValue);

	}
	else {
		String message;
		message.append("UNIX_MonitorResolution");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_MonitorResolutionProvider
#define UNIX_PROVIDER_NAME "UNIX_MonitorResolutionProvider"
#define CLASS_IMPLEMENTATION UNIX_MonitorResolution
#define CLASS_IMPLEMENTATION_NAME "UNIX_MonitorResolution"
#define BASE_CLASS_NAME "CIM_MonitorResolution"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

