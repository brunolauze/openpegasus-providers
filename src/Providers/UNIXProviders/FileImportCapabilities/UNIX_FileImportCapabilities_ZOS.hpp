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


UNIX_FileImportCapabilities::UNIX_FileImportCapabilities(void)
{
}

UNIX_FileImportCapabilities::~UNIX_FileImportCapabilities(void)
{
}

Boolean UNIX_FileImportCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileImportCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileImportCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileImportCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileImportCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FileImportCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileImportCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileImportCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FileImportCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileImportCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileImportCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FileImportCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileImportCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileImportCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FileImportCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileImportCapabilities::getFileSharingProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SHARING_PROTOCOL, getFileSharingProtocol());
	return true;
}

Array<Uint16> UNIX_FileImportCapabilities::getFileSharingProtocol() const
{
	return _fileSharingProtocol;
}

void UNIX_FileImportCapabilities::setFileSharingProtocol(Array<Uint16> &value)
{
	_fileSharingProtocol = value;
}

Boolean UNIX_FileImportCapabilities::getProtocolVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSIONS, getProtocolVersions());
	return true;
}

Array<String> UNIX_FileImportCapabilities::getProtocolVersions() const
{
	return _protocolVersions;
}

void UNIX_FileImportCapabilities::setProtocolVersions(Array<String> &value)
{
	_protocolVersions = value;
}

Boolean UNIX_FileImportCapabilities::getSupportedSynchronousMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_METHODS, getSupportedSynchronousMethods());
	return true;
}

Array<Uint16> UNIX_FileImportCapabilities::getSupportedSynchronousMethods() const
{
	return _supportedSynchronousMethods;
}

void UNIX_FileImportCapabilities::setSupportedSynchronousMethods(Array<Uint16> &value)
{
	_supportedSynchronousMethods = value;
}

Boolean UNIX_FileImportCapabilities::getSupportedAsynchronousMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_METHODS, getSupportedAsynchronousMethods());
	return true;
}

Array<Uint16> UNIX_FileImportCapabilities::getSupportedAsynchronousMethods() const
{
	return _supportedAsynchronousMethods;
}

void UNIX_FileImportCapabilities::setSupportedAsynchronousMethods(Array<Uint16> &value)
{
	_supportedAsynchronousMethods = value;
}

Boolean UNIX_FileImportCapabilities::getInitialEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_ENABLED_STATE, getInitialEnabledState());
	return true;
}

Uint16 UNIX_FileImportCapabilities::getInitialEnabledState() const
{
	return _initialEnabledState;
}

void UNIX_FileImportCapabilities::setInitialEnabledState(Uint16 &value)
{
	_initialEnabledState = value;
}


void UNIX_FileImportCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileImportCapabilities");
	_generation = Uint64(0);
	_fileSharingProtocol.clear();
	_protocolVersions.clear();
	_supportedSynchronousMethods.clear();
	_supportedAsynchronousMethods.clear();
	_initialEnabledState = Uint16(0);

}

Boolean UNIX_FileImportCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FileSharingProtocol"))
			{
				Array<Uint16> fileSharingProtocolValue;
				property.getValue().get(fileSharingProtocolValue);
				setFileSharingProtocol(fileSharingProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolVersions"))
			{
				Array<String> protocolVersionsValue;
				property.getValue().get(protocolVersionsValue);
				setProtocolVersions(protocolVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedSynchronousMethods"))
			{
				Array<Uint16> supportedSynchronousMethodsValue;
				property.getValue().get(supportedSynchronousMethodsValue);
				setSupportedSynchronousMethods(supportedSynchronousMethodsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedAsynchronousMethods"))
			{
				Array<Uint16> supportedAsynchronousMethodsValue;
				property.getValue().get(supportedAsynchronousMethodsValue);
				setSupportedAsynchronousMethods(supportedAsynchronousMethodsValue);
			}
			else if (String::equal(property.getName().getString(), "InitialEnabledState"))
			{
				Uint16 initialEnabledStateValue;
				property.getValue().get(initialEnabledStateValue);
				setInitialEnabledState(initialEnabledStateValue);
			}
	}
	return true;
}

Uint16 UNIX_FileImportCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_FileImportCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FileImportCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileImportCapabilities");
	_generation = Uint64(0);
	_fileSharingProtocol.clear();
	_protocolVersions.clear();
	_supportedSynchronousMethods.clear();
	_supportedAsynchronousMethods.clear();
	_initialEnabledState = Uint16(0);
	
	return false;
}

Boolean UNIX_FileImportCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FileImportCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FileImportCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileImportCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileImportCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileImportCapabilities::validateInstance()
{
	return true;
}

