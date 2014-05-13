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


UNIX_RoutingPolicy::UNIX_RoutingPolicy(void)
{
}

UNIX_RoutingPolicy::~UNIX_RoutingPolicy(void)
{
}

Boolean UNIX_RoutingPolicy::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RoutingPolicy::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RoutingPolicy::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RoutingPolicy::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RoutingPolicy::getCaption() const
{
	return _caption;
}

void UNIX_RoutingPolicy::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RoutingPolicy::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RoutingPolicy::getDescription() const
{
	return _description;
}

void UNIX_RoutingPolicy::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RoutingPolicy::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RoutingPolicy::getElementName() const
{
	return _elementName;
}

void UNIX_RoutingPolicy::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RoutingPolicy::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RoutingPolicy::getGeneration() const
{
	return _generation;
}

void UNIX_RoutingPolicy::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RoutingPolicy::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_RoutingPolicy::getInstallDate() const
{
	return _installDate;
}

void UNIX_RoutingPolicy::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_RoutingPolicy::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_RoutingPolicy::getName() const
{
	return _name;
}

void UNIX_RoutingPolicy::setName(String &value)
{
	_name = value;
}

Boolean UNIX_RoutingPolicy::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_RoutingPolicy::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_RoutingPolicy::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_RoutingPolicy::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_RoutingPolicy::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_RoutingPolicy::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_RoutingPolicy::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_RoutingPolicy::getStatus() const
{
	return _status;
}

void UNIX_RoutingPolicy::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_RoutingPolicy::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_RoutingPolicy::getHealthState() const
{
	return _healthState;
}

void UNIX_RoutingPolicy::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_RoutingPolicy::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_RoutingPolicy::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_RoutingPolicy::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_RoutingPolicy::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_RoutingPolicy::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_RoutingPolicy::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_RoutingPolicy::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_RoutingPolicy::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_RoutingPolicy::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_RoutingPolicy::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_RoutingPolicy::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_RoutingPolicy::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_RoutingPolicy::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_RoutingPolicy::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_RoutingPolicy::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_RoutingPolicy::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_RoutingPolicy::getSystemName() const
{
	return _systemName;
}

void UNIX_RoutingPolicy::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_RoutingPolicy::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_RoutingPolicy::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_RoutingPolicy::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_RoutingPolicy::getAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION, getAction());
	return true;
}

Uint16 UNIX_RoutingPolicy::getAction() const
{
	return _action;
}

void UNIX_RoutingPolicy::setAction(Uint16 &value)
{
	_action = value;
}

Boolean UNIX_RoutingPolicy::getAttributeAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_ACTION, getAttributeAction());
	return true;
}

Uint16 UNIX_RoutingPolicy::getAttributeAction() const
{
	return _attributeAction;
}

void UNIX_RoutingPolicy::setAttributeAction(Uint16 &value)
{
	_attributeAction = value;
}

Boolean UNIX_RoutingPolicy::getBGPAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BGP_ACTION, getBGPAction());
	return true;
}

Uint16 UNIX_RoutingPolicy::getBGPAction() const
{
	return _bGPAction;
}

void UNIX_RoutingPolicy::setBGPAction(Uint16 &value)
{
	_bGPAction = value;
}

Boolean UNIX_RoutingPolicy::getBGPValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BGP_VALUE, getBGPValue());
	return true;
}

String UNIX_RoutingPolicy::getBGPValue() const
{
	return _bGPValue;
}

void UNIX_RoutingPolicy::setBGPValue(String &value)
{
	_bGPValue = value;
}

Boolean UNIX_RoutingPolicy::getRemarkAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMARK_ACTION, getRemarkAction());
	return true;
}

Uint16 UNIX_RoutingPolicy::getRemarkAction() const
{
	return _remarkAction;
}

void UNIX_RoutingPolicy::setRemarkAction(Uint16 &value)
{
	_remarkAction = value;
}

Boolean UNIX_RoutingPolicy::getRemarkValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMARK_VALUE, getRemarkValue());
	return true;
}

String UNIX_RoutingPolicy::getRemarkValue() const
{
	return _remarkValue;
}

void UNIX_RoutingPolicy::setRemarkValue(String &value)
{
	_remarkValue = value;
}

