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


UNIX_FilterEntry::UNIX_FilterEntry(void)
{
}

UNIX_FilterEntry::~UNIX_FilterEntry(void)
{
}

Boolean UNIX_FilterEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FilterEntry::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FilterEntry::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FilterEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FilterEntry::getCaption() const
{
	return _caption;
}

void UNIX_FilterEntry::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FilterEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FilterEntry::getDescription() const
{
	return _description;
}

void UNIX_FilterEntry::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FilterEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FilterEntry::getElementName() const
{
	return _elementName;
}

void UNIX_FilterEntry::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FilterEntry::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FilterEntry::getGeneration() const
{
	return _generation;
}

void UNIX_FilterEntry::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FilterEntry::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FilterEntry::getInstallDate() const
{
	return _installDate;
}

void UNIX_FilterEntry::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_FilterEntry::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FilterEntry::getName() const
{
	return _name;
}

void UNIX_FilterEntry::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FilterEntry::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FilterEntry::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_FilterEntry::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_FilterEntry::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FilterEntry::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_FilterEntry::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_FilterEntry::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FilterEntry::getStatus() const
{
	return _status;
}

void UNIX_FilterEntry::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_FilterEntry::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FilterEntry::getHealthState() const
{
	return _healthState;
}

void UNIX_FilterEntry::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_FilterEntry::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FilterEntry::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_FilterEntry::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_FilterEntry::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FilterEntry::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_FilterEntry::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_FilterEntry::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FilterEntry::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_FilterEntry::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_FilterEntry::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FilterEntry::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_FilterEntry::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_FilterEntry::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FilterEntry::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FilterEntry::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FilterEntry::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FilterEntry::getSystemName() const
{
	return _systemName;
}

void UNIX_FilterEntry::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FilterEntry::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FilterEntry::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FilterEntry::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FilterEntry::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_FilterEntry::getIsNegated() const
{
	return _isNegated;
}

void UNIX_FilterEntry::setIsNegated(Boolean &value)
{
	_isNegated = value;
}

Boolean UNIX_FilterEntry::getTrafficType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRAFFIC_TYPE, getTrafficType());
	return true;
}

Uint16 UNIX_FilterEntry::getTrafficType() const
{
	return _trafficType;
}

void UNIX_FilterEntry::setTrafficType(Uint16 &value)
{
	_trafficType = value;
}

Boolean UNIX_FilterEntry::getOtherTrafficType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRAFFIC_TYPE, getOtherTrafficType());
	return true;
}

String UNIX_FilterEntry::getOtherTrafficType() const
{
	return _otherTrafficType;
}

void UNIX_FilterEntry::setOtherTrafficType(String &value)
{
	_otherTrafficType = value;
}

Boolean UNIX_FilterEntry::getMatchConditionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_CONDITION_TYPE, getMatchConditionType());
	return true;
}

Uint16 UNIX_FilterEntry::getMatchConditionType() const
{
	return _matchConditionType;
}

void UNIX_FilterEntry::setMatchConditionType(Uint16 &value)
{
	_matchConditionType = value;
}

Boolean UNIX_FilterEntry::getOtherMatchConditionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MATCH_CONDITION_TYPE, getOtherMatchConditionType());
	return true;
}

String UNIX_FilterEntry::getOtherMatchConditionType() const
{
	return _otherMatchConditionType;
}

void UNIX_FilterEntry::setOtherMatchConditionType(String &value)
{
	_otherMatchConditionType = value;
}

Boolean UNIX_FilterEntry::getMatchConditionValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_CONDITION_VALUE, getMatchConditionValue());
	return true;
}

String UNIX_FilterEntry::getMatchConditionValue() const
{
	return _matchConditionValue;
}

void UNIX_FilterEntry::setMatchConditionValue(String &value)
{
	_matchConditionValue = value;
}

Boolean UNIX_FilterEntry::getAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION, getAction());
	return true;
}

