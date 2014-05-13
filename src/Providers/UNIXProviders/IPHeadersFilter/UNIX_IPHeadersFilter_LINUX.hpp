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


UNIX_IPHeadersFilter::UNIX_IPHeadersFilter(void)
{
}

UNIX_IPHeadersFilter::~UNIX_IPHeadersFilter(void)
{
}

Boolean UNIX_IPHeadersFilter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPHeadersFilter::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPHeadersFilter::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPHeadersFilter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPHeadersFilter::getCaption() const
{
	return _caption;
}

void UNIX_IPHeadersFilter::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPHeadersFilter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPHeadersFilter::getDescription() const
{
	return _description;
}

void UNIX_IPHeadersFilter::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPHeadersFilter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPHeadersFilter::getElementName() const
{
	return _elementName;
}

void UNIX_IPHeadersFilter::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPHeadersFilter::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPHeadersFilter::getGeneration() const
{
	return _generation;
}

void UNIX_IPHeadersFilter::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPHeadersFilter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IPHeadersFilter::getInstallDate() const
{
	return _installDate;
}

void UNIX_IPHeadersFilter::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_IPHeadersFilter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPHeadersFilter::getName() const
{
	return _name;
}

void UNIX_IPHeadersFilter::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IPHeadersFilter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IPHeadersFilter::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_IPHeadersFilter::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_IPHeadersFilter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IPHeadersFilter::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_IPHeadersFilter::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_IPHeadersFilter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IPHeadersFilter::getStatus() const
{
	return _status;
}

void UNIX_IPHeadersFilter::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_IPHeadersFilter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHealthState() const
{
	return _healthState;
}

void UNIX_IPHeadersFilter::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_IPHeadersFilter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_IPHeadersFilter::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_IPHeadersFilter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_IPHeadersFilter::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_IPHeadersFilter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_IPHeadersFilter::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_IPHeadersFilter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_IPHeadersFilter::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_IPHeadersFilter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPHeadersFilter::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IPHeadersFilter::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IPHeadersFilter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPHeadersFilter::getSystemName() const
{
	return _systemName;
}

void UNIX_IPHeadersFilter::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IPHeadersFilter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPHeadersFilter::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IPHeadersFilter::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IPHeadersFilter::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_IPHeadersFilter::getIsNegated() const
{
	return _isNegated;
}

void UNIX_IPHeadersFilter::setIsNegated(Boolean &value)
{
	_isNegated = value;
}

Boolean UNIX_IPHeadersFilter::getHdrIPVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_IP_VERSION, getHdrIPVersion());
	return true;
}

Uint8 UNIX_IPHeadersFilter::getHdrIPVersion() const
{
	return _hdrIPVersion;
}

void UNIX_IPHeadersFilter::setHdrIPVersion(Uint8 &value)
{
	_hdrIPVersion = value;
}

Boolean UNIX_IPHeadersFilter::getHdrSrcAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_ADDRESS, getHdrSrcAddress());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrSrcAddress() const
{
	return _hdrSrcAddress;
}

void UNIX_IPHeadersFilter::setHdrSrcAddress(Array<Uint8> &value)
{
	_hdrSrcAddress = value;
}

Boolean UNIX_IPHeadersFilter::getHdrSrcAddressEndOfRange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_ADDRESS_END_OF_RANGE, getHdrSrcAddressEndOfRange());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrSrcAddressEndOfRange() const
{
	return _hdrSrcAddressEndOfRange;
}

void UNIX_IPHeadersFilter::setHdrSrcAddressEndOfRange(Array<Uint8> &value)
{
	_hdrSrcAddressEndOfRange = value;
}

Boolean UNIX_IPHeadersFilter::getHdrSrcMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_MASK, getHdrSrcMask());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrSrcMask() const
{
	return _hdrSrcMask;
}

void UNIX_IPHeadersFilter::setHdrSrcMask(Array<Uint8> &value)
{
	_hdrSrcMask = value;
}

Boolean UNIX_IPHeadersFilter::getHdrDestAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_ADDRESS, getHdrDestAddress());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrDestAddress() const
{
	return _hdrDestAddress;
}

void UNIX_IPHeadersFilter::setHdrDestAddress(Array<Uint8> &value)
{
	_hdrDestAddress = value;
}

Boolean UNIX_IPHeadersFilter::getHdrDestAddressEndOfRange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_ADDRESS_END_OF_RANGE, getHdrDestAddressEndOfRange());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrDestAddressEndOfRange() const
{
	return _hdrDestAddressEndOfRange;
}

