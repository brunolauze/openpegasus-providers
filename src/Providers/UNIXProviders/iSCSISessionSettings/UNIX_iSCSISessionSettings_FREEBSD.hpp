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


UNIX_iSCSISessionSettings::UNIX_iSCSISessionSettings(void)
{
}

UNIX_iSCSISessionSettings::~UNIX_iSCSISessionSettings(void)
{
}

Boolean UNIX_iSCSISessionSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSISessionSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSISessionSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSISessionSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSISessionSettings::getCaption() const
{
	return _caption;
}

void UNIX_iSCSISessionSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSISessionSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSISessionSettings::getDescription() const
{
	return _description;
}

void UNIX_iSCSISessionSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSISessionSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSISessionSettings::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSISessionSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSISessionSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSISessionSettings::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSISessionSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSISessionSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_iSCSISessionSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_iSCSISessionSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_iSCSISessionSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_iSCSISessionSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_iSCSISessionSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_iSCSISessionSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_iSCSISessionSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_iSCSISessionSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_iSCSISessionSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_iSCSISessionSettings::getSoID() const
{
	return _soID;
}

void UNIX_iSCSISessionSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_iSCSISessionSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_iSCSISessionSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_iSCSISessionSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_iSCSISessionSettings::getMaxConnectionsPerSession(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS_PER_SESSION, getMaxConnectionsPerSession());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getMaxConnectionsPerSession() const
{
	return _maxConnectionsPerSession;
}

void UNIX_iSCSISessionSettings::setMaxConnectionsPerSession(Uint32 &value)
{
	_maxConnectionsPerSession = value;
}

Boolean UNIX_iSCSISessionSettings::getInitialR2TPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_R_2_T_PREFERENCE, getInitialR2TPreference());
	return true;
}

Boolean UNIX_iSCSISessionSettings::getInitialR2TPreference() const
{
	return _initialR2TPreference;
}

void UNIX_iSCSISessionSettings::setInitialR2TPreference(Boolean &value)
{
	_initialR2TPreference = value;
}

Boolean UNIX_iSCSISessionSettings::getImmediateDataPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMMEDIATE_DATA_PREFERENCE, getImmediateDataPreference());
	return true;
}

Boolean UNIX_iSCSISessionSettings::getImmediateDataPreference() const
{
	return _immediateDataPreference;
}

void UNIX_iSCSISessionSettings::setImmediateDataPreference(Boolean &value)
{
	_immediateDataPreference = value;
}

Boolean UNIX_iSCSISessionSettings::getMaxOutstandingR2T(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_OUTSTANDING_R_2_T, getMaxOutstandingR2T());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getMaxOutstandingR2T() const
{
	return _maxOutstandingR2T;
}

void UNIX_iSCSISessionSettings::setMaxOutstandingR2T(Uint32 &value)
{
	_maxOutstandingR2T = value;
}

Boolean UNIX_iSCSISessionSettings::getMaxUnsolicitedFirstDataBurstLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH, getMaxUnsolicitedFirstDataBurstLength());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getMaxUnsolicitedFirstDataBurstLength() const
{
	return _maxUnsolicitedFirstDataBurstLength;
}

void UNIX_iSCSISessionSettings::setMaxUnsolicitedFirstDataBurstLength(Uint32 &value)
{
	_maxUnsolicitedFirstDataBurstLength = value;
}

Boolean UNIX_iSCSISessionSettings::getMaxDataBurstLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_BURST_LENGTH, getMaxDataBurstLength());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getMaxDataBurstLength() const
{
	return _maxDataBurstLength;
}

void UNIX_iSCSISessionSettings::setMaxDataBurstLength(Uint32 &value)
{
	_maxDataBurstLength = value;
}

Boolean UNIX_iSCSISessionSettings::getDataSequenceInOrderPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_SEQUENCE_IN_ORDER_PREFERENCE, getDataSequenceInOrderPreference());
	return true;
}

Boolean UNIX_iSCSISessionSettings::getDataSequenceInOrderPreference() const
{
	return _dataSequenceInOrderPreference;
}

void UNIX_iSCSISessionSettings::setDataSequenceInOrderPreference(Boolean &value)
{
	_dataSequenceInOrderPreference = value;
}

Boolean UNIX_iSCSISessionSettings::getDataPDUInOrderPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_P_D_U_IN_ORDER_PREFERENCE, getDataPDUInOrderPreference());
	return true;
}

Boolean UNIX_iSCSISessionSettings::getDataPDUInOrderPreference() const
{
	return _dataPDUInOrderPreference;
}

void UNIX_iSCSISessionSettings::setDataPDUInOrderPreference(Boolean &value)
{
	_dataPDUInOrderPreference = value;
}

Boolean UNIX_iSCSISessionSettings::getDefaultTimeToWaitPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_WAIT_PREFERENCE, getDefaultTimeToWaitPreference());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getDefaultTimeToWaitPreference() const
{
	return _defaultTimeToWaitPreference;
}

void UNIX_iSCSISessionSettings::setDefaultTimeToWaitPreference(Uint32 &value)
{
	_defaultTimeToWaitPreference = value;
}

Boolean UNIX_iSCSISessionSettings::getDefaultTimeToRetainPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_RETAIN_PREFERENCE, getDefaultTimeToRetainPreference());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getDefaultTimeToRetainPreference() const
{
	return _defaultTimeToRetainPreference;
}

