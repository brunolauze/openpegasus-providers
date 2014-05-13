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


#include "UNIX_NFSProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_NFSProvider::UNIX_NFSProvider()
{
}

UNIX_NFSProvider::~UNIX_NFSProvider()
{
}

CIMInstance UNIX_NFSProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_NFS &instanceObject) const
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
	
	//UNIX_FileSystem Properties
	if (instanceObject.getCSCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getCSName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getRoot(p)) inst.addProperty(p);
	if (instanceObject.getBlockSize(p)) inst.addProperty(p);
	if (instanceObject.getFileSystemSize(p)) inst.addProperty(p);
	if (instanceObject.getAvailableSpace(p)) inst.addProperty(p);
	if (instanceObject.getReadOnly(p)) inst.addProperty(p);
	if (instanceObject.getEncryptionMethod(p)) inst.addProperty(p);
	if (instanceObject.getCompressionMethod(p)) inst.addProperty(p);
	if (instanceObject.getCaseSensitive(p)) inst.addProperty(p);
	if (instanceObject.getCasePreserved(p)) inst.addProperty(p);
	if (instanceObject.getCodeSet(p)) inst.addProperty(p);
	if (instanceObject.getMaxFileNameLength(p)) inst.addProperty(p);
	if (instanceObject.getClusterSize(p)) inst.addProperty(p);
	if (instanceObject.getFileSystemType(p)) inst.addProperty(p);
	if (instanceObject.getPersistenceType(p)) inst.addProperty(p);
	if (instanceObject.getOtherPersistenceType(p)) inst.addProperty(p);
	if (instanceObject.getNumberOfFiles(p)) inst.addProperty(p);
	if (instanceObject.getIsFixedSize(p)) inst.addProperty(p);
	if (instanceObject.getResizeIncrement(p)) inst.addProperty(p);
	if (className.equal("UNIX_FileSystem")) return inst;
	
	//CIM_RemoteFileSystem Properties
	if (className.equal("UNIX_RemoteFileSystem")) return inst;
	
	//CIM_NFS Properties
	if (instanceObject.getHardMount(p)) inst.addProperty(p);
	if (instanceObject.getForegroundMount(p)) inst.addProperty(p);
	if (instanceObject.getInterrupt(p)) inst.addProperty(p);
	if (instanceObject.getMountFailureRetries(p)) inst.addProperty(p);
	if (instanceObject.getRetransmissionAttempts(p)) inst.addProperty(p);
	if (instanceObject.getRetransmissionTimeout(p)) inst.addProperty(p);
	if (instanceObject.getReadBufferSize(p)) inst.addProperty(p);
	if (instanceObject.getWriteBufferSize(p)) inst.addProperty(p);
	if (instanceObject.getServerCommunicationPort(p)) inst.addProperty(p);
	if (instanceObject.getAttributeCaching(p)) inst.addProperty(p);
	if (instanceObject.getAttributeCachingForRegularFilesMin(p)) inst.addProperty(p);
	if (instanceObject.getAttributeCachingForRegularFilesMax(p)) inst.addProperty(p);
	if (instanceObject.getAttributeCachingForDirectoriesMin(p)) inst.addProperty(p);
	if (instanceObject.getAttributeCachingForDirectoriesMax(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_NFSProvider::constructKeyBindings(const UNIX_NFS& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CS_CREATION_CLASS_NAME,
		instanceObject.getCSCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CS_NAME,
		instanceObject.getCSName(),
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

void UNIX_NFSProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_NFS") && !objectReference.getClassName().equal("CIM_NFS")) {
		String classMessage;
		classMessage.append("UNIX_NFS Provider");
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
		message.append("UNIX_NFS");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_NFSProvider
#define UNIX_PROVIDER_NAME "UNIX_NFSProvider"
#define CLASS_IMPLEMENTATION UNIX_NFS
#define CLASS_IMPLEMENTATION_NAME "UNIX_NFS"
#define BASE_CLASS_NAME "CIM_NFS"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

