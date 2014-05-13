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


UNIX_BGPPathAttributes::UNIX_BGPPathAttributes(void)
{
}

UNIX_BGPPathAttributes::~UNIX_BGPPathAttributes(void)
{
}

Boolean UNIX_BGPPathAttributes::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPPathAttributes::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPPathAttributes::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPPathAttributes::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPPathAttributes::getCaption() const
{
	return _caption;
}

void UNIX_BGPPathAttributes::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPPathAttributes::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPPathAttributes::getDescription() const
{
	return _description;
}

void UNIX_BGPPathAttributes::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPPathAttributes::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPPathAttributes::getElementName() const
{
	return _elementName;
}

void UNIX_BGPPathAttributes::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPPathAttributes::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPPathAttributes::getGeneration() const
{
	return _generation;
}

void UNIX_BGPPathAttributes::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPPathAttributes::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPPathAttributes::getInstallDate() const
{
	return _installDate;
}

void UNIX_BGPPathAttributes::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_BGPPathAttributes::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPPathAttributes::getName() const
{
	return _name;
}

void UNIX_BGPPathAttributes::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BGPPathAttributes::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPPathAttributes::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_BGPPathAttributes::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_BGPPathAttributes::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPPathAttributes::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_BGPPathAttributes::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_BGPPathAttributes::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPPathAttributes::getStatus() const
{
	return _status;
}

void UNIX_BGPPathAttributes::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_BGPPathAttributes::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getHealthState() const
{
	return _healthState;
}

void UNIX_BGPPathAttributes::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_BGPPathAttributes::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_BGPPathAttributes::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_BGPPathAttributes::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_BGPPathAttributes::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_BGPPathAttributes::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_BGPPathAttributes::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_BGPPathAttributes::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_BGPPathAttributes::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_BGPPathAttributes::getASNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_S_NUMBERS, getASNumbers());
	return true;
}

String UNIX_BGPPathAttributes::getASNumbers() const
{
	return _aSNumbers;
}

void UNIX_BGPPathAttributes::setASNumbers(String &value)
{
	_aSNumbers = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrNextHop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_NEXT_HOP, getPathAttrNextHop());
	return true;
}

String UNIX_BGPPathAttributes::getPathAttrNextHop() const
{
	return _pathAttrNextHop;
}

void UNIX_BGPPathAttributes::setPathAttrNextHop(String &value)
{
	_pathAttrNextHop = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrASPathSegment(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_A_S_PATH_SEGMENT, getPathAttrASPathSegment());
	return true;
}

Array<Uint8> UNIX_BGPPathAttributes::getPathAttrASPathSegment() const
{
	return _pathAttrASPathSegment;
}

void UNIX_BGPPathAttributes::setPathAttrASPathSegment(Array<Uint8> &value)
{
	_pathAttrASPathSegment = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_ORIGIN, getPathAttrOrigin());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPathAttrOrigin() const
{
	return _pathAttrOrigin;
}

void UNIX_BGPPathAttributes::setPathAttrOrigin(Uint16 &value)
{
	_pathAttrOrigin = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrMultiExitDisc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_MULTI_EXIT_DISC, getPathAttrMultiExitDisc());
	return true;
}

Sint32 UNIX_BGPPathAttributes::getPathAttrMultiExitDisc() const
{
	return _pathAttrMultiExitDisc;
}

void UNIX_BGPPathAttributes::setPathAttrMultiExitDisc(Sint32 &value)
{
	_pathAttrMultiExitDisc = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrLocalPref(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_LOCAL_PREF, getPathAttrLocalPref());
	return true;
}

Sint32 UNIX_BGPPathAttributes::getPathAttrLocalPref() const
{
	return _pathAttrLocalPref;
}

void UNIX_BGPPathAttributes::setPathAttrLocalPref(Sint32 &value)
{
	_pathAttrLocalPref = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrAtomicAggregate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_ATOMIC_AGGREGATE, getPathAttrAtomicAggregate());
	return true;
}

Uint32 UNIX_BGPPathAttributes::getPathAttrAtomicAggregate() const
{
	return _pathAttrAtomicAggregate;
}

void UNIX_BGPPathAttributes::setPathAttrAtomicAggregate(Uint32 &value)
{
	_pathAttrAtomicAggregate = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrAggregatorAS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_AGGREGATOR_A_S, getPathAttrAggregatorAS());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPathAttrAggregatorAS() const
{
	return _pathAttrAggregatorAS;
}

void UNIX_BGPPathAttributes::setPathAttrAggregatorAS(Uint16 &value)
{
	_pathAttrAggregatorAS = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrAggregatorAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_AGGREGATOR_ADDR, getPathAttrAggregatorAddr());
	return true;
}

String UNIX_BGPPathAttributes::getPathAttrAggregatorAddr() const
{
	return _pathAttrAggregatorAddr;
}

void UNIX_BGPPathAttributes::setPathAttrAggregatorAddr(String &value)
{
	_pathAttrAggregatorAddr = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrCalcLocalPref(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_CALC_LOCAL_PREF, getPathAttrCalcLocalPref());
	return true;
}

Sint16 UNIX_BGPPathAttributes::getPathAttrCalcLocalPref() const
{
	return _pathAttrCalcLocalPref;
}

void UNIX_BGPPathAttributes::setPathAttrCalcLocalPref(Sint16 &value)
{
	_pathAttrCalcLocalPref = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrBest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_BEST, getPathAttrBest());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPathAttrBest() const
{
	return _pathAttrBest;
}

void UNIX_BGPPathAttributes::setPathAttrBest(Uint16 &value)
{
	_pathAttrBest = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrUnknown(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_UNKNOWN, getPathAttrUnknown());
	return true;
}

