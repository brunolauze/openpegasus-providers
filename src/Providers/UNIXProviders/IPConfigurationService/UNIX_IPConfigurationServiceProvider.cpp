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


#include "UNIX_IPConfigurationServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_IPConfigurationServiceProvider::UNIX_IPConfigurationServiceProvider()
{
}

UNIX_IPConfigurationServiceProvider::~UNIX_IPConfigurationServiceProvider()
{
}

CIMInstance UNIX_IPConfigurationServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_IPConfigurationService &instanceObject) const
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
	
	//CIM_IPConfigurationService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_IPConfigurationServiceProvider::constructKeyBindings(const UNIX_IPConfigurationService& instanceObject) const
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

void UNIX_IPConfigurationServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_IPConfigurationService") && !objectReference.getClassName().equal("CIM_IPConfigurationService")) {
		String classMessage;
		classMessage.append("UNIX_IPConfigurationService Provider");
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
	
	if (methodName.equal("AddStaticIPv4Interface")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddStaticIPv4Interface method.
		Uint32 invokeAddStaticIPv4InterfaceReturnValue;

		CIMInstance inConfiguration;
		CIMInstance inStaticSetting;
		String inAddress;
		String inSubnetMask;
		String inGateway;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Configuration"))
			{
				p.getValue().get(inConfiguration);
			}
			if (String::equalNoCase(p.getParameterName(), "StaticSetting"))
			{
				p.getValue().get(inStaticSetting);
			}
			if (String::equalNoCase(p.getParameterName(), "Address"))
			{
				p.getValue().get(inAddress);
			}
			if (String::equalNoCase(p.getParameterName(), "SubnetMask"))
			{
				p.getValue().get(inSubnetMask);
			}
			if (String::equalNoCase(p.getParameterName(), "Gateway"))
			{
				p.getValue().get(inGateway);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddStaticIPv4InterfaceReturnValue = _p.invokeAddStaticIPv4Interface(

			inConfiguration,
			inStaticSetting,
			inAddress,
			inSubnetMask,
			inGateway
		);
		_p.finalize();
		handler.deliver(invokeAddStaticIPv4InterfaceReturnValue);

	}
	else if (methodName.equal("ApplySettingToLANEndpoint")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplySettingToLANEndpoint method.
		Uint32 invokeApplySettingToLANEndpointReturnValue;

		CIMInstance inConfiguration;
		CIMInstance inEndpoint;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Configuration"))
			{
				p.getValue().get(inConfiguration);
			}
			if (String::equalNoCase(p.getParameterName(), "Endpoint"))
			{
				p.getValue().get(inEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplySettingToLANEndpointReturnValue = _p.invokeApplySettingToLANEndpoint(

			inConfiguration,
			inEndpoint,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeApplySettingToLANEndpointReturnValue);

	}
	else if (methodName.equal("ApplySettingToIPProtocolEndpoint")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplySettingToIPProtocolEndpoint method.
		Uint32 invokeApplySettingToIPProtocolEndpointReturnValue;

		CIMInstance inConfiguration;
		CIMInstance inEndpoint;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Configuration"))
			{
				p.getValue().get(inConfiguration);
			}
			if (String::equalNoCase(p.getParameterName(), "Endpoint"))
			{
				p.getValue().get(inEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplySettingToIPProtocolEndpointReturnValue = _p.invokeApplySettingToIPProtocolEndpoint(

			inConfiguration,
			inEndpoint,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeApplySettingToIPProtocolEndpointReturnValue);

	}
	else if (methodName.equal("ApplySettingToComputerSystem")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplySettingToComputerSystem method.
		Uint32 invokeApplySettingToComputerSystemReturnValue;

		CIMInstance inIPVersionSettingData;
		CIMInstance inComputerSystem;
		Uint16 inMode;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "IPVersionSettingData"))
			{
				p.getValue().get(inIPVersionSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "ComputerSystem"))
			{
				p.getValue().get(inComputerSystem);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplySettingToComputerSystemReturnValue = _p.invokeApplySettingToComputerSystem(

			inIPVersionSettingData,
			inComputerSystem,
			inMode,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeApplySettingToComputerSystemReturnValue);

	}
	else if (methodName.equal("ApplySettingToIPNetworkConnection")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ApplySettingToIPNetworkConnection method.
		Uint32 invokeApplySettingToIPNetworkConnectionReturnValue;

		CIMInstance inSettingData;
		CIMInstance inIPVersionSettingData;
		CIMInstance inIPNetworkConnection;
		Uint16 inMode;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SettingData"))
			{
				p.getValue().get(inSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "IPVersionSettingData"))
			{
				p.getValue().get(inIPVersionSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "IPNetworkConnection"))
			{
				p.getValue().get(inIPNetworkConnection);
			}
			if (String::equalNoCase(p.getParameterName(), "Mode"))
			{
				p.getValue().get(inMode);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeApplySettingToIPNetworkConnectionReturnValue = _p.invokeApplySettingToIPNetworkConnection(

			inSettingData,
			inIPVersionSettingData,
			inIPNetworkConnection,
			inMode,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeApplySettingToIPNetworkConnectionReturnValue);

	}
	else if (methodName.equal("AddIPProtocolEndpoint")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddIPProtocolEndpoint method.
		Uint32 invokeAddIPProtocolEndpointReturnValue;

		CIMInstance inTargetInterface;
		Array<String> inIPProtocolEndpoint;
		Array<String> inEndpointSettings;
		CIMInstance inResultingEndpoint;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "TargetInterface"))
			{
				p.getValue().get(inTargetInterface);
			}
			if (String::equalNoCase(p.getParameterName(), "IPProtocolEndpoint"))
			{
				p.getValue().get(inIPProtocolEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "EndpointSettings"))
			{
				p.getValue().get(inEndpointSettings);
			}
			if (String::equalNoCase(p.getParameterName(), "ResultingEndpoint"))
			{
				p.getValue().get(inResultingEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddIPProtocolEndpointReturnValue = _p.invokeAddIPProtocolEndpoint(

			inTargetInterface,
			inIPProtocolEndpoint,
			inEndpointSettings,
			inResultingEndpoint,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeAddIPProtocolEndpointReturnValue);

	}
	else if (methodName.equal("RemoveIPProtocolEndpoint")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RemoveIPProtocolEndpoint method.
		Uint32 invokeRemoveIPProtocolEndpointReturnValue;

		CIMInstance inEndpoint;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Endpoint"))
			{
				p.getValue().get(inEndpoint);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRemoveIPProtocolEndpointReturnValue = _p.invokeRemoveIPProtocolEndpoint(

			inEndpoint,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeRemoveIPProtocolEndpointReturnValue);

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
		message.append("UNIX_IPConfigurationService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_IPConfigurationServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_IPConfigurationServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_IPConfigurationService
#define CLASS_IMPLEMENTATION_NAME "UNIX_IPConfigurationService"
#define BASE_CLASS_NAME "CIM_IPConfigurationService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

