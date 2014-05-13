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


#include "UNIX_PrintSupplyProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_PrintSupplyProvider::UNIX_PrintSupplyProvider()
{
}

UNIX_PrintSupplyProvider::~UNIX_PrintSupplyProvider()
{
}

CIMInstance UNIX_PrintSupplyProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_PrintSupply &instanceObject) const
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
	
	//CIM_PrinterElement Properties
	if (instanceObject.getSNMPRowId(p)) inst.addProperty(p);
	if (className.equal("CIM_PrinterElement")) return inst;
	
	//CIM_PrintSupply Properties
	if (instanceObject.getLocalizedDescription(p)) inst.addProperty(p);
	if (instanceObject.getClassification(p)) inst.addProperty(p);
	if (instanceObject.getOtherClassification(p)) inst.addProperty(p);
	if (instanceObject.getType(p)) inst.addProperty(p);
	if (instanceObject.getOtherTypeDescription(p)) inst.addProperty(p);
	if (instanceObject.getSupplyUnit(p)) inst.addProperty(p);
	if (instanceObject.getOtherSupplyUnit(p)) inst.addProperty(p);
	if (instanceObject.getMaxCapacityBasis(p)) inst.addProperty(p);
	if (instanceObject.getMaxCapacity(p)) inst.addProperty(p);
	if (instanceObject.getRemainingCapacityBasis(p)) inst.addProperty(p);
	if (instanceObject.getRemainingCapacity(p)) inst.addProperty(p);
	if (instanceObject.getColorantRole(p)) inst.addProperty(p);
	if (instanceObject.getOtherColorantRole(p)) inst.addProperty(p);
	if (instanceObject.getColorantName(p)) inst.addProperty(p);
	if (instanceObject.getOtherColorantName(p)) inst.addProperty(p);
	if (instanceObject.getColorantTonality(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_PrintSupplyProvider::constructKeyBindings(const UNIX_PrintSupply& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		instanceObject.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_PrintSupplyProvider
#define UNIX_PROVIDER_NAME "UNIX_PrintSupplyProvider"
#define CLASS_IMPLEMENTATION UNIX_PrintSupply
#define CLASS_IMPLEMENTATION_NAME "UNIX_PrintSupply"
#define BASE_CLASS_NAME "CIM_PrintSupply"
#define NUMKEYS_CLASS_IMPLEMENTATION 1
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

