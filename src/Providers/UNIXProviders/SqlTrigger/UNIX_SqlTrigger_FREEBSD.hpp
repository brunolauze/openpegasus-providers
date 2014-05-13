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


UNIX_SqlTrigger::UNIX_SqlTrigger(void)
{
}

UNIX_SqlTrigger::~UNIX_SqlTrigger(void)
{
}

Boolean UNIX_SqlTrigger::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SqlTrigger::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SqlTrigger::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SqlTrigger::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SqlTrigger::getCaption() const
{
	return _caption;
}

void UNIX_SqlTrigger::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SqlTrigger::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SqlTrigger::getDescription() const
{
	return _description;
}

void UNIX_SqlTrigger::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SqlTrigger::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SqlTrigger::getElementName() const
{
	return _elementName;
}

void UNIX_SqlTrigger::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SqlTrigger::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SqlTrigger::getGeneration() const
{
	return _generation;
}

void UNIX_SqlTrigger::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SqlTrigger::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SqlTrigger::getInstallDate() const
{
	return _installDate;
}

void UNIX_SqlTrigger::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SqlTrigger::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SqlTrigger::getName() const
{
	return _name;
}

void UNIX_SqlTrigger::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SqlTrigger::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SqlTrigger::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SqlTrigger::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SqlTrigger::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SqlTrigger::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SqlTrigger::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SqlTrigger::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SqlTrigger::getStatus() const
{
	return _status;
}

void UNIX_SqlTrigger::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SqlTrigger::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SqlTrigger::getHealthState() const
{
	return _healthState;
}

void UNIX_SqlTrigger::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SqlTrigger::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SqlTrigger::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SqlTrigger::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SqlTrigger::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SqlTrigger::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SqlTrigger::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SqlTrigger::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SqlTrigger::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SqlTrigger::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SqlTrigger::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SqlTrigger::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SqlTrigger::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SqlTrigger::getCreationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME, getCreationTime());
	return true;
}

CIMDateTime UNIX_SqlTrigger::getCreationTime() const
{
	return _creationTime;
}

void UNIX_SqlTrigger::setCreationTime(CIMDateTime &value)
{
	_creationTime = value;
}

Boolean UNIX_SqlTrigger::getActionGranularityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_GRANULARITY_TYPE, getActionGranularityType());
	return true;
}

Uint16 UNIX_SqlTrigger::getActionGranularityType() const
{
	return _actionGranularityType;
}

void UNIX_SqlTrigger::setActionGranularityType(Uint16 &value)
{
	_actionGranularityType = value;
}

Boolean UNIX_SqlTrigger::getActionStatement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_STATEMENT, getActionStatement());
	return true;
}

String UNIX_SqlTrigger::getActionStatement() const
{
	return _actionStatement;
}

void UNIX_SqlTrigger::setActionStatement(String &value)
{
	_actionStatement = value;
}

Boolean UNIX_SqlTrigger::getActionTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_TIME, getActionTime());
	return true;
}

Uint16 UNIX_SqlTrigger::getActionTime() const
{
	return _actionTime;
}

void UNIX_SqlTrigger::setActionTime(Uint16 &value)
{
	_actionTime = value;
}

Boolean UNIX_SqlTrigger::getEventType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EVENT_TYPE, getEventType());
	return true;
}

Uint16 UNIX_SqlTrigger::getEventType() const
{
	return _eventType;
}

void UNIX_SqlTrigger::setEventType(Uint16 &value)
{
	_eventType = value;
}

Boolean UNIX_SqlTrigger::getNewRow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEW_ROW, getNewRow());
	return true;
}

String UNIX_SqlTrigger::getNewRow() const
{
	return _newRow;
}

void UNIX_SqlTrigger::setNewRow(String &value)
{
	_newRow = value;
}

Boolean UNIX_SqlTrigger::getNewTable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEW_TABLE, getNewTable());
	return true;
}

String UNIX_SqlTrigger::getNewTable() const
{
	return _newTable;
}

void UNIX_SqlTrigger::setNewTable(String &value)
{
	_newTable = value;
}

