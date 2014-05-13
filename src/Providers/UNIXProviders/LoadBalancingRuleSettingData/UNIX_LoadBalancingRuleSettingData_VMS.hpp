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


UNIX_LoadBalancingRuleSettingData::UNIX_LoadBalancingRuleSettingData(void)
{
}

UNIX_LoadBalancingRuleSettingData::~UNIX_LoadBalancingRuleSettingData(void)
{
}

Boolean UNIX_LoadBalancingRuleSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LoadBalancingRuleSettingData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getCaption() const
{
	return _caption;
}

void UNIX_LoadBalancingRuleSettingData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getDescription() const
{
	return _description;
}

void UNIX_LoadBalancingRuleSettingData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getElementName() const
{
	return _elementName;
}

void UNIX_LoadBalancingRuleSettingData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LoadBalancingRuleSettingData::getGeneration() const
{
	return _generation;
}

void UNIX_LoadBalancingRuleSettingData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_LoadBalancingRuleSettingData::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_LoadBalancingRuleSettingData::getChangeableType() const
{
	return _changeableType;
}

void UNIX_LoadBalancingRuleSettingData::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_LoadBalancingRuleSettingData::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_LoadBalancingRuleSettingData::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getSoID() const
{
	return _soID;
}

void UNIX_LoadBalancingRuleSettingData::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_LoadBalancingRuleSettingData::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getServerPoolName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVER_POOL_NAME, getServerPoolName());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getServerPoolName() const
{
	return _serverPoolName;
}

void UNIX_LoadBalancingRuleSettingData::setServerPoolName(String &value)
{
	_serverPoolName = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getVirtualIPAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_IP_ADDRESS, getVirtualIPAddress());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getVirtualIPAddress() const
{
	return _virtualIPAddress;
}

void UNIX_LoadBalancingRuleSettingData::setVirtualIPAddress(String &value)
{
	_virtualIPAddress = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getVirtualPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_PORT_NUMBER, getVirtualPortNumber());
	return true;
}

Uint16 UNIX_LoadBalancingRuleSettingData::getVirtualPortNumber() const
{
	return _virtualPortNumber;
}

void UNIX_LoadBalancingRuleSettingData::setVirtualPortNumber(Uint16 &value)
{
	_virtualPortNumber = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getServerPoolMemberIPAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVER_POOL_MEMBER_IP_ADDRESSES, getServerPoolMemberIPAddresses());
	return true;
}

Array<String> UNIX_LoadBalancingRuleSettingData::getServerPoolMemberIPAddresses() const
{
	return _serverPoolMemberIPAddresses;
}

void UNIX_LoadBalancingRuleSettingData::setServerPoolMemberIPAddresses(Array<String> &value)
{
	_serverPoolMemberIPAddresses = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getServerPoolMemberPortNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVER_POOL_MEMBER_PORT_NUMBERS, getServerPoolMemberPortNumbers());
	return true;
}

Array<Uint16> UNIX_LoadBalancingRuleSettingData::getServerPoolMemberPortNumbers() const
{
	return _serverPoolMemberPortNumbers;
}

void UNIX_LoadBalancingRuleSettingData::setServerPoolMemberPortNumbers(Array<Uint16> &value)
{
	_serverPoolMemberPortNumbers = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getServerPoolMemberWeights(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVER_POOL_MEMBER_WEIGHTS, getServerPoolMemberWeights());
	return true;
}

Array<Uint16> UNIX_LoadBalancingRuleSettingData::getServerPoolMemberWeights() const
{
	return _serverPoolMemberWeights;
}

void UNIX_LoadBalancingRuleSettingData::setServerPoolMemberWeights(Array<Uint16> &value)
{
	_serverPoolMemberWeights = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getInputNetworkName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_NETWORK_NAME, getInputNetworkName());
	return true;
}

String UNIX_LoadBalancingRuleSettingData::getInputNetworkName() const
{
	return _inputNetworkName;
}

void UNIX_LoadBalancingRuleSettingData::setInputNetworkName(String &value)
{
	_inputNetworkName = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALGORITHM, getAlgorithm());
	return true;
}

