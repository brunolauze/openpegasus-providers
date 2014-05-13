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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_GroupMaskingMappingCapabilities::UNIX_GroupMaskingMappingCapabilities(void)
{
}

UNIX_GroupMaskingMappingCapabilities::~UNIX_GroupMaskingMappingCapabilities(void)
{
}

Boolean UNIX_GroupMaskingMappingCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_GroupMaskingMappingCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_GroupMaskingMappingCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_GroupMaskingMappingCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_GroupMaskingMappingCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_GroupMaskingMappingCapabilities::getDescription() const
{
	return _description;
}

void UNIX_GroupMaskingMappingCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_GroupMaskingMappingCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_GroupMaskingMappingCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_GroupMaskingMappingCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_GroupMaskingMappingCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getValidHardwareIdTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_HARDWARE_ID_TYPES, getValidHardwareIdTypes());
	return true;
}

Array<Uint16> UNIX_GroupMaskingMappingCapabilities::getValidHardwareIdTypes() const
{
	return _validHardwareIdTypes;
}

void UNIX_GroupMaskingMappingCapabilities::setValidHardwareIdTypes(Array<Uint16> &value)
{
	_validHardwareIdTypes = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getOtherValidHardwareIDTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_VALID_HARDWARE_ID_TYPES, getOtherValidHardwareIDTypes());
	return true;
}

Array<String> UNIX_GroupMaskingMappingCapabilities::getOtherValidHardwareIDTypes() const
{
	return _otherValidHardwareIDTypes;
}

void UNIX_GroupMaskingMappingCapabilities::setOtherValidHardwareIDTypes(Array<String> &value)
{
	_otherValidHardwareIDTypes = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getPortsPerView(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORTS_PER_VIEW, getPortsPerView());
	return true;
}

Uint16 UNIX_GroupMaskingMappingCapabilities::getPortsPerView() const
{
	return _portsPerView;
}

void UNIX_GroupMaskingMappingCapabilities::setPortsPerView(Uint16 &value)
{
	_portsPerView = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getClientSelectableDeviceNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SELECTABLE_DEVICE_NUMBERS, getClientSelectableDeviceNumbers());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getClientSelectableDeviceNumbers() const
{
	return _clientSelectableDeviceNumbers;
}

void UNIX_GroupMaskingMappingCapabilities::setClientSelectableDeviceNumbers(Boolean &value)
{
	_clientSelectableDeviceNumbers = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getAttachDeviceSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTACH_DEVICE_SUPPORTED, getAttachDeviceSupported());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getAttachDeviceSupported() const
{
	return _attachDeviceSupported;
}

