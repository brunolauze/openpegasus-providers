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


UNIX_ExportedFileShareSetting::UNIX_ExportedFileShareSetting(void)
{
}

UNIX_ExportedFileShareSetting::~UNIX_ExportedFileShareSetting(void)
{
}

Boolean UNIX_ExportedFileShareSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ExportedFileShareSetting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ExportedFileShareSetting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ExportedFileShareSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ExportedFileShareSetting::getCaption() const
{
	return _caption;
}

void UNIX_ExportedFileShareSetting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ExportedFileShareSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ExportedFileShareSetting::getDescription() const
{
	return _description;
}

void UNIX_ExportedFileShareSetting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ExportedFileShareSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ExportedFileShareSetting::getElementName() const
{
	return _elementName;
}

void UNIX_ExportedFileShareSetting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ExportedFileShareSetting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ExportedFileShareSetting::getGeneration() const
{
	return _generation;
}

void UNIX_ExportedFileShareSetting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ExportedFileShareSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ExportedFileShareSetting::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_ExportedFileShareSetting::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_ExportedFileShareSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getChangeableType() const
{
	return _changeableType;
}

void UNIX_ExportedFileShareSetting::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_ExportedFileShareSetting::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_ExportedFileShareSetting::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_ExportedFileShareSetting::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_ExportedFileShareSetting::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_ExportedFileShareSetting::getSoID() const
{
	return _soID;
}

void UNIX_ExportedFileShareSetting::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_ExportedFileShareSetting::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_ExportedFileShareSetting::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_ExportedFileShareSetting::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_ExportedFileShareSetting::getFileSharingProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SHARING_PROTOCOL, getFileSharingProtocol());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getFileSharingProtocol() const
{
	return _fileSharingProtocol;
}

void UNIX_ExportedFileShareSetting::setFileSharingProtocol(Uint16 &value)
{
	_fileSharingProtocol = value;
}

Boolean UNIX_ExportedFileShareSetting::getProtocolVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSIONS, getProtocolVersions());
	return true;
}

Array<String> UNIX_ExportedFileShareSetting::getProtocolVersions() const
{
	return _protocolVersions;
}

void UNIX_ExportedFileShareSetting::setProtocolVersions(Array<String> &value)
{
	_protocolVersions = value;
}

Boolean UNIX_ExportedFileShareSetting::getInitialEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_ENABLED_STATE, getInitialEnabledState());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getInitialEnabledState() const
{
	return _initialEnabledState;
}

void UNIX_ExportedFileShareSetting::setInitialEnabledState(Uint16 &value)
{
	_initialEnabledState = value;
}

Boolean UNIX_ExportedFileShareSetting::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ExportedFileShareSetting::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ExportedFileShareSetting::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ExportedFileShareSetting::getDefaultReadWrite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_READ_WRITE, getDefaultReadWrite());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getDefaultReadWrite() const
{
	return _defaultReadWrite;
}

void UNIX_ExportedFileShareSetting::setDefaultReadWrite(Uint16 &value)
{
	_defaultReadWrite = value;
}

Boolean UNIX_ExportedFileShareSetting::getDefaultExecute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_EXECUTE, getDefaultExecute());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getDefaultExecute() const
{
	return _defaultExecute;
}

void UNIX_ExportedFileShareSetting::setDefaultExecute(Uint16 &value)
{
	_defaultExecute = value;
}

Boolean UNIX_ExportedFileShareSetting::getExecuteSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTE_SUPPORT, getExecuteSupport());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getExecuteSupport() const
{
	return _executeSupport;
}

void UNIX_ExportedFileShareSetting::setExecuteSupport(Uint16 &value)
{
	_executeSupport = value;
}

Boolean UNIX_ExportedFileShareSetting::getDefaultUserIdSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_USER_ID_SUPPORTED, getDefaultUserIdSupported());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getDefaultUserIdSupported() const
{
	return _defaultUserIdSupported;
}

void UNIX_ExportedFileShareSetting::setDefaultUserIdSupported(Uint16 &value)
{
	_defaultUserIdSupported = value;
}

Boolean UNIX_ExportedFileShareSetting::getRootAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT_ACCESS, getRootAccess());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getRootAccess() const
{
	return _rootAccess;
}

void UNIX_ExportedFileShareSetting::setRootAccess(Uint16 &value)
{
	_rootAccess = value;
}

