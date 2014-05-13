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


UNIX_OSStorageNameBinding::UNIX_OSStorageNameBinding(void)
{
}

UNIX_OSStorageNameBinding::~UNIX_OSStorageNameBinding(void)
{
}

Boolean UNIX_OSStorageNameBinding::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSStorageNameBinding::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OSStorageNameBinding::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OSStorageNameBinding::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSStorageNameBinding::getCaption() const
{
	return _caption;
}

void UNIX_OSStorageNameBinding::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OSStorageNameBinding::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSStorageNameBinding::getDescription() const
{
	return _description;
}

void UNIX_OSStorageNameBinding::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OSStorageNameBinding::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSStorageNameBinding::getElementName() const
{
	return _elementName;
}

void UNIX_OSStorageNameBinding::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OSStorageNameBinding::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OSStorageNameBinding::getGeneration() const
{
	return _generation;
}

void UNIX_OSStorageNameBinding::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OSStorageNameBinding::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_OSStorageNameBinding::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_OSStorageNameBinding::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_OSStorageNameBinding::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_OSStorageNameBinding::getChangeableType() const
{
	return _changeableType;
}

void UNIX_OSStorageNameBinding::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_OSStorageNameBinding::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_OSStorageNameBinding::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_OSStorageNameBinding::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_OSStorageNameBinding::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_OSStorageNameBinding::getSoID() const
{
	return _soID;
}

void UNIX_OSStorageNameBinding::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_OSStorageNameBinding::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_OSStorageNameBinding::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_OSStorageNameBinding::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_OSStorageNameBinding::getBindingType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BINDING_TYPE, getBindingType());
	return true;
}

Uint16 UNIX_OSStorageNameBinding::getBindingType() const
{
	return _bindingType;
}

void UNIX_OSStorageNameBinding::setBindingType(Uint16 &value)
{
	_bindingType = value;
}

Boolean UNIX_OSStorageNameBinding::getBindAllLogicalUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BIND_ALL_LOGICAL_UNITS, getBindAllLogicalUnits());
	return true;
}

Boolean UNIX_OSStorageNameBinding::getBindAllLogicalUnits() const
{
	return _bindAllLogicalUnits;
}

void UNIX_OSStorageNameBinding::setBindAllLogicalUnits(Boolean &value)
{
	_bindAllLogicalUnits = value;
}

Boolean UNIX_OSStorageNameBinding::getHide(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIDE, getHide());
	return true;
}

Boolean UNIX_OSStorageNameBinding::getHide() const
{
	return _hide;
}

void UNIX_OSStorageNameBinding::setHide(Boolean &value)
{
	_hide = value;
}

Boolean UNIX_OSStorageNameBinding::getTargetName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_NAME, getTargetName());
	return true;
}

String UNIX_OSStorageNameBinding::getTargetName() const
{
	return _targetName;
}

void UNIX_OSStorageNameBinding::setTargetName(String &value)
{
	_targetName = value;
}

Boolean UNIX_OSStorageNameBinding::getLogicalUnitNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_UNIT_NUMBER, getLogicalUnitNumber());
	return true;
}

String UNIX_OSStorageNameBinding::getLogicalUnitNumber() const
{
	return _logicalUnitNumber;
}

void UNIX_OSStorageNameBinding::setLogicalUnitNumber(String &value)
{
	_logicalUnitNumber = value;
}

Boolean UNIX_OSStorageNameBinding::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

Uint32 UNIX_OSStorageNameBinding::getStatus() const
{
	return _status;
}

void UNIX_OSStorageNameBinding::setStatus(Uint32 &value)
{
	_status = value;
}

Boolean UNIX_OSStorageNameBinding::getOtherStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_STATUS, getOtherStatus());
	return true;
}

String UNIX_OSStorageNameBinding::getOtherStatus() const
{
	return _otherStatus;
}

void UNIX_OSStorageNameBinding::setOtherStatus(String &value)
{
	_otherStatus = value;
}

Boolean UNIX_OSStorageNameBinding::getLocalPortNameType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PORT_NAME_TYPE, getLocalPortNameType());
	return true;
}

Uint16 UNIX_OSStorageNameBinding::getLocalPortNameType() const
{
	return _localPortNameType;
}

void UNIX_OSStorageNameBinding::setLocalPortNameType(Uint16 &value)
{
	_localPortNameType = value;
}

Boolean UNIX_OSStorageNameBinding::getLocalPortName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PORT_NAME, getLocalPortName());
	return true;
}

String UNIX_OSStorageNameBinding::getLocalPortName() const
{
	return _localPortName;
}

void UNIX_OSStorageNameBinding::setLocalPortName(String &value)
{
	_localPortName = value;
}

Boolean UNIX_OSStorageNameBinding::getOSDeviceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_DEVICE_NAME, getOSDeviceName());
	return true;
}

String UNIX_OSStorageNameBinding::getOSDeviceName() const
{
	return _oSDeviceName;
}

void UNIX_OSStorageNameBinding::setOSDeviceName(String &value)
{
	_oSDeviceName = value;
}

Boolean UNIX_OSStorageNameBinding::getOSAddressesValid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_ADDRESSES_VALID, getOSAddressesValid());
	return true;
}

Boolean UNIX_OSStorageNameBinding::getOSAddressesValid() const
{
	return _oSAddressesValid;
}

void UNIX_OSStorageNameBinding::setOSAddressesValid(Boolean &value)
{
	_oSAddressesValid = value;
}

