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


UNIX_GARPMembershipSettingData::UNIX_GARPMembershipSettingData(void)
{
}

UNIX_GARPMembershipSettingData::~UNIX_GARPMembershipSettingData(void)
{
}

Boolean UNIX_GARPMembershipSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_GARPMembershipSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_GARPMembershipSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_GARPMembershipSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_GARPMembershipSettingData::getCaption() const
{
	return _caption;
}

void UNIX_GARPMembershipSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_GARPMembershipSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_GARPMembershipSettingData::getDescription() const
{
	return _description;
}

void UNIX_GARPMembershipSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_GARPMembershipSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_GARPMembershipSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_GARPMembershipSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_GARPMembershipSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_GARPMembershipSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_GARPMembershipSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_GARPMembershipSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_GARPMembershipSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_GARPMembershipSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_GARPMembershipSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_GARPMembershipSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_GARPMembershipSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_GARPMembershipSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_GARPMembershipSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_GARPMembershipSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_GARPMembershipSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_GARPMembershipSettingData::getSoID() const
{
	return _soID;
}

void UNIX_GARPMembershipSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_GARPMembershipSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_GARPMembershipSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_GARPMembershipSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_GARPMembershipSettingData::getConnectivityMemberType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_MEMBER_TYPE, getConnectivityMemberType());
	return true;
}

Uint16 UNIX_GARPMembershipSettingData::getConnectivityMemberType() const
{
	return _connectivityMemberType;
}

void UNIX_GARPMembershipSettingData::setConnectivityMemberType(Uint16 &value)
{
	_connectivityMemberType = value;
}

Boolean UNIX_GARPMembershipSettingData::getOtherConnectivityMemberType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CONNECTIVITY_MEMBER_TYPE, getOtherConnectivityMemberType());
	return true;
}

String UNIX_GARPMembershipSettingData::getOtherConnectivityMemberType() const
{
	return _otherConnectivityMemberType;
}

void UNIX_GARPMembershipSettingData::setOtherConnectivityMemberType(String &value)
{
	_otherConnectivityMemberType = value;
}

Boolean UNIX_GARPMembershipSettingData::getConnectivityMemberID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_MEMBER_ID, getConnectivityMemberID());
	return true;
}

String UNIX_GARPMembershipSettingData::getConnectivityMemberID() const
{
	return _connectivityMemberID;
}

void UNIX_GARPMembershipSettingData::setConnectivityMemberID(String &value)
{
	_connectivityMemberID = value;
}

Boolean UNIX_GARPMembershipSettingData::getDot1dPortGarpJoinTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1D_PORT_GARP_JOIN_TIME, getDot1dPortGarpJoinTime());
	return true;
}

Uint32 UNIX_GARPMembershipSettingData::getDot1dPortGarpJoinTime() const
{
	return _dot1dPortGarpJoinTime;
}

void UNIX_GARPMembershipSettingData::setDot1dPortGarpJoinTime(Uint32 &value)
{
	_dot1dPortGarpJoinTime = value;
}

Boolean UNIX_GARPMembershipSettingData::getDot1dPortGarpLeaveTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1D_PORT_GARP_LEAVE_TIME, getDot1dPortGarpLeaveTime());
	return true;
}

Uint32 UNIX_GARPMembershipSettingData::getDot1dPortGarpLeaveTime() const
{
	return _dot1dPortGarpLeaveTime;
}

void UNIX_GARPMembershipSettingData::setDot1dPortGarpLeaveTime(Uint32 &value)
{
	_dot1dPortGarpLeaveTime = value;
}

Boolean UNIX_GARPMembershipSettingData::getDot1dPortGarpLeaveAllTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1D_PORT_GARP_LEAVE_ALL_TIME, getDot1dPortGarpLeaveAllTime());
	return true;
}

Uint32 UNIX_GARPMembershipSettingData::getDot1dPortGarpLeaveAllTime() const
{
	return _dot1dPortGarpLeaveAllTime;
}

void UNIX_GARPMembershipSettingData::setDot1dPortGarpLeaveAllTime(Uint32 &value)
{
	_dot1dPortGarpLeaveAllTime = value;
}


void UNIX_GARPMembershipSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("GARPMembershipSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_connectivityMemberType = Uint16(0);
	_otherConnectivityMemberType = String ("");
	_connectivityMemberID = String ("");
	_dot1dPortGarpJoinTime = Uint32(0);
	_dot1dPortGarpLeaveTime = Uint32(0);
	_dot1dPortGarpLeaveAllTime = Uint32(0);

}

Boolean UNIX_GARPMembershipSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConnectivityMemberType"))
			{
				Uint16 connectivityMemberTypeValue;
				property.getValue().get(connectivityMemberTypeValue);
				setConnectivityMemberType(connectivityMemberTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherConnectivityMemberType"))
			{
				String otherConnectivityMemberTypeValue;
				property.getValue().get(otherConnectivityMemberTypeValue);
				setOtherConnectivityMemberType(otherConnectivityMemberTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectivityMemberID"))
			{
				String connectivityMemberIDValue;
				property.getValue().get(connectivityMemberIDValue);
				setConnectivityMemberID(connectivityMemberIDValue);
			}
			else if (String::equal(property.getName().getString(), "Dot1dPortGarpJoinTime"))
			{
				Uint32 dot1dPortGarpJoinTimeValue;
				property.getValue().get(dot1dPortGarpJoinTimeValue);
				setDot1dPortGarpJoinTime(dot1dPortGarpJoinTimeValue);
			}
			else if (String::equal(property.getName().getString(), "Dot1dPortGarpLeaveTime"))
			{
				Uint32 dot1dPortGarpLeaveTimeValue;
				property.getValue().get(dot1dPortGarpLeaveTimeValue);
				setDot1dPortGarpLeaveTime(dot1dPortGarpLeaveTimeValue);
			}
			else if (String::equal(property.getName().getString(), "Dot1dPortGarpLeaveAllTime"))
			{
				Uint32 dot1dPortGarpLeaveAllTimeValue;
				property.getValue().get(dot1dPortGarpLeaveAllTimeValue);
				setDot1dPortGarpLeaveAllTime(dot1dPortGarpLeaveAllTimeValue);
			}
	}
	return true;
}


Boolean UNIX_GARPMembershipSettingData::initialize()
{
	return false;
}

Boolean UNIX_GARPMembershipSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("GARPMembershipSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_connectivityMemberType = Uint16(0);
	_otherConnectivityMemberType = String ("");
	_connectivityMemberID = String ("");
	_dot1dPortGarpJoinTime = Uint32(0);
	_dot1dPortGarpLeaveTime = Uint32(0);
	_dot1dPortGarpLeaveAllTime = Uint32(0);
	
	return false;
}

Boolean UNIX_GARPMembershipSettingData::finalize()
{
	return false;
}


Boolean UNIX_GARPMembershipSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_GARPMembershipSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GARPMembershipSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GARPMembershipSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GARPMembershipSettingData::validateInstance()
{
	return true;
}

