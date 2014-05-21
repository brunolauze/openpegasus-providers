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


#include "UNIX_ActsAsSpareProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_ActsAsSpareProvider::UNIX_ActsAsSpareProvider()
{
}

UNIX_ActsAsSpareProvider::~UNIX_ActsAsSpareProvider()
{
}

CIMInstance UNIX_ActsAsSpareProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_ActsAsSpare &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_ActsAsSpare Properties
	if (instanceObject.getGroup(p)) inst.addProperty(p);
	if (instanceObject.getSpare(p)) inst.addProperty(p);
	if (instanceObject.getHotStandby(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_ActsAsSpareProvider::constructKeyBindings(const UNIX_ActsAsSpare& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding GroupKey(
		PROPERTY_GROUP,
		CIMValue(instanceObject.getGroup().getPath()));
	GroupKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(GroupKey);
	CIMKeyBinding SpareKey(
		PROPERTY_SPARE,
		CIMValue(instanceObject.getSpare().getPath()));
	SpareKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(SpareKey);


	return keys;
}



#define UNIX_PROVIDER UNIX_ActsAsSpareProvider
#define UNIX_PROVIDER_NAME "UNIX_ActsAsSpareProvider"
#define CLASS_IMPLEMENTATION UNIX_ActsAsSpare
#define CLASS_IMPLEMENTATION_NAME "UNIX_ActsAsSpare"
#define BASE_CLASS_NAME "CIM_ActsAsSpare"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

