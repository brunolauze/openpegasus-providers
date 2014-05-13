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


#include "UNIX_ZoneServiceProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_ZoneServiceProvider::UNIX_ZoneServiceProvider()
{
}

UNIX_ZoneServiceProvider::~UNIX_ZoneServiceProvider()
{
}

CIMInstance UNIX_ZoneServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_ZoneService &instanceObject) const
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
	
	//CIM_ZoneService Properties
	if (instanceObject.getSessionState(p)) inst.addProperty(p);
	if (instanceObject.getRequestedSessionState(p)) inst.addProperty(p);
	if (instanceObject.getDefaultZoningState(p)) inst.addProperty(p);
	if (instanceObject.getConfigurationID(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_ZoneServiceProvider::constructKeyBindings(const UNIX_ZoneService& instanceObject) const
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

void UNIX_ZoneServiceProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_ZoneService") && !objectReference.getClassName().equal("CIM_ZoneService")) {
		String classMessage;
		classMessage.append("UNIX_ZoneService Provider");
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
	
	if (methodName.equal("CreateZoneSet")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateZoneSet method.
		Uint32 invokeCreateZoneSetReturnValue;

		String inZoneSetName;
		CIMInstance inZoneSet;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ZoneSetName"))
			{
				p.getValue().get(inZoneSetName);
			}
			if (String::equalNoCase(p.getParameterName(), "ZoneSet"))
			{
				p.getValue().get(inZoneSet);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateZoneSetReturnValue = _p.invokeCreateZoneSet(

			inZoneSetName,
			inZoneSet
		);
		_p.finalize();
		handler.deliver(invokeCreateZoneSetReturnValue);

	}
	else if (methodName.equal("CreateZone")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateZone method.
		Uint32 invokeCreateZoneReturnValue;

		String inZoneName;
		Uint16 inZoneType;
		Uint16 inZoneSubType;
		CIMInstance inZone;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ZoneName"))
			{
				p.getValue().get(inZoneName);
			}
			if (String::equalNoCase(p.getParameterName(), "ZoneType"))
			{
				p.getValue().get(inZoneType);
			}
			if (String::equalNoCase(p.getParameterName(), "ZoneSubType"))
			{
				p.getValue().get(inZoneSubType);
			}
			if (String::equalNoCase(p.getParameterName(), "Zone"))
			{
				p.getValue().get(inZone);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateZoneReturnValue = _p.invokeCreateZone(

			inZoneName,
			inZoneType,
			inZoneSubType,
			inZone
		);
		_p.finalize();
		handler.deliver(invokeCreateZoneReturnValue);

	}
	else if (methodName.equal("CreateZoneAlias")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateZoneAlias method.
		Uint32 invokeCreateZoneAliasReturnValue;

		String inCollectionAlias;
		CIMInstance inZoneAlias;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "CollectionAlias"))
			{
				p.getValue().get(inCollectionAlias);
			}
			if (String::equalNoCase(p.getParameterName(), "ZoneAlias"))
			{
				p.getValue().get(inZoneAlias);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateZoneAliasReturnValue = _p.invokeCreateZoneAlias(

			inCollectionAlias,
			inZoneAlias
		);
		_p.finalize();
		handler.deliver(invokeCreateZoneAliasReturnValue);

	}
	else if (methodName.equal("CreateZoneMembershipSettingData")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking CreateZoneMembershipSettingData method.
		Uint32 invokeCreateZoneMembershipSettingDataReturnValue;

		Uint16 inConnectivityMemberType;
		String inConnectivityMemberID;
		CIMInstance inSystemSpecificCollection;
		CIMInstance inZoneMembershipSettingData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ConnectivityMemberType"))
			{
				p.getValue().get(inConnectivityMemberType);
			}
			if (String::equalNoCase(p.getParameterName(), "ConnectivityMemberID"))
			{
				p.getValue().get(inConnectivityMemberID);
			}
			if (String::equalNoCase(p.getParameterName(), "SystemSpecificCollection"))
			{
				p.getValue().get(inSystemSpecificCollection);
			}
			if (String::equalNoCase(p.getParameterName(), "ZoneMembershipSettingData"))
			{
				p.getValue().get(inZoneMembershipSettingData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeCreateZoneMembershipSettingDataReturnValue = _p.invokeCreateZoneMembershipSettingData(

			inConnectivityMemberType,
			inConnectivityMemberID,
			inSystemSpecificCollection,
			inZoneMembershipSettingData
		);
		_p.finalize();
		handler.deliver(invokeCreateZoneMembershipSettingDataReturnValue);

	}
	else if (methodName.equal("AddZone")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddZone method.
		Uint32 invokeAddZoneReturnValue;

		CIMInstance inZoneSet;
		CIMInstance inZone;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ZoneSet"))
			{
				p.getValue().get(inZoneSet);
			}
			if (String::equalNoCase(p.getParameterName(), "Zone"))
			{
				p.getValue().get(inZone);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddZoneReturnValue = _p.invokeAddZone(

			inZoneSet,
			inZone
		);
		_p.finalize();
		handler.deliver(invokeAddZoneReturnValue);

	}
	else if (methodName.equal("AddZoneMembershipSettingData")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddZoneMembershipSettingData method.
		Uint32 invokeAddZoneMembershipSettingDataReturnValue;

		CIMInstance inSystemSpecificCollection;
		CIMInstance inZoneMembershipSettingData;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "SystemSpecificCollection"))
			{
				p.getValue().get(inSystemSpecificCollection);
			}
			if (String::equalNoCase(p.getParameterName(), "ZoneMembershipSettingData"))
			{
				p.getValue().get(inZoneMembershipSettingData);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddZoneMembershipSettingDataReturnValue = _p.invokeAddZoneMembershipSettingData(

			inSystemSpecificCollection,
			inZoneMembershipSettingData
		);
		_p.finalize();
		handler.deliver(invokeAddZoneMembershipSettingDataReturnValue);

	}
	else if (methodName.equal("AddZoneAlias")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking AddZoneAlias method.
		Uint32 invokeAddZoneAliasReturnValue;

		CIMInstance inZone;
		CIMInstance inZoneAlias;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Zone"))
			{
				p.getValue().get(inZone);
			}
			if (String::equalNoCase(p.getParameterName(), "ZoneAlias"))
			{
				p.getValue().get(inZoneAlias);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeAddZoneAliasReturnValue = _p.invokeAddZoneAlias(

			inZone,
			inZoneAlias
		);
		_p.finalize();
		handler.deliver(invokeAddZoneAliasReturnValue);

	}
	else if (methodName.equal("ActivateZoneSet")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ActivateZoneSet method.
		Uint32 invokeActivateZoneSetReturnValue;

		CIMInstance inZoneSet;
		Boolean inActivate;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ZoneSet"))
			{
				p.getValue().get(inZoneSet);
			}
			if (String::equalNoCase(p.getParameterName(), "Activate"))
			{
				p.getValue().get(inActivate);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeActivateZoneSetReturnValue = _p.invokeActivateZoneSet(

			inZoneSet,
			inActivate
		);
		_p.finalize();
		handler.deliver(invokeActivateZoneSetReturnValue);

	}
	else if (methodName.equal("SessionControl")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SessionControl method.
		Uint32 invokeSessionControlReturnValue;

		Uint16 inRequestedSessionState;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RequestedSessionState"))
			{
				p.getValue().get(inRequestedSessionState);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSessionControlReturnValue = _p.invokeSessionControl(

			inRequestedSessionState
		);
		_p.finalize();
		handler.deliver(invokeSessionControlReturnValue);

	}
	else if (methodName.equal("ActivateZoneSetWithJob")) {

		if (inParameters.size() != 4)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking ActivateZoneSetWithJob method.
		Uint32 invokeActivateZoneSetWithJobReturnValue;

		CIMInstance inZoneSet;
		Boolean inActivate;
		String inConfigurationID;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "ZoneSet"))
			{
				p.getValue().get(inZoneSet);
			}
			if (String::equalNoCase(p.getParameterName(), "Activate"))
			{
				p.getValue().get(inActivate);
			}
			if (String::equalNoCase(p.getParameterName(), "ConfigurationID"))
			{
				p.getValue().get(inConfigurationID);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeActivateZoneSetWithJobReturnValue = _p.invokeActivateZoneSetWithJob(

			inZoneSet,
			inActivate,
			inConfigurationID,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeActivateZoneSetWithJobReturnValue);

	}
	else if (methodName.equal("SessionControlWithJob")) {

		if (inParameters.size() != 3)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SessionControlWithJob method.
		Uint32 invokeSessionControlWithJobReturnValue;

		Uint16 inRequestedSessionState;
		String inConfigurationID;
		CIMInstance inJob;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "RequestedSessionState"))
			{
				p.getValue().get(inRequestedSessionState);
			}
			if (String::equalNoCase(p.getParameterName(), "ConfigurationID"))
			{
				p.getValue().get(inConfigurationID);
			}
			if (String::equalNoCase(p.getParameterName(), "Job"))
			{
				p.getValue().get(inJob);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSessionControlWithJobReturnValue = _p.invokeSessionControlWithJob(

			inRequestedSessionState,
			inConfigurationID,
			inJob
		);
		_p.finalize();
		handler.deliver(invokeSessionControlWithJobReturnValue);

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
		message.append("UNIX_ZoneService");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_ZoneServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_ZoneServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_ZoneService
#define CLASS_IMPLEMENTATION_NAME "UNIX_ZoneService"
#define BASE_CLASS_NAME "CIM_ZoneService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

