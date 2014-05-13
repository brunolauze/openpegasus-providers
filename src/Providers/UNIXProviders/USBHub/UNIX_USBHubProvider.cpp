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


#include "UNIX_USBHubProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_USBHubProvider::UNIX_USBHubProvider()
{
}

UNIX_USBHubProvider::~UNIX_USBHubProvider()
{
}

CIMInstance UNIX_USBHubProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_USBHub &instanceObject) const
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
	
	//CIM_AllocatedLogicalElement Properties
	if (instanceObject.getAllocationState(p)) inst.addProperty(p);
	if (className.equal("CIM_AllocatedLogicalElement")) return inst;
	
	//CIM_LogicalDevice Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getPowerManagementSupported(p)) inst.addProperty(p);
	if (instanceObject.getPowerManagementCapabilities(p)) inst.addProperty(p);
	if (instanceObject.getAvailability(p)) inst.addProperty(p);
	if (instanceObject.getStatusInfo(p)) inst.addProperty(p);
	if (instanceObject.getLastErrorCode(p)) inst.addProperty(p);
	if (instanceObject.getErrorDescription(p)) inst.addProperty(p);
	if (instanceObject.getErrorCleared(p)) inst.addProperty(p);
	if (instanceObject.getOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (instanceObject.getPowerOnHours(p)) inst.addProperty(p);
	if (instanceObject.getTotalPowerOnHours(p)) inst.addProperty(p);
	if (instanceObject.getIdentifyingDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getAdditionalAvailability(p)) inst.addProperty(p);
	if (instanceObject.getMaxQuiesceTime(p)) inst.addProperty(p);
	if (instanceObject.getLocationIndicator(p)) inst.addProperty(p);
	if (className.equal("CIM_LogicalDevice")) return inst;
	
	//UNIX_USBDevice Properties
	if (instanceObject.getUSBVersion(p)) inst.addProperty(p);
	if (instanceObject.getClassCode(p)) inst.addProperty(p);
	if (instanceObject.getSubclassCode(p)) inst.addProperty(p);
	if (instanceObject.getProtocolCode(p)) inst.addProperty(p);
	if (instanceObject.getUSBVersionInBCD(p)) inst.addProperty(p);
	if (instanceObject.getMaxPacketSize(p)) inst.addProperty(p);
	if (instanceObject.getVendorID(p)) inst.addProperty(p);
	if (instanceObject.getProductID(p)) inst.addProperty(p);
	if (instanceObject.getDeviceReleaseNumber(p)) inst.addProperty(p);
	if (instanceObject.getManufacturer(p)) inst.addProperty(p);
	if (instanceObject.getProduct(p)) inst.addProperty(p);
	if (instanceObject.getSerialNumber(p)) inst.addProperty(p);
	if (instanceObject.getNumberOfConfigs(p)) inst.addProperty(p);
	if (instanceObject.getCurrentConfigValue(p)) inst.addProperty(p);
	if (instanceObject.getCurrentAlternateSettings(p)) inst.addProperty(p);
	if (instanceObject.getCommandTimeout(p)) inst.addProperty(p);
	if (className.equal("UNIX_USBDevice")) return inst;
	
	//CIM_USBHub Properties
	if (instanceObject.getGangSwitched(p)) inst.addProperty(p);
	if (instanceObject.getNumberOfPorts(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_USBHubProvider::constructKeyBindings(const UNIX_USBHub& instanceObject) const
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
		PROPERTY_DEVICE_ID,
		instanceObject.getDeviceID(),
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

void UNIX_USBHubProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_USBHub") && !objectReference.getClassName().equal("CIM_USBHub")) {
		String classMessage;
		classMessage.append("UNIX_USBHub Provider");
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
	
	if (methodName.equal("GetDescriptor")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetDescriptor method.
		Uint32 invokeGetDescriptorReturnValue;

		Uint8 inRequestType;
		Uint16 inRequestValue;
		Uint16 inRequestIndex;
		Uint16 inRequestLength;
		Array<Uint8> inBuffer;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RequestType"))
			{
				p.getValue().get(inRequestType);
			}
			if (String::equalNoCase(p.getParameterName(), "RequestValue"))
			{
				p.getValue().get(inRequestValue);
			}
			if (String::equalNoCase(p.getParameterName(), "RequestIndex"))
			{
				p.getValue().get(inRequestIndex);
			}
			if (String::equalNoCase(p.getParameterName(), "RequestLength"))
			{
				p.getValue().get(inRequestLength);
			}
			if (String::equalNoCase(p.getParameterName(), "Buffer"))
			{
				p.getValue().get(inBuffer);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetDescriptorReturnValue = _p.invokeGetDescriptor(

			inRequestType,
			inRequestValue,
			inRequestIndex,
			inRequestLength,
			inBuffer
		);
		_p.finalize();
		handler.deliver(invokeGetDescriptorReturnValue);

	}
	else if (methodName.equal("SetPowerState")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SetPowerState method.
		Uint32 invokeSetPowerStateReturnValue;

		Uint16 inPowerState;
		CIMDateTime inTime;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "PowerState"))
			{
				p.getValue().get(inPowerState);
			}
			if (String::equalNoCase(p.getParameterName(), "Time"))
			{
				p.getValue().get(inTime);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSetPowerStateReturnValue = _p.invokeSetPowerState(

			inPowerState,
			inTime
		);
		_p.finalize();
		handler.deliver(invokeSetPowerStateReturnValue);

	}
	else if (methodName.equal("Reset")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking Reset method.
		Uint32 invokeResetReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeResetReturnValue = _p.invokeReset();
		_p.finalize();
		handler.deliver(invokeResetReturnValue);

	}
	else if (methodName.equal("EnableDevice")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking EnableDevice method.
		Uint32 invokeEnableDeviceReturnValue;

		Boolean inEnabled;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Enabled"))
			{
				p.getValue().get(inEnabled);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeEnableDeviceReturnValue = _p.invokeEnableDevice(

			inEnabled
		);
		_p.finalize();
		handler.deliver(invokeEnableDeviceReturnValue);

	}
	else if (methodName.equal("OnlineDevice")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking OnlineDevice method.
		Uint32 invokeOnlineDeviceReturnValue;

		Boolean inOnline;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Online"))
			{
				p.getValue().get(inOnline);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeOnlineDeviceReturnValue = _p.invokeOnlineDevice(

			inOnline
		);
		_p.finalize();
		handler.deliver(invokeOnlineDeviceReturnValue);

	}
	else if (methodName.equal("QuiesceDevice")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking QuiesceDevice method.
		Uint32 invokeQuiesceDeviceReturnValue;

		Boolean inQuiesce;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Quiesce"))
			{
				p.getValue().get(inQuiesce);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeQuiesceDeviceReturnValue = _p.invokeQuiesceDevice(

			inQuiesce
		);
		_p.finalize();
		handler.deliver(invokeQuiesceDeviceReturnValue);

	}
	else if (methodName.equal("SaveProperties")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SaveProperties method.
		Uint32 invokeSavePropertiesReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSavePropertiesReturnValue = _p.invokeSaveProperties();
		_p.finalize();
		handler.deliver(invokeSavePropertiesReturnValue);

	}
	else if (methodName.equal("RestoreProperties")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RestoreProperties method.
		Uint32 invokeRestorePropertiesReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRestorePropertiesReturnValue = _p.invokeRestoreProperties();
		_p.finalize();
		handler.deliver(invokeRestorePropertiesReturnValue);

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
		message.append("UNIX_USBHub");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_USBHubProvider
#define UNIX_PROVIDER_NAME "UNIX_USBHubProvider"
#define CLASS_IMPLEMENTATION UNIX_USBHub
#define CLASS_IMPLEMENTATION_NAME "UNIX_USBHub"
#define BASE_CLASS_NAME "CIM_USBHub"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

