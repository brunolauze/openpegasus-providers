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


#include "UNIX_GroupMaskingMappingServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_GroupMaskingMappingServiceProvider::UNIX_GroupMaskingMappingServiceProvider()
{
}

UNIX_GroupMaskingMappingServiceProvider::~UNIX_GroupMaskingMappingServiceProvider()
{
}

CIMInstance UNIX_GroupMaskingMappingServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_GroupMaskingMappingService &instanceObject) const
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
	
	//CIM_EnabledLogicalElement Properties
	if (instanceObject.getEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getOtherEnabledState(p)) inst.addProperty(p);
	if (instanceObject.getRequestedState(p)) inst.addProperty(p);
	if (instanceObject.getEnabledDefault(p)) inst.addProperty(p);
	if (instanceObject.getTimeOfLastStateChange(p)) inst.addProperty(p);
	if (instanceObject.getAvailableRequestedStates(p)) inst.addProperty(p);
	if (instanceObject.getTransitioningToState(p)) inst.addProperty(p);
	if (className.equal("CIM_EnabledLogicalElement")) return inst;
	
	//CIM_Service Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryOwnerName(p)) inst.addProperty(p);
	if (instanceObject.getPrimaryOwnerContact(p)) inst.addProperty(p);
	if (instanceObject.getStartMode(p)) inst.addProperty(p);
	if (instanceObject.getStarted(p)) inst.addProperty(p);
	if (instanceObject.getLoSID(p)) inst.addProperty(p);
	if (instanceObject.getLoSOrgID(p)) inst.addProperty(p);
	if (className.equal("CIM_Service")) return inst;
	
	//CIM_ControllerConfigurationService Properties
	if (className.equal("UNIX_ControllerConfigurationService")) return inst;
	
	//CIM_GroupMaskingMappingService Properties
	

	return inst;
}

Array<CIMKeyBinding> UNIX_GroupMaskingMappingServiceProvider::constructKeyBindings(const UNIX_GroupMaskingMappingService& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		instanceObject.getSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		instanceObject.getSystemName(),
		CIMKeyBinding::STRING));
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