Uint16 UNIX_LoadBalancingRuleSettingData::getAlgorithm() const
{
	return _algorithm;
}

void UNIX_LoadBalancingRuleSettingData::setAlgorithm(Uint16 &value)
{
	_algorithm = value;
}

Boolean UNIX_LoadBalancingRuleSettingData::getProtocols(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOLS, getProtocols());
	return true;
}

Array<Uint16> UNIX_LoadBalancingRuleSettingData::getProtocols() const
{
	return _protocols;
}

void UNIX_LoadBalancingRuleSettingData::setProtocols(Array<Uint16> &value)
{
	_protocols = value;
}


void UNIX_LoadBalancingRuleSettingData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LoadBalancingRuleSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_serverPoolName = String ("");
	_virtualIPAddress = String ("");
	_virtualPortNumber = Uint16(0);
	_serverPoolMemberIPAddresses.clear();
	_serverPoolMemberPortNumbers.clear();
	_serverPoolMemberWeights.clear();
	_inputNetworkName = String ("");
	_algorithm = Uint16(0);
	_protocols.clear();

}

Boolean UNIX_LoadBalancingRuleSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ServerPoolName"))
			{
				String serverPoolNameValue;
				property.getValue().get(serverPoolNameValue);
				setServerPoolName(serverPoolNameValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualIPAddress"))
			{
				String virtualIPAddressValue;
				property.getValue().get(virtualIPAddressValue);
				setVirtualIPAddress(virtualIPAddressValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualPortNumber"))
			{
				Uint16 virtualPortNumberValue;
				property.getValue().get(virtualPortNumberValue);
				setVirtualPortNumber(virtualPortNumberValue);
			}
			else if (String::equal(property.getName().getString(), "ServerPoolMemberIPAddresses"))
			{
				Array<String> serverPoolMemberIPAddressesValue;
				property.getValue().get(serverPoolMemberIPAddressesValue);
				setServerPoolMemberIPAddresses(serverPoolMemberIPAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "ServerPoolMemberPortNumbers"))
			{
				Array<Uint16> serverPoolMemberPortNumbersValue;
				property.getValue().get(serverPoolMemberPortNumbersValue);
				setServerPoolMemberPortNumbers(serverPoolMemberPortNumbersValue);
			}
			else if (String::equal(property.getName().getString(), "ServerPoolMemberWeights"))
			{
				Array<Uint16> serverPoolMemberWeightsValue;
				property.getValue().get(serverPoolMemberWeightsValue);
				setServerPoolMemberWeights(serverPoolMemberWeightsValue);
			}
			else if (String::equal(property.getName().getString(), "InputNetworkName"))
			{
				String inputNetworkNameValue;
				property.getValue().get(inputNetworkNameValue);
				setInputNetworkName(inputNetworkNameValue);
			}
			else if (String::equal(property.getName().getString(), "Algorithm"))
			{
				Uint16 algorithmValue;
				property.getValue().get(algorithmValue);
				setAlgorithm(algorithmValue);
			}
			else if (String::equal(property.getName().getString(), "Protocols"))
			{
				Array<Uint16> protocolsValue;
				property.getValue().get(protocolsValue);
				setProtocols(protocolsValue);
			}
	}
	return true;
}


Boolean UNIX_LoadBalancingRuleSettingData::initialize()
{
	return false;
}

Boolean UNIX_LoadBalancingRuleSettingData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LoadBalancingRuleSettingData");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_serverPoolName = String ("");
	_virtualIPAddress = String ("");
	_virtualPortNumber = Uint16(0);
	_serverPoolMemberIPAddresses.clear();
	_serverPoolMemberPortNumbers.clear();
	_serverPoolMemberWeights.clear();
	_inputNetworkName = String ("");
	_algorithm = Uint16(0);
	_protocols.clear();
	
	return false;
}

Boolean UNIX_LoadBalancingRuleSettingData::finalize()
{
	return false;
}


Boolean UNIX_LoadBalancingRuleSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LoadBalancingRuleSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LoadBalancingRuleSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LoadBalancingRuleSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LoadBalancingRuleSettingData::validateInstance()
{
	return true;
}

