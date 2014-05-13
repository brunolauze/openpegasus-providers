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


UNIX_SSHSettingData::UNIX_SSHSettingData(void)
{
}

UNIX_SSHSettingData::~UNIX_SSHSettingData(void)
{
}

Boolean UNIX_SSHSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SSHSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SSHSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SSHSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SSHSettingData::getCaption() const
{
	return _caption;
}

void UNIX_SSHSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SSHSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SSHSettingData::getDescription() const
{
	return _description;
}

void UNIX_SSHSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SSHSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SSHSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_SSHSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SSHSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SSHSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_SSHSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SSHSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_SSHSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_SSHSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_SSHSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_SSHSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_SSHSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_SSHSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_SSHSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_SSHSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_SSHSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_SSHSettingData::getSoID() const
{
	return _soID;
}

void UNIX_SSHSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_SSHSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_SSHSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_SSHSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_SSHSettingData::getEnabledSSHVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_S_S_H_VERSIONS, getEnabledSSHVersions());
	return true;
}

Array<Uint16> UNIX_SSHSettingData::getEnabledSSHVersions() const
{
	return _enabledSSHVersions;
}

void UNIX_SSHSettingData::setEnabledSSHVersions(Array<Uint16> &value)
{
	_enabledSSHVersions = value;
}

Boolean UNIX_SSHSettingData::getOtherEnabledSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_S_S_H_VERSION, getOtherEnabledSSHVersion());
	return true;
}

String UNIX_SSHSettingData::getOtherEnabledSSHVersion() const
{
	return _otherEnabledSSHVersion;
}

void UNIX_SSHSettingData::setOtherEnabledSSHVersion(String &value)
{
	_otherEnabledSSHVersion = value;
}

Boolean UNIX_SSHSettingData::getSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_H_VERSION, getSSHVersion());
	return true;
}

Uint16 UNIX_SSHSettingData::getSSHVersion() const
{
	return _sSHVersion;
}

void UNIX_SSHSettingData::setSSHVersion(Uint16 &value)
{
	_sSHVersion = value;
}

Boolean UNIX_SSHSettingData::getOtherSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_S_S_H_VERSION, getOtherSSHVersion());
	return true;
}

Array<String> UNIX_SSHSettingData::getOtherSSHVersion() const
{
	return _otherSSHVersion;
}

void UNIX_SSHSettingData::setOtherSSHVersion(Array<String> &value)
{
	_otherSSHVersion = value;
}

Boolean UNIX_SSHSettingData::getEnabledEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_ENCRYPTION_ALGORITHMS, getEnabledEncryptionAlgorithms());
	return true;
}

Array<Uint16> UNIX_SSHSettingData::getEnabledEncryptionAlgorithms() const
{
	return _enabledEncryptionAlgorithms;
}

void UNIX_SSHSettingData::setEnabledEncryptionAlgorithms(Array<Uint16> &value)
{
	_enabledEncryptionAlgorithms = value;
}

Boolean UNIX_SSHSettingData::getOtherEnabledEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_ENCRYPTION_ALGORITHM, getOtherEnabledEncryptionAlgorithm());
	return true;
}

Array<String> UNIX_SSHSettingData::getOtherEnabledEncryptionAlgorithm() const
{
	return _otherEnabledEncryptionAlgorithm;
}

void UNIX_SSHSettingData::setOtherEnabledEncryptionAlgorithm(Array<String> &value)
{
	_otherEnabledEncryptionAlgorithm = value;
}

Boolean UNIX_SSHSettingData::getEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_ALGORITHM, getEncryptionAlgorithm());
	return true;
}

Uint16 UNIX_SSHSettingData::getEncryptionAlgorithm() const
{
	return _encryptionAlgorithm;
}

void UNIX_SSHSettingData::setEncryptionAlgorithm(Uint16 &value)
{
	_encryptionAlgorithm = value;
}

Boolean UNIX_SSHSettingData::getOtherEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCRYPTION_ALGORITHM, getOtherEncryptionAlgorithm());
	return true;
}

String UNIX_SSHSettingData::getOtherEncryptionAlgorithm() const
{
	return _otherEncryptionAlgorithm;
}

void UNIX_SSHSettingData::setOtherEncryptionAlgorithm(String &value)
{
	_otherEncryptionAlgorithm = value;
}

Boolean UNIX_SSHSettingData::getIdleTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_TIMEOUT, getIdleTimeout());
	return true;
}

Uint32 UNIX_SSHSettingData::getIdleTimeout() const
{
	return _idleTimeout;
}

void UNIX_SSHSettingData::setIdleTimeout(Uint32 &value)
{
	_idleTimeout = value;
}

Boolean UNIX_SSHSettingData::getKeepAlive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE, getKeepAlive());
	return true;
}

Boolean UNIX_SSHSettingData::getKeepAlive() const
{
	return _keepAlive;
}

