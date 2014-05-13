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


UNIX_DNSGeneralSettingData::UNIX_DNSGeneralSettingData(void)
{
}

UNIX_DNSGeneralSettingData::~UNIX_DNSGeneralSettingData(void)
{
}

Boolean UNIX_DNSGeneralSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DNSGeneralSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DNSGeneralSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DNSGeneralSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DNSGeneralSettingData::getCaption() const
{
	return _caption;
}

void UNIX_DNSGeneralSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DNSGeneralSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DNSGeneralSettingData::getDescription() const
{
	return _description;
}

void UNIX_DNSGeneralSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DNSGeneralSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DNSGeneralSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_DNSGeneralSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DNSGeneralSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DNSGeneralSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_DNSGeneralSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DNSGeneralSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DNSGeneralSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_DNSGeneralSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_DNSGeneralSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DNSGeneralSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_DNSGeneralSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_DNSGeneralSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_DNSGeneralSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_DNSGeneralSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_DNSGeneralSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_DNSGeneralSettingData::getSoID() const
{
	return _soID;
}

void UNIX_DNSGeneralSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_DNSGeneralSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_DNSGeneralSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_DNSGeneralSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_DNSGeneralSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_DNSGeneralSettingData::getAddressOrigin() const
{
	return _addressOrigin;
}

void UNIX_DNSGeneralSettingData::setAddressOrigin(Uint16 &value)
{
	_addressOrigin = value;
}

Boolean UNIX_DNSGeneralSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DNSGeneralSettingData::getProtocolIFType() const
{
	return _protocolIFType;
}

void UNIX_DNSGeneralSettingData::setProtocolIFType(Uint16 &value)
{
	_protocolIFType = value;
}

Boolean UNIX_DNSGeneralSettingData::getAddressPrefixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_PREFIX_ORIGIN, getAddressPrefixOrigin());
	return true;
}

Uint16 UNIX_DNSGeneralSettingData::getAddressPrefixOrigin() const
{
	return _addressPrefixOrigin;
}

void UNIX_DNSGeneralSettingData::setAddressPrefixOrigin(Uint16 &value)
{
	_addressPrefixOrigin = value;
}

Boolean UNIX_DNSGeneralSettingData::getAddressSuffixOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SUFFIX_ORIGIN, getAddressSuffixOrigin());
	return true;
}

Uint16 UNIX_DNSGeneralSettingData::getAddressSuffixOrigin() const
{
	return _addressSuffixOrigin;
}

void UNIX_DNSGeneralSettingData::setAddressSuffixOrigin(Uint16 &value)
{
	_addressSuffixOrigin = value;
}

Boolean UNIX_DNSGeneralSettingData::getOtherAddressPrefixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION, getOtherAddressPrefixOriginDescription());
	return true;
}

String UNIX_DNSGeneralSettingData::getOtherAddressPrefixOriginDescription() const
{
	return _otherAddressPrefixOriginDescription;
}

void UNIX_DNSGeneralSettingData::setOtherAddressPrefixOriginDescription(String &value)
{
	_otherAddressPrefixOriginDescription = value;
}

Boolean UNIX_DNSGeneralSettingData::getOtherAddressSuffixOriginDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION, getOtherAddressSuffixOriginDescription());
	return true;
}

String UNIX_DNSGeneralSettingData::getOtherAddressSuffixOriginDescription() const
{
	return _otherAddressSuffixOriginDescription;
}

void UNIX_DNSGeneralSettingData::setOtherAddressSuffixOriginDescription(String &value)
{
	_otherAddressSuffixOriginDescription = value;
}

Boolean UNIX_DNSGeneralSettingData::getAppendPrimarySuffixes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPEND_PRIMARY_SUFFIXES, getAppendPrimarySuffixes());
	return true;
}

Boolean UNIX_DNSGeneralSettingData::getAppendPrimarySuffixes() const
{
	return _appendPrimarySuffixes;
}

void UNIX_DNSGeneralSettingData::setAppendPrimarySuffixes(Boolean &value)
{
	_appendPrimarySuffixes = value;
}

Boolean UNIX_DNSGeneralSettingData::getAppendParentSuffixes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPEND_PARENT_SUFFIXES, getAppendParentSuffixes());
	return true;
}

Boolean UNIX_DNSGeneralSettingData::getAppendParentSuffixes() const
{
	return _appendParentSuffixes;
}

