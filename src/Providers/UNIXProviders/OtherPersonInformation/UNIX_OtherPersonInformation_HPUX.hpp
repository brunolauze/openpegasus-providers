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


UNIX_OtherPersonInformation::UNIX_OtherPersonInformation(void)
{
}

UNIX_OtherPersonInformation::~UNIX_OtherPersonInformation(void)
{
}

Boolean UNIX_OtherPersonInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherPersonInformation::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OtherPersonInformation::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OtherPersonInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherPersonInformation::getCaption() const
{
	return _caption;
}

void UNIX_OtherPersonInformation::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OtherPersonInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherPersonInformation::getDescription() const
{
	return _description;
}

void UNIX_OtherPersonInformation::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OtherPersonInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherPersonInformation::getElementName() const
{
	return _elementName;
}

void UNIX_OtherPersonInformation::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OtherPersonInformation::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OtherPersonInformation::getGeneration() const
{
	return _generation;
}

void UNIX_OtherPersonInformation::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OtherPersonInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherPersonInformation::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OtherPersonInformation::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OtherPersonInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherPersonInformation::getName() const
{
	return _name;
}

void UNIX_OtherPersonInformation::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OtherPersonInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getObjectClass() const
{
	return _objectClass;
}

void UNIX_OtherPersonInformation::setObjectClass(Array<String> &value)
{
	_objectClass = value;
}

Boolean UNIX_OtherPersonInformation::getAudio(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIO, getAudio());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getAudio() const
{
	return _audio;
}

void UNIX_OtherPersonInformation::setAudio(Array<String> &value)
{
	_audio = value;
}

Boolean UNIX_OtherPersonInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getBusinessCategory() const
{
	return _businessCategory;
}

void UNIX_OtherPersonInformation::setBusinessCategory(Array<String> &value)
{
	_businessCategory = value;
}

Boolean UNIX_OtherPersonInformation::getCarLicense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAR_LICENSE, getCarLicense());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getCarLicense() const
{
	return _carLicense;
}

void UNIX_OtherPersonInformation::setCarLicense(Array<String> &value)
{
	_carLicense = value;
}

Boolean UNIX_OtherPersonInformation::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getCommonName() const
{
	return _commonName;
}

void UNIX_OtherPersonInformation::setCommonName(Array<String> &value)
{
	_commonName = value;
}

Boolean UNIX_OtherPersonInformation::getCountryName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRY_NAME, getCountryName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getCountryName() const
{
	return _countryName;
}

void UNIX_OtherPersonInformation::setCountryName(Array<String> &value)
{
	_countryName = value;
}

Boolean UNIX_OtherPersonInformation::getDepartmentNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPARTMENT_NUMBER, getDepartmentNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getDepartmentNumber() const
{
	return _departmentNumber;
}

void UNIX_OtherPersonInformation::setDepartmentNumber(Array<String> &value)
{
	_departmentNumber = value;
}

Boolean UNIX_OtherPersonInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getDescriptions() const
{
	return _descriptions;
}

void UNIX_OtherPersonInformation::setDescriptions(Array<String> &value)
{
	_descriptions = value;
}

Boolean UNIX_OtherPersonInformation::getDestinationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_INDICATOR, getDestinationIndicator());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getDestinationIndicator() const
{
	return _destinationIndicator;
}

void UNIX_OtherPersonInformation::setDestinationIndicator(Array<String> &value)
{
	_destinationIndicator = value;
}

Boolean UNIX_OtherPersonInformation::getDisplayName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_NAME, getDisplayName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getDisplayName() const
{
	return _displayName;
}

void UNIX_OtherPersonInformation::setDisplayName(Array<String> &value)
{
	_displayName = value;
}

Boolean UNIX_OtherPersonInformation::getEmployeeNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMPLOYEE_NUMBER, getEmployeeNumber());
	return true;
}

String UNIX_OtherPersonInformation::getEmployeeNumber() const
{
	return _employeeNumber;
}

void UNIX_OtherPersonInformation::setEmployeeNumber(String &value)
{
	_employeeNumber = value;
}

Boolean UNIX_OtherPersonInformation::getEmployeeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMPLOYEE_TYPE, getEmployeeType());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getEmployeeType() const
{
	return _employeeType;
}

void UNIX_OtherPersonInformation::setEmployeeType(Array<String> &value)
{
	_employeeType = value;
}

Boolean UNIX_OtherPersonInformation::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getFacsimileTelephoneNumber() const
{
	return _facsimileTelephoneNumber;
}

