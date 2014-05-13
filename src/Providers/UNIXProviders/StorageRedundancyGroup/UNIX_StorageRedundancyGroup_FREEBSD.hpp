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


UNIX_StorageRedundancyGroup::UNIX_StorageRedundancyGroup(void)
{
}

UNIX_StorageRedundancyGroup::~UNIX_StorageRedundancyGroup(void)
{
}

Boolean UNIX_StorageRedundancyGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageRedundancyGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageRedundancyGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageRedundancyGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageRedundancyGroup::getCaption() const
{
	return _caption;
}

void UNIX_StorageRedundancyGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageRedundancyGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageRedundancyGroup::getDescription() const
{
	return _description;
}

void UNIX_StorageRedundancyGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageRedundancyGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageRedundancyGroup::getElementName() const
{
	return _elementName;
}

void UNIX_StorageRedundancyGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageRedundancyGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageRedundancyGroup::getGeneration() const
{
	return _generation;
}

void UNIX_StorageRedundancyGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageRedundancyGroup::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StorageRedundancyGroup::getInstallDate() const
{
	return _installDate;
}

void UNIX_StorageRedundancyGroup::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_StorageRedundancyGroup::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StorageRedundancyGroup::getName() const
{
	return _name;
}

void UNIX_StorageRedundancyGroup::setName(String &value)
{
	_name = value;
}

Boolean UNIX_StorageRedundancyGroup::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StorageRedundancyGroup::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_StorageRedundancyGroup::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_StorageRedundancyGroup::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StorageRedundancyGroup::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_StorageRedundancyGroup::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_StorageRedundancyGroup::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StorageRedundancyGroup::getStatus() const
{
	return _status;
}

void UNIX_StorageRedundancyGroup::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_StorageRedundancyGroup::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getHealthState() const
{
	return _healthState;
}

void UNIX_StorageRedundancyGroup::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_StorageRedundancyGroup::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_StorageRedundancyGroup::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_StorageRedundancyGroup::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_StorageRedundancyGroup::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_StorageRedundancyGroup::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_StorageRedundancyGroup::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_StorageRedundancyGroup::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_StorageRedundancyGroup::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_StorageRedundancyGroup::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_StorageRedundancyGroup::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_StorageRedundancyGroup::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_StorageRedundancyGroup::getRedundancyStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDUNDANCY_STATUS, getRedundancyStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getRedundancyStatus() const
{
	return _redundancyStatus;
}

void UNIX_StorageRedundancyGroup::setRedundancyStatus(Uint16 &value)
{
	_redundancyStatus = value;
}

Boolean UNIX_StorageRedundancyGroup::getTypeOfAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ALGORITHM, getTypeOfAlgorithm());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getTypeOfAlgorithm() const
{
	return _typeOfAlgorithm;
}

void UNIX_StorageRedundancyGroup::setTypeOfAlgorithm(Uint16 &value)
{
	_typeOfAlgorithm = value;
}

Boolean UNIX_StorageRedundancyGroup::getStorageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_REDUNDANCY, getStorageRedundancy());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getStorageRedundancy() const
{
	return _storageRedundancy;
}

void UNIX_StorageRedundancyGroup::setStorageRedundancy(Uint16 &value)
{
	_storageRedundancy = value;
}

Boolean UNIX_StorageRedundancyGroup::getIsStriped(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STRIPED, getIsStriped());
	return true;
}

Boolean UNIX_StorageRedundancyGroup::getIsStriped() const
{
	return _isStriped;
}

void UNIX_StorageRedundancyGroup::setIsStriped(Boolean &value)
{
	_isStriped = value;
}

Boolean UNIX_StorageRedundancyGroup::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_StorageRedundancyGroup::getIsConcatenated() const
{
	return _isConcatenated;
}

void UNIX_StorageRedundancyGroup::setIsConcatenated(Boolean &value)
{
	_isConcatenated = value;
}


void UNIX_StorageRedundancyGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageRedundancyGroup");
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
	_creationClassName = String("UNIX_StorageRedundancyGroup");
	_redundancyStatus = Uint16(0);
	_typeOfAlgorithm = Uint16(0);
	_storageRedundancy = Uint16(0);
	_isStriped = Boolean(false);
	_isConcatenated = Boolean(false);

}

Boolean UNIX_StorageRedundancyGroup::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "RedundancyStatus"))
			{
				Uint16 redundancyStatusValue;
				property.getValue().get(redundancyStatusValue);
				setRedundancyStatus(redundancyStatusValue);
			}
			else if (String::equal(property.getName().getString(), "TypeOfAlgorithm"))
			{
				Uint16 typeOfAlgorithmValue;
				property.getValue().get(typeOfAlgorithmValue);
				setTypeOfAlgorithm(typeOfAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "StorageRedundancy"))
			{
				Uint16 storageRedundancyValue;
				property.getValue().get(storageRedundancyValue);
				setStorageRedundancy(storageRedundancyValue);
			}
			else if (String::equal(property.getName().getString(), "IsStriped"))
			{
				Boolean isStripedValue;
				property.getValue().get(isStripedValue);
				setIsStriped(isStripedValue);
			}
			else if (String::equal(property.getName().getString(), "IsConcatenated"))
			{
				Boolean isConcatenatedValue;
				property.getValue().get(isConcatenatedValue);
				setIsConcatenated(isConcatenatedValue);
			}
	}
	return true;
}


Boolean UNIX_StorageRedundancyGroup::initialize()
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageRedundancyGroup");
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
	_creationClassName = String("UNIX_StorageRedundancyGroup");
	_redundancyStatus = Uint16(0);
	_typeOfAlgorithm = Uint16(0);
	_storageRedundancy = Uint16(0);
	_isStriped = Boolean(false);
	_isConcatenated = Boolean(false);
	
	return false;
}

Boolean UNIX_StorageRedundancyGroup::finalize()
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::loadByName(const String name)
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_StorageRedundancyGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::validateInstance()
{
	return true;
}

