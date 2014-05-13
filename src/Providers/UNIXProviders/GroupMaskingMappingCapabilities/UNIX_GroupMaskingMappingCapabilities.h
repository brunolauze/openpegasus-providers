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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::ComponentElement
*/


/* **** Description *** */
/*
A subclass of CIM_ProtocolControllerMaskingCapabilities that defines the group masking-related capabilities of a ProtocolController.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_ProtocolControllerMaskingCapabilities:
				ValidHardwareIdTypes UInt16
				OtherValidHardwareIDTypes String
				PortsPerView UInt16
				ClientSelectableDeviceNumbers Boolean
				AttachDeviceSupported Boolean
				OneHardwareIDPerView Boolean
				UniqueUnitNumbersPerPort Boolean
				PrivilegeDeniedSupported Boolean
				ProtocolControllerRequiresAuthorizedIdentity Boolean
				ProtocolControllerSupportsCollections Boolean
				ExposePathsSupported Boolean
				CreateProtocolControllerSupported Boolean
				MaximumMapCount UInt16
				SPCAllowsNoLUs Boolean
				SPCAllowsNoTargets Boolean
				SPCAllowsNoInitiators Boolean
				SPCSupportsDefaultViews Boolean
				ExposePathsWithNameAndHostTypeSupported Boolean

			UNIX_GroupMaskingMappingCapabilities:
				SupportedAsynchronousActions UInt16
				SupportedSynchronousActions UInt16
				SupportedFeatures UInt16
				SupportedInitiatorGroupFeatures UInt16
				SupportedTargetGroupFeatures UInt16
				SupportedDeviceGroupFeatures UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_ProtocolControllerMaskingCapabilities:
				GetElementNameCapabilities UInt32

			UNIX_GroupMaskingMappingCapabilities:


*/

#ifndef __UNIX_GROUPMASKINGMAPPINGCAPABILITIES_H
#define __UNIX_GROUPMASKINGMAPPINGCAPABILITIES_H


#include <ProtocolControllerMaskingCapabilities/UNIX_ProtocolControllerMaskingCapabilities.h>

#include "UNIX_GroupMaskingMappingCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SupportedAsynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_FEATURES
#define PROPERTY_SUPPORTED_FEATURES \
					"SupportedFeatures"
#endif

#ifndef PROPERTY_SUPPORTED_INITIATOR_GROUP_FEATURES
#define PROPERTY_SUPPORTED_INITIATOR_GROUP_FEATURES \
					"SupportedInitiatorGroupFeatures"
#endif

#ifndef PROPERTY_SUPPORTED_TARGET_GROUP_FEATURES
#define PROPERTY_SUPPORTED_TARGET_GROUP_FEATURES \
					"SupportedTargetGroupFeatures"
#endif

#ifndef PROPERTY_SUPPORTED_DEVICE_GROUP_FEATURES
#define PROPERTY_SUPPORTED_DEVICE_GROUP_FEATURES \
					"SupportedDeviceGroupFeatures"
#endif



