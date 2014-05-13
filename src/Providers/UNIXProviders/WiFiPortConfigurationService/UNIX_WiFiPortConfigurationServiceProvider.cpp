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


#include "UNIX_WiFiPortConfigurationServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_WiFiPortConfigurationServiceProvider::UNIX_WiFiPortConfigurationServiceProvider()
{
}

UNIX_WiFiPortConfigurationServiceProvider::~UNIX_WiFiPortConfigurationServiceProvider()
{
}

CIMInstance UNIX_WiFiPortConfigurationServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_WiFiPortConfigurationService &instanceObject) const
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
	
	//CIM_NetworkPortConfigurationService Properties
	if (className.equal("UNIX_NetworkPortConfigurationService")) return inst;
	
	//CIM_WiFiPortConfigurationService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_WiFiPortConfigurationServiceProvider::constructKeyBindings(const UNIX_WiFiPortConfigurationService& instanceObject) const
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

void UNIX_WiFiPortConfigurationServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_WiFiPortConfigurationService") && !objectReference.getClassName().equal("CIM_WiFiPortConfigurationService")) {
		String classMessage;
		classMessage.append("UNIX_WiFiPortConfigurationService Provider");
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
	
	if (methodName.equal("AddWiFiSettings")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddWiFiSettings method.
		Uint32 invokeAddWiFiSettingsReturnValue;

		CIMInstance inWiFiEndpoint;
		String inWiFiEndpointSettingsInput;
		String inIEEE8021xSettingsInput;
		CIMInstance inClientCredential;
		CIMInstance inCACredential;
		CIMInstance inWiFiEndpointSettings;
		CIMInstance inIEEE8021xSettings;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "WiFiEndpoint"))
			{
				p.getValue().get(inWiFiEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "WiFiEndpointSettingsInput"))
			{
				p.getValue().get(inWiFiEndpointSettingsInput);
			}
			if (String::equalNoCase(p.getParameterName(), "IEEE8021xSettingsInput"))
			{
				p.getValue().get(inIEEE8021xSettingsInput);
			}
			if (String::equalNoCase(p.getParameterName(), "ClientCredential"))
			{
				p.getValue().get(inClientCredential);
			}
			if (String::equalNoCase(p.getParameterName(), "CACredential"))
			{
				p.getValue().get(inCACredential);
			}
			if (String::equalNoCase(p.getParameterName(), "WiFiEndpointSettings"))
			{
				p.getValue().get(inWiFiEndpointSettings);
			}
			if (String::equalNoCase(p.getParameterName(), "IEEE8021xSettings"))
			{
				p.getValue().get(inIEEE8021xSettings);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddWiFiSettingsReturnValue = _p.invokeAddWiFiSettings(

			inWiFiEndpoint,
			inWiFiEndpointSettingsInput,
			inIEEE8021xSettingsInput,
			inClientCredential,
			inCACredential,
			inWiFiEndpointSettings,
			inIEEE8021xSettings
		);
		_p.finalize();
		handler.deliver(invokeAddWiFiSettingsReturnValue);

	}
	else if (methodName.equal("UpdateWiFiSettings")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking UpdateWiFiSettings method.
		Uint32 invokeUpdateWiFiSettingsReturnValue;

		CIMInstance inWiFiEndpointSettings;
		String inWiFiEndpointSettingsInput;
		String inIEEE8021xSettingsInput;
		CIMInstance inClientCredential;
		CIMInstance inCACredential;
		CIMInstance inIEEE8021xSettings;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "WiFiEndpointSettings"))
			{
				p.getValue().get(inWiFiEndpointSettings);
			}
			if (String::equalNoCase(p.getParameterName(), "WiFiEndpointSettingsInput"))
			{
				p.getValue().get(inWiFiEndpointSettingsInput);
			}
			if (String::equalNoCase(p.getParameterName(), "IEEE8021xSettingsInput"))
			{
				p.getValue().get(inIEEE8021xSettingsInput);
			}
			if (String::equalNoCase(p.getParameterName(), "ClientCredential"))
			{
				p.getValue().get(inClientCredential);
			}
			if (String::equalNoCase(p.getParameterName(), "CACredential"))
			{
				p.getValue().get(inCACredential);
			}
			if (String::equalNoCase(p.getParameterName(), "IEEE8021xSettings"))
			{
				p.getValue().get(inIEEE8021xSettings);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeUpdateWiFiSettingsReturnValue = _p.invokeUpdateWiFiSettings(

			inWiFiEndpointSettings,
			inWiFiEndpointSettingsInput,
			inIEEE8021xSettingsInput,
			inClientCredential,
			inCACredential,
			inIEEE8021xSettings
		);
		_p.finalize();
		handler.deliver(invokeUpdateWiFiSettingsReturnValue);

	}
	else if (methodName.equal("AddLANEndpoint")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddLANEndpoint method.
		Uint32 invokeAddLANEndpointReturnValue;

		CIMInstance inPort;
		CIMInstance inEndpoint;
		String inAddress;
		String inLANID;
		Array<String> inAliasAddresses;
		Array<String> inGroupAddresses;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Port"))
			{
				p.getValue().get(inPort);
			}
			if (String::equalNoCase(p.getParameterName(), "Endpoint"))
			{
				p.getValue().get(inEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Address"))
			{
				p.getValue().get(inAddress);
			}
			if (String::equalNoCase(p.getParameterName(), "LANID"))
			{
				p.getValue().get(inLANID);
			}
			if (String::equalNoCase(p.getParameterName(), "AliasAddresses"))
			{
				p.getValue().get(inAliasAddresses);
			}
			if (String::equalNoCase(p.getParameterName(), "GroupAddresses"))
			{
				p.getValue().get(inGroupAddresses);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddLANEndpointReturnValue = _p.invokeAddLANEndpoint(

			inPort,
			inEndpoint,
			inAddress,
			inLANID,
			inAliasAddresses,
			inGroupAddresses
		);
		_p.finalize();
		handler.deliver(invokeAddLANEndpointReturnValue);

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
		message.append("UNIX_WiFiPortConfigurationService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_WiFiPortConfigurationServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_WiFiPortConfigurationServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_WiFiPortConfigurationService
#define CLASS_IMPLEMENTATION_NAME "UNIX_WiFiPortConfigurationService"
#define BASE_CLASS_NAME "CIM_WiFiPortConfigurationService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

