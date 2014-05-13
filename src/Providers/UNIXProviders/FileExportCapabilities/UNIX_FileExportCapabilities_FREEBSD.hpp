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


UNIX_FileExportCapabilities::UNIX_FileExportCapabilities(void)
{
}

UNIX_FileExportCapabilities::~UNIX_FileExportCapabilities(void)
{
}

Boolean UNIX_FileExportCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileExportCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileExportCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileExportCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileExportCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FileExportCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileExportCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileExportCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FileExportCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileExportCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileExportCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FileExportCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileExportCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileExportCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FileExportCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileExportCapabilities::getFileSharingProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SHARING_PROTOCOL, getFileSharingProtocol());
	return true;
}

Array<Uint16> UNIX_FileExportCapabilities::getFileSharingProtocol() const
{
	return _fileSharingProtocol;
}

void UNIX_FileExportCapabilities::setFileSharingProtocol(Array<Uint16> &value)
{
	_fileSharingProtocol = value;
}

Boolean UNIX_FileExportCapabilities::getProtocolVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSIONS, getProtocolVersions());
	return true;
}

Array<String> UNIX_FileExportCapabilities::getProtocolVersions() const
{
	return _protocolVersions;
}

void UNIX_FileExportCapabilities::setProtocolVersions(Array<String> &value)
{
	_protocolVersions = value;
}

Boolean UNIX_FileExportCapabilities::getSupportedSynchronousMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_METHODS, getSupportedSynchronousMethods());
	return true;
}

Array<Uint16> UNIX_FileExportCapabilities::getSupportedSynchronousMethods() const
{
	return _supportedSynchronousMethods;
}

void UNIX_FileExportCapabilities::setSupportedSynchronousMethods(Array<Uint16> &value)
{
	_supportedSynchronousMethods = value;
}

Boolean UNIX_FileExportCapabilities::getSupportedAsynchronousMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_METHODS, getSupportedAsynchronousMethods());
	return true;
}

Array<Uint16> UNIX_FileExportCapabilities::getSupportedAsynchronousMethods() const
{
	return _supportedAsynchronousMethods;
}

void UNIX_FileExportCapabilities::setSupportedAsynchronousMethods(Array<Uint16> &value)
{
	_supportedAsynchronousMethods = value;
}

Boolean UNIX_FileExportCapabilities::getInitialEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_ENABLED_STATE, getInitialEnabledState());
	return true;
}

Uint16 UNIX_FileExportCapabilities::getInitialEnabledState() const
{
	return _initialEnabledState;
}

void UNIX_FileExportCapabilities::setInitialEnabledState(Uint16 &value)
{
	_initialEnabledState = value;
}


void UNIX_FileExportCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileExportCapabilities");
	_generation = Uint64(0);
	_fileSharingProtocol.clear();
	_protocolVersions.clear();
	_supportedSynchronousMethods.clear();
	_supportedAsynchronousMethods.clear();
	_initialEnabledState = Uint16(0);

}

Boolean UNIX_FileExportCapabilities::loadInstance(const CIMInstance &instance)
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

Uint16 UNIX_FileExportCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_FileExportCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FileExportCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileExportCapabilities");
	_generation = Uint64(0);
	_fileSharingProtocol.clear();
	_protocolVersions.clear();
	_supportedSynchronousMethods.clear();
	_supportedAsynchronousMethods.clear();
	_initialEnabledState = Uint16(0);
	
	return false;
}

Boolean UNIX_FileExportCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FileExportCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FileExportCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileExportCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileExportCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileExportCapabilities::validateInstance()
{
	return true;
}

