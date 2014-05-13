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


UNIX_OtherOrgUnitInformation::UNIX_OtherOrgUnitInformation(void)
{
}

UNIX_OtherOrgUnitInformation::~UNIX_OtherOrgUnitInformation(void)
{
}

Boolean UNIX_OtherOrgUnitInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherOrgUnitInformation::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OtherOrgUnitInformation::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OtherOrgUnitInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherOrgUnitInformation::getCaption() const
{
	return _caption;
}

void UNIX_OtherOrgUnitInformation::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OtherOrgUnitInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherOrgUnitInformation::getDescription() const
{
	return _description;
}

void UNIX_OtherOrgUnitInformation::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OtherOrgUnitInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherOrgUnitInformation::getElementName() const
{
	return _elementName;
}

void UNIX_OtherOrgUnitInformation::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OtherOrgUnitInformation::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OtherOrgUnitInformation::getGeneration() const
{
	return _generation;
}

void UNIX_OtherOrgUnitInformation::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OtherOrgUnitInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherOrgUnitInformation::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OtherOrgUnitInformation::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OtherOrgUnitInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherOrgUnitInformation::getName() const
{
	return _name;
}

void UNIX_OtherOrgUnitInformation::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OtherOrgUnitInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getObjectClass() const
{
	return _objectClass;
}

void UNIX_OtherOrgUnitInformation::setObjectClass(Array<String> &value)
{
	_objectClass = value;
}

Boolean UNIX_OtherOrgUnitInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getBusinessCategory() const
{
	return _businessCategory;
}

void UNIX_OtherOrgUnitInformation::setBusinessCategory(Array<String> &value)
{
	_businessCategory = value;
}

Boolean UNIX_OtherOrgUnitInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getDescriptions() const
{
	return _descriptions;
}

void UNIX_OtherOrgUnitInformation::setDescriptions(Array<String> &value)
{
	_descriptions = value;
}

Boolean UNIX_OtherOrgUnitInformation::getDestinationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_INDICATOR, getDestinationIndicator());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getDestinationIndicator() const
{
	return _destinationIndicator;
}

void UNIX_OtherOrgUnitInformation::setDestinationIndicator(Array<String> &value)
{
	_destinationIndicator = value;
}

Boolean UNIX_OtherOrgUnitInformation::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getFacsimileTelephoneNumber() const
{
	return _facsimileTelephoneNumber;
}

void UNIX_OtherOrgUnitInformation::setFacsimileTelephoneNumber(Array<String> &value)
{
	_facsimileTelephoneNumber = value;
}

Boolean UNIX_OtherOrgUnitInformation::getInternationaliSDNNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNATIONALI_S_D_N_NUMBER, getInternationaliSDNNumber());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getInternationaliSDNNumber() const
{
	return _internationaliSDNNumber;
}

void UNIX_OtherOrgUnitInformation::setInternationaliSDNNumber(Array<String> &value)
{
	_internationaliSDNNumber = value;
}

Boolean UNIX_OtherOrgUnitInformation::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getLocalityName() const
{
	return _localityName;
}

void UNIX_OtherOrgUnitInformation::setLocalityName(Array<String> &value)
{
	_localityName = value;
}

Boolean UNIX_OtherOrgUnitInformation::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OU, getOU());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getOU() const
{
	return _oU;
}

void UNIX_OtherOrgUnitInformation::setOU(Array<String> &value)
{
	_oU = value;
}

Boolean UNIX_OtherOrgUnitInformation::getPhysicalDeliveryOfficeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME, getPhysicalDeliveryOfficeName());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getPhysicalDeliveryOfficeName() const
{
	return _physicalDeliveryOfficeName;
}

void UNIX_OtherOrgUnitInformation::setPhysicalDeliveryOfficeName(Array<String> &value)
{
	_physicalDeliveryOfficeName = value;
}

Boolean UNIX_OtherOrgUnitInformation::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getPostalAddress() const
{
	return _postalAddress;
}

void UNIX_OtherOrgUnitInformation::setPostalAddress(Array<String> &value)
{
	_postalAddress = value;
}

Boolean UNIX_OtherOrgUnitInformation::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getPostalCode() const
{
	return _postalCode;
}

void UNIX_OtherOrgUnitInformation::setPostalCode(Array<String> &value)
{
	_postalCode = value;
}

Boolean UNIX_OtherOrgUnitInformation::getPostOfficeBox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POST_OFFICE_BOX, getPostOfficeBox());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getPostOfficeBox() const
{
	return _postOfficeBox;
}

void UNIX_OtherOrgUnitInformation::setPostOfficeBox(Array<String> &value)
{
	_postOfficeBox = value;
}

Boolean UNIX_OtherOrgUnitInformation::getPreferredDeliveryMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_DELIVERY_METHOD, getPreferredDeliveryMethod());
	return true;
}

String UNIX_OtherOrgUnitInformation::getPreferredDeliveryMethod() const
{
	return _preferredDeliveryMethod;
}

