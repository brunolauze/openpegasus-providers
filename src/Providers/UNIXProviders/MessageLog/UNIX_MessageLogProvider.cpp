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


#include "UNIX_MessageLogProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_MessageLogProvider::UNIX_MessageLogProvider()
{
}

UNIX_MessageLogProvider::~UNIX_MessageLogProvider()
{
}

CIMInstance UNIX_MessageLogProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_MessageLog &instanceObject) const
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
	
	//CIM_Log Properties
	if (instanceObject.getMaxNumberOfRecords(p)) inst.addProperty(p);
	if (instanceObject.getCurrentNumberOfRecords(p)) inst.addProperty(p);
	if (instanceObject.getLogState(p)) inst.addProperty(p);
	if (instanceObject.getOverwritePolicy(p)) inst.addProperty(p);
	if (className.equal("CIM_Log")) return inst;
	
	//CIM_MessageLog Properties
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getCapabilities(p)) inst.addProperty(p);
	if (instanceObject.getCapabilitiesDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getMaxLogSize(p)) inst.addProperty(p);
	if (instanceObject.getSizeOfHeader(p)) inst.addProperty(p);
	if (instanceObject.getHeaderFormat(p)) inst.addProperty(p);
	if (instanceObject.getMaxRecordSize(p)) inst.addProperty(p);
	if (instanceObject.getSizeOfRecordHeader(p)) inst.addProperty(p);
	if (instanceObject.getRecordHeaderFormat(p)) inst.addProperty(p);
	if (instanceObject.getOtherPolicyDescription(p)) inst.addProperty(p);
	if (instanceObject.getTimeWhenOutdated(p)) inst.addProperty(p);
	if (instanceObject.getPercentageNearFull(p)) inst.addProperty(p);
	if (instanceObject.getLastChange(p)) inst.addProperty(p);
	if (instanceObject.getTimeOfLastChange(p)) inst.addProperty(p);
	if (instanceObject.getRecordLastChanged(p)) inst.addProperty(p);
	if (instanceObject.getIsFrozen(p)) inst.addProperty(p);
	if (instanceObject.getCharacterSet(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_MessageLogProvider::constructKeyBindings(const UNIX_MessageLog& instanceObject) const
{

	Array<CIMKeyBinding> keys;

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

void UNIX_MessageLogProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_MessageLog") && !objectReference.getClassName().equal("CIM_MessageLog")) {
		String classMessage;
		classMessage.append("UNIX_MessageLog Provider");
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
	
	if (methodName.equal("PositionToFirstRecord")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking PositionToFirstRecord method.
		Uint32 invokePositionToFirstRecordReturnValue;

		String inIterationIdentifier;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "IterationIdentifier"))
			{
				p.getValue().get(inIterationIdentifier);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokePositionToFirstRecordReturnValue = _p.invokePositionToFirstRecord(

			inIterationIdentifier
		);
		_p.finalize();
		handler.deliver(invokePositionToFirstRecordReturnValue);

	}
	else if (methodName.equal("PositionAtRecord")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking PositionAtRecord method.
		Uint32 invokePositionAtRecordReturnValue;

		String inIterationIdentifier;
		Boolean inMoveAbsolute;
		Sint64 inRecordNumber;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "IterationIdentifier"))
			{
				p.getValue().get(inIterationIdentifier);
			}
			if (String::equalNoCase(p.getParameterName(), "MoveAbsolute"))
			{
				p.getValue().get(inMoveAbsolute);
			}
			if (String::equalNoCase(p.getParameterName(), "RecordNumber"))
			{
				p.getValue().get(inRecordNumber);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokePositionAtRecordReturnValue = _p.invokePositionAtRecord(

			inIterationIdentifier,
			inMoveAbsolute,
			inRecordNumber
		);
		_p.finalize();
		handler.deliver(invokePositionAtRecordReturnValue);

	}
	else if (methodName.equal("GetRecord")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetRecord method.
		Uint32 invokeGetRecordReturnValue;

		String inIterationIdentifier;
		Boolean inPositionToNext;
		Uint64 inRecordNumber;
		Array<Uint8> inRecordData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "IterationIdentifier"))
			{
				p.getValue().get(inIterationIdentifier);
			}
			if (String::equalNoCase(p.getParameterName(), "PositionToNext"))
			{
				p.getValue().get(inPositionToNext);
			}
			if (String::equalNoCase(p.getParameterName(), "RecordNumber"))
			{
				p.getValue().get(inRecordNumber);
			}
			if (String::equalNoCase(p.getParameterName(), "RecordData"))
			{
				p.getValue().get(inRecordData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetRecordReturnValue = _p.invokeGetRecord(

			inIterationIdentifier,
			inPositionToNext,
			inRecordNumber,
			inRecordData
		);
		_p.finalize();
		handler.deliver(invokeGetRecordReturnValue);

	}
	else if (methodName.equal("DeleteRecord")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteRecord method.
		Uint32 invokeDeleteRecordReturnValue;

		String inIterationIdentifier;
		Boolean inPositionToNext;
		Uint64 inRecordNumber;
		Array<Uint8> inRecordData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "IterationIdentifier"))
			{
				p.getValue().get(inIterationIdentifier);
			}
			if (String::equalNoCase(p.getParameterName(), "PositionToNext"))
			{
				p.getValue().get(inPositionToNext);
			}
			if (String::equalNoCase(p.getParameterName(), "RecordNumber"))
			{
				p.getValue().get(inRecordNumber);
			}
			if (String::equalNoCase(p.getParameterName(), "RecordData"))
			{
				p.getValue().get(inRecordData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteRecordReturnValue = _p.invokeDeleteRecord(

			inIterationIdentifier,
			inPositionToNext,
			inRecordNumber,
			inRecordData
		);
		_p.finalize();
		handler.deliver(invokeDeleteRecordReturnValue);

	}
	else if (methodName.equal("WriteRecord")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking WriteRecord method.
		Uint32 invokeWriteRecordReturnValue;

		String inIterationIdentifier;
		Boolean inPositionToNext;
		Array<Uint8> inRecordData;
		Uint64 inRecordNumber;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "IterationIdentifier"))
			{
				p.getValue().get(inIterationIdentifier);
			}
			if (String::equalNoCase(p.getParameterName(), "PositionToNext"))
			{
				p.getValue().get(inPositionToNext);
			}
			if (String::equalNoCase(p.getParameterName(), "RecordData"))
			{
				p.getValue().get(inRecordData);
			}
			if (String::equalNoCase(p.getParameterName(), "RecordNumber"))
			{
				p.getValue().get(inRecordNumber);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeWriteRecordReturnValue = _p.invokeWriteRecord(

			inIterationIdentifier,
			inPositionToNext,
			inRecordData,
			inRecordNumber
		);
		_p.finalize();
		handler.deliver(invokeWriteRecordReturnValue);

	}
	else if (methodName.equal("CancelIteration")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CancelIteration method.
		Uint32 invokeCancelIterationReturnValue;

		String inIterationIdentifier;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "IterationIdentifier"))
			{
				p.getValue().get(inIterationIdentifier);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCancelIterationReturnValue = _p.invokeCancelIteration(

			inIterationIdentifier
		);
		_p.finalize();
		handler.deliver(invokeCancelIterationReturnValue);

	}
	else if (methodName.equal("FreezeLog")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking FreezeLog method.
		Uint32 invokeFreezeLogReturnValue;

		Boolean inFreeze;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Freeze"))
			{
				p.getValue().get(inFreeze);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeFreezeLogReturnValue = _p.invokeFreezeLog(

			inFreeze
		);
		_p.finalize();
		handler.deliver(invokeFreezeLogReturnValue);

	}
	else if (methodName.equal("FlagRecordForOverwrite")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking FlagRecordForOverwrite method.
		Uint32 invokeFlagRecordForOverwriteReturnValue;

		String inIterationIdentifier;
		Boolean inPositionToNext;
		Uint64 inRecordNumber;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "IterationIdentifier"))
			{
				p.getValue().get(inIterationIdentifier);
			}
			if (String::equalNoCase(p.getParameterName(), "PositionToNext"))
			{
				p.getValue().get(inPositionToNext);
			}
			if (String::equalNoCase(p.getParameterName(), "RecordNumber"))
			{
				p.getValue().get(inRecordNumber);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeFlagRecordForOverwriteReturnValue = _p.invokeFlagRecordForOverwrite(

			inIterationIdentifier,
			inPositionToNext,
			inRecordNumber
		);
		_p.finalize();
		handler.deliver(invokeFlagRecordForOverwriteReturnValue);

	}
	else if (methodName.equal("ClearLog")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ClearLog method.
		Uint32 invokeClearLogReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeClearLogReturnValue = _p.invokeClearLog();
		_p.finalize();
		handler.deliver(invokeClearLogReturnValue);

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
		message.append("UNIX_MessageLog");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_MessageLogProvider
#define UNIX_PROVIDER_NAME "UNIX_MessageLogProvider"
#define CLASS_IMPLEMENTATION UNIX_MessageLog
#define CLASS_IMPLEMENTATION_NAME "UNIX_MessageLog"
#define BASE_CLASS_NAME "CIM_MessageLog"
#define NUMKEYS_CLASS_IMPLEMENTATION 2
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

