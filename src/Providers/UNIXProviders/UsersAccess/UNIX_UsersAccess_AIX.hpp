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


UNIX_UsersAccess::UNIX_UsersAccess(void)
{
}

UNIX_UsersAccess::~UNIX_UsersAccess(void)
{
}

Boolean UNIX_UsersAccess::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UsersAccess::getInstanceID() const
{
	return _instanceID;
}

void UNIX_UsersAccess::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_UsersAccess::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UsersAccess::getCaption() const
{
	return _caption;
}

void UNIX_UsersAccess::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_UsersAccess::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UsersAccess::getDescription() const
{
	return _description;
}

void UNIX_UsersAccess::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_UsersAccess::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UsersAccess::getElementName() const
{
	return _elementName;
}

void UNIX_UsersAccess::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_UsersAccess::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_UsersAccess::getGeneration() const
{
	return _generation;
}

void UNIX_UsersAccess::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_UsersAccess::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_UsersAccess::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_UsersAccess::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_UsersAccess::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UsersAccess::getName() const
{
	return _name;
}

void UNIX_UsersAccess::setName(String &value)
{
	_name = value;
}

Boolean UNIX_UsersAccess::getElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_ID, getElementID());
	return true;
}

String UNIX_UsersAccess::getElementID() const
{
	return _elementID;
}

void UNIX_UsersAccess::setElementID(String &value)
{
	_elementID = value;
}

Boolean UNIX_UsersAccess::getBiometric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BIOMETRIC, getBiometric());
	return true;
}

Array<Uint16> UNIX_UsersAccess::getBiometric() const
{
	return _biometric;
}

void UNIX_UsersAccess::setBiometric(Array<Uint16> &value)
{
	_biometric = value;
}


void UNIX_UsersAccess::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("UsersAccess");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_UsersAccess");
	_name = String ("");
	_elementID = String ("");
	_biometric.clear();

}

Boolean UNIX_UsersAccess::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementID"))
			{
				String elementIDValue;
				property.getValue().get(elementIDValue);
				setElementID(elementIDValue);
			}
			else if (String::equal(property.getName().getString(), "Biometric"))
			{
				Array<Uint16> biometricValue;
				property.getValue().get(biometricValue);
				setBiometric(biometricValue);
			}
	}
	return true;
}


Boolean UNIX_UsersAccess::initialize()
{
	return false;
}

Boolean UNIX_UsersAccess::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("UsersAccess");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_UsersAccess");
	_name = String ("");
	_elementID = String ("");
	_biometric.clear();
	
	return false;
}

Boolean UNIX_UsersAccess::finalize()
{
	return false;
}

Boolean UNIX_UsersAccess::loadByName(const String name)
{
	return false;
}

Boolean UNIX_UsersAccess::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;
	String elementIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ELEMENT_ID)) elementIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)) && 
			(String::equalNoCase(getElementID(), elementIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_UsersAccess::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UsersAccess::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UsersAccess::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UsersAccess::validateInstance()
{
	return true;
}

