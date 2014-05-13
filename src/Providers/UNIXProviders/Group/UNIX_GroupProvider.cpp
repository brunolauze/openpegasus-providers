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


#include "UNIX_GroupProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_GroupProvider::UNIX_GroupProvider()
{
}

UNIX_GroupProvider::~UNIX_GroupProvider()
{
}

CIMInstance UNIX_GroupProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Group &instanceObject) const
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
	
	//CIM_Collection Properties
	if (className.equal("CIM_Collection")) return inst;
	
	//CIM_Group Properties
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getName(p)) inst.addProperty(p);
	if (instanceObject.getBusinessCategory(p)) inst.addProperty(p);
	if (instanceObject.getCommonName(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_GroupProvider::constructKeyBindings(const UNIX_Group& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		instanceObject.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		instanceObject.getName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_GroupProvider
#define UNIX_PROVIDER_NAME "UNIX_GroupProvider"
#define CLASS_IMPLEMENTATION UNIX_Group
#define CLASS_IMPLEMENTATION_NAME "UNIX_Group"
#define BASE_CLASS_NAME "CIM_Group"
#define NUMKEYS_CLASS_IMPLEMENTATION 2

#define __createInstance_H
/*
================================================================================
NAME              : createInstance
DESCRIPTION       : Create UNIX_Group instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_GroupProvider::createInstance(
	const OperationContext& context,
	const CIMObjectPath& ref,
	const CIMInstance& instanceObject,
	ObjectPathResponseHandler& handler)
{
	if (!ref.getClassName().equal("UNIX_Group") && !ref.getClassName().equal("CIM_Group")) {
		String classMessage;
		classMessage.append("UNIX_Group Provider");
		classMessage.append (" does not support class ");
		classMessage.append (ref.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle createInstance request from object path reference.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		ref.getClassName(),
		ref.getKeyBindings());
	
	if (_p.find(localReference.getKeyBindings())) {
		throw CIMObjectAlreadyExistsException(
				localReference.toString());
	}
	else {
		if (_p.loadInstance(instanceObject)) {
			if (_p.validateInstance()) {
				if (_p.createInstance(context)) {
					/* Deliver Instance */
					CIMInstance creationResult = constructInstance(
							localReference.getClassName(), 
							CIMNamespaceName("root/cimv2"), 
							_p);
					handler.deliver(creationResult.getPath());
					/* Send Create Indication */
				}
				else {
					/* Raise Creating Exception */
				}
			}
			else {
				/* Raise Validate Exception */
			}
		}
		else {
			/* Raise Loading Exception */
		}
	}
	handler.complete();
}

#define __deleteInstance_H
/*
================================================================================
NAME              : deleteInstance
DESCRIPTION       : Delete UNIX_Group instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_GroupProvider::deleteInstance(
	const OperationContext& context,
	const CIMObjectPath& ref,
	ResponseHandler& handler)
{
	if (!ref.getClassName().equal("UNIX_Group") && !ref.getClassName().equal("CIM_Group")) {
		String classMessage;
		classMessage.append("UNIX_Group Provider");
		classMessage.append (" does not support class ");
		classMessage.append (ref.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle deleteInstance request from object path reference.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		ref.getClassName(),
		ref.getKeyBindings());
	
	if (_p.find(localReference.getKeyBindings())) {
		if (!_p.deleteInstance(context)) {
			/* Send Delete Indication */
		}
		else {
			/* Raise Delete Exception */
		}
	}
	else {
		throw CIMObjectNotFoundException(
				localReference.toString());
	}
	handler.complete();
}

#define __modifyInstance_H
/*
================================================================================
NAME              : modifyInstance
DESCRIPTION       : Modify UNIX_Group instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_GroupProvider::modifyInstance(
	const OperationContext& context,
	const CIMObjectPath& ref,
	const CIMInstance& instanceObject,
	const Boolean includeQualifiers,
	const CIMPropertyList& propertyList,
	ResponseHandler& handler)
{
	if (!ref.getClassName().equal("UNIX_Group") && !ref.getClassName().equal("CIM_Group")) {
		String classMessage;
		classMessage.append("UNIX_Group Provider");
		classMessage.append (" does not support class ");
		classMessage.append (ref.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle modifyInstance request from object path reference.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		ref.getClassName(),
		ref.getKeyBindings());
	
	if (_p.find(localReference.getKeyBindings())) {
		if (_p.loadInstance(instanceObject)) {
			if (_p.validateInstance()) {
				if (!_p.modifyInstance(context)) {
					/* Send Modify Indication */
				}
				else {
					/* Raise Modify Exception */
				}
			}
			else {
				/* Raise Validation Exception */
			}
		}
	}
	else {
		throw CIMObjectNotFoundException(
				localReference.toString());
	}
	handler.complete();
}


#include "UNIXProviderBase.hpp"

