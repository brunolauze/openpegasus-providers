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


UNIX_BGPAttributes::UNIX_BGPAttributes(void)
{
}

UNIX_BGPAttributes::~UNIX_BGPAttributes(void)
{
}

Boolean UNIX_BGPAttributes::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPAttributes::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPAttributes::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPAttributes::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPAttributes::getCaption() const
{
	return _caption;
}

void UNIX_BGPAttributes::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPAttributes::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPAttributes::getDescription() const
{
	return _description;
}

void UNIX_BGPAttributes::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPAttributes::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPAttributes::getElementName() const
{
	return _elementName;
}

void UNIX_BGPAttributes::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPAttributes::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPAttributes::getGeneration() const
{
	return _generation;
}

void UNIX_BGPAttributes::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPAttributes::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPAttributes::getInstallDate() const
{
	return _installDate;
}

void UNIX_BGPAttributes::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BGPAttributes::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPAttributes::getName() const
{
	return _name;
}

void UNIX_BGPAttributes::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BGPAttributes::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPAttributes::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BGPAttributes::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BGPAttributes::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPAttributes::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BGPAttributes::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BGPAttributes::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPAttributes::getStatus() const
{
	return _status;
}

void UNIX_BGPAttributes::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BGPAttributes::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPAttributes::getHealthState() const
{
	return _healthState;
}

void UNIX_BGPAttributes::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BGPAttributes::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPAttributes::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BGPAttributes::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BGPAttributes::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPAttributes::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BGPAttributes::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BGPAttributes::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPAttributes::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BGPAttributes::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BGPAttributes::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPAttributes::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BGPAttributes::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BGPAttributes::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPAttributes::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_BGPAttributes::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_BGPAttributes::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPAttributes::getSystemName() const
{
	return _systemName;
}

void UNIX_BGPAttributes::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_BGPAttributes::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_BGPAttributes::getVersion() const
{
	return _version;
}

void UNIX_BGPAttributes::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_BGPAttributes::getLocalPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PREFERENCE, getLocalPreference());
	return true;
}

Uint16 UNIX_BGPAttributes::getLocalPreference() const
{
	return _localPreference;
}

void UNIX_BGPAttributes::setLocalPreference(Uint16 &value)
{
	_localPreference = value;
}

Boolean UNIX_BGPAttributes::getASPath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_S_PATH, getASPath());
	return true;
}

String UNIX_BGPAttributes::getASPath() const
{
	return _aSPath;
}

void UNIX_BGPAttributes::setASPath(String &value)
{
	_aSPath = value;
}

Boolean UNIX_BGPAttributes::getAsSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AS_SET, getAsSet());
	return true;
}

String UNIX_BGPAttributes::getAsSet() const
{
	return _asSet;
}

void UNIX_BGPAttributes::setAsSet(String &value)
{
	_asSet = value;
}

Boolean UNIX_BGPAttributes::getNextHop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP, getNextHop());
	return true;
}

String UNIX_BGPAttributes::getNextHop() const
{
	return _nextHop;
}

void UNIX_BGPAttributes::setNextHop(String &value)
{
	_nextHop = value;
}

Boolean UNIX_BGPAttributes::getNextHopSelf(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP_SELF, getNextHopSelf());
	return true;
}

String UNIX_BGPAttributes::getNextHopSelf() const
{
	return _nextHopSelf;
}

void UNIX_BGPAttributes::setNextHopSelf(String &value)
{
	_nextHopSelf = value;
}

Boolean UNIX_BGPAttributes::getMED(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_E_D, getMED());
	return true;
}

Uint32 UNIX_BGPAttributes::getMED() const
{
	return _mED;
}

void UNIX_BGPAttributes::setMED(Uint32 &value)
{
	_mED = value;
}

Boolean UNIX_BGPAttributes::getBGPCommunityValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BGP_COMMUNITY_VALUE, getBGPCommunityValue());
	return true;
}

Uint32 UNIX_BGPAttributes::getBGPCommunityValue() const
{
	return _bGPCommunityValue;
}

void UNIX_BGPAttributes::setBGPCommunityValue(Uint32 &value)
{
	_bGPCommunityValue = value;
}

Boolean UNIX_BGPAttributes::getAtomicAggregate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATOMIC_AGGREGATE, getAtomicAggregate());
	return true;
}

Boolean UNIX_BGPAttributes::getAtomicAggregate() const
{
	return _atomicAggregate;
}

void UNIX_BGPAttributes::setAtomicAggregate(Boolean &value)
{
	_atomicAggregate = value;
}

