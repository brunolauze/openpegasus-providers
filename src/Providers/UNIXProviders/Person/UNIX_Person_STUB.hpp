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


UNIX_Person::UNIX_Person(void)
{
}

UNIX_Person::~UNIX_Person(void)
{
}

Boolean UNIX_Person::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Person::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Person::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Person::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Person::getCaption() const
{
	return _caption;
}

void UNIX_Person::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Person::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Person::getDescription() const
{
	return _description;
}

void UNIX_Person::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Person::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Person::getElementName() const
{
	return _elementName;
}

void UNIX_Person::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Person::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Person::getGeneration() const
{
	return _generation;
}

void UNIX_Person::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Person::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Person::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Person::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Person::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Person::getName() const
{
	return _name;
}

void UNIX_Person::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Person::getGivenName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GIVEN_NAME, getGivenName());
	return true;
}

String UNIX_Person::getGivenName() const
{
	return _givenName;
}

void UNIX_Person::setGivenName(String &value)
{
	_givenName = value;
}

Boolean UNIX_Person::getSurname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SURNAME, getSurname());
	return true;
}

String UNIX_Person::getSurname() const
{
	return _surname;
}

void UNIX_Person::setSurname(String &value)
{
	_surname = value;
}

Boolean UNIX_Person::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

String UNIX_Person::getMail() const
{
	return _mail;
}

void UNIX_Person::setMail(String &value)
{
	_mail = value;
}

Boolean UNIX_Person::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_Person::getUserID() const
{
	return _userID;
}

void UNIX_Person::setUserID(String &value)
{
	_userID = value;
}

Boolean UNIX_Person::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

String UNIX_Person::getLocalityName() const
{
	return _localityName;
}

void UNIX_Person::setLocalityName(String &value)
{
	_localityName = value;
}

Boolean UNIX_Person::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_Person::getPostalAddress() const
{
	return _postalAddress;
}

void UNIX_Person::setPostalAddress(Array<String> &value)
{
	_postalAddress = value;
}

Boolean UNIX_Person::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

String UNIX_Person::getStateOrProvince() const
{
	return _stateOrProvince;
}

void UNIX_Person::setStateOrProvince(String &value)
{
	_stateOrProvince = value;
}

Boolean UNIX_Person::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

String UNIX_Person::getPostalCode() const
{
	return _postalCode;
}

void UNIX_Person::setPostalCode(String &value)
{
	_postalCode = value;
}

Boolean UNIX_Person::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

String UNIX_Person::getTelephoneNumber() const
{
	return _telephoneNumber;
}

void UNIX_Person::setTelephoneNumber(String &value)
{
	_telephoneNumber = value;
}

Boolean UNIX_Person::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

String UNIX_Person::getBusinessCategory() const
{
	return _businessCategory;
}

void UNIX_Person::setBusinessCategory(String &value)
{
	_businessCategory = value;
}

Boolean UNIX_Person::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_Person::getCommonName() const
{
	return _commonName;
}

void UNIX_Person::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_Person::getEmployeeNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMPLOYEE_NUMBER, getEmployeeNumber());
	return true;
}

String UNIX_Person::getEmployeeNumber() const
{
	return _employeeNumber;
}

void UNIX_Person::setEmployeeNumber(String &value)
{
	_employeeNumber = value;
}

Boolean UNIX_Person::getEmployeeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMPLOYEE_TYPE, getEmployeeType());
	return true;
}

String UNIX_Person::getEmployeeType() const
{
	return _employeeType;
}

void UNIX_Person::setEmployeeType(String &value)
{
	_employeeType = value;
}

Boolean UNIX_Person::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

String UNIX_Person::getFacsimileTelephoneNumber() const
{
	return _facsimileTelephoneNumber;
}

void UNIX_Person::setFacsimileTelephoneNumber(String &value)
{
	_facsimileTelephoneNumber = value;
}

Boolean UNIX_Person::getHomePhone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_PHONE, getHomePhone());
	return true;
}

String UNIX_Person::getHomePhone() const
{
	return _homePhone;
}

void UNIX_Person::setHomePhone(String &value)
{
	_homePhone = value;
}

Boolean UNIX_Person::getHomePostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_POSTAL_ADDRESS, getHomePostalAddress());
	return true;
}

Array<String> UNIX_Person::getHomePostalAddress() const
{
	return _homePostalAddress;
}

void UNIX_Person::setHomePostalAddress(Array<String> &value)
{
	_homePostalAddress = value;
}

Boolean UNIX_Person::getJPEGPhoto(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_J_P_E_G_PHOTO, getJPEGPhoto());
	return true;
}

String UNIX_Person::getJPEGPhoto() const
{
	return _jPEGPhoto;
}

void UNIX_Person::setJPEGPhoto(String &value)
{
	_jPEGPhoto = value;
}

Boolean UNIX_Person::getManager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGER, getManager());
	return true;
}

String UNIX_Person::getManager() const
{
	return _manager;
}

void UNIX_Person::setManager(String &value)
{
	_manager = value;
}

Boolean UNIX_Person::getMobile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOBILE, getMobile());
	return true;
}

String UNIX_Person::getMobile() const
{
	return _mobile;
}

void UNIX_Person::setMobile(String &value)
{
	_mobile = value;
}

Boolean UNIX_Person::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OU, getOU());
	return true;
}

String UNIX_Person::getOU() const
{
	return _oU;
}