class UNIX_GroupMaskingMappingCapabilities :
	public UNIX_ProtocolControllerMaskingCapabilities
{
public:

	UNIX_GroupMaskingMappingCapabilities();
	~UNIX_GroupMaskingMappingCapabilities();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getValidHardwareIdTypes(CIMProperty&) const;
	virtual Array<Uint16> getValidHardwareIdTypes() const;
	virtual void setValidHardwareIdTypes(Array<Uint16>&);
	virtual Boolean getOtherValidHardwareIDTypes(CIMProperty&) const;
	virtual Array<String> getOtherValidHardwareIDTypes() const;
	virtual void setOtherValidHardwareIDTypes(Array<String>&);
	virtual Boolean getPortsPerView(CIMProperty&) const;
	virtual Uint16 getPortsPerView() const;
	virtual void setPortsPerView(Uint16&);
	virtual Boolean getClientSelectableDeviceNumbers(CIMProperty&) const;
	virtual Boolean getClientSelectableDeviceNumbers() const;
	virtual void setClientSelectableDeviceNumbers(Boolean&);
	virtual Boolean getAttachDeviceSupported(CIMProperty&) const;
	virtual Boolean getAttachDeviceSupported() const;
	virtual void setAttachDeviceSupported(Boolean&);
	virtual Boolean getOneHardwareIDPerView(CIMProperty&) const;
	virtual Boolean getOneHardwareIDPerView() const;
	virtual void setOneHardwareIDPerView(Boolean&);
	virtual Boolean getUniqueUnitNumbersPerPort(CIMProperty&) const;
	virtual Boolean getUniqueUnitNumbersPerPort() const;
	virtual void setUniqueUnitNumbersPerPort(Boolean&);
	virtual Boolean getPrivilegeDeniedSupported(CIMProperty&) const;
	virtual Boolean getPrivilegeDeniedSupported() const;
	virtual void setPrivilegeDeniedSupported(Boolean&);
	virtual Boolean getProtocolControllerRequiresAuthorizedIdentity(CIMProperty&) const;
	virtual Boolean getProtocolControllerRequiresAuthorizedIdentity() const;
	virtual void setProtocolControllerRequiresAuthorizedIdentity(Boolean&);
	virtual Boolean getProtocolControllerSupportsCollections(CIMProperty&) const;
	virtual Boolean getProtocolControllerSupportsCollections() const;
	virtual void setProtocolControllerSupportsCollections(Boolean&);
	virtual Boolean getExposePathsSupported(CIMProperty&) const;
	virtual Boolean getExposePathsSupported() const;
	virtual void setExposePathsSupported(Boolean&);
	virtual Boolean getCreateProtocolControllerSupported(CIMProperty&) const;
	virtual Boolean getCreateProtocolControllerSupported() const;
	virtual void setCreateProtocolControllerSupported(Boolean&);
	virtual Boolean getMaximumMapCount(CIMProperty&) const;
	virtual Uint16 getMaximumMapCount() const;
	virtual void setMaximumMapCount(Uint16&);
	virtual Boolean getSPCAllowsNoLUs(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoLUs() const;
	virtual void setSPCAllowsNoLUs(Boolean&);
	virtual Boolean getSPCAllowsNoTargets(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoTargets() const;
	virtual void setSPCAllowsNoTargets(Boolean&);
	virtual Boolean getSPCAllowsNoInitiators(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoInitiators() const;
	virtual void setSPCAllowsNoInitiators(Boolean&);
	virtual Boolean getSPCSupportsDefaultViews(CIMProperty&) const;
	virtual Boolean getSPCSupportsDefaultViews() const;
	virtual void setSPCSupportsDefaultViews(Boolean&);
	virtual Boolean getExposePathsWithNameAndHostTypeSupported(CIMProperty&) const;
	virtual Boolean getExposePathsWithNameAndHostTypeSupported() const;
	virtual void setExposePathsWithNameAndHostTypeSupported(Boolean&);
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual void setSupportedAsynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual void setSupportedSynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedFeatures() const;
	virtual void setSupportedFeatures(Array<Uint16>&);
	virtual Boolean getSupportedInitiatorGroupFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedInitiatorGroupFeatures() const;
	virtual void setSupportedInitiatorGroupFeatures(Array<Uint16>&);
	virtual Boolean getSupportedTargetGroupFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedTargetGroupFeatures() const;
	virtual void setSupportedTargetGroupFeatures(Array<Uint16>&);
	virtual Boolean getSupportedDeviceGroupFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedDeviceGroupFeatures() const;
	virtual void setSupportedDeviceGroupFeatures(Array<Uint16>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);

	virtual Uint32 invokeGetElementNameCapabilities(
		Uint16 &inElementType,
		CIMInstance &inGoal,
		Array<Uint16> &inSupportedFeatures,
		Uint16 &inMaxElementNameLen,
		String &inElementNameMask
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Array<Uint16> _validHardwareIdTypes;
	Array<String> _otherValidHardwareIDTypes;
	Uint16 _portsPerView;
	Boolean _clientSelectableDeviceNumbers;
	Boolean _attachDeviceSupported;
	Boolean _oneHardwareIDPerView;
	Boolean _uniqueUnitNumbersPerPort;
	Boolean _privilegeDeniedSupported;
	Boolean _protocolControllerRequiresAuthorizedIdentity;
	Boolean _protocolControllerSupportsCollections;
	Boolean _exposePathsSupported;
	Boolean _createProtocolControllerSupported;
	Uint16 _maximumMapCount;
	Boolean _sPCAllowsNoLUs;
	Boolean _sPCAllowsNoTargets;
	Boolean _sPCAllowsNoInitiators;
	Boolean _sPCSupportsDefaultViews;
	Boolean _exposePathsWithNameAndHostTypeSupported;
	Array<Uint16> _supportedAsynchronousActions;
	Array<Uint16> _supportedSynchronousActions;
	Array<Uint16> _supportedFeatures;
	Array<Uint16> _supportedInitiatorGroupFeatures;
	Array<Uint16> _supportedTargetGroupFeatures;
	Array<Uint16> _supportedDeviceGroupFeatures;

#	include "UNIX_GroupMaskingMappingCapabilitiesPrivate.h"


};

#endif /* UNIX_GROUPMASKINGMAPPINGCAPABILITIES */
