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


#include "UNIX_FCPortResourceUsageProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_FCPortResourceUsageProvider::UNIX_FCPortResourceUsageProvider()
{
}

UNIX_FCPortResourceUsageProvider::~UNIX_FCPortResourceUsageProvider()
{
}

CIMInstance UNIX_FCPortResourceUsageProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_FCPortResourceUsage &instanceObject) const
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
	
	//CIM_NetworkPortStatistics Properties
	if (instanceObject.getBytesTransmitted(p)) inst.addProperty(p);
	if (instanceObject.getBytesReceived(p)) inst.addProperty(p);
	if (instanceObject.getPacketsTransmitted(p)) inst.addProperty(p);
	if (instanceObject.getPacketsReceived(p)) inst.addProperty(p);
	if (className.equal("CIM_NetworkPortStatistics")) return inst;
	
	//CIM_FCPortStatistics Properties
	if (instanceObject.getLIPCount(p)) inst.addProperty(p);
	if (instanceObject.getNOSCount(p)) inst.addProperty(p);
	if (instanceObject.getErrorFrames(p)) inst.addProperty(p);
	if (instanceObject.getDumpedFrames(p)) inst.addProperty(p);
	if (instanceObject.getLinkFailures(p)) inst.addProperty(p);
	if (instanceObject.getLossOfSignalCounter(p)) inst.addProperty(p);
	if (instanceObject.getLossOfSyncCounter(p)) inst.addProperty(p);
	if (instanceObject.getPrimitiveSeqProtocolErrCount(p)) inst.addProperty(p);
	if (instanceObject.getCRCErrors(p)) inst.addProperty(p);
	if (instanceObject.getInvalidTransmissionWords(p)) inst.addProperty(p);
	if (instanceObject.getFramesTooShort(p)) inst.addProperty(p);
	if (instanceObject.getFramesTooLong(p)) inst.addProperty(p);
	if (instanceObject.getAddressErrors(p)) inst.addProperty(p);
	if (instanceObject.getBufferCreditNotProvided(p)) inst.addProperty(p);
	if (instanceObject.getBufferCreditNotReceived(p)) inst.addProperty(p);
	if (instanceObject.getDelimiterErrors(p)) inst.addProperty(p);
	if (instanceObject.getEncodingDisparityErrors(p)) inst.addProperty(p);
	if (instanceObject.getLinkResetsReceived(p)) inst.addProperty(p);
	if (instanceObject.getLinkResetsTransmitted(p)) inst.addProperty(p);
	if (instanceObject.getMulticastFramesReceived(p)) inst.addProperty(p);
	if (instanceObject.getMulticastFramesTransmitted(p)) inst.addProperty(p);
	if (instanceObject.getFBSYFrames(p)) inst.addProperty(p);
	if (instanceObject.getPBSYFrames(p)) inst.addProperty(p);
	if (instanceObject.getFRJTFrames(p)) inst.addProperty(p);
	if (instanceObject.getPRJTFrames(p)) inst.addProperty(p);
	if (instanceObject.getRXClass1Frames(p)) inst.addProperty(p);
	if (instanceObject.getTXClass1Frames(p)) inst.addProperty(p);
	if (instanceObject.getClass1FBSY(p)) inst.addProperty(p);
	if (instanceObject.getClass1PBSY(p)) inst.addProperty(p);
	if (instanceObject.getClass1FRJT(p)) inst.addProperty(p);
	if (instanceObject.getClass1PRJT(p)) inst.addProperty(p);
	if (instanceObject.getRXClass2Frames(p)) inst.addProperty(p);
	if (instanceObject.getTXClass2Frames(p)) inst.addProperty(p);
	if (instanceObject.getClass2FBSY(p)) inst.addProperty(p);
	if (instanceObject.getClass2PBSY(p)) inst.addProperty(p);
	if (instanceObject.getClass2FRJT(p)) inst.addProperty(p);
	if (instanceObject.getClass2PRJT(p)) inst.addProperty(p);
	if (instanceObject.getRXClass3Frames(p)) inst.addProperty(p);
	if (instanceObject.getTXClass3Frames(p)) inst.addProperty(p);
	if (instanceObject.getClass3FramesDiscarded(p)) inst.addProperty(p);
	if (instanceObject.getRXBroadcastFrames(p)) inst.addProperty(p);
	if (instanceObject.getTXBroadcastFrames(p)) inst.addProperty(p);
	if (className.equal("UNIX_FCPortStatistics")) return inst;
	
	//CIM_FCPortResourceUsage Properties
	if (instanceObject.getSRRCount(p)) inst.addProperty(p);
	if (instanceObject.getAbortCount(p)) inst.addProperty(p);
	if (instanceObject.getMinSRRCount(p)) inst.addProperty(p);
	if (instanceObject.getMaxSRRCount(p)) inst.addProperty(p);
	if (instanceObject.getMinAbortCount(p)) inst.addProperty(p);
	if (instanceObject.getMaxAbortCount(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_FCPortResourceUsageProvider::constructKeyBindings(const UNIX_FCPortResourceUsage& instanceObject) const
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

void UNIX_FCPortResourceUsageProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_FCPortResourceUsage") && !objectReference.getClassName().equal("CIM_FCPortResourceUsage")) {
		String classMessage;
		classMessage.append("UNIX_FCPortResourceUsage Provider");
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
		message.append("UNIX_FCPortResourceUsage");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_FCPortResourceUsageProvider
#define UNIX_PROVIDER_NAME "UNIX_FCPortResourceUsageProvider"
#define CLASS_IMPLEMENTATION UNIX_FCPortResourceUsage
#define CLASS_IMPLEMENTATION_NAME "UNIX_FCPortResourceUsage"
#define BASE_CLASS_NAME "CIM_FCPortResourceUsage"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