void UNIX_IPHeadersFilter::setHdrDestAddressEndOfRange(Array<Uint8> &value)
{
	_hdrDestAddressEndOfRange = value;
}

Boolean UNIX_IPHeadersFilter::getHdrDestMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_MASK, getHdrDestMask());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrDestMask() const
{
	return _hdrDestMask;
}

void UNIX_IPHeadersFilter::setHdrDestMask(Array<Uint8> &value)
{
	_hdrDestMask = value;
}

Boolean UNIX_IPHeadersFilter::getHdrProtocolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_PROTOCOL_ID, getHdrProtocolID());
	return true;
}

Uint8 UNIX_IPHeadersFilter::getHdrProtocolID() const
{
	return _hdrProtocolID;
}

void UNIX_IPHeadersFilter::setHdrProtocolID(Uint8 &value)
{
	_hdrProtocolID = value;
}

Boolean UNIX_IPHeadersFilter::getHdrSrcPortStart(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_PORT_START, getHdrSrcPortStart());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHdrSrcPortStart() const
{
	return _hdrSrcPortStart;
}

void UNIX_IPHeadersFilter::setHdrSrcPortStart(Uint16 &value)
{
	_hdrSrcPortStart = value;
}

Boolean UNIX_IPHeadersFilter::getHdrSrcPortEnd(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_PORT_END, getHdrSrcPortEnd());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHdrSrcPortEnd() const
{
	return _hdrSrcPortEnd;
}

void UNIX_IPHeadersFilter::setHdrSrcPortEnd(Uint16 &value)
{
	_hdrSrcPortEnd = value;
}

Boolean UNIX_IPHeadersFilter::getHdrDestPortStart(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_PORT_START, getHdrDestPortStart());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHdrDestPortStart() const
{
	return _hdrDestPortStart;
}

void UNIX_IPHeadersFilter::setHdrDestPortStart(Uint16 &value)
{
	_hdrDestPortStart = value;
}

Boolean UNIX_IPHeadersFilter::getHdrDestPortEnd(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_PORT_END, getHdrDestPortEnd());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHdrDestPortEnd() const
{
	return _hdrDestPortEnd;
}

void UNIX_IPHeadersFilter::setHdrDestPortEnd(Uint16 &value)
{
	_hdrDestPortEnd = value;
}

Boolean UNIX_IPHeadersFilter::getHdrDSCP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DSCP, getHdrDSCP());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrDSCP() const
{
	return _hdrDSCP;
}

void UNIX_IPHeadersFilter::setHdrDSCP(Array<Uint8> &value)
{
	_hdrDSCP = value;
}

Boolean UNIX_IPHeadersFilter::getHdrFlowLabel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_FLOW_LABEL, getHdrFlowLabel());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrFlowLabel() const
{
	return _hdrFlowLabel;
}

void UNIX_IPHeadersFilter::setHdrFlowLabel(Array<Uint8> &value)
{
	_hdrFlowLabel = value;
}


void UNIX_IPHeadersFilter::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPHeadersFilter");
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
	_creationClassName = String("UNIX_IPHeadersFilter");
	_isNegated = Boolean(false);
	_hdrIPVersion = Uint8(0);
	_hdrSrcAddress.clear();
	_hdrSrcAddressEndOfRange.clear();
	_hdrSrcMask.clear();
	_hdrDestAddress.clear();
	_hdrDestAddressEndOfRange.clear();
	_hdrDestMask.clear();
	_hdrProtocolID = Uint8(0);
	_hdrSrcPortStart = Uint16(0);
	_hdrSrcPortEnd = Uint16(0);
	_hdrDestPortStart = Uint16(0);
	_hdrDestPortEnd = Uint16(0);
	_hdrDSCP.clear();
	_hdrFlowLabel.clear();

}

