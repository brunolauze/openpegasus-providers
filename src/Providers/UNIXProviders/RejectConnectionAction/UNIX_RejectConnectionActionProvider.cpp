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


#include "UNIX_RejectConnectionActionProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_RejectConnectionActionProvider::UNIX_RejectConnectionActionProvider()
{
}

UNIX_RejectConnectionActionProvider::~UNIX_RejectConnectionActionProvider()
{
}

CIMInstance UNIX_RejectConnectionActionProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_RejectConnectionAction &instanceObject) const
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
	
	//CIM_Policy Properties
	if (instanceObject.getCommonName(p)) inst.addProperty(p);
	if (instanceObject.getPolicyKeywords(p)) inst.addProperty(p);
	if (className.equal("CIM_Policy")) return inst;
	
	//CIM_PolicyAction Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getPolicyRuleCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPolicyRuleName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPolicyActionName(p)) inst.addProperty(p);
	if (instanceObject.getDoActionLogging(p)) inst.addProperty(p);
	if (className.equal("CIM_PolicyAction")) return inst;
	
	//CIM_RejectConnectionAction Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_RejectConnectionActionProvider::constructKeyBindings(const UNIX_RejectConnectionAction& instanceObject) const
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
		PROPERTY_POLICY_RULE_CREATION_CLASS_NAME,
		instanceObject.getPolicyRuleCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_POLICY_RULE_NAME,
		instanceObject.getPolicyRuleName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		instanceObject.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_POLICY_ACTION_NAME,
		instanceObject.getPolicyActionName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_RejectConnectionActionProvider
#define UNIX_PROVIDER_NAME "UNIX_RejectConnectionActionProvider"
#define CLASS_IMPLEMENTATION UNIX_RejectConnectionAction
#define CLASS_IMPLEMENTATION_NAME "UNIX_RejectConnectionAction"
#define BASE_CLASS_NAME "CIM_RejectConnectionAction"
#define NUMKEYS_CLASS_IMPLEMENTATION 6


#include "UNIXProviderBase.hpp"

