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


UNIX_MappingProtocolControllerView::UNIX_MappingProtocolControllerView(void)
{
}

UNIX_MappingProtocolControllerView::~UNIX_MappingProtocolControllerView(void)
{
}

Boolean UNIX_MappingProtocolControllerView::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MappingProtocolControllerView::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MappingProtocolControllerView::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MappingProtocolControllerView::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MappingProtocolControllerView::getCaption() const
{
	return _caption;
}

void UNIX_MappingProtocolControllerView::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MappingProtocolControllerView::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MappingProtocolControllerView::getDescription() const
{
	return _description;
}

void UNIX_MappingProtocolControllerView::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MappingProtocolControllerView::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MappingProtocolControllerView::getElementName() const
{
	return _elementName;
}

void UNIX_MappingProtocolControllerView::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MappingProtocolControllerView::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MappingProtocolControllerView::getGeneration() const
{
	return _generation;
}

void UNIX_MappingProtocolControllerView::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MappingProtocolControllerView::getPCSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_CSYSTEM_CREATION_CLASS_NAME, getPCSystemCreationClassName());
	return true;
}

String UNIX_MappingProtocolControllerView::getPCSystemCreationClassName() const
{
	return _pCSystemCreationClassName;
}

void UNIX_MappingProtocolControllerView::setPCSystemCreationClassName(String &value)
{
	_pCSystemCreationClassName = value;
}

Boolean UNIX_MappingProtocolControllerView::getPCSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_CSYSTEM_NAME, getPCSystemName());
	return true;
}

String UNIX_MappingProtocolControllerView::getPCSystemName() const
{
	return _pCSystemName;
}

void UNIX_MappingProtocolControllerView::setPCSystemName(String &value)
{
	_pCSystemName = value;
}

Boolean UNIX_MappingProtocolControllerView::getPCCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_C_CREATION_CLASS_NAME, getPCCreationClassName());
	return true;
}

String UNIX_MappingProtocolControllerView::getPCCreationClassName() const
{
	return _pCCreationClassName;
}

void UNIX_MappingProtocolControllerView::setPCCreationClassName(String &value)
{
	_pCCreationClassName = value;
}

Boolean UNIX_MappingProtocolControllerView::getPCDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_C_DEVICE_ID, getPCDeviceID());
	return true;
}

String UNIX_MappingProtocolControllerView::getPCDeviceID() const
{
	return _pCDeviceID;
}

void UNIX_MappingProtocolControllerView::setPCDeviceID(String &value)
{
	_pCDeviceID = value;
}

Boolean UNIX_MappingProtocolControllerView::getSHIDInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_ID_INSTANCE_ID, getSHIDInstanceID());
	return true;
}

String UNIX_MappingProtocolControllerView::getSHIDInstanceID() const
{
	return _sHIDInstanceID;
}

void UNIX_MappingProtocolControllerView::setSHIDInstanceID(String &value)
{
	_sHIDInstanceID = value;
}

Boolean UNIX_MappingProtocolControllerView::getSHIDStorageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_ID_STORAGE_ID, getSHIDStorageID());
	return true;
}

String UNIX_MappingProtocolControllerView::getSHIDStorageID() const
{
	return _sHIDStorageID;
}

void UNIX_MappingProtocolControllerView::setSHIDStorageID(String &value)
{
	_sHIDStorageID = value;
}

Boolean UNIX_MappingProtocolControllerView::getSHIDIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_ID_ID_TYPE, getSHIDIDType());
	return true;
}

Uint16 UNIX_MappingProtocolControllerView::getSHIDIDType() const
{
	return _sHIDIDType;
}

void UNIX_MappingProtocolControllerView::setSHIDIDType(Uint16 &value)
{
	_sHIDIDType = value;
}

Boolean UNIX_MappingProtocolControllerView::getPEPSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_E_P_SYSTEM_CREATION_CLASS_NAME, getPEPSystemCreationClassName());
	return true;
}

String UNIX_MappingProtocolControllerView::getPEPSystemCreationClassName() const
{
	return _pEPSystemCreationClassName;
}

void UNIX_MappingProtocolControllerView::setPEPSystemCreationClassName(String &value)
{
	_pEPSystemCreationClassName = value;
}