void UNIX_GroupMaskingMappingCapabilities::setAttachDeviceSupported(Boolean &value)
{
	_attachDeviceSupported = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getOneHardwareIDPerView(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONE_HARDWARE_ID_PER_VIEW, getOneHardwareIDPerView());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getOneHardwareIDPerView() const
{
	return _oneHardwareIDPerView;
}

void UNIX_GroupMaskingMappingCapabilities::setOneHardwareIDPerView(Boolean &value)
{
	_oneHardwareIDPerView = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getUniqueUnitNumbersPerPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_UNIT_NUMBERS_PER_PORT, getUniqueUnitNumbersPerPort());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getUniqueUnitNumbersPerPort() const
{
	return _uniqueUnitNumbersPerPort;
}

void UNIX_GroupMaskingMappingCapabilities::setUniqueUnitNumbersPerPort(Boolean &value)
{
	_uniqueUnitNumbersPerPort = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getPrivilegeDeniedSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGE_DENIED_SUPPORTED, getPrivilegeDeniedSupported());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getPrivilegeDeniedSupported() const
{
	return _privilegeDeniedSupported;
}

void UNIX_GroupMaskingMappingCapabilities::setPrivilegeDeniedSupported(Boolean &value)
{
	_privilegeDeniedSupported = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getProtocolControllerRequiresAuthorizedIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CONTROLLER_REQUIRES_AUTHORIZED_IDENTITY, getProtocolControllerRequiresAuthorizedIdentity());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getProtocolControllerRequiresAuthorizedIdentity() const
{
	return _protocolControllerRequiresAuthorizedIdentity;
}

void UNIX_GroupMaskingMappingCapabilities::setProtocolControllerRequiresAuthorizedIdentity(Boolean &value)
{
	_protocolControllerRequiresAuthorizedIdentity = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getProtocolControllerSupportsCollections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CONTROLLER_SUPPORTS_COLLECTIONS, getProtocolControllerSupportsCollections());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getProtocolControllerSupportsCollections() const
{
	return _protocolControllerSupportsCollections;
}

void UNIX_GroupMaskingMappingCapabilities::setProtocolControllerSupportsCollections(Boolean &value)
{
	_protocolControllerSupportsCollections = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getExposePathsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPOSE_PATHS_SUPPORTED, getExposePathsSupported());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getExposePathsSupported() const
{
	return _exposePathsSupported;
}

void UNIX_GroupMaskingMappingCapabilities::setExposePathsSupported(Boolean &value)
{
	_exposePathsSupported = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getCreateProtocolControllerSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATE_PROTOCOL_CONTROLLER_SUPPORTED, getCreateProtocolControllerSupported());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getCreateProtocolControllerSupported() const
{
	return _createProtocolControllerSupported;
}

void UNIX_GroupMaskingMappingCapabilities::setCreateProtocolControllerSupported(Boolean &value)
{
	_createProtocolControllerSupported = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getMaximumMapCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_MAP_COUNT, getMaximumMapCount());
	return true;
}

Uint16 UNIX_GroupMaskingMappingCapabilities::getMaximumMapCount() const
{
	return _maximumMapCount;
}

void UNIX_GroupMaskingMappingCapabilities::setMaximumMapCount(Uint16 &value)
{
	_maximumMapCount = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSPCAllowsNoLUs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_L_US, getSPCAllowsNoLUs());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSPCAllowsNoLUs() const
{
	return _sPCAllowsNoLUs;
}

void UNIX_GroupMaskingMappingCapabilities::setSPCAllowsNoLUs(Boolean &value)
{
	_sPCAllowsNoLUs = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSPCAllowsNoTargets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_TARGETS, getSPCAllowsNoTargets());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSPCAllowsNoTargets() const
{
	return _sPCAllowsNoTargets;
}

void UNIX_GroupMaskingMappingCapabilities::setSPCAllowsNoTargets(Boolean &value)
{
	_sPCAllowsNoTargets = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSPCAllowsNoInitiators(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_INITIATORS, getSPCAllowsNoInitiators());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSPCAllowsNoInitiators() const
{
	return _sPCAllowsNoInitiators;
}

void UNIX_GroupMaskingMappingCapabilities::setSPCAllowsNoInitiators(Boolean &value)
{
	_sPCAllowsNoInitiators = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSPCSupportsDefaultViews(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_CSUPPORTS_DEFAULT_VIEWS, getSPCSupportsDefaultViews());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSPCSupportsDefaultViews() const
{
	return _sPCSupportsDefaultViews;
}

void UNIX_GroupMaskingMappingCapabilities::setSPCSupportsDefaultViews(Boolean &value)
{
	_sPCSupportsDefaultViews = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getExposePathsWithNameAndHostTypeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPOSE_PATHS_WITH_NAME_AND_HOST_TYPE_SUPPORTED, getExposePathsWithNameAndHostTypeSupported());
	return true;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getExposePathsWithNameAndHostTypeSupported() const
{
	return _exposePathsWithNameAndHostTypeSupported;
}

void UNIX_GroupMaskingMappingCapabilities::setExposePathsWithNameAndHostTypeSupported(Boolean &value)
{
	_exposePathsWithNameAndHostTypeSupported = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_GroupMaskingMappingCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_GroupMaskingMappingCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_GroupMaskingMappingCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_GroupMaskingMappingCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSupportedFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FEATURES, getSupportedFeatures());
	return true;
}

Array<Uint16> UNIX_GroupMaskingMappingCapabilities::getSupportedFeatures() const
{
	return _supportedFeatures;
}

void UNIX_GroupMaskingMappingCapabilities::setSupportedFeatures(Array<Uint16> &value)
{
	_supportedFeatures = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSupportedInitiatorGroupFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_INITIATOR_GROUP_FEATURES, getSupportedInitiatorGroupFeatures());
	return true;
}

