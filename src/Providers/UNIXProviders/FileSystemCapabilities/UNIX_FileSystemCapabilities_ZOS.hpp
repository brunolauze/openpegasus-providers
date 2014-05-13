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


UNIX_FileSystemCapabilities::UNIX_FileSystemCapabilities(void)
{
}

UNIX_FileSystemCapabilities::~UNIX_FileSystemCapabilities(void)
{
}

Boolean UNIX_FileSystemCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSystemCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FileSystemCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FileSystemCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSystemCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FileSystemCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FileSystemCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSystemCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FileSystemCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FileSystemCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSystemCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FileSystemCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FileSystemCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FileSystemCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FileSystemCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FileSystemCapabilities::getSupportedPersistenceTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_PERSISTENCE_TYPES, getSupportedPersistenceTypes());
	return true;
}

Array<Uint16> UNIX_FileSystemCapabilities::getSupportedPersistenceTypes() const
{
	return _supportedPersistenceTypes;
}

void UNIX_FileSystemCapabilities::setSupportedPersistenceTypes(Array<Uint16> &value)
{
	_supportedPersistenceTypes = value;
}

Boolean UNIX_FileSystemCapabilities::getSupportedOtherPersistenceTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_OTHER_PERSISTENCE_TYPES, getSupportedOtherPersistenceTypes());
	return true;
}

Array<String> UNIX_FileSystemCapabilities::getSupportedOtherPersistenceTypes() const
{
	return _supportedOtherPersistenceTypes;
}

void UNIX_FileSystemCapabilities::setSupportedOtherPersistenceTypes(Array<String> &value)
{
	_supportedOtherPersistenceTypes = value;
}

Boolean UNIX_FileSystemCapabilities::getActualFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTUAL_FILE_SYSTEM_TYPE, getActualFileSystemType());
	return true;
}

Uint16 UNIX_FileSystemCapabilities::getActualFileSystemType() const
{
	return _actualFileSystemType;
}

void UNIX_FileSystemCapabilities::setActualFileSystemType(Uint16 &value)
{
	_actualFileSystemType = value;
}

Boolean UNIX_FileSystemCapabilities::getSupportedProperties(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_PROPERTIES, getSupportedProperties());
	return true;
}

Array<Uint16> UNIX_FileSystemCapabilities::getSupportedProperties() const
{
	return _supportedProperties;
}

void UNIX_FileSystemCapabilities::setSupportedProperties(Array<Uint16> &value)
{
	_supportedProperties = value;
}

Boolean UNIX_FileSystemCapabilities::getSupportedOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_OPERATIONS, getSupportedOperations());
	return true;
}

Array<Uint16> UNIX_FileSystemCapabilities::getSupportedOperations() const
{
	return _supportedOperations;
}

void UNIX_FileSystemCapabilities::setSupportedOperations(Array<Uint16> &value)
{
	_supportedOperations = value;
}


void UNIX_FileSystemCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemCapabilities");
	_generation = Uint64(0);
	_supportedPersistenceTypes.clear();
	_supportedOtherPersistenceTypes.clear();
	_actualFileSystemType = Uint16(0);
	_supportedProperties.clear();
	_supportedOperations.clear();

}

Boolean UNIX_FileSystemCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedPersistenceTypes"))
			{
				Array<Uint16> supportedPersistenceTypesValue;
				property.getValue().get(supportedPersistenceTypesValue);
				setSupportedPersistenceTypes(supportedPersistenceTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedOtherPersistenceTypes"))
			{
				Array<String> supportedOtherPersistenceTypesValue;
				property.getValue().get(supportedOtherPersistenceTypesValue);
				setSupportedOtherPersistenceTypes(supportedOtherPersistenceTypesValue);
			}
			else if (String::equal(property.getName().getString(), "ActualFileSystemType"))
			{
				Uint16 actualFileSystemTypeValue;
				property.getValue().get(actualFileSystemTypeValue);
				setActualFileSystemType(actualFileSystemTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedProperties"))
			{
				Array<Uint16> supportedPropertiesValue;
				property.getValue().get(supportedPropertiesValue);
				setSupportedProperties(supportedPropertiesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedOperations"))
			{
				Array<Uint16> supportedOperationsValue;
				property.getValue().get(supportedOperationsValue);
				setSupportedOperations(supportedOperationsValue);
			}
	}
	return true;
}

Uint16 UNIX_FileSystemCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint16 UNIX_FileSystemCapabilities::invokeCreateGoal(
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

Uint64 UNIX_FileSystemCapabilities::invokeGetRequiredStorageSize(
		String &inFileSystemGoal,
		String &inExtentSetting,
		Uint64 &inExpectedSize,
		Uint64 &inMinimumSizeAcceptable,
		Uint64 &inMaximumSizeUsable
	)
{
	Uint64 returnValue = Uint64(0);
	
	/* Execute method GetRequiredStorageSize */
	
	
	
	return returnValue;
}

Uint32 UNIX_FileSystemCapabilities::invokeGetElementNameCapabilities(
		Array<Uint32> &inSupportedFeatures,
		String &inElementNameMask,
		Uint16 &inMaxElementNameLen
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetElementNameCapabilities */
	
	
	
	return returnValue;
}


Boolean UNIX_FileSystemCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FileSystemCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FileSystemCapabilities");
	_generation = Uint64(0);
	_supportedPersistenceTypes.clear();
	_supportedOtherPersistenceTypes.clear();
	_actualFileSystemType = Uint16(0);
	_supportedProperties.clear();
	_supportedOperations.clear();
	
	return false;
}

Boolean UNIX_FileSystemCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FileSystemCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FileSystemCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileSystemCapabilities::validateInstance()
{
	return true;
}

