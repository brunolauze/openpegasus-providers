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


#include "UNIX_ProcessStatisticalInformationProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_ProcessStatisticalInformationProvider::UNIX_ProcessStatisticalInformationProvider()
{
}

UNIX_ProcessStatisticalInformationProvider::~UNIX_ProcessStatisticalInformationProvider()
{
}

CIMInstance UNIX_ProcessStatisticalInformationProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_ProcessStatisticalInformation &instanceObject) const
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
	
	//CIM_StatisticalInformation Properties
	if (instanceObject.getName(p)) inst.addProperty(p);
	if (className.equal("CIM_StatisticalInformation")) return inst;
	
	//CIM_UnixProcessStatisticalInformation Properties
	if (instanceObject.getCSCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getCSName(p)) inst.addProperty(p);
	if (instanceObject.getOSCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getOSName(p)) inst.addProperty(p);
	if (instanceObject.getHandle(p)) inst.addProperty(p);
	if (instanceObject.getProcessCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getCPUTime(p)) inst.addProperty(p);
	if (instanceObject.getRealText(p)) inst.addProperty(p);
	if (instanceObject.getRealData(p)) inst.addProperty(p);
	if (instanceObject.getRealStack(p)) inst.addProperty(p);
	if (instanceObject.getVirtualText(p)) inst.addProperty(p);
	if (instanceObject.getVirtualData(p)) inst.addProperty(p);
	if (instanceObject.getVirtualStack(p)) inst.addProperty(p);
	if (instanceObject.getVirtualMemoryMappedFileSize(p)) inst.addProperty(p);
	if (instanceObject.getVirtualSharedMemory(p)) inst.addProperty(p);
	if (instanceObject.getCpuTimeDeadChildren(p)) inst.addProperty(p);
	if (instanceObject.getSystemTimeDeadChildren(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_ProcessStatisticalInformationProvider::constructKeyBindings(const UNIX_ProcessStatisticalInformation& instanceObject) const
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
		PROPERTY_OS_CREATION_CLASS_NAME,
		instanceObject.getOSCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_OS_NAME,
		instanceObject.getOSName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_HANDLE,
		instanceObject.getHandle(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_PROCESS_CREATION_CLASS_NAME,
		instanceObject.getProcessCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		instanceObject.getName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_ProcessStatisticalInformationProvider
#define UNIX_PROVIDER_NAME "UNIX_ProcessStatisticalInformationProvider"
#define CLASS_IMPLEMENTATION UNIX_ProcessStatisticalInformation
#define CLASS_IMPLEMENTATION_NAME "UNIX_ProcessStatisticalInformation"
#define BASE_CLASS_NAME "CIM_UnixProcessStatisticalInformation"
#define NUMKEYS_CLASS_IMPLEMENTATION 7


#include "UNIXProviderBase.hpp"