void UNIX_OtherOrgUnitInformation::setPreferredDeliveryMethod(String &value)
{
	_preferredDeliveryMethod = value;
}

Boolean UNIX_OtherOrgUnitInformation::getSearchGuide(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEARCH_GUIDE, getSearchGuide());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getSearchGuide() const
{
	return _searchGuide;
}

void UNIX_OtherOrgUnitInformation::setSearchGuide(Array<String> &value)
{
	_searchGuide = value;
}

Boolean UNIX_OtherOrgUnitInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getSeeAlso() const
{
	return _seeAlso;
}

void UNIX_OtherOrgUnitInformation::setSeeAlso(Array<String> &value)
{
	_seeAlso = value;
}

Boolean UNIX_OtherOrgUnitInformation::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getStateOrProvince() const
{
	return _stateOrProvince;
}

void UNIX_OtherOrgUnitInformation::setStateOrProvince(Array<String> &value)
{
	_stateOrProvince = value;
}

Boolean UNIX_OtherOrgUnitInformation::getStreet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STREET, getStreet());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getStreet() const
{
	return _street;
}

void UNIX_OtherOrgUnitInformation::setStreet(Array<String> &value)
{
	_street = value;
}

Boolean UNIX_OtherOrgUnitInformation::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getTelephoneNumber() const
{
	return _telephoneNumber;
}

void UNIX_OtherOrgUnitInformation::setTelephoneNumber(Array<String> &value)
{
	_telephoneNumber = value;
}

Boolean UNIX_OtherOrgUnitInformation::getTeletexTerminalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELETEX_TERMINAL_IDENTIFIER, getTeletexTerminalIdentifier());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getTeletexTerminalIdentifier() const
{
	return _teletexTerminalIdentifier;
}

void UNIX_OtherOrgUnitInformation::setTeletexTerminalIdentifier(Array<String> &value)
{
	_teletexTerminalIdentifier = value;
}

Boolean UNIX_OtherOrgUnitInformation::getTelexNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEX_NUMBER, getTelexNumber());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getTelexNumber() const
{
	return _telexNumber;
}

void UNIX_OtherOrgUnitInformation::setTelexNumber(Array<String> &value)
{
	_telexNumber = value;
}

Boolean UNIX_OtherOrgUnitInformation::getUserPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD, getUserPassword());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getUserPassword() const
{
	return _userPassword;
}

void UNIX_OtherOrgUnitInformation::setUserPassword(Array<String> &value)
{
	_userPassword = value;
}

Boolean UNIX_OtherOrgUnitInformation::getX121Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_1_2_1_ADDRESS, getX121Address());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getX121Address() const
{
	return _x121Address;
}

void UNIX_OtherOrgUnitInformation::setX121Address(Array<String> &value)
{
	_x121Address = value;
}


void UNIX_OtherOrgUnitInformation::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OtherOrgUnitInformation");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OtherOrgUnitInformation");
	_name = String ("");
	_objectClass.clear();
	_businessCategory.clear();
	_descriptions.clear();
	_destinationIndicator.clear();
	_facsimileTelephoneNumber.clear();
	_internationaliSDNNumber.clear();
	_localityName.clear();
	_oU.clear();
	_physicalDeliveryOfficeName.clear();
	_postalAddress.clear();
	_postalCode.clear();
	_postOfficeBox.clear();
	_preferredDeliveryMethod = String ("");
	_searchGuide.clear();
	_seeAlso.clear();
	_stateOrProvince.clear();
	_street.clear();
	_telephoneNumber.clear();
	_teletexTerminalIdentifier.clear();
	_telexNumber.clear();
	_userPassword.clear();
	_x121Address.clear();

}

Boolean UNIX_OtherOrgUnitInformation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LocalityName"))
			{
				Array<String> localityNameValue;
				property.getValue().get(localityNameValue);
				setLocalityName(localityNameValue);
			}
			else if (String::equal(property.getName().getString(), "OU"))
			{
				Array<String> oUValue;
				property.getValue().get(oUValue);
				setOU(oUValue);
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


Boolean UNIX_OtherOrgUnitInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OtherOrgUnitInformation");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OtherOrgUnitInformation");
	_name = String ("");
	_objectClass.clear();
	_businessCategory.clear();
	_descriptions.clear();
	_destinationIndicator.clear();
	_facsimileTelephoneNumber.clear();
	_internationaliSDNNumber.clear();
	_localityName.clear();
	_oU.clear();
	_physicalDeliveryOfficeName.clear();
	_postalAddress.clear();
	_postalCode.clear();
	_postOfficeBox.clear();
	_preferredDeliveryMethod = String ("");
	_searchGuide.clear();
	_seeAlso.clear();
	_stateOrProvince.clear();
	_street.clear();
	_telephoneNumber.clear();
	_teletexTerminalIdentifier.clear();
	_telexNumber.clear();
	_userPassword.clear();
	_x121Address.clear();
	
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OtherOrgUnitInformation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::validateInstance()
{
	return true;
}