void UNIX_GroupMaskingMappingServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_GroupMaskingMappingService") && !objectReference.getClassName().equal("CIM_GroupMaskingMappingService")) {
		String classMessage;
		classMessage.append("UNIX_GroupMaskingMappingService Provider");
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
	
	if (methodName.equal("CreateGroup")) {

		if (inParameters.size() != 8)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateGroup method.
		Uint32 invokeCreateGroupReturnValue;

		String inGroupName;
		Uint16 inType;
		CIMInstance inMembers;
		CIMInstance inJob;
		Boolean inDeleteOnEmpty;
		Boolean inDeleteWhenBecomesUnassociated;
		Boolean inConsistentLogicalUnitNumber;
		CIMInstance inMaskingGroup;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "GroupName"))
			{
				p.getValue().get(inGroupName);
			}
			if (String::equalNoCase(p.getParameterName(), "Type"))
			{
				p.getValue().get(inType);
			}
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteOnEmpty"))
			{
				p.getValue().get(inDeleteOnEmpty);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteWhenBecomesUnassociated"))
			{
				p.getValue().get(inDeleteWhenBecomesUnassociated);
			}
			if (String::equalNoCase(p.getParameterName(), "ConsistentLogicalUnitNumber"))
			{
				p.getValue().get(inConsistentLogicalUnitNumber);
			}
			if (String::equalNoCase(p.getParameterName(), "MaskingGroup"))
			{
				p.getValue().get(inMaskingGroup);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateGroupReturnValue = _p.invokeCreateGroup(

			inGroupName,
			inType,
			inMembers,
			inJob,
			inDeleteOnEmpty,
			inDeleteWhenBecomesUnassociated,
			inConsistentLogicalUnitNumber,
			inMaskingGroup
		);
		_p.finalize();
		handler.deliver(invokeCreateGroupReturnValue);

	}
	else if (methodName.equal("DeleteGroup")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteGroup method.
		Uint32 invokeDeleteGroupReturnValue;

		CIMInstance inMaskingGroup;
		CIMInstance inJob;
		Boolean inForce;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MaskingGroup"))
			{
				p.getValue().get(inMaskingGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Force"))
			{
				p.getValue().get(inForce);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteGroupReturnValue = _p.invokeDeleteGroup(

			inMaskingGroup,
			inJob,
			inForce
		);
		_p.finalize();
		handler.deliver(invokeDeleteGroupReturnValue);

	}
	else if (methodName.equal("AddMembers")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddMembers method.
		Uint32 invokeAddMembersReturnValue;

		CIMInstance inMaskingGroup;
		CIMInstance inMembers;
		Array<String> inDeviceNumbers;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MaskingGroup"))
			{
				p.getValue().get(inMaskingGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceNumbers"))
			{
				p.getValue().get(inDeviceNumbers);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddMembersReturnValue = _p.invokeAddMembers(

			inMaskingGroup,
			inMembers,
			inDeviceNumbers,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeAddMembersReturnValue);

	}
	else if (methodName.equal("RemoveMembers")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RemoveMembers method.
		Uint32 invokeRemoveMembersReturnValue;

		CIMInstance inMaskingGroup;
		CIMInstance inMembers;
		CIMInstance inJob;
		Boolean inDeleteOnEmpty;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "MaskingGroup"))
			{
				p.getValue().get(inMaskingGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "Members"))
			{
				p.getValue().get(inMembers);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteOnEmpty"))
			{
				p.getValue().get(inDeleteOnEmpty);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRemoveMembersReturnValue = _p.invokeRemoveMembers(

			inMaskingGroup,
			inMembers,
			inJob,
			inDeleteOnEmpty
		);
		_p.finalize();
		handler.deliver(invokeRemoveMembersReturnValue);

	}
	else if (methodName.equal("CreateMaskingView")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateMaskingView method.
		Uint32 invokeCreateMaskingViewReturnValue;

		String inElementName;
		CIMInstance inInitiatorMaskingGroup;
		CIMInstance inTargetMaskingGroup;
		CIMInstance inDeviceMaskingGroup;
		Array<String> inDeviceNumbers;
		CIMInstance inJob;
		CIMInstance inProtocolController;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "InitiatorMaskingGroup"))
			{
				p.getValue().get(inInitiatorMaskingGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetMaskingGroup"))
			{
				p.getValue().get(inTargetMaskingGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceMaskingGroup"))
			{
				p.getValue().get(inDeviceMaskingGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceNumbers"))
			{
				p.getValue().get(inDeviceNumbers);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "ProtocolController"))
			{
				p.getValue().get(inProtocolController);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateMaskingViewReturnValue = _p.invokeCreateMaskingView(

			inElementName,
			inInitiatorMaskingGroup,
			inTargetMaskingGroup,
			inDeviceMaskingGroup,
			inDeviceNumbers,
			inJob,
			inProtocolController
		);
		_p.finalize();
		handler.deliver(invokeCreateMaskingViewReturnValue);

	}
	else if (methodName.equal("DeleteMaskingView")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteMaskingView method.
		Uint32 invokeDeleteMaskingViewReturnValue;

		CIMInstance inProtocolController;
		CIMInstance inJob;
		Boolean inDeleteWhenBecomesUnassociated;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ProtocolController"))
			{
				p.getValue().get(inProtocolController);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteWhenBecomesUnassociated"))
			{
				p.getValue().get(inDeleteWhenBecomesUnassociated);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteMaskingViewReturnValue = _p.invokeDeleteMaskingView(

			inProtocolController,
			inJob,
			inDeleteWhenBecomesUnassociated
		);
		_p.finalize();
		handler.deliver(invokeDeleteMaskingViewReturnValue);

	}
	else if (methodName.equal("ModifyMaskingView")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ModifyMaskingView method.
		Uint32 invokeModifyMaskingViewReturnValue;

		Uint16 inOperation;
		CIMInstance inProtocolController;
		CIMInstance inMaskingGroup;
		Array<String> inDeviceNumbers;
		CIMInstance inJob;
		Boolean inForce;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Operation"))
			{
				p.getValue().get(inOperation);
			}
			if (String::equalNoCase(p.getParameterName(), "ProtocolController"))
			{
				p.getValue().get(inProtocolController);
			}
			if (String::equalNoCase(p.getParameterName(), "MaskingGroup"))
			{
				p.getValue().get(inMaskingGroup);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceNumbers"))
			{
				p.getValue().get(inDeviceNumbers);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "Force"))
			{
				p.getValue().get(inForce);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeModifyMaskingViewReturnValue = _p.invokeModifyMaskingView(

			inOperation,
			inProtocolController,
			inMaskingGroup,
			inDeviceNumbers,
			inJob,
			inForce
		);
		_p.finalize();
		handler.deliver(invokeModifyMaskingViewReturnValue);

	}
	else if (methodName.equal("CreateProtocolControllerWithPorts")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateProtocolControllerWithPorts method.
		Uint32 invokeCreateProtocolControllerWithPortsReturnValue;

		String inElementName;
		Array<String> inPorts;
		Uint16 inProtocol;
		CIMInstance inPrivilege;
		CIMInstance inIdentity;
		CIMInstance inProtocolController;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "Ports"))
			{
				p.getValue().get(inPorts);
			}
			if (String::equalNoCase(p.getParameterName(), "Protocol"))
			{
				p.getValue().get(inProtocol);
			}
			if (String::equalNoCase(p.getParameterName(), "Privilege"))
			{
				p.getValue().get(inPrivilege);
			}
			if (String::equalNoCase(p.getParameterName(), "Identity"))
			{
				p.getValue().get(inIdentity);
			}
			if (String::equalNoCase(p.getParameterName(), "ProtocolController"))
			{
				p.getValue().get(inProtocolController);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateProtocolControllerWithPortsReturnValue = _p.invokeCreateProtocolControllerWithPorts(

			inElementName,
			inPorts,
			inProtocol,
			inPrivilege,
			inIdentity,
			inProtocolController
		);
		_p.finalize();
		handler.deliver(invokeCreateProtocolControllerWithPortsReturnValue);

	}
	else if (methodName.equal("DeleteProtocolController")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DeleteProtocolController method.
		Uint32 invokeDeleteProtocolControllerReturnValue;

		CIMInstance inProtocolController;
		Boolean inDeleteChildrenProtocolControllers;
		Boolean inDeleteUnits;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ProtocolController"))
			{
				p.getValue().get(inProtocolController);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteChildrenProtocolControllers"))
			{
				p.getValue().get(inDeleteChildrenProtocolControllers);
			}
			if (String::equalNoCase(p.getParameterName(), "DeleteUnits"))
			{
				p.getValue().get(inDeleteUnits);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDeleteProtocolControllerReturnValue = _p.invokeDeleteProtocolController(

			inProtocolController,
			inDeleteChildrenProtocolControllers,
			inDeleteUnits
		);
		_p.finalize();
		handler.deliver(invokeDeleteProtocolControllerReturnValue);

	}
	else if (methodName.equal("AttachDevice")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AttachDevice method.
		Uint32 invokeAttachDeviceReturnValue;

		CIMInstance inProtocolController;
		CIMInstance inDevice;
		String inDeviceNumber;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ProtocolController"))
			{
				p.getValue().get(inProtocolController);
			}
			if (String::equalNoCase(p.getParameterName(), "Device"))
			{
				p.getValue().get(inDevice);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceNumber"))
			{
				p.getValue().get(inDeviceNumber);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAttachDeviceReturnValue = _p.invokeAttachDevice(

			inProtocolController,
			inDevice,
			inDeviceNumber
		);
		_p.finalize();
		handler.deliver(invokeAttachDeviceReturnValue);

	}
	else if (methodName.equal("DetachDevice")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking DetachDevice method.
		Uint32 invokeDetachDeviceReturnValue;

		CIMInstance inProtocolController;
		CIMInstance inDevice;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ProtocolController"))
			{
				p.getValue().get(inProtocolController);
			}
			if (String::equalNoCase(p.getParameterName(), "Device"))
			{
				p.getValue().get(inDevice);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeDetachDeviceReturnValue = _p.invokeDetachDevice(

			inProtocolController,
			inDevice
		);
		_p.finalize();
		handler.deliver(invokeDetachDeviceReturnValue);

	}
	else if (methodName.equal("ExposePaths")) {

		if (inParameters.size() != 7)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ExposePaths method.
		Uint32 invokeExposePathsReturnValue;

		CIMInstance inJob;
		Array<String> inLUNames;
		Array<String> inInitiatorPortIDs;
		Array<String> inTargetPortIDs;
		Array<String> inDeviceNumbers;
		Array<Uint16> inDeviceAccesses;
		CIMInstance inProtocolControllers;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "LUNames"))
			{
				p.getValue().get(inLUNames);
			}
			if (String::equalNoCase(p.getParameterName(), "InitiatorPortIDs"))
			{
				p.getValue().get(inInitiatorPortIDs);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPortIDs"))
			{
				p.getValue().get(inTargetPortIDs);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceNumbers"))
			{
				p.getValue().get(inDeviceNumbers);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceAccesses"))
			{
				p.getValue().get(inDeviceAccesses);
			}
			if (String::equalNoCase(p.getParameterName(), "ProtocolControllers"))
			{
				p.getValue().get(inProtocolControllers);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeExposePathsReturnValue = _p.invokeExposePaths(

			inJob,
			inLUNames,
			inInitiatorPortIDs,
			inTargetPortIDs,
			inDeviceNumbers,
			inDeviceAccesses,
			inProtocolControllers
		);
		_p.finalize();
		handler.deliver(invokeExposePathsReturnValue);

	}
	else if (methodName.equal("HidePaths")) {

		if (inParameters.size() != 5)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking HidePaths method.
		Uint32 invokeHidePathsReturnValue;

		CIMInstance inJob;
		Array<String> inLUNames;
		Array<String> inInitiatorPortIDs;
		Array<String> inTargetPortIDs;
		CIMInstance inProtocolControllers;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "LUNames"))
			{
				p.getValue().get(inLUNames);
			}
			if (String::equalNoCase(p.getParameterName(), "InitiatorPortIDs"))
			{
				p.getValue().get(inInitiatorPortIDs);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPortIDs"))
			{
				p.getValue().get(inTargetPortIDs);
			}
			if (String::equalNoCase(p.getParameterName(), "ProtocolControllers"))
			{
				p.getValue().get(inProtocolControllers);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeHidePathsReturnValue = _p.invokeHidePaths(

			inJob,
			inLUNames,
			inInitiatorPortIDs,
			inTargetPortIDs,
			inProtocolControllers
		);
		_p.finalize();
		handler.deliver(invokeHidePathsReturnValue);

	}
	else if (methodName.equal("ExposeDefaultLUs")) {

		if (inParameters.size() != 6)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ExposeDefaultLUs method.
		Uint32 invokeExposeDefaultLUsReturnValue;

		CIMInstance inJob;
		Array<String> inLUNames;
		Array<String> inTargetPortIDs;
		Array<String> inDeviceNumbers;
		Array<Uint16> inDeviceAccesses;
		CIMInstance inProtocolControllers;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "LUNames"))
			{
				p.getValue().get(inLUNames);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPortIDs"))
			{
				p.getValue().get(inTargetPortIDs);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceNumbers"))
			{
				p.getValue().get(inDeviceNumbers);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceAccesses"))
			{
				p.getValue().get(inDeviceAccesses);
			}
			if (String::equalNoCase(p.getParameterName(), "ProtocolControllers"))
			{
				p.getValue().get(inProtocolControllers);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeExposeDefaultLUsReturnValue = _p.invokeExposeDefaultLUs(

			inJob,
			inLUNames,
			inTargetPortIDs,
			inDeviceNumbers,
			inDeviceAccesses,
			inProtocolControllers
		);
		_p.finalize();
		handler.deliver(invokeExposeDefaultLUsReturnValue);

	}
	else if (methodName.equal("HideDefaultLUs")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking HideDefaultLUs method.
		Uint32 invokeHideDefaultLUsReturnValue;

		CIMInstance inJob;
		Array<String> inLUNames;
		Array<String> inTargetPortIDs;
		CIMInstance inProtocolControllers;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "LUNames"))
			{
				p.getValue().get(inLUNames);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPortIDs"))
			{
				p.getValue().get(inTargetPortIDs);
			}
			if (String::equalNoCase(p.getParameterName(), "ProtocolControllers"))
			{
				p.getValue().get(inProtocolControllers);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeHideDefaultLUsReturnValue = _p.invokeHideDefaultLUs(

			inJob,
			inLUNames,
			inTargetPortIDs,
			inProtocolControllers
		);
		_p.finalize();
		handler.deliver(invokeHideDefaultLUsReturnValue);

	}
	else if (methodName.equal("ExposePathsWithNameAndHostType")) {

		if (inParameters.size() != 9)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ExposePathsWithNameAndHostType method.
		Uint32 invokeExposePathsWithNameAndHostTypeReturnValue;

		CIMInstance inJob;
		Array<String> inLUNames;
		Array<String> inInitiatorPortIDs;
		Array<String> inTargetPortIDs;
		Array<String> inDeviceNumbers;
		Array<Uint16> inDeviceAccesses;
		String inElementName;
		CIMInstance inClientSettingData;
		CIMInstance inProtocolControllers;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "LUNames"))
			{
				p.getValue().get(inLUNames);
			}
			if (String::equalNoCase(p.getParameterName(), "InitiatorPortIDs"))
			{
				p.getValue().get(inInitiatorPortIDs);
			}
			if (String::equalNoCase(p.getParameterName(), "TargetPortIDs"))
			{
				p.getValue().get(inTargetPortIDs);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceNumbers"))
			{
				p.getValue().get(inDeviceNumbers);
			}
			if (String::equalNoCase(p.getParameterName(), "DeviceAccesses"))
			{
				p.getValue().get(inDeviceAccesses);
			}
			if (String::equalNoCase(p.getParameterName(), "ElementName"))
			{
				p.getValue().get(inElementName);
			}
			if (String::equalNoCase(p.getParameterName(), "ClientSettingData"))
			{
				p.getValue().get(inClientSettingData);
			}
			if (String::equalNoCase(p.getParameterName(), "ProtocolControllers"))
			{
				p.getValue().get(inProtocolControllers);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeExposePathsWithNameAndHostTypeReturnValue = _p.invokeExposePathsWithNameAndHostType(

			inJob,
			inLUNames,
			inInitiatorPortIDs,
			inTargetPortIDs,
			inDeviceNumbers,
			inDeviceAccesses,
			inElementName,
			inClientSettingData,
			inProtocolControllers
		);
		_p.finalize();
		handler.deliver(invokeExposePathsWithNameAndHostTypeReturnValue);

	}
	else if (methodName.equal("StartService")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking StartService method.
		Uint32 invokeStartServiceReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeStartServiceReturnValue = _p.invokeStartService();
		_p.finalize();
		handler.deliver(invokeStartServiceReturnValue);

	}
	else if (methodName.equal("StopService")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking StopService method.
		Uint32 invokeStopServiceReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeStopServiceReturnValue = _p.invokeStopService();
		_p.finalize();
		handler.deliver(invokeStopServiceReturnValue);

	}
	else if (methodName.equal("ChangeAffectedElementsAssignedSequence")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ChangeAffectedElementsAssignedSequence method.
		Uint32 invokeChangeAffectedElementsAssignedSequenceReturnValue;

		CIMInstance inManagedElements;
		Array<Uint16> inAssignedSequence;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ManagedElements"))
			{
				p.getValue().get(inManagedElements);
			}
			if (String::equalNoCase(p.getParameterName(), "AssignedSequence"))
			{
				p.getValue().get(inAssignedSequence);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeChangeAffectedElementsAssignedSequenceReturnValue = _p.invokeChangeAffectedElementsAssignedSequence(

			inManagedElements,
			inAssignedSequence,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeChangeAffectedElementsAssignedSequenceReturnValue);

	}
	else if (methodName.equal("RequestStateChange")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RequestStateChange method.
		Uint32 invokeRequestStateChangeReturnValue;

		Uint16 inRequestedState;
		CIMInstance inJob;
		CIMDateTime inTimeoutPeriod;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RequestedState"))
			{
				p.getValue().get(inRequestedState);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
			if (String::equalNoCase(p.getParameterName(), "TimeoutPeriod"))
			{
				p.getValue().get(inTimeoutPeriod);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRequestStateChangeReturnValue = _p.invokeRequestStateChange(

			inRequestedState,
			inJob,
			inTimeoutPeriod
		);
		_p.finalize();
		handler.deliver(invokeRequestStateChangeReturnValue);

	}
	else {
		String message;
		message.append("UNIX_GroupMaskingMappingService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_GroupMaskingMappingServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_GroupMaskingMappingServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_GroupMaskingMappingService
#define CLASS_IMPLEMENTATION_NAME "UNIX_GroupMaskingMappingService"
#define BASE_CLASS_NAME "CIM_GroupMaskingMappingService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

