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


UNIX_StaticForwardingEntry::UNIX_StaticForwardingEntry(void)
{
}

UNIX_StaticForwardingEntry::~UNIX_StaticForwardingEntry(void)
{
}

Boolean UNIX_StaticForwardingEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StaticForwardingEntry::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StaticForwardingEntry::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StaticForwardingEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StaticForwardingEntry::getCaption() const
{
	return _caption;
}

void UNIX_StaticForwardingEntry::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StaticForwardingEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StaticForwardingEntry::getDescription() const
{
	return _description;
}

void UNIX_StaticForwardingEntry::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StaticForwardingEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StaticForwardingEntry::getElementName() const
{
	return _elementName;
}

void UNIX_StaticForwardingEntry::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StaticForwardingEntry::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StaticForwardingEntry::getGeneration() const
{
	return _generation;
}

void UNIX_StaticForwardingEntry::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StaticForwardingEntry::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StaticForwardingEntry::getInstallDate() const
{
	return _installDate;
}

void UNIX_StaticForwardingEntry::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_StaticForwardingEntry::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StaticForwardingEntry::getName() const
{
	return _name;
}

void UNIX_StaticForwardingEntry::setName(String &value)
{
	_name = value;
}

Boolean UNIX_StaticForwardingEntry::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StaticForwardingEntry::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_StaticForwardingEntry::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_StaticForwardingEntry::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StaticForwardingEntry::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_StaticForwardingEntry::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_StaticForwardingEntry::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StaticForwardingEntry::getStatus() const
{
	return _status;
}

void UNIX_StaticForwardingEntry::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_StaticForwardingEntry::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StaticForwardingEntry::getHealthState() const
{
	return _healthState;
}

void UNIX_StaticForwardingEntry::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_StaticForwardingEntry::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StaticForwardingEntry::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_StaticForwardingEntry::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_StaticForwardingEntry::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StaticForwardingEntry::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_StaticForwardingEntry::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_StaticForwardingEntry::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StaticForwardingEntry::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_StaticForwardingEntry::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_StaticForwardingEntry::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StaticForwardingEntry::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_StaticForwardingEntry::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_StaticForwardingEntry::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_StaticForwardingEntry::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_StaticForwardingEntry::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_StaticForwardingEntry::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_StaticForwardingEntry::getSystemName() const
{
	return _systemName;
}

void UNIX_StaticForwardingEntry::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_StaticForwardingEntry::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_StaticForwardingEntry::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_StaticForwardingEntry::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_StaticForwardingEntry::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_StaticForwardingEntry::getServiceName() const
{
	return _serviceName;
}

void UNIX_StaticForwardingEntry::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_StaticForwardingEntry::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_StaticForwardingEntry::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_StaticForwardingEntry::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_StaticForwardingEntry::getMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_A_C_ADDRESS, getMACAddress());
	return true;
}

String UNIX_StaticForwardingEntry::getMACAddress() const
{
	return _mACAddress;
}

void UNIX_StaticForwardingEntry::setMACAddress(String &value)
{
	_mACAddress = value;
}

Boolean UNIX_StaticForwardingEntry::getStaticStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATIC_STATUS, getStaticStatus());
	return true;
}

Uint16 UNIX_StaticForwardingEntry::getStaticStatus() const
{
	return _staticStatus;
}

void UNIX_StaticForwardingEntry::setStaticStatus(Uint16 &value)
{
	_staticStatus = value;
}

Boolean UNIX_StaticForwardingEntry::getAllowedToGo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_GO, getAllowedToGo());
	return true;
}

Array<Uint16> UNIX_StaticForwardingEntry::getAllowedToGo() const
{
	return _allowedToGo;
}

void UNIX_StaticForwardingEntry::setAllowedToGo(Array<Uint16> &value)
{
	_allowedToGo = value;
}


void UNIX_StaticForwardingEntry::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StaticForwardingEntry");
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
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_StaticForwardingEntry");
	_mACAddress = String ("");
	_staticStatus = Uint16(0);
	_allowedToGo.clear();

}

Boolean UNIX_StaticForwardingEntry::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MACAddress"))
			{
				String mACAddressValue;
				property.getValue().get(mACAddressValue);
				setMACAddress(mACAddressValue);
			}
			else if (String::equal(property.getName().getString(), "StaticStatus"))
			{
				Uint16 staticStatusValue;
				property.getValue().get(staticStatusValue);
				setStaticStatus(staticStatusValue);
			}
			else if (String::equal(property.getName().getString(), "AllowedToGo"))
			{
				Array<Uint16> allowedToGoValue;
				property.getValue().get(allowedToGoValue);
				setAllowedToGo(allowedToGoValue);
			}
	}
	return true;
}


Boolean UNIX_StaticForwardingEntry::initialize()
{
	return false;
}

Boolean UNIX_StaticForwardingEntry::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StaticForwardingEntry");
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
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_StaticForwardingEntry");
	_mACAddress = String ("");
	_staticStatus = Uint16(0);
	_allowedToGo.clear();
	
	return false;
}

Boolean UNIX_StaticForwardingEntry::finalize()
{
	return false;
}

Boolean UNIX_StaticForwardingEntry::loadByName(const String name)
{
	return false;
}

Boolean UNIX_StaticForwardingEntry::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String creationClassNameKey;
	String mACAddressKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_M_A_C_ADDRESS)) mACAddressKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getServiceCreationClassName(), serviceCreationClassNameKey)) && 
			(String::equalNoCase(getServiceName(), serviceNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getMACAddress(), mACAddressKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_StaticForwardingEntry::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StaticForwardingEntry::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StaticForwardingEntry::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StaticForwardingEntry::validateInstance()
{
	return true;
}

