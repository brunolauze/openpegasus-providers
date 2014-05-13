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


UNIX_IKEProposal::UNIX_IKEProposal(void)
{
}

UNIX_IKEProposal::~UNIX_IKEProposal(void)
{
}

Boolean UNIX_IKEProposal::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IKEProposal::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IKEProposal::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IKEProposal::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IKEProposal::getCaption() const
{
	return _caption;
}

void UNIX_IKEProposal::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IKEProposal::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IKEProposal::getDescription() const
{
	return _description;
}

void UNIX_IKEProposal::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IKEProposal::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IKEProposal::getElementName() const
{
	return _elementName;
}

void UNIX_IKEProposal::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IKEProposal::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IKEProposal::getGeneration() const
{
	return _generation;
}

void UNIX_IKEProposal::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IKEProposal::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_IKEProposal::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_IKEProposal::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_IKEProposal::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_IKEProposal::getChangeableType() const
{
	return _changeableType;
}

void UNIX_IKEProposal::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_IKEProposal::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_IKEProposal::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_IKEProposal::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_IKEProposal::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_IKEProposal::getSoID() const
{
	return _soID;
}

void UNIX_IKEProposal::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_IKEProposal::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_IKEProposal::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_IKEProposal::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_IKEProposal::getMaxLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_SECONDS, getMaxLifetimeSeconds());
	return true;
}

Uint64 UNIX_IKEProposal::getMaxLifetimeSeconds() const
{
	return _maxLifetimeSeconds;
}

void UNIX_IKEProposal::setMaxLifetimeSeconds(Uint64 &value)
{
	_maxLifetimeSeconds = value;
}

Boolean UNIX_IKEProposal::getMaxLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_KILOBYTES, getMaxLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IKEProposal::getMaxLifetimeKilobytes() const
{
	return _maxLifetimeKilobytes;
}

void UNIX_IKEProposal::setMaxLifetimeKilobytes(Uint64 &value)
{
	_maxLifetimeKilobytes = value;
}

Boolean UNIX_IKEProposal::getCipherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_ALGORITHM, getCipherAlgorithm());
	return true;
}

Uint16 UNIX_IKEProposal::getCipherAlgorithm() const
{
	return _cipherAlgorithm;
}

void UNIX_IKEProposal::setCipherAlgorithm(Uint16 &value)
{
	_cipherAlgorithm = value;
}

Boolean UNIX_IKEProposal::getOtherCipherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CIPHER_ALGORITHM, getOtherCipherAlgorithm());
	return true;
}

String UNIX_IKEProposal::getOtherCipherAlgorithm() const
{
	return _otherCipherAlgorithm;
}

void UNIX_IKEProposal::setOtherCipherAlgorithm(String &value)
{
	_otherCipherAlgorithm = value;
}

Boolean UNIX_IKEProposal::getHashAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HASH_ALGORITHM, getHashAlgorithm());
	return true;
}

Uint16 UNIX_IKEProposal::getHashAlgorithm() const
{
	return _hashAlgorithm;
}

void UNIX_IKEProposal::setHashAlgorithm(Uint16 &value)
{
	_hashAlgorithm = value;
}

Boolean UNIX_IKEProposal::getOtherHashAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HASH_ALGORITHM, getOtherHashAlgorithm());
	return true;
}

String UNIX_IKEProposal::getOtherHashAlgorithm() const
{
	return _otherHashAlgorithm;
}

void UNIX_IKEProposal::setOtherHashAlgorithm(String &value)
{
	_otherHashAlgorithm = value;
}

Boolean UNIX_IKEProposal::getAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD, getAuthenticationMethod());
	return true;
}

Uint16 UNIX_IKEProposal::getAuthenticationMethod() const
{
	return _authenticationMethod;
}

void UNIX_IKEProposal::setAuthenticationMethod(Uint16 &value)
{
	_authenticationMethod = value;
}

Boolean UNIX_IKEProposal::getOtherAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTHENTICATION_METHOD, getOtherAuthenticationMethod());
	return true;
}

String UNIX_IKEProposal::getOtherAuthenticationMethod() const
{
	return _otherAuthenticationMethod;
}

