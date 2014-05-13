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


UNIX_Hdr8021Filter::UNIX_Hdr8021Filter(void)
{
}

UNIX_Hdr8021Filter::~UNIX_Hdr8021Filter(void)
{
}

Boolean UNIX_Hdr8021Filter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Hdr8021Filter::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Hdr8021Filter::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Hdr8021Filter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Hdr8021Filter::getCaption() const
{
	return _caption;
}

void UNIX_Hdr8021Filter::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Hdr8021Filter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Hdr8021Filter::getDescription() const
{
	return _description;
}

void UNIX_Hdr8021Filter::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Hdr8021Filter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Hdr8021Filter::getElementName() const
{
	return _elementName;
}

void UNIX_Hdr8021Filter::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Hdr8021Filter::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Hdr8021Filter::getGeneration() const
{
	return _generation;
}

void UNIX_Hdr8021Filter::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Hdr8021Filter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Hdr8021Filter::getInstallDate() const
{
	return _installDate;
}

void UNIX_Hdr8021Filter::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Hdr8021Filter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Hdr8021Filter::getName() const
{
	return _name;
}

void UNIX_Hdr8021Filter::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Hdr8021Filter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Hdr8021Filter::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Hdr8021Filter::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Hdr8021Filter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Hdr8021Filter::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Hdr8021Filter::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Hdr8021Filter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Hdr8021Filter::getStatus() const
{
	return _status;
}

void UNIX_Hdr8021Filter::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Hdr8021Filter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Hdr8021Filter::getHealthState() const
{
	return _healthState;
}

void UNIX_Hdr8021Filter::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Hdr8021Filter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Hdr8021Filter::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Hdr8021Filter::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Hdr8021Filter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Hdr8021Filter::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Hdr8021Filter::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Hdr8021Filter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Hdr8021Filter::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Hdr8021Filter::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Hdr8021Filter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Hdr8021Filter::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Hdr8021Filter::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Hdr8021Filter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Hdr8021Filter::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Hdr8021Filter::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Hdr8021Filter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Hdr8021Filter::getSystemName() const
{
	return _systemName;
}

void UNIX_Hdr8021Filter::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Hdr8021Filter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Hdr8021Filter::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Hdr8021Filter::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Hdr8021Filter::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_Hdr8021Filter::getIsNegated() const
{
	return _isNegated;
}

void UNIX_Hdr8021Filter::setIsNegated(Boolean &value)
{
	_isNegated = value;
}

Boolean UNIX_Hdr8021Filter::getHdrSrcMACAddr8021(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_M_A_C_ADDR_8_0_2_1, getHdrSrcMACAddr8021());
	return true;
}

Array<Uint8> UNIX_Hdr8021Filter::getHdrSrcMACAddr8021() const
{
	return _hdrSrcMACAddr8021;
}

void UNIX_Hdr8021Filter::setHdrSrcMACAddr8021(Array<Uint8> &value)
{
	_hdrSrcMACAddr8021 = value;
}

Boolean UNIX_Hdr8021Filter::getHdrSrcMACMask8021(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_M_A_C_MASK_8_0_2_1, getHdrSrcMACMask8021());
	return true;
}

Array<Uint8> UNIX_Hdr8021Filter::getHdrSrcMACMask8021() const
{
	return _hdrSrcMACMask8021;
}

void UNIX_Hdr8021Filter::setHdrSrcMACMask8021(Array<Uint8> &value)
{
	_hdrSrcMACMask8021 = value;
}

Boolean UNIX_Hdr8021Filter::getHdrDestMACAddr8021(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_M_A_C_ADDR_8_0_2_1, getHdrDestMACAddr8021());
	return true;
}

Array<Uint8> UNIX_Hdr8021Filter::getHdrDestMACAddr8021() const
{
	return _hdrDestMACAddr8021;
}

void UNIX_Hdr8021Filter::setHdrDestMACAddr8021(Array<Uint8> &value)
{
	_hdrDestMACAddr8021 = value;
}

Boolean UNIX_Hdr8021Filter::getHdrDestMACMask8021(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_M_A_C_MASK_8_0_2_1, getHdrDestMACMask8021());
	return true;
}

Array<Uint8> UNIX_Hdr8021Filter::getHdrDestMACMask8021() const
{
	return _hdrDestMACMask8021;
}

void UNIX_Hdr8021Filter::setHdrDestMACMask8021(Array<Uint8> &value)
{
	_hdrDestMACMask8021 = value;
}

Boolean UNIX_Hdr8021Filter::getHdrProtocolID8021(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_PROTOCOL_ID_8_0_2_1, getHdrProtocolID8021());
	return true;
}

Uint16 UNIX_Hdr8021Filter::getHdrProtocolID8021() const
{
	return _hdrProtocolID8021;
}

