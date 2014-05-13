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


UNIX_SqlDomain::UNIX_SqlDomain(void)
{
}

UNIX_SqlDomain::~UNIX_SqlDomain(void)
{
}

Boolean UNIX_SqlDomain::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SqlDomain::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SqlDomain::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SqlDomain::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SqlDomain::getCaption() const
{
	return _caption;
}

void UNIX_SqlDomain::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SqlDomain::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SqlDomain::getDescription() const
{
	return _description;
}

void UNIX_SqlDomain::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SqlDomain::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SqlDomain::getElementName() const
{
	return _elementName;
}

void UNIX_SqlDomain::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SqlDomain::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SqlDomain::getGeneration() const
{
	return _generation;
}

void UNIX_SqlDomain::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SqlDomain::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SqlDomain::getInstallDate() const
{
	return _installDate;
}

void UNIX_SqlDomain::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SqlDomain::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SqlDomain::getName() const
{
	return _name;
}

void UNIX_SqlDomain::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SqlDomain::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SqlDomain::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SqlDomain::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SqlDomain::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SqlDomain::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SqlDomain::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SqlDomain::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SqlDomain::getStatus() const
{
	return _status;
}

void UNIX_SqlDomain::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SqlDomain::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SqlDomain::getHealthState() const
{
	return _healthState;
}

void UNIX_SqlDomain::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SqlDomain::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SqlDomain::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SqlDomain::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SqlDomain::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SqlDomain::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SqlDomain::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SqlDomain::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SqlDomain::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SqlDomain::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SqlDomain::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SqlDomain::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SqlDomain::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SqlDomain::getCreationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME, getCreationTime());
	return true;
}

CIMDateTime UNIX_SqlDomain::getCreationTime() const
{
	return _creationTime;
}

void UNIX_SqlDomain::setCreationTime(CIMDateTime &value)
{
	_creationTime = value;
}

Boolean UNIX_SqlDomain::getDataType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_TYPE, getDataType());
	return true;
}

Uint16 UNIX_SqlDomain::getDataType() const
{
	return _dataType;
}

void UNIX_SqlDomain::setDataType(Uint16 &value)
{
	_dataType = value;
}

Boolean UNIX_SqlDomain::getDefaultValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VALUE, getDefaultValue());
	return true;
}

String UNIX_SqlDomain::getDefaultValue() const
{
	return _defaultValue;
}

void UNIX_SqlDomain::setDefaultValue(String &value)
{
	_defaultValue = value;
}


void UNIX_SqlDomain::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SqlDomain");
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
	_dataType = Uint16(0);
	_defaultValue = String ("");

}

Boolean UNIX_SqlDomain::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DataType"))
			{
				Uint16 dataTypeValue;
				property.getValue().get(dataTypeValue);
				setDataType(dataTypeValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultValue"))
			{
				String defaultValueValue;
				property.getValue().get(defaultValueValue);
				setDefaultValue(defaultValueValue);
			}
	}
	return true;
}


Boolean UNIX_SqlDomain::initialize()
{
	return false;
}

Boolean UNIX_SqlDomain::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SqlDomain");
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
	_dataType = Uint16(0);
	_defaultValue = String ("");
	
	return false;
}

Boolean UNIX_SqlDomain::finalize()
{
	return false;
}

Boolean UNIX_SqlDomain::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SqlDomain::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SqlDomain::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlDomain::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlDomain::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SqlDomain::validateInstance()
{
	return true;
}

