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


UNIX_PrintChannel::UNIX_PrintChannel(void)
{
}

UNIX_PrintChannel::~UNIX_PrintChannel(void)
{
}

Boolean UNIX_PrintChannel::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintChannel::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintChannel::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintChannel::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintChannel::getCaption() const
{
	return _caption;
}

void UNIX_PrintChannel::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintChannel::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintChannel::getDescription() const
{
	return _description;
}

void UNIX_PrintChannel::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintChannel::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintChannel::getElementName() const
{
	return _elementName;
}

void UNIX_PrintChannel::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintChannel::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintChannel::getGeneration() const
{
	return _generation;
}

void UNIX_PrintChannel::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintChannel::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintChannel::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintChannel::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintChannel::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintChannel::getName() const
{
	return _name;
}

void UNIX_PrintChannel::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintChannel::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintChannel::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintChannel::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintChannel::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintChannel::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintChannel::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintChannel::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintChannel::getStatus() const
{
	return _status;
}

void UNIX_PrintChannel::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintChannel::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintChannel::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintChannel::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintChannel::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintChannel::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintChannel::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintChannel::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintChannel::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintChannel::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintChannel::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintChannel::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintChannel::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintChannel::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintChannel::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintChannel::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintChannel::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintChannel::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintChannel::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintChannel::getType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE, getType());
	return true;
}

Uint32 UNIX_PrintChannel::getType() const
{
	return _type;
}

void UNIX_PrintChannel::setType(Uint32 &value)
{
	_type = value;
}

Boolean UNIX_PrintChannel::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PrintChannel::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_PrintChannel::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}

Boolean UNIX_PrintChannel::getProtocolVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSION, getProtocolVersion());
	return true;
}

String UNIX_PrintChannel::getProtocolVersion() const
{
	return _protocolVersion;
}

void UNIX_PrintChannel::setProtocolVersion(String &value)
{
	_protocolVersion = value;
}

Boolean UNIX_PrintChannel::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintChannel::getAvailabilityStatus() const
{
	return _availabilityStatus;
}

void UNIX_PrintChannel::setAvailabilityStatus(Uint32 &value)
{
	_availabilityStatus = value;
}

Boolean UNIX_PrintChannel::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintChannel::getOtherAvailabilityStatus() const
{
	return _otherAvailabilityStatus;
}

void UNIX_PrintChannel::setOtherAvailabilityStatus(String &value)
{
	_otherAvailabilityStatus = value;
}

Boolean UNIX_PrintChannel::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintChannel::getNonCriticalAlertsPresent() const
{
	return _nonCriticalAlertsPresent;
}

void UNIX_PrintChannel::setNonCriticalAlertsPresent(Boolean &value)
{
	_nonCriticalAlertsPresent = value;
}

Boolean UNIX_PrintChannel::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintChannel::getCriticalAlertsPresent() const
{
	return _criticalAlertsPresent;
}

void UNIX_PrintChannel::setCriticalAlertsPresent(Boolean &value)
{
	_criticalAlertsPresent = value;
}


void UNIX_PrintChannel::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintChannel");
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
	_sNMPRowId = Uint32(0);
	_type = Uint32(0);
	_otherTypeDescription = String ("");
	_protocolVersion = String ("");
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);

}

Boolean UNIX_PrintChannel::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SNMPRowId"))
			{
				Uint32 sNMPRowIdValue;
				property.getValue().get(sNMPRowIdValue);
				setSNMPRowId(sNMPRowIdValue);
			}
			else if (String::equal(property.getName().getString(), "Type"))
			{
				Uint32 typeValue;
				property.getValue().get(typeValue);
				setType(typeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolVersion"))
			{
				String protocolVersionValue;
				property.getValue().get(protocolVersionValue);
				setProtocolVersion(protocolVersionValue);
			}
			else if (String::equal(property.getName().getString(), "AvailabilityStatus"))
			{
				Uint32 availabilityStatusValue;
				property.getValue().get(availabilityStatusValue);
				setAvailabilityStatus(availabilityStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAvailabilityStatus"))
			{
				String otherAvailabilityStatusValue;
				property.getValue().get(otherAvailabilityStatusValue);
				setOtherAvailabilityStatus(otherAvailabilityStatusValue);
			}
			else if (String::equal(property.getName().getString(), "NonCriticalAlertsPresent"))
			{
				Boolean nonCriticalAlertsPresentValue;
				property.getValue().get(nonCriticalAlertsPresentValue);
				setNonCriticalAlertsPresent(nonCriticalAlertsPresentValue);
			}
			else if (String::equal(property.getName().getString(), "CriticalAlertsPresent"))
			{
				Boolean criticalAlertsPresentValue;
				property.getValue().get(criticalAlertsPresentValue);
				setCriticalAlertsPresent(criticalAlertsPresentValue);
			}
	}
	return true;
}


Boolean UNIX_PrintChannel::initialize()
{
	return false;
}

Boolean UNIX_PrintChannel::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintChannel");
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
	_sNMPRowId = Uint32(0);
	_type = Uint32(0);
	_otherTypeDescription = String ("");
	_protocolVersion = String ("");
	_availabilityStatus = Uint32(0);
	_otherAvailabilityStatus = String ("");
	_nonCriticalAlertsPresent = Boolean(false);
	_criticalAlertsPresent = Boolean(false);
	
	return false;
}

Boolean UNIX_PrintChannel::finalize()
{
	return false;
}

Boolean UNIX_PrintChannel::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintChannel::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintChannel::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintChannel::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintChannel::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintChannel::validateInstance()
{
	return true;
}