void UNIX_OtherPersonInformation::setFacsimileTelephoneNumber(Array<String> &value)
{
	_facsimileTelephoneNumber = value;
}

Boolean UNIX_OtherPersonInformation::getGenerationQualifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION_QUALIFIER, getGenerationQualifier());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getGenerationQualifier() const
{
	return _generationQualifier;
}

void UNIX_OtherPersonInformation::setGenerationQualifier(Array<String> &value)
{
	_generationQualifier = value;
}

Boolean UNIX_OtherPersonInformation::getGivenName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GIVEN_NAME, getGivenName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getGivenName() const
{
	return _givenName;
}

void UNIX_OtherPersonInformation::setGivenName(Array<String> &value)
{
	_givenName = value;
}

Boolean UNIX_OtherPersonInformation::getHomeFax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_FAX, getHomeFax());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getHomeFax() const
{
	return _homeFax;
}

void UNIX_OtherPersonInformation::setHomeFax(Array<String> &value)
{
	_homeFax = value;
}

Boolean UNIX_OtherPersonInformation::getHomePhone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_PHONE, getHomePhone());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getHomePhone() const
{
	return _homePhone;
}

void UNIX_OtherPersonInformation::setHomePhone(Array<String> &value)
{
	_homePhone = value;
}

Boolean UNIX_OtherPersonInformation::getHomePostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_POSTAL_ADDRESS, getHomePostalAddress());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getHomePostalAddress() const
{
	return _homePostalAddress;
}

void UNIX_OtherPersonInformation::setHomePostalAddress(Array<String> &value)
{
	_homePostalAddress = value;
}

Boolean UNIX_OtherPersonInformation::getInitials(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIALS, getInitials());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getInitials() const
{
	return _initials;
}

void UNIX_OtherPersonInformation::setInitials(Array<String> &value)
{
	_initials = value;
}

Boolean UNIX_OtherPersonInformation::getInternationaliSDNNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNATIONALI_S_D_N_NUMBER, getInternationaliSDNNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getInternationaliSDNNumber() const
{
	return _internationaliSDNNumber;
}

void UNIX_OtherPersonInformation::setInternationaliSDNNumber(Array<String> &value)
{
	_internationaliSDNNumber = value;
}

Boolean UNIX_OtherPersonInformation::getJPEGPhoto(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_J_P_E_G_PHOTO, getJPEGPhoto());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getJPEGPhoto() const
{
	return _jPEGPhoto;
}

void UNIX_OtherPersonInformation::setJPEGPhoto(Array<String> &value)
{
	_jPEGPhoto = value;
}

Boolean UNIX_OtherPersonInformation::getLabeledURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABELED_U_R_I, getLabeledURI());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getLabeledURI() const
{
	return _labeledURI;
}

void UNIX_OtherPersonInformation::setLabeledURI(Array<String> &value)
{
	_labeledURI = value;
}

Boolean UNIX_OtherPersonInformation::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getLocalityName() const
{
	return _localityName;
}

void UNIX_OtherPersonInformation::setLocalityName(Array<String> &value)
{
	_localityName = value;
}

Boolean UNIX_OtherPersonInformation::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getMail() const
{
	return _mail;
}

void UNIX_OtherPersonInformation::setMail(Array<String> &value)
{
	_mail = value;
}

Boolean UNIX_OtherPersonInformation::getManager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGER, getManager());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getManager() const
{
	return _manager;
}

void UNIX_OtherPersonInformation::setManager(Array<String> &value)
{
	_manager = value;
}

Boolean UNIX_OtherPersonInformation::getMiddleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIDDLE_NAME, getMiddleName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getMiddleName() const
{
	return _middleName;
}

void UNIX_OtherPersonInformation::setMiddleName(Array<String> &value)
{
	_middleName = value;
}

Boolean UNIX_OtherPersonInformation::getMobile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOBILE, getMobile());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getMobile() const
{
	return _mobile;
}

void UNIX_OtherPersonInformation::setMobile(Array<String> &value)
{
	_mobile = value;
}

Boolean UNIX_OtherPersonInformation::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getOrganizationName() const
{
	return _organizationName;
}

void UNIX_OtherPersonInformation::setOrganizationName(Array<String> &value)
{
	_organizationName = value;
}

Boolean UNIX_OtherPersonInformation::getOrganizationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATIONAL_STATUS, getOrganizationalStatus());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getOrganizationalStatus() const
{
	return _organizationalStatus;
}

