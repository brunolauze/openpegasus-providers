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


UNIX_Namespace::UNIX_Namespace(void)
{
}

UNIX_Namespace::~UNIX_Namespace(void)
{
}

Boolean UNIX_Namespace::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Namespace::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Namespace::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Namespace::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Namespace::getCaption() const
{
	return _caption;
}

void UNIX_Namespace::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Namespace::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Namespace::getDescription() const
{
	return _description;
}

void UNIX_Namespace::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Namespace::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Namespace::getElementName() const
{
	return _elementName;
}

void UNIX_Namespace::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Namespace::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Namespace::getGeneration() const
{
	return _generation;
}

void UNIX_Namespace::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Namespace::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Namespace::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Namespace::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Namespace::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Namespace::getSystemName() const
{
	return _systemName;
}

void UNIX_Namespace::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Namespace::getObjectManagerCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME, getObjectManagerCreationClassName());
	return true;
}

String UNIX_Namespace::getObjectManagerCreationClassName() const
{
	return _objectManagerCreationClassName;
}

void UNIX_Namespace::setObjectManagerCreationClassName(String &value)
{
	_objectManagerCreationClassName = value;
}

Boolean UNIX_Namespace::getObjectManagerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_MANAGER_NAME, getObjectManagerName());
	return true;
}

String UNIX_Namespace::getObjectManagerName() const
{
	return _objectManagerName;
}

void UNIX_Namespace::setObjectManagerName(String &value)
{
	_objectManagerName = value;
}

Boolean UNIX_Namespace::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Namespace::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Namespace::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Namespace::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Namespace::getName() const
{
	return _name;
}

void UNIX_Namespace::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Namespace::getClassInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_INFO, getClassInfo());
	return true;
}

Uint16 UNIX_Namespace::getClassInfo() const
{
	return _classInfo;
}

void UNIX_Namespace::setClassInfo(Uint16 &value)
{
	_classInfo = value;
}

Boolean UNIX_Namespace::getDescriptionOfClassInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION_OF_CLASS_INFO, getDescriptionOfClassInfo());
	return true;
}

String UNIX_Namespace::getDescriptionOfClassInfo() const
{
	return _descriptionOfClassInfo;
}

void UNIX_Namespace::setDescriptionOfClassInfo(String &value)
{
	_descriptionOfClassInfo = value;
}

Boolean UNIX_Namespace::getClassType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_TYPE, getClassType());
	return true;
}

Uint16 UNIX_Namespace::getClassType() const
{
	return _classType;
}

void UNIX_Namespace::setClassType(Uint16 &value)
{
	_classType = value;
}

Boolean UNIX_Namespace::getClassTypeVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_TYPE_VERSION, getClassTypeVersion());
	return true;
}

String UNIX_Namespace::getClassTypeVersion() const
{
	return _classTypeVersion;
}

void UNIX_Namespace::setClassTypeVersion(String &value)
{
	_classTypeVersion = value;
}

Boolean UNIX_Namespace::getDescriptionOfClassType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION_OF_CLASS_TYPE, getDescriptionOfClassType());
	return true;
}

String UNIX_Namespace::getDescriptionOfClassType() const
{
	return _descriptionOfClassType;
}

void UNIX_Namespace::setDescriptionOfClassType(String &value)
{
	_descriptionOfClassType = value;
}


void UNIX_Namespace::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Namespace");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_objectManagerCreationClassName = String ("");
	_objectManagerName = String ("");
	_creationClassName = String("UNIX_Namespace");
	_name = String ("");
	_classInfo = Uint16(0);
	_descriptionOfClassInfo = String ("");
	_classType = Uint16(0);
	_classTypeVersion = String ("");
	_descriptionOfClassType = String ("");

}

Boolean UNIX_Namespace::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ClassInfo"))
			{
				Uint16 classInfoValue;
				property.getValue().get(classInfoValue);
				setClassInfo(classInfoValue);
			}
			else if (String::equal(property.getName().getString(), "DescriptionOfClassInfo"))
			{
				String descriptionOfClassInfoValue;
				property.getValue().get(descriptionOfClassInfoValue);
				setDescriptionOfClassInfo(descriptionOfClassInfoValue);
			}
			else if (String::equal(property.getName().getString(), "ClassType"))
			{
				Uint16 classTypeValue;
				property.getValue().get(classTypeValue);
				setClassType(classTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ClassTypeVersion"))
			{
				String classTypeVersionValue;
				property.getValue().get(classTypeVersionValue);
				setClassTypeVersion(classTypeVersionValue);
			}
			else if (String::equal(property.getName().getString(), "DescriptionOfClassType"))
			{
				String descriptionOfClassTypeValue;
				property.getValue().get(descriptionOfClassTypeValue);
				setDescriptionOfClassType(descriptionOfClassTypeValue);
			}
	}
	return true;
}


Boolean UNIX_Namespace::initialize()
{
	return false;
}

Boolean UNIX_Namespace::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Namespace");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_objectManagerCreationClassName = String ("");
	_objectManagerName = String ("");
	_creationClassName = String("UNIX_Namespace");
	_name = String ("");
	_classInfo = Uint16(0);
	_descriptionOfClassInfo = String ("");
	_classType = Uint16(0);
	_classTypeVersion = String ("");
	_descriptionOfClassType = String ("");
	
	return false;
}

Boolean UNIX_Namespace::finalize()
{
	return false;
}

Boolean UNIX_Namespace::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Namespace::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String objectManagerCreationClassNameKey;
	String objectManagerNameKey;
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
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getObjectManagerCreationClassName(), objectManagerCreationClassNameKey)) && 
			(String::equalNoCase(getObjectManagerName(), objectManagerNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Namespace::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Namespace::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Namespace::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Namespace::validateInstance()
{
	return true;
}