Boolean UNIX_MappingProtocolControllerView::getPEPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_E_P_CREATION_CLASS_NAME, getPEPCreationClassName());
	return true;
}

String UNIX_MappingProtocolControllerView::getPEPCreationClassName() const
{
	return _pEPCreationClassName;
}

void UNIX_MappingProtocolControllerView::setPEPCreationClassName(String &value)
{
	_pEPCreationClassName = value;
}

Boolean UNIX_MappingProtocolControllerView::getPEPSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_E_P_SYSTEM_NAME, getPEPSystemName());
	return true;
}

String UNIX_MappingProtocolControllerView::getPEPSystemName() const
{
	return _pEPSystemName;
}

void UNIX_MappingProtocolControllerView::setPEPSystemName(String &value)
{
	_pEPSystemName = value;
}

Boolean UNIX_MappingProtocolControllerView::getPEPName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_E_P_NAME, getPEPName());
	return true;
}

String UNIX_MappingProtocolControllerView::getPEPName() const
{
	return _pEPName;
}

void UNIX_MappingProtocolControllerView::setPEPName(String &value)
{
	_pEPName = value;
}

Boolean UNIX_MappingProtocolControllerView::getPEPProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_E_P_PROTOCOL_I_F_TYPE, getPEPProtocolIFType());
	return true;
}

Uint16 UNIX_MappingProtocolControllerView::getPEPProtocolIFType() const
{
	return _pEPProtocolIFType;
}

void UNIX_MappingProtocolControllerView::setPEPProtocolIFType(Uint16 &value)
{
	_pEPProtocolIFType = value;
}

Boolean UNIX_MappingProtocolControllerView::getPEPOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_E_P_OTHER_TYPE_DESCRIPTION, getPEPOtherTypeDescription());
	return true;
}

String UNIX_MappingProtocolControllerView::getPEPOtherTypeDescription() const
{
	return _pEPOtherTypeDescription;
}

void UNIX_MappingProtocolControllerView::setPEPOtherTypeDescription(String &value)
{
	_pEPOtherTypeDescription = value;
}

Boolean UNIX_MappingProtocolControllerView::getPEPRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_E_P_ROLE, getPEPRole());
	return true;
}

Uint16 UNIX_MappingProtocolControllerView::getPEPRole() const
{
	return _pEPRole;
}

void UNIX_MappingProtocolControllerView::setPEPRole(Uint16 &value)
{
	_pEPRole = value;
}

Boolean UNIX_MappingProtocolControllerView::getPEPConnectionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_E_P_CONNECTION_TYPE, getPEPConnectionType());
	return true;
}

Uint16 UNIX_MappingProtocolControllerView::getPEPConnectionType() const
{
	return _pEPConnectionType;
}

void UNIX_MappingProtocolControllerView::setPEPConnectionType(Uint16 &value)
{
	_pEPConnectionType = value;
}

Boolean UNIX_MappingProtocolControllerView::getAPInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_P_INSTANCE_ID, getAPInstanceID());
	return true;
}

String UNIX_MappingProtocolControllerView::getAPInstanceID() const
{
	return _aPInstanceID;
}

void UNIX_MappingProtocolControllerView::setAPInstanceID(String &value)
{
	_aPInstanceID = value;
}

Boolean UNIX_MappingProtocolControllerView::getAPPrivilegeGranted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_P_PRIVILEGE_GRANTED, getAPPrivilegeGranted());
	return true;
}

Boolean UNIX_MappingProtocolControllerView::getAPPrivilegeGranted() const
{
	return _aPPrivilegeGranted;
}

void UNIX_MappingProtocolControllerView::setAPPrivilegeGranted(Boolean &value)
{
	_aPPrivilegeGranted = value;
}

Boolean UNIX_MappingProtocolControllerView::getAPActivities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_P_ACTIVITIES, getAPActivities());
	return true;
}

Array<Uint16> UNIX_MappingProtocolControllerView::getAPActivities() const
{
	return _aPActivities;
}

void UNIX_MappingProtocolControllerView::setAPActivities(Array<Uint16> &value)
{
	_aPActivities = value;
}

Boolean UNIX_MappingProtocolControllerView::getAPElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_P_ELEMENT_NAME, getAPElementName());
	return true;
}

