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


UNIX_SystemIdentification::UNIX_SystemIdentification(void)
{
}

UNIX_SystemIdentification::~UNIX_SystemIdentification(void)
{
}

Boolean UNIX_SystemIdentification::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SystemIdentification::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SystemIdentification::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SystemIdentification::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SystemIdentification::getCaption() const
{
	return _caption;
}

void UNIX_SystemIdentification::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SystemIdentification::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SystemIdentification::getDescription() const
{
	return _description;
}

void UNIX_SystemIdentification::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SystemIdentification::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SystemIdentification::getElementName() const
{
	return _elementName;
}

void UNIX_SystemIdentification::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SystemIdentification::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SystemIdentification::getGeneration() const
{
	return _generation;
}

void UNIX_SystemIdentification::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SystemIdentification::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SystemIdentification::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SystemIdentification::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SystemIdentification::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SystemIdentification::getSystemName() const
{
	return _systemName;
}

void UNIX_SystemIdentification::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SystemIdentification::getObjectManagerCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME, getObjectManagerCreationClassName());
	return true;
}

String UNIX_SystemIdentification::getObjectManagerCreationClassName() const
{
	return _objectManagerCreationClassName;
}

void UNIX_SystemIdentification::setObjectManagerCreationClassName(String &value)
{
	_objectManagerCreationClassName = value;
}

Boolean UNIX_SystemIdentification::getObjectManagerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_MANAGER_NAME, getObjectManagerName());
	return true;
}

String UNIX_SystemIdentification::getObjectManagerName() const
{
	return _objectManagerName;
}

void UNIX_SystemIdentification::setObjectManagerName(String &value)
{
	_objectManagerName = value;
}

Boolean UNIX_SystemIdentification::getNamespaceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAMESPACE_CREATION_CLASS_NAME, getNamespaceCreationClassName());
	return true;
}

String UNIX_SystemIdentification::getNamespaceCreationClassName() const
{
	return _namespaceCreationClassName;
}

void UNIX_SystemIdentification::setNamespaceCreationClassName(String &value)
{
	_namespaceCreationClassName = value;
}

Boolean UNIX_SystemIdentification::getNamespaceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAMESPACE_NAME, getNamespaceName());
	return true;
}

String UNIX_SystemIdentification::getNamespaceName() const
{
	return _namespaceName;
}

void UNIX_SystemIdentification::setNamespaceName(String &value)
{
	_namespaceName = value;
}

Boolean UNIX_SystemIdentification::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SystemIdentification::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SystemIdentification::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SystemIdentification::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SystemIdentification::getName() const
{
	return _name;
}

void UNIX_SystemIdentification::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SystemIdentification::getIdentificationFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_FORMATS, getIdentificationFormats());
	return true;
}

Array<Uint16> UNIX_SystemIdentification::getIdentificationFormats() const
{
	return _identificationFormats;
}

void UNIX_SystemIdentification::setIdentificationFormats(Array<Uint16> &value)
{
	_identificationFormats = value;
}

Boolean UNIX_SystemIdentification::getFormatDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORMAT_DESCRIPTIONS, getFormatDescriptions());
	return true;
}

Array<String> UNIX_SystemIdentification::getFormatDescriptions() const
{
	return _formatDescriptions;
}

void UNIX_SystemIdentification::setFormatDescriptions(Array<String> &value)
{
	_formatDescriptions = value;
}

Boolean UNIX_SystemIdentification::getIdentificationData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_DATA, getIdentificationData());
	return true;
}

Array<String> UNIX_SystemIdentification::getIdentificationData() const
{
	return _identificationData;
}

void UNIX_SystemIdentification::setIdentificationData(Array<String> &value)
{
	_identificationData = value;
}


void UNIX_SystemIdentification::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SystemIdentification");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_objectManagerCreationClassName = String ("");
	_objectManagerName = String ("");
	_namespaceCreationClassName = String ("");
	_namespaceName = String ("");
	_creationClassName = String("UNIX_SystemIdentification");
	_name = String ("");
	_identificationFormats.clear();
	_formatDescriptions.clear();
	_identificationData.clear();

}

Boolean UNIX_SystemIdentification::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "ObjectManagerCreationClassName"))
			{
				String objectManagerCreationClassNameValue;
				property.getValue().get(objectManagerCreationClassNameValue);
				setObjectManagerCreationClassName(objectManagerCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ObjectManagerName"))
			{
				String objectManagerNameValue;
				property.getValue().get(objectManagerNameValue);
				setObjectManagerName(objectManagerNameValue);
			}
			else if (String::equal(property.getName().getString(), "NamespaceCreationClassName"))
			{
				String namespaceCreationClassNameValue;
				property.getValue().get(namespaceCreationClassNameValue);
				setNamespaceCreationClassName(namespaceCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "NamespaceName"))
			{
				String namespaceNameValue;
				property.getValue().get(namespaceNameValue);
				setNamespaceName(namespaceNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "IdentificationFormats"))
			{
				Array<Uint16> identificationFormatsValue;
				property.getValue().get(identificationFormatsValue);
				setIdentificationFormats(identificationFormatsValue);
			}
			else if (String::equal(property.getName().getString(), "FormatDescriptions"))
			{
				Array<String> formatDescriptionsValue;
				property.getValue().get(formatDescriptionsValue);
				setFormatDescriptions(formatDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "IdentificationData"))
			{
				Array<String> identificationDataValue;
				property.getValue().get(identificationDataValue);
				setIdentificationData(identificationDataValue);
			}
	}
	return true;
}


Boolean UNIX_SystemIdentification::initialize()
{
	return false;
}

Boolean UNIX_SystemIdentification::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SystemIdentification");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_objectManagerCreationClassName = String ("");
	_objectManagerName = String ("");
	_namespaceCreationClassName = String ("");
	_namespaceName = String ("");
	_creationClassName = String("UNIX_SystemIdentification");
	_name = String ("");
	_identificationFormats.clear();
	_formatDescriptions.clear();
	_identificationData.clear();
	
	return false;
}

Boolean UNIX_SystemIdentification::finalize()
{
	return false;
}

Boolean UNIX_SystemIdentification::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SystemIdentification::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String objectManagerCreationClassNameKey;
	String objectManagerNameKey;
	String namespaceCreationClassNameKey;
	String namespaceNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME)) objectManagerCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OBJECT_MANAGER_NAME)) objectManagerNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAMESPACE_CREATION_CLASS_NAME)) namespaceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAMESPACE_NAME)) namespaceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getObjectManagerCreationClassName(), objectManagerCreationClassNameKey)) && 
			(String::equalNoCase(getObjectManagerName(), objectManagerNameKey)) && 
			(String::equalNoCase(getNamespaceCreationClassName(), namespaceCreationClassNameKey)) && 
			(String::equalNoCase(getNamespaceName(), namespaceNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SystemIdentification::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemIdentification::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemIdentification::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemIdentification::validateInstance()
{
	return true;
}

