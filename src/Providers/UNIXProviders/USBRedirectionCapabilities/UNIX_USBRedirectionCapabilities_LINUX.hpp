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


UNIX_USBRedirectionCapabilities::UNIX_USBRedirectionCapabilities(void)
{
}

UNIX_USBRedirectionCapabilities::~UNIX_USBRedirectionCapabilities(void)
{
}

Boolean UNIX_USBRedirectionCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_USBRedirectionCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_USBRedirectionCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_USBRedirectionCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_USBRedirectionCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_USBRedirectionCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_USBRedirectionCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_USBRedirectionCapabilities::getDescription() const
{
	return _description;
}

void UNIX_USBRedirectionCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_USBRedirectionCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_USBRedirectionCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_USBRedirectionCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_USBRedirectionCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_USBRedirectionCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_USBRedirectionCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_USBRedirectionCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_USBRedirectionCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_USBRedirectionCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_USBRedirectionCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_USBRedirectionCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_USBRedirectionCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_USBRedirectionCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_USBRedirectionCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_USBRedirectionCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_USBRedirectionCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_USBRedirectionCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_USBRedirectionCapabilities::getSharingModeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE_SUPPORTED, getSharingModeSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getSharingModeSupported() const
{
	return _sharingModeSupported;
}

void UNIX_USBRedirectionCapabilities::setSharingModeSupported(Array<Uint16> &value)
{
	_sharingModeSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getConnectionModesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_MODES_SUPPORTED, getConnectionModesSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getConnectionModesSupported() const
{
	return _connectionModesSupported;
}

void UNIX_USBRedirectionCapabilities::setConnectionModesSupported(Array<Uint16> &value)
{
	_connectionModesSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getUSBVersionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USB_VERSIONS_SUPPORTED, getUSBVersionsSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getUSBVersionsSupported() const
{
	return _uSBVersionsSupported;
}

void UNIX_USBRedirectionCapabilities::setUSBVersionsSupported(Array<Uint16> &value)
{
	_uSBVersionsSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getClassesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSES_SUPPORTED, getClassesSupported());
	return true;
}

Array<Uint8> UNIX_USBRedirectionCapabilities::getClassesSupported() const
{
	return _classesSupported;
}

void UNIX_USBRedirectionCapabilities::setClassesSupported(Array<Uint8> &value)
{
	_classesSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getSubClassesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUB_CLASSES_SUPPORTED, getSubClassesSupported());
	return true;
}

Array<Uint8> UNIX_USBRedirectionCapabilities::getSubClassesSupported() const
{
	return _subClassesSupported;
}

void UNIX_USBRedirectionCapabilities::setSubClassesSupported(Array<Uint8> &value)
{
	_subClassesSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getMaxDevicesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DEVICES_SUPPORTED, getMaxDevicesSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getMaxDevicesSupported() const
{
	return _maxDevicesSupported;
}

void UNIX_USBRedirectionCapabilities::setMaxDevicesSupported(Array<Uint16> &value)
{
	_maxDevicesSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getMaxDevicesPerSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DEVICES_PER_SAP, getMaxDevicesPerSAP());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getMaxDevicesPerSAP() const
{
	return _maxDevicesPerSAP;
}

void UNIX_USBRedirectionCapabilities::setMaxDevicesPerSAP(Array<Uint16> &value)
{
	_maxDevicesPerSAP = value;
}

Boolean UNIX_USBRedirectionCapabilities::getSAPCapabilitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAP_CAPABILITIES_SUPPORTED, getSAPCapabilitiesSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getSAPCapabilitiesSupported() const
{
	return _sAPCapabilitiesSupported;
}

void UNIX_USBRedirectionCapabilities::setSAPCapabilitiesSupported(Array<Uint16> &value)
{
	_sAPCapabilitiesSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getRequestedStatesSupportedForCreatedSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED_FOR_CREATED_SAP, getRequestedStatesSupportedForCreatedSAP());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getRequestedStatesSupportedForCreatedSAP() const
{
	return _requestedStatesSupportedForCreatedSAP;
}

void UNIX_USBRedirectionCapabilities::setRequestedStatesSupportedForCreatedSAP(Array<Uint16> &value)
{
	_requestedStatesSupportedForCreatedSAP = value;
}

Boolean UNIX_USBRedirectionCapabilities::getInfoFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMATS_SUPPORTED, getInfoFormatsSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getInfoFormatsSupported() const
{
	return _infoFormatsSupported;
}

void UNIX_USBRedirectionCapabilities::setInfoFormatsSupported(Array<Uint16> &value)
{
	_infoFormatsSupported = value;
}

Boolean UNIX_USBRedirectionCapabilities::getSingleClassPerSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLE_CLASS_PER_SAP, getSingleClassPerSAP());
	return true;
}

Boolean UNIX_USBRedirectionCapabilities::getSingleClassPerSAP() const
{
	return _singleClassPerSAP;
}

void UNIX_USBRedirectionCapabilities::setSingleClassPerSAP(Boolean &value)
{
	_singleClassPerSAP = value;
}


