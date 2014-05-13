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


UNIX_OSPFAreaConfiguration::UNIX_OSPFAreaConfiguration(void)
{
}

UNIX_OSPFAreaConfiguration::~UNIX_OSPFAreaConfiguration(void)
{
}

Boolean UNIX_OSPFAreaConfiguration::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSPFAreaConfiguration::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OSPFAreaConfiguration::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OSPFAreaConfiguration::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSPFAreaConfiguration::getCaption() const
{
	return _caption;
}

void UNIX_OSPFAreaConfiguration::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OSPFAreaConfiguration::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSPFAreaConfiguration::getDescription() const
{
	return _description;
}

void UNIX_OSPFAreaConfiguration::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OSPFAreaConfiguration::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSPFAreaConfiguration::getElementName() const
{
	return _elementName;
}

void UNIX_OSPFAreaConfiguration::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OSPFAreaConfiguration::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OSPFAreaConfiguration::getGeneration() const
{
	return _generation;
}

void UNIX_OSPFAreaConfiguration::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OSPFAreaConfiguration::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OSPFAreaConfiguration::getInstallDate() const
{
	return _installDate;
}

void UNIX_OSPFAreaConfiguration::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_OSPFAreaConfiguration::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OSPFAreaConfiguration::getName() const
{
	return _name;
}

void UNIX_OSPFAreaConfiguration::setName(String &value)
{
	_name = value;
}

Boolean UNIX_OSPFAreaConfiguration::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OSPFAreaConfiguration::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_OSPFAreaConfiguration::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_OSPFAreaConfiguration::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OSPFAreaConfiguration::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_OSPFAreaConfiguration::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_OSPFAreaConfiguration::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OSPFAreaConfiguration::getStatus() const
{
	return _status;
}

void UNIX_OSPFAreaConfiguration::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_OSPFAreaConfiguration::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OSPFAreaConfiguration::getHealthState() const
{
	return _healthState;
}

void UNIX_OSPFAreaConfiguration::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_OSPFAreaConfiguration::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OSPFAreaConfiguration::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_OSPFAreaConfiguration::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_OSPFAreaConfiguration::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OSPFAreaConfiguration::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_OSPFAreaConfiguration::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_OSPFAreaConfiguration::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OSPFAreaConfiguration::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_OSPFAreaConfiguration::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_OSPFAreaConfiguration::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OSPFAreaConfiguration::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_OSPFAreaConfiguration::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_OSPFAreaConfiguration::getStubDefaultCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STUB_DEFAULT_COST, getStubDefaultCost());
	return true;
}

Uint32 UNIX_OSPFAreaConfiguration::getStubDefaultCost() const
{
	return _stubDefaultCost;
}

void UNIX_OSPFAreaConfiguration::setStubDefaultCost(Uint32 &value)
{
	_stubDefaultCost = value;
}

Boolean UNIX_OSPFAreaConfiguration::getStubMetricType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STUB_METRIC_TYPE, getStubMetricType());
	return true;
}

Uint16 UNIX_OSPFAreaConfiguration::getStubMetricType() const
{
	return _stubMetricType;
}

void UNIX_OSPFAreaConfiguration::setStubMetricType(Uint16 &value)
{
	_stubMetricType = value;
}


void UNIX_OSPFAreaConfiguration::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFAreaConfiguration");
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
	_stubDefaultCost = Uint32(0);
	_stubMetricType = Uint16(0);

}

Boolean UNIX_OSPFAreaConfiguration::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "StubDefaultCost"))
			{
				Uint32 stubDefaultCostValue;
				property.getValue().get(stubDefaultCostValue);
				setStubDefaultCost(stubDefaultCostValue);
			}
			else if (String::equal(property.getName().getString(), "StubMetricType"))
			{
				Uint16 stubMetricTypeValue;
				property.getValue().get(stubMetricTypeValue);
				setStubMetricType(stubMetricTypeValue);
			}
	}
	return true;
}


Boolean UNIX_OSPFAreaConfiguration::initialize()
{
	return false;
}

Boolean UNIX_OSPFAreaConfiguration::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFAreaConfiguration");
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
	_stubDefaultCost = Uint32(0);
	_stubMetricType = Uint16(0);
	
	return false;
}

Boolean UNIX_OSPFAreaConfiguration::finalize()
{
	return false;
}

Boolean UNIX_OSPFAreaConfiguration::loadByName(const String name)
{
	return false;
}

Boolean UNIX_OSPFAreaConfiguration::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OSPFAreaConfiguration::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFAreaConfiguration::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFAreaConfiguration::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFAreaConfiguration::validateInstance()
{
	return true;
}

