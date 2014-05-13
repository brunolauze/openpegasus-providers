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


UNIX_FCPortCapabilities::UNIX_FCPortCapabilities(void)
{
}

UNIX_FCPortCapabilities::~UNIX_FCPortCapabilities(void)
{
}

Boolean UNIX_FCPortCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPortCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCPortCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCPortCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPortCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FCPortCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCPortCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPortCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FCPortCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCPortCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPortCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FCPortCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCPortCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCPortCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FCPortCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCPortCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_FCPortCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_FCPortCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_FCPortCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_FCPortCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_FCPortCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_FCPortCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_FCPortCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_FCPortCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_FCPortCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_FCPortCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_FCPortCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_FCPortCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_FCPortCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_FCPortCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_FCPortCapabilities::getRequestedSpeedsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEEDS_SUPPORTED, getRequestedSpeedsSupported());
	return true;
}

Array<Uint64> UNIX_FCPortCapabilities::getRequestedSpeedsSupported() const
{
	return _requestedSpeedsSupported;
}

void UNIX_FCPortCapabilities::setRequestedSpeedsSupported(Array<Uint64> &value)
{
	_requestedSpeedsSupported = value;
}

Boolean UNIX_FCPortCapabilities::getAutoSenseSpeedConfigurable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE_SPEED_CONFIGURABLE, getAutoSenseSpeedConfigurable());
	return true;
}

Boolean UNIX_FCPortCapabilities::getAutoSenseSpeedConfigurable() const
{
	return _autoSenseSpeedConfigurable;
}

void UNIX_FCPortCapabilities::setAutoSenseSpeedConfigurable(Boolean &value)
{
	_autoSenseSpeedConfigurable = value;
}

Boolean UNIX_FCPortCapabilities::getSpeedConfigurable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED_CONFIGURABLE, getSpeedConfigurable());
	return true;
}

Boolean UNIX_FCPortCapabilities::getSpeedConfigurable() const
{
	return _speedConfigurable;
}

void UNIX_FCPortCapabilities::setSpeedConfigurable(Boolean &value)
{
	_speedConfigurable = value;
}

Boolean UNIX_FCPortCapabilities::getPortSpeedsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_SPEEDS_SUPPORTED, getPortSpeedsSupported());
	return true;
}

Array<Uint64> UNIX_FCPortCapabilities::getPortSpeedsSupported() const
{
	return _portSpeedsSupported;
}

void UNIX_FCPortCapabilities::setPortSpeedsSupported(Array<Uint64> &value)
{
	_portSpeedsSupported = value;
}

Boolean UNIX_FCPortCapabilities::getNetworkIDsConfigurable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_IDS_CONFIGURABLE, getNetworkIDsConfigurable());
	return true;
}

Boolean UNIX_FCPortCapabilities::getNetworkIDsConfigurable() const
{
	return _networkIDsConfigurable;
}

void UNIX_FCPortCapabilities::setNetworkIDsConfigurable(Boolean &value)
{
	_networkIDsConfigurable = value;
}

Boolean UNIX_FCPortCapabilities::getNetworkIDsFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_IDS_FORMAT, getNetworkIDsFormat());
	return true;
}

Uint16 UNIX_FCPortCapabilities::getNetworkIDsFormat() const
{
	return _networkIDsFormat;
}

void UNIX_FCPortCapabilities::setNetworkIDsFormat(Uint16 &value)
{
	_networkIDsFormat = value;
}

Boolean UNIX_FCPortCapabilities::getLinkTechnologiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGIES_SUPPORTED, getLinkTechnologiesSupported());
	return true;
}

Array<Uint16> UNIX_FCPortCapabilities::getLinkTechnologiesSupported() const
{
	return _linkTechnologiesSupported;
}

void UNIX_FCPortCapabilities::setLinkTechnologiesSupported(Array<Uint16> &value)
{
	_linkTechnologiesSupported = value;
}

Boolean UNIX_FCPortCapabilities::getRequestedTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_TYPES_SUPPORTED, getRequestedTypesSupported());
	return true;
}

Array<Uint16> UNIX_FCPortCapabilities::getRequestedTypesSupported() const
{
	return _requestedTypesSupported;
}

void UNIX_FCPortCapabilities::setRequestedTypesSupported(Array<Uint16> &value)
{
	_requestedTypesSupported = value;
}

