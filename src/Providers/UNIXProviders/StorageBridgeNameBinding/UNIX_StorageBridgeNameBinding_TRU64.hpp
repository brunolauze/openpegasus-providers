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


UNIX_StorageBridgeNameBinding::UNIX_StorageBridgeNameBinding(void)
{
}

UNIX_StorageBridgeNameBinding::~UNIX_StorageBridgeNameBinding(void)
{
}

Boolean UNIX_StorageBridgeNameBinding::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageBridgeNameBinding::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageBridgeNameBinding::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageBridgeNameBinding::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageBridgeNameBinding::getCaption() const
{
	return _caption;
}

void UNIX_StorageBridgeNameBinding::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageBridgeNameBinding::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageBridgeNameBinding::getDescription() const
{
	return _description;
}

void UNIX_StorageBridgeNameBinding::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageBridgeNameBinding::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageBridgeNameBinding::getElementName() const
{
	return _elementName;
}

void UNIX_StorageBridgeNameBinding::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageBridgeNameBinding::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageBridgeNameBinding::getGeneration() const
{
	return _generation;
}

void UNIX_StorageBridgeNameBinding::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageBridgeNameBinding::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StorageBridgeNameBinding::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_StorageBridgeNameBinding::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_StorageBridgeNameBinding::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StorageBridgeNameBinding::getChangeableType() const
{
	return _changeableType;
}

void UNIX_StorageBridgeNameBinding::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_StorageBridgeNameBinding::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_StorageBridgeNameBinding::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_StorageBridgeNameBinding::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_StorageBridgeNameBinding::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_StorageBridgeNameBinding::getSoID() const
{
	return _soID;
}

void UNIX_StorageBridgeNameBinding::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_StorageBridgeNameBinding::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_StorageBridgeNameBinding::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_StorageBridgeNameBinding::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_StorageBridgeNameBinding::getBindingType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BINDING_TYPE, getBindingType());
	return true;
}

Uint16 UNIX_StorageBridgeNameBinding::getBindingType() const
{
	return _bindingType;
}

void UNIX_StorageBridgeNameBinding::setBindingType(Uint16 &value)
{
	_bindingType = value;
}

Boolean UNIX_StorageBridgeNameBinding::getBindAllLogicalUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BIND_ALL_LOGICAL_UNITS, getBindAllLogicalUnits());
	return true;
}

Boolean UNIX_StorageBridgeNameBinding::getBindAllLogicalUnits() const
{
	return _bindAllLogicalUnits;
}

void UNIX_StorageBridgeNameBinding::setBindAllLogicalUnits(Boolean &value)
{
	_bindAllLogicalUnits = value;
}

Boolean UNIX_StorageBridgeNameBinding::getHide(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIDE, getHide());
	return true;
}

Boolean UNIX_StorageBridgeNameBinding::getHide() const
{
	return _hide;
}

void UNIX_StorageBridgeNameBinding::setHide(Boolean &value)
{
	_hide = value;
}

Boolean UNIX_StorageBridgeNameBinding::getTargetName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_NAME, getTargetName());
	return true;
}

String UNIX_StorageBridgeNameBinding::getTargetName() const
{
	return _targetName;
}

void UNIX_StorageBridgeNameBinding::setTargetName(String &value)
{
	_targetName = value;
}

Boolean UNIX_StorageBridgeNameBinding::getLogicalUnitNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_UNIT_NUMBER, getLogicalUnitNumber());
	return true;
}

String UNIX_StorageBridgeNameBinding::getLogicalUnitNumber() const
{
	return _logicalUnitNumber;
}

void UNIX_StorageBridgeNameBinding::setLogicalUnitNumber(String &value)
{
	_logicalUnitNumber = value;
}

Boolean UNIX_StorageBridgeNameBinding::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

Uint32 UNIX_StorageBridgeNameBinding::getStatus() const
{
	return _status;
}

void UNIX_StorageBridgeNameBinding::setStatus(Uint32 &value)
{
	_status = value;
}

Boolean UNIX_StorageBridgeNameBinding::getOtherStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_STATUS, getOtherStatus());
	return true;
}

String UNIX_StorageBridgeNameBinding::getOtherStatus() const
{
	return _otherStatus;
}

void UNIX_StorageBridgeNameBinding::setOtherStatus(String &value)
{
	_otherStatus = value;
}

