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


UNIX_SqlTable::UNIX_SqlTable(void)
{
}

UNIX_SqlTable::~UNIX_SqlTable(void)
{
}

Boolean UNIX_SqlTable::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SqlTable::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SqlTable::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SqlTable::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SqlTable::getCaption() const
{
	return _caption;
}

void UNIX_SqlTable::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SqlTable::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SqlTable::getDescription() const
{
	return _description;
}

void UNIX_SqlTable::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SqlTable::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SqlTable::getElementName() const
{
	return _elementName;
}

void UNIX_SqlTable::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SqlTable::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SqlTable::getGeneration() const
{
	return _generation;
}

void UNIX_SqlTable::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SqlTable::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SqlTable::getInstallDate() const
{
	return _installDate;
}

void UNIX_SqlTable::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SqlTable::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SqlTable::getName() const
{
	return _name;
}

void UNIX_SqlTable::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SqlTable::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SqlTable::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SqlTable::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SqlTable::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SqlTable::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SqlTable::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SqlTable::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SqlTable::getStatus() const
{
	return _status;
}

void UNIX_SqlTable::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SqlTable::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SqlTable::getHealthState() const
{
	return _healthState;
}

void UNIX_SqlTable::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SqlTable::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SqlTable::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SqlTable::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SqlTable::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SqlTable::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SqlTable::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SqlTable::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SqlTable::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SqlTable::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SqlTable::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SqlTable::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SqlTable::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SqlTable::getCreationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME, getCreationTime());
	return true;
}

CIMDateTime UNIX_SqlTable::getCreationTime() const
{
	return _creationTime;
}

void UNIX_SqlTable::setCreationTime(CIMDateTime &value)
{
	_creationTime = value;
}

Boolean UNIX_SqlTable::getReferenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFERENCE_TYPE, getReferenceType());
	return true;
}

Uint16 UNIX_SqlTable::getReferenceType() const
{
	return _referenceType;
}

void UNIX_SqlTable::setReferenceType(Uint16 &value)
{
	_referenceType = value;
}

Boolean UNIX_SqlTable::getinsertable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSERTABLE, getinsertable());
	return true;
}

Boolean UNIX_SqlTable::getinsertable() const
{
	return _insertable;
}

void UNIX_SqlTable::setinsertable(Boolean &value)
{
	_insertable = value;
}

Boolean UNIX_SqlTable::getupdatable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPDATABLE, getupdatable());
	return true;
}

Boolean UNIX_SqlTable::getupdatable() const
{
	return _updatable;
}

void UNIX_SqlTable::setupdatable(Boolean &value)
{
	_updatable = value;
}


void UNIX_SqlTable::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SqlTable");
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
	_referenceType = Uint16(0);
	_insertable = Boolean(false);
	_updatable = Boolean(false);

}

Boolean UNIX_SqlTable::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ReferenceType"))
			{
				Uint16 referenceTypeValue;
				property.getValue().get(referenceTypeValue);
				setReferenceType(referenceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "insertable"))
			{
				Boolean insertableValue;
				property.getValue().get(insertableValue);
				setinsertable(insertableValue);
			}
			else if (String::equal(property.getName().getString(), "updatable"))
			{
				Boolean updatableValue;
				property.getValue().get(updatableValue);
				setupdatable(updatableValue);
			}
	}
	return true;
}


Boolean UNIX_SqlTable::initialize()
{
	return false;
}

Boolean UNIX_SqlTable::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SqlTable");
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
	_referenceType = Uint16(0);
	_insertable = Boolean(false);
	_updatable = Boolean(false);
	
	return false;
}

Boolean UNIX_SqlTable::finalize()
{
	return false;
}

Boolean UNIX_SqlTable::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SqlTable::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SqlTable::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlTable::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlTable::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlTable::validateInstance()
{
	return true;
}

