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


UNIX_NextHopRouting::UNIX_NextHopRouting(void)
{
}

UNIX_NextHopRouting::~UNIX_NextHopRouting(void)
{
}

Boolean UNIX_NextHopRouting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NextHopRouting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NextHopRouting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NextHopRouting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NextHopRouting::getCaption() const
{
	return _caption;
}

void UNIX_NextHopRouting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NextHopRouting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NextHopRouting::getDescription() const
{
	return _description;
}

void UNIX_NextHopRouting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NextHopRouting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NextHopRouting::getElementName() const
{
	return _elementName;
}

void UNIX_NextHopRouting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NextHopRouting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NextHopRouting::getGeneration() const
{
	return _generation;
}

void UNIX_NextHopRouting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NextHopRouting::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_NextHopRouting::getInstallDate() const
{
	return _installDate;
}

void UNIX_NextHopRouting::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_NextHopRouting::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_NextHopRouting::getName() const
{
	return _name;
}

void UNIX_NextHopRouting::setName(String &value)
{
	_name = value;
}

Boolean UNIX_NextHopRouting::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_NextHopRouting::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_NextHopRouting::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_NextHopRouting::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_NextHopRouting::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_NextHopRouting::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_NextHopRouting::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_NextHopRouting::getStatus() const
{
	return _status;
}

void UNIX_NextHopRouting::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_NextHopRouting::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_NextHopRouting::getHealthState() const
{
	return _healthState;
}

void UNIX_NextHopRouting::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_NextHopRouting::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_NextHopRouting::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_NextHopRouting::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_NextHopRouting::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_NextHopRouting::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_NextHopRouting::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_NextHopRouting::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_NextHopRouting::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_NextHopRouting::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_NextHopRouting::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_NextHopRouting::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_NextHopRouting::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_NextHopRouting::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_NextHopRouting::getDestinationAddress() const
{
	return _destinationAddress;
}

void UNIX_NextHopRouting::setDestinationAddress(String &value)
{
	_destinationAddress = value;
}

Boolean UNIX_NextHopRouting::getDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_MASK, getDestinationMask());
	return true;
}

String UNIX_NextHopRouting::getDestinationMask() const
{
	return _destinationMask;
}

void UNIX_NextHopRouting::setDestinationMask(String &value)
{
	_destinationMask = value;
}

Boolean UNIX_NextHopRouting::getNextHop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP, getNextHop());
	return true;
}

String UNIX_NextHopRouting::getNextHop() const
{
	return _nextHop;
}

void UNIX_NextHopRouting::setNextHop(String &value)
{
	_nextHop = value;
}

Boolean UNIX_NextHopRouting::getIsStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STATIC, getIsStatic());
	return true;
}

Boolean UNIX_NextHopRouting::getIsStatic() const
{
	return _isStatic;
}

void UNIX_NextHopRouting::setIsStatic(Boolean &value)
{
	_isStatic = value;
}


void UNIX_NextHopRouting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NextHopRouting");
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
	_destinationAddress = String ("");
	_destinationMask = String ("");
	_nextHop = String ("");
	_isStatic = Boolean(false);

}

Boolean UNIX_NextHopRouting::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DestinationAddress"))
			{
				String destinationAddressValue;
				property.getValue().get(destinationAddressValue);
				setDestinationAddress(destinationAddressValue);
			}
			else if (String::equal(property.getName().getString(), "DestinationMask"))
			{
				String destinationMaskValue;
				property.getValue().get(destinationMaskValue);
				setDestinationMask(destinationMaskValue);
			}
			else if (String::equal(property.getName().getString(), "NextHop"))
			{
				String nextHopValue;
				property.getValue().get(nextHopValue);
				setNextHop(nextHopValue);
			}
			else if (String::equal(property.getName().getString(), "IsStatic"))
			{
				Boolean isStaticValue;
				property.getValue().get(isStaticValue);
				setIsStatic(isStaticValue);
			}
	}
	return true;
}


Boolean UNIX_NextHopRouting::initialize()
{
	return false;
}

Boolean UNIX_NextHopRouting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NextHopRouting");
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
	_destinationAddress = String ("");
	_destinationMask = String ("");
	_nextHop = String ("");
	_isStatic = Boolean(false);
	
	return false;
}

Boolean UNIX_NextHopRouting::finalize()
{
	return false;
}

Boolean UNIX_NextHopRouting::loadByName(const String name)
{
	return false;
}

Boolean UNIX_NextHopRouting::find(const Array<CIMKeyBinding> &kbArray)
{
	return true;
}

Boolean UNIX_NextHopRouting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopRouting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopRouting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextHopRouting::validateInstance()
{
	return true;
}

