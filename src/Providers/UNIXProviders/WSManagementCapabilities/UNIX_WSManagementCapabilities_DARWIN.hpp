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


UNIX_WSManagementCapabilities::UNIX_WSManagementCapabilities(void)
{
}

UNIX_WSManagementCapabilities::~UNIX_WSManagementCapabilities(void)
{
}

Boolean UNIX_WSManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WSManagementCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WSManagementCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WSManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WSManagementCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_WSManagementCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WSManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WSManagementCapabilities::getDescription() const
{
	return _description;
}

void UNIX_WSManagementCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WSManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WSManagementCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_WSManagementCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WSManagementCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WSManagementCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_WSManagementCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WSManagementCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_WSManagementCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_WSManagementCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_WSManagementCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_WSManagementCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_WSManagementCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_WSManagementCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_WSManagementCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_WSManagementCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_WSManagementCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_WSManagementCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_WSManagementCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_WSManagementCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_WSManagementCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_WSManagementCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_WSManagementCapabilities::getMaxConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS, getMaxConnections());
	return true;
}

Uint16 UNIX_WSManagementCapabilities::getMaxConnections() const
{
	return _maxConnections;
}

void UNIX_WSManagementCapabilities::setMaxConnections(Uint16 &value)
{
	_maxConnections = value;
}

Boolean UNIX_WSManagementCapabilities::getMaxListeningPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LISTENING_PORTS, getMaxListeningPorts());
	return true;
}

Uint16 UNIX_WSManagementCapabilities::getMaxListeningPorts() const
{
	return _maxListeningPorts;
}

void UNIX_WSManagementCapabilities::setMaxListeningPorts(Uint16 &value)
{
	_maxListeningPorts = value;
}

Boolean UNIX_WSManagementCapabilities::getListeningPortManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LISTENING_PORT_MANAGEMENT_SUPPORTED, getListeningPortManagementSupported());
	return true;
}

Boolean UNIX_WSManagementCapabilities::getListeningPortManagementSupported() const
{
	return _listeningPortManagementSupported;
}

void UNIX_WSManagementCapabilities::setListeningPortManagementSupported(Boolean &value)
{
	_listeningPortManagementSupported = value;
}

Boolean UNIX_WSManagementCapabilities::getWBEMProtocolVersionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WBEM_PROTOCOL_VERSIONS_SUPPORTED, getWBEMProtocolVersionsSupported());
	return true;
}

Array<String> UNIX_WSManagementCapabilities::getWBEMProtocolVersionsSupported() const
{
	return _wBEMProtocolVersionsSupported;
}

void UNIX_WSManagementCapabilities::setWBEMProtocolVersionsSupported(Array<String> &value)
{
	_wBEMProtocolVersionsSupported = value;
}

Boolean UNIX_WSManagementCapabilities::getGenericOperationCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERIC_OPERATION_CAPABILITIES, getGenericOperationCapabilities());
	return true;
}

String UNIX_WSManagementCapabilities::getGenericOperationCapabilities() const
{
	return _genericOperationCapabilities;
}

void UNIX_WSManagementCapabilities::setGenericOperationCapabilities(String &value)
{
	_genericOperationCapabilities = value;
}

Boolean UNIX_WSManagementCapabilities::getAuthenticationMechanismsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED, getAuthenticationMechanismsSupported());
	return true;
}

Array<Sint16> UNIX_WSManagementCapabilities::getAuthenticationMechanismsSupported() const
{
	return _authenticationMechanismsSupported;
}

void UNIX_WSManagementCapabilities::setAuthenticationMechanismsSupported(Array<Sint16> &value)
{
	_authenticationMechanismsSupported = value;
}

Boolean UNIX_WSManagementCapabilities::getAuthenticationMechanismsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISMS_DESCRIPTIONS, getAuthenticationMechanismsDescriptions());
	return true;
}

Array<String> UNIX_WSManagementCapabilities::getAuthenticationMechanismsDescriptions() const
{
	return _authenticationMechanismsDescriptions;
}

void UNIX_WSManagementCapabilities::setAuthenticationMechanismsDescriptions(Array<String> &value)
{
	_authenticationMechanismsDescriptions = value;
}

Boolean UNIX_WSManagementCapabilities::getXPathFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_PATH_FEATURES, getXPathFeatures());
	return true;
}

Uint16 UNIX_WSManagementCapabilities::getXPathFeatures() const
{
	return _xPathFeatures;
}

void UNIX_WSManagementCapabilities::setXPathFeatures(Uint16 &value)
{
	_xPathFeatures = value;
}


void UNIX_WSManagementCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WSManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxConnections = Uint16(0);
	_maxListeningPorts = Uint16(0);
	_listeningPortManagementSupported = Boolean(false);
	_wBEMProtocolVersionsSupported.clear();
	_genericOperationCapabilities = String ("");
	_authenticationMechanismsSupported.clear();
	_authenticationMechanismsDescriptions.clear();
	_xPathFeatures = Uint16(0);

}

Boolean UNIX_WSManagementCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxConnections"))
			{
				Uint16 maxConnectionsValue;
				property.getValue().get(maxConnectionsValue);
				setMaxConnections(maxConnectionsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxListeningPorts"))
			{
				Uint16 maxListeningPortsValue;
				property.getValue().get(maxListeningPortsValue);
				setMaxListeningPorts(maxListeningPortsValue);
			}
			else if (String::equal(property.getName().getString(), "ListeningPortManagementSupported"))
			{
				Boolean listeningPortManagementSupportedValue;
				property.getValue().get(listeningPortManagementSupportedValue);
				setListeningPortManagementSupported(listeningPortManagementSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "WBEMProtocolVersionsSupported"))
			{
				Array<String> wBEMProtocolVersionsSupportedValue;
				property.getValue().get(wBEMProtocolVersionsSupportedValue);
				setWBEMProtocolVersionsSupported(wBEMProtocolVersionsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "GenericOperationCapabilities"))
			{
				String genericOperationCapabilitiesValue;
				property.getValue().get(genericOperationCapabilitiesValue);
				setGenericOperationCapabilities(genericOperationCapabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMechanismsSupported"))
			{
				Array<Sint16> authenticationMechanismsSupportedValue;
				property.getValue().get(authenticationMechanismsSupportedValue);
				setAuthenticationMechanismsSupported(authenticationMechanismsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMechanismsDescriptions"))
			{
				Array<String> authenticationMechanismsDescriptionsValue;
				property.getValue().get(authenticationMechanismsDescriptionsValue);
				setAuthenticationMechanismsDescriptions(authenticationMechanismsDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "XPathFeatures"))
			{
				Uint16 xPathFeaturesValue;
				property.getValue().get(xPathFeaturesValue);
				setXPathFeatures(xPathFeaturesValue);
			}
	}
	return true;
}

Uint16 UNIX_WSManagementCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_WSManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_WSManagementCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WSManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxConnections = Uint16(0);
	_maxListeningPorts = Uint16(0);
	_listeningPortManagementSupported = Boolean(false);
	_wBEMProtocolVersionsSupported.clear();
	_genericOperationCapabilities = String ("");
	_authenticationMechanismsSupported.clear();
	_authenticationMechanismsDescriptions.clear();
	_xPathFeatures = Uint16(0);
	
	return false;
}

Boolean UNIX_WSManagementCapabilities::finalize()
{
	return false;
}


Boolean UNIX_WSManagementCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WSManagementCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WSManagementCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WSManagementCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WSManagementCapabilities::validateInstance()
{
	return true;
}

