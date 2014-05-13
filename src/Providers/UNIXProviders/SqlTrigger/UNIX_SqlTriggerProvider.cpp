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


#include "UNIX_SqlTriggerProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_SqlTriggerProvider::UNIX_SqlTriggerProvider()
{
}

UNIX_SqlTriggerProvider::~UNIX_SqlTriggerProvider()
{
}

CIMInstance UNIX_SqlTriggerProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_SqlTrigger &instanceObject) const
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
	
	//CIM_SqlObject Properties
	if (instanceObject.getCreationTime(p)) inst.addProperty(p);
	if (className.equal("CIM_SqlObject")) return inst;
	
	//CIM_SqlTrigger Properties
	if (instanceObject.getActionGranularityType(p)) inst.addProperty(p);
	if (instanceObject.getActionStatement(p)) inst.addProperty(p);
	if (instanceObject.getActionTime(p)) inst.addProperty(p);
	if (instanceObject.getEventType(p)) inst.addProperty(p);
	if (instanceObject.getNewRow(p)) inst.addProperty(p);
	if (instanceObject.getNewTable(p)) inst.addProperty(p);
	if (instanceObject.getOldRow(p)) inst.addProperty(p);
	if (instanceObject.getOldTable(p)) inst.addProperty(p);
	if (instanceObject.getWhenCondition(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_SqlTriggerProvider::constructKeyBindings(const UNIX_SqlTrigger& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_SqlTriggerProvider
#define UNIX_PROVIDER_NAME "UNIX_SqlTriggerProvider"
#define CLASS_IMPLEMENTATION UNIX_SqlTrigger
#define CLASS_IMPLEMENTATION_NAME "UNIX_SqlTrigger"
#define BASE_CLASS_NAME "CIM_SqlTrigger"
#define NUMKEYS_CLASS_IMPLEMENTATION 1
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