void UNIX_OtherPersonInformation::setOrganizationalStatus(Array<String> &value)
{
	_organizationalStatus = value;
}

Boolean UNIX_OtherPersonInformation::getOtherMailbox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MAILBOX, getOtherMailbox());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getOtherMailbox() const
{
	return _otherMailbox;
}

void UNIX_OtherPersonInformation::setOtherMailbox(Array<String> &value)
{
	_otherMailbox = value;
}

Boolean UNIX_OtherPersonInformation::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OU, getOU());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getOU() const
{
	return _oU;
}

void UNIX_OtherPersonInformation::setOU(Array<String> &value)
{
	_oU = value;
}

Boolean UNIX_OtherPersonInformation::getPager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGER, getPager());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPager() const
{
	return _pager;
}

void UNIX_OtherPersonInformation::setPager(Array<String> &value)
{
	_pager = value;
}

Boolean UNIX_OtherPersonInformation::getPersonalTitle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSONAL_TITLE, getPersonalTitle());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPersonalTitle() const
{
	return _personalTitle;
}

void UNIX_OtherPersonInformation::setPersonalTitle(Array<String> &value)
{
	_personalTitle = value;
}

Boolean UNIX_OtherPersonInformation::getPhoto(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHOTO, getPhoto());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPhoto() const
{
	return _photo;
}

void UNIX_OtherPersonInformation::setPhoto(Array<String> &value)
{
	_photo = value;
}

Boolean UNIX_OtherPersonInformation::getPhysicalDeliveryOfficeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME, getPhysicalDeliveryOfficeName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPhysicalDeliveryOfficeName() const
{
	return _physicalDeliveryOfficeName;
}

void UNIX_OtherPersonInformation::setPhysicalDeliveryOfficeName(Array<String> &value)
{
	_physicalDeliveryOfficeName = value;
}

Boolean UNIX_OtherPersonInformation::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPostalAddress() const
{
	return _postalAddress;
}

void UNIX_OtherPersonInformation::setPostalAddress(Array<String> &value)
{
	_postalAddress = value;
}

Boolean UNIX_OtherPersonInformation::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPostalCode() const
{
	return _postalCode;
}

void UNIX_OtherPersonInformation::setPostalCode(Array<String> &value)
{
	_postalCode = value;
}

Boolean UNIX_OtherPersonInformation::getPostOfficeBox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POST_OFFICE_BOX, getPostOfficeBox());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPostOfficeBox() const
{
	return _postOfficeBox;
}

void UNIX_OtherPersonInformation::setPostOfficeBox(Array<String> &value)
{
	_postOfficeBox = value;
}

Boolean UNIX_OtherPersonInformation::getPreferredDeliveryMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_DELIVERY_METHOD, getPreferredDeliveryMethod());
	return true;
}

String UNIX_OtherPersonInformation::getPreferredDeliveryMethod() const
{
	return _preferredDeliveryMethod;
}

void UNIX_OtherPersonInformation::setPreferredDeliveryMethod(String &value)
{
	_preferredDeliveryMethod = value;
}

Boolean UNIX_OtherPersonInformation::getPreferredLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_LANGUAGE, getPreferredLanguage());
	return true;
}

String UNIX_OtherPersonInformation::getPreferredLanguage() const
{
	return _preferredLanguage;
}

void UNIX_OtherPersonInformation::setPreferredLanguage(String &value)
{
	_preferredLanguage = value;
}

Boolean UNIX_OtherPersonInformation::getRegisteredAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_ADDRESS, getRegisteredAddress());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getRegisteredAddress() const
{
	return _registeredAddress;
}

void UNIX_OtherPersonInformation::setRegisteredAddress(Array<String> &value)
{
	_registeredAddress = value;
}

Boolean UNIX_OtherPersonInformation::getRoomNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOM_NUMBER, getRoomNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getRoomNumber() const
{
	return _roomNumber;
}

void UNIX_OtherPersonInformation::setRoomNumber(Array<String> &value)
{
	_roomNumber = value;
}

Boolean UNIX_OtherPersonInformation::getSecretary(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECRETARY, getSecretary());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getSecretary() const
{
	return _secretary;
}

void UNIX_OtherPersonInformation::setSecretary(Array<String> &value)
{
	_secretary = value;
}

Boolean UNIX_OtherPersonInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getSeeAlso() const
{
	return _seeAlso;
}

void UNIX_OtherPersonInformation::setSeeAlso(Array<String> &value)
{
	_seeAlso = value;
}