Boolean UNIX_RoutingPolicy::getConditioningAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITIONING_ACTION, getConditioningAction());
	return true;
}

Uint16 UNIX_RoutingPolicy::getConditioningAction() const
{
	return _conditioningAction;
}

void UNIX_RoutingPolicy::setConditioningAction(Uint16 &value)
{
	_conditioningAction = value;
}

Boolean UNIX_RoutingPolicy::getOtherConditioningAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CONDITIONING_ACTION, getOtherConditioningAction());
	return true;
}

String UNIX_RoutingPolicy::getOtherConditioningAction() const
{
	return _otherConditioningAction;
}

void UNIX_RoutingPolicy::setOtherConditioningAction(String &value)
{
	_otherConditioningAction = value;
}

Boolean UNIX_RoutingPolicy::getConditioningValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITIONING_VALUE, getConditioningValue());
	return true;
}

String UNIX_RoutingPolicy::getConditioningValue() const
{
	return _conditioningValue;
}

void UNIX_RoutingPolicy::setConditioningValue(String &value)
{
	_conditioningValue = value;
}


void UNIX_RoutingPolicy::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RoutingPolicy");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_RoutingPolicy");
	_action = Uint16(0);
	_attributeAction = Uint16(0);
	_bGPAction = Uint16(0);
	_bGPValue = String ("");
	_remarkAction = Uint16(0);
	_remarkValue = String ("");
	_conditioningAction = Uint16(0);
	_otherConditioningAction = String ("");
	_conditioningValue = String ("");

}

Boolean UNIX_RoutingPolicy::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Action"))
			{
				Uint16 actionValue;
				property.getValue().get(actionValue);
				setAction(actionValue);
			}
			else if (String::equal(property.getName().getString(), "AttributeAction"))
			{
				Uint16 attributeActionValue;
				property.getValue().get(attributeActionValue);
				setAttributeAction(attributeActionValue);
			}
			else if (String::equal(property.getName().getString(), "BGPAction"))
			{
				Uint16 bGPActionValue;
				property.getValue().get(bGPActionValue);
				setBGPAction(bGPActionValue);
			}
			else if (String::equal(property.getName().getString(), "BGPValue"))
			{
				String bGPValueValue;
				property.getValue().get(bGPValueValue);
				setBGPValue(bGPValueValue);
			}
			else if (String::equal(property.getName().getString(), "RemarkAction"))
			{
				Uint16 remarkActionValue;
				property.getValue().get(remarkActionValue);
				setRemarkAction(remarkActionValue);
			}
			else if (String::equal(property.getName().getString(), "RemarkValue"))
			{
				String remarkValueValue;
				property.getValue().get(remarkValueValue);
				setRemarkValue(remarkValueValue);
			}
			else if (String::equal(property.getName().getString(), "ConditioningAction"))
			{
				Uint16 conditioningActionValue;
				property.getValue().get(conditioningActionValue);
				setConditioningAction(conditioningActionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherConditioningAction"))
			{
				String otherConditioningActionValue;
				property.getValue().get(otherConditioningActionValue);
				setOtherConditioningAction(otherConditioningActionValue);
			}
			else if (String::equal(property.getName().getString(), "ConditioningValue"))
			{
				String conditioningValueValue;
				property.getValue().get(conditioningValueValue);
				setConditioningValue(conditioningValueValue);
			}
	}
	return true;
}


Boolean UNIX_RoutingPolicy::initialize()
{
	return false;
}

Boolean UNIX_RoutingPolicy::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RoutingPolicy");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_RoutingPolicy");
	_action = Uint16(0);
	_attributeAction = Uint16(0);
	_bGPAction = Uint16(0);
	_bGPValue = String ("");
	_remarkAction = Uint16(0);
	_remarkValue = String ("");
	_conditioningAction = Uint16(0);
	_otherConditioningAction = String ("");
	_conditioningValue = String ("");
	
	return false;
}

Boolean UNIX_RoutingPolicy::finalize()
{
	return false;
}

Boolean UNIX_RoutingPolicy::loadByName(const String name)
{
	return false;
}

Boolean UNIX_RoutingPolicy::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_RoutingPolicy::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RoutingPolicy::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RoutingPolicy::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RoutingPolicy::validateInstance()
{
	return true;
}

