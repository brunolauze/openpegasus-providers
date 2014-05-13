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


UNIX_ExportedFileShareCapabilities::UNIX_ExportedFileShareCapabilities(void)
{
}

UNIX_ExportedFileShareCapabilities::~UNIX_ExportedFileShareCapabilities(void)
{
}

Boolean UNIX_ExportedFileShareCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ExportedFileShareCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ExportedFileShareCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ExportedFileShareCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ExportedFileShareCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_ExportedFileShareCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ExportedFileShareCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ExportedFileShareCapabilities::getDescription() const
{
	return _description;
}

void UNIX_ExportedFileShareCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ExportedFileShareCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ExportedFileShareCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_ExportedFileShareCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ExportedFileShareCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ExportedFileShareCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_ExportedFileShareCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ExportedFileShareCapabilities::getFileSharingProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SHARING_PROTOCOL, getFileSharingProtocol());
	return true;
}

Uint16 UNIX_ExportedFileShareCapabilities::getFileSharingProtocol() const
{
	return _fileSharingProtocol;
}

void UNIX_ExportedFileShareCapabilities::setFileSharingProtocol(Uint16 &value)
{
	_fileSharingProtocol = value;
}

Boolean UNIX_ExportedFileShareCapabilities::getProtocolVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSIONS, getProtocolVersions());
	return true;
}

Array<String> UNIX_ExportedFileShareCapabilities::getProtocolVersions() const
{
	return _protocolVersions;
}

void UNIX_ExportedFileShareCapabilities::setProtocolVersions(Array<String> &value)
{
	_protocolVersions = value;
}

Boolean UNIX_ExportedFileShareCapabilities::getSupportedProperties(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_PROPERTIES, getSupportedProperties());
	return true;
}

Array<Uint16> UNIX_ExportedFileShareCapabilities::getSupportedProperties() const
{
	return _supportedProperties;
}

void UNIX_ExportedFileShareCapabilities::setSupportedProperties(Array<Uint16> &value)
{
	_supportedProperties = value;
}


void UNIX_ExportedFileShareCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ExportedFileShareCapabilities");
	_generation = Uint64(0);
	_fileSharingProtocol = Uint16(0);
	_protocolVersions.clear();
	_supportedProperties.clear();

}

Boolean UNIX_ExportedFileShareCapabilities::loadInstance(const CIMInstance &instance)
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

Uint16 UNIX_ExportedFileShareCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint16 UNIX_ExportedFileShareCapabilities::invokeCreateGoal(
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

Uint32 UNIX_ExportedFileShareCapabilities::invokeGetElementNameCapabilities(
		Array<Uint16> &inSupportedFeatures,
		Uint16 &inMaxElementNameLen,
		String &inElementNameMask
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetElementNameCapabilities */
	
	
	
	return returnValue;
}


Boolean UNIX_ExportedFileShareCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ExportedFileShareCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ExportedFileShareCapabilities");
	_generation = Uint64(0);
	_fileSharingProtocol = Uint16(0);
	_protocolVersions.clear();
	_supportedProperties.clear();
	
	return false;
}

Boolean UNIX_ExportedFileShareCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ExportedFileShareCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ExportedFileShareCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExportedFileShareCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExportedFileShareCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExportedFileShareCapabilities::validateInstance()
{
	return true;
}