void UNIX_Hdr8021Filter::setHdrProtocolID8021(Uint16 &value)
{
	_hdrProtocolID8021 = value;
}

Boolean UNIX_Hdr8021Filter::getHdrPriorityValue8021(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_PRIORITY_VALUE_8_0_2_1, getHdrPriorityValue8021());
	return true;
}

Uint8 UNIX_Hdr8021Filter::getHdrPriorityValue8021() const
{
	return _hdrPriorityValue8021;
}

void UNIX_Hdr8021Filter::setHdrPriorityValue8021(Uint8 &value)
{
	_hdrPriorityValue8021 = value;
}

Boolean UNIX_Hdr8021Filter::getHdrVLANID8021(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_VLAN_ID_8_0_2_1, getHdrVLANID8021());
	return true;
}

Uint32 UNIX_Hdr8021Filter::getHdrVLANID8021() const
{
	return _hdrVLANID8021;
}

void UNIX_Hdr8021Filter::setHdrVLANID8021(Uint32 &value)
{
	_hdrVLANID8021 = value;
}


void UNIX_Hdr8021Filter::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Hdr8021Filter");
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
	_creationClassName = String("UNIX_Hdr8021Filter");
	_isNegated = Boolean(false);
	_hdrSrcMACAddr8021.clear();
	_hdrSrcMACMask8021.clear();
	_hdrDestMACAddr8021.clear();
	_hdrDestMACMask8021.clear();
	_hdrProtocolID8021 = Uint16(0);
	_hdrPriorityValue8021 = Uint8(0);
	_hdrVLANID8021 = Uint32(0);

}

Boolean UNIX_Hdr8021Filter::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "HdrSrcMACAddr8021"))
			{
				Array<Uint8> hdrSrcMACAddr8021Value;
				property.getValue().get(hdrSrcMACAddr8021Value);
				setHdrSrcMACAddr8021(hdrSrcMACAddr8021Value);
			}
			else if (String::equal(property.getName().getString(), "HdrSrcMACMask8021"))
			{
				Array<Uint8> hdrSrcMACMask8021Value;
				property.getValue().get(hdrSrcMACMask8021Value);
				setHdrSrcMACMask8021(hdrSrcMACMask8021Value);
			}
			else if (String::equal(property.getName().getString(), "HdrDestMACAddr8021"))
			{
				Array<Uint8> hdrDestMACAddr8021Value;
				property.getValue().get(hdrDestMACAddr8021Value);
				setHdrDestMACAddr8021(hdrDestMACAddr8021Value);
			}
			else if (String::equal(property.getName().getString(), "HdrDestMACMask8021"))
			{
				Array<Uint8> hdrDestMACMask8021Value;
				property.getValue().get(hdrDestMACMask8021Value);
				setHdrDestMACMask8021(hdrDestMACMask8021Value);
			}
			else if (String::equal(property.getName().getString(), "HdrProtocolID8021"))
			{
				Uint16 hdrProtocolID8021Value;
				property.getValue().get(hdrProtocolID8021Value);
				setHdrProtocolID8021(hdrProtocolID8021Value);
			}
			else if (String::equal(property.getName().getString(), "HdrPriorityValue8021"))
			{
				Uint8 hdrPriorityValue8021Value;
				property.getValue().get(hdrPriorityValue8021Value);
				setHdrPriorityValue8021(hdrPriorityValue8021Value);
			}
			else if (String::equal(property.getName().getString(), "HdrVLANID8021"))
			{
				Uint32 hdrVLANID8021Value;
				property.getValue().get(hdrVLANID8021Value);
				setHdrVLANID8021(hdrVLANID8021Value);
			}
	}
	return true;
}


Boolean UNIX_Hdr8021Filter::initialize()
{
	return false;
}

Boolean UNIX_Hdr8021Filter::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Hdr8021Filter");
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
	_creationClassName = String("UNIX_Hdr8021Filter");
	_isNegated = Boolean(false);
	_hdrSrcMACAddr8021.clear();
	_hdrSrcMACMask8021.clear();
	_hdrDestMACAddr8021.clear();
	_hdrDestMACMask8021.clear();
	_hdrProtocolID8021 = Uint16(0);
	_hdrPriorityValue8021 = Uint8(0);
	_hdrVLANID8021 = Uint32(0);
	
	return false;
}

Boolean UNIX_Hdr8021Filter::finalize()
{
	return false;
}

Boolean UNIX_Hdr8021Filter::loadByName(const String name)
{
	return false;
}

Boolean UNIX_Hdr8021Filter::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Hdr8021Filter::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Hdr8021Filter::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Hdr8021Filter::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Hdr8021Filter::validateInstance()
{
	return true;
}