void UNIX_IKEProposal::setOtherAuthenticationMethod(String &value)
{
	_otherAuthenticationMethod = value;
}

Boolean UNIX_IKEProposal::getGroupId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupId());
	return true;
}

Uint16 UNIX_IKEProposal::getGroupId() const
{
	return _groupId;
}

void UNIX_IKEProposal::setGroupId(Uint16 &value)
{
	_groupId = value;
}

Boolean UNIX_IKEProposal::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IKEProposal::getVendorID() const
{
	return _vendorID;
}

void UNIX_IKEProposal::setVendorID(String &value)
{
	_vendorID = value;
}


void UNIX_IKEProposal::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IKEProposal");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxLifetimeSeconds = Uint64(0);
	_maxLifetimeKilobytes = Uint64(0);
	_cipherAlgorithm = Uint16(0);
	_otherCipherAlgorithm = String ("");
	_hashAlgorithm = Uint16(0);
	_otherHashAlgorithm = String ("");
	_authenticationMethod = Uint16(0);
	_otherAuthenticationMethod = String ("");
	_groupId = Uint16(0);
	_vendorID = String ("");

}

Boolean UNIX_IKEProposal::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxLifetimeSeconds"))
			{
				Uint64 maxLifetimeSecondsValue;
				property.getValue().get(maxLifetimeSecondsValue);
				setMaxLifetimeSeconds(maxLifetimeSecondsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxLifetimeKilobytes"))
			{
				Uint64 maxLifetimeKilobytesValue;
				property.getValue().get(maxLifetimeKilobytesValue);
				setMaxLifetimeKilobytes(maxLifetimeKilobytesValue);
			}
			else if (String::equal(property.getName().getString(), "CipherAlgorithm"))
			{
				Uint16 cipherAlgorithmValue;
				property.getValue().get(cipherAlgorithmValue);
				setCipherAlgorithm(cipherAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCipherAlgorithm"))
			{
				String otherCipherAlgorithmValue;
				property.getValue().get(otherCipherAlgorithmValue);
				setOtherCipherAlgorithm(otherCipherAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "HashAlgorithm"))
			{
				Uint16 hashAlgorithmValue;
				property.getValue().get(hashAlgorithmValue);
				setHashAlgorithm(hashAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherHashAlgorithm"))
			{
				String otherHashAlgorithmValue;
				property.getValue().get(otherHashAlgorithmValue);
				setOtherHashAlgorithm(otherHashAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "AuthenticationMethod"))
			{
				Uint16 authenticationMethodValue;
				property.getValue().get(authenticationMethodValue);
				setAuthenticationMethod(authenticationMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAuthenticationMethod"))
			{
				String otherAuthenticationMethodValue;
				property.getValue().get(otherAuthenticationMethodValue);
				setOtherAuthenticationMethod(otherAuthenticationMethodValue);
			}
			else if (String::equal(property.getName().getString(), "GroupId"))
			{
				Uint16 groupIdValue;
				property.getValue().get(groupIdValue);
				setGroupId(groupIdValue);
			}
			else if (String::equal(property.getName().getString(), "VendorID"))
			{
				String vendorIDValue;
				property.getValue().get(vendorIDValue);
				setVendorID(vendorIDValue);
			}
	}
	return true;
}


Boolean UNIX_IKEProposal::initialize()
{
	return false;
}

Boolean UNIX_IKEProposal::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IKEProposal");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxLifetimeSeconds = Uint64(0);
	_maxLifetimeKilobytes = Uint64(0);
	_cipherAlgorithm = Uint16(0);
	_otherCipherAlgorithm = String ("");
	_hashAlgorithm = Uint16(0);
	_otherHashAlgorithm = String ("");
	_authenticationMethod = Uint16(0);
	_otherAuthenticationMethod = String ("");
	_groupId = Uint16(0);
	_vendorID = String ("");
	
	return false;
}

Boolean UNIX_IKEProposal::finalize()
{
	return false;
}


Boolean UNIX_IKEProposal::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IKEProposal::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKEProposal::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKEProposal::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IKEProposal::validateInstance()
{
	return true;
}