Boolean UNIX_FCPortCapabilities::getNPIVSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_N_P_I_V_SUPPORTED, getNPIVSupported());
	return true;
}

Boolean UNIX_FCPortCapabilities::getNPIVSupported() const
{
	return _nPIVSupported;
}

void UNIX_FCPortCapabilities::setNPIVSupported(Boolean &value)
{
	_nPIVSupported = value;
}

Boolean UNIX_FCPortCapabilities::getMaxNPIVLogins(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_N_P_I_V_LOGINS, getMaxNPIVLogins());
	return true;
}

Uint16 UNIX_FCPortCapabilities::getMaxNPIVLogins() const
{
	return _maxNPIVLogins;
}

void UNIX_FCPortCapabilities::setMaxNPIVLogins(Uint16 &value)
{
	_maxNPIVLogins = value;
}


void UNIX_FCPortCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_requestedSpeedsSupported.clear();
	_autoSenseSpeedConfigurable = Boolean(false);
	_speedConfigurable = Boolean(false);
	_portSpeedsSupported.clear();
	_networkIDsConfigurable = Boolean(false);
	_networkIDsFormat = Uint16(0);
	_linkTechnologiesSupported.clear();
	_requestedTypesSupported.clear();
	_nPIVSupported = Boolean(false);
	_maxNPIVLogins = Uint16(0);

}

Boolean UNIX_FCPortCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RequestedSpeedsSupported"))
			{
				Array<Uint64> requestedSpeedsSupportedValue;
				property.getValue().get(requestedSpeedsSupportedValue);
				setRequestedSpeedsSupported(requestedSpeedsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AutoSenseSpeedConfigurable"))
			{
				Boolean autoSenseSpeedConfigurableValue;
				property.getValue().get(autoSenseSpeedConfigurableValue);
				setAutoSenseSpeedConfigurable(autoSenseSpeedConfigurableValue);
			}
			else if (String::equal(property.getName().getString(), "SpeedConfigurable"))
			{
				Boolean speedConfigurableValue;
				property.getValue().get(speedConfigurableValue);
				setSpeedConfigurable(speedConfigurableValue);
			}
			else if (String::equal(property.getName().getString(), "PortSpeedsSupported"))
			{
				Array<Uint64> portSpeedsSupportedValue;
				property.getValue().get(portSpeedsSupportedValue);
				setPortSpeedsSupported(portSpeedsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "NetworkIDsConfigurable"))
			{
				Boolean networkIDsConfigurableValue;
				property.getValue().get(networkIDsConfigurableValue);
				setNetworkIDsConfigurable(networkIDsConfigurableValue);
			}
			else if (String::equal(property.getName().getString(), "NetworkIDsFormat"))
			{
				Uint16 networkIDsFormatValue;
				property.getValue().get(networkIDsFormatValue);
				setNetworkIDsFormat(networkIDsFormatValue);
			}
			else if (String::equal(property.getName().getString(), "LinkTechnologiesSupported"))
			{
				Array<Uint16> linkTechnologiesSupportedValue;
				property.getValue().get(linkTechnologiesSupportedValue);
				setLinkTechnologiesSupported(linkTechnologiesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedTypesSupported"))
			{
				Array<Uint16> requestedTypesSupportedValue;
				property.getValue().get(requestedTypesSupportedValue);
				setRequestedTypesSupported(requestedTypesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "NPIVSupported"))
			{
				Boolean nPIVSupportedValue;
				property.getValue().get(nPIVSupportedValue);
				setNPIVSupported(nPIVSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNPIVLogins"))
			{
				Uint16 maxNPIVLoginsValue;
				property.getValue().get(maxNPIVLoginsValue);
				setMaxNPIVLogins(maxNPIVLoginsValue);
			}
	}
	return true;
}

Uint16 UNIX_FCPortCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_FCPortCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FCPortCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCPortCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_requestedSpeedsSupported.clear();
	_autoSenseSpeedConfigurable = Boolean(false);
	_speedConfigurable = Boolean(false);
	_portSpeedsSupported.clear();
	_networkIDsConfigurable = Boolean(false);
	_networkIDsFormat = Uint16(0);
	_linkTechnologiesSupported.clear();
	_requestedTypesSupported.clear();
	_nPIVSupported = Boolean(false);
	_maxNPIVLogins = Uint16(0);
	
	return false;
}

Boolean UNIX_FCPortCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FCPortCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCPortCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCPortCapabilities::validateInstance()
{
	return true;
}

