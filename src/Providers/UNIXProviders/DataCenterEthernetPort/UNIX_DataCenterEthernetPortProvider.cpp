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


#include "UNIX_DataCenterEthernetPortProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_DataCenterEthernetPortProvider::UNIX_DataCenterEthernetPortProvider()
{
}

UNIX_DataCenterEthernetPortProvider::~UNIX_DataCenterEthernetPortProvider()
{
}

CIMInstance UNIX_DataCenterEthernetPortProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_DataCenterEthernetPort &instanceObject) const
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
	
	//CIM_AllocatedLogicalElement Properties
	if (instanceObject.getAllocationState(p)) inst.addProperty(p);
	if (className.equal("CIM_AllocatedLogicalElement")) return inst;
	
	//CIM_LogicalDevice Properties
	if (instanceObject.getSystemCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getSystemName(p)) inst.addProperty(p);
	if (instanceObject.getCreationClassName(p)) inst.addProperty(p);
	if (instanceObject.getDeviceID(p)) inst.addProperty(p);
	if (instanceObject.getPowerManagementSupported(p)) inst.addProperty(p);
	if (instanceObject.getPowerManagementCapabilities(p)) inst.addProperty(p);
	if (instanceObject.getAvailability(p)) inst.addProperty(p);
	if (instanceObject.getStatusInfo(p)) inst.addProperty(p);
	if (instanceObject.getLastErrorCode(p)) inst.addProperty(p);
	if (instanceObject.getErrorDescription(p)) inst.addProperty(p);
	if (instanceObject.getErrorCleared(p)) inst.addProperty(p);
	if (instanceObject.getOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (instanceObject.getPowerOnHours(p)) inst.addProperty(p);
	if (instanceObject.getTotalPowerOnHours(p)) inst.addProperty(p);
	if (instanceObject.getIdentifyingDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getAdditionalAvailability(p)) inst.addProperty(p);
	if (instanceObject.getMaxQuiesceTime(p)) inst.addProperty(p);
	if (instanceObject.getLocationIndicator(p)) inst.addProperty(p);
	if (className.equal("CIM_LogicalDevice")) return inst;
	
	//CIM_LogicalPort Properties
	if (instanceObject.getSpeed(p)) inst.addProperty(p);
	if (instanceObject.getMaxSpeed(p)) inst.addProperty(p);
	if (instanceObject.getRequestedSpeed(p)) inst.addProperty(p);
	if (instanceObject.getUsageRestriction(p)) inst.addProperty(p);
	if (instanceObject.getPortType(p)) inst.addProperty(p);
	if (instanceObject.getOtherPortType(p)) inst.addProperty(p);
	if (className.equal("CIM_LogicalPort")) return inst;
	
	//UNIX_NetworkPort Properties
	if (instanceObject.getOtherNetworkPortType(p)) inst.addProperty(p);
	if (instanceObject.getPortNumber(p)) inst.addProperty(p);
	if (instanceObject.getLinkTechnology(p)) inst.addProperty(p);
	if (instanceObject.getOtherLinkTechnology(p)) inst.addProperty(p);
	if (instanceObject.getPermanentAddress(p)) inst.addProperty(p);
	if (instanceObject.getNetworkAddresses(p)) inst.addProperty(p);
	if (instanceObject.getFullDuplex(p)) inst.addProperty(p);
	if (instanceObject.getAutoSense(p)) inst.addProperty(p);
	if (instanceObject.getSupportedMaximumTransmissionUnit(p)) inst.addProperty(p);
	if (instanceObject.getActiveMaximumTransmissionUnit(p)) inst.addProperty(p);
	if (className.equal("UNIX_NetworkPort")) return inst;
	
	//UNIX_EthernetPort Properties
	if (instanceObject.getMaxDataSize(p)) inst.addProperty(p);
	if (instanceObject.getCapabilities(p)) inst.addProperty(p);
	if (instanceObject.getCapabilityDescriptions(p)) inst.addProperty(p);
	if (instanceObject.getEnabledCapabilities(p)) inst.addProperty(p);
	if (instanceObject.getOtherEnabledCapabilities(p)) inst.addProperty(p);
	if (instanceObject.getPortDiscriminator(p)) inst.addProperty(p);
	if (instanceObject.getPVID(p)) inst.addProperty(p);
	if (instanceObject.getPoEPowerEntityType(p)) inst.addProperty(p);
	if (className.equal("UNIX_EthernetPort")) return inst;
	
	//CIM_LLDPEthernetPort Properties
	if (instanceObject.getConfigPortVlanTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getConfigManVidTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getMessageTxInterval(p)) inst.addProperty(p);
	if (instanceObject.getMessageTxHoldMultiplier(p)) inst.addProperty(p);
	if (instanceObject.getReinitDelay(p)) inst.addProperty(p);
	if (instanceObject.getNotificationInterval(p)) inst.addProperty(p);
	if (instanceObject.getTxCreditMax(p)) inst.addProperty(p);
	if (instanceObject.getMessageFastTx(p)) inst.addProperty(p);
	if (instanceObject.getTxFastInit(p)) inst.addProperty(p);
	if (instanceObject.getDestMacAddress(p)) inst.addProperty(p);
	if (instanceObject.getPortConfigAdminStatus(p)) inst.addProperty(p);
	if (instanceObject.getPortConfigNotificationEnable(p)) inst.addProperty(p);
	if (instanceObject.getPortConfigPortDescriptionTLVTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getPortConfigSystemNameTLVTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getPortConfigSystemDescriptionTLVTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getPortConfigSystemCapabilitiesTLVTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getManAddrConfigDestAddress(p)) inst.addProperty(p);
	if (instanceObject.getManAddrConfigLocManAddrSubtype(p)) inst.addProperty(p);
	if (instanceObject.getManAddrConfigLocManAddr(p)) inst.addProperty(p);
	if (instanceObject.getManAddrConfigTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getLocChassisIdSubtype(p)) inst.addProperty(p);
	if (instanceObject.getLocChassisId(p)) inst.addProperty(p);
	if (instanceObject.getLocSysName(p)) inst.addProperty(p);
	if (instanceObject.getLocSysDesc(p)) inst.addProperty(p);
	if (instanceObject.getLocSysCapSupported(p)) inst.addProperty(p);
	if (instanceObject.getLocSysCapEnabled(p)) inst.addProperty(p);
	if (instanceObject.getLocPortIdSubtype(p)) inst.addProperty(p);
	if (instanceObject.getLocPortID(p)) inst.addProperty(p);
	if (instanceObject.getLocPortDesc(p)) inst.addProperty(p);
	if (instanceObject.getLocTxSystemValue(p)) inst.addProperty(p);
	if (instanceObject.getRemTxSystemValueEcho(p)) inst.addProperty(p);
	if (instanceObject.getLocRxSystemValue(p)) inst.addProperty(p);
	if (instanceObject.getRemRxSystemValueEcho(p)) inst.addProperty(p);
	if (instanceObject.getLocFbSystemValue(p)) inst.addProperty(p);
	if (instanceObject.getRemTxSystemValue(p)) inst.addProperty(p);
	if (instanceObject.getLocTxSystemValueEcho(p)) inst.addProperty(p);
	if (instanceObject.getRemRxSystemValue(p)) inst.addProperty(p);
	if (instanceObject.getLocRxSystemValueEcho(p)) inst.addProperty(p);
	if (instanceObject.getLocResolvedTxSystemValue(p)) inst.addProperty(p);
	if (instanceObject.getLocResolvedRxSystemValue(p)) inst.addProperty(p);
	if (instanceObject.getMaximumFrameSizeTLVEnabled(p)) inst.addProperty(p);
	if (instanceObject.getLocManAddrSubType(p)) inst.addProperty(p);
	if (instanceObject.getLocManAddr(p)) inst.addProperty(p);
	if (instanceObject.getLocManAddrIfSubtype(p)) inst.addProperty(p);
	if (instanceObject.getLocManAddrIfId(p)) inst.addProperty(p);
	if (instanceObject.getRemLocalDestMacAddress(p)) inst.addProperty(p);
	if (instanceObject.getRemManAddrSubType(p)) inst.addProperty(p);
	if (instanceObject.getRemManAddr(p)) inst.addProperty(p);
	if (instanceObject.getRemManAddrIfSubtype(p)) inst.addProperty(p);
	if (instanceObject.getRemManAddrIfId(p)) inst.addProperty(p);
	if (instanceObject.getRemChassisIdSubtype(p)) inst.addProperty(p);
	if (instanceObject.getRemChassisId(p)) inst.addProperty(p);
	if (instanceObject.getRemSysName(p)) inst.addProperty(p);
	if (instanceObject.getRemSysDesc(p)) inst.addProperty(p);
	if (instanceObject.getRemSysCapSupported(p)) inst.addProperty(p);
	if (instanceObject.getRemSysCapEnabled(p)) inst.addProperty(p);
	if (instanceObject.getRemPortIdSubtype(p)) inst.addProperty(p);
	if (instanceObject.getRemPortID(p)) inst.addProperty(p);
	if (instanceObject.getRemPortDesc(p)) inst.addProperty(p);
	if (className.equal("UNIX_LLDPEthernetPort")) return inst;
	
	//CIM_DataCenterEthernetPort Properties
	if (instanceObject.getPfcLinkDelayAllowance(p)) inst.addProperty(p);
	if (instanceObject.getETSConfigurationTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getETSRecommendationTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getPFCTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getApplicationPriorityTxEnable(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConCreditBasedShaperSupport(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConTrafficClassesSupported(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConWilling(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConPriority(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConPriTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConTrafficClassBandwidth(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConTSATrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getLocETSConTrafficSelectionAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getLocETSRecoTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getLocETSRecoTrafficClassBandwidth(p)) inst.addProperty(p);
	if (instanceObject.getLocETSRecoTSATrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getLocETSRecoTrafficSelectionAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getLocPFCWilling(p)) inst.addProperty(p);
	if (instanceObject.getLocPFCMBC(p)) inst.addProperty(p);
	if (instanceObject.getLocPFCCap(p)) inst.addProperty(p);
	if (instanceObject.getLocPFCEnablePriority(p)) inst.addProperty(p);
	if (instanceObject.getLocPFCEnableEnabled(p)) inst.addProperty(p);
	if (instanceObject.getLocApplicationPriorityAESelector(p)) inst.addProperty(p);
	if (instanceObject.getLocApplicationPriorityAEProtocol(p)) inst.addProperty(p);
	if (instanceObject.getLocApplicationPriorityAEPriority(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConCreditBasedShaperSupport(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConTrafficClassesSupported(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConWilling(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConPriority(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConPriTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConTrafficClassBandwidth(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConTSATrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getRemETSConTrafficSelectionAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getRemETSRecoTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getRemETSRecoTrafficClassBandwidth(p)) inst.addProperty(p);
	if (instanceObject.getRemETSRecoTSATrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getRemETSRecoTrafficSelectionAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getRemPFCWilling(p)) inst.addProperty(p);
	if (instanceObject.getRemPFCMBC(p)) inst.addProperty(p);
	if (instanceObject.getRemPFCCap(p)) inst.addProperty(p);
	if (instanceObject.getRemPFCEnablePriority(p)) inst.addProperty(p);
	if (instanceObject.getRemPFCEnableEnabled(p)) inst.addProperty(p);
	if (instanceObject.getRemApplicationPriorityAESelector(p)) inst.addProperty(p);
	if (instanceObject.getRemApplicationPriorityAEProtocol(p)) inst.addProperty(p);
	if (instanceObject.getRemApplicationPriorityAEPriority(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConCreditBasedShaperSupport(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConTrafficClassesSupported(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConWilling(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConPriority(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConPriTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConTrafficClassBandwidth(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConTSATrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSConTrafficSelectionAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSRecoTrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSRecoTrafficClassBandwidth(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSRecoTSATrafficClass(p)) inst.addProperty(p);
	if (instanceObject.getAdminETSRecoTrafficSelectionAlgorithm(p)) inst.addProperty(p);
	if (instanceObject.getAdminPFCWilling(p)) inst.addProperty(p);
	if (instanceObject.getAdminPFCMBC(p)) inst.addProperty(p);
	if (instanceObject.getAdminPFCCap(p)) inst.addProperty(p);
	if (instanceObject.getAdminPFCEnablePriority(p)) inst.addProperty(p);
	if (instanceObject.getAdminPFCEnableEnabled(p)) inst.addProperty(p);
	if (instanceObject.getAdminApplicationPriorityAESelector(p)) inst.addProperty(p);
	if (instanceObject.getAdminApplicationPriorityAEProtocol(p)) inst.addProperty(p);
	if (instanceObject.getAdminApplicationPriorityAEPriority(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_DataCenterEthernetPortProvider::constructKeyBindings(const UNIX_DataCenterEthernetPort& instanceObject) const
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
		PROPERTY_DEVICE_ID,
		instanceObject.getDeviceID(),
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

void UNIX_DataCenterEthernetPortProvider::invokeMethod(
	const OperationContext& context,
	const CIMObjectPath& objectReference,
	const CIMName& methodName,
	const Array<CIMParamValue>& inParameters,
	MethodResultResponseHandler& handler)
{
	if (!objectReference.getClassName().equal("UNIX_DataCenterEthernetPort") && !objectReference.getClassName().equal("CIM_DataCenterEthernetPort")) {
		String classMessage;
		classMessage.append("UNIX_DataCenterEthernetPort Provider");
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
	
	if (methodName.equal("SetPowerState")) {

		if (inParameters.size() != 2)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SetPowerState method.
		Uint32 invokeSetPowerStateReturnValue;

		Uint16 inPowerState;
		CIMDateTime inTime;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "PowerState"))
			{
				p.getValue().get(inPowerState);
			}
			if (String::equalNoCase(p.getParameterName(), "Time"))
			{
				p.getValue().get(inTime);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSetPowerStateReturnValue = _p.invokeSetPowerState(

			inPowerState,
			inTime
		);
		_p.finalize();
		handler.deliver(invokeSetPowerStateReturnValue);

	}
	else if (methodName.equal("Reset")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking Reset method.
		Uint32 invokeResetReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeResetReturnValue = _p.invokeReset();
		_p.finalize();
		handler.deliver(invokeResetReturnValue);

	}
	else if (methodName.equal("EnableDevice")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking EnableDevice method.
		Uint32 invokeEnableDeviceReturnValue;

		Boolean inEnabled;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Enabled"))
			{
				p.getValue().get(inEnabled);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeEnableDeviceReturnValue = _p.invokeEnableDevice(

			inEnabled
		);
		_p.finalize();
		handler.deliver(invokeEnableDeviceReturnValue);

	}
	else if (methodName.equal("OnlineDevice")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking OnlineDevice method.
		Uint32 invokeOnlineDeviceReturnValue;

		Boolean inOnline;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Online"))
			{
				p.getValue().get(inOnline);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeOnlineDeviceReturnValue = _p.invokeOnlineDevice(

			inOnline
		);
		_p.finalize();
		handler.deliver(invokeOnlineDeviceReturnValue);

	}
	else if (methodName.equal("QuiesceDevice")) {

		if (inParameters.size() != 1)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking QuiesceDevice method.
		Uint32 invokeQuiesceDeviceReturnValue;

		Boolean inQuiesce;
		
		for(Uint32 pi = 0; pi < inParameters.size(); pi++) {
			CIMParamValue p = inParameters[pi];
			if (String::equalNoCase(p.getParameterName(), "Quiesce"))
			{
				p.getValue().get(inQuiesce);
			}
		}
		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeQuiesceDeviceReturnValue = _p.invokeQuiesceDevice(

			inQuiesce
		);
		_p.finalize();
		handler.deliver(invokeQuiesceDeviceReturnValue);

	}
	else if (methodName.equal("SaveProperties")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking SaveProperties method.
		Uint32 invokeSavePropertiesReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeSavePropertiesReturnValue = _p.invokeSaveProperties();
		_p.finalize();
		handler.deliver(invokeSavePropertiesReturnValue);

	}
	else if (methodName.equal("RestoreProperties")) {

		if (inParameters.size() != 0)
		{
			throw new CIMOperationFailedException("Incorrect in parameters");
		}
		
		//Invoking RestoreProperties method.
		Uint32 invokeRestorePropertiesReturnValue;

		_p.initialize();
		_p.find(localReference.getKeyBindings());
		invokeRestorePropertiesReturnValue = _p.invokeRestoreProperties();
		_p.finalize();
		handler.deliver(invokeRestorePropertiesReturnValue);

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
		message.append("UNIX_DataCenterEthernetPort");
		message.append (" does not support invokeMethod");
		throw CIMNotSupportedException(message);
	}
}


#define UNIX_PROVIDER UNIX_DataCenterEthernetPortProvider
#define UNIX_PROVIDER_NAME "UNIX_DataCenterEthernetPortProvider"
#define CLASS_IMPLEMENTATION UNIX_DataCenterEthernetPort
#define CLASS_IMPLEMENTATION_NAME "UNIX_DataCenterEthernetPort"
#define BASE_CLASS_NAME "CIM_DataCenterEthernetPort"
#define NUMKEYS_CLASS_IMPLEMENTATION 4
#define CLASS_LOADABLE_BY_NAME 1


#include "UNIXProviderBase.hpp"

