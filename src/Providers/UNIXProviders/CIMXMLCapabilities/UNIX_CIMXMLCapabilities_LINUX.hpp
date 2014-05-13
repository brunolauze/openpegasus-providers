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


UNIX_CIMXMLCapabilities::UNIX_CIMXMLCapabilities(void)
{
}

UNIX_CIMXMLCapabilities::~UNIX_CIMXMLCapabilities(void)
{
}

Boolean UNIX_CIMXMLCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CIMXMLCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CIMXMLCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CIMXMLCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CIMXMLCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_CIMXMLCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CIMXMLCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CIMXMLCapabilities::getDescription() const
{
	return _description;
}

void UNIX_CIMXMLCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CIMXMLCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CIMXMLCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_CIMXMLCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CIMXMLCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CIMXMLCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_CIMXMLCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CIMXMLCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_CIMXMLCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_CIMXMLCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_CIMXMLCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_CIMXMLCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_CIMXMLCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_CIMXMLCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_CIMXMLCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_CIMXMLCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_CIMXMLCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_CIMXMLCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_CIMXMLCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_CIMXMLCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_CIMXMLCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_CIMXMLCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_CIMXMLCapabilities::getMaxConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS, getMaxConnections());
	return true;
}

Uint16 UNIX_CIMXMLCapabilities::getMaxConnections() const
{
	return _maxConnections;
}

void UNIX_CIMXMLCapabilities::setMaxConnections(Uint16 &value)
{
	_maxConnections = value;
}

Boolean UNIX_CIMXMLCapabilities::getMaxListeningPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LISTENING_PORTS, getMaxListeningPorts());
	return true;
}

Uint16 UNIX_CIMXMLCapabilities::getMaxListeningPorts() const
{
	return _maxListeningPorts;
}

void UNIX_CIMXMLCapabilities::setMaxListeningPorts(Uint16 &value)
{
	_maxListeningPorts = value;
}

Boolean UNIX_CIMXMLCapabilities::getListeningPortManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LISTENING_PORT_MANAGEMENT_SUPPORTED, getListeningPortManagementSupported());
	return true;
}

Boolean UNIX_CIMXMLCapabilities::getListeningPortManagementSupported() const
{
	return _listeningPortManagementSupported;
}

void UNIX_CIMXMLCapabilities::setListeningPortManagementSupported(Boolean &value)
{
	_listeningPortManagementSupported = value;
}

Boolean UNIX_CIMXMLCapabilities::getWBEMProtocolVersionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WBEM_PROTOCOL_VERSIONS_SUPPORTED, getWBEMProtocolVersionsSupported());
	return true;
}

Array<String> UNIX_CIMXMLCapabilities::getWBEMProtocolVersionsSupported() const
{
	return _wBEMProtocolVersionsSupported;
}

void UNIX_CIMXMLCapabilities::setWBEMProtocolVersionsSupported(Array<String> &value)
{
	_wBEMProtocolVersionsSupported = value;
}

Boolean UNIX_CIMXMLCapabilities::getGenericOperationCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERIC_OPERATION_CAPABILITIES, getGenericOperationCapabilities());
	return true;
}

String UNIX_CIMXMLCapabilities::getGenericOperationCapabilities() const
{
	return _genericOperationCapabilities;
}

void UNIX_CIMXMLCapabilities::setGenericOperationCapabilities(String &value)
{
	_genericOperationCapabilities = value;
}

Boolean UNIX_CIMXMLCapabilities::getAuthenticationMechanismsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED, getAuthenticationMechanismsSupported());
	return true;
}

Array<Sint16> UNIX_CIMXMLCapabilities::getAuthenticationMechanismsSupported() const
{
	return _authenticationMechanismsSupported;
}

void UNIX_CIMXMLCapabilities::setAuthenticationMechanismsSupported(Array<Sint16> &value)
{
	_authenticationMechanismsSupported = value;
}

Boolean UNIX_CIMXMLCapabilities::getAuthenticationMechanismsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISMS_DESCRIPTIONS, getAuthenticationMechanismsDescriptions());
	return true;
}

Array<String> UNIX_CIMXMLCapabilities::getAuthenticationMechanismsDescriptions() const
{
	return _authenticationMechanismsDescriptions;
}

void UNIX_CIMXMLCapabilities::setAuthenticationMechanismsDescriptions(Array<String> &value)
{
	_authenticationMechanismsDescriptions = value;
}

Boolean UNIX_CIMXMLCapabilities::getMultipleOperationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_OPERATIONS_SUPPORTED, getMultipleOperationsSupported());
	return true;
}

Boolean UNIX_CIMXMLCapabilities::getMultipleOperationsSupported() const
{
	return _multipleOperationsSupported;
}

void UNIX_CIMXMLCapabilities::setMultipleOperationsSupported(Boolean &value)
{
	_multipleOperationsSupported = value;
}

Boolean UNIX_CIMXMLCapabilities::getValidated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALIDATED, getValidated());
	return true;
}

Boolean UNIX_CIMXMLCapabilities::getValidated() const
{
	return _validated;
}

void UNIX_CIMXMLCapabilities::setValidated(Boolean &value)
{
	_validated = value;
}


void UNIX_CIMXMLCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CIMXMLCapabilities");
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
	_multipleOperationsSupported = Boolean(false);
	_validated = Boolean(false);

}

Boolean UNIX_CIMXMLCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MultipleOperationsSupported"))
			{
				Boolean multipleOperationsSupportedValue;
				property.getValue().get(multipleOperationsSupportedValue);
				setMultipleOperationsSupported(multipleOperationsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "Validated"))
			{
				Boolean validatedValue;
				property.getValue().get(validatedValue);
				setValidated(validatedValue);
			}
	}
	return true;
}

Uint16 UNIX_CIMXMLCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_CIMXMLCapabilities::initialize()
{
	return false;
}

Boolean UNIX_CIMXMLCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CIMXMLCapabilities");
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
	_multipleOperationsSupported = Boolean(false);
	_validated = Boolean(false);
	
	return false;
}

Boolean UNIX_CIMXMLCapabilities::finalize()
{
	return false;
}


Boolean UNIX_CIMXMLCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CIMXMLCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIMXMLCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIMXMLCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CIMXMLCapabilities::validateInstance()
{
	return true;
}

