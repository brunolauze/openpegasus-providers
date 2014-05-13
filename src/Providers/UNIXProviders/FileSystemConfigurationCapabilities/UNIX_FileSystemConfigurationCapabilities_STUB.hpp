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


UNIX_FileSystemConfigurationCapabilities::UNIX_FileSystemConfigurationCapabilities(void)
{
}

UNIX_FileSystemConfigurationCapabilities::~UNIX_FileSystemConfigurationCapabilities(void)
{
}

Boolean UNIX_FileSystemConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSystemConfigurationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileSystemConfigurationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileSystemConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSystemConfigurationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FileSystemConfigurationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileSystemConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSystemConfigurationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FileSystemConfigurationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileSystemConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSystemConfigurationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FileSystemConfigurationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileSystemConfigurationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileSystemConfigurationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FileSystemConfigurationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileSystemConfigurationCapabilities::getSupportedActualFileSystemTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ACTUAL_FILE_SYSTEM_TYPES, getSupportedActualFileSystemTypes());
	return true;
}

Array<Uint16> UNIX_FileSystemConfigurationCapabilities::getSupportedActualFileSystemTypes() const
{
	return _supportedActualFileSystemTypes;
}

void UNIX_FileSystemConfigurationCapabilities::setSupportedActualFileSystemTypes(Array<Uint16> &value)
{
	_supportedActualFileSystemTypes = value;
}

Boolean UNIX_FileSystemConfigurationCapabilities::getSupportedSynchronousMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_METHODS, getSupportedSynchronousMethods());
	return true;
}

Array<Uint16> UNIX_FileSystemConfigurationCapabilities::getSupportedSynchronousMethods() const
{
	return _supportedSynchronousMethods;
}

void UNIX_FileSystemConfigurationCapabilities::setSupportedSynchronousMethods(Array<Uint16> &value)
{
	_supportedSynchronousMethods = value;
}

Boolean UNIX_FileSystemConfigurationCapabilities::getSupportedAsynchronousMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_METHODS, getSupportedAsynchronousMethods());
	return true;
}

Array<Uint16> UNIX_FileSystemConfigurationCapabilities::getSupportedAsynchronousMethods() const
{
	return _supportedAsynchronousMethods;
}

void UNIX_FileSystemConfigurationCapabilities::setSupportedAsynchronousMethods(Array<Uint16> &value)
{
	_supportedAsynchronousMethods = value;
}

Boolean UNIX_FileSystemConfigurationCapabilities::getInitialAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_AVAILABILITY, getInitialAvailability());
	return true;
}

Uint16 UNIX_FileSystemConfigurationCapabilities::getInitialAvailability() const
{
	return _initialAvailability;
}

void UNIX_FileSystemConfigurationCapabilities::setInitialAvailability(Uint16 &value)
{
	_initialAvailability = value;
}


void UNIX_FileSystemConfigurationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemConfigurationCapabilities");
	_generation = Uint64(0);
	_supportedActualFileSystemTypes.clear();
	_supportedSynchronousMethods.clear();
	_supportedAsynchronousMethods.clear();
	_initialAvailability = Uint16(0);

}

Boolean UNIX_FileSystemConfigurationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedActualFileSystemTypes"))
			{
				Array<Uint16> supportedActualFileSystemTypesValue;
				property.getValue().get(supportedActualFileSystemTypesValue);
				setSupportedActualFileSystemTypes(supportedActualFileSystemTypesValue);
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
			else if (String::equal(property.getName().getString(), "InitialAvailability"))
			{
				Uint16 initialAvailabilityValue;
				property.getValue().get(initialAvailabilityValue);
				setInitialAvailability(initialAvailabilityValue);
			}
	}
	return true;
}

Uint16 UNIX_FileSystemConfigurationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_FileSystemConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FileSystemConfigurationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemConfigurationCapabilities");
	_generation = Uint64(0);
	_supportedActualFileSystemTypes.clear();
	_supportedSynchronousMethods.clear();
	_supportedAsynchronousMethods.clear();
	_initialAvailability = Uint16(0);
	
	return false;
}

Boolean UNIX_FileSystemConfigurationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FileSystemConfigurationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FileSystemConfigurationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemConfigurationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemConfigurationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemConfigurationCapabilities::validateInstance()
{
	return true;
}

