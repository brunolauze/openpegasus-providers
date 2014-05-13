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


#include "UNIX_ImagingMonitorStatisticalDataProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_ImagingMonitorStatisticalDataProvider::UNIX_ImagingMonitorStatisticalDataProvider()
{
}

UNIX_ImagingMonitorStatisticalDataProvider::~UNIX_ImagingMonitorStatisticalDataProvider()
{
}

CIMInstance UNIX_ImagingMonitorStatisticalDataProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_ImagingMonitorStatisticalData &instanceObject) const
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
	
	//CIM_ImagingStatisticalData Properties
	if (instanceObject.getPersistenceType(p)) inst.addProperty(p);
	if (instanceObject.getOtherPersistenceType(p)) inst.addProperty(p);
	if (instanceObject.getSNMPKeyId(p)) inst.addProperty(p);
	if (className.equal("CIM_ImagingStatisticalData")) return inst;
	
	//CIM_ImagingMonitorStatisticalData Properties
	if (instanceObject.getConfigChanges(p)) inst.addProperty(p);
	if (instanceObject.getTotalAlerts(p)) inst.addProperty(p);
	if (instanceObject.getCriticalAlerts(p)) inst.addProperty(p);
	if (instanceObject.getAbortedJobs(p)) inst.addProperty(p);
	if (instanceObject.getCanceledJobs(p)) inst.addProperty(p);
	if (instanceObject.getCompletedJobs(p)) inst.addProperty(p);
	if (instanceObject.getCompletedFinisherJobs(p)) inst.addProperty(p);
	if (instanceObject.getMemoryAllocErrors(p)) inst.addProperty(p);
	if (instanceObject.getMemoryAllocWarnings(p)) inst.addProperty(p);
	if (instanceObject.getStorageAllocErrors(p)) inst.addProperty(p);
	if (instanceObject.getStorageAllocWarnings(p)) inst.addProperty(p);
	if (instanceObject.getLocalStorageKOctets(p)) inst.addProperty(p);
	if (instanceObject.getRemoteStorageKOctets(p)) inst.addProperty(p);
	if (instanceObject.getInputKOctets(p)) inst.addProperty(p);
	if (instanceObject.getOutputKOctets(p)) inst.addProperty(p);
	if (instanceObject.getInputMessages(p)) inst.addProperty(p);
	if (instanceObject.getOutputMessages(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_ImagingMonitorStatisticalDataProvider::constructKeyBindings(const UNIX_ImagingMonitorStatisticalData& instanceObject) const
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

void UNIX_ImagingMonitorStatisticalDataProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_ImagingMonitorStatisticalData") && !objectReference.getClassName().equal("CIM_ImagingMonitorStatisticalData")) {
		String classMessage;
		classMessage.append("UNIX_ImagingMonitorStatisticalData Provider");
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
		message.append("UNIX_ImagingMonitorStatisticalData");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_ImagingMonitorStatisticalDataProvider
#define UNIX_PROVIDER_NAME "UNIX_ImagingMonitorStatisticalDataProvider"
#define CLASS_IMPLEMENTATION UNIX_ImagingMonitorStatisticalData
#define CLASS_IMPLEMENTATION_NAME "UNIX_ImagingMonitorStatisticalData"
#define BASE_CLASS_NAME "CIM_ImagingMonitorStatisticalData"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

