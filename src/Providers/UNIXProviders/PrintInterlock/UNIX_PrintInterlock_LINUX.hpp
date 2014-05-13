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


UNIX_PrintInterlock::UNIX_PrintInterlock(void)
{
}

UNIX_PrintInterlock::~UNIX_PrintInterlock(void)
{
}

Boolean UNIX_PrintInterlock::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintInterlock::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintInterlock::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintInterlock::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintInterlock::getCaption() const
{
	return _caption;
}

void UNIX_PrintInterlock::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintInterlock::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintInterlock::getDescription() const
{
	return _description;
}

void UNIX_PrintInterlock::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintInterlock::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintInterlock::getElementName() const
{
	return _elementName;
}

void UNIX_PrintInterlock::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintInterlock::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintInterlock::getGeneration() const
{
	return _generation;
}

void UNIX_PrintInterlock::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintInterlock::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintInterlock::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintInterlock::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintInterlock::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintInterlock::getName() const
{
	return _name;
}

void UNIX_PrintInterlock::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintInterlock::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintInterlock::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintInterlock::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintInterlock::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintInterlock::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintInterlock::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintInterlock::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintInterlock::getStatus() const
{
	return _status;
}

void UNIX_PrintInterlock::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintInterlock::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintInterlock::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintInterlock::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintInterlock::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintInterlock::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintInterlock::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintInterlock::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintInterlock::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintInterlock::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintInterlock::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintInterlock::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintInterlock::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintInterlock::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintInterlock::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintInterlock::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintInterlock::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintInterlock::getSNMPRowId() const
{
	return _sNMPRowId;
}

void UNIX_PrintInterlock::setSNMPRowId(Uint32 &value)
{
	_sNMPRowId = value;
}

Boolean UNIX_PrintInterlock::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintInterlock::getLocalizedDescription() const
{
	return _localizedDescription;
}

void UNIX_PrintInterlock::setLocalizedDescription(String &value)
{
	_localizedDescription = value;
}

Boolean UNIX_PrintInterlock::getInterlockStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERLOCK_STATUS, getInterlockStatus());
	return true;
}

Uint32 UNIX_PrintInterlock::getInterlockStatus() const
{
	return _interlockStatus;
}

void UNIX_PrintInterlock::setInterlockStatus(Uint32 &value)
{
	_interlockStatus = value;
}

Boolean UNIX_PrintInterlock::getOtherInterlockStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INTERLOCK_STATUS, getOtherInterlockStatus());
	return true;
}

String UNIX_PrintInterlock::getOtherInterlockStatus() const
{
	return _otherInterlockStatus;
}

void UNIX_PrintInterlock::setOtherInterlockStatus(String &value)
{
	_otherInterlockStatus = value;
}


void UNIX_PrintInterlock::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintInterlock");
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
	_localizedDescription = String ("");
	_interlockStatus = Uint32(0);
	_otherInterlockStatus = String ("");

}

Boolean UNIX_PrintInterlock::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LocalizedDescription"))
			{
				String localizedDescriptionValue;
				property.getValue().get(localizedDescriptionValue);
				setLocalizedDescription(localizedDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "InterlockStatus"))
			{
				Uint32 interlockStatusValue;
				property.getValue().get(interlockStatusValue);
				setInterlockStatus(interlockStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OtherInterlockStatus"))
			{
				String otherInterlockStatusValue;
				property.getValue().get(otherInterlockStatusValue);
				setOtherInterlockStatus(otherInterlockStatusValue);
			}
	}
	return true;
}


Boolean UNIX_PrintInterlock::initialize()
{
	return false;
}

Boolean UNIX_PrintInterlock::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintInterlock");
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
	_localizedDescription = String ("");
	_interlockStatus = Uint32(0);
	_otherInterlockStatus = String ("");
	
	return false;
}

Boolean UNIX_PrintInterlock::finalize()
{
	return false;
}

Boolean UNIX_PrintInterlock::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintInterlock::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintInterlock::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInterlock::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInterlock::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintInterlock::validateInstance()
{
	return true;
}

