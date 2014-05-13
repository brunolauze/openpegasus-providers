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


UNIX_OtherOrganizationInformation::UNIX_OtherOrganizationInformation(void)
{
}

UNIX_OtherOrganizationInformation::~UNIX_OtherOrganizationInformation(void)
{
}

Boolean UNIX_OtherOrganizationInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherOrganizationInformation::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OtherOrganizationInformation::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OtherOrganizationInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherOrganizationInformation::getCaption() const
{
	return _caption;
}

void UNIX_OtherOrganizationInformation::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OtherOrganizationInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherOrganizationInformation::getDescription() const
{
	return _description;
}

void UNIX_OtherOrganizationInformation::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OtherOrganizationInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherOrganizationInformation::getElementName() const
{
	return _elementName;
}

void UNIX_OtherOrganizationInformation::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OtherOrganizationInformation::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OtherOrganizationInformation::getGeneration() const
{
	return _generation;
}

void UNIX_OtherOrganizationInformation::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OtherOrganizationInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherOrganizationInformation::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OtherOrganizationInformation::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OtherOrganizationInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherOrganizationInformation::getName() const
{
	return _name;
}

void UNIX_OtherOrganizationInformation::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OtherOrganizationInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getObjectClass() const
{
	return _objectClass;
}

void UNIX_OtherOrganizationInformation::setObjectClass(Array<String> &value)
{
	_objectClass = value;
}

Boolean UNIX_OtherOrganizationInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getBusinessCategory() const
{
	return _businessCategory;
}

void UNIX_OtherOrganizationInformation::setBusinessCategory(Array<String> &value)
{
	_businessCategory = value;
}

Boolean UNIX_OtherOrganizationInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getDescriptions() const
{
	return _descriptions;
}

void UNIX_OtherOrganizationInformation::setDescriptions(Array<String> &value)
{
	_descriptions = value;
}

Boolean UNIX_OtherOrganizationInformation::getDestinationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_INDICATOR, getDestinationIndicator());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getDestinationIndicator() const
{
	return _destinationIndicator;
}

void UNIX_OtherOrganizationInformation::setDestinationIndicator(Array<String> &value)
{
	_destinationIndicator = value;
}

Boolean UNIX_OtherOrganizationInformation::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getFacsimileTelephoneNumber() const
{
	return _facsimileTelephoneNumber;
}

void UNIX_OtherOrganizationInformation::setFacsimileTelephoneNumber(Array<String> &value)
{
	_facsimileTelephoneNumber = value;
}

Boolean UNIX_OtherOrganizationInformation::getInternationaliSDNNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNATIONALI_S_D_N_NUMBER, getInternationaliSDNNumber());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getInternationaliSDNNumber() const
{
	return _internationaliSDNNumber;
}

void UNIX_OtherOrganizationInformation::setInternationaliSDNNumber(Array<String> &value)
{
	_internationaliSDNNumber = value;
}

Boolean UNIX_OtherOrganizationInformation::getLabeledURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABELED_U_R_I, getLabeledURI());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getLabeledURI() const
{
	return _labeledURI;
}

void UNIX_OtherOrganizationInformation::setLabeledURI(Array<String> &value)
{
	_labeledURI = value;
}

Boolean UNIX_OtherOrganizationInformation::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getLocalityName() const
{
	return _localityName;
}

void UNIX_OtherOrganizationInformation::setLocalityName(Array<String> &value)
{
	_localityName = value;
}

Boolean UNIX_OtherOrganizationInformation::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getMail() const
{
	return _mail;
}

void UNIX_OtherOrganizationInformation::setMail(Array<String> &value)
{
	_mail = value;
}

Boolean UNIX_OtherOrganizationInformation::getManager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGER, getManager());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getManager() const
{
	return _manager;
}

void UNIX_OtherOrganizationInformation::setManager(Array<String> &value)
{
	_manager = value;
}

Boolean UNIX_OtherOrganizationInformation::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getOrganizationName() const
{
	return _organizationName;
}

void UNIX_OtherOrganizationInformation::setOrganizationName(Array<String> &value)
{
	_organizationName = value;
}

Boolean UNIX_OtherOrganizationInformation::getOtherMailbox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MAILBOX, getOtherMailbox());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getOtherMailbox() const
{
	return _otherMailbox;
}

void UNIX_OtherOrganizationInformation::setOtherMailbox(Array<String> &value)
{
	_otherMailbox = value;
}

Boolean UNIX_OtherOrganizationInformation::getPhysicalDeliveryOfficeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME, getPhysicalDeliveryOfficeName());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getPhysicalDeliveryOfficeName() const
{
	return _physicalDeliveryOfficeName;
}

void UNIX_OtherOrganizationInformation::setPhysicalDeliveryOfficeName(Array<String> &value)
{
	_physicalDeliveryOfficeName = value;
}

