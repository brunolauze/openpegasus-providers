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


#include "UNIX_VTLStatisticalDataServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_VTLStatisticalDataServiceProvider::UNIX_VTLStatisticalDataServiceProvider()
{
}

UNIX_VTLStatisticalDataServiceProvider::~UNIX_VTLStatisticalDataServiceProvider()
{
}

CIMInstance UNIX_VTLStatisticalDataServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VTLStatisticalDataService &instanceObject) const
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
	
	//CIM_VTLStatisticalDataService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_VTLStatisticalDataServiceProvider::constructKeyBindings(const UNIX_VTLStatisticalDataService& instanceObject) const
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

void UNIX_VTLStatisticalDataServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_VTLStatisticalDataService") && !objectReference.getClassName().equal("CIM_VTLStatisticalDataService")) {
		String classMessage;
		classMessage.append("UNIX_VTLStatisticalDataService Provider");
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
	
	if (methodName.equal("GetPhysicalCapacityUsage")) {

		if (inParameters.size() != 8)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetPhysicalCapacityUsage method.
		Uint16 invokeGetPhysicalCapacityUsageReturnValue;

		Uint16 inDataFormat;
		CIMInstance inPool;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance inLibrary;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Pool"))
			{
				p.getValue().get(inPool);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "Library"))
			{
				p.getValue().get(inLibrary);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetPhysicalCapacityUsageReturnValue = _p.invokeGetPhysicalCapacityUsage(

			inDataFormat,
			inPool,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			inLibrary,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetPhysicalCapacityUsageReturnValue);

	}
	else if (methodName.equal("GetLogicalCapacityUsage")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetLogicalCapacityUsage method.
		Uint16 invokeGetLogicalCapacityUsageReturnValue;

		Uint16 inDataFormat;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance inLibrary;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "Library"))
			{
				p.getValue().get(inLibrary);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetLogicalCapacityUsageReturnValue = _p.invokeGetLogicalCapacityUsage(

			inDataFormat,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			inLibrary,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetLogicalCapacityUsageReturnValue);

	}
	else if (methodName.equal("GetSystemRatio")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetSystemRatio method.
		Uint16 invokeGetSystemRatioReturnValue;

		Uint16 inDataFormat;
		CIMInstance inLibrary;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Library"))
			{
				p.getValue().get(inLibrary);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetSystemRatioReturnValue = _p.invokeGetSystemRatio(

			inDataFormat,
			inLibrary,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetSystemRatioReturnValue);

	}
	else if (methodName.equal("GetDeduplicationRatio")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetDeduplicationRatio method.
		Uint16 invokeGetDeduplicationRatioReturnValue;

		Uint16 inDataFormat;
		CIMInstance inLibrary;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Library"))
			{
				p.getValue().get(inLibrary);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetDeduplicationRatioReturnValue = _p.invokeGetDeduplicationRatio(

			inDataFormat,
			inLibrary,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetDeduplicationRatioReturnValue);

	}
	else if (methodName.equal("GetReplicationThroughput")) {

		if (inParameters.size() != 8)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetReplicationThroughput method.
		Uint16 invokeGetReplicationThroughputReturnValue;

		Uint16 inDataFormat;
		Uint16 inDataDirection;
		CIMInstance inLibrary;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "DataDirection"))
			{
				p.getValue().get(inDataDirection);
			}
			if (String::equalNoCase(p.getParameterName(), "Library"))
			{
				p.getValue().get(inLibrary);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetReplicationThroughputReturnValue = _p.invokeGetReplicationThroughput(

			inDataFormat,
			inDataDirection,
			inLibrary,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetReplicationThroughputReturnValue);

	}
	else if (methodName.equal("GetReplicationRatio")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetReplicationRatio method.
		Uint16 invokeGetReplicationRatioReturnValue;

		Uint16 inDataFormat;
		CIMInstance inLibrary;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Library"))
			{
				p.getValue().get(inLibrary);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetReplicationRatioReturnValue = _p.invokeGetReplicationRatio(

			inDataFormat,
			inLibrary,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetReplicationRatioReturnValue);

	}
	else if (methodName.equal("GetPerformanceStatisticsReadWriteIO")) {

		if (inParameters.size() != 8)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetPerformanceStatisticsReadWriteIO method.
		Uint16 invokeGetPerformanceStatisticsReadWriteIOReturnValue;

		Uint16 inDataFormat;
		CIMInstance inLibrary;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance intapeDrive;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "Library"))
			{
				p.getValue().get(inLibrary);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "tapeDrive"))
			{
				p.getValue().get(intapeDrive);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetPerformanceStatisticsReadWriteIOReturnValue = _p.invokeGetPerformanceStatisticsReadWriteIO(

			inDataFormat,
			inLibrary,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			intapeDrive,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetPerformanceStatisticsReadWriteIOReturnValue);

	}
	else if (methodName.equal("GetFCPortStatisticsSRR")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetFCPortStatisticsSRR method.
		Uint16 invokeGetFCPortStatisticsSRRReturnValue;

		Uint16 inDataFormat;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance inport;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "port"))
			{
				p.getValue().get(inport);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetFCPortStatisticsSRRReturnValue = _p.invokeGetFCPortStatisticsSRR(

			inDataFormat,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			inport,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetFCPortStatisticsSRRReturnValue);

	}
	else if (methodName.equal("GetFCPortStatisticsAborts")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking GetFCPortStatisticsAborts method.
		Uint16 invokeGetFCPortStatisticsAbortsReturnValue;

		Uint16 inDataFormat;
		CIMDateTime inStartTime;
		Uint64 inDuration;
		CIMDateTime inEndTime;
		CIMInstance inData;
		CIMInstance inport;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "DataFormat"))
			{
				p.getValue().get(inDataFormat);
			}
			if (String::equalNoCase(p.getParameterName(), "StartTime"))
			{
				p.getValue().get(inStartTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Duration"))
			{
				p.getValue().get(inDuration);
			}
			if (String::equalNoCase(p.getParameterName(), "EndTime"))
			{
				p.getValue().get(inEndTime);
			}
			if (String::equalNoCase(p.getParameterName(), "Data"))
			{
				p.getValue().get(inData);
			}
			if (String::equalNoCase(p.getParameterName(), "port"))
			{
				p.getValue().get(inport);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeGetFCPortStatisticsAbortsReturnValue = _p.invokeGetFCPortStatisticsAborts(

			inDataFormat,
			inStartTime,
			inDuration,
			inEndTime,
			inData,
			inport,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeGetFCPortStatisticsAbortsReturnValue);

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
		message.append("UNIX_VTLStatisticalDataService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_VTLStatisticalDataServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_VTLStatisticalDataServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_VTLStatisticalDataService
#define CLASS_IMPLEMENTATION_NAME "UNIX_VTLStatisticalDataService"
#define BASE_CLASS_NAME "CIM_VTLStatisticalDataService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

