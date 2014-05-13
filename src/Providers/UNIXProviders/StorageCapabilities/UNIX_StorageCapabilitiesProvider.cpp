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


#include "UNIX_StorageCapabilitiesProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_StorageCapabilitiesProvider::UNIX_StorageCapabilitiesProvider()
{
}

UNIX_StorageCapabilitiesProvider::~UNIX_StorageCapabilitiesProvider()
{
}

CIMInstance UNIX_StorageCapabilitiesProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageCapabilities &instanceObject) const
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
	
	//CIM_Capabilities Properties
	if (className.equal("CIM_Capabilities")) return inst;
	
	//CIM_StorageCapabilities Properties
	if (instanceObject.getElementType(p)) inst.addProperty(p);
	if (instanceObject.getNoSinglePointOfFailure(p)) inst.addProperty(p);
	if (instanceObject.getNoSinglePointOfFailureDefault(p)) inst.addProperty(p);
	if (instanceObject.getDataRedundancyMax(p)) inst.addProperty(p);
	if (instanceObject.getDataRedundancyMin(p)) inst.addProperty(p);
	if (instanceObject.getDataRedundancyDefault(p)) inst.addProperty(p);
	if (instanceObject.getPackageRedundancyMax(p)) inst.addProperty(p);
	if (instanceObject.getPackageRedundancyMin(p)) inst.addProperty(p);
	if (instanceObject.getPackageRedundancyDefault(p)) inst.addProperty(p);
	if (instanceObject.getDeltaReservationMax(p)) inst.addProperty(p);
	if (instanceObject.getDeltaReservationMin(p)) inst.addProperty(p);
	if (instanceObject.getDeltaReservationDefault(p)) inst.addProperty(p);
	if (instanceObject.getExtentStripeLengthDefault(p)) inst.addProperty(p);
	if (instanceObject.getParityLayoutDefault(p)) inst.addProperty(p);
	if (instanceObject.getUserDataStripeDepthDefault(p)) inst.addProperty(p);
	if (instanceObject.getAvailableDiskType(p)) inst.addProperty(p);
	if (instanceObject.getAvailableFormFactorType(p)) inst.addProperty(p);
	if (instanceObject.getEncryption(p)) inst.addProperty(p);
	if (instanceObject.getSupportedDataOrganizations(p)) inst.addProperty(p);
	if (instanceObject.getAvailableInterconnectSpeed(p)) inst.addProperty(p);
	if (instanceObject.getAvailableInterconnectType(p)) inst.addProperty(p);
	if (instanceObject.getAvailableRPM(p)) inst.addProperty(p);
	if (instanceObject.getSupportedCompressionRates(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_StorageCapabilitiesProvider::constructKeyBindings(const UNIX_StorageCapabilities& instanceObject) const
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

void UNIX_StorageCapabilitiesProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_StorageCapabilities") && !objectReference.getClassName().equal("CIM_StorageCapabilities")) {
		String classMessage;
		classMessage.append("UNIX_StorageCapabilities Provider");
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
	
	if (methodName.equal("CreateSetting")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateSetting method.
		Uint32 invokeCreateSettingReturnValue;

		Uint16 inSettingType;
		CIMInstance inNewSetting;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SettingType"))
			{
				p.getValue().get(inSettingType);
			}
			if (String::equalNoCase(p.getParameterName(), "NewSetting"))
			{
				p.getValue().get(inNewSetting);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateSettingReturnValue = _p.invokeCreateSetting(

			inSettingType,
			inNewSetting
		);
		_p.finalize();
		handler.deliver(invokeCreateSettingReturnValue);

	}
	else if (methodName.equal("GetSupportedStripeLengths")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStripeLengths method.
		Uint32 invokeGetSupportedStripeLengthsReturnValue;

		Array<Uint16> inStripeLengths;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "StripeLengths"))
			{
				p.getValue().get(inStripeLengths);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedStripeLengthsReturnValue = _p.invokeGetSupportedStripeLengths(

			inStripeLengths
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStripeLengthsReturnValue);

	}
	else if (methodName.equal("GetSupportedStripeLengthRange")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStripeLengthRange method.
		Uint32 invokeGetSupportedStripeLengthRangeReturnValue;

		Uint16 inMinimumStripeLength;
		Uint16 inMaximumStripeLength;
		Uint32 inStripeLengthDivisor;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
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

			inMinimumStripeLength,
			inMaximumStripeLength,
			inStripeLengthDivisor
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStripeLengthRangeReturnValue);

	}
	else if (methodName.equal("GetSupportedParityLayouts")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedParityLayouts method.
		Uint32 invokeGetSupportedParityLayoutsReturnValue;

		Array<Uint16> inParityLayout;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ParityLayout"))
			{
				p.getValue().get(inParityLayout);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedParityLayoutsReturnValue = _p.invokeGetSupportedParityLayouts(

			inParityLayout
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedParityLayoutsReturnValue);

	}
	else if (methodName.equal("GetSupportedStripeDepths")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStripeDepths method.
		Uint32 invokeGetSupportedStripeDepthsReturnValue;

		Array<Uint64> inStripeDepths;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "StripeDepths"))
			{
				p.getValue().get(inStripeDepths);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSupportedStripeDepthsReturnValue = _p.invokeGetSupportedStripeDepths(

			inStripeDepths
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStripeDepthsReturnValue);

	}
	else if (methodName.equal("GetSupportedStripeDepthRange")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSupportedStripeDepthRange method.
		Uint32 invokeGetSupportedStripeDepthRangeReturnValue;

		Uint64 inMinimumStripeDepth;
		Uint64 inMaximumStripeDepth;
		Uint64 inStripeDepthDivisor;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
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

			inMinimumStripeDepth,
			inMaximumStripeDepth,
			inStripeDepthDivisor
		);
		_p.finalize();
		handler.deliver(invokeGetSupportedStripeDepthRangeReturnValue);

	}
	else if (methodName.equal("CreateGoalSettings")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateGoalSettings method.
		Uint16 invokeCreateGoalSettingsReturnValue;

		Array<String> inTemplateGoalSettings;
		Array<String> inSupportedGoalSettings;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TemplateGoalSettings"))
			{
				p.getValue().get(inTemplateGoalSettings);
			}
			if (String::equalNoCase(p.getParameterName(), "SupportedGoalSettings"))
			{
				p.getValue().get(inSupportedGoalSettings);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateGoalSettingsReturnValue = _p.invokeCreateGoalSettings(

			inTemplateGoalSettings,
			inSupportedGoalSettings
		);
		_p.finalize();
		handler.deliver(invokeCreateGoalSettingsReturnValue);

	}
	else {
		String message;
		message.append("UNIX_StorageCapabilities");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_StorageCapabilitiesProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageCapabilitiesProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageCapabilities
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageCapabilities"
#define BASE_CLASS_NAME "CIM_StorageCapabilities"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