Array<String> UNIX_BGPPathAttributes::getPathAttrUnknown() const
{
	return _pathAttrUnknown;
}

void UNIX_BGPPathAttributes::setPathAttrUnknown(Array<String> &value)
{
	_pathAttrUnknown = value;
}

Boolean UNIX_BGPPathAttributes::getPathAttrUnknownNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_UNKNOWN_NUMBER, getPathAttrUnknownNumber());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPathAttrUnknownNumber() const
{
	return _pathAttrUnknownNumber;
}

void UNIX_BGPPathAttributes::setPathAttrUnknownNumber(Uint16 &value)
{
	_pathAttrUnknownNumber = value;
}


void UNIX_BGPPathAttributes::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPPathAttributes");
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
	_aSNumbers = String ("");
	_pathAttrNextHop = String ("");
	_pathAttrASPathSegment.clear();
	_pathAttrOrigin = Uint16(0);
	_pathAttrMultiExitDisc = Sint32(0);
	_pathAttrLocalPref = Sint32(0);
	_pathAttrAtomicAggregate = Uint32(0);
	_pathAttrAggregatorAS = Uint16(0);
	_pathAttrAggregatorAddr = String ("");
	_pathAttrCalcLocalPref = Sint16(0);
	_pathAttrBest = Uint16(0);
	_pathAttrUnknown.clear();
	_pathAttrUnknownNumber = Uint16(0);

}

Boolean UNIX_BGPPathAttributes::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ASNumbers"))
			{
				String aSNumbersValue;
				property.getValue().get(aSNumbersValue);
				setASNumbers(aSNumbersValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrNextHop"))
			{
				String pathAttrNextHopValue;
				property.getValue().get(pathAttrNextHopValue);
				setPathAttrNextHop(pathAttrNextHopValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrASPathSegment"))
			{
				Array<Uint8> pathAttrASPathSegmentValue;
				property.getValue().get(pathAttrASPathSegmentValue);
				setPathAttrASPathSegment(pathAttrASPathSegmentValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrOrigin"))
			{
				Uint16 pathAttrOriginValue;
				property.getValue().get(pathAttrOriginValue);
				setPathAttrOrigin(pathAttrOriginValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrMultiExitDisc"))
			{
				Sint32 pathAttrMultiExitDiscValue;
				property.getValue().get(pathAttrMultiExitDiscValue);
				setPathAttrMultiExitDisc(pathAttrMultiExitDiscValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrLocalPref"))
			{
				Sint32 pathAttrLocalPrefValue;
				property.getValue().get(pathAttrLocalPrefValue);
				setPathAttrLocalPref(pathAttrLocalPrefValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrAtomicAggregate"))
			{
				Uint32 pathAttrAtomicAggregateValue;
				property.getValue().get(pathAttrAtomicAggregateValue);
				setPathAttrAtomicAggregate(pathAttrAtomicAggregateValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrAggregatorAS"))
			{
				Uint16 pathAttrAggregatorASValue;
				property.getValue().get(pathAttrAggregatorASValue);
				setPathAttrAggregatorAS(pathAttrAggregatorASValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrAggregatorAddr"))
			{
				String pathAttrAggregatorAddrValue;
				property.getValue().get(pathAttrAggregatorAddrValue);
				setPathAttrAggregatorAddr(pathAttrAggregatorAddrValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrCalcLocalPref"))
			{
				Sint16 pathAttrCalcLocalPrefValue;
				property.getValue().get(pathAttrCalcLocalPrefValue);
				setPathAttrCalcLocalPref(pathAttrCalcLocalPrefValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrBest"))
			{
				Uint16 pathAttrBestValue;
				property.getValue().get(pathAttrBestValue);
				setPathAttrBest(pathAttrBestValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrUnknown"))
			{
				Array<String> pathAttrUnknownValue;
				property.getValue().get(pathAttrUnknownValue);
				setPathAttrUnknown(pathAttrUnknownValue);
			}
			else if (String::equal(property.getName().getString(), "PathAttrUnknownNumber"))
			{
				Uint16 pathAttrUnknownNumberValue;
				property.getValue().get(pathAttrUnknownNumberValue);
				setPathAttrUnknownNumber(pathAttrUnknownNumberValue);
			}
	}
	return true;
}


Boolean UNIX_BGPPathAttributes::initialize()
{
	return false;
}

Boolean UNIX_BGPPathAttributes::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPPathAttributes");
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
	_aSNumbers = String ("");
	_pathAttrNextHop = String ("");
	_pathAttrASPathSegment.clear();
	_pathAttrOrigin = Uint16(0);
	_pathAttrMultiExitDisc = Sint32(0);
	_pathAttrLocalPref = Sint32(0);
	_pathAttrAtomicAggregate = Uint32(0);
	_pathAttrAggregatorAS = Uint16(0);
	_pathAttrAggregatorAddr = String ("");
	_pathAttrCalcLocalPref = Sint16(0);
	_pathAttrBest = Uint16(0);
	_pathAttrUnknown.clear();
	_pathAttrUnknownNumber = Uint16(0);
	
	return false;
}

Boolean UNIX_BGPPathAttributes::finalize()
{
	return false;
}

Boolean UNIX_BGPPathAttributes::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BGPPathAttributes::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String aSNumbersKey;
	String pathAttrNextHopKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_A_S_NUMBERS)) aSNumbersKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PATH_ATTR_NEXT_HOP)) pathAttrNextHopKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getASNumbers(), aSNumbersKey)) && 
			(String::equalNoCase(getPathAttrNextHop(), pathAttrNextHopKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_BGPPathAttributes::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPPathAttributes::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPPathAttributes::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPPathAttributes::validateInstance()
{
	return true;
}

