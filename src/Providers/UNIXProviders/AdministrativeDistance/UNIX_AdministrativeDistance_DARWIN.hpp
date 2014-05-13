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


UNIX_AdministrativeDistance::UNIX_AdministrativeDistance(void)
{
}

UNIX_AdministrativeDistance::~UNIX_AdministrativeDistance(void)
{
}

Boolean UNIX_AdministrativeDistance::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AdministrativeDistance::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AdministrativeDistance::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AdministrativeDistance::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AdministrativeDistance::getCaption() const
{
	return _caption;
}

void UNIX_AdministrativeDistance::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AdministrativeDistance::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AdministrativeDistance::getDescription() const
{
	return _description;
}

void UNIX_AdministrativeDistance::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AdministrativeDistance::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AdministrativeDistance::getElementName() const
{
	return _elementName;
}

void UNIX_AdministrativeDistance::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AdministrativeDistance::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AdministrativeDistance::getGeneration() const
{
	return _generation;
}

void UNIX_AdministrativeDistance::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AdministrativeDistance::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AdministrativeDistance::getInstallDate() const
{
	return _installDate;
}

void UNIX_AdministrativeDistance::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_AdministrativeDistance::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AdministrativeDistance::getName() const
{
	return _name;
}

void UNIX_AdministrativeDistance::setName(String &value)
{
	_name = value;
}

Boolean UNIX_AdministrativeDistance::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AdministrativeDistance::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_AdministrativeDistance::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_AdministrativeDistance::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AdministrativeDistance::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_AdministrativeDistance::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_AdministrativeDistance::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AdministrativeDistance::getStatus() const
{
	return _status;
}

void UNIX_AdministrativeDistance::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_AdministrativeDistance::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getHealthState() const
{
	return _healthState;
}

void UNIX_AdministrativeDistance::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_AdministrativeDistance::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_AdministrativeDistance::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_AdministrativeDistance::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_AdministrativeDistance::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_AdministrativeDistance::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_AdministrativeDistance::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_AdministrativeDistance::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_AdministrativeDistance::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_AdministrativeDistance::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AdministrativeDistance::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_AdministrativeDistance::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_AdministrativeDistance::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AdministrativeDistance::getSystemName() const
{
	return _systemName;
}

void UNIX_AdministrativeDistance::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_AdministrativeDistance::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AdministrativeDistance::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_AdministrativeDistance::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_AdministrativeDistance::getDirectConnect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECT_CONNECT, getDirectConnect());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getDirectConnect() const
{
	return _directConnect;
}

void UNIX_AdministrativeDistance::setDirectConnect(Uint8 &value)
{
	_directConnect = value;
}

Boolean UNIX_AdministrativeDistance::getStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATIC, getStatic());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getStatic() const
{
	return _static;
}

void UNIX_AdministrativeDistance::setStatic(Uint8 &value)
{
	_static = value;
}

Boolean UNIX_AdministrativeDistance::getEBGP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_BGP, getEBGP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getEBGP() const
{
	return _eBGP;
}

void UNIX_AdministrativeDistance::setEBGP(Uint8 &value)
{
	_eBGP = value;
}

Boolean UNIX_AdministrativeDistance::getEIGRPInternal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_I_G_R_P_INTERNAL, getEIGRPInternal());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getEIGRPInternal() const
{
	return _eIGRPInternal;
}

void UNIX_AdministrativeDistance::setEIGRPInternal(Uint8 &value)
{
	_eIGRPInternal = value;
}

Boolean UNIX_AdministrativeDistance::getIGRP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_G_R_P, getIGRP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getIGRP() const
{
	return _iGRP;
}

void UNIX_AdministrativeDistance::setIGRP(Uint8 &value)
{
	_iGRP = value;
}

Boolean UNIX_AdministrativeDistance::getOSPF(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OSPF, getOSPF());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getOSPF() const
{
	return _oSPF;
}

void UNIX_AdministrativeDistance::setOSPF(Uint8 &value)
{
	_oSPF = value;
}

Boolean UNIX_AdministrativeDistance::getISIS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_S_I_S, getISIS());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getISIS() const
{
	return _iSIS;
}

void UNIX_AdministrativeDistance::setISIS(Uint8 &value)
{
	_iSIS = value;
}

Boolean UNIX_AdministrativeDistance::getRIP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_IP, getRIP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getRIP() const
{
	return _rIP;
}

void UNIX_AdministrativeDistance::setRIP(Uint8 &value)
{
	_rIP = value;
}

Boolean UNIX_AdministrativeDistance::getEGP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_G_P, getEGP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getEGP() const
{
	return _eGP;
}

void UNIX_AdministrativeDistance::setEGP(Uint8 &value)
{
	_eGP = value;
}

Boolean UNIX_AdministrativeDistance::getEIGRPExternal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_I_G_R_P_EXTERNAL, getEIGRPExternal());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getEIGRPExternal() const
{
	return _eIGRPExternal;
}

void UNIX_AdministrativeDistance::setEIGRPExternal(Uint8 &value)
{
	_eIGRPExternal = value;
}

Boolean UNIX_AdministrativeDistance::getIBGP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IB_G_P, getIBGP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getIBGP() const
{
	return _iBGP;
}

