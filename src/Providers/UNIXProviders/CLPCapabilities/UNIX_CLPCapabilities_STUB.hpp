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


UNIX_CLPCapabilities::UNIX_CLPCapabilities(void)
{
}

UNIX_CLPCapabilities::~UNIX_CLPCapabilities(void)
{
}

Boolean UNIX_CLPCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CLPCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CLPCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CLPCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CLPCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_CLPCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CLPCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CLPCapabilities::getDescription() const
{
	return _description;
}

void UNIX_CLPCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CLPCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CLPCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_CLPCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CLPCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CLPCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_CLPCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CLPCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_CLPCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_CLPCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_CLPCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_CLPCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_CLPCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_CLPCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_CLPCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_CLPCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_CLPCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_CLPCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_CLPCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_CLPCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_CLPCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_CLPCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_CLPCapabilities::getMaxConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS, getMaxConnections());
	return true;
}

Uint16 UNIX_CLPCapabilities::getMaxConnections() const
{
	return _maxConnections;
}

void UNIX_CLPCapabilities::setMaxConnections(Uint16 &value)
{
	_maxConnections = value;
}

Boolean UNIX_CLPCapabilities::getMaxListeningPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LISTENING_PORTS, getMaxListeningPorts());
	return true;
}

Uint16 UNIX_CLPCapabilities::getMaxListeningPorts() const
{
	return _maxListeningPorts;
}

void UNIX_CLPCapabilities::setMaxListeningPorts(Uint16 &value)
{
	_maxListeningPorts = value;
}

Boolean UNIX_CLPCapabilities::getListeningPortManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LISTENING_PORT_MANAGEMENT_SUPPORTED, getListeningPortManagementSupported());
	return true;
}

Boolean UNIX_CLPCapabilities::getListeningPortManagementSupported() const
{
	return _listeningPortManagementSupported;
}

void UNIX_CLPCapabilities::setListeningPortManagementSupported(Boolean &value)
{
	_listeningPortManagementSupported = value;
}

Boolean UNIX_CLPCapabilities::getCLPVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLP_VERSIONS, getCLPVersions());
	return true;
}

Array<String> UNIX_CLPCapabilities::getCLPVersions() const
{
	return _cLPVersions;
}

void UNIX_CLPCapabilities::setCLPVersions(Array<String> &value)
{
	_cLPVersions = value;
}

Boolean UNIX_CLPCapabilities::getSMMEAddressVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_M_M_E_ADDRESS_VERSIONS, getSMMEAddressVersions());
	return true;
}

Array<String> UNIX_CLPCapabilities::getSMMEAddressVersions() const
{
	return _sMMEAddressVersions;
}

void UNIX_CLPCapabilities::setSMMEAddressVersions(Array<String> &value)
{
	_sMMEAddressVersions = value;
}


void UNIX_CLPCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CLPCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxConnections = Uint16(0);
	_maxListeningPorts = Uint16(0);
	_listeningPortManagementSupported = Boolean(false);
	_cLPVersions.clear();
	_sMMEAddressVersions.clear();

}

Boolean UNIX_CLPCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CLPVersions"))
			{
				Array<String> cLPVersionsValue;
				property.getValue().get(cLPVersionsValue);
				setCLPVersions(cLPVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "SMMEAddressVersions"))
			{
				Array<String> sMMEAddressVersionsValue;
				property.getValue().get(sMMEAddressVersionsValue);
				setSMMEAddressVersions(sMMEAddressVersionsValue);
			}
	}
	return true;
}

Uint16 UNIX_CLPCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_CLPCapabilities::initialize()
{
	return false;
}

Boolean UNIX_CLPCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CLPCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxConnections = Uint16(0);
	_maxListeningPorts = Uint16(0);
	_listeningPortManagementSupported = Boolean(false);
	_cLPVersions.clear();
	_sMMEAddressVersions.clear();
	
	return false;
}

Boolean UNIX_CLPCapabilities::finalize()
{
	return false;
}


Boolean UNIX_CLPCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CLPCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CLPCapabilities::validateInstance()
{
	return true;
}

