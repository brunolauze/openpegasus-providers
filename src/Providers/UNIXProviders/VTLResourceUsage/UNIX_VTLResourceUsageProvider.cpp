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


#include "UNIX_VTLResourceUsageProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_VTLResourceUsageProvider::UNIX_VTLResourceUsageProvider()
{
}

UNIX_VTLResourceUsageProvider::~UNIX_VTLResourceUsageProvider()
{
}

CIMInstance UNIX_VTLResourceUsageProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VTLResourceUsage &instanceObject) const
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
	
	//CIM_StatisticalData Properties
	if (instanceObject.getStartStatisticTime(p)) inst.addProperty(p);
	if (instanceObject.getStatisticTime(p)) inst.addProperty(p);
	if (instanceObject.getSampleInterval(p)) inst.addProperty(p);
	if (instanceObject.getRateIntervalEndTime(p)) inst.addProperty(p);
	if (instanceObject.getRateIntervalStartTime(p)) inst.addProperty(p);
	if (className.equal("CIM_StatisticalData")) return inst;
	
	//CIM_VTLResourceUsage Properties
	if (instanceObject.getThroughput(p)) inst.addProperty(p);
	if (instanceObject.getRelativeThroughput(p)) inst.addProperty(p);
	if (instanceObject.getUsedPhysicalCapacity(p)) inst.addProperty(p);
	if (instanceObject.getUsedLogicalCapacity(p)) inst.addProperty(p);
	if (instanceObject.getUsedPhysicalCapacityOfMax(p)) inst.addProperty(p);
	if (instanceObject.getUsedLogicalCapacityOfMax(p)) inst.addProperty(p);
	if (instanceObject.getSystemRatio(p)) inst.addProperty(p);
	if (instanceObject.getDeduplicationRatio(p)) inst.addProperty(p);
	if (instanceObject.getInReplicationThroughput(p)) inst.addProperty(p);
	if (instanceObject.getOutReplicationThroughput(p)) inst.addProperty(p);
	if (instanceObject.getThresholdCheckInterval(p)) inst.addProperty(p);
	if (instanceObject.getThresholdEnabled(p)) inst.addProperty(p);
	if (instanceObject.getThroughputAlertsEnabled(p)) inst.addProperty(p);
	if (instanceObject.getThroughputWarningAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getThroughputCriticalAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getPhysicalCapacityAlertsEnabled(p)) inst.addProperty(p);
	if (instanceObject.getPhysicalCapacityWarningAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getPhysicalCapacityCriticalAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getLogicalCapacityAlertsEnabled(p)) inst.addProperty(p);
	if (instanceObject.getLogicalCapacityWarningAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getLogicalCapacityCriticalAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getSystemRatioAlertsEnabled(p)) inst.addProperty(p);
	if (instanceObject.getSystemRatioWarningAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getSystemRatioCriticalAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getDeduplicationRatioAlertsEnabled(p)) inst.addProperty(p);
	if (instanceObject.getDeduplicationRatioWarningAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getDeduplicationRatioCriticalAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getReplicationTrafficAlertsEnabled(p)) inst.addProperty(p);
	if (instanceObject.getReplicationTrafficWarningAlertThreshold(p)) inst.addProperty(p);
	if (instanceObject.getReplicationTrafficCriticalAlertThreshold(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_VTLResourceUsageProvider::constructKeyBindings(const UNIX_VTLResourceUsage& instanceObject) const
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

void UNIX_VTLResourceUsageProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_VTLResourceUsage") && !objectReference.getClassName().equal("CIM_VTLResourceUsage")) {
		String classMessage;
		classMessage.append("UNIX_VTLResourceUsage Provider");
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
	
	if (methodName.equal("ResetSelectedStats")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ResetSelectedStats method.
		Uint32 invokeResetSelectedStatsReturnValue;

		Array<String> inSelectedStatistics;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SelectedStatistics"))
			{
				p.getValue().get(inSelectedStatistics);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeResetSelectedStatsReturnValue = _p.invokeResetSelectedStats(

			inSelectedStatistics
		);
		_p.finalize();
		handler.deliver(invokeResetSelectedStatsReturnValue);

	}
	else {
		String message;
		message.append("UNIX_VTLResourceUsage");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_VTLResourceUsageProvider
#define UNIX_PROVIDER_NAME "UNIX_VTLResourceUsageProvider"
#define CLASS_IMPLEMENTATION UNIX_VTLResourceUsage
#define CLASS_IMPLEMENTATION_NAME "UNIX_VTLResourceUsage"
#define BASE_CLASS_NAME "CIM_VTLResourceUsage"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