void UNIX_AdministrativeDistance::setIBGP(Uint8 &value)
{
	_iBGP = value;
}

Boolean UNIX_AdministrativeDistance::getBGPLocal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BGP_LOCAL, getBGPLocal());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getBGPLocal() const
{
	return _bGPLocal;
}

void UNIX_AdministrativeDistance::setBGPLocal(Uint8 &value)
{
	_bGPLocal = value;
}

Boolean UNIX_AdministrativeDistance::getUnknown(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNKNOWN, getUnknown());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getUnknown() const
{
	return _unknown;
}

void UNIX_AdministrativeDistance::setUnknown(Uint8 &value)
{
	_unknown = value;
}


void UNIX_AdministrativeDistance::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AdministrativeDistance");
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
	_creationClassName = String("UNIX_AdministrativeDistance");
	_directConnect = Uint8(0);
	_static = Uint8(0);
	_eBGP = Uint8(0);
	_eIGRPInternal = Uint8(0);
	_iGRP = Uint8(0);
	_oSPF = Uint8(0);
	_iSIS = Uint8(0);
	_rIP = Uint8(0);
	_eGP = Uint8(0);
	_eIGRPExternal = Uint8(0);
	_iBGP = Uint8(0);
	_bGPLocal = Uint8(0);
	_unknown = Uint8(0);

}

Boolean UNIX_AdministrativeDistance::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DirectConnect"))
			{
				Uint8 directConnectValue;
				property.getValue().get(directConnectValue);
				setDirectConnect(directConnectValue);
			}
			else if (String::equal(property.getName().getString(), "Static"))
			{
				Uint8 staticValue;
				property.getValue().get(staticValue);
				setStatic(staticValue);
			}
			else if (String::equal(property.getName().getString(), "EBGP"))
			{
				Uint8 eBGPValue;
				property.getValue().get(eBGPValue);
				setEBGP(eBGPValue);
			}
			else if (String::equal(property.getName().getString(), "EIGRPInternal"))
			{
				Uint8 eIGRPInternalValue;
				property.getValue().get(eIGRPInternalValue);
				setEIGRPInternal(eIGRPInternalValue);
			}
			else if (String::equal(property.getName().getString(), "IGRP"))
			{
				Uint8 iGRPValue;
				property.getValue().get(iGRPValue);
				setIGRP(iGRPValue);
			}
			else if (String::equal(property.getName().getString(), "OSPF"))
			{
				Uint8 oSPFValue;
				property.getValue().get(oSPFValue);
				setOSPF(oSPFValue);
			}
			else if (String::equal(property.getName().getString(), "ISIS"))
			{
				Uint8 iSISValue;
				property.getValue().get(iSISValue);
				setISIS(iSISValue);
			}
			else if (String::equal(property.getName().getString(), "RIP"))
			{
				Uint8 rIPValue;
				property.getValue().get(rIPValue);
				setRIP(rIPValue);
			}
			else if (String::equal(property.getName().getString(), "EGP"))
			{
				Uint8 eGPValue;
				property.getValue().get(eGPValue);
				setEGP(eGPValue);
			}
			else if (String::equal(property.getName().getString(), "EIGRPExternal"))
			{
				Uint8 eIGRPExternalValue;
				property.getValue().get(eIGRPExternalValue);
				setEIGRPExternal(eIGRPExternalValue);
			}
			else if (String::equal(property.getName().getString(), "IBGP"))
			{
				Uint8 iBGPValue;
				property.getValue().get(iBGPValue);
				setIBGP(iBGPValue);
			}
			else if (String::equal(property.getName().getString(), "BGPLocal"))
			{
				Uint8 bGPLocalValue;
				property.getValue().get(bGPLocalValue);
				setBGPLocal(bGPLocalValue);
			}
			else if (String::equal(property.getName().getString(), "Unknown"))
			{
				Uint8 unknownValue;
				property.getValue().get(unknownValue);
				setUnknown(unknownValue);
			}
	}
	return true;
}


Boolean UNIX_AdministrativeDistance::initialize()
{
	return false;
}

Boolean UNIX_AdministrativeDistance::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AdministrativeDistance");
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
	_creationClassName = String("UNIX_AdministrativeDistance");
	_directConnect = Uint8(0);
	_static = Uint8(0);
	_eBGP = Uint8(0);
	_eIGRPInternal = Uint8(0);
	_iGRP = Uint8(0);
	_oSPF = Uint8(0);
	_iSIS = Uint8(0);
	_rIP = Uint8(0);
	_eGP = Uint8(0);
	_eIGRPExternal = Uint8(0);
	_iBGP = Uint8(0);
	_bGPLocal = Uint8(0);
	_unknown = Uint8(0);
	
	return false;
}

Boolean UNIX_AdministrativeDistance::finalize()
{
	return false;
}

Boolean UNIX_AdministrativeDistance::loadByName(const String name)
{
	return false;
}

Boolean UNIX_AdministrativeDistance::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AdministrativeDistance::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AdministrativeDistance::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AdministrativeDistance::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AdministrativeDistance::validateInstance()
{
	return true;
}