Boolean UNIX_OtherPersonInformation::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getStateOrProvince() const
{
	return _stateOrProvince;
}

void UNIX_OtherPersonInformation::setStateOrProvince(Array<String> &value)
{
	_stateOrProvince = value;
}

Boolean UNIX_OtherPersonInformation::getStreet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STREET, getStreet());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getStreet() const
{
	return _street;
}

void UNIX_OtherPersonInformation::setStreet(Array<String> &value)
{
	_street = value;
}

Boolean UNIX_OtherPersonInformation::getSurname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SURNAME, getSurname());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getSurname() const
{
	return _surname;
}

void UNIX_OtherPersonInformation::setSurname(Array<String> &value)
{
	_surname = value;
}

Boolean UNIX_OtherPersonInformation::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getTelephoneNumber() const
{
	return _telephoneNumber;
}

void UNIX_OtherPersonInformation::setTelephoneNumber(Array<String> &value)
{
	_telephoneNumber = value;
}

Boolean UNIX_OtherPersonInformation::getTeletexTerminalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELETEX_TERMINAL_IDENTIFIER, getTeletexTerminalIdentifier());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getTeletexTerminalIdentifier() const
{
	return _teletexTerminalIdentifier;
}

void UNIX_OtherPersonInformation::setTeletexTerminalIdentifier(Array<String> &value)
{
	_teletexTerminalIdentifier = value;
}

Boolean UNIX_OtherPersonInformation::getTelexNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEX_NUMBER, getTelexNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getTelexNumber() const
{
	return _telexNumber;
}

void UNIX_OtherPersonInformation::setTelexNumber(Array<String> &value)
{
	_telexNumber = value;
}

Boolean UNIX_OtherPersonInformation::getThumbnailLogo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THUMBNAIL_LOGO, getThumbnailLogo());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getThumbnailLogo() const
{
	return _thumbnailLogo;
}

void UNIX_OtherPersonInformation::setThumbnailLogo(Array<String> &value)
{
	_thumbnailLogo = value;
}

Boolean UNIX_OtherPersonInformation::getThumbnailPhoto(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THUMBNAIL_PHOTO, getThumbnailPhoto());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getThumbnailPhoto() const
{
	return _thumbnailPhoto;
}

void UNIX_OtherPersonInformation::setThumbnailPhoto(Array<String> &value)
{
	_thumbnailPhoto = value;
}

Boolean UNIX_OtherPersonInformation::getTitle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TITLE, getTitle());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getTitle() const
{
	return _title;
}

void UNIX_OtherPersonInformation::setTitle(Array<String> &value)
{
	_title = value;
}

Boolean UNIX_OtherPersonInformation::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserID() const
{
	return _userID;
}

void UNIX_OtherPersonInformation::setUserID(Array<String> &value)
{
	_userID = value;
}

Boolean UNIX_OtherPersonInformation::getUniqueIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_IDENTIFIER, getUniqueIdentifier());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUniqueIdentifier() const
{
	return _uniqueIdentifier;
}

void UNIX_OtherPersonInformation::setUniqueIdentifier(Array<String> &value)
{
	_uniqueIdentifier = value;
}

Boolean UNIX_OtherPersonInformation::getUserCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_CERTIFICATE, getUserCertificate());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserCertificate() const
{
	return _userCertificate;
}

void UNIX_OtherPersonInformation::setUserCertificate(Array<String> &value)
{
	_userCertificate = value;
}

Boolean UNIX_OtherPersonInformation::getUserPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD, getUserPassword());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserPassword() const
{
	return _userPassword;
}

void UNIX_OtherPersonInformation::setUserPassword(Array<String> &value)
{
	_userPassword = value;
}

Boolean UNIX_OtherPersonInformation::getUserPKCS12(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_P_K_CS_1_2, getUserPKCS12());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserPKCS12() const
{
	return _userPKCS12;
}

void UNIX_OtherPersonInformation::setUserPKCS12(Array<String> &value)
{
	_userPKCS12 = value;
}

Boolean UNIX_OtherPersonInformation::getUserSMIMECertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_S_M_I_M_E_CERTIFICATE, getUserSMIMECertificate());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserSMIMECertificate() const
{
	return _userSMIMECertificate;
}

void UNIX_OtherPersonInformation::setUserSMIMECertificate(Array<String> &value)
{
	_userSMIMECertificate = value;
}

