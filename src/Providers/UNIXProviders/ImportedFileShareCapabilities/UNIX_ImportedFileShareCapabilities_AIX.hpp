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


UNIX_ImportedFileShareCapabilities::UNIX_ImportedFileShareCapabilities(void)
{
}

UNIX_ImportedFileShareCapabilities::~UNIX_ImportedFileShareCapabilities(void)
{
}

Boolean UNIX_ImportedFileShareCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ImportedFileShareCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ImportedFileShareCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ImportedFileShareCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ImportedFileShareCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_ImportedFileShareCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ImportedFileShareCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ImportedFileShareCapabilities::getDescription() const
{
	return _description;
}

void UNIX_ImportedFileShareCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ImportedFileShareCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ImportedFileShareCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_ImportedFileShareCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ImportedFileShareCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ImportedFileShareCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_ImportedFileShareCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ImportedFileShareCapabilities::getFileSharingProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SHARING_PROTOCOL, getFileSharingProtocol());
	return true;
}

Uint16 UNIX_ImportedFileShareCapabilities::getFileSharingProtocol() const
{
	return _fileSharingProtocol;
}

void UNIX_ImportedFileShareCapabilities::setFileSharingProtocol(Uint16 &value)
{
	_fileSharingProtocol = value;
}

Boolean UNIX_ImportedFileShareCapabilities::getProtocolVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSIONS, getProtocolVersions());
	return true;
}

Array<String> UNIX_ImportedFileShareCapabilities::getProtocolVersions() const
{
	return _protocolVersions;
}

void UNIX_ImportedFileShareCapabilities::setProtocolVersions(Array<String> &value)
{
	_protocolVersions = value;
}

Boolean UNIX_ImportedFileShareCapabilities::getSupportedProperties(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_PROPERTIES, getSupportedProperties());
	return true;
}

Array<Uint16> UNIX_ImportedFileShareCapabilities::getSupportedProperties() const
{
	return _supportedProperties;
}

void UNIX_ImportedFileShareCapabilities::setSupportedProperties(Array<Uint16> &value)
{
	_supportedProperties = value;
}


void UNIX_ImportedFileShareCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImportedFileShareCapabilities");
	_generation = Uint64(0);
	_fileSharingProtocol = Uint16(0);
	_protocolVersions.clear();
	_supportedProperties.clear();

}

Boolean UNIX_ImportedFileShareCapabilities::loadInstance(const CIMInstance &instance)
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
				Uint16 fileSharingProtocolValue;
				property.getValue().get(fileSharingProtocolValue);
				setFileSharingProtocol(fileSharingProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolVersions"))
			{
				Array<String> protocolVersionsValue;
				property.getValue().get(protocolVersionsValue);
				setProtocolVersions(protocolVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedProperties"))
			{
				Array<Uint16> supportedPropertiesValue;
				property.getValue().get(supportedPropertiesValue);
				setSupportedProperties(supportedPropertiesValue);
			}
	}
	return true;
}

Uint16 UNIX_ImportedFileShareCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint16 UNIX_ImportedFileShareCapabilities::invokeCreateGoal(
		CIMInstance &inJob,
		String &inTemplateGoal,
		String &inSupportedGoal
	)
{
	Uint16 returnValue = Uint16(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method CreateGoal */
	
	
	
	return returnValue;
}


Boolean UNIX_ImportedFileShareCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ImportedFileShareCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImportedFileShareCapabilities");
	_generation = Uint64(0);
	_fileSharingProtocol = Uint16(0);
	_protocolVersions.clear();
	_supportedProperties.clear();
	
	return false;
}

Boolean UNIX_ImportedFileShareCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ImportedFileShareCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ImportedFileShareCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImportedFileShareCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImportedFileShareCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImportedFileShareCapabilities::validateInstance()
{
	return true;
}

