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


UNIX_RemoteIdentity::UNIX_RemoteIdentity(void)
{
}

UNIX_RemoteIdentity::~UNIX_RemoteIdentity(void)
{
}

Boolean UNIX_RemoteIdentity::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RemoteIdentity::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RemoteIdentity::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RemoteIdentity::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RemoteIdentity::getCaption() const
{
	return _caption;
}

void UNIX_RemoteIdentity::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RemoteIdentity::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RemoteIdentity::getDescription() const
{
	return _description;
}

void UNIX_RemoteIdentity::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RemoteIdentity::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RemoteIdentity::getElementName() const
{
	return _elementName;
}

void UNIX_RemoteIdentity::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RemoteIdentity::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RemoteIdentity::getGeneration() const
{
	return _generation;
}

void UNIX_RemoteIdentity::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RemoteIdentity::getCurrentlyAuthenticated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_AUTHENTICATED, getCurrentlyAuthenticated());
	return true;
}

Boolean UNIX_RemoteIdentity::getCurrentlyAuthenticated() const
{
	return _currentlyAuthenticated;
}

void UNIX_RemoteIdentity::setCurrentlyAuthenticated(Boolean &value)
{
	_currentlyAuthenticated = value;
}

Boolean UNIX_RemoteIdentity::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

Array<Uint8> UNIX_RemoteIdentity::getName() const
{
	return _name;
}

void UNIX_RemoteIdentity::setName(Array<Uint8> &value)
{
	_name = value;
}

Boolean UNIX_RemoteIdentity::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_RemoteIdentity::getNameFormat() const
{
	return _nameFormat;
}

void UNIX_RemoteIdentity::setNameFormat(Uint16 &value)
{
	_nameFormat = value;
}

Boolean UNIX_RemoteIdentity::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_RemoteIdentity::getOtherNameFormat() const
{
	return _otherNameFormat;
}

void UNIX_RemoteIdentity::setOtherNameFormat(String &value)
{
	_otherNameFormat = value;
}


void UNIX_RemoteIdentity::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RemoteIdentity");
	_generation = Uint64(0);
	_currentlyAuthenticated = Boolean(false);
	_name.clear();
	_nameFormat = Uint16(0);
	_otherNameFormat = String ("");

}

Boolean UNIX_RemoteIdentity::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentlyAuthenticated"))
			{
				Boolean currentlyAuthenticatedValue;
				property.getValue().get(currentlyAuthenticatedValue);
				setCurrentlyAuthenticated(currentlyAuthenticatedValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				Array<Uint8> nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "NameFormat"))
			{
				Uint16 nameFormatValue;
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


Boolean UNIX_RemoteIdentity::initialize()
{
	return false;
}

Boolean UNIX_RemoteIdentity::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RemoteIdentity");
	_generation = Uint64(0);
	_currentlyAuthenticated = Boolean(false);
	_name.clear();
	_nameFormat = Uint16(0);
	_otherNameFormat = String ("");
	
	return false;
}

Boolean UNIX_RemoteIdentity::finalize()
{
	return false;
}

Boolean UNIX_RemoteIdentity::loadByName(const String name)
{
	return false;
}

Boolean UNIX_RemoteIdentity::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RemoteIdentity::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteIdentity::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteIdentity::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteIdentity::validateInstance()
{
	return true;
}

