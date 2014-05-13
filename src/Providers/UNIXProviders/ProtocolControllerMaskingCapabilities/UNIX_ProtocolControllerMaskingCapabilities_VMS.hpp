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


UNIX_ProtocolControllerMaskingCapabilities::UNIX_ProtocolControllerMaskingCapabilities(void)
{
}

UNIX_ProtocolControllerMaskingCapabilities::~UNIX_ProtocolControllerMaskingCapabilities(void)
{
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProtocolControllerMaskingCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ProtocolControllerMaskingCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProtocolControllerMaskingCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_ProtocolControllerMaskingCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProtocolControllerMaskingCapabilities::getDescription() const
{
	return _description;
}

void UNIX_ProtocolControllerMaskingCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProtocolControllerMaskingCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_ProtocolControllerMaskingCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ProtocolControllerMaskingCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_ProtocolControllerMaskingCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getValidHardwareIdTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_HARDWARE_ID_TYPES, getValidHardwareIdTypes());
	return true;
}

Array<Uint16> UNIX_ProtocolControllerMaskingCapabilities::getValidHardwareIdTypes() const
{
	return _validHardwareIdTypes;
}

void UNIX_ProtocolControllerMaskingCapabilities::setValidHardwareIdTypes(Array<Uint16> &value)
{
	_validHardwareIdTypes = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getOtherValidHardwareIDTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_VALID_HARDWARE_ID_TYPES, getOtherValidHardwareIDTypes());
	return true;
}

Array<String> UNIX_ProtocolControllerMaskingCapabilities::getOtherValidHardwareIDTypes() const
{
	return _otherValidHardwareIDTypes;
}

void UNIX_ProtocolControllerMaskingCapabilities::setOtherValidHardwareIDTypes(Array<String> &value)
{
	_otherValidHardwareIDTypes = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getPortsPerView(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORTS_PER_VIEW, getPortsPerView());
	return true;
}

Uint16 UNIX_ProtocolControllerMaskingCapabilities::getPortsPerView() const
{
	return _portsPerView;
}

void UNIX_ProtocolControllerMaskingCapabilities::setPortsPerView(Uint16 &value)
{
	_portsPerView = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getClientSelectableDeviceNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SELECTABLE_DEVICE_NUMBERS, getClientSelectableDeviceNumbers());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getClientSelectableDeviceNumbers() const
{
	return _clientSelectableDeviceNumbers;
}