Boolean UNIX_OtherOrganizationInformation::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getPostalAddress() const
{
	return _postalAddress;
}

void UNIX_OtherOrganizationInformation::setPostalAddress(Array<String> &value)
{
	_postalAddress = value;
}

Boolean UNIX_OtherOrganizationInformation::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getPostalCode() const
{
	return _postalCode;
}

void UNIX_OtherOrganizationInformation::setPostalCode(Array<String> &value)
{
	_postalCode = value;
}

Boolean UNIX_OtherOrganizationInformation::getPostOfficeBox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POST_OFFICE_BOX, getPostOfficeBox());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getPostOfficeBox() const
{
	return _postOfficeBox;
}

void UNIX_OtherOrganizationInformation::setPostOfficeBox(Array<String> &value)
{
	_postOfficeBox = value;
}

Boolean UNIX_OtherOrganizationInformation::getPreferredDeliveryMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_DELIVERY_METHOD, getPreferredDeliveryMethod());
	return true;
}

String UNIX_OtherOrganizationInformation::getPreferredDeliveryMethod() const
{
	return _preferredDeliveryMethod;
}

void UNIX_OtherOrganizationInformation::setPreferredDeliveryMethod(String &value)
{
	_preferredDeliveryMethod = value;
}

Boolean UNIX_OtherOrganizationInformation::getRegisteredAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_ADDRESS, getRegisteredAddress());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getRegisteredAddress() const
{
	return _registeredAddress;
}

void UNIX_OtherOrganizationInformation::setRegisteredAddress(Array<String> &value)
{
	_registeredAddress = value;
}

Boolean UNIX_OtherOrganizationInformation::getSearchGuide(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEARCH_GUIDE, getSearchGuide());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getSearchGuide() const
{
	return _searchGuide;
}

void UNIX_OtherOrganizationInformation::setSearchGuide(Array<String> &value)
{
	_searchGuide = value;
}

Boolean UNIX_OtherOrganizationInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getSeeAlso() const
{
	return _seeAlso;
}

void UNIX_OtherOrganizationInformation::setSeeAlso(Array<String> &value)
{
	_seeAlso = value;
}

Boolean UNIX_OtherOrganizationInformation::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getStateOrProvince() const
{
	return _stateOrProvince;
}

void UNIX_OtherOrganizationInformation::setStateOrProvince(Array<String> &value)
{
	_stateOrProvince = value;
}

Boolean UNIX_OtherOrganizationInformation::getStreet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STREET, getStreet());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getStreet() const
{
	return _street;
}

void UNIX_OtherOrganizationInformation::setStreet(Array<String> &value)
{
	_street = value;
}

Boolean UNIX_OtherOrganizationInformation::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getTelephoneNumber() const
{
	return _telephoneNumber;
}

void UNIX_OtherOrganizationInformation::setTelephoneNumber(Array<String> &value)
{
	_telephoneNumber = value;
}

Boolean UNIX_OtherOrganizationInformation::getTeletexTerminalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELETEX_TERMINAL_IDENTIFIER, getTeletexTerminalIdentifier());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getTeletexTerminalIdentifier() const
{
	return _teletexTerminalIdentifier;
}

void UNIX_OtherOrganizationInformation::setTeletexTerminalIdentifier(Array<String> &value)
{
	_teletexTerminalIdentifier = value;
}

Boolean UNIX_OtherOrganizationInformation::getTelexNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEX_NUMBER, getTelexNumber());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getTelexNumber() const
{
	return _telexNumber;
}

void UNIX_OtherOrganizationInformation::setTelexNumber(Array<String> &value)
{
	_telexNumber = value;
}

Boolean UNIX_OtherOrganizationInformation::getThumbnailLogo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THUMBNAIL_LOGO, getThumbnailLogo());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getThumbnailLogo() const
{
	return _thumbnailLogo;
}

void UNIX_OtherOrganizationInformation::setThumbnailLogo(Array<String> &value)
{
	_thumbnailLogo = value;
}

Boolean UNIX_OtherOrganizationInformation::getUniqueIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_IDENTIFIER, getUniqueIdentifier());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getUniqueIdentifier() const
{
	return _uniqueIdentifier;
}

void UNIX_OtherOrganizationInformation::setUniqueIdentifier(Array<String> &value)
{
	_uniqueIdentifier = value;
}

Boolean UNIX_OtherOrganizationInformation::getUserPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD, getUserPassword());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getUserPassword() const
{
	return _userPassword;
}

void UNIX_OtherOrganizationInformation::setUserPassword(Array<String> &value)
{
	_userPassword = value;
}

Boolean UNIX_OtherOrganizationInformation::getX121Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_1_2_1_ADDRESS, getX121Address());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getX121Address() const
{
	return _x121Address;
}