Boolean UNIX_OtherPersonInformation::getX121Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_1_2_1_ADDRESS, getX121Address());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getX121Address() const
{
	return _x121Address;
}

void UNIX_OtherPersonInformation::setX121Address(Array<String> &value)
{
	_x121Address = value;
}

Boolean UNIX_OtherPersonInformation::getX500UniqueIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X5_0_0_UNIQUE_IDENTIFIER, getX500UniqueIdentifier());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getX500UniqueIdentifier() const
{
	return _x500UniqueIdentifier;
}

void UNIX_OtherPersonInformation::setX500UniqueIdentifier(Array<String> &value)
{
	_x500UniqueIdentifier = value;
}


void UNIX_OtherPersonInformation::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OtherPersonInformation");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OtherPersonInformation");
	_name = String ("");
	_objectClass.clear();
	_audio.clear();
	_businessCategory.clear();
	_carLicense.clear();
	_commonName.clear();
	_countryName.clear();
	_departmentNumber.clear();
	_descriptions.clear();
	_destinationIndicator.clear();
	_displayName.clear();
	_employeeNumber = String ("");
	_employeeType.clear();
	_facsimileTelephoneNumber.clear();
	_generationQualifier.clear();
	_givenName.clear();
	_homeFax.clear();
	_homePhone.clear();
	_homePostalAddress.clear();
	_initials.clear();
	_internationaliSDNNumber.clear();
	_jPEGPhoto.clear();
	_labeledURI.clear();
	_localityName.clear();
	_mail.clear();
	_manager.clear();
	_middleName.clear();
	_mobile.clear();
	_organizationName.clear();
	_organizationalStatus.clear();
	_otherMailbox.clear();
	_oU.clear();
	_pager.clear();
	_personalTitle.clear();
	_photo.clear();
	_physicalDeliveryOfficeName.clear();
	_postalAddress.clear();
	_postalCode.clear();
	_postOfficeBox.clear();
	_preferredDeliveryMethod = String ("");
	_preferredLanguage = String ("");
	_registeredAddress.clear();
	_roomNumber.clear();
	_secretary.clear();
	_seeAlso.clear();
	_stateOrProvince.clear();
	_street.clear();
	_surname.clear();
	_telephoneNumber.clear();
	_teletexTerminalIdentifier.clear();
	_telexNumber.clear();
	_thumbnailLogo.clear();
	_thumbnailPhoto.clear();
	_title.clear();
	_userID.clear();
	_uniqueIdentifier.clear();
	_userCertificate.clear();
	_userPassword.clear();
	_userPKCS12.clear();
	_userSMIMECertificate.clear();
	_x121Address.clear();
	_x500UniqueIdentifier.clear();

}