void UNIX_USBRedirectionCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("USBRedirectionCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_sharingModeSupported.clear();
	_connectionModesSupported.clear();
	_uSBVersionsSupported.clear();
	_classesSupported.clear();
	_subClassesSupported.clear();
	_maxDevicesSupported.clear();
	_maxDevicesPerSAP.clear();
	_sAPCapabilitiesSupported.clear();
	_requestedStatesSupportedForCreatedSAP.clear();
	_infoFormatsSupported.clear();
	_singleClassPerSAP = Boolean(false);

}

Boolean UNIX_USBRedirectionCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementNameEditSupported"))
			{
				Boolean elementNameEditSupportedValue;
				property.getValue().get(elementNameEditSupportedValue);
				setElementNameEditSupported(elementNameEditSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxElementNameLen"))
			{
				Uint16 maxElementNameLenValue;
				property.getValue().get(maxElementNameLenValue);
				setMaxElementNameLen(maxElementNameLenValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedStatesSupported"))
			{
				Array<Uint16> requestedStatesSupportedValue;
				property.getValue().get(requestedStatesSupportedValue);
				setRequestedStatesSupported(requestedStatesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ElementNameMask"))
			{
				String elementNameMaskValue;
				property.getValue().get(elementNameMaskValue);
				setElementNameMask(elementNameMaskValue);
			}
			else if (String::equal(property.getName().getString(), "StateAwareness"))
			{
				Array<Uint16> stateAwarenessValue;
				property.getValue().get(stateAwarenessValue);
				setStateAwareness(stateAwarenessValue);
			}
			else if (String::equal(property.getName().getString(), "SharingModeSupported"))
			{
				Array<Uint16> sharingModeSupportedValue;
				property.getValue().get(sharingModeSupportedValue);
				setSharingModeSupported(sharingModeSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectionModesSupported"))
			{
				Array<Uint16> connectionModesSupportedValue;
				property.getValue().get(connectionModesSupportedValue);
				setConnectionModesSupported(connectionModesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "USBVersionsSupported"))
			{
				Array<Uint16> uSBVersionsSupportedValue;
				property.getValue().get(uSBVersionsSupportedValue);
				setUSBVersionsSupported(uSBVersionsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ClassesSupported"))
			{
				Array<Uint8> classesSupportedValue;
				property.getValue().get(classesSupportedValue);
				setClassesSupported(classesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SubClassesSupported"))
			{
				Array<Uint8> subClassesSupportedValue;
				property.getValue().get(subClassesSupportedValue);
				setSubClassesSupported(subClassesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxDevicesSupported"))
			{
				Array<Uint16> maxDevicesSupportedValue;
				property.getValue().get(maxDevicesSupportedValue);
				setMaxDevicesSupported(maxDevicesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxDevicesPerSAP"))
			{
				Array<Uint16> maxDevicesPerSAPValue;
				property.getValue().get(maxDevicesPerSAPValue);
				setMaxDevicesPerSAP(maxDevicesPerSAPValue);
			}
			else if (String::equal(property.getName().getString(), "SAPCapabilitiesSupported"))
			{
				Array<Uint16> sAPCapabilitiesSupportedValue;
				property.getValue().get(sAPCapabilitiesSupportedValue);
				setSAPCapabilitiesSupported(sAPCapabilitiesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedStatesSupportedForCreatedSAP"))
			{
				Array<Uint16> requestedStatesSupportedForCreatedSAPValue;
				property.getValue().get(requestedStatesSupportedForCreatedSAPValue);
				setRequestedStatesSupportedForCreatedSAP(requestedStatesSupportedForCreatedSAPValue);
			}
			else if (String::equal(property.getName().getString(), "InfoFormatsSupported"))
			{
				Array<Uint16> infoFormatsSupportedValue;
				property.getValue().get(infoFormatsSupportedValue);
				setInfoFormatsSupported(infoFormatsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SingleClassPerSAP"))
			{
				Boolean singleClassPerSAPValue;
				property.getValue().get(singleClassPerSAPValue);
				setSingleClassPerSAP(singleClassPerSAPValue);
			}
	}
	return true;
}

Uint16 UNIX_USBRedirectionCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_USBRedirectionCapabilities::initialize()
{
	return false;
}

Boolean UNIX_USBRedirectionCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("USBRedirectionCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_sharingModeSupported.clear();
	_connectionModesSupported.clear();
	_uSBVersionsSupported.clear();
	_classesSupported.clear();
	_subClassesSupported.clear();
	_maxDevicesSupported.clear();
	_maxDevicesPerSAP.clear();
	_sAPCapabilitiesSupported.clear();
	_requestedStatesSupportedForCreatedSAP.clear();
	_infoFormatsSupported.clear();
	_singleClassPerSAP = Boolean(false);
	
	return false;
}

Boolean UNIX_USBRedirectionCapabilities::finalize()
{
	return false;
}


Boolean UNIX_USBRedirectionCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_USBRedirectionCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBRedirectionCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBRedirectionCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBRedirectionCapabilities::validateInstance()
{
	return true;
}