Boolean UNIX_BGPAttributes::getAggregator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGREGATOR, getAggregator());
	return true;
}

String UNIX_BGPAttributes::getAggregator() const
{
	return _aggregator;
}

void UNIX_BGPAttributes::setAggregator(String &value)
{
	_aggregator = value;
}

Boolean UNIX_BGPAttributes::getOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIGIN, getOrigin());
	return true;
}

Uint16 UNIX_BGPAttributes::getOrigin() const
{
	return _origin;
}

void UNIX_BGPAttributes::setOrigin(Uint16 &value)
{
	_origin = value;
}

Boolean UNIX_BGPAttributes::getOriginatorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIGINATOR_ID, getOriginatorID());
	return true;
}

String UNIX_BGPAttributes::getOriginatorID() const
{
	return _originatorID;
}

void UNIX_BGPAttributes::setOriginatorID(String &value)
{
	_originatorID = value;
}


void UNIX_BGPAttributes::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPAttributes");
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
	_version = String ("");
	_localPreference = Uint16(0);
	_aSPath = String ("");
	_asSet = String ("");
	_nextHop = String ("");
	_nextHopSelf = String ("");
	_mED = Uint32(0);
	_bGPCommunityValue = Uint32(0);
	_atomicAggregate = Boolean(false);
	_aggregator = String ("");
	_origin = Uint16(0);
	_originatorID = String ("");

}

Boolean UNIX_BGPAttributes::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "LocalPreference"))
			{
				Uint16 localPreferenceValue;
				property.getValue().get(localPreferenceValue);
				setLocalPreference(localPreferenceValue);
			}
			else if (String::equal(property.getName().getString(), "ASPath"))
			{
				String aSPathValue;
				property.getValue().get(aSPathValue);
				setASPath(aSPathValue);
			}
			else if (String::equal(property.getName().getString(), "AsSet"))
			{
				String asSetValue;
				property.getValue().get(asSetValue);
				setAsSet(asSetValue);
			}
			else if (String::equal(property.getName().getString(), "NextHop"))
			{
				String nextHopValue;
				property.getValue().get(nextHopValue);
				setNextHop(nextHopValue);
			}
			else if (String::equal(property.getName().getString(), "NextHopSelf"))
			{
				String nextHopSelfValue;
				property.getValue().get(nextHopSelfValue);
				setNextHopSelf(nextHopSelfValue);
			}
			else if (String::equal(property.getName().getString(), "MED"))
			{
				Uint32 mEDValue;
				property.getValue().get(mEDValue);
				setMED(mEDValue);
			}
			else if (String::equal(property.getName().getString(), "BGPCommunityValue"))
			{
				Uint32 bGPCommunityValueValue;
				property.getValue().get(bGPCommunityValueValue);
				setBGPCommunityValue(bGPCommunityValueValue);
			}
			else if (String::equal(property.getName().getString(), "AtomicAggregate"))
			{
				Boolean atomicAggregateValue;
				property.getValue().get(atomicAggregateValue);
				setAtomicAggregate(atomicAggregateValue);
			}
			else if (String::equal(property.getName().getString(), "Aggregator"))
			{
				String aggregatorValue;
				property.getValue().get(aggregatorValue);
				setAggregator(aggregatorValue);
			}
			else if (String::equal(property.getName().getString(), "Origin"))
			{
				Uint16 originValue;
				property.getValue().get(originValue);
				setOrigin(originValue);
			}
			else if (String::equal(property.getName().getString(), "OriginatorID"))
			{
				String originatorIDValue;
				property.getValue().get(originatorIDValue);
				setOriginatorID(originatorIDValue);
			}
	}
	return true;
}


Boolean UNIX_BGPAttributes::initialize()
{
	return false;
}

Boolean UNIX_BGPAttributes::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPAttributes");
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
	_version = String ("");
	_localPreference = Uint16(0);
	_aSPath = String ("");
	_asSet = String ("");
	_nextHop = String ("");
	_nextHopSelf = String ("");
	_mED = Uint32(0);
	_bGPCommunityValue = Uint32(0);
	_atomicAggregate = Boolean(false);
	_aggregator = String ("");
	_origin = Uint16(0);
	_originatorID = String ("");
	
	return false;
}

Boolean UNIX_BGPAttributes::finalize()
{
	return false;
}

Boolean UNIX_BGPAttributes::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BGPAttributes::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String versionKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getVersion(), versionKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_BGPAttributes::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPAttributes::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPAttributes::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPAttributes::validateInstance()
{
	return true;
}