Boolean UNIX_OSStorageNameBinding::getOSBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_BUS_NUMBER, getOSBusNumber());
	return true;
}

Uint32 UNIX_OSStorageNameBinding::getOSBusNumber() const
{
	return _oSBusNumber;
}

void UNIX_OSStorageNameBinding::setOSBusNumber(Uint32 &value)
{
	_oSBusNumber = value;
}

Boolean UNIX_OSStorageNameBinding::getOSTargetNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_TARGET_NUMBER, getOSTargetNumber());
	return true;
}

Uint32 UNIX_OSStorageNameBinding::getOSTargetNumber() const
{
	return _oSTargetNumber;
}

void UNIX_OSStorageNameBinding::setOSTargetNumber(Uint32 &value)
{
	_oSTargetNumber = value;
}

Boolean UNIX_OSStorageNameBinding::getOSLUN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_L_U_N, getOSLUN());
	return true;
}

Uint32 UNIX_OSStorageNameBinding::getOSLUN() const
{
	return _oSLUN;
}

void UNIX_OSStorageNameBinding::setOSLUN(Uint32 &value)
{
	_oSLUN = value;
}


void UNIX_OSStorageNameBinding::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSStorageNameBinding");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_bindingType = Uint16(0);
	_bindAllLogicalUnits = Boolean(false);
	_hide = Boolean(false);
	_targetName = String ("");
	_logicalUnitNumber = String ("");
	_status = Uint32(0);
	_otherStatus = String ("");
	_localPortNameType = Uint16(0);
	_localPortName = String ("");
	_oSDeviceName = String ("");
	_oSAddressesValid = Boolean(false);
	_oSBusNumber = Uint32(0);
	_oSTargetNumber = Uint32(0);
	_oSLUN = Uint32(0);

}

Boolean UNIX_OSStorageNameBinding::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BindingType"))
			{
				Uint16 bindingTypeValue;
				property.getValue().get(bindingTypeValue);
				setBindingType(bindingTypeValue);
			}
			else if (String::equal(property.getName().getString(), "BindAllLogicalUnits"))
			{
				Boolean bindAllLogicalUnitsValue;
				property.getValue().get(bindAllLogicalUnitsValue);
				setBindAllLogicalUnits(bindAllLogicalUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "Hide"))
			{
				Boolean hideValue;
				property.getValue().get(hideValue);
				setHide(hideValue);
			}
			else if (String::equal(property.getName().getString(), "TargetName"))
			{
				String targetNameValue;
				property.getValue().get(targetNameValue);
				setTargetName(targetNameValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalUnitNumber"))
			{
				String logicalUnitNumberValue;
				property.getValue().get(logicalUnitNumberValue);
				setLogicalUnitNumber(logicalUnitNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				Uint32 statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "OtherStatus"))
			{
				String otherStatusValue;
				property.getValue().get(otherStatusValue);
				setOtherStatus(otherStatusValue);
			}
			else if (String::equal(property.getName().getString(), "LocalPortNameType"))
			{
				Uint16 localPortNameTypeValue;
				property.getValue().get(localPortNameTypeValue);
				setLocalPortNameType(localPortNameTypeValue);
			}
			else if (String::equal(property.getName().getString(), "LocalPortName"))
			{
				String localPortNameValue;
				property.getValue().get(localPortNameValue);
				setLocalPortName(localPortNameValue);
			}
			else if (String::equal(property.getName().getString(), "OSDeviceName"))
			{
				String oSDeviceNameValue;
				property.getValue().get(oSDeviceNameValue);
				setOSDeviceName(oSDeviceNameValue);
			}
			else if (String::equal(property.getName().getString(), "OSAddressesValid"))
			{
				Boolean oSAddressesValidValue;
				property.getValue().get(oSAddressesValidValue);
				setOSAddressesValid(oSAddressesValidValue);
			}
			else if (String::equal(property.getName().getString(), "OSBusNumber"))
			{
				Uint32 oSBusNumberValue;
				property.getValue().get(oSBusNumberValue);
				setOSBusNumber(oSBusNumberValue);
			}
			else if (String::equal(property.getName().getString(), "OSTargetNumber"))
			{
				Uint32 oSTargetNumberValue;
				property.getValue().get(oSTargetNumberValue);
				setOSTargetNumber(oSTargetNumberValue);
			}
			else if (String::equal(property.getName().getString(), "OSLUN"))
			{
				Uint32 oSLUNValue;
				property.getValue().get(oSLUNValue);
				setOSLUN(oSLUNValue);
			}
	}
	return true;
}


Boolean UNIX_OSStorageNameBinding::initialize()
{
	return false;
}

Boolean UNIX_OSStorageNameBinding::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSStorageNameBinding");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_bindingType = Uint16(0);
	_bindAllLogicalUnits = Boolean(false);
	_hide = Boolean(false);
	_targetName = String ("");
	_logicalUnitNumber = String ("");
	_status = Uint32(0);
	_otherStatus = String ("");
	_localPortNameType = Uint16(0);
	_localPortName = String ("");
	_oSDeviceName = String ("");
	_oSAddressesValid = Boolean(false);
	_oSBusNumber = Uint32(0);
	_oSTargetNumber = Uint32(0);
	_oSLUN = Uint32(0);
	
	return false;
}

Boolean UNIX_OSStorageNameBinding::finalize()
{
	return false;
}


Boolean UNIX_OSStorageNameBinding::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OSStorageNameBinding::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSStorageNameBinding::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSStorageNameBinding::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSStorageNameBinding::validateInstance()
{
	return true;
}

