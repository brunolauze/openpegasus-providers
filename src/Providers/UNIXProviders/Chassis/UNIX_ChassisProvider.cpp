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


#include "UNIX_ChassisProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_ChassisProvider::UNIX_ChassisProvider()
{
}

UNIX_ChassisProvider::~UNIX_ChassisProvider()
{
}

CIMInstance UNIX_ChassisProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Chassis &instanceObject) const
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
	
	//CIM_PhysicalElement Properties
	if (instanceObject.getTag(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getManufacturer(p)) inst.addProperty(p);
	if (instanceObject.getModel(p)) inst.addProperty(p);
	if (instanceObject.getSKU(p)) inst.addProperty(p);
	if (instanceObject.getSerialNumber(p)) inst.addProperty(p);
	if (instanceObject.getVersion(p)) inst.addProperty(p);
	if (instanceObject.getPartNumber(p)) inst.addProperty(p);
	if (instanceObject.getOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (instanceObject.getPoweredOn(p)) inst.addProperty(p);
	if (instanceObject.getManufactureDate(p)) inst.addProperty(p);
	if (instanceObject.getVendorEquipmentType(p)) inst.addProperty(p);
	if (instanceObject.getUserTracking(p)) inst.addProperty(p);
	if (instanceObject.getCanBeFRUed(p)) inst.addProperty(p);
	if (className.equal("CIM_PhysicalElement")) return inst;
	
	//CIM_PhysicalPackage Properties
	if (instanceObject.getRemovalConditions(p)) inst.addProperty(p);
	if (instanceObject.getRemovable(p)) inst.addProperty(p);
	if (instanceObject.getReplaceable(p)) inst.addProperty(p);
	if (instanceObject.getHotSwappable(p)) inst.addProperty(p);
	if (instanceObject.getHeight(p)) inst.addProperty(p);
	if (instanceObject.getDepth(p)) inst.addProperty(p);
	if (instanceObject.getWidth(p)) inst.addProperty(p);
	if (instanceObject.getWeight(p)) inst.addProperty(p);
	if (instanceObject.getPackageType(p)) inst.addProperty(p);
	if (instanceObject.getOtherPackageType(p)) inst.addProperty(p);
	if (instanceObject.getVendorCompatibilityStrings(p)) inst.addProperty(p);
	if (className.equal("CIM_PhysicalPackage")) return inst;
	
	//CIM_PhysicalFrame Properties
	if (instanceObject.getCableManagementStrategy(p)) inst.addProperty(p);
	if (instanceObject.getServicePhilosophy(p)) inst.addProperty(p);
	if (instanceObject.getServiceDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getLockPresent(p)) inst.addProperty(p);
	if (instanceObject.getAudibleAlarm(p)) inst.addProperty(p);
	if (instanceObject.getVisibleAlarm(p)) inst.addProperty(p);
	if (instanceObject.getSecurityBreach(p)) inst.addProperty(p);
	if (instanceObject.getBreachDescription(p)) inst.addProperty(p);
	if (instanceObject.getIsLocked(p)) inst.addProperty(p);
	if (className.equal("CIM_PhysicalFrame")) return inst;
	
	//CIM_Chassis Properties
	if (instanceObject.getNumberOfPowerCords(p)) inst.addProperty(p);
	if (instanceObject.getCurrentRequiredOrProduced(p)) inst.addProperty(p);
	if (instanceObject.getHeatGeneration(p)) inst.addProperty(p);
	if (instanceObject.getChassisTypes(p)) inst.addProperty(p);
	if (instanceObject.getTypeDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getChassisPackageType(p)) inst.addProperty(p);
	if (instanceObject.getChassisTypeDescription(p)) inst.addProperty(p);
	if (instanceObject.getMultipleSystemSupport(p)) inst.addProperty(p);
	if (instanceObject.getRackMountable(p)) inst.addProperty(p);
	if (instanceObject.getInputCurrentType(p)) inst.addProperty(p);
	if (instanceObject.getOtherInputCurrentType(p)) inst.addProperty(p);
	if (instanceObject.getInputVoltage(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_ChassisProvider::constructKeyBindings(const UNIX_Chassis& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_TAG,
		instanceObject.getTag(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		instanceObject.getCreationClassName(),
		CIMKeyBinding::STRING));


	return keys;
}

#define __invokeMethod_H
/*
================================================================================
NAME              : invokeMethod
DESCRIPTION       : invokeMethod for the current instance;
ASSUMPTIONS       : None
PRE-CONDITIONS    : 
POST-CONDITIONS   : 
NOTES             : 
================================================================================
*/

void UNIX_ChassisProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_Chassis") && !objectReference.getClassName().equal("CIM_Chassis")) {
		String classMessage;
		classMessage.append("UNIX_Chassis Provider");
		classMessage.append (" does not support class ");
		classMessage.append (objectReference.getClassName().getString());
		throw CIMNotSupportedException(classMessage);
	}


	handler.processing();
	// Make cimom handle invokeMethod request with input parameters.
	CIMObjectPath localReference = CIMObjectPath(
		String(""),
		CIMNamespaceName("root/cimv2"),
		objectReference.getClassName(),
		objectReference.getKeyBindings());
	
	if (methodName.equal("IsCompatible")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking IsCompatible method.
		Uint32 invokeIsCompatibleReturnValue;

		CIMInstance inElementToCheck;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementToCheck"))
			{
				p.getValue().get(inElementToCheck);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeIsCompatibleReturnValue = _p.invokeIsCompatible(

			inElementToCheck
		);
		_p.finalize();
		handler.deliver(invokeIsCompatibleReturnValue);

	}
	else {
		String message;
		message.append("UNIX_Chassis");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_ChassisProvider
#define UNIX_PROVIDER_NAME "UNIX_ChassisProvider"
#define CLASS_IMPLEMENTATION UNIX_Chassis
#define CLASS_IMPLEMENTATION_NAME "UNIX_Chassis"
#define BASE_CLASS_NAME "CIM_Chassis"
#define NUMKEYS_CLASS_IMPLEMENTATION 2
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