Array<Uint16> UNIX_GroupMaskingMappingCapabilities::getSupportedInitiatorGroupFeatures() const
{
	return _supportedInitiatorGroupFeatures;
}

void UNIX_GroupMaskingMappingCapabilities::setSupportedInitiatorGroupFeatures(Array<Uint16> &value)
{
	_supportedInitiatorGroupFeatures = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSupportedTargetGroupFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TARGET_GROUP_FEATURES, getSupportedTargetGroupFeatures());
	return true;
}

Array<Uint16> UNIX_GroupMaskingMappingCapabilities::getSupportedTargetGroupFeatures() const
{
	return _supportedTargetGroupFeatures;
}

void UNIX_GroupMaskingMappingCapabilities::setSupportedTargetGroupFeatures(Array<Uint16> &value)
{
	_supportedTargetGroupFeatures = value;
}

Boolean UNIX_GroupMaskingMappingCapabilities::getSupportedDeviceGroupFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_DEVICE_GROUP_FEATURES, getSupportedDeviceGroupFeatures());
	return true;
}

Array<Uint16> UNIX_GroupMaskingMappingCapabilities::getSupportedDeviceGroupFeatures() const
{
	return _supportedDeviceGroupFeatures;
}

void UNIX_GroupMaskingMappingCapabilities::setSupportedDeviceGroupFeatures(Array<Uint16> &value)
{
	_supportedDeviceGroupFeatures = value;
}


void UNIX_GroupMaskingMappingCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("GroupMaskingMappingCapabilities");
	_generation = Uint64(0);
	_validHardwareIdTypes.clear();
	_otherValidHardwareIDTypes.clear();
	_portsPerView = Uint16(0);
	_clientSelectableDeviceNumbers = Boolean(false);
	_attachDeviceSupported = Boolean(false);
	_oneHardwareIDPerView = Boolean(false);
	_uniqueUnitNumbersPerPort = Boolean(false);
	_privilegeDeniedSupported = Boolean(false);
	_protocolControllerRequiresAuthorizedIdentity = Boolean(false);
	_protocolControllerSupportsCollections = Boolean(false);
	_exposePathsSupported = Boolean(false);
	_createProtocolControllerSupported = Boolean(false);
	_maximumMapCount = Uint16(0);
	_sPCAllowsNoLUs = Boolean(false);
	_sPCAllowsNoTargets = Boolean(false);
	_sPCAllowsNoInitiators = Boolean(false);
	_sPCSupportsDefaultViews = Boolean(false);
	_exposePathsWithNameAndHostTypeSupported = Boolean(false);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedFeatures.clear();
	_supportedInitiatorGroupFeatures.clear();
	_supportedTargetGroupFeatures.clear();
	_supportedDeviceGroupFeatures.clear();

}