void UNIX_DNSGeneralSettingData::setAppendParentSuffixes(Boolean &value)
{
	_appendParentSuffixes = value;
}

Boolean UNIX_DNSGeneralSettingData::getDNSSuffixesToAppend(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DNS_SUFFIXES_TO_APPEND, getDNSSuffixesToAppend());
	return true;
}

Array<String> UNIX_DNSGeneralSettingData::getDNSSuffixesToAppend() const
{
	return _dNSSuffixesToAppend;
}

void UNIX_DNSGeneralSettingData::setDNSSuffixesToAppend(Array<String> &value)
{
	_dNSSuffixesToAppend = value;
}


void UNIX_DNSGeneralSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DNSGeneralSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_addressOrigin = Uint16(0);
	_protocolIFType = Uint16(0);
	_addressPrefixOrigin = Uint16(0);
	_addressSuffixOrigin = Uint16(0);
	_otherAddressPrefixOriginDescription = String ("");
	_otherAddressSuffixOriginDescription = String ("");
	_appendPrimarySuffixes = Boolean(false);
	_appendParentSuffixes = Boolean(false);
	_dNSSuffixesToAppend.clear();

}

Boolean UNIX_DNSGeneralSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "AddressOrigin"))
			{
				Uint16 addressOriginValue;
				property.getValue().get(addressOriginValue);
				setAddressOrigin(addressOriginValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolIFType"))
			{
				Uint16 protocolIFTypeValue;
				property.getValue().get(protocolIFTypeValue);
				setProtocolIFType(protocolIFTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AddressPrefixOrigin"))
			{
				Uint16 addressPrefixOriginValue;
				property.getValue().get(addressPrefixOriginValue);
				setAddressPrefixOrigin(addressPrefixOriginValue);
			}
			else if (String::equal(property.getName().getString(), "AddressSuffixOrigin"))
			{
				Uint16 addressSuffixOriginValue;
				property.getValue().get(addressSuffixOriginValue);
				setAddressSuffixOrigin(addressSuffixOriginValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAddressPrefixOriginDescription"))
			{
				String otherAddressPrefixOriginDescriptionValue;
				property.getValue().get(otherAddressPrefixOriginDescriptionValue);
				setOtherAddressPrefixOriginDescription(otherAddressPrefixOriginDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAddressSuffixOriginDescription"))
			{
				String otherAddressSuffixOriginDescriptionValue;
				property.getValue().get(otherAddressSuffixOriginDescriptionValue);
				setOtherAddressSuffixOriginDescription(otherAddressSuffixOriginDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "AppendPrimarySuffixes"))
			{
				Boolean appendPrimarySuffixesValue;
				property.getValue().get(appendPrimarySuffixesValue);
				setAppendPrimarySuffixes(appendPrimarySuffixesValue);
			}
			else if (String::equal(property.getName().getString(), "AppendParentSuffixes"))
			{
				Boolean appendParentSuffixesValue;
				property.getValue().get(appendParentSuffixesValue);
				setAppendParentSuffixes(appendParentSuffixesValue);
			}
			else if (String::equal(property.getName().getString(), "DNSSuffixesToAppend"))
			{
				Array<String> dNSSuffixesToAppendValue;
				property.getValue().get(dNSSuffixesToAppendValue);
				setDNSSuffixesToAppend(dNSSuffixesToAppendValue);
			}
	}
	return true;
}


Boolean UNIX_DNSGeneralSettingData::initialize()
{
	return false;
}

Boolean UNIX_DNSGeneralSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DNSGeneralSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_addressOrigin = Uint16(0);
	_protocolIFType = Uint16(0);
	_addressPrefixOrigin = Uint16(0);
	_addressSuffixOrigin = Uint16(0);
	_otherAddressPrefixOriginDescription = String ("");
	_otherAddressSuffixOriginDescription = String ("");
	_appendPrimarySuffixes = Boolean(false);
	_appendParentSuffixes = Boolean(false);
	_dNSSuffixesToAppend.clear();
	
	return false;
}

Boolean UNIX_DNSGeneralSettingData::finalize()
{
	return false;
}


Boolean UNIX_DNSGeneralSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DNSGeneralSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSGeneralSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSGeneralSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DNSGeneralSettingData::validateInstance()
{
	return true;
}