Boolean UNIX_IPHeadersFilter::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "IsNegated"))
			{
				Boolean isNegatedValue;
				property.getValue().get(isNegatedValue);
				setIsNegated(isNegatedValue);
			}
			else if (String::equal(property.getName().getString(), "HdrIPVersion"))
			{
				Uint8 hdrIPVersionValue;
				property.getValue().get(hdrIPVersionValue);
				setHdrIPVersion(hdrIPVersionValue);
			}
			else if (String::equal(property.getName().getString(), "HdrSrcAddress"))
			{
				Array<Uint8> hdrSrcAddressValue;
				property.getValue().get(hdrSrcAddressValue);
				setHdrSrcAddress(hdrSrcAddressValue);
			}
			else if (String::equal(property.getName().getString(), "HdrSrcAddressEndOfRange"))
			{
				Array<Uint8> hdrSrcAddressEndOfRangeValue;
				property.getValue().get(hdrSrcAddressEndOfRangeValue);
				setHdrSrcAddressEndOfRange(hdrSrcAddressEndOfRangeValue);
			}
			else if (String::equal(property.getName().getString(), "HdrSrcMask"))
			{
				Array<Uint8> hdrSrcMaskValue;
				property.getValue().get(hdrSrcMaskValue);
				setHdrSrcMask(hdrSrcMaskValue);
			}
			else if (String::equal(property.getName().getString(), "HdrDestAddress"))
			{
				Array<Uint8> hdrDestAddressValue;
				property.getValue().get(hdrDestAddressValue);
				setHdrDestAddress(hdrDestAddressValue);
			}
			else if (String::equal(property.getName().getString(), "HdrDestAddressEndOfRange"))
			{
				Array<Uint8> hdrDestAddressEndOfRangeValue;
				property.getValue().get(hdrDestAddressEndOfRangeValue);
				setHdrDestAddressEndOfRange(hdrDestAddressEndOfRangeValue);
			}
			else if (String::equal(property.getName().getString(), "HdrDestMask"))
			{
				Array<Uint8> hdrDestMaskValue;
				property.getValue().get(hdrDestMaskValue);
				setHdrDestMask(hdrDestMaskValue);
			}
			else if (String::equal(property.getName().getString(), "HdrProtocolID"))
			{
				Uint8 hdrProtocolIDValue;
				property.getValue().get(hdrProtocolIDValue);
				setHdrProtocolID(hdrProtocolIDValue);
			}
			else if (String::equal(property.getName().getString(), "HdrSrcPortStart"))
			{
				Uint16 hdrSrcPortStartValue;
				property.getValue().get(hdrSrcPortStartValue);
				setHdrSrcPortStart(hdrSrcPortStartValue);
			}
			else if (String::equal(property.getName().getString(), "HdrSrcPortEnd"))
			{
				Uint16 hdrSrcPortEndValue;
				property.getValue().get(hdrSrcPortEndValue);
				setHdrSrcPortEnd(hdrSrcPortEndValue);
			}
			else if (String::equal(property.getName().getString(), "HdrDestPortStart"))
			{
				Uint16 hdrDestPortStartValue;
				property.getValue().get(hdrDestPortStartValue);
				setHdrDestPortStart(hdrDestPortStartValue);
			}
			else if (String::equal(property.getName().getString(), "HdrDestPortEnd"))
			{
				Uint16 hdrDestPortEndValue;
				property.getValue().get(hdrDestPortEndValue);
				setHdrDestPortEnd(hdrDestPortEndValue);
			}
			else if (String::equal(property.getName().getString(), "HdrDSCP"))
			{
				Array<Uint8> hdrDSCPValue;
				property.getValue().get(hdrDSCPValue);
				setHdrDSCP(hdrDSCPValue);
			}
			else if (String::equal(property.getName().getString(), "HdrFlowLabel"))
			{
				Array<Uint8> hdrFlowLabelValue;
				property.getValue().get(hdrFlowLabelValue);
				setHdrFlowLabel(hdrFlowLabelValue);
			}
	}
	return true;
}


Boolean UNIX_IPHeadersFilter::initialize()
{
	return false;
}

Boolean UNIX_IPHeadersFilter::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPHeadersFilter");
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
	_creationClassName = String("UNIX_IPHeadersFilter");
	_isNegated = Boolean(false);
	_hdrIPVersion = Uint8(0);
	_hdrSrcAddress.clear();
	_hdrSrcAddressEndOfRange.clear();
	_hdrSrcMask.clear();
	_hdrDestAddress.clear();
	_hdrDestAddressEndOfRange.clear();
	_hdrDestMask.clear();
	_hdrProtocolID = Uint8(0);
	_hdrSrcPortStart = Uint16(0);
	_hdrSrcPortEnd = Uint16(0);
	_hdrDestPortStart = Uint16(0);
	_hdrDestPortEnd = Uint16(0);
	_hdrDSCP.clear();
	_hdrFlowLabel.clear();
	
	return false;
}

Boolean UNIX_IPHeadersFilter::finalize()
{
	return false;
}

Boolean UNIX_IPHeadersFilter::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IPHeadersFilter::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_IPHeadersFilter::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPHeadersFilter::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPHeadersFilter::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPHeadersFilter::validateInstance()
{
	return true;
}

