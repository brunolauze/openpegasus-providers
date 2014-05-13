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


UNIX_BGPRouteMap::UNIX_BGPRouteMap(void)
{
}

UNIX_BGPRouteMap::~UNIX_BGPRouteMap(void)
{
}

Boolean UNIX_BGPRouteMap::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPRouteMap::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPRouteMap::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPRouteMap::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPRouteMap::getCaption() const
{
	return _caption;
}

void UNIX_BGPRouteMap::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPRouteMap::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPRouteMap::getDescription() const
{
	return _description;
}

void UNIX_BGPRouteMap::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPRouteMap::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPRouteMap::getElementName() const
{
	return _elementName;
}

void UNIX_BGPRouteMap::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPRouteMap::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPRouteMap::getGeneration() const
{
	return _generation;
}

void UNIX_BGPRouteMap::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPRouteMap::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPRouteMap::getInstallDate() const
{
	return _installDate;
}

void UNIX_BGPRouteMap::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BGPRouteMap::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPRouteMap::getName() const
{
	return _name;
}

void UNIX_BGPRouteMap::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BGPRouteMap::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPRouteMap::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BGPRouteMap::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BGPRouteMap::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPRouteMap::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BGPRouteMap::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BGPRouteMap::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPRouteMap::getStatus() const
{
	return _status;
}

void UNIX_BGPRouteMap::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BGPRouteMap::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPRouteMap::getHealthState() const
{
	return _healthState;
}

void UNIX_BGPRouteMap::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BGPRouteMap::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPRouteMap::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BGPRouteMap::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BGPRouteMap::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPRouteMap::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BGPRouteMap::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BGPRouteMap::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPRouteMap::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BGPRouteMap::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BGPRouteMap::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPRouteMap::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BGPRouteMap::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BGPRouteMap::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPRouteMap::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_BGPRouteMap::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_BGPRouteMap::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPRouteMap::getSystemName() const
{
	return _systemName;
}

void UNIX_BGPRouteMap::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_BGPRouteMap::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPRouteMap::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_BGPRouteMap::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_BGPRouteMap::getDirection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTION, getDirection());
	return true;
}

Uint16 UNIX_BGPRouteMap::getDirection() const
{
	return _direction;
}

void UNIX_BGPRouteMap::setDirection(Uint16 &value)
{
	_direction = value;
}

Boolean UNIX_BGPRouteMap::getAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION, getAction());
	return true;
}

Uint16 UNIX_BGPRouteMap::getAction() const
{
	return _action;
}

void UNIX_BGPRouteMap::setAction(Uint16 &value)
{
	_action = value;
}

Boolean UNIX_BGPRouteMap::getMatchConditionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_CONDITION_TYPE, getMatchConditionType());
	return true;
}

Uint16 UNIX_BGPRouteMap::getMatchConditionType() const
{
	return _matchConditionType;
}

void UNIX_BGPRouteMap::setMatchConditionType(Uint16 &value)
{
	_matchConditionType = value;
}

Boolean UNIX_BGPRouteMap::getOtherMatchConditionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MATCH_CONDITION_TYPE, getOtherMatchConditionType());
	return true;
}

String UNIX_BGPRouteMap::getOtherMatchConditionType() const
{
	return _otherMatchConditionType;
}

void UNIX_BGPRouteMap::setOtherMatchConditionType(String &value)
{
	_otherMatchConditionType = value;
}

Boolean UNIX_BGPRouteMap::getSetMetricType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SET_METRIC_TYPE, getSetMetricType());
	return true;
}

Uint16 UNIX_BGPRouteMap::getSetMetricType() const
{
	return _setMetricType;
}

void UNIX_BGPRouteMap::setSetMetricType(Uint16 &value)
{
	_setMetricType = value;
}

Boolean UNIX_BGPRouteMap::getSetMetricValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SET_METRIC_VALUE, getSetMetricValue());
	return true;
}

String UNIX_BGPRouteMap::getSetMetricValue() const
{
	return _setMetricValue;
}

void UNIX_BGPRouteMap::setSetMetricValue(String &value)
{
	_setMetricValue = value;
}


void UNIX_BGPRouteMap::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPRouteMap");
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
	_creationClassName = String("UNIX_BGPRouteMap");
	_direction = Uint16(0);
	_action = Uint16(0);
	_matchConditionType = Uint16(0);
	_otherMatchConditionType = String ("");
	_setMetricType = Uint16(0);
	_setMetricValue = String ("");

}

Boolean UNIX_BGPRouteMap::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Direction"))
			{
				Uint16 directionValue;
				property.getValue().get(directionValue);
				setDirection(directionValue);
			}
			else if (String::equal(property.getName().getString(), "Action"))
			{
				Uint16 actionValue;
				property.getValue().get(actionValue);
				setAction(actionValue);
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
			else if (String::equal(property.getName().getString(), "SetMetricType"))
			{
				Uint16 setMetricTypeValue;
				property.getValue().get(setMetricTypeValue);
				setSetMetricType(setMetricTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SetMetricValue"))
			{
				String setMetricValueValue;
				property.getValue().get(setMetricValueValue);
				setSetMetricValue(setMetricValueValue);
			}
	}
	return true;
}


Boolean UNIX_BGPRouteMap::initialize()
{
	return false;
}

Boolean UNIX_BGPRouteMap::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPRouteMap");
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
	_creationClassName = String("UNIX_BGPRouteMap");
	_direction = Uint16(0);
	_action = Uint16(0);
	_matchConditionType = Uint16(0);
	_otherMatchConditionType = String ("");
	_setMetricType = Uint16(0);
	_setMetricValue = String ("");
	
	return false;
}

Boolean UNIX_BGPRouteMap::finalize()
{
	return false;
}

Boolean UNIX_BGPRouteMap::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BGPRouteMap::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BGPRouteMap::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPRouteMap::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPRouteMap::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPRouteMap::validateInstance()
{
	return true;
}

