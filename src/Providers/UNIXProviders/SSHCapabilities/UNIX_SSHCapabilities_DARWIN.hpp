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


UNIX_SSHCapabilities::UNIX_SSHCapabilities(void)
{
}

UNIX_SSHCapabilities::~UNIX_SSHCapabilities(void)
{
}

Boolean UNIX_SSHCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SSHCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SSHCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SSHCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SSHCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_SSHCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SSHCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SSHCapabilities::getDescription() const
{
	return _description;
}

void UNIX_SSHCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SSHCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SSHCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_SSHCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SSHCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SSHCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_SSHCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SSHCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_SSHCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_SSHCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_SSHCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_SSHCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_SSHCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_SSHCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_SSHCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_SSHCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_SSHCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_SSHCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_SSHCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_SSHCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_SSHCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_SSHCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_SSHCapabilities::getMaxConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS, getMaxConnections());
	return true;
}

Uint16 UNIX_SSHCapabilities::getMaxConnections() const
{
	return _maxConnections;
}

void UNIX_SSHCapabilities::setMaxConnections(Uint16 &value)
{
	_maxConnections = value;
}

Boolean UNIX_SSHCapabilities::getMaxListeningPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LISTENING_PORTS, getMaxListeningPorts());
	return true;
}

Uint16 UNIX_SSHCapabilities::getMaxListeningPorts() const
{
	return _maxListeningPorts;
}

void UNIX_SSHCapabilities::setMaxListeningPorts(Uint16 &value)
{
	_maxListeningPorts = value;
}

Boolean UNIX_SSHCapabilities::getListeningPortManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LISTENING_PORT_MANAGEMENT_SUPPORTED, getListeningPortManagementSupported());
	return true;
}

Boolean UNIX_SSHCapabilities::getListeningPortManagementSupported() const
{
	return _listeningPortManagementSupported;
}

void UNIX_SSHCapabilities::setListeningPortManagementSupported(Boolean &value)
{
	_listeningPortManagementSupported = value;
}

Boolean UNIX_SSHCapabilities::getSupportedSSHVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_S_S_H_VERSIONS, getSupportedSSHVersions());
	return true;
}

Array<Uint16> UNIX_SSHCapabilities::getSupportedSSHVersions() const
{
	return _supportedSSHVersions;
}

void UNIX_SSHCapabilities::setSupportedSSHVersions(Array<Uint16> &value)
{
	_supportedSSHVersions = value;
}

Boolean UNIX_SSHCapabilities::getOtherSupportedSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_S_S_H_VERSION, getOtherSupportedSSHVersion());
	return true;
}

String UNIX_SSHCapabilities::getOtherSupportedSSHVersion() const
{
	return _otherSupportedSSHVersion;
}

void UNIX_SSHCapabilities::setOtherSupportedSSHVersion(String &value)
{
	_otherSupportedSSHVersion = value;
}

Boolean UNIX_SSHCapabilities::getSupportedEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ENCRYPTION_ALGORITHMS, getSupportedEncryptionAlgorithms());
	return true;
}

Array<Uint16> UNIX_SSHCapabilities::getSupportedEncryptionAlgorithms() const
{
	return _supportedEncryptionAlgorithms;
}

void UNIX_SSHCapabilities::setSupportedEncryptionAlgorithms(Array<Uint16> &value)
{
	_supportedEncryptionAlgorithms = value;
}

Boolean UNIX_SSHCapabilities::getOtherSupportedEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_ENCRYPTION_ALGORITHM, getOtherSupportedEncryptionAlgorithm());
	return true;
}

String UNIX_SSHCapabilities::getOtherSupportedEncryptionAlgorithm() const
{
	return _otherSupportedEncryptionAlgorithm;
}

void UNIX_SSHCapabilities::setOtherSupportedEncryptionAlgorithm(String &value)
{
	_otherSupportedEncryptionAlgorithm = value;
}


void UNIX_SSHCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SSHCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxConnections = Uint16(0);
	_maxListeningPorts = Uint16(0);
	_listeningPortManagementSupported = Boolean(false);
	_supportedSSHVersions.clear();
	_otherSupportedSSHVersion = String ("");
	_supportedEncryptionAlgorithms.clear();
	_otherSupportedEncryptionAlgorithm = String ("");

}

Boolean UNIX_SSHCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedSSHVersions"))
			{
				Array<Uint16> supportedSSHVersionsValue;
				property.getValue().get(supportedSSHVersionsValue);
				setSupportedSSHVersions(supportedSSHVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedSSHVersion"))
			{
				String otherSupportedSSHVersionValue;
				property.getValue().get(otherSupportedSSHVersionValue);
				setOtherSupportedSSHVersion(otherSupportedSSHVersionValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedEncryptionAlgorithms"))
			{
				Array<Uint16> supportedEncryptionAlgorithmsValue;
				property.getValue().get(supportedEncryptionAlgorithmsValue);
				setSupportedEncryptionAlgorithms(supportedEncryptionAlgorithmsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedEncryptionAlgorithm"))
			{
				String otherSupportedEncryptionAlgorithmValue;
				property.getValue().get(otherSupportedEncryptionAlgorithmValue);
				setOtherSupportedEncryptionAlgorithm(otherSupportedEncryptionAlgorithmValue);
			}
	}
	return true;
}

Uint16 UNIX_SSHCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_SSHCapabilities::initialize()
{
	return false;
}

Boolean UNIX_SSHCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SSHCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxConnections = Uint16(0);
	_maxListeningPorts = Uint16(0);
	_listeningPortManagementSupported = Boolean(false);
	_supportedSSHVersions.clear();
	_otherSupportedSSHVersion = String ("");
	_supportedEncryptionAlgorithms.clear();
	_otherSupportedEncryptionAlgorithm = String ("");
	
	return false;
}

Boolean UNIX_SSHCapabilities::finalize()
{
	return false;
}


Boolean UNIX_SSHCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SSHCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHCapabilities::validateInstance()
{
	return true;
}

