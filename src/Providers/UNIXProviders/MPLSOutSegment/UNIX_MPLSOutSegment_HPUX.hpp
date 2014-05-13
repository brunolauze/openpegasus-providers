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


UNIX_MPLSOutSegment::UNIX_MPLSOutSegment(void)
{
}

UNIX_MPLSOutSegment::~UNIX_MPLSOutSegment(void)
{
}

Boolean UNIX_MPLSOutSegment::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSOutSegment::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSOutSegment::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSOutSegment::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSOutSegment::getCaption() const
{
	return _caption;
}

void UNIX_MPLSOutSegment::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSOutSegment::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSOutSegment::getDescription() const
{
	return _description;
}

void UNIX_MPLSOutSegment::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSOutSegment::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSOutSegment::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSOutSegment::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSOutSegment::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSOutSegment::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSOutSegment::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSOutSegment::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MPLSOutSegment::getInstallDate() const
{
	return _installDate;
}

void UNIX_MPLSOutSegment::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_MPLSOutSegment::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MPLSOutSegment::getName() const
{
	return _name;
}

void UNIX_MPLSOutSegment::setName(String &value)
{
	_name = value;
}

Boolean UNIX_MPLSOutSegment::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MPLSOutSegment::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_MPLSOutSegment::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_MPLSOutSegment::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MPLSOutSegment::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_MPLSOutSegment::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_MPLSOutSegment::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MPLSOutSegment::getStatus() const
{
	return _status;
}

void UNIX_MPLSOutSegment::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_MPLSOutSegment::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MPLSOutSegment::getHealthState() const
{
	return _healthState;
}

void UNIX_MPLSOutSegment::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_MPLSOutSegment::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MPLSOutSegment::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_MPLSOutSegment::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_MPLSOutSegment::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MPLSOutSegment::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_MPLSOutSegment::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_MPLSOutSegment::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MPLSOutSegment::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_MPLSOutSegment::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_MPLSOutSegment::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MPLSOutSegment::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_MPLSOutSegment::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_MPLSOutSegment::getSegmentOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEGMENT_OWNER, getSegmentOwner());
	return true;
}

Uint16 UNIX_MPLSOutSegment::getSegmentOwner() const
{
	return _segmentOwner;
}

void UNIX_MPLSOutSegment::setSegmentOwner(Uint16 &value)
{
	_segmentOwner = value;
}

Boolean UNIX_MPLSOutSegment::getOtherOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_OWNER, getOtherOwner());
	return true;
}

String UNIX_MPLSOutSegment::getOtherOwner() const
{
	return _otherOwner;
}

void UNIX_MPLSOutSegment::setOtherOwner(String &value)
{
	_otherOwner = value;
}

Boolean UNIX_MPLSOutSegment::getPushTopLabel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUSH_TOP_LABEL, getPushTopLabel());
	return true;
}

Boolean UNIX_MPLSOutSegment::getPushTopLabel() const
{
	return _pushTopLabel;
}

void UNIX_MPLSOutSegment::setPushTopLabel(Boolean &value)
{
	_pushTopLabel = value;
}

Boolean UNIX_MPLSOutSegment::getTopLabel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOP_LABEL, getTopLabel());
	return true;
}

Uint32 UNIX_MPLSOutSegment::getTopLabel() const
{
	return _topLabel;
}

void UNIX_MPLSOutSegment::setTopLabel(Uint32 &value)
{
	_topLabel = value;
}


void UNIX_MPLSOutSegment::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSOutSegment");
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
	_segmentOwner = Uint16(0);
	_otherOwner = String ("");
	_pushTopLabel = Boolean(false);
	_topLabel = Uint32(0);

}

Boolean UNIX_MPLSOutSegment::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SegmentOwner"))
			{
				Uint16 segmentOwnerValue;
				property.getValue().get(segmentOwnerValue);
				setSegmentOwner(segmentOwnerValue);
			}
			else if (String::equal(property.getName().getString(), "OtherOwner"))
			{
				String otherOwnerValue;
				property.getValue().get(otherOwnerValue);
				setOtherOwner(otherOwnerValue);
			}
			else if (String::equal(property.getName().getString(), "PushTopLabel"))
			{
				Boolean pushTopLabelValue;
				property.getValue().get(pushTopLabelValue);
				setPushTopLabel(pushTopLabelValue);
			}
			else if (String::equal(property.getName().getString(), "TopLabel"))
			{
				Uint32 topLabelValue;
				property.getValue().get(topLabelValue);
				setTopLabel(topLabelValue);
			}
	}
	return true;
}


Boolean UNIX_MPLSOutSegment::initialize()
{
	return false;
}

Boolean UNIX_MPLSOutSegment::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSOutSegment");
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
	_segmentOwner = Uint16(0);
	_otherOwner = String ("");
	_pushTopLabel = Boolean(false);
	_topLabel = Uint32(0);
	
	return false;
}

Boolean UNIX_MPLSOutSegment::finalize()
{
	return false;
}

Boolean UNIX_MPLSOutSegment::loadByName(const String name)
{
	return false;
}

Boolean UNIX_MPLSOutSegment::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSOutSegment::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSOutSegment::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSOutSegment::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSOutSegment::validateInstance()
{
	return true;
}

