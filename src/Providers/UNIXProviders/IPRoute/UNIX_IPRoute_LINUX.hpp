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


UNIX_IPRoute::UNIX_IPRoute(void)
{
}

UNIX_IPRoute::~UNIX_IPRoute(void)
{
}

Boolean UNIX_IPRoute::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPRoute::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPRoute::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPRoute::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPRoute::getCaption() const
{
	return _caption;
}

void UNIX_IPRoute::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPRoute::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPRoute::getDescription() const
{
	return _description;
}

void UNIX_IPRoute::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPRoute::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPRoute::getElementName() const
{
	return _elementName;
}

void UNIX_IPRoute::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPRoute::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPRoute::getGeneration() const
{
	return _generation;
}

void UNIX_IPRoute::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPRoute::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IPRoute::getInstallDate() const
{
	return _installDate;
}

void UNIX_IPRoute::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_IPRoute::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPRoute::getName() const
{
	return _name;
}

void UNIX_IPRoute::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IPRoute::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IPRoute::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_IPRoute::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_IPRoute::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IPRoute::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_IPRoute::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_IPRoute::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IPRoute::getStatus() const
{
	return _status;
}

void UNIX_IPRoute::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_IPRoute::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IPRoute::getHealthState() const
{
	return _healthState;
}

void UNIX_IPRoute::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_IPRoute::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IPRoute::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_IPRoute::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_IPRoute::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IPRoute::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_IPRoute::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_IPRoute::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IPRoute::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_IPRoute::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_IPRoute::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IPRoute::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_IPRoute::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_IPRoute::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_IPRoute::getDestinationAddress() const
{
	return _destinationAddress;
}

void UNIX_IPRoute::setDestinationAddress(String &value)
{
	_destinationAddress = value;
}

Boolean UNIX_IPRoute::getDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_MASK, getDestinationMask());
	return true;
}

String UNIX_IPRoute::getDestinationMask() const
{
	return _destinationMask;
}

void UNIX_IPRoute::setDestinationMask(String &value)
{
	_destinationMask = value;
}

Boolean UNIX_IPRoute::getNextHop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP, getNextHop());
	return true;
}

String UNIX_IPRoute::getNextHop() const
{
	return _nextHop;
}

void UNIX_IPRoute::setNextHop(String &value)
{
	_nextHop = value;
}

Boolean UNIX_IPRoute::getIsStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STATIC, getIsStatic());
	return true;
}

Boolean UNIX_IPRoute::getIsStatic() const
{
	return _isStatic;
}

void UNIX_IPRoute::setIsStatic(Boolean &value)
{
	_isStatic = value;
}

Boolean UNIX_IPRoute::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPRoute::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IPRoute::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IPRoute::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPRoute::getSystemName() const
{
	return _systemName;
}

void UNIX_IPRoute::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IPRoute::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_IPRoute::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_IPRoute::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_IPRoute::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_IPRoute::getServiceName() const
{
	return _serviceName;
}

void UNIX_IPRoute::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_IPRoute::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPRoute::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IPRoute::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IPRoute::getIPDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_DESTINATION_ADDRESS, getIPDestinationAddress());
	return true;
}

String UNIX_IPRoute::getIPDestinationAddress() const
{
	return _iPDestinationAddress;
}

void UNIX_IPRoute::setIPDestinationAddress(String &value)
{
	_iPDestinationAddress = value;
}

Boolean UNIX_IPRoute::getIPDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_DESTINATION_MASK, getIPDestinationMask());
	return true;
}

String UNIX_IPRoute::getIPDestinationMask() const
{
	return _iPDestinationMask;
}

void UNIX_IPRoute::setIPDestinationMask(String &value)
{
	_iPDestinationMask = value;
}

Boolean UNIX_IPRoute::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_IPRoute::getAddressType() const
{
	return _addressType;
}

void UNIX_IPRoute::setAddressType(Uint16 &value)
{
	_addressType = value;
}


void UNIX_IPRoute::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPRoute");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_IPRoute");
	_iPDestinationAddress = String ("");
	_iPDestinationMask = String ("");
	_addressType = Uint16(0);

}

Boolean UNIX_IPRoute::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ServiceCreationClassName"))
			{
				String serviceCreationClassNameValue;
				property.getValue().get(serviceCreationClassNameValue);
				setServiceCreationClassName(serviceCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceName"))
			{
				String serviceNameValue;
				property.getValue().get(serviceNameValue);
				setServiceName(serviceNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "IPDestinationAddress"))
			{
				String iPDestinationAddressValue;
				property.getValue().get(iPDestinationAddressValue);
				setIPDestinationAddress(iPDestinationAddressValue);
			}
			else if (String::equal(property.getName().getString(), "IPDestinationMask"))
			{
				String iPDestinationMaskValue;
				property.getValue().get(iPDestinationMaskValue);
				setIPDestinationMask(iPDestinationMaskValue);
			}
			else if (String::equal(property.getName().getString(), "AddressType"))
			{
				Uint16 addressTypeValue;
				property.getValue().get(addressTypeValue);
				setAddressType(addressTypeValue);
			}
	}
	return true;
}


Boolean UNIX_IPRoute::initialize()
{
	return false;
}

Boolean UNIX_IPRoute::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPRoute");
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
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_IPRoute");
	_iPDestinationAddress = String ("");
	_iPDestinationMask = String ("");
	_addressType = Uint16(0);
	
	return false;
}

Boolean UNIX_IPRoute::finalize()
{
	return false;
}

Boolean UNIX_IPRoute::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IPRoute::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String creationClassNameKey;
	String iPDestinationAddressKey;
	String iPDestinationMaskKey;
	String addressTypeKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_IP_DESTINATION_ADDRESS)) iPDestinationAddressKey = kb.getValue();
		else if (keyName.equal(PROPERTY_IP_DESTINATION_MASK)) iPDestinationMaskKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ADDRESS_TYPE)) addressTypeKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getServiceCreationClassName(), serviceCreationClassNameKey)) && 
			(String::equalNoCase(getServiceName(), serviceNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getIPDestinationAddress(), iPDestinationAddressKey)) && 
			(String::equalNoCase(getIPDestinationMask(), iPDestinationMaskKey)) && 
			(String::equalNoCase(String(std::to_string(getAddressType()).c_str()), addressTypeKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_IPRoute::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPRoute::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPRoute::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPRoute::validateInstance()
{
	return true;
}

