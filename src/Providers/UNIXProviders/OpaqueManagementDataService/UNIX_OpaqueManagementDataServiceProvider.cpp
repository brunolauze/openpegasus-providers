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


#include "UNIX_OpaqueManagementDataServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_OpaqueManagementDataServiceProvider::UNIX_OpaqueManagementDataServiceProvider()
{
}

UNIX_OpaqueManagementDataServiceProvider::~UNIX_OpaqueManagementDataServiceProvider()
{
}

CIMInstance UNIX_OpaqueManagementDataServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_OpaqueManagementDataService &instanceObject) const
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
	
	//CIM_OpaqueManagementDataService Properties
	if (instanceObject.getAvailableStorage(p)) inst.addProperty(p);
	if (instanceObject.getLockTimeout(p)) inst.addProperty(p);
	if (instanceObject.getMaxCreateSize(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_OpaqueManagementDataServiceProvider::constructKeyBindings(const UNIX_OpaqueManagementDataService& instanceObject) const
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

void UNIX_OpaqueManagementDataServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_OpaqueManagementDataService") && !objectReference.getClassName().equal("CIM_OpaqueManagementDataService")) {
		String classMessage;
		classMessage.append("UNIX_OpaqueManagementDataService Provider");
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
	
	if (methodName.equal("AssignAccess")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AssignAccess method.
		Uint32 invokeAssignAccessReturnValue;

		CIMInstance inIdentity;
		CIMInstance inOpaqueManagementData;
		Array<Uint16> inActivities;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Identity"))
			{
				p.getValue().get(inIdentity);
			}
			if (String::equalNoCase(p.getParameterName(), "OpaqueManagementData"))
			{
				p.getValue().get(inOpaqueManagementData);
			}
			if (String::equalNoCase(p.getParameterName(), "Activities"))
			{
				p.getValue().get(inActivities);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAssignAccessReturnValue = _p.invokeAssignAccess(

			inIdentity,
			inOpaqueManagementData,
			inActivities
		);
		_p.finalize();
		handler.deliver(invokeAssignAccessReturnValue);

	}
	else if (methodName.equal("Create")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking Create method.
		Uint32 invokeCreateReturnValue;

		Uint64 inMaxSize;
		String inDataFormat;
		String inElementName;
		CIMInstance inOwner;
		CIMInstance inBasedOnExtent;
		CIMInstance inOpaqueManagementData;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MaxSize"))
			{
				p.getValue().get(inMaxSize);
			}
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "Owner"))
			{
				p.getValue().get(inOwner);
			}
			if (String::equalNoCase(p.getParameterName(), "BasedOnExtent"))
			{
				p.getValue().get(inBasedOnExtent);
			}
			if (String::equalNoCase(p.getParameterName(), "OpaqueManagementData"))
			{
				p.getValue().get(inOpaqueManagementData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateReturnValue = _p.invokeCreate(

			inMaxSize,
			inDataFormat,
			inElementName,
			inOwner,
			inBasedOnExtent,
			inOpaqueManagementData,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeCreateReturnValue);

	}
	else if (methodName.equal("ExportToURI")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ExportToURI method.
		Uint32 invokeExportToURIReturnValue;

		CIMInstance inOpaqueManagementData;
		Uint64 inOffset;
		Uint64 inLength;
		String inExportURI;
		Array<Uint8> inLockToken;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "OpaqueManagementData"))
			{
				p.getValue().get(inOpaqueManagementData);
			}
			if (String::equalNoCase(p.getParameterName(), "Offset"))
			{
				p.getValue().get(inOffset);
			}
			if (String::equalNoCase(p.getParameterName(), "Length"))
			{
				p.getValue().get(inLength);
			}
			if (String::equalNoCase(p.getParameterName(), "ExportURI"))
			{
				p.getValue().get(inExportURI);
			}
			if (String::equalNoCase(p.getParameterName(), "LockToken"))
			{
				p.getValue().get(inLockToken);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeExportToURIReturnValue = _p.invokeExportToURI(

			inOpaqueManagementData,
			inOffset,
			inLength,
			inExportURI,
			inLockToken,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeExportToURIReturnValue);

	}
	else if (methodName.equal("ImportFromURI")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ImportFromURI method.
		Uint32 invokeImportFromURIReturnValue;

		CIMInstance inOpaqueManagementData;
		Uint64 inOffset;
		Uint64 inLength;
		Boolean inTruncate;
		String inImportURI;
		Array<Uint8> inLockToken;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "OpaqueManagementData"))
			{
				p.getValue().get(inOpaqueManagementData);
			}
			if (String::equalNoCase(p.getParameterName(), "Offset"))
			{
				p.getValue().get(inOffset);
			}
			if (String::equalNoCase(p.getParameterName(), "Length"))
			{
				p.getValue().get(inLength);
			}
			if (String::equalNoCase(p.getParameterName(), "Truncate"))
			{
				p.getValue().get(inTruncate);
			}
			if (String::equalNoCase(p.getParameterName(), "ImportURI"))
			{
				p.getValue().get(inImportURI);
			}
			if (String::equalNoCase(p.getParameterName(), "LockToken"))
			{
				p.getValue().get(inLockToken);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeImportFromURIReturnValue = _p.invokeImportFromURI(

			inOpaqueManagementData,
			inOffset,
			inLength,
			inTruncate,
			inImportURI,
			inLockToken,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeImportFromURIReturnValue);

	}
	else if (methodName.equal("Lock")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking Lock method.
		Uint32 invokeLockReturnValue;

		CIMInstance inOpaqueManagementData;
		Boolean inLock;
		Array<Uint8> inLockToken;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "OpaqueManagementData"))
			{
				p.getValue().get(inOpaqueManagementData);
			}
			if (String::equalNoCase(p.getParameterName(), "Lock"))
			{
				p.getValue().get(inLock);
			}
			if (String::equalNoCase(p.getParameterName(), "LockToken"))
			{
				p.getValue().get(inLockToken);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeLockReturnValue = _p.invokeLock(

			inOpaqueManagementData,
			inLock,
			inLockToken
		);
		_p.finalize();
		handler.deliver(invokeLockReturnValue);

	}
	else if (methodName.equal("Read")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking Read method.
		Uint32 invokeReadReturnValue;

		CIMInstance inOpaqueManagementData;
		Uint64 inOffset;
		Uint64 inLength;
		Array<Uint8> inData;
		Array<Uint8> inLockToken;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "OpaqueManagementData"))
			{
				p.getValue().get(inOpaqueManagementData);
			}
			if (String::equalNoCase(p.getParameterName(), "Offset"))
			{
				p.getValue().get(inOffset);
			}
			if (String::equalNoCase(p.getParameterName(), "Length"))
			{
				p.getValue().get(inLength);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "LockToken"))
			{
				p.getValue().get(inLockToken);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeReadReturnValue = _p.invokeRead(

			inOpaqueManagementData,
			inOffset,
			inLength,
			inData,
			inLockToken
		);
		_p.finalize();
		handler.deliver(invokeReadReturnValue);

	}
	else if (methodName.equal("ReassignOwnership")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ReassignOwnership method.
		Uint32 invokeReassignOwnershipReturnValue;

		CIMInstance inNewOwner;
		CIMInstance inOpaqueManagementData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "NewOwner"))
			{
				p.getValue().get(inNewOwner);
			}
			if (String::equalNoCase(p.getParameterName(), "OpaqueManagementData"))
			{
				p.getValue().get(inOpaqueManagementData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeReassignOwnershipReturnValue = _p.invokeReassignOwnership(

			inNewOwner,
			inOpaqueManagementData
		);
		_p.finalize();
		handler.deliver(invokeReassignOwnershipReturnValue);

	}
	else if (methodName.equal("Write")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking Write method.
		Uint32 invokeWriteReturnValue;

		CIMInstance inOpaqueManagementData;
		Uint64 inOffset;
		Uint64 inLength;
		Boolean inTruncate;
		Array<Uint8> inData;
		Array<Uint8> inLockToken;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "OpaqueManagementData"))
			{
				p.getValue().get(inOpaqueManagementData);
			}
			if (String::equalNoCase(p.getParameterName(), "Offset"))
			{
				p.getValue().get(inOffset);
			}
			if (String::equalNoCase(p.getParameterName(), "Length"))
			{
				p.getValue().get(inLength);
			}
			if (String::equalNoCase(p.getParameterName(), "Truncate"))
			{
				p.getValue().get(inTruncate);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "LockToken"))
			{
				p.getValue().get(inLockToken);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeWriteReturnValue = _p.invokeWrite(

			inOpaqueManagementData,
			inOffset,
			inLength,
			inTruncate,
			inData,
			inLockToken,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeWriteReturnValue);

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
		message.append("UNIX_OpaqueManagementDataService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_OpaqueManagementDataServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_OpaqueManagementDataServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_OpaqueManagementDataService
#define CLASS_IMPLEMENTATION_NAME "UNIX_OpaqueManagementDataService"
#define BASE_CLASS_NAME "CIM_OpaqueManagementDataService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

