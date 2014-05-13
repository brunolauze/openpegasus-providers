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


UNIX_UserContact::UNIX_UserContact(void)
{
}

UNIX_UserContact::~UNIX_UserContact(void)
{
}

Boolean UNIX_UserContact::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UserContact::getInstanceID() const
{
	return _instanceID;
}

void UNIX_UserContact::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_UserContact::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UserContact::getCaption() const
{
	return _caption;
}

void UNIX_UserContact::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_UserContact::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UserContact::getDescription() const
{
	return _description;
}

void UNIX_UserContact::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_UserContact::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UserContact::getElementName() const
{
	return _elementName;
}

void UNIX_UserContact::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_UserContact::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_UserContact::getGeneration() const
{
	return _generation;
}

void UNIX_UserContact::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_UserContact::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_UserContact::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_UserContact::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_UserContact::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UserContact::getName() const
{
	return _name;
}

void UNIX_UserContact::setName(String &value)
{
	_name = value;
}

Boolean UNIX_UserContact::getGivenName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GIVEN_NAME, getGivenName());
	return true;
}

String UNIX_UserContact::getGivenName() const
{
	return _givenName;
}

void UNIX_UserContact::setGivenName(String &value)
{
	_givenName = value;
}

Boolean UNIX_UserContact::getSurname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SURNAME, getSurname());
	return true;
}

String UNIX_UserContact::getSurname() const
{
	return _surname;
}

void UNIX_UserContact::setSurname(String &value)
{
	_surname = value;
}

Boolean UNIX_UserContact::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

String UNIX_UserContact::getMail() const
{
	return _mail;
}

void UNIX_UserContact::setMail(String &value)
{
	_mail = value;
}

Boolean UNIX_UserContact::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_UserContact::getUserID() const
{
	return _userID;
}

void UNIX_UserContact::setUserID(String &value)
{
	_userID = value;
}

Boolean UNIX_UserContact::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

String UNIX_UserContact::getLocalityName() const
{
	return _localityName;
}

void UNIX_UserContact::setLocalityName(String &value)
{
	_localityName = value;
}

Boolean UNIX_UserContact::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_UserContact::getPostalAddress() const
{
	return _postalAddress;
}

void UNIX_UserContact::setPostalAddress(Array<String> &value)
{
	_postalAddress = value;
}

Boolean UNIX_UserContact::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

String UNIX_UserContact::getStateOrProvince() const
{
	return _stateOrProvince;
}

void UNIX_UserContact::setStateOrProvince(String &value)
{
	_stateOrProvince = value;
}

Boolean UNIX_UserContact::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

String UNIX_UserContact::getPostalCode() const
{
	return _postalCode;
}

void UNIX_UserContact::setPostalCode(String &value)
{
	_postalCode = value;
}

Boolean UNIX_UserContact::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

String UNIX_UserContact::getTelephoneNumber() const
{
	return _telephoneNumber;
}

void UNIX_UserContact::setTelephoneNumber(String &value)
{
	_telephoneNumber = value;
}


void UNIX_UserContact::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("UserContact");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_UserContact");
	_name = String ("");
	_givenName = String ("");
	_surname = String ("");
	_mail = String ("");
	_userID = String ("");
	_localityName = String ("");
	_postalAddress.clear();
	_stateOrProvince = String ("");
	_postalCode = String ("");
	_telephoneNumber = String ("");

}

Boolean UNIX_UserContact::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "GivenName"))
			{
				String givenNameValue;
				property.getValue().get(givenNameValue);
				setGivenName(givenNameValue);
			}
			else if (String::equal(property.getName().getString(), "Surname"))
			{
				String surnameValue;
				property.getValue().get(surnameValue);
				setSurname(surnameValue);
			}
			else if (String::equal(property.getName().getString(), "Mail"))
			{
				String mailValue;
				property.getValue().get(mailValue);
				setMail(mailValue);
			}
			else if (String::equal(property.getName().getString(), "UserID"))
			{
				String userIDValue;
				property.getValue().get(userIDValue);
				setUserID(userIDValue);
			}
			else if (String::equal(property.getName().getString(), "LocalityName"))
			{
				String localityNameValue;
				property.getValue().get(localityNameValue);
				setLocalityName(localityNameValue);
			}
			else if (String::equal(property.getName().getString(), "PostalAddress"))
			{
				Array<String> postalAddressValue;
				property.getValue().get(postalAddressValue);
				setPostalAddress(postalAddressValue);
			}
			else if (String::equal(property.getName().getString(), "StateOrProvince"))
			{
				String stateOrProvinceValue;
				property.getValue().get(stateOrProvinceValue);
				setStateOrProvince(stateOrProvinceValue);
			}
			else if (String::equal(property.getName().getString(), "PostalCode"))
			{
				String postalCodeValue;
				property.getValue().get(postalCodeValue);
				setPostalCode(postalCodeValue);
			}
			else if (String::equal(property.getName().getString(), "TelephoneNumber"))
			{
				String telephoneNumberValue;
				property.getValue().get(telephoneNumberValue);
				setTelephoneNumber(telephoneNumberValue);
			}
	}
	return true;
}


Boolean UNIX_UserContact::initialize()
{
	return false;
}

Boolean UNIX_UserContact::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("UserContact");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_UserContact");
	_name = String ("");
	_givenName = String ("");
	_surname = String ("");
	_mail = String ("");
	_userID = String ("");
	_localityName = String ("");
	_postalAddress.clear();
	_stateOrProvince = String ("");
	_postalCode = String ("");
	_telephoneNumber = String ("");
	
	return false;
}

Boolean UNIX_UserContact::finalize()
{
	return false;
}

Boolean UNIX_UserContact::loadByName(const String name)
{
	return false;
}

Boolean UNIX_UserContact::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_UserContact::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UserContact::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UserContact::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UserContact::validateInstance()
{
	return true;
}

