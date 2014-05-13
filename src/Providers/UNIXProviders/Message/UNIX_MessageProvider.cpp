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


#include "UNIX_MessageProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_MessageProvider::UNIX_MessageProvider()
{
}

UNIX_MessageProvider::~UNIX_MessageProvider()
{
}

CIMInstance UNIX_MessageProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Message &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_Message Properties
	if (instanceObject.getOwningEntity(p)) inst.addProperty(p);
	if (instanceObject.getMessageID(p)) inst.addProperty(p);
	if (instanceObject.getContinuedInNextMessage(p)) inst.addProperty(p);
	if (instanceObject.getMessage(p)) inst.addProperty(p);
	if (instanceObject.getMessageArguments(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_MessageProvider::constructKeyBindings(const UNIX_Message& instanceObject) const
{

	Array<CIMKeyBinding> keys;



	return keys;
}



#define UNIX_PROVIDER UNIX_MessageProvider
#define UNIX_PROVIDER_NAME "UNIX_MessageProvider"
#define CLASS_IMPLEMENTATION UNIX_Message
#define CLASS_IMPLEMENTATION_NAME "UNIX_Message"
#define BASE_CLASS_NAME "CIM_Message"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"
