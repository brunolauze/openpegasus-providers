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


#include "UNIX_SlotProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_SlotProvider::UNIX_SlotProvider()
{
}

UNIX_SlotProvider::~UNIX_SlotProvider()
{
}

CIMInstance UNIX_SlotProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Slot &instanceObject) const
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
	
	//CIM_PhysicalConnector Properties
	if (instanceObject.getConnectorPinout(p)) inst.addProperty(p);
	if (instanceObject.getConnectorType(p)) inst.addProperty(p);
	if (instanceObject.getOtherTypeDescription(p)) inst.addProperty(p);
	if (instanceObject.getConnectorGender(p)) inst.addProperty(p);
	if (instanceObject.getConnectorElectricalCharacteristics(p)) inst.addProperty(p);
	if (instanceObject.getOtherElectricalCharacteristics(p)) inst.addProperty(p);
	if (instanceObject.getNumPhysicalPins(p)) inst.addProperty(p);
	if (instanceObject.getConnectorLayout(p)) inst.addProperty(p);
	if (instanceObject.getConnectorDescription(p)) inst.addProperty(p);
	if (className.equal("UNIX_PhysicalConnector")) return inst;
	
	//CIM_Slot Properties
	if (instanceObject.getSupportsHotPlug(p)) inst.addProperty(p);
	if (instanceObject.getHeightAllowed(p)) inst.addProperty(p);
	if (instanceObject.getLengthAllowed(p)) inst.addProperty(p);
	if (instanceObject.getMaxDataWidth(p)) inst.addProperty(p);
	if (instanceObject.getVccMixedVoltageSupport(p)) inst.addProperty(p);
	if (instanceObject.getVppMixedVoltageSupport(p)) inst.addProperty(p);
	if (instanceObject.getThermalRating(p)) inst.addProperty(p);
	if (instanceObject.getSpecialPurpose(p)) inst.addProperty(p);
	if (instanceObject.getPurposeDescription(p)) inst.addProperty(p);
	if (instanceObject.getNumber(p)) inst.addProperty(p);
	if (instanceObject.getPowered(p)) inst.addProperty(p);
	if (instanceObject.getOpenSwitch(p)) inst.addProperty(p);
	if (instanceObject.getMaxLinkWidth(p)) inst.addProperty(p);
	if (instanceObject.getVendorCompatibilityStrings(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_SlotProvider::constructKeyBindings(const UNIX_Slot& instanceObject) const
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



#define UNIX_PROVIDER UNIX_SlotProvider
#define UNIX_PROVIDER_NAME "UNIX_SlotProvider"
#define CLASS_IMPLEMENTATION UNIX_Slot
#define CLASS_IMPLEMENTATION_NAME "UNIX_Slot"
#define BASE_CLASS_NAME "CIM_Slot"
#define NUMKEYS_CLASS_IMPLEMENTATION 2
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

