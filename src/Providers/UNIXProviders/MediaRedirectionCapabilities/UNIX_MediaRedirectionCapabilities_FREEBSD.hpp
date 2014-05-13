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


UNIX_MediaRedirectionCapabilities::UNIX_MediaRedirectionCapabilities(void)
{
}

UNIX_MediaRedirectionCapabilities::~UNIX_MediaRedirectionCapabilities(void)
{
}

Boolean UNIX_MediaRedirectionCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MediaRedirectionCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_MediaRedirectionCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getDescription() const
{
	return _description;
}

void UNIX_MediaRedirectionCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_MediaRedirectionCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MediaRedirectionCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_MediaRedirectionCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_MediaRedirectionCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_MediaRedirectionCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_MediaRedirectionCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_MediaRedirectionCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_MediaRedirectionCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_MediaRedirectionCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_MediaRedirectionCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getSharingModeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE_SUPPORTED, getSharingModeSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getSharingModeSupported() const
{
	return _sharingModeSupported;
}

void UNIX_MediaRedirectionCapabilities::setSharingModeSupported(Array<Uint16> &value)
{
	_sharingModeSupported = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getConnectionModesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_MODES_SUPPORTED, getConnectionModesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getConnectionModesSupported() const
{
	return _connectionModesSupported;
}

void UNIX_MediaRedirectionCapabilities::setConnectionModesSupported(Array<Uint16> &value)
{
	_connectionModesSupported = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getDevicesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICES_SUPPORTED, getDevicesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getDevicesSupported() const
{
	return _devicesSupported;
}

void UNIX_MediaRedirectionCapabilities::setDevicesSupported(Array<Uint16> &value)
{
	_devicesSupported = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getMaxDevicesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DEVICES_SUPPORTED, getMaxDevicesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getMaxDevicesSupported() const
{
	return _maxDevicesSupported;
}

void UNIX_MediaRedirectionCapabilities::setMaxDevicesSupported(Array<Uint16> &value)
{
	_maxDevicesSupported = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getMaxDevicesPerSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DEVICES_PER_SAP, getMaxDevicesPerSAP());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getMaxDevicesPerSAP() const
{
	return _maxDevicesPerSAP;
}

void UNIX_MediaRedirectionCapabilities::setMaxDevicesPerSAP(Array<Uint16> &value)
{
	_maxDevicesPerSAP = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getSAPCapabilitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAP_CAPABILITIES_SUPPORTED, getSAPCapabilitiesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getSAPCapabilitiesSupported() const
{
	return _sAPCapabilitiesSupported;
}

void UNIX_MediaRedirectionCapabilities::setSAPCapabilitiesSupported(Array<Uint16> &value)
{
	_sAPCapabilitiesSupported = value;
}

Boolean UNIX_MediaRedirectionCapabilities::getInfoFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMATS_SUPPORTED, getInfoFormatsSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getInfoFormatsSupported() const
{
	return _infoFormatsSupported;
}

void UNIX_MediaRedirectionCapabilities::setInfoFormatsSupported(Array<Uint16> &value)
{
	_infoFormatsSupported = value;
}


void UNIX_MediaRedirectionCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaRedirectionCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_sharingModeSupported.clear();
	_connectionModesSupported.clear();
	_devicesSupported.clear();
	_maxDevicesSupported.clear();
	_maxDevicesPerSAP.clear();
	_sAPCapabilitiesSupported.clear();
	_infoFormatsSupported.clear();

}

Boolean UNIX_MediaRedirectionCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DevicesSupported"))
			{
				Array<Uint16> devicesSupportedValue;
				property.getValue().get(devicesSupportedValue);
				setDevicesSupported(devicesSupportedValue);
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
			else if (String::equal(property.getName().getString(), "InfoFormatsSupported"))
			{
				Array<Uint16> infoFormatsSupportedValue;
				property.getValue().get(infoFormatsSupportedValue);
				setInfoFormatsSupported(infoFormatsSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_MediaRedirectionCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_MediaRedirectionCapabilities::initialize()
{
	return false;
}

Boolean UNIX_MediaRedirectionCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MediaRedirectionCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_sharingModeSupported.clear();
	_connectionModesSupported.clear();
	_devicesSupported.clear();
	_maxDevicesSupported.clear();
	_maxDevicesPerSAP.clear();
	_sAPCapabilitiesSupported.clear();
	_infoFormatsSupported.clear();
	
	return false;
}

Boolean UNIX_MediaRedirectionCapabilities::finalize()
{
	return false;
}


Boolean UNIX_MediaRedirectionCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MediaRedirectionCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaRedirectionCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaRedirectionCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MediaRedirectionCapabilities::validateInstance()
{
	return true;
}