void UNIX_Person::setOU(String &value)
{
	_oU = value;
}

Boolean UNIX_Person::getPager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGER, getPager());
	return true;
}

String UNIX_Person::getPager() const
{
	return _pager;
}

void UNIX_Person::setPager(String &value)
{
	_pager = value;
}

Boolean UNIX_Person::getPreferredLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_LANGUAGE, getPreferredLanguage());
	return true;
}

String UNIX_Person::getPreferredLanguage() const
{
	return _preferredLanguage;
}

void UNIX_Person::setPreferredLanguage(String &value)
{
	_preferredLanguage = value;
}

Boolean UNIX_Person::getSecretary(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECRETARY, getSecretary());
	return true;
}

String UNIX_Person::getSecretary() const
{
	return _secretary;
}

void UNIX_Person::setSecretary(String &value)
{
	_secretary = value;
}

Boolean UNIX_Person::getTitle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TITLE, getTitle());
	return true;
}

String UNIX_Person::getTitle() const
{
	return _title;
}

void UNIX_Person::setTitle(String &value)
{
	_title = value;
}


void UNIX_Person::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Person");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_Person");
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
	_businessCategory = String ("");
	_commonName = String ("");
	_employeeNumber = String ("");
	_employeeType = String ("");
	_facsimileTelephoneNumber = String ("");
	_homePhone = String ("");
	_homePostalAddress.clear();
	_jPEGPhoto = String ("");
	_manager = String ("");
	_mobile = String ("");
	_oU = String ("");
	_pager = String ("");
	_preferredLanguage = String ("");
	_secretary = String ("");
	_title = String ("");

}

Boolean UNIX_Person::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BusinessCategory"))
			{
				String businessCategoryValue;
				property.getValue().get(businessCategoryValue);
				setBusinessCategory(businessCategoryValue);
			}
			else if (String::equal(property.getName().getString(), "CommonName"))
			{
				String commonNameValue;
				property.getValue().get(commonNameValue);
				setCommonName(commonNameValue);
			}
			else if (String::equal(property.getName().getString(), "EmployeeNumber"))
			{
				String employeeNumberValue;
				property.getValue().get(employeeNumberValue);
				setEmployeeNumber(employeeNumberValue);
			}
			else if (String::equal(property.getName().getString(), "EmployeeType"))
			{
				String employeeTypeValue;
				property.getValue().get(employeeTypeValue);
				setEmployeeType(employeeTypeValue);
			}
			else if (String::equal(property.getName().getString(), "FacsimileTelephoneNumber"))
			{
				String facsimileTelephoneNumberValue;
				property.getValue().get(facsimileTelephoneNumberValue);
				setFacsimileTelephoneNumber(facsimileTelephoneNumberValue);
			}
			else if (String::equal(property.getName().getString(), "HomePhone"))
			{
				String homePhoneValue;
				property.getValue().get(homePhoneValue);
				setHomePhone(homePhoneValue);
			}
			else if (String::equal(property.getName().getString(), "HomePostalAddress"))
			{
				Array<String> homePostalAddressValue;
				property.getValue().get(homePostalAddressValue);
				setHomePostalAddress(homePostalAddressValue);
			}
			else if (String::equal(property.getName().getString(), "JPEGPhoto"))
			{
				String jPEGPhotoValue;
				property.getValue().get(jPEGPhotoValue);
				setJPEGPhoto(jPEGPhotoValue);
			}
			else if (String::equal(property.getName().getString(), "Manager"))
			{
				String managerValue;
				property.getValue().get(managerValue);
				setManager(managerValue);
			}
			else if (String::equal(property.getName().getString(), "Mobile"))
			{
				String mobileValue;
				property.getValue().get(mobileValue);
				setMobile(mobileValue);
			}
			else if (String::equal(property.getName().getString(), "OU"))
			{
				String oUValue;
				property.getValue().get(oUValue);
				setOU(oUValue);
			}
			else if (String::equal(property.getName().getString(), "Pager"))
			{
				String pagerValue;
				property.getValue().get(pagerValue);
				setPager(pagerValue);
			}
			else if (String::equal(property.getName().getString(), "PreferredLanguage"))
			{
				String preferredLanguageValue;
				property.getValue().get(preferredLanguageValue);
				setPreferredLanguage(preferredLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "Secretary"))
			{
				String secretaryValue;
				property.getValue().get(secretaryValue);
				setSecretary(secretaryValue);
			}
			else if (String::equal(property.getName().getString(), "Title"))
			{
				String titleValue;
				property.getValue().get(titleValue);
				setTitle(titleValue);
			}
	}
	return true;
}


Boolean UNIX_Person::initialize()
{
	return false;
}

Boolean UNIX_Person::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Person");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_Person");
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
	_businessCategory = String ("");
	_commonName = String ("");
	_employeeNumber = String ("");
	_employeeType = String ("");
	_facsimileTelephoneNumber = String ("");
	_homePhone = String ("");
	_homePostalAddress.clear();
	_jPEGPhoto = String ("");
	_manager = String ("");
	_mobile = String ("");
	_oU = String ("");
	_pager = String ("");
	_preferredLanguage = String ("");
	_secretary = String ("");
	_title = String ("");
	
	return false;
}

Boolean UNIX_Person::finalize()
{
	return false;
}

Boolean UNIX_Person::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Person::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Person::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Person::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Person::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Person::validateInstance()
{
	return true;
}