void UNIX_SSHSettingData::setKeepAlive(Boolean &value)
{
	_keepAlive = value;
}

Boolean UNIX_SSHSettingData::getForwardX11(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORWARD_X_1_1, getForwardX11());
	return true;
}

Boolean UNIX_SSHSettingData::getForwardX11() const
{
	return _forwardX11;
}

void UNIX_SSHSettingData::setForwardX11(Boolean &value)
{
	_forwardX11 = value;
}

Boolean UNIX_SSHSettingData::getCompression(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION, getCompression());
	return true;
}

Boolean UNIX_SSHSettingData::getCompression() const
{
	return _compression;
}

void UNIX_SSHSettingData::setCompression(Boolean &value)
{
	_compression = value;
}


void UNIX_SSHSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SSHSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_enabledSSHVersions.clear();
	_otherEnabledSSHVersion = String ("");
	_sSHVersion = Uint16(0);
	_otherSSHVersion.clear();
	_enabledEncryptionAlgorithms.clear();
	_otherEnabledEncryptionAlgorithm.clear();
	_encryptionAlgorithm = Uint16(0);
	_otherEncryptionAlgorithm = String ("");
	_idleTimeout = Uint32(0);
	_keepAlive = Boolean(false);
	_forwardX11 = Boolean(false);
	_compression = Boolean(false);

}

Boolean UNIX_SSHSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "EnabledSSHVersions"))
			{
				Array<Uint16> enabledSSHVersionsValue;
				property.getValue().get(enabledSSHVersionsValue);
				setEnabledSSHVersions(enabledSSHVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledSSHVersion"))
			{
				String otherEnabledSSHVersionValue;
				property.getValue().get(otherEnabledSSHVersionValue);
				setOtherEnabledSSHVersion(otherEnabledSSHVersionValue);
			}
			else if (String::equal(property.getName().getString(), "SSHVersion"))
			{
				Uint16 sSHVersionValue;
				property.getValue().get(sSHVersionValue);
				setSSHVersion(sSHVersionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSSHVersion"))
			{
				Array<String> otherSSHVersionValue;
				property.getValue().get(otherSSHVersionValue);
				setOtherSSHVersion(otherSSHVersionValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledEncryptionAlgorithms"))
			{
				Array<Uint16> enabledEncryptionAlgorithmsValue;
				property.getValue().get(enabledEncryptionAlgorithmsValue);
				setEnabledEncryptionAlgorithms(enabledEncryptionAlgorithmsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledEncryptionAlgorithm"))
			{
				Array<String> otherEnabledEncryptionAlgorithmValue;
				property.getValue().get(otherEnabledEncryptionAlgorithmValue);
				setOtherEnabledEncryptionAlgorithm(otherEnabledEncryptionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "EncryptionAlgorithm"))
			{
				Uint16 encryptionAlgorithmValue;
				property.getValue().get(encryptionAlgorithmValue);
				setEncryptionAlgorithm(encryptionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEncryptionAlgorithm"))
			{
				String otherEncryptionAlgorithmValue;
				property.getValue().get(otherEncryptionAlgorithmValue);
				setOtherEncryptionAlgorithm(otherEncryptionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "IdleTimeout"))
			{
				Uint32 idleTimeoutValue;
				property.getValue().get(idleTimeoutValue);
				setIdleTimeout(idleTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "KeepAlive"))
			{
				Boolean keepAliveValue;
				property.getValue().get(keepAliveValue);
				setKeepAlive(keepAliveValue);
			}
			else if (String::equal(property.getName().getString(), "ForwardX11"))
			{
				Boolean forwardX11Value;
				property.getValue().get(forwardX11Value);
				setForwardX11(forwardX11Value);
			}
			else if (String::equal(property.getName().getString(), "Compression"))
			{
				Boolean compressionValue;
				property.getValue().get(compressionValue);
				setCompression(compressionValue);
			}
	}
	return true;
}


Boolean UNIX_SSHSettingData::initialize()
{
	return false;
}

Boolean UNIX_SSHSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SSHSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_enabledSSHVersions.clear();
	_otherEnabledSSHVersion = String ("");
	_sSHVersion = Uint16(0);
	_otherSSHVersion.clear();
	_enabledEncryptionAlgorithms.clear();
	_otherEnabledEncryptionAlgorithm.clear();
	_encryptionAlgorithm = Uint16(0);
	_otherEncryptionAlgorithm = String ("");
	_idleTimeout = Uint32(0);
	_keepAlive = Boolean(false);
	_forwardX11 = Boolean(false);
	_compression = Boolean(false);
	
	return false;
}

Boolean UNIX_SSHSettingData::finalize()
{
	return false;
}


Boolean UNIX_SSHSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SSHSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SSHSettingData::validateInstance()
{
	return true;
}