String UNIX_MappingProtocolControllerView::getAPElementName() const
{
	return _aPElementName;
}

void UNIX_MappingProtocolControllerView::setAPElementName(String &value)
{
	_aPElementName = value;
}

Boolean UNIX_MappingProtocolControllerView::getLPSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_P_SYSTEM_CREATION_CLASS_NAME, getLPSystemCreationClassName());
	return true;
}

String UNIX_MappingProtocolControllerView::getLPSystemCreationClassName() const
{
	return _lPSystemCreationClassName;
}

void UNIX_MappingProtocolControllerView::setLPSystemCreationClassName(String &value)
{
	_lPSystemCreationClassName = value;
}

Boolean UNIX_MappingProtocolControllerView::getLPSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_P_SYSTEM_NAME, getLPSystemName());
	return true;
}

String UNIX_MappingProtocolControllerView::getLPSystemName() const
{
	return _lPSystemName;
}

void UNIX_MappingProtocolControllerView::setLPSystemName(String &value)
{
	_lPSystemName = value;
}

Boolean UNIX_MappingProtocolControllerView::getLPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_P_CREATION_CLASS_NAME, getLPCreationClassName());
	return true;
}

String UNIX_MappingProtocolControllerView::getLPCreationClassName() const
{
	return _lPCreationClassName;
}

void UNIX_MappingProtocolControllerView::setLPCreationClassName(String &value)
{
	_lPCreationClassName = value;
}

Boolean UNIX_MappingProtocolControllerView::getLPDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_P_DEVICE_ID, getLPDeviceID());
	return true;
}

String UNIX_MappingProtocolControllerView::getLPDeviceID() const
{
	return _lPDeviceID;
}

void UNIX_MappingProtocolControllerView::setLPDeviceID(String &value)
{
	_lPDeviceID = value;
}

Boolean UNIX_MappingProtocolControllerView::getLPOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_P_OPERATIONAL_STATUS, getLPOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MappingProtocolControllerView::getLPOperationalStatus() const
{
	return _lPOperationalStatus;
}

void UNIX_MappingProtocolControllerView::setLPOperationalStatus(Array<Uint16> &value)
{
	_lPOperationalStatus = value;
}

Boolean UNIX_MappingProtocolControllerView::getLPUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_P_USAGE_RESTRICTION, getLPUsageRestriction());
	return true;
}

Uint16 UNIX_MappingProtocolControllerView::getLPUsageRestriction() const
{
	return _lPUsageRestriction;
}

void UNIX_MappingProtocolControllerView::setLPUsageRestriction(Uint16 &value)
{
	_lPUsageRestriction = value;
}

Boolean UNIX_MappingProtocolControllerView::getLPPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_P_PORT_TYPE, getLPPortType());
	return true;
}

Uint16 UNIX_MappingProtocolControllerView::getLPPortType() const
{
	return _lPPortType;
}

void UNIX_MappingProtocolControllerView::setLPPortType(Uint16 &value)
{
	_lPPortType = value;
}


void UNIX_MappingProtocolControllerView::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MappingProtocolControllerView");
	_generation = Uint64(0);
	_pCSystemCreationClassName = String ("");
	_pCSystemName = String ("");
	_pCCreationClassName = String ("");
	_pCDeviceID = String ("");
	_sHIDInstanceID = String ("");
	_sHIDStorageID = String ("");
	_sHIDIDType = Uint16(0);
	_pEPSystemCreationClassName = String ("");
	_pEPCreationClassName = String ("");
	_pEPSystemName = String ("");
	_pEPName = String ("");
	_pEPProtocolIFType = Uint16(0);
	_pEPOtherTypeDescription = String ("");
	_pEPRole = Uint16(0);
	_pEPConnectionType = Uint16(0);
	_aPInstanceID = String ("");
	_aPPrivilegeGranted = Boolean(false);
	_aPActivities.clear();
	_aPElementName = String ("");
	_lPSystemCreationClassName = String ("");
	_lPSystemName = String ("");
	_lPCreationClassName = String ("");
	_lPDeviceID = String ("");
	_lPOperationalStatus.clear();
	_lPUsageRestriction = Uint16(0);
	_lPPortType = Uint16(0);

}

