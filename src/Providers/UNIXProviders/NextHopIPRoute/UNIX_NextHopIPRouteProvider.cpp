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


#include "UNIX_NextHopIPRouteProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_NextHopIPRouteProvider::UNIX_NextHopIPRouteProvider()
{
}

UNIX_NextHopIPRouteProvider::~UNIX_NextHopIPRouteProvider()
{
}

CIMInstance UNIX_NextHopIPRouteProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_NextHopIPRoute &instanceObject) const
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
	
	//CIM_NextHopRoute Properties
	if (instanceObject.getDestinationAddress(p)) inst.addProperty(p);
	if (instanceObject.getAdminDistance(p)) inst.addProperty(p);
	if (instanceObject.getRouteMetric(p)) inst.addProperty(p);
	if (instanceObject.getIsStatic(p)) inst.addProperty(p);
	if (instanceObject.getTypeOfRoute(p)) inst.addProperty(p);
	if (instanceObject.getNextHopAddress(p)) inst.addProperty(p);
	if (instanceObject.getNextHopInterface(p)) inst.addProperty(p);
	if (className.equal("UNIX_NextHopRoute")) return inst;
	
	//CIM_NextHopIPRoute Properties
	if (instanceObject.getRouteDerivation(p)) inst.addProperty(p);
	if (instanceObject.getOtherDerivation(p)) inst.addProperty(p);
	if (instanceObject.getDestinationMask(p)) inst.addProperty(p);
	if (instanceObject.getPrefixLength(p)) inst.addProperty(p);
	if (instanceObject.getAddressType(p)) inst.addProperty(p);
	if (instanceObject.getNextHopMask(p)) inst.addProperty(p);
	if (instanceObject.getNextHopAddressType(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_NextHopIPRouteProvider::constructKeyBindings(const UNIX_NextHopIPRoute& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_NextHopIPRouteProvider
#define UNIX_PROVIDER_NAME "UNIX_NextHopIPRouteProvider"
#define CLASS_IMPLEMENTATION UNIX_NextHopIPRoute
#define CLASS_IMPLEMENTATION_NAME "UNIX_NextHopIPRoute"
#define BASE_CLASS_NAME "CIM_NextHopIPRoute"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