Boolean UNIX_OtherPersonInformation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ObjectClass"))
			{
				Array<String> objectClassValue;
				property.getValue().get(objectClassValue);
				setObjectClass(objectClassValue);
			}
			else if (String::equal(property.getName().getString(), "Audio"))
			{
				Array<String> audioValue;
				property.getValue().get(audioValue);
				setAudio(audioValue);
			}
			else if (String::equal(property.getName().getString(), "BusinessCategory"))
			{
				Array<String> businessCategoryValue;
				property.getValue().get(businessCategoryValue);
				setBusinessCategory(businessCategoryValue);
			}
			else if (String::equal(property.getName().getString(), "CarLicense"))
			{
				Array<String> carLicenseValue;
				property.getValue().get(carLicenseValue);
				setCarLicense(carLicenseValue);
			}
			else if (String::equal(property.getName().getString(), "CommonName"))
			{
				Array<String> commonNameValue;
				property.getValue().get(commonNameValue);
				setCommonName(commonNameValue);
			}
			else if (String::equal(property.getName().getString(), "CountryName"))
			{
				Array<String> countryNameValue;
				property.getValue().get(countryNameValue);
				setCountryName(countryNameValue);
			}
			else if (String::equal(property.getName().getString(), "DepartmentNumber"))
			{
				Array<String> departmentNumberValue;
				property.getValue().get(departmentNumberValue);
				setDepartmentNumber(departmentNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Descriptions"))
			{
				Array<String> descriptionsValue;
				property.getValue().get(descriptionsValue);
				setDescriptions(descriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "DestinationIndicator"))
			{
				Array<String> destinationIndicatorValue;
				property.getValue().get(destinationIndicatorValue);
				setDestinationIndicator(destinationIndicatorValue);
			}
			else if (String::equal(property.getName().getString(), "DisplayName"))
			{
				Array<String> displayNameValue;
				property.getValue().get(displayNameValue);
				setDisplayName(displayNameValue);
			}
			else if (String::equal(property.getName().getString(), "EmployeeNumber"))
			{
				String employeeNumberValue;
				property.getValue().get(employeeNumberValue);
				setEmployeeNumber(employeeNumberValue);
			}
			else if (String::equal(property.getName().getString(), "EmployeeType"))
			{
				Array<String> employeeTypeValue;
				property.getValue().get(employeeTypeValue);
				setEmployeeType(employeeTypeValue);
			}
			else if (String::equal(property.getName().getString(), "FacsimileTelephoneNumber"))
			{
				Array<String> facsimileTelephoneNumberValue;
				property.getValue().get(facsimileTelephoneNumberValue);
				setFacsimileTelephoneNumber(facsimileTelephoneNumberValue);
			}
			else if (String::equal(property.getName().getString(), "GenerationQualifier"))
			{
				Array<String> generationQualifierValue;
				property.getValue().get(generationQualifierValue);
				setGenerationQualifier(generationQualifierValue);
			}
			else if (String::equal(property.getName().getString(), "GivenName"))
			{
				Array<String> givenNameValue;
				property.getValue().get(givenNameValue);
				setGivenName(givenNameValue);
			}
			else if (String::equal(property.getName().getString(), "HomeFax"))
			{
				Array<String> homeFaxValue;
				property.getValue().get(homeFaxValue);
				setHomeFax(homeFaxValue);
			}
			else if (String::equal(property.getName().getString(), "HomePhone"))
			{
				Array<String> homePhoneValue;
				property.getValue().get(homePhoneValue);
				setHomePhone(homePhoneValue);
			}
			else if (String::equal(property.getName().getString(), "HomePostalAddress"))
			{
				Array<String> homePostalAddressValue;
				property.getValue().get(homePostalAddressValue);
				setHomePostalAddress(homePostalAddressValue);
			}
			else if (String::equal(property.getName().getString(), "Initials"))
			{
				Array<String> initialsValue;
				property.getValue().get(initialsValue);
				setInitials(initialsValue);
			}
			else if (String::equal(property.getName().getString(), "InternationaliSDNNumber"))
			{
				Array<String> internationaliSDNNumberValue;
				property.getValue().get(internationaliSDNNumberValue);
				setInternationaliSDNNumber(internationaliSDNNumberValue);
			}
			else if (String::equal(property.getName().getString(), "JPEGPhoto"))
			{
				Array<String> jPEGPhotoValue;
				property.getValue().get(jPEGPhotoValue);
				setJPEGPhoto(jPEGPhotoValue);
			}
			else if (String::equal(property.getName().getString(), "LabeledURI"))
			{
				Array<String> labeledURIValue;
				property.getValue().get(labeledURIValue);
				setLabeledURI(labeledURIValue);
			}
			else if (String::equal(property.getName().getString(), "LocalityName"))
			{
				Array<String> localityNameValue;
				property.getValue().get(localityNameValue);
				setLocalityName(localityNameValue);
			}
			else if (String::equal(property.getName().getString(), "Mail"))
			{
				Array<String> mailValue;
				property.getValue().get(mailValue);
				setMail(mailValue);
			}
			else if (String::equal(property.getName().getString(), "Manager"))
			{
				Array<String> managerValue;
				property.getValue().get(managerValue);
				setManager(managerValue);
			}
			else if (String::equal(property.getName().getString(), "MiddleName"))
			{
				Array<String> middleNameValue;
				property.getValue().get(middleNameValue);
				setMiddleName(middleNameValue);
			}
			else if (String::equal(property.getName().getString(), "Mobile"))
			{
				Array<String> mobileValue;
				property.getValue().get(mobileValue);
				setMobile(mobileValue);
			}
			else if (String::equal(property.getName().getString(), "OrganizationName"))
			{
				Array<String> organizationNameValue;
				property.getValue().get(organizationNameValue);
				setOrganizationName(organizationNameValue);
			}
			else if (String::equal(property.getName().getString(), "OrganizationalStatus"))
			{
				Array<String> organizationalStatusValue;
				property.getValue().get(organizationalStatusValue);
				setOrganizationalStatus(organizationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OtherMailbox"))
			{
				Array<String> otherMailboxValue;
				property.getValue().get(otherMailboxValue);
				setOtherMailbox(otherMailboxValue);
			}
			else if (String::equal(property.getName().getString(), "OU"))
			{
				Array<String> oUValue;
				property.getValue().get(oUValue);
				setOU(oUValue);
			}
			else if (String::equal(property.getName().getString(), "Pager"))
			{
				Array<String> pagerValue;
				property.getValue().get(pagerValue);
				setPager(pagerValue);
			}
			else if (String::equal(property.getName().getString(), "PersonalTitle"))
			{
				Array<String> personalTitleValue;
				property.getValue().get(personalTitleValue);
				setPersonalTitle(personalTitleValue);
			}
			else if (String::equal(property.getName().getString(), "Photo"))
			{
				Array<String> photoValue;
				property.getValue().get(photoValue);
				setPhoto(photoValue);
			}
			else if (String::equal(property.getName().getString(), "PhysicalDeliveryOfficeName"))
			{
				Array<String> physicalDeliveryOfficeNameValue;
				property.getValue().get(physicalDeliveryOfficeNameValue);
				setPhysicalDeliveryOfficeName(physicalDeliveryOfficeNameValue);
			}
			else if (String::equal(property.getName().getString(), "PostalAddress"))
			{
				Array<String> postalAddressValue;
				property.getValue().get(postalAddressValue);
				setPostalAddress(postalAddressValue);
			}
			else if (String::equal(property.getName().getString(), "PostalCode"))
			{
				Array<String> postalCodeValue;
				property.getValue().get(postalCodeValue);
				setPostalCode(postalCodeValue);
			}
			else if (String::equal(property.getName().getString(), "PostOfficeBox"))
			{
				Array<String> postOfficeBoxValue;
				property.getValue().get(postOfficeBoxValue);
				setPostOfficeBox(postOfficeBoxValue);
			}
			else if (String::equal(property.getName().getString(), "PreferredDeliveryMethod"))
			{
				String preferredDeliveryMethodValue;
				property.getValue().get(preferredDeliveryMethodValue);
				setPreferredDeliveryMethod(preferredDeliveryMethodValue);
			}
			else if (String::equal(property.getName().getString(), "PreferredLanguage"))
			{
				String preferredLanguageValue;
				property.getValue().get(preferredLanguageValue);
				setPreferredLanguage(preferredLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "RegisteredAddress"))
			{
				Array<String> registeredAddressValue;
				property.getValue().get(registeredAddressValue);
				setRegisteredAddress(registeredAddressValue);
			}
			else if (String::equal(property.getName().getString(), "RoomNumber"))
			{
				Array<String> roomNumberValue;
				property.getValue().get(roomNumberValue);
				setRoomNumber(roomNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Secretary"))
			{
				Array<String> secretaryValue;
				property.getValue().get(secretaryValue);
				setSecretary(secretaryValue);
			}
			else if (String::equal(property.getName().getString(), "SeeAlso"))
			{
				Array<String> seeAlsoValue;
				property.getValue().get(seeAlsoValue);
				setSeeAlso(seeAlsoValue);
			}
			else if (String::equal(property.getName().getString(), "StateOrProvince"))
			{
				Array<String> stateOrProvinceValue;
				property.getValue().get(stateOrProvinceValue);
				setStateOrProvince(stateOrProvinceValue);
			}
			else if (String::equal(property.getName().getString(), "Street"))
			{
				Array<String> streetValue;
				property.getValue().get(streetValue);
				setStreet(streetValue);
			}
			else if (String::equal(property.getName().getString(), "Surname"))
			{
				Array<String> surnameValue;
				property.getValue().get(surnameValue);
				setSurname(surnameValue);
			}
			else if (String::equal(property.getName().getString(), "TelephoneNumber"))
			{
				Array<String> telephoneNumberValue;
				property.getValue().get(telephoneNumberValue);
				setTelephoneNumber(telephoneNumberValue);
			}
			else if (String::equal(property.getName().getString(), "TeletexTerminalIdentifier"))
			{
				Array<String> teletexTerminalIdentifierValue;
				property.getValue().get(teletexTerminalIdentifierValue);
				setTeletexTerminalIdentifier(teletexTerminalIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "TelexNumber"))
			{
				Array<String> telexNumberValue;
				property.getValue().get(telexNumberValue);
				setTelexNumber(telexNumberValue);
			}
			else if (String::equal(property.getName().getString(), "ThumbnailLogo"))
			{
				Array<String> thumbnailLogoValue;
				property.getValue().get(thumbnailLogoValue);
				setThumbnailLogo(thumbnailLogoValue);
			}
			else if (String::equal(property.getName().getString(), "ThumbnailPhoto"))
			{
				Array<String> thumbnailPhotoValue;
				property.getValue().get(thumbnailPhotoValue);
				setThumbnailPhoto(thumbnailPhotoValue);
			}
			else if (String::equal(property.getName().getString(), "Title"))
			{
				Array<String> titleValue;
				property.getValue().get(titleValue);
				setTitle(titleValue);
			}
			else if (String::equal(property.getName().getString(), "UserID"))
			{
				Array<String> userIDValue;
				property.getValue().get(userIDValue);
				setUserID(userIDValue);
			}
			else if (String::equal(property.getName().getString(), "UniqueIdentifier"))
			{
				Array<String> uniqueIdentifierValue;
				property.getValue().get(uniqueIdentifierValue);
				setUniqueIdentifier(uniqueIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "UserCertificate"))
			{
				Array<String> userCertificateValue;
				property.getValue().get(userCertificateValue);
				setUserCertificate(userCertificateValue);
			}
			else if (String::equal(property.getName().getString(), "UserPassword"))
			{
				Array<String> userPasswordValue;
				property.getValue().get(userPasswordValue);
				setUserPassword(userPasswordValue);
			}
			else if (String::equal(property.getName().getString(), "UserPKCS12"))
			{
				Array<String> userPKCS12Value;
				property.getValue().get(userPKCS12Value);
				setUserPKCS12(userPKCS12Value);
			}
			else if (String::equal(property.getName().getString(), "UserSMIMECertificate"))
			{
				Array<String> userSMIMECertificateValue;
				property.getValue().get(userSMIMECertificateValue);
				setUserSMIMECertificate(userSMIMECertificateValue);
			}
			else if (String::equal(property.getName().getString(), "X121Address"))
			{
				Array<String> x121AddressValue;
				property.getValue().get(x121AddressValue);
				setX121Address(x121AddressValue);
			}
			else if (String::equal(property.getName().getString(), "X500UniqueIdentifier"))
			{
				Array<String> x500UniqueIdentifierValue;
				property.getValue().get(x500UniqueIdentifierValue);
				setX500UniqueIdentifier(x500UniqueIdentifierValue);
			}
	}
	return true;
}


Boolean UNIX_OtherPersonInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherPersonInformation::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OtherPersonInformation");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OtherPersonInformation");
	_name = String ("");
	_objectClass.clear();
	_audio.clear();
	_businessCategory.clear();
	_carLicense.clear();
	_commonName.clear();
	_countryName.clear();
	_departmentNumber.clear();
	_descriptions.clear();
	_destinationIndicator.clear();
	_displayName.clear();
	_employeeNumber = String ("");
	_employeeType.clear();
	_facsimileTelephoneNumber.clear();
	_generationQualifier.clear();
	_givenName.clear();
	_homeFax.clear();
	_homePhone.clear();
	_homePostalAddress.clear();
	_initials.clear();
	_internationaliSDNNumber.clear();
	_jPEGPhoto.clear();
	_labeledURI.clear();
	_localityName.clear();
	_mail.clear();
	_manager.clear();
	_middleName.clear();
	_mobile.clear();
	_organizationName.clear();
	_organizationalStatus.clear();
	_otherMailbox.clear();
	_oU.clear();
	_pager.clear();
	_personalTitle.clear();
	_photo.clear();
	_physicalDeliveryOfficeName.clear();
	_postalAddress.clear();
	_postalCode.clear();
	_postOfficeBox.clear();
	_preferredDeliveryMethod = String ("");
	_preferredLanguage = String ("");
	_registeredAddress.clear();
	_roomNumber.clear();
	_secretary.clear();
	_seeAlso.clear();
	_stateOrProvince.clear();
	_street.clear();
	_surname.clear();
	_telephoneNumber.clear();
	_teletexTerminalIdentifier.clear();
	_telexNumber.clear();
	_thumbnailLogo.clear();
	_thumbnailPhoto.clear();
	_title.clear();
	_userID.clear();
	_uniqueIdentifier.clear();
	_userCertificate.clear();
	_userPassword.clear();
	_userPKCS12.clear();
	_userSMIMECertificate.clear();
	_x121Address.clear();
	_x500UniqueIdentifier.clear();
	
	return false;
}

Boolean UNIX_OtherPersonInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherPersonInformation::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OtherPersonInformation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OtherPersonInformation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherPersonInformation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherPersonInformation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherPersonInformation::validateInstance()
{
	return true;
}