Boolean UNIX_StorageBridgeNameBinding::getLocalPortNameType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PORT_NAME_TYPE, getLocalPortNameType());
	return true;
}

Uint16 UNIX_StorageBridgeNameBinding::getLocalPortNameType() const
{
	return _localPortNameType;
}

void UNIX_StorageBridgeNameBinding::setLocalPortNameType(Uint16 &value)
{
	_localPortNameType = value;
}

Boolean UNIX_StorageBridgeNameBinding::getLocalPortName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PORT_NAME, getLocalPortName());
	return true;
}

String UNIX_StorageBridgeNameBinding::getLocalPortName() const
{
	return _localPortName;
}

void UNIX_StorageBridgeNameBinding::setLocalPortName(String &value)
{
	_localPortName = value;
}

Boolean UNIX_StorageBridgeNameBinding::getInitiatorPortName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIATOR_PORT_NAME, getInitiatorPortName());
	return true;
}

String UNIX_StorageBridgeNameBinding::getInitiatorPortName() const
{
	return _initiatorPortName;
}

void UNIX_StorageBridgeNameBinding::setInitiatorPortName(String &value)
{
	_initiatorPortName = value;
}

Boolean UNIX_StorageBridgeNameBinding::getInitiatorPortNameType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIATOR_PORT_NAME_TYPE, getInitiatorPortNameType());
	return true;
}

Uint16 UNIX_StorageBridgeNameBinding::getInitiatorPortNameType() const
{
	return _initiatorPortNameType;
}

void UNIX_StorageBridgeNameBinding::setInitiatorPortNameType(Uint16 &value)
{
	_initiatorPortNameType = value;
}

Boolean UNIX_StorageBridgeNameBinding::getAssignedPortName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSIGNED_PORT_NAME, getAssignedPortName());
	return true;
}

String UNIX_StorageBridgeNameBinding::getAssignedPortName() const
{
	return _assignedPortName;
}

void UNIX_StorageBridgeNameBinding::setAssignedPortName(String &value)
{
	_assignedPortName = value;
}

Boolean UNIX_StorageBridgeNameBinding::getAssignedPortNameType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSIGNED_PORT_NAME_TYPE, getAssignedPortNameType());
	return true;
}

Uint16 UNIX_StorageBridgeNameBinding::getAssignedPortNameType() const
{
	return _assignedPortNameType;
}

void UNIX_StorageBridgeNameBinding::setAssignedPortNameType(Uint16 &value)
{
	_assignedPortNameType = value;
}


void UNIX_StorageBridgeNameBinding::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageBridgeNameBinding");
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
	_initiatorPortName = String ("");
	_initiatorPortNameType = Uint16(0);
	_assignedPortName = String ("");
	_assignedPortNameType = Uint16(0);

}

Boolean UNIX_StorageBridgeNameBinding::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InitiatorPortName"))
			{
				String initiatorPortNameValue;
				property.getValue().get(initiatorPortNameValue);
				setInitiatorPortName(initiatorPortNameValue);
			}
			else if (String::equal(property.getName().getString(), "InitiatorPortNameType"))
			{
				Uint16 initiatorPortNameTypeValue;
				property.getValue().get(initiatorPortNameTypeValue);
				setInitiatorPortNameType(initiatorPortNameTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AssignedPortName"))
			{
				String assignedPortNameValue;
				property.getValue().get(assignedPortNameValue);
				setAssignedPortName(assignedPortNameValue);
			}
			else if (String::equal(property.getName().getString(), "AssignedPortNameType"))
			{
				Uint16 assignedPortNameTypeValue;
				property.getValue().get(assignedPortNameTypeValue);
				setAssignedPortNameType(assignedPortNameTypeValue);
			}
	}
	return true;
}


Boolean UNIX_StorageBridgeNameBinding::initialize()
{
	return false;
}

Boolean UNIX_StorageBridgeNameBinding::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageBridgeNameBinding");
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
	_initiatorPortName = String ("");
	_initiatorPortNameType = Uint16(0);
	_assignedPortName = String ("");
	_assignedPortNameType = Uint16(0);
	
	return false;
}

Boolean UNIX_StorageBridgeNameBinding::finalize()
{
	return false;
}


Boolean UNIX_StorageBridgeNameBinding::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageBridgeNameBinding::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageBridgeNameBinding::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageBridgeNameBinding::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageBridgeNameBinding::validateInstance()
{
	return true;
}

