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


UNIX_AuthenticationRequirement::UNIX_AuthenticationRequirement(void)
{
}

UNIX_AuthenticationRequirement::~UNIX_AuthenticationRequirement(void)
{
}

Boolean UNIX_AuthenticationRequirement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AuthenticationRequirement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AuthenticationRequirement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AuthenticationRequirement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AuthenticationRequirement::getCaption() const
{
	return _caption;
}

void UNIX_AuthenticationRequirement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AuthenticationRequirement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AuthenticationRequirement::getDescription() const
{
	return _description;
}

void UNIX_AuthenticationRequirement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AuthenticationRequirement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AuthenticationRequirement::getElementName() const
{
	return _elementName;
}

void UNIX_AuthenticationRequirement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AuthenticationRequirement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AuthenticationRequirement::getGeneration() const
{
	return _generation;
}

void UNIX_AuthenticationRequirement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AuthenticationRequirement::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AuthenticationRequirement::getInstallDate() const
{
	return _installDate;
}

void UNIX_AuthenticationRequirement::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_AuthenticationRequirement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AuthenticationRequirement::getName() const
{
	return _name;
}

void UNIX_AuthenticationRequirement::setName(String &value)
{
	_name = value;
}

Boolean UNIX_AuthenticationRequirement::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AuthenticationRequirement::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_AuthenticationRequirement::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_AuthenticationRequirement::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AuthenticationRequirement::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_AuthenticationRequirement::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_AuthenticationRequirement::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AuthenticationRequirement::getStatus() const
{
	return _status;
}

void UNIX_AuthenticationRequirement::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_AuthenticationRequirement::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AuthenticationRequirement::getHealthState() const
{
	return _healthState;
}

void UNIX_AuthenticationRequirement::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_AuthenticationRequirement::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AuthenticationRequirement::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_AuthenticationRequirement::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_AuthenticationRequirement::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AuthenticationRequirement::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_AuthenticationRequirement::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_AuthenticationRequirement::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AuthenticationRequirement::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_AuthenticationRequirement::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_AuthenticationRequirement::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AuthenticationRequirement::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_AuthenticationRequirement::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_AuthenticationRequirement::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AuthenticationRequirement::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_AuthenticationRequirement::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_AuthenticationRequirement::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AuthenticationRequirement::getSystemName() const
{
	return _systemName;
}

void UNIX_AuthenticationRequirement::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_AuthenticationRequirement::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AuthenticationRequirement::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_AuthenticationRequirement::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_AuthenticationRequirement::getSecurityClassification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_CLASSIFICATION, getSecurityClassification());
	return true;
}

String UNIX_AuthenticationRequirement::getSecurityClassification() const
{
	return _securityClassification;
}

void UNIX_AuthenticationRequirement::setSecurityClassification(String &value)
{
	_securityClassification = value;
}


void UNIX_AuthenticationRequirement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AuthenticationRequirement");
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
	_creationClassName = String("UNIX_AuthenticationRequirement");
	_securityClassification = String ("");

}

Boolean UNIX_AuthenticationRequirement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SecurityClassification"))
			{
				String securityClassificationValue;
				property.getValue().get(securityClassificationValue);
				setSecurityClassification(securityClassificationValue);
			}
	}
	return true;
}


Boolean UNIX_AuthenticationRequirement::initialize()
{
	return false;
}

Boolean UNIX_AuthenticationRequirement::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AuthenticationRequirement");
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
	_creationClassName = String("UNIX_AuthenticationRequirement");
	_securityClassification = String ("");
	
	return false;
}

Boolean UNIX_AuthenticationRequirement::finalize()
{
	return false;
}

Boolean UNIX_AuthenticationRequirement::loadByName(const String name)
{
	return false;
}

Boolean UNIX_AuthenticationRequirement::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AuthenticationRequirement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthenticationRequirement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthenticationRequirement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AuthenticationRequirement::validateInstance()
{
	return true;
}