void UNIX_iSCSISessionSettings::setDefaultTimeToRetainPreference(Uint32 &value)
{
	_defaultTimeToRetainPreference = value;
}

Boolean UNIX_iSCSISessionSettings::getErrorRecoveryLevelPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RECOVERY_LEVEL_PREFERENCE, getErrorRecoveryLevelPreference());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getErrorRecoveryLevelPreference() const
{
	return _errorRecoveryLevelPreference;
}

void UNIX_iSCSISessionSettings::setErrorRecoveryLevelPreference(Uint32 &value)
{
	_errorRecoveryLevelPreference = value;
}


void UNIX_iSCSISessionSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSISessionSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxConnectionsPerSession = Uint32(0);
	_initialR2TPreference = Boolean(false);
	_immediateDataPreference = Boolean(false);
	_maxOutstandingR2T = Uint32(0);
	_maxUnsolicitedFirstDataBurstLength = Uint32(0);
	_maxDataBurstLength = Uint32(0);
	_dataSequenceInOrderPreference = Boolean(false);
	_dataPDUInOrderPreference = Boolean(false);
	_defaultTimeToWaitPreference = Uint32(0);
	_defaultTimeToRetainPreference = Uint32(0);
	_errorRecoveryLevelPreference = Uint32(0);

}

Boolean UNIX_iSCSISessionSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxConnectionsPerSession"))
			{
				Uint32 maxConnectionsPerSessionValue;
				property.getValue().get(maxConnectionsPerSessionValue);
				setMaxConnectionsPerSession(maxConnectionsPerSessionValue);
			}
			else if (String::equal(property.getName().getString(), "InitialR2TPreference"))
			{
				Boolean initialR2TPreferenceValue;
				property.getValue().get(initialR2TPreferenceValue);
				setInitialR2TPreference(initialR2TPreferenceValue);
			}
			else if (String::equal(property.getName().getString(), "ImmediateDataPreference"))
			{
				Boolean immediateDataPreferenceValue;
				property.getValue().get(immediateDataPreferenceValue);
				setImmediateDataPreference(immediateDataPreferenceValue);
			}
			else if (String::equal(property.getName().getString(), "MaxOutstandingR2T"))
			{
				Uint32 maxOutstandingR2TValue;
				property.getValue().get(maxOutstandingR2TValue);
				setMaxOutstandingR2T(maxOutstandingR2TValue);
			}
			else if (String::equal(property.getName().getString(), "MaxUnsolicitedFirstDataBurstLength"))
			{
				Uint32 maxUnsolicitedFirstDataBurstLengthValue;
				property.getValue().get(maxUnsolicitedFirstDataBurstLengthValue);
				setMaxUnsolicitedFirstDataBurstLength(maxUnsolicitedFirstDataBurstLengthValue);
			}
			else if (String::equal(property.getName().getString(), "MaxDataBurstLength"))
			{
				Uint32 maxDataBurstLengthValue;
				property.getValue().get(maxDataBurstLengthValue);
				setMaxDataBurstLength(maxDataBurstLengthValue);
			}
			else if (String::equal(property.getName().getString(), "DataSequenceInOrderPreference"))
			{
				Boolean dataSequenceInOrderPreferenceValue;
				property.getValue().get(dataSequenceInOrderPreferenceValue);
				setDataSequenceInOrderPreference(dataSequenceInOrderPreferenceValue);
			}
			else if (String::equal(property.getName().getString(), "DataPDUInOrderPreference"))
			{
				Boolean dataPDUInOrderPreferenceValue;
				property.getValue().get(dataPDUInOrderPreferenceValue);
				setDataPDUInOrderPreference(dataPDUInOrderPreferenceValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultTimeToWaitPreference"))
			{
				Uint32 defaultTimeToWaitPreferenceValue;
				property.getValue().get(defaultTimeToWaitPreferenceValue);
				setDefaultTimeToWaitPreference(defaultTimeToWaitPreferenceValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultTimeToRetainPreference"))
			{
				Uint32 defaultTimeToRetainPreferenceValue;
				property.getValue().get(defaultTimeToRetainPreferenceValue);
				setDefaultTimeToRetainPreference(defaultTimeToRetainPreferenceValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorRecoveryLevelPreference"))
			{
				Uint32 errorRecoveryLevelPreferenceValue;
				property.getValue().get(errorRecoveryLevelPreferenceValue);
				setErrorRecoveryLevelPreference(errorRecoveryLevelPreferenceValue);
			}
	}
	return true;
}


Boolean UNIX_iSCSISessionSettings::initialize()
{
	return false;
}

Boolean UNIX_iSCSISessionSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSISessionSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxConnectionsPerSession = Uint32(0);
	_initialR2TPreference = Boolean(false);
	_immediateDataPreference = Boolean(false);
	_maxOutstandingR2T = Uint32(0);
	_maxUnsolicitedFirstDataBurstLength = Uint32(0);
	_maxDataBurstLength = Uint32(0);
	_dataSequenceInOrderPreference = Boolean(false);
	_dataPDUInOrderPreference = Boolean(false);
	_defaultTimeToWaitPreference = Uint32(0);
	_defaultTimeToRetainPreference = Uint32(0);
	_errorRecoveryLevelPreference = Uint32(0);
	
	return false;
}

Boolean UNIX_iSCSISessionSettings::finalize()
{
	return false;
}


Boolean UNIX_iSCSISessionSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_iSCSISessionSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSISessionSettings::validateInstance()
{
	return true;
}

