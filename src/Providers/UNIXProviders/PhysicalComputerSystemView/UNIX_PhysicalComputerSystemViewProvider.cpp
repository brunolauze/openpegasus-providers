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


#include "UNIX_PhysicalComputerSystemViewProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_PhysicalComputerSystemViewProvider::UNIX_PhysicalComputerSystemViewProvider()
{
}

UNIX_PhysicalComputerSystemViewProvider::~UNIX_PhysicalComputerSystemViewProvider()
{
}

CIMInstance UNIX_PhysicalComputerSystemViewProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_PhysicalComputerSystemView &instanceObject) const
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
	
	//CIM_View Properties
	if (className.equal("CIM_View")) return inst;
	
	//CIM_PhysicalComputerSystemView Properties
	if (instanceObject.getEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getRequestedState(p)) inst.addProperty(p);
	if (instanceObject.getOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getHealthState(p)) inst.addProperty(p);
	if (instanceObject.getFRUInfoSupported(p)) inst.addProperty(p);
	if (instanceObject.getTag(p)) inst.addProperty(p);
	if (instanceObject.getManufacturer(p)) inst.addProperty(p);
	if (instanceObject.getModel(p)) inst.addProperty(p);
	if (instanceObject.getSKU(p)) inst.addProperty(p);
	if (instanceObject.getSerialNumber(p)) inst.addProperty(p);
	if (instanceObject.getVersion(p)) inst.addProperty(p);
	if (instanceObject.getPartNumber(p)) inst.addProperty(p);
	if (instanceObject.getPowerUtilizationModesSupported(p)) inst.addProperty(p);
	if (instanceObject.getPowerUtilizationMode(p)) inst.addProperty(p);
	if (instanceObject.getPowerAllocationLimit(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorElementName(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorHealthState(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorCurrentState(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorPrimaryStatus(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorBaseUnits(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorUnitModifier(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorRateUnits(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorCurrentReading(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorSensorType(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorOtherSensorTypeDescription(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorUpperThresholdNonCritical(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorUpperThresholdCritical(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorUpperThresholdFatal(p)) inst.addProperty(p);
	if (instanceObject.getLogInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getLogMaxNumberOfRecords(p)) inst.addProperty(p);
	if (instanceObject.getLogCurrentNumberOfRecords(p)) inst.addProperty(p);
	if (instanceObject.getLogOverWritePolicy(p)) inst.addProperty(p);
	if (instanceObject.getLogState(p)) inst.addProperty(p);
	if (instanceObject.getStructuredBootString(p)) inst.addProperty(p);
	if (instanceObject.getPersistentBootConfigOrder(p)) inst.addProperty(p);
	if (instanceObject.getOneTimeBootSource(p)) inst.addProperty(p);
	if (instanceObject.getNumberOfProcessors(p)) inst.addProperty(p);
	if (instanceObject.getNumberOfProcessorCores(p)) inst.addProperty(p);
	if (instanceObject.getNumberOfProcessorThreads(p)) inst.addProperty(p);
	if (instanceObject.getProcessorFamily(p)) inst.addProperty(p);
	if (instanceObject.getProcessorMaxClockSpeed(p)) inst.addProperty(p);
	if (instanceObject.getMemoryBlockSize(p)) inst.addProperty(p);
	if (instanceObject.getMemoryNumberOfBlocks(p)) inst.addProperty(p);
	if (instanceObject.getMemoryConsumableBlocks(p)) inst.addProperty(p);
	if (instanceObject.getCurrentBIOSMajorVersion(p)) inst.addProperty(p);
	if (instanceObject.getCurrentBIOSMinorVersion(p)) inst.addProperty(p);
	if (instanceObject.getCurrentBIOSRevisionNumber(p)) inst.addProperty(p);
	if (instanceObject.getCurrentBIOSBuildNumber(p)) inst.addProperty(p);
	if (instanceObject.getCurrentManagementFirmwareMajorVersion(p)) inst.addProperty(p);
	if (instanceObject.getCurrentManagementFirmwareMinorVersion(p)) inst.addProperty(p);
	if (instanceObject.getCurrentManagementFirmwareRevisionNumber(p)) inst.addProperty(p);
	if (instanceObject.getCurrentManagementFirmwareBuildNumber(p)) inst.addProperty(p);
	if (instanceObject.getCurrentManagementFirmwareElementName(p)) inst.addProperty(p);
	if (instanceObject.getCurrentManagementFirmwareVersionString(p)) inst.addProperty(p);
	if (instanceObject.getOSType(p)) inst.addProperty(p);
	if (instanceObject.getOSVersion(p)) inst.addProperty(p);
	if (instanceObject.getOSEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getCurrentBIOSVersionString(p)) inst.addProperty(p);
	if (instanceObject.getDedicated(p)) inst.addProperty(p);
	if (instanceObject.getIdentifyingDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getOtherDedicatedDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (instanceObject.getProcessorCurrentClockSpeed(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorContext(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorLowerThresholdCritical(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorLowerThresholdFatal(p)) inst.addProperty(p);
	if (instanceObject.getNumericSensorLowerThresholdNonCritical(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_PhysicalComputerSystemViewProvider::constructKeyBindings(const UNIX_PhysicalComputerSystemView& instanceObject) const
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

void UNIX_PhysicalComputerSystemViewProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_PhysicalComputerSystemView") && !objectReference.getClassName().equal("CIM_PhysicalComputerSystemView")) {
		String classMessage;
		classMessage.append("UNIX_PhysicalComputerSystemView Provider");
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
	
	if (methodName.equal("RequestStateChange")) {

		if (inParameters.size() != 1)
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
	else if (methodName.equal("ClearLog")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ClearLog method.
		Uint32 invokeClearLogReturnValue;

		String inLogInstanceID;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "LogInstanceID"))
			{
				p.getValue().get(inLogInstanceID);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeClearLogReturnValue = _p.invokeClearLog(

			inLogInstanceID
		);
		_p.finalize();
		handler.deliver(invokeClearLogReturnValue);

	}
	else if (methodName.equal("InstallSoftwareFromURI")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking InstallSoftwareFromURI method.
		Uint32 invokeInstallSoftwareFromURIReturnValue;

		CIMInstance inJob;
		Array<Uint16> inClassifications;
		String inURI;
		Array<Uint16> inInstallOptions;
		Array<String> inInstallOptionsValues;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Classifications"))
			{
				p.getValue().get(inClassifications);
			}
			if (String::equalNoCase(p.getParameterName(), "URI"))
			{
				p.getValue().get(inURI);
			}
			if (String::equalNoCase(p.getParameterName(), "InstallOptions"))
			{
				p.getValue().get(inInstallOptions);
			}
			if (String::equalNoCase(p.getParameterName(), "InstallOptionsValues"))
			{
				p.getValue().get(inInstallOptionsValues);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeInstallSoftwareFromURIReturnValue = _p.invokeInstallSoftwareFromURI(

			inJob,
			inClassifications,
			inURI,
			inInstallOptions,
			inInstallOptionsValues
		);
		_p.finalize();
		handler.deliver(invokeInstallSoftwareFromURIReturnValue);

	}
	else if (methodName.equal("ModifyPersistentBootConfigOrder")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifyPersistentBootConfigOrder method.
		Uint32 invokeModifyPersistentBootConfigOrderReturnValue;

		Array<String> inStructuredBootString;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "StructuredBootString"))
			{
				p.getValue().get(inStructuredBootString);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifyPersistentBootConfigOrderReturnValue = _p.invokeModifyPersistentBootConfigOrder(

			inStructuredBootString,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeModifyPersistentBootConfigOrderReturnValue);

	}
	else if (methodName.equal("SetOneTimeBootSource")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SetOneTimeBootSource method.
		Uint32 invokeSetOneTimeBootSourceReturnValue;

		String inStructuredBootString;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "StructuredBootString"))
			{
				p.getValue().get(inStructuredBootString);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSetOneTimeBootSourceReturnValue = _p.invokeSetOneTimeBootSource(

			inStructuredBootString,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeSetOneTimeBootSourceReturnValue);

	}
	else {
		String message;
		message.append("UNIX_PhysicalComputerSystemView");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_PhysicalComputerSystemViewProvider
#define UNIX_PROVIDER_NAME "UNIX_PhysicalComputerSystemViewProvider"
#define CLASS_IMPLEMENTATION UNIX_PhysicalComputerSystemView
#define CLASS_IMPLEMENTATION_NAME "UNIX_PhysicalComputerSystemView"
#define BASE_CLASS_NAME "CIM_PhysicalComputerSystemView"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