Boolean UNIX_SqlTrigger::getOldRow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OLD_ROW, getOldRow());
	return true;
}

String UNIX_SqlTrigger::getOldRow() const
{
	return _oldRow;
}

void UNIX_SqlTrigger::setOldRow(String &value)
{
	_oldRow = value;
}

Boolean UNIX_SqlTrigger::getOldTable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OLD_TABLE, getOldTable());
	return true;
}

String UNIX_SqlTrigger::getOldTable() const
{
	return _oldTable;
}

void UNIX_SqlTrigger::setOldTable(String &value)
{
	_oldTable = value;
}

Boolean UNIX_SqlTrigger::getWhenCondition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_CONDITION, getWhenCondition());
	return true;
}

String UNIX_SqlTrigger::getWhenCondition() const
{
	return _whenCondition;
}

void UNIX_SqlTrigger::setWhenCondition(String &value)
{
	_whenCondition = value;
}


void UNIX_SqlTrigger::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SqlTrigger");
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
	_creationTime = CIMHelper::getCurrentTime();
	_actionGranularityType = Uint16(0);
	_actionStatement = String ("");
	_actionTime = Uint16(0);
	_eventType = Uint16(0);
	_newRow = String ("");
	_newTable = String ("");
	_oldRow = String ("");
	_oldTable = String ("");
	_whenCondition = String ("");

}

Boolean UNIX_SqlTrigger::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CreationTime"))
			{
				CIMDateTime creationTimeValue;
				property.getValue().get(creationTimeValue);
				setCreationTime(creationTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ActionGranularityType"))
			{
				Uint16 actionGranularityTypeValue;
				property.getValue().get(actionGranularityTypeValue);
				setActionGranularityType(actionGranularityTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ActionStatement"))
			{
				String actionStatementValue;
				property.getValue().get(actionStatementValue);
				setActionStatement(actionStatementValue);
			}
			else if (String::equal(property.getName().getString(), "ActionTime"))
			{
				Uint16 actionTimeValue;
				property.getValue().get(actionTimeValue);
				setActionTime(actionTimeValue);
			}
			else if (String::equal(property.getName().getString(), "EventType"))
			{
				Uint16 eventTypeValue;
				property.getValue().get(eventTypeValue);
				setEventType(eventTypeValue);
			}
			else if (String::equal(property.getName().getString(), "NewRow"))
			{
				String newRowValue;
				property.getValue().get(newRowValue);
				setNewRow(newRowValue);
			}
			else if (String::equal(property.getName().getString(), "NewTable"))
			{
				String newTableValue;
				property.getValue().get(newTableValue);
				setNewTable(newTableValue);
			}
			else if (String::equal(property.getName().getString(), "OldRow"))
			{
				String oldRowValue;
				property.getValue().get(oldRowValue);
				setOldRow(oldRowValue);
			}
			else if (String::equal(property.getName().getString(), "OldTable"))
			{
				String oldTableValue;
				property.getValue().get(oldTableValue);
				setOldTable(oldTableValue);
			}
			else if (String::equal(property.getName().getString(), "WhenCondition"))
			{
				String whenConditionValue;
				property.getValue().get(whenConditionValue);
				setWhenCondition(whenConditionValue);
			}
	}
	return true;
}


Boolean UNIX_SqlTrigger::initialize()
{
	return false;
}

Boolean UNIX_SqlTrigger::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SqlTrigger");
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
	_creationTime = CIMHelper::getCurrentTime();
	_actionGranularityType = Uint16(0);
	_actionStatement = String ("");
	_actionTime = Uint16(0);
	_eventType = Uint16(0);
	_newRow = String ("");
	_newTable = String ("");
	_oldRow = String ("");
	_oldTable = String ("");
	_whenCondition = String ("");
	
	return false;
}

Boolean UNIX_SqlTrigger::finalize()
{
	return false;
}

Boolean UNIX_SqlTrigger::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SqlTrigger::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SqlTrigger::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlTrigger::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlTrigger::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlTrigger::validateInstance()
{
	return true;
}

