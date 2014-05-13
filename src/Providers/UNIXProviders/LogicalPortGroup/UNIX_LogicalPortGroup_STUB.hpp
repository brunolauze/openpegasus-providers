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


UNIX_LogicalPortGroup::UNIX_LogicalPortGroup(void)
{
}

UNIX_LogicalPortGroup::~UNIX_LogicalPortGroup(void)
{
}

Boolean UNIX_LogicalPortGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LogicalPortGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LogicalPortGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LogicalPortGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LogicalPortGroup::getCaption() const
{
	return _caption;
}

void UNIX_LogicalPortGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LogicalPortGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LogicalPortGroup::getDescription() const
{
	return _description;
}

void UNIX_LogicalPortGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LogicalPortGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LogicalPortGroup::getElementName() const
{
	return _elementName;
}

void UNIX_LogicalPortGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LogicalPortGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LogicalPortGroup::getGeneration() const
{
	return _generation;
}

void UNIX_LogicalPortGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LogicalPortGroup::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LogicalPortGroup::getName() const
{
	return _name;
}

void UNIX_LogicalPortGroup::setName(String &value)
{
	_name = value;
}

Boolean UNIX_LogicalPortGroup::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_LogicalPortGroup::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_LogicalPortGroup::setNameFormat(String &value)
{
	_nameFormat = value;
}

Boolean UNIX_LogicalPortGroup::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_LogicalPortGroup::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_LogicalPortGroup::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}


void UNIX_LogicalPortGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LogicalPortGroup");
	_generation = Uint64(0);
	_name = String ("");
	_nameFormat = String ("");
	_otherNameFormat = String ("");

}

Boolean UNIX_LogicalPortGroup::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NameFormat"))
			{
				String nameFormatValue;
				property.getValue().get(nameFormatValue);
				setNameFormat(nameFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherNameFormat"))
			{
				String otherNameFormatValue;
				property.getValue().get(otherNameFormatValue);
				setOtherNameFormat(otherNameFormatValue);
			}
	}
	return true;
}


Boolean UNIX_LogicalPortGroup::initialize()
{
	return false;
}

Boolean UNIX_LogicalPortGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LogicalPortGroup");
	_generation = Uint64(0);
	_name = String ("");
	_nameFormat = String ("");
	_otherNameFormat = String ("");
	
	return false;
}

Boolean UNIX_LogicalPortGroup::finalize()
{
	return false;
}

Boolean UNIX_LogicalPortGroup::loadByName(const String name)
{
	return false;
}

Boolean UNIX_LogicalPortGroup::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LogicalPortGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalPortGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalPortGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalPortGroup::validateInstance()
{
	return true;
}