Boolean UNIX_MappingProtocolControllerView::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PCSystemCreationClassName"))
			{
				String pCSystemCreationClassNameValue;
				property.getValue().get(pCSystemCreationClassNameValue);
				setPCSystemCreationClassName(pCSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "PCSystemName"))
			{
				String pCSystemNameValue;
				property.getValue().get(pCSystemNameValue);
				setPCSystemName(pCSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "PCCreationClassName"))
			{
				String pCCreationClassNameValue;
				property.getValue().get(pCCreationClassNameValue);
				setPCCreationClassName(pCCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "PCDeviceID"))
			{
				String pCDeviceIDValue;
				property.getValue().get(pCDeviceIDValue);
				setPCDeviceID(pCDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SHIDInstanceID"))
			{
				String sHIDInstanceIDValue;
				property.getValue().get(sHIDInstanceIDValue);
				setSHIDInstanceID(sHIDInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SHIDStorageID"))
			{
				String sHIDStorageIDValue;
				property.getValue().get(sHIDStorageIDValue);
				setSHIDStorageID(sHIDStorageIDValue);
			}
			else if (String::equal(property.getName().getString(), "SHIDIDType"))
			{
				Uint16 sHIDIDTypeValue;
				property.getValue().get(sHIDIDTypeValue);
				setSHIDIDType(sHIDIDTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PEPSystemCreationClassName"))
			{
				String pEPSystemCreationClassNameValue;
				property.getValue().get(pEPSystemCreationClassNameValue);
				setPEPSystemCreationClassName(pEPSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "PEPCreationClassName"))
			{
				String pEPCreationClassNameValue;
				property.getValue().get(pEPCreationClassNameValue);
				setPEPCreationClassName(pEPCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "PEPSystemName"))
			{
				String pEPSystemNameValue;
				property.getValue().get(pEPSystemNameValue);
				setPEPSystemName(pEPSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "PEPName"))
			{
				String pEPNameValue;
				property.getValue().get(pEPNameValue);
				setPEPName(pEPNameValue);
			}
			else if (String::equal(property.getName().getString(), "PEPProtocolIFType"))
			{
				Uint16 pEPProtocolIFTypeValue;
				property.getValue().get(pEPProtocolIFTypeValue);
				setPEPProtocolIFType(pEPProtocolIFTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PEPOtherTypeDescription"))
			{
				String pEPOtherTypeDescriptionValue;
				property.getValue().get(pEPOtherTypeDescriptionValue);
				setPEPOtherTypeDescription(pEPOtherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "PEPRole"))
			{
				Uint16 pEPRoleValue;
				property.getValue().get(pEPRoleValue);
				setPEPRole(pEPRoleValue);
			}
			else if (String::equal(property.getName().getString(), "PEPConnectionType"))
			{
				Uint16 pEPConnectionTypeValue;
				property.getValue().get(pEPConnectionTypeValue);
				setPEPConnectionType(pEPConnectionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "APInstanceID"))
			{
				String aPInstanceIDValue;
				property.getValue().get(aPInstanceIDValue);
				setAPInstanceID(aPInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "APPrivilegeGranted"))
			{
				Boolean aPPrivilegeGrantedValue;
				property.getValue().get(aPPrivilegeGrantedValue);
				setAPPrivilegeGranted(aPPrivilegeGrantedValue);
			}
			else if (String::equal(property.getName().getString(), "APActivities"))
			{
				Array<Uint16> aPActivitiesValue;
				property.getValue().get(aPActivitiesValue);
				setAPActivities(aPActivitiesValue);
			}
			else if (String::equal(property.getName().getString(), "APElementName"))
			{
				String aPElementNameValue;
				property.getValue().get(aPElementNameValue);
				setAPElementName(aPElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "LPSystemCreationClassName"))
			{
				String lPSystemCreationClassNameValue;
				property.getValue().get(lPSystemCreationClassNameValue);
				setLPSystemCreationClassName(lPSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "LPSystemName"))
			{
				String lPSystemNameValue;
				property.getValue().get(lPSystemNameValue);
				setLPSystemName(lPSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "LPCreationClassName"))
			{
				String lPCreationClassNameValue;
				property.getValue().get(lPCreationClassNameValue);
				setLPCreationClassName(lPCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "LPDeviceID"))
			{
				String lPDeviceIDValue;
				property.getValue().get(lPDeviceIDValue);
				setLPDeviceID(lPDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "LPOperationalStatus"))
			{
				Array<Uint16> lPOperationalStatusValue;
				property.getValue().get(lPOperationalStatusValue);
				setLPOperationalStatus(lPOperationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "LPUsageRestriction"))
			{
				Uint16 lPUsageRestrictionValue;
				property.getValue().get(lPUsageRestrictionValue);
				setLPUsageRestriction(lPUsageRestrictionValue);
			}
			else if (String::equal(property.getName().getString(), "LPPortType"))
			{
				Uint16 lPPortTypeValue;
				property.getValue().get(lPPortTypeValue);
				setLPPortType(lPPortTypeValue);
			}
	}
	return true;
}


Boolean UNIX_MappingProtocolControllerView::initialize()
{
	return false;
}

Boolean UNIX_MappingProtocolControllerView::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MappingProtocolControllerView");
	_generation = Uint64(0);
	_pCSystemCreationClassName = String ("");
	_pCSystemName = String ("");
	_pCCreationClassName = String ("");
	_pCDeviceID = String ("");
	_sHIDInstanceID = String ("");
	_sHIDStorageID = String ("");
	_sHIDIDType = Uint16(0);
	_pEPSystemCreationClassName = String ("");
	_pEPCreationClassName = String ("");
	_pEPSystemName = String ("");
	_pEPName = String ("");
	_pEPProtocolIFType = Uint16(0);
	_pEPOtherTypeDescription = String ("");
	_pEPRole = Uint16(0);
	_pEPConnectionType = Uint16(0);
	_aPInstanceID = String ("");
	_aPPrivilegeGranted = Boolean(false);
	_aPActivities.clear();
	_aPElementName = String ("");
	_lPSystemCreationClassName = String ("");
	_lPSystemName = String ("");
	_lPCreationClassName = String ("");
	_lPDeviceID = String ("");
	_lPOperationalStatus.clear();
	_lPUsageRestriction = Uint16(0);
	_lPPortType = Uint16(0);
	
	return false;
}

Boolean UNIX_MappingProtocolControllerView::finalize()
{
	return false;
}


Boolean UNIX_MappingProtocolControllerView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String pCSystemCreationClassNameKey;
	String pCSystemNameKey;
	String pCCreationClassNameKey;
	String pCDeviceIDKey;
	String sHIDInstanceIDKey;
	String pEPSystemCreationClassNameKey;
	String pEPCreationClassNameKey;
	String pEPSystemNameKey;
	String pEPNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_P_CSYSTEM_CREATION_CLASS_NAME)) pCSystemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_P_CSYSTEM_NAME)) pCSystemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_P_C_CREATION_CLASS_NAME)) pCCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_P_C_DEVICE_ID)) pCDeviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_H_ID_INSTANCE_ID)) sHIDInstanceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_P_E_P_SYSTEM_CREATION_CLASS_NAME)) pEPSystemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_P_E_P_CREATION_CLASS_NAME)) pEPCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_P_E_P_SYSTEM_NAME)) pEPSystemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_P_E_P_NAME)) pEPNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getPCSystemCreationClassName(), pCSystemCreationClassNameKey)) && 
			(String::equalNoCase(getPCSystemName(), pCSystemNameKey)) && 
			(String::equalNoCase(getPCCreationClassName(), pCCreationClassNameKey)) && 
			(String::equalNoCase(getPCDeviceID(), pCDeviceIDKey)) && 
			(String::equalNoCase(getSHIDInstanceID(), sHIDInstanceIDKey)) && 
			(String::equalNoCase(getPEPSystemCreationClassName(), pEPSystemCreationClassNameKey)) && 
			(String::equalNoCase(getPEPCreationClassName(), pEPCreationClassNameKey)) && 
			(String::equalNoCase(getPEPSystemName(), pEPSystemNameKey)) && 
			(String::equalNoCase(getPEPName(), pEPNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MappingProtocolControllerView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MappingProtocolControllerView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MappingProtocolControllerView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MappingProtocolControllerView::validateInstance()
{
	return true;
}