Boolean UNIX_GroupMaskingMappingCapabilities::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "ValidHardwareIdTypes"))
			{
				Array<Uint16> validHardwareIdTypesValue;
				property.getValue().get(validHardwareIdTypesValue);
				setValidHardwareIdTypes(validHardwareIdTypesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherValidHardwareIDTypes"))
			{
				Array<String> otherValidHardwareIDTypesValue;
				property.getValue().get(otherValidHardwareIDTypesValue);
				setOtherValidHardwareIDTypes(otherValidHardwareIDTypesValue);
			}
			else if (String::equal(property.getName().getString(), "PortsPerView"))
			{
				Uint16 portsPerViewValue;
				property.getValue().get(portsPerViewValue);
				setPortsPerView(portsPerViewValue);
			}
			else if (String::equal(property.getName().getString(), "ClientSelectableDeviceNumbers"))
			{
				Boolean clientSelectableDeviceNumbersValue;
				property.getValue().get(clientSelectableDeviceNumbersValue);
				setClientSelectableDeviceNumbers(clientSelectableDeviceNumbersValue);
			}
			else if (String::equal(property.getName().getString(), "AttachDeviceSupported"))
			{
				Boolean attachDeviceSupportedValue;
				property.getValue().get(attachDeviceSupportedValue);
				setAttachDeviceSupported(attachDeviceSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OneHardwareIDPerView"))
			{
				Boolean oneHardwareIDPerViewValue;
				property.getValue().get(oneHardwareIDPerViewValue);
				setOneHardwareIDPerView(oneHardwareIDPerViewValue);
			}
			else if (String::equal(property.getName().getString(), "UniqueUnitNumbersPerPort"))
			{
				Boolean uniqueUnitNumbersPerPortValue;
				property.getValue().get(uniqueUnitNumbersPerPortValue);
				setUniqueUnitNumbersPerPort(uniqueUnitNumbersPerPortValue);
			}
			else if (String::equal(property.getName().getString(), "PrivilegeDeniedSupported"))
			{
				Boolean privilegeDeniedSupportedValue;
				property.getValue().get(privilegeDeniedSupportedValue);
				setPrivilegeDeniedSupported(privilegeDeniedSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolControllerRequiresAuthorizedIdentity"))
			{
				Boolean protocolControllerRequiresAuthorizedIdentityValue;
				property.getValue().get(protocolControllerRequiresAuthorizedIdentityValue);
				setProtocolControllerRequiresAuthorizedIdentity(protocolControllerRequiresAuthorizedIdentityValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolControllerSupportsCollections"))
			{
				Boolean protocolControllerSupportsCollectionsValue;
				property.getValue().get(protocolControllerSupportsCollectionsValue);
				setProtocolControllerSupportsCollections(protocolControllerSupportsCollectionsValue);
			}
			else if (String::equal(property.getName().getString(), "ExposePathsSupported"))
			{
				Boolean exposePathsSupportedValue;
				property.getValue().get(exposePathsSupportedValue);
				setExposePathsSupported(exposePathsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "CreateProtocolControllerSupported"))
			{
				Boolean createProtocolControllerSupportedValue;
				property.getValue().get(createProtocolControllerSupportedValue);
				setCreateProtocolControllerSupported(createProtocolControllerSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumMapCount"))
			{
				Uint16 maximumMapCountValue;
				property.getValue().get(maximumMapCountValue);
				setMaximumMapCount(maximumMapCountValue);
			}
			else if (String::equal(property.getName().getString(), "SPCAllowsNoLUs"))
			{
				Boolean sPCAllowsNoLUsValue;
				property.getValue().get(sPCAllowsNoLUsValue);
				setSPCAllowsNoLUs(sPCAllowsNoLUsValue);
			}
			else if (String::equal(property.getName().getString(), "SPCAllowsNoTargets"))
			{
				Boolean sPCAllowsNoTargetsValue;
				property.getValue().get(sPCAllowsNoTargetsValue);
				setSPCAllowsNoTargets(sPCAllowsNoTargetsValue);
			}
			else if (String::equal(property.getName().getString(), "SPCAllowsNoInitiators"))
			{
				Boolean sPCAllowsNoInitiatorsValue;
				property.getValue().get(sPCAllowsNoInitiatorsValue);
				setSPCAllowsNoInitiators(sPCAllowsNoInitiatorsValue);
			}
			else if (String::equal(property.getName().getString(), "SPCSupportsDefaultViews"))
			{
				Boolean sPCSupportsDefaultViewsValue;
				property.getValue().get(sPCSupportsDefaultViewsValue);
				setSPCSupportsDefaultViews(sPCSupportsDefaultViewsValue);
			}
			else if (String::equal(property.getName().getString(), "ExposePathsWithNameAndHostTypeSupported"))
			{
				Boolean exposePathsWithNameAndHostTypeSupportedValue;
				property.getValue().get(exposePathsWithNameAndHostTypeSupportedValue);
				setExposePathsWithNameAndHostTypeSupported(exposePathsWithNameAndHostTypeSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedAsynchronousActions"))
			{
				Array<Uint16> supportedAsynchronousActionsValue;
				property.getValue().get(supportedAsynchronousActionsValue);
				setSupportedAsynchronousActions(supportedAsynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedSynchronousActions"))
			{
				Array<Uint16> supportedSynchronousActionsValue;
				property.getValue().get(supportedSynchronousActionsValue);
				setSupportedSynchronousActions(supportedSynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedFeatures"))
			{
				Array<Uint16> supportedFeaturesValue;
				property.getValue().get(supportedFeaturesValue);
				setSupportedFeatures(supportedFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedInitiatorGroupFeatures"))
			{
				Array<Uint16> supportedInitiatorGroupFeaturesValue;
				property.getValue().get(supportedInitiatorGroupFeaturesValue);
				setSupportedInitiatorGroupFeatures(supportedInitiatorGroupFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedTargetGroupFeatures"))
			{
				Array<Uint16> supportedTargetGroupFeaturesValue;
				property.getValue().get(supportedTargetGroupFeaturesValue);
				setSupportedTargetGroupFeatures(supportedTargetGroupFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedDeviceGroupFeatures"))
			{
				Array<Uint16> supportedDeviceGroupFeaturesValue;
				property.getValue().get(supportedDeviceGroupFeaturesValue);
				setSupportedDeviceGroupFeatures(supportedDeviceGroupFeaturesValue);
			}
	}
	return true;
}

Uint16 UNIX_GroupMaskingMappingCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint32 UNIX_GroupMaskingMappingCapabilities::invokeGetElementNameCapabilities(
		Uint16 &inElementType,
		CIMInstance &inGoal,
		Array<Uint16> &inSupportedFeatures,
		Uint16 &inMaxElementNameLen,
		String &inElementNameMask
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetElementNameCapabilities */
	
	
	
	return returnValue;
}


Boolean UNIX_GroupMaskingMappingCapabilities::initialize()
{
	return false;
}

Boolean UNIX_GroupMaskingMappingCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("GroupMaskingMappingCapabilities");
	_generation = Uint64(0);
	_validHardwareIdTypes.clear();
	_otherValidHardwareIDTypes.clear();
	_portsPerView = Uint16(0);
	_clientSelectableDeviceNumbers = Boolean(false);
	_attachDeviceSupported = Boolean(false);
	_oneHardwareIDPerView = Boolean(false);
	_uniqueUnitNumbersPerPort = Boolean(false);
	_privilegeDeniedSupported = Boolean(false);
	_protocolControllerRequiresAuthorizedIdentity = Boolean(false);
	_protocolControllerSupportsCollections = Boolean(false);
	_exposePathsSupported = Boolean(false);
	_createProtocolControllerSupported = Boolean(false);
	_maximumMapCount = Uint16(0);
	_sPCAllowsNoLUs = Boolean(false);
	_sPCAllowsNoTargets = Boolean(false);
	_sPCAllowsNoInitiators = Boolean(false);
	_sPCSupportsDefaultViews = Boolean(false);
	_exposePathsWithNameAndHostTypeSupported = Boolean(false);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedFeatures.clear();
	_supportedInitiatorGroupFeatures.clear();
	_supportedTargetGroupFeatures.clear();
	_supportedDeviceGroupFeatures.clear();
	
	return false;
}

Boolean UNIX_GroupMaskingMappingCapabilities::finalize()
{
	return false;
}


Boolean UNIX_GroupMaskingMappingCapabilities::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_GroupMaskingMappingCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GroupMaskingMappingCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GroupMaskingMappingCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GroupMaskingMappingCapabilities::validateInstance()
{
	return true;
}

