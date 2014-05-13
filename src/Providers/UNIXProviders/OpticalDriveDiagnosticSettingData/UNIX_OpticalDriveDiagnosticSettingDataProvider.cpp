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


#include "UNIX_OpticalDriveDiagnosticSettingDataProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_OpticalDriveDiagnosticSettingDataProvider::UNIX_OpticalDriveDiagnosticSettingDataProvider()
{
}

UNIX_OpticalDriveDiagnosticSettingDataProvider::~UNIX_OpticalDriveDiagnosticSettingDataProvider()
{
}

CIMInstance UNIX_OpticalDriveDiagnosticSettingDataProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_OpticalDriveDiagnosticSettingData &instanceObject) const
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
	
	//CIM_DiagnosticService Properties
	if (className.equal("CIM_DiagnosticService")) return inst;
	
	//CIM_DiagnosticTest Properties
	if (instanceObject.getCharacteristics(p)) inst.addProperty(p);
	if (instanceObject.getOtherCharacteristicDescription(p)) inst.addProperty(p);
	if (instanceObject.getOtherCharacteristicsDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getIsInUse(p)) inst.addProperty(p);
	if (instanceObject.getResourcesUsed(p)) inst.addProperty(p);
	if (instanceObject.getTestTypes(p)) inst.addProperty(p);
	if (instanceObject.getOtherTestTypesDescriptions(p)) inst.addProperty(p);
	if (className.equal("CIM_DiagnosticTest")) return inst;
	
	//CIM_OpticalDriveDiagnosticSettingData Properties
	if (instanceObject.getSeed(p)) inst.addProperty(p);
	if (instanceObject.getDataPatterns(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_OpticalDriveDiagnosticSettingDataProvider::constructKeyBindings(const UNIX_OpticalDriveDiagnosticSettingData& instanceObject) const
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

void UNIX_OpticalDriveDiagnosticSettingDataProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_OpticalDriveDiagnosticSettingData") && !objectReference.getClassName().equal("CIM_OpticalDriveDiagnosticSettingData")) {
		String classMessage;
		classMessage.append("UNIX_OpticalDriveDiagnosticSettingData Provider");
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
	
	if (methodName.equal("RunTest")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RunTest method.
		Uint32 invokeRunTestReturnValue;

		CIMInstance inSystemElement;
		CIMInstance inSetting;
		CIMInstance inResult;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SystemElement"))
			{
				p.getValue().get(inSystemElement);
			}
			if (String::equalNoCase(p.getParameterName(), "Setting"))
			{
				p.getValue().get(inSetting);
			}
			if (String::equalNoCase(p.getParameterName(), "Result"))
			{
				p.getValue().get(inResult);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRunTestReturnValue = _p.invokeRunTest(

			inSystemElement,
			inSetting,
			inResult
		);
		_p.finalize();
		handler.deliver(invokeRunTestReturnValue);

	}
	else if (methodName.equal("ClearResults")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ClearResults method.
		Uint32 invokeClearResultsReturnValue;

		CIMInstance inSystemElement;
		Array<String> inResultsNotCleared;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SystemElement"))
			{
				p.getValue().get(inSystemElement);
			}
			if (String::equalNoCase(p.getParameterName(), "ResultsNotCleared"))
			{
				p.getValue().get(inResultsNotCleared);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeClearResultsReturnValue = _p.invokeClearResults(

			inSystemElement,
			inResultsNotCleared
		);
		_p.finalize();
		handler.deliver(invokeClearResultsReturnValue);

	}
	else if (methodName.equal("DiscontinueTest")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DiscontinueTest method.
		Uint32 invokeDiscontinueTestReturnValue;

		CIMInstance inSystemElement;
		CIMInstance inResult;
		Boolean inTestingStopped;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SystemElement"))
			{
				p.getValue().get(inSystemElement);
			}
			if (String::equalNoCase(p.getParameterName(), "Result"))
			{
				p.getValue().get(inResult);
			}
			if (String::equalNoCase(p.getParameterName(), "TestingStopped"))
			{
				p.getValue().get(inTestingStopped);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDiscontinueTestReturnValue = _p.invokeDiscontinueTest(

			inSystemElement,
			inResult,
			inTestingStopped
		);
		_p.finalize();
		handler.deliver(invokeDiscontinueTestReturnValue);

	}
	else if (methodName.equal("RunDiagnostic")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RunDiagnostic method.
		Uint32 invokeRunDiagnosticReturnValue;

		CIMInstance inManagedElement;
		CIMInstance inDiagSetting;
		CIMInstance inJobSetting;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ManagedElement"))
			{
				p.getValue().get(inManagedElement);
			}
			if (String::equalNoCase(p.getParameterName(), "DiagSetting"))
			{
				p.getValue().get(inDiagSetting);
			}
			if (String::equalNoCase(p.getParameterName(), "JobSetting"))
			{
				p.getValue().get(inJobSetting);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRunDiagnosticReturnValue = _p.invokeRunDiagnostic(

			inManagedElement,
			inDiagSetting,
			inJobSetting,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeRunDiagnosticReturnValue);

	}
	else if (methodName.equal("RunDiagnosticService")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RunDiagnosticService method.
		Uint32 invokeRunDiagnosticServiceReturnValue;

		CIMInstance inManagedElement;
		String inDiagnosticSettings;
		String inJobSettings;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ManagedElement"))
			{
				p.getValue().get(inManagedElement);
			}
			if (String::equalNoCase(p.getParameterName(), "DiagnosticSettings"))
			{
				p.getValue().get(inDiagnosticSettings);
			}
			if (String::equalNoCase(p.getParameterName(), "JobSettings"))
			{
				p.getValue().get(inJobSettings);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRunDiagnosticServiceReturnValue = _p.invokeRunDiagnosticService(

			inManagedElement,
			inDiagnosticSettings,
			inJobSettings,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeRunDiagnosticServiceReturnValue);

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
		message.append("UNIX_OpticalDriveDiagnosticSettingData");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_OpticalDriveDiagnosticSettingDataProvider
#define UNIX_PROVIDER_NAME "UNIX_OpticalDriveDiagnosticSettingDataProvider"
#define CLASS_IMPLEMENTATION UNIX_OpticalDriveDiagnosticSettingData
#define CLASS_IMPLEMENTATION_NAME "UNIX_OpticalDriveDiagnosticSettingData"
#define BASE_CLASS_NAME "CIM_OpticalDriveDiagnosticSettingData"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

