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


#include "UNIX_StoragePoolViewProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_StoragePoolViewProvider::UNIX_StoragePoolViewProvider()
{
}

UNIX_StoragePoolViewProvider::~UNIX_StoragePoolViewProvider()
{
}

CIMInstance UNIX_StoragePoolViewProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StoragePoolView &instanceObject) const
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
	
	//CIM_View Properties
	if (className.equal("CIM_View")) return inst;
	
	//CIM_StoragePoolView Properties
	if (instanceObject.getSPInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getSPElementName(p)) inst.addProperty(p);
	if (instanceObject.getSPPoolID(p)) inst.addProperty(p);
	if (instanceObject.getSPRemainingManagedSpace(p)) inst.addProperty(p);
	if (instanceObject.getSPTotalManagedSpace(p)) inst.addProperty(p);
	if (instanceObject.getSPPrimordial(p)) inst.addProperty(p);
	if (instanceObject.getSPUsage(p)) inst.addProperty(p);
	if (instanceObject.getSPOtherUsageDescription(p)) inst.addProperty(p);
	if (instanceObject.getSPClientSettableUsage(p)) inst.addProperty(p);
	if (instanceObject.getSCInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getSCElementName(p)) inst.addProperty(p);
	if (instanceObject.getSCElementType(p)) inst.addProperty(p);
	if (instanceObject.getSCNoSinglePointOfFailure(p)) inst.addProperty(p);
	if (instanceObject.getSCNoSinglePointOfFailureDefault(p)) inst.addProperty(p);
	if (instanceObject.getSCPackageRedundancyDefault(p)) inst.addProperty(p);
	if (instanceObject.getSCPackageRedundancyMin(p)) inst.addProperty(p);
	if (instanceObject.getSCPackageRedundancyMax(p)) inst.addProperty(p);
	if (instanceObject.getSCDataRedundancyDefault(p)) inst.addProperty(p);
	if (instanceObject.getSCDataRedundancyMin(p)) inst.addProperty(p);
	if (instanceObject.getSCDataRedundancyMax(p)) inst.addProperty(p);
	if (instanceObject.getSCExtentStripeLengthDefault(p)) inst.addProperty(p);
	if (instanceObject.getSCParityLayoutDefault(p)) inst.addProperty(p);
	if (instanceObject.getSCUserDataStripeDepthDefault(p)) inst.addProperty(p);
	if (instanceObject.getAFSPSpaceConsumed(p)) inst.addProperty(p);
	if (instanceObject.getSCCInstanceID(p)) inst.addProperty(p);
	if (instanceObject.getSCCElementName(p)) inst.addProperty(p);
	if (instanceObject.getSCCSupportedStoragePoolFeatures(p)) inst.addProperty(p);
	if (instanceObject.getSCCSupportedStorageElementTypes(p)) inst.addProperty(p);
	if (instanceObject.getSCCSupportedStorageElementFeatures(p)) inst.addProperty(p);
	if (instanceObject.getSCCSupportedSynchronousActions(p)) inst.addProperty(p);
	if (instanceObject.getSCCSupportedAsynchronousActions(p)) inst.addProperty(p);
	if (instanceObject.getSCCSupportedStorageElementUsage(p)) inst.addProperty(p);
	if (instanceObject.getSCCClientSettableElementUsage(p)) inst.addProperty(p);
	if (instanceObject.getSCCSupportedStoragePoolUsage(p)) inst.addProperty(p);
	if (instanceObject.getSCCClientSettablePoolUsage(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_StoragePoolViewProvider::constructKeyBindings(const UNIX_StoragePoolView& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SPINSTANCE_ID,
		instanceObject.getSPInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_StoragePoolViewProvider
#define UNIX_PROVIDER_NAME "UNIX_StoragePoolViewProvider"
#define CLASS_IMPLEMENTATION UNIX_StoragePoolView
#define CLASS_IMPLEMENTATION_NAME "UNIX_StoragePoolView"
#define BASE_CLASS_NAME "CIM_StoragePoolView"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

