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


#include "UNIX_EGPRouteCalcDependencyProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_EGPRouteCalcDependencyProvider::UNIX_EGPRouteCalcDependencyProvider()
{
}

UNIX_EGPRouteCalcDependencyProvider::~UNIX_EGPRouteCalcDependencyProvider()
{
}

CIMInstance UNIX_EGPRouteCalcDependencyProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_EGPRouteCalcDependency &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_Dependency Properties
	if (instanceObject.getAntecedent(p)) inst.addProperty(p);
	if (instanceObject.getDependent(p)) inst.addProperty(p);
	if (className.equal("CIM_Dependency")) return inst;
	
	//CIM_ProvidesServiceToElement Properties
	if (className.equal("CIM_ProvidesServiceToElement")) return inst;
	
	//CIM_ServiceServiceDependency Properties
	if (instanceObject.getTypeOfDependency(p)) inst.addProperty(p);
	if (instanceObject.getRestartService(p)) inst.addProperty(p);
	if (className.equal("CIM_ServiceServiceDependency")) return inst;
	
	//CIM_EGPRouteCalcDependency Properties
	if (instanceObject.getIGPInjection(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_EGPRouteCalcDependencyProvider::constructKeyBindings(const UNIX_EGPRouteCalcDependency& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding AntecedentKey(
		PROPERTY_ANTECEDENT,
		CIMValue(instanceObject.getAntecedent().getPath()));
	AntecedentKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(AntecedentKey);
	CIMKeyBinding DependentKey(
		PROPERTY_DEPENDENT,
		CIMValue(instanceObject.getDependent().getPath()));
	DependentKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(DependentKey);


	return keys;
}



#define UNIX_PROVIDER UNIX_EGPRouteCalcDependencyProvider
#define UNIX_PROVIDER_NAME "UNIX_EGPRouteCalcDependencyProvider"
#define CLASS_IMPLEMENTATION UNIX_EGPRouteCalcDependency
#define CLASS_IMPLEMENTATION_NAME "UNIX_EGPRouteCalcDependency"
#define BASE_CLASS_NAME "CIM_EGPRouteCalcDependency"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