void UNIX_OtherOrganizationInformation::setX121Address(Array<String> &value)
{
	_x121Address = value;
}


void UNIX_OtherOrganizationInformation::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OtherOrganizationInformation");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OtherOrganizationInformation");
	_name = String ("");
	_objectClass.clear();
	_businessCategory.clear();
	_descriptions.clear();
	_destinationIndicator.clear();
	_facsimileTelephoneNumber.clear();
	_internationaliSDNNumber.clear();
	_labeledURI.clear();
	_localityName.clear();
	_mail.clear();
	_manager.clear();
	_organizationName.clear();
	_otherMailbox.clear();
	_physicalDeliveryOfficeName.clear();
	_postalAddress.clear();
	_postalCode.clear();
	_postOfficeBox.clear();
	_preferredDeliveryMethod = String ("");
	_registeredAddress.clear();
	_searchGuide.clear();
	_seeAlso.clear();
	_stateOrProvince.clear();
	_street.clear();
	_telephoneNumber.clear();
	_teletexTerminalIdentifier.clear();
	_telexNumber.clear();
	_thumbnailLogo.clear();
	_uniqueIdentifier.clear();
	_userPassword.clear();
	_x121Address.clear();

}

Boolean UNIX_OtherOrganizationInformation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BusinessCategory"))
			{
				Array<String> businessCategoryValue;
				property.getValue().get(businessCategoryValue);
				setBusinessCategory(businessCategoryValue);
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
			else if (String::equal(property.getName().getString(), "FacsimileTelephoneNumber"))
			{
				Array<String> facsimileTelephoneNumberValue;
				property.getValue().get(facsimileTelephoneNumberValue);
				setFacsimileTelephoneNumber(facsimileTelephoneNumberValue);
			}
			else if (String::equal(property.getName().getString(), "InternationaliSDNNumber"))
			{
				Array<String> internationaliSDNNumberValue;
				property.getValue().get(internationaliSDNNumberValue);
				setInternationaliSDNNumber(internationaliSDNNumberValue);
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
			else if (String::equal(property.getName().getString(), "OrganizationName"))
			{
				Array<String> organizationNameValue;
				property.getValue().get(organizationNameValue);
				setOrganizationName(organizationNameValue);
			}
			else if (String::equal(property.getName().getString(), "OtherMailbox"))
			{
				Array<String> otherMailboxValue;
				property.getValue().get(otherMailboxValue);
				setOtherMailbox(otherMailboxValue);
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
			else if (String::equal(property.getName().getString(), "RegisteredAddress"))
			{
				Array<String> registeredAddressValue;
				property.getValue().get(registeredAddressValue);
				setRegisteredAddress(registeredAddressValue);
			}
			else if (String::equal(property.getName().getString(), "SearchGuide"))
			{
				Array<String> searchGuideValue;
				property.getValue().get(searchGuideValue);
				setSearchGuide(searchGuideValue);
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
			else if (String::equal(property.getName().getString(), "UniqueIdentifier"))
			{
				Array<String> uniqueIdentifierValue;
				property.getValue().get(uniqueIdentifierValue);
				setUniqueIdentifier(uniqueIdentifierValue);
			}
			else if (String::equal(property.getName().getString(), "UserPassword"))
			{
				Array<String> userPasswordValue;
				property.getValue().get(userPasswordValue);
				setUserPassword(userPasswordValue);
			}
			else if (String::equal(property.getName().getString(), "X121Address"))
			{
				Array<String> x121AddressValue;
				property.getValue().get(x121AddressValue);
				setX121Address(x121AddressValue);
			}
	}
	return true;
}


Boolean UNIX_OtherOrganizationInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OtherOrganizationInformation");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OtherOrganizationInformation");
	_name = String ("");
	_objectClass.clear();
	_businessCategory.clear();
	_descriptions.clear();
	_destinationIndicator.clear();
	_facsimileTelephoneNumber.clear();
	_internationaliSDNNumber.clear();
	_labeledURI.clear();
	_localityName.clear();
	_mail.clear();
	_manager.clear();
	_organizationName.clear();
	_otherMailbox.clear();
	_physicalDeliveryOfficeName.clear();
	_postalAddress.clear();
	_postalCode.clear();
	_postOfficeBox.clear();
	_preferredDeliveryMethod = String ("");
	_registeredAddress.clear();
	_searchGuide.clear();
	_seeAlso.clear();
	_stateOrProvince.clear();
	_street.clear();
	_telephoneNumber.clear();
	_teletexTerminalIdentifier.clear();
	_telexNumber.clear();
	_thumbnailLogo.clear();
	_uniqueIdentifier.clear();
	_userPassword.clear();
	_x121Address.clear();
	
	return false;
}

Boolean UNIX_OtherOrganizationInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OtherOrganizationInformation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::validateInstance()
{
	return true;
}

