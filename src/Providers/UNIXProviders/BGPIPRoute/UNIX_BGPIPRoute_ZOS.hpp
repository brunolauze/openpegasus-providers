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


UNIX_BGPIPRoute::UNIX_BGPIPRoute(void)
{
}

UNIX_BGPIPRoute::~UNIX_BGPIPRoute(void)
{
}

Boolean UNIX_BGPIPRoute::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPIPRoute::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPIPRoute::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPIPRoute::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPIPRoute::getCaption() const
{
	return _caption;
}

void UNIX_BGPIPRoute::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPIPRoute::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPIPRoute::getDescription() const
{
	return _description;
}

void UNIX_BGPIPRoute::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPIPRoute::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPIPRoute::getElementName() const
{
	return _elementName;
}

void UNIX_BGPIPRoute::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPIPRoute::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPIPRoute::getGeneration() const
{
	return _generation;
}

void UNIX_BGPIPRoute::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPIPRoute::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPIPRoute::getInstallDate() const
{
	return _installDate;
}

void UNIX_BGPIPRoute::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BGPIPRoute::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPIPRoute::getName() const
{
	return _name;
}

void UNIX_BGPIPRoute::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BGPIPRoute::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPIPRoute::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BGPIPRoute::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BGPIPRoute::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPIPRoute::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BGPIPRoute::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BGPIPRoute::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPIPRoute::getStatus() const
{
	return _status;
}

void UNIX_BGPIPRoute::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BGPIPRoute::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPIPRoute::getHealthState() const
{
	return _healthState;
}

void UNIX_BGPIPRoute::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BGPIPRoute::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPIPRoute::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BGPIPRoute::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BGPIPRoute::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPIPRoute::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BGPIPRoute::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BGPIPRoute::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPIPRoute::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BGPIPRoute::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BGPIPRoute::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPIPRoute::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BGPIPRoute::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BGPIPRoute::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_BGPIPRoute::getDestinationAddress() const
{
	return _destinationAddress;
}

void UNIX_BGPIPRoute::setDestinationAddress(String &value)
{
	_destinationAddress = value;
}

Boolean UNIX_BGPIPRoute::getDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_MASK, getDestinationMask());
	return true;
}

String UNIX_BGPIPRoute::getDestinationMask() const
{
	return _destinationMask;
}

void UNIX_BGPIPRoute::setDestinationMask(String &value)
{
	_destinationMask = value;
}

Boolean UNIX_BGPIPRoute::getNextHop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP, getNextHop());
	return true;
}

String UNIX_BGPIPRoute::getNextHop() const
{
	return _nextHop;
}

void UNIX_BGPIPRoute::setNextHop(String &value)
{
	_nextHop = value;
}

Boolean UNIX_BGPIPRoute::getIsStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STATIC, getIsStatic());
	return true;
}

Boolean UNIX_BGPIPRoute::getIsStatic() const
{
	return _isStatic;
}

void UNIX_BGPIPRoute::setIsStatic(Boolean &value)
{
	_isStatic = value;
}

Boolean UNIX_BGPIPRoute::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPIPRoute::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_BGPIPRoute::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_BGPIPRoute::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPIPRoute::getSystemName() const
{
	return _systemName;
}

void UNIX_BGPIPRoute::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_BGPIPRoute::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_BGPIPRoute::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_BGPIPRoute::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_BGPIPRoute::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_BGPIPRoute::getServiceName() const
{
	return _serviceName;
}

void UNIX_BGPIPRoute::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_BGPIPRoute::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPIPRoute::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_BGPIPRoute::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_BGPIPRoute::getIPDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_DESTINATION_ADDRESS, getIPDestinationAddress());
	return true;
}

String UNIX_BGPIPRoute::getIPDestinationAddress() const
{
	return _iPDestinationAddress;
}

void UNIX_BGPIPRoute::setIPDestinationAddress(String &value)
{
	_iPDestinationAddress = value;
}

Boolean UNIX_BGPIPRoute::getIPDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_DESTINATION_MASK, getIPDestinationMask());
	return true;
}

String UNIX_BGPIPRoute::getIPDestinationMask() const
{
	return _iPDestinationMask;
}

void UNIX_BGPIPRoute::setIPDestinationMask(String &value)
{
	_iPDestinationMask = value;
}

Boolean UNIX_BGPIPRoute::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_BGPIPRoute::getAddressType() const
{
	return _addressType;
}

void UNIX_BGPIPRoute::setAddressType(Uint16 &value)
{
	_addressType = value;
}

Boolean UNIX_BGPIPRoute::getIsBackDoorRoute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BACK_DOOR_ROUTE, getIsBackDoorRoute());
	return true;
}

Boolean UNIX_BGPIPRoute::getIsBackDoorRoute() const
{
	return _isBackDoorRoute;
}

void UNIX_BGPIPRoute::setIsBackDoorRoute(Boolean &value)
{
	_isBackDoorRoute = value;
}

Boolean UNIX_BGPIPRoute::getUsesLoopbackPeering(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USES_LOOPBACK_PEERING, getUsesLoopbackPeering());
	return true;
}

Boolean UNIX_BGPIPRoute::getUsesLoopbackPeering() const
{
	return _usesLoopbackPeering;
}

void UNIX_BGPIPRoute::setUsesLoopbackPeering(Boolean &value)
{
	_usesLoopbackPeering = value;
}


void UNIX_BGPIPRoute::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPIPRoute");
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
	_creationClassName = String("UNIX_BGPIPRoute");
	_iPDestinationAddress = String ("");
	_iPDestinationMask = String ("");
	_addressType = Uint16(0);
	_isBackDoorRoute = Boolean(false);
	_usesLoopbackPeering = Boolean(false);

}

Boolean UNIX_BGPIPRoute::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsBackDoorRoute"))
			{
				Boolean isBackDoorRouteValue;
				property.getValue().get(isBackDoorRouteValue);
				setIsBackDoorRoute(isBackDoorRouteValue);
			}
			else if (String::equal(property.getName().getString(), "UsesLoopbackPeering"))
			{
				Boolean usesLoopbackPeeringValue;
				property.getValue().get(usesLoopbackPeeringValue);
				setUsesLoopbackPeering(usesLoopbackPeeringValue);
			}
	}
	return true;
}


Boolean UNIX_BGPIPRoute::initialize()
{
	return false;
}

Boolean UNIX_BGPIPRoute::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPIPRoute");
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
	_creationClassName = String("UNIX_BGPIPRoute");
	_iPDestinationAddress = String ("");
	_iPDestinationMask = String ("");
	_addressType = Uint16(0);
	_isBackDoorRoute = Boolean(false);
	_usesLoopbackPeering = Boolean(false);
	
	return false;
}

Boolean UNIX_BGPIPRoute::finalize()
{
	return false;
}

Boolean UNIX_BGPIPRoute::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BGPIPRoute::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BGPIPRoute::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPIPRoute::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPIPRoute::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPIPRoute::validateInstance()
{
	return true;
}