void UNIX_ProtocolControllerMaskingCapabilities::setClientSelectableDeviceNumbers(Boolean &value)
{
	_clientSelectableDeviceNumbers = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getAttachDeviceSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTACH_DEVICE_SUPPORTED, getAttachDeviceSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getAttachDeviceSupported() const
{
	return _attachDeviceSupported;
}

void UNIX_ProtocolControllerMaskingCapabilities::setAttachDeviceSupported(Boolean &value)
{
	_attachDeviceSupported = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getOneHardwareIDPerView(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONE_HARDWARE_ID_PER_VIEW, getOneHardwareIDPerView());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getOneHardwareIDPerView() const
{
	return _oneHardwareIDPerView;
}

void UNIX_ProtocolControllerMaskingCapabilities::setOneHardwareIDPerView(Boolean &value)
{
	_oneHardwareIDPerView = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getUniqueUnitNumbersPerPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_UNIT_NUMBERS_PER_PORT, getUniqueUnitNumbersPerPort());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getUniqueUnitNumbersPerPort() const
{
	return _uniqueUnitNumbersPerPort;
}

void UNIX_ProtocolControllerMaskingCapabilities::setUniqueUnitNumbersPerPort(Boolean &value)
{
	_uniqueUnitNumbersPerPort = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getPrivilegeDeniedSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGE_DENIED_SUPPORTED, getPrivilegeDeniedSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getPrivilegeDeniedSupported() const
{
	return _privilegeDeniedSupported;
}

void UNIX_ProtocolControllerMaskingCapabilities::setPrivilegeDeniedSupported(Boolean &value)
{
	_privilegeDeniedSupported = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getProtocolControllerRequiresAuthorizedIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CONTROLLER_REQUIRES_AUTHORIZED_IDENTITY, getProtocolControllerRequiresAuthorizedIdentity());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getProtocolControllerRequiresAuthorizedIdentity() const
{
	return _protocolControllerRequiresAuthorizedIdentity;
}

void UNIX_ProtocolControllerMaskingCapabilities::setProtocolControllerRequiresAuthorizedIdentity(Boolean &value)
{
	_protocolControllerRequiresAuthorizedIdentity = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getProtocolControllerSupportsCollections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CONTROLLER_SUPPORTS_COLLECTIONS, getProtocolControllerSupportsCollections());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getProtocolControllerSupportsCollections() const
{
	return _protocolControllerSupportsCollections;
}

void UNIX_ProtocolControllerMaskingCapabilities::setProtocolControllerSupportsCollections(Boolean &value)
{
	_protocolControllerSupportsCollections = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getExposePathsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPOSE_PATHS_SUPPORTED, getExposePathsSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getExposePathsSupported() const
{
	return _exposePathsSupported;
}

void UNIX_ProtocolControllerMaskingCapabilities::setExposePathsSupported(Boolean &value)
{
	_exposePathsSupported = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getCreateProtocolControllerSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATE_PROTOCOL_CONTROLLER_SUPPORTED, getCreateProtocolControllerSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getCreateProtocolControllerSupported() const
{
	return _createProtocolControllerSupported;
}

void UNIX_ProtocolControllerMaskingCapabilities::setCreateProtocolControllerSupported(Boolean &value)
{
	_createProtocolControllerSupported = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getMaximumMapCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_MAP_COUNT, getMaximumMapCount());
	return true;
}

Uint16 UNIX_ProtocolControllerMaskingCapabilities::getMaximumMapCount() const
{
	return _maximumMapCount;
}

void UNIX_ProtocolControllerMaskingCapabilities::setMaximumMapCount(Uint16 &value)
{
	_maximumMapCount = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoLUs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_L_US, getSPCAllowsNoLUs());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoLUs() const
{
	return _sPCAllowsNoLUs;
}

void UNIX_ProtocolControllerMaskingCapabilities::setSPCAllowsNoLUs(Boolean &value)
{
	_sPCAllowsNoLUs = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoTargets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_TARGETS, getSPCAllowsNoTargets());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoTargets() const
{
	return _sPCAllowsNoTargets;
}

void UNIX_ProtocolControllerMaskingCapabilities::setSPCAllowsNoTargets(Boolean &value)
{
	_sPCAllowsNoTargets = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoInitiators(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_INITIATORS, getSPCAllowsNoInitiators());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoInitiators() const
{
	return _sPCAllowsNoInitiators;
}

void UNIX_ProtocolControllerMaskingCapabilities::setSPCAllowsNoInitiators(Boolean &value)
{
	_sPCAllowsNoInitiators = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCSupportsDefaultViews(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_CSUPPORTS_DEFAULT_VIEWS, getSPCSupportsDefaultViews());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCSupportsDefaultViews() const
{
	return _sPCSupportsDefaultViews;
}

void UNIX_ProtocolControllerMaskingCapabilities::setSPCSupportsDefaultViews(Boolean &value)
{
	_sPCSupportsDefaultViews = value;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getExposePathsWithNameAndHostTypeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPOSE_PATHS_WITH_NAME_AND_HOST_TYPE_SUPPORTED, getExposePathsWithNameAndHostTypeSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getExposePathsWithNameAndHostTypeSupported() const
{
	return _exposePathsWithNameAndHostTypeSupported;
}

void UNIX_ProtocolControllerMaskingCapabilities::setExposePathsWithNameAndHostTypeSupported(Boolean &value)
{
	_exposePathsWithNameAndHostTypeSupported = value;
}


void UNIX_ProtocolControllerMaskingCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProtocolControllerMaskingCapabilities");
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

}

Boolean UNIX_ProtocolControllerMaskingCapabilities::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}

Uint16 UNIX_ProtocolControllerMaskingCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint32 UNIX_ProtocolControllerMaskingCapabilities::invokeGetElementNameCapabilities(
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


Boolean UNIX_ProtocolControllerMaskingCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProtocolControllerMaskingCapabilities");
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
	
	return false;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ProtocolControllerMaskingCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ProtocolControllerMaskingCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::validateInstance()
{
	return true;
}