Uint16 UNIX_FilterEntry::getAction() const
{
	return _action;
}

void UNIX_FilterEntry::setAction(Uint16 &value)
{
	_action = value;
}

Boolean UNIX_FilterEntry::getDefaultFilter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_FILTER, getDefaultFilter());
	return true;
}

Boolean UNIX_FilterEntry::getDefaultFilter() const
{
	return _defaultFilter;
}

void UNIX_FilterEntry::setDefaultFilter(Boolean &value)
{
	_defaultFilter = value;
}

Boolean UNIX_FilterEntry::getTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRAFFIC_CLASS, getTrafficClass());
	return true;
}

String UNIX_FilterEntry::getTrafficClass() const
{
	return _trafficClass;
}

void UNIX_FilterEntry::setTrafficClass(String &value)
{
	_trafficClass = value;
}


void UNIX_FilterEntry::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FilterEntry");
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
	_creationClassName = String("UNIX_FilterEntry");
	_isNegated = Boolean(false);
	_trafficType = Uint16(0);
	_otherTrafficType = String ("");
	_matchConditionType = Uint16(0);
	_otherMatchConditionType = String ("");
	_matchConditionValue = String ("");
	_action = Uint16(0);
	_defaultFilter = Boolean(false);
	_trafficClass = String ("");

}

Boolean UNIX_FilterEntry::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsNegated"))
			{
				Boolean isNegatedValue;
				property.getValue().get(isNegatedValue);
				setIsNegated(isNegatedValue);
			}
			else if (String::equal(property.getName().getString(), "TrafficType"))
			{
				Uint16 trafficTypeValue;
				property.getValue().get(trafficTypeValue);
				setTrafficType(trafficTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTrafficType"))
			{
				String otherTrafficTypeValue;
				property.getValue().get(otherTrafficTypeValue);
				setOtherTrafficType(otherTrafficTypeValue);
			}
			else if (String::equal(property.getName().getString(), "MatchConditionType"))
			{
				Uint16 matchConditionTypeValue;
				property.getValue().get(matchConditionTypeValue);
				setMatchConditionType(matchConditionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherMatchConditionType"))
			{
				String otherMatchConditionTypeValue;
				property.getValue().get(otherMatchConditionTypeValue);
				setOtherMatchConditionType(otherMatchConditionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "MatchConditionValue"))
			{
				String matchConditionValueValue;
				property.getValue().get(matchConditionValueValue);
				setMatchConditionValue(matchConditionValueValue);
			}
			else if (String::equal(property.getName().getString(), "Action"))
			{
				Uint16 actionValue;
				property.getValue().get(actionValue);
				setAction(actionValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultFilter"))
			{
				Boolean defaultFilterValue;
				property.getValue().get(defaultFilterValue);
				setDefaultFilter(defaultFilterValue);
			}
			else if (String::equal(property.getName().getString(), "TrafficClass"))
			{
				String trafficClassValue;
				property.getValue().get(trafficClassValue);
				setTrafficClass(trafficClassValue);
			}
	}
	return true;
}


Boolean UNIX_FilterEntry::initialize()
{
	return false;
}

Boolean UNIX_FilterEntry::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FilterEntry");
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
	_creationClassName = String("UNIX_FilterEntry");
	_isNegated = Boolean(false);
	_trafficType = Uint16(0);
	_otherTrafficType = String ("");
	_matchConditionType = Uint16(0);
	_otherMatchConditionType = String ("");
	_matchConditionValue = String ("");
	_action = Uint16(0);
	_defaultFilter = Boolean(false);
	_trafficClass = String ("");
	
	return false;
}

Boolean UNIX_FilterEntry::finalize()
{
	return false;
}

Boolean UNIX_FilterEntry::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FilterEntry::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FilterEntry::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FilterEntry::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FilterEntry::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FilterEntry::validateInstance()
{
	return true;
}

