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


UNIX_OrgUnit::UNIX_OrgUnit(void)
{
}

UNIX_OrgUnit::~UNIX_OrgUnit(void)
{
}

Boolean UNIX_OrgUnit::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OrgUnit::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OrgUnit::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OrgUnit::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OrgUnit::getCaption() const
{
	return _caption;
}

void UNIX_OrgUnit::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OrgUnit::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OrgUnit::getDescription() const
{
	return _description;
}

void UNIX_OrgUnit::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OrgUnit::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OrgUnit::getElementName() const
{
	return _elementName;
}

void UNIX_OrgUnit::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OrgUnit::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OrgUnit::getGeneration() const
{
	return _generation;
}

void UNIX_OrgUnit::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OrgUnit::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OrgUnit::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_OrgUnit::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_OrgUnit::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OrgUnit::getName() const
{
	return _name;
}

void UNIX_OrgUnit::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OrgUnit::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

String UNIX_OrgUnit::getBusinessCategory() const
{
	return _businessCategory;
}

void UNIX_OrgUnit::setBusinessCategory(String &value)
{
	_businessCategory = value;
}

Boolean UNIX_OrgUnit::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

String UNIX_OrgUnit::getFacsimileTelephoneNumber() const
{
	return _facsimileTelephoneNumber;
}

void UNIX_OrgUnit::setFacsimileTelephoneNumber(String &value)
{
	_facsimileTelephoneNumber = value;
}

Boolean UNIX_OrgUnit::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

String UNIX_OrgUnit::getLocalityName() const
{
	return _localityName;
}

void UNIX_OrgUnit::setLocalityName(String &value)
{
	_localityName = value;
}

Boolean UNIX_OrgUnit::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OU, getOU());
	return true;
}

String UNIX_OrgUnit::getOU() const
{
	return _oU;
}

void UNIX_OrgUnit::setOU(String &value)
{
	_oU = value;
}

Boolean UNIX_OrgUnit::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_OrgUnit::getPostalAddress() const
{
	return _postalAddress;
}

void UNIX_OrgUnit::setPostalAddress(Array<String> &value)
{
	_postalAddress = value;
}

Boolean UNIX_OrgUnit::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

String UNIX_OrgUnit::getPostalCode() const
{
	return _postalCode;
}

void UNIX_OrgUnit::setPostalCode(String &value)
{
	_postalCode = value;
}

Boolean UNIX_OrgUnit::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

String UNIX_OrgUnit::getStateOrProvince() const
{
	return _stateOrProvince;
}

void UNIX_OrgUnit::setStateOrProvince(String &value)
{
	_stateOrProvince = value;
}

Boolean UNIX_OrgUnit::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

String UNIX_OrgUnit::getTelephoneNumber() const
{
	return _telephoneNumber;
}

void UNIX_OrgUnit::setTelephoneNumber(String &value)
{
	_telephoneNumber = value;
}


void UNIX_OrgUnit::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OrgUnit");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OrgUnit");
	_name = String ("");
	_businessCategory = String ("");
	_facsimileTelephoneNumber = String ("");
	_localityName = String ("");
	_oU = String ("");
	_postalAddress.clear();
	_postalCode = String ("");
	_stateOrProvince = String ("");
	_telephoneNumber = String ("");

}

Boolean UNIX_OrgUnit::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BusinessCategory"))
			{
				String businessCategoryValue;
				property.getValue().get(businessCategoryValue);
				setBusinessCategory(businessCategoryValue);
			}
			else if (String::equal(property.getName().getString(), "FacsimileTelephoneNumber"))
			{
				String facsimileTelephoneNumberValue;
				property.getValue().get(facsimileTelephoneNumberValue);
				setFacsimileTelephoneNumber(facsimileTelephoneNumberValue);
			}
			else if (String::equal(property.getName().getString(), "LocalityName"))
			{
				String localityNameValue;
				property.getValue().get(localityNameValue);
				setLocalityName(localityNameValue);
			}
			else if (String::equal(property.getName().getString(), "OU"))
			{
				String oUValue;
				property.getValue().get(oUValue);
				setOU(oUValue);
			}
			else if (String::equal(property.getName().getString(), "PostalAddress"))
			{
				Array<String> postalAddressValue;
				property.getValue().get(postalAddressValue);
				setPostalAddress(postalAddressValue);
			}
			else if (String::equal(property.getName().getString(), "PostalCode"))
			{
				String postalCodeValue;
				property.getValue().get(postalCodeValue);
				setPostalCode(postalCodeValue);
			}
			else if (String::equal(property.getName().getString(), "StateOrProvince"))
			{
				String stateOrProvinceValue;
				property.getValue().get(stateOrProvinceValue);
				setStateOrProvince(stateOrProvinceValue);
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


Boolean UNIX_OrgUnit::initialize()
{
	return false;
}

Boolean UNIX_OrgUnit::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OrgUnit");
	_generation = Uint64(0);
	_creationClassName = String("UNIX_OrgUnit");
	_name = String ("");
	_businessCategory = String ("");
	_facsimileTelephoneNumber = String ("");
	_localityName = String ("");
	_oU = String ("");
	_postalAddress.clear();
	_postalCode = String ("");
	_stateOrProvince = String ("");
	_telephoneNumber = String ("");
	
	return false;
}

Boolean UNIX_OrgUnit::finalize()
{
	return false;
}

Boolean UNIX_OrgUnit::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OrgUnit::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OrgUnit::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrgUnit::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrgUnit::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrgUnit::validateInstance()
{
	return true;
}

