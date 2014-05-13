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


UNIX_WBEMServerNamespace::UNIX_WBEMServerNamespace(void)
{
}

UNIX_WBEMServerNamespace::~UNIX_WBEMServerNamespace(void)
{
}

Boolean UNIX_WBEMServerNamespace::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WBEMServerNamespace::getInstanceID() const
{
	return _instanceID;
}

void UNIX_WBEMServerNamespace::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_WBEMServerNamespace::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WBEMServerNamespace::getCaption() const
{
	return _caption;
}

void UNIX_WBEMServerNamespace::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_WBEMServerNamespace::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WBEMServerNamespace::getDescription() const
{
	return _description;
}

void UNIX_WBEMServerNamespace::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_WBEMServerNamespace::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WBEMServerNamespace::getElementName() const
{
	return _elementName;
}

void UNIX_WBEMServerNamespace::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_WBEMServerNamespace::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_WBEMServerNamespace::getGeneration() const
{
	return _generation;
}

void UNIX_WBEMServerNamespace::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_WBEMServerNamespace::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_WBEMServerNamespace::getName() const
{
	return _name;
}

void UNIX_WBEMServerNamespace::setName(String &value)
{
	_name = value;
}

Boolean UNIX_WBEMServerNamespace::getSchemaInformation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEMA_INFORMATION, getSchemaInformation());
	return true;
}

Array<String> UNIX_WBEMServerNamespace::getSchemaInformation() const
{
	return _schemaInformation;
}

void UNIX_WBEMServerNamespace::setSchemaInformation(Array<String> &value)
{
	_schemaInformation = value;
}


void UNIX_WBEMServerNamespace::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WBEMServerNamespace");
	_generation = Uint64(0);
	_name = String ("");
	_schemaInformation.clear();

}

Boolean UNIX_WBEMServerNamespace::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "SchemaInformation"))
			{
				Array<String> schemaInformationValue;
				property.getValue().get(schemaInformationValue);
				setSchemaInformation(schemaInformationValue);
			}
	}
	return true;
}


Boolean UNIX_WBEMServerNamespace::initialize()
{
	return false;
}

Boolean UNIX_WBEMServerNamespace::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("WBEMServerNamespace");
	_generation = Uint64(0);
	_name = String ("");
	_schemaInformation.clear();
	
	return false;
}

Boolean UNIX_WBEMServerNamespace::finalize()
{
	return false;
}

Boolean UNIX_WBEMServerNamespace::loadByName(const String name)
{
	return false;
}

Boolean UNIX_WBEMServerNamespace::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_WBEMServerNamespace::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WBEMServerNamespace::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WBEMServerNamespace::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_WBEMServerNamespace::validateInstance()
{
	return true;
}