Boolean UNIX_ExportedFileShareSetting::getWritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_POLICY, getWritePolicy());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getWritePolicy() const
{
	return _writePolicy;
}

void UNIX_ExportedFileShareSetting::setWritePolicy(Uint16 &value)
{
	_writePolicy = value;
}

Boolean UNIX_ExportedFileShareSetting::getAccessPoints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_POINTS, getAccessPoints());
	return true;
}

Uint16 UNIX_ExportedFileShareSetting::getAccessPoints() const
{
	return _accessPoints;
}

void UNIX_ExportedFileShareSetting::setAccessPoints(Uint16 &value)
{
	_accessPoints = value;
}


void UNIX_ExportedFileShareSetting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ExportedFileShareSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_fileSharingProtocol = Uint16(0);
	_protocolVersions.clear();
	_initialEnabledState = Uint16(0);
	_otherEnabledState = String ("");
	_defaultReadWrite = Uint16(0);
	_defaultExecute = Uint16(0);
	_executeSupport = Uint16(0);
	_defaultUserIdSupported = Uint16(0);
	_rootAccess = Uint16(0);
	_writePolicy = Uint16(0);
	_accessPoints = Uint16(0);

}

Boolean UNIX_ExportedFileShareSetting::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "FileSharingProtocol"))
			{
				Uint16 fileSharingProtocolValue;
				property.getValue().get(fileSharingProtocolValue);
				setFileSharingProtocol(fileSharingProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolVersions"))
			{
				Array<String> protocolVersionsValue;
				property.getValue().get(protocolVersionsValue);
				setProtocolVersions(protocolVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "InitialEnabledState"))
			{
				Uint16 initialEnabledStateValue;
				property.getValue().get(initialEnabledStateValue);
				setInitialEnabledState(initialEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledState"))
			{
				String otherEnabledStateValue;
				property.getValue().get(otherEnabledStateValue);
				setOtherEnabledState(otherEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultReadWrite"))
			{
				Uint16 defaultReadWriteValue;
				property.getValue().get(defaultReadWriteValue);
				setDefaultReadWrite(defaultReadWriteValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultExecute"))
			{
				Uint16 defaultExecuteValue;
				property.getValue().get(defaultExecuteValue);
				setDefaultExecute(defaultExecuteValue);
			}
			else if (String::equal(property.getName().getString(), "ExecuteSupport"))
			{
				Uint16 executeSupportValue;
				property.getValue().get(executeSupportValue);
				setExecuteSupport(executeSupportValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultUserIdSupported"))
			{
				Uint16 defaultUserIdSupportedValue;
				property.getValue().get(defaultUserIdSupportedValue);
				setDefaultUserIdSupported(defaultUserIdSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "RootAccess"))
			{
				Uint16 rootAccessValue;
				property.getValue().get(rootAccessValue);
				setRootAccess(rootAccessValue);
			}
			else if (String::equal(property.getName().getString(), "WritePolicy"))
			{
				Uint16 writePolicyValue;
				property.getValue().get(writePolicyValue);
				setWritePolicy(writePolicyValue);
			}
			else if (String::equal(property.getName().getString(), "AccessPoints"))
			{
				Uint16 accessPointsValue;
				property.getValue().get(accessPointsValue);
				setAccessPoints(accessPointsValue);
			}
	}
	return true;
}


Boolean UNIX_ExportedFileShareSetting::initialize()
{
	return false;
}

Boolean UNIX_ExportedFileShareSetting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ExportedFileShareSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_fileSharingProtocol = Uint16(0);
	_protocolVersions.clear();
	_initialEnabledState = Uint16(0);
	_otherEnabledState = String ("");
	_defaultReadWrite = Uint16(0);
	_defaultExecute = Uint16(0);
	_executeSupport = Uint16(0);
	_defaultUserIdSupported = Uint16(0);
	_rootAccess = Uint16(0);
	_writePolicy = Uint16(0);
	_accessPoints = Uint16(0);
	
	return false;
}

Boolean UNIX_ExportedFileShareSetting::finalize()
{
	return false;
}


Boolean UNIX_ExportedFileShareSetting::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ExportedFileShareSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExportedFileShareSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExportedFileShareSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ExportedFileShareSetting::validateInstance()
{
	return true;
}

