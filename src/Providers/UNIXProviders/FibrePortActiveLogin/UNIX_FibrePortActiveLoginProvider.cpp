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


#include "UNIX_FibrePortActiveLoginProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_FibrePortActiveLoginProvider::UNIX_FibrePortActiveLoginProvider()
{
}

UNIX_FibrePortActiveLoginProvider::~UNIX_FibrePortActiveLoginProvider()
{
}

CIMInstance UNIX_FibrePortActiveLoginProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_FibrePortActiveLogin &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_FibrePortActiveLogin Properties
	if (instanceObject.getLoginOriginator(p)) inst.addProperty(p);
	if (instanceObject.getLoginResponder(p)) inst.addProperty(p);
	if (instanceObject.getNegotiatedCOS(p)) inst.addProperty(p);
	if (instanceObject.getNegotiatedFrameSize(p)) inst.addProperty(p);
	if (instanceObject.getNegotiatedSpeed(p)) inst.addProperty(p);
	if (instanceObject.getACKModel(p)) inst.addProperty(p);
	if (instanceObject.getBufferToBufferModel(p)) inst.addProperty(p);
	if (instanceObject.getOriginatorBufferCredit(p)) inst.addProperty(p);
	if (instanceObject.getResponderBufferCredit(p)) inst.addProperty(p);
	if (instanceObject.getOriginatorEndCredit(p)) inst.addProperty(p);
	if (instanceObject.getResponderEndCredit(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_FibrePortActiveLoginProvider::constructKeyBindings(const UNIX_FibrePortActiveLogin& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding LoginOriginatorKey(
		PROPERTY_LOGIN_ORIGINATOR,
		CIMValue(instanceObject.getLoginOriginator().getPath()));
	LoginOriginatorKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(LoginOriginatorKey);
	CIMKeyBinding LoginResponderKey(
		PROPERTY_LOGIN_RESPONDER,
		CIMValue(instanceObject.getLoginResponder().getPath()));
	LoginResponderKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(LoginResponderKey);
	keys.append(CIMKeyBinding(
		PROPERTY_NEGOTIATED_C_OS,
		CIMValue(instanceObject.getNegotiatedCOS()).toString(),
		CIMKeyBinding::NUMERIC));


	return keys;
}



#define UNIX_PROVIDER UNIX_FibrePortActiveLoginProvider
#define UNIX_PROVIDER_NAME "UNIX_FibrePortActiveLoginProvider"
#define CLASS_IMPLEMENTATION UNIX_FibrePortActiveLogin
#define CLASS_IMPLEMENTATION_NAME "UNIX_FibrePortActiveLogin"
#define BASE_CLASS_NAME "CIM_FibrePortActiveLogin"
#define NUMKEYS_CLASS_IMPLEMENTATION 3


#include "UNIXProviderBase.hpp"

