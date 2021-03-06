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


#include "UNIX_RoutersInASProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_RoutersInASProvider::UNIX_RoutersInASProvider()
{
}

UNIX_RoutersInASProvider::~UNIX_RoutersInASProvider()
{
}

CIMInstance UNIX_RoutersInASProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_RoutersInAS &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_AbstractComponent Properties
	if (instanceObject.getGroupComponent(p)) inst.addProperty(p);
	if (instanceObject.getPartComponent(p)) inst.addProperty(p);
	if (className.equal("CIM_AbstractComponent")) return inst;
	
	//CIM_Component Properties
	if (className.equal("CIM_Component")) return inst;
	
	//CIM_SystemComponent Properties
	if (className.equal("CIM_SystemComponent")) return inst;
	
	//CIM_RoutersInAS Properties
	if (instanceObject.getBGPSupportedAttributes(p)) inst.addProperty(p);
	if (instanceObject.getAddCommunityValue(p)) inst.addProperty(p);
	if (instanceObject.getRole(p)) inst.addProperty(p);
	if (instanceObject.getOtherRoleDescription(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_RoutersInASProvider::constructKeyBindings(const UNIX_RoutersInAS& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding GroupComponentKey(
		PROPERTY_GROUP_COMPONENT,
		CIMValue(instanceObject.getGroupComponent().getPath()));
	GroupComponentKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(GroupComponentKey);
	CIMKeyBinding PartComponentKey(
		PROPERTY_PART_COMPONENT,
		CIMValue(instanceObject.getPartComponent().getPath()));
	PartComponentKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(PartComponentKey);


	return keys;
}



#define UNIX_PROVIDER UNIX_RoutersInASProvider
#define UNIX_PROVIDER_NAME "UNIX_RoutersInASProvider"
#define CLASS_IMPLEMENTATION UNIX_RoutersInAS
#define CLASS_IMPLEMENTATION_NAME "UNIX_RoutersInAS"
#define BASE_CLASS_NAME "CIM_RoutersInAS"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

