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


#include "UNIX_LogRecordProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_LogRecordProvider::UNIX_LogRecordProvider()
{
}

UNIX_LogRecordProvider::~UNIX_LogRecordProvider()
{
}

CIMInstance UNIX_LogRecordProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_LogRecord &instanceObject) const
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
	
	//CIM_RecordForLog Properties
	if (instanceObject.getRecordFormat(p)) inst.addProperty(p);
	if (instanceObject.getRecordData(p)) inst.addProperty(p);
	if (instanceObject.getLocale(p)) inst.addProperty(p);
	if (instanceObject.getPerceivedSeverity(p)) inst.addProperty(p);
	if (className.equal("CIM_RecordForLog")) return inst;
	
	//CIM_LogRecord Properties
	if (instanceObject.getLogCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getLogName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getRecordID(p)) inst.addProperty(p);
	if (instanceObject.getMessageTimestamp(p)) inst.addProperty(p);
	if (instanceObject.getDataFormat(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_LogRecordProvider::constructKeyBindings(const UNIX_LogRecord& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_LOG_CREATION_CLASS_NAME,
		instanceObject.getLogCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_LOG_NAME,
		instanceObject.getLogName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		instanceObject.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_RECORD_ID,
		instanceObject.getRecordID(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_MESSAGE_TIMESTAMP,
		CIMValue(instanceObject.getMessageTimestamp()).toString(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_LogRecordProvider
#define UNIX_PROVIDER_NAME "UNIX_LogRecordProvider"
#define CLASS_IMPLEMENTATION UNIX_LogRecord
#define CLASS_IMPLEMENTATION_NAME "UNIX_LogRecord"
#define BASE_CLASS_NAME "CIM_LogRecord"
#define NUMKEYS_CLASS_IMPLEMENTATION 5


#include "UNIXProviderBase.hpp"

