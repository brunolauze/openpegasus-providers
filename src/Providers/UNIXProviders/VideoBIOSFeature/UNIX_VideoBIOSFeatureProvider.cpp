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


#include "UNIX_VideoBIOSFeatureProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_VideoBIOSFeatureProvider::UNIX_VideoBIOSFeatureProvider()
{
}

UNIX_VideoBIOSFeatureProvider::~UNIX_VideoBIOSFeatureProvider()
{
}

CIMInstance UNIX_VideoBIOSFeatureProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VideoBIOSFeature &instanceObject) const
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
	
	//CIM_ManagedSystemElement Properties
	if (instanceObject.getInstallDate(p)) inst.addProperty(p);
	if (instanceObject.getName(p)) inst.addProperty(p);
	if (instanceObject.getOperationalStatus(p)) inst.addProperty(p);
	if (instanceObject.getStatusDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getStatus(p)) inst.addProperty(p);
	if (instanceObject.getHealthState(p)) inst.addProperty(p);
	if (instanceObject.getCommunicationStatus(p)) inst.addProperty(p);
	if (instanceObject.getDetailedStatus(p)) inst.addProperty(p);
	if (instanceObject.getOperatingStatus(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryStatus(p)) inst.addProperty(p);
	if (className.equal("CIM_ManagedSystemElement")) return inst;
	
	//CIM_LogicalElement Properties
	if (className.equal("CIM_LogicalElement")) return inst;
	
	//UNIX_SoftwareFeature Properties
	if (instanceObject.getIdentifyingNumber(p)) inst.addProperty(p);
	if (instanceObject.getProductName(p)) inst.addProperty(p);
	if (instanceObject.getVendor(p)) inst.addProperty(p);
	if (instanceObject.getVersion(p)) inst.addProperty(p);
	if (className.equal("UNIX_SoftwareFeature")) return inst;
	
	//CIM_VideoBIOSFeature Properties
	if (instanceObject.getCharacteristics(p)) inst.addProperty(p);
	if (instanceObject.getCharacteristicDescriptions(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_VideoBIOSFeatureProvider::constructKeyBindings(const UNIX_VideoBIOSFeature& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_IDENTIFYING_NUMBER,
		instanceObject.getIdentifyingNumber(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_PRODUCT_NAME,
		instanceObject.getProductName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_VENDOR,
		instanceObject.getVendor(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_VERSION,
		instanceObject.getVersion(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		instanceObject.getName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_VideoBIOSFeatureProvider
#define UNIX_PROVIDER_NAME "UNIX_VideoBIOSFeatureProvider"
#define CLASS_IMPLEMENTATION UNIX_VideoBIOSFeature
#define CLASS_IMPLEMENTATION_NAME "UNIX_VideoBIOSFeature"
#define BASE_CLASS_NAME "CIM_VideoBIOSFeature"
#define NUMKEYS_CLASS_IMPLEMENTATION 5
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

