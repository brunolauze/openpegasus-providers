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


UNIX_MaskingMappingView::UNIX_MaskingMappingView(void)
{
}

UNIX_MaskingMappingView::~UNIX_MaskingMappingView(void)
{
}

Boolean UNIX_MaskingMappingView::getStorageHardwareID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_HARDWARE_ID, getStorageHardwareID());
	return true;
}

CIMInstance UNIX_MaskingMappingView::getStorageHardwareID() const
{
	return _storageHardwareID;
}

void UNIX_MaskingMappingView::setStorageHardwareID(CIMInstance &value)
{
	_storageHardwareID = value;
}

Boolean UNIX_MaskingMappingView::getLogicalDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_DEVICE, getLogicalDevice());
	return true;
}

CIMInstance UNIX_MaskingMappingView::getLogicalDevice() const
{
	return _logicalDevice;
}

void UNIX_MaskingMappingView::setLogicalDevice(CIMInstance &value)
{
	_logicalDevice = value;
}

Boolean UNIX_MaskingMappingView::getProtocolEndpoint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_ENDPOINT, getProtocolEndpoint());
	return true;
}

CIMInstance UNIX_MaskingMappingView::getProtocolEndpoint() const
{
	return _protocolEndpoint;
}

void UNIX_MaskingMappingView::setProtocolEndpoint(CIMInstance &value)
{
	_protocolEndpoint = value;
}

Boolean UNIX_MaskingMappingView::getSHIDStorageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_ID_STORAGE_ID, getSHIDStorageID());
	return true;
}

String UNIX_MaskingMappingView::getSHIDStorageID() const
{
	return _sHIDStorageID;
}

void UNIX_MaskingMappingView::setSHIDStorageID(String &value)
{
	_sHIDStorageID = value;
}

Boolean UNIX_MaskingMappingView::getSHIDIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_ID_ID_TYPE, getSHIDIDType());
	return true;
}

Uint16 UNIX_MaskingMappingView::getSHIDIDType() const
{
	return _sHIDIDType;
}

void UNIX_MaskingMappingView::setSHIDIDType(Uint16 &value)
{
	_sHIDIDType = value;
}

Boolean UNIX_MaskingMappingView::getLDDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_D_DEVICE_ID, getLDDeviceID());
	return true;
}

String UNIX_MaskingMappingView::getLDDeviceID() const
{
	return _lDDeviceID;
}

void UNIX_MaskingMappingView::setLDDeviceID(String &value)
{
	_lDDeviceID = value;
}

Boolean UNIX_MaskingMappingView::getSPEPSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_E_P_SYSTEM_CREATION_CLASS_NAME, getSPEPSystemCreationClassName());
	return true;
}

String UNIX_MaskingMappingView::getSPEPSystemCreationClassName() const
{
	return _sPEPSystemCreationClassName;
}

void UNIX_MaskingMappingView::setSPEPSystemCreationClassName(String &value)
{
	_sPEPSystemCreationClassName = value;
}

Boolean UNIX_MaskingMappingView::getSPEPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_E_P_CREATION_CLASS_NAME, getSPEPCreationClassName());
	return true;
}

String UNIX_MaskingMappingView::getSPEPCreationClassName() const
{
	return _sPEPCreationClassName;
}

void UNIX_MaskingMappingView::setSPEPCreationClassName(String &value)
{
	_sPEPCreationClassName = value;
}

Boolean UNIX_MaskingMappingView::getSPEPSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_E_P_SYSTEM_NAME, getSPEPSystemName());
	return true;
}

String UNIX_MaskingMappingView::getSPEPSystemName() const
{
	return _sPEPSystemName;
}

void UNIX_MaskingMappingView::setSPEPSystemName(String &value)
{
	_sPEPSystemName = value;
}

Boolean UNIX_MaskingMappingView::getSPEPName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_E_P_NAME, getSPEPName());
	return true;
}

String UNIX_MaskingMappingView::getSPEPName() const
{
	return _sPEPName;
}

void UNIX_MaskingMappingView::setSPEPName(String &value)
{
	_sPEPName = value;
}

Boolean UNIX_MaskingMappingView::getSPEPProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_E_P_PROTOCOL_I_F_TYPE, getSPEPProtocolIFType());
	return true;
}

Uint16 UNIX_MaskingMappingView::getSPEPProtocolIFType() const
{
	return _sPEPProtocolIFType;
}

void UNIX_MaskingMappingView::setSPEPProtocolIFType(Uint16 &value)
{
	_sPEPProtocolIFType = value;
}

Boolean UNIX_MaskingMappingView::getSPEPOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_E_P_OTHER_TYPE_DESCRIPTION, getSPEPOtherTypeDescription());
	return true;
}

String UNIX_MaskingMappingView::getSPEPOtherTypeDescription() const
{
	return _sPEPOtherTypeDescription;
}

void UNIX_MaskingMappingView::setSPEPOtherTypeDescription(String &value)
{
	_sPEPOtherTypeDescription = value;
}

Boolean UNIX_MaskingMappingView::getSPEPConnectionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_E_P_CONNECTION_TYPE, getSPEPConnectionType());
	return true;
}

Uint16 UNIX_MaskingMappingView::getSPEPConnectionType() const
{
	return _sPEPConnectionType;
}

void UNIX_MaskingMappingView::setSPEPConnectionType(Uint16 &value)
{
	_sPEPConnectionType = value;
}

Boolean UNIX_MaskingMappingView::getSPEPRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_E_P_ROLE, getSPEPRole());
	return true;
}

Uint16 UNIX_MaskingMappingView::getSPEPRole() const
{
	return _sPEPRole;
}

void UNIX_MaskingMappingView::setSPEPRole(Uint16 &value)
{
	_sPEPRole = value;
}

Boolean UNIX_MaskingMappingView::getAPInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_P_INSTANCE_ID, getAPInstanceID());
	return true;
}

String UNIX_MaskingMappingView::getAPInstanceID() const
{
	return _aPInstanceID;
}

void UNIX_MaskingMappingView::setAPInstanceID(String &value)
{
	_aPInstanceID = value;
}

Boolean UNIX_MaskingMappingView::getAPPrivilegeGranted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_P_PRIVILEGE_GRANTED, getAPPrivilegeGranted());
	return true;
}

Boolean UNIX_MaskingMappingView::getAPPrivilegeGranted() const
{
	return _aPPrivilegeGranted;
}

void UNIX_MaskingMappingView::setAPPrivilegeGranted(Boolean &value)
{
	_aPPrivilegeGranted = value;
}

Boolean UNIX_MaskingMappingView::getAPActivities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_P_ACTIVITIES, getAPActivities());
	return true;
}

Array<Uint16> UNIX_MaskingMappingView::getAPActivities() const
{
	return _aPActivities;
}

void UNIX_MaskingMappingView::setAPActivities(Array<Uint16> &value)
{
	_aPActivities = value;
}

Boolean UNIX_MaskingMappingView::getAPElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_P_ELEMENT_NAME, getAPElementName());
	return true;
}

String UNIX_MaskingMappingView::getAPElementName() const
{
	return _aPElementName;
}

void UNIX_MaskingMappingView::setAPElementName(String &value)
{
	_aPElementName = value;
}

Boolean UNIX_MaskingMappingView::getSPCSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_CSYSTEM_CREATION_CLASS_NAME, getSPCSystemCreationClassName());
	return true;
}

String UNIX_MaskingMappingView::getSPCSystemCreationClassName() const
{
	return _sPCSystemCreationClassName;
}

void UNIX_MaskingMappingView::setSPCSystemCreationClassName(String &value)
{
	_sPCSystemCreationClassName = value;
}

Boolean UNIX_MaskingMappingView::getSPCCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_CREATION_CLASS_NAME, getSPCCreationClassName());
	return true;
}

String UNIX_MaskingMappingView::getSPCCreationClassName() const
{
	return _sPCCreationClassName;
}

void UNIX_MaskingMappingView::setSPCCreationClassName(String &value)
{
	_sPCCreationClassName = value;
}

Boolean UNIX_MaskingMappingView::getSPCSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_CSYSTEM_NAME, getSPCSystemName());
	return true;
}

String UNIX_MaskingMappingView::getSPCSystemName() const
{
	return _sPCSystemName;
}

void UNIX_MaskingMappingView::setSPCSystemName(String &value)
{
	_sPCSystemName = value;
}

Boolean UNIX_MaskingMappingView::getSPCDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_DEVICE_ID, getSPCDeviceID());
	return true;
}

String UNIX_MaskingMappingView::getSPCDeviceID() const
{
	return _sPCDeviceID;
}

void UNIX_MaskingMappingView::setSPCDeviceID(String &value)
{
	_sPCDeviceID = value;
}

Boolean UNIX_MaskingMappingView::getPCFUDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_C_F_U_DEVICE_NUMBER, getPCFUDeviceNumber());
	return true;
}

String UNIX_MaskingMappingView::getPCFUDeviceNumber() const
{
	return _pCFUDeviceNumber;
}

void UNIX_MaskingMappingView::setPCFUDeviceNumber(String &value)
{
	_pCFUDeviceNumber = value;
}

Boolean UNIX_MaskingMappingView::getPCFUDeviceAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_C_F_U_DEVICE_ACCESS, getPCFUDeviceAccess());
	return true;
}

Uint16 UNIX_MaskingMappingView::getPCFUDeviceAccess() const
{
	return _pCFUDeviceAccess;
}

void UNIX_MaskingMappingView::setPCFUDeviceAccess(Uint16 &value)
{
	_pCFUDeviceAccess = value;
}


void UNIX_MaskingMappingView::clearInstance()
{

	_storageHardwareID = CIMInstance(CIMName("CIM_StorageHardwareID"));
	_logicalDevice = CIMInstance(CIMName("CIM_SCSIArbitraryLogicalUnit"));
	_protocolEndpoint = CIMInstance(CIMName("CIM_DHCPProtocolEndpoint"));
	_sHIDStorageID = String ("");
	_sHIDIDType = Uint16(0);
	_lDDeviceID = String ("");
	_sPEPSystemCreationClassName = String ("");
	_sPEPCreationClassName = String ("");
	_sPEPSystemName = String ("");
	_sPEPName = String ("");
	_sPEPProtocolIFType = Uint16(0);
	_sPEPOtherTypeDescription = String ("");
	_sPEPConnectionType = Uint16(0);
	_sPEPRole = Uint16(0);
	_aPInstanceID = String ("");
	_aPPrivilegeGranted = Boolean(false);
	_aPActivities.clear();
	_aPElementName = String ("");
	_sPCSystemCreationClassName = String ("");
	_sPCCreationClassName = String ("");
	_sPCSystemName = String ("");
	_sPCDeviceID = String ("");
	_pCFUDeviceNumber = String ("");
	_pCFUDeviceAccess = Uint16(0);

}

Boolean UNIX_MaskingMappingView::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "StorageHardwareID"))
			{
				CIMInstance storageHardwareIDValue;
				property.getValue().get(storageHardwareIDValue);
				setStorageHardwareID(storageHardwareIDValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalDevice"))
			{
				CIMInstance logicalDeviceValue;
				property.getValue().get(logicalDeviceValue);
				setLogicalDevice(logicalDeviceValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolEndpoint"))
			{
				CIMInstance protocolEndpointValue;
				property.getValue().get(protocolEndpointValue);
				setProtocolEndpoint(protocolEndpointValue);
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
			else if (String::equal(property.getName().getString(), "LDDeviceID"))
			{
				String lDDeviceIDValue;
				property.getValue().get(lDDeviceIDValue);
				setLDDeviceID(lDDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SPEPSystemCreationClassName"))
			{
				String sPEPSystemCreationClassNameValue;
				property.getValue().get(sPEPSystemCreationClassNameValue);
				setSPEPSystemCreationClassName(sPEPSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPEPCreationClassName"))
			{
				String sPEPCreationClassNameValue;
				property.getValue().get(sPEPCreationClassNameValue);
				setSPEPCreationClassName(sPEPCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPEPSystemName"))
			{
				String sPEPSystemNameValue;
				property.getValue().get(sPEPSystemNameValue);
				setSPEPSystemName(sPEPSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPEPName"))
			{
				String sPEPNameValue;
				property.getValue().get(sPEPNameValue);
				setSPEPName(sPEPNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPEPProtocolIFType"))
			{
				Uint16 sPEPProtocolIFTypeValue;
				property.getValue().get(sPEPProtocolIFTypeValue);
				setSPEPProtocolIFType(sPEPProtocolIFTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SPEPOtherTypeDescription"))
			{
				String sPEPOtherTypeDescriptionValue;
				property.getValue().get(sPEPOtherTypeDescriptionValue);
				setSPEPOtherTypeDescription(sPEPOtherTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "SPEPConnectionType"))
			{
				Uint16 sPEPConnectionTypeValue;
				property.getValue().get(sPEPConnectionTypeValue);
				setSPEPConnectionType(sPEPConnectionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SPEPRole"))
			{
				Uint16 sPEPRoleValue;
				property.getValue().get(sPEPRoleValue);
				setSPEPRole(sPEPRoleValue);
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
			else if (String::equal(property.getName().getString(), "SPCSystemCreationClassName"))
			{
				String sPCSystemCreationClassNameValue;
				property.getValue().get(sPCSystemCreationClassNameValue);
				setSPCSystemCreationClassName(sPCSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPCCreationClassName"))
			{
				String sPCCreationClassNameValue;
				property.getValue().get(sPCCreationClassNameValue);
				setSPCCreationClassName(sPCCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPCSystemName"))
			{
				String sPCSystemNameValue;
				property.getValue().get(sPCSystemNameValue);
				setSPCSystemName(sPCSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPCDeviceID"))
			{
				String sPCDeviceIDValue;
				property.getValue().get(sPCDeviceIDValue);
				setSPCDeviceID(sPCDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "PCFUDeviceNumber"))
			{
				String pCFUDeviceNumberValue;
				property.getValue().get(pCFUDeviceNumberValue);
				setPCFUDeviceNumber(pCFUDeviceNumberValue);
			}
			else if (String::equal(property.getName().getString(), "PCFUDeviceAccess"))
			{
				Uint16 pCFUDeviceAccessValue;
				property.getValue().get(pCFUDeviceAccessValue);
				setPCFUDeviceAccess(pCFUDeviceAccessValue);
			}
	}
	return true;
}


Boolean UNIX_MaskingMappingView::initialize()
{
	return false;
}

Boolean UNIX_MaskingMappingView::load(int &pIndex)
{
	
	_storageHardwareID = CIMInstance(CIMName("CIM_StorageHardwareID"));
	_logicalDevice = CIMInstance(CIMName("CIM_SCSIArbitraryLogicalUnit"));
	_protocolEndpoint = CIMInstance(CIMName("CIM_DHCPProtocolEndpoint"));
	_sHIDStorageID = String ("");
	_sHIDIDType = Uint16(0);
	_lDDeviceID = String ("");
	_sPEPSystemCreationClassName = String ("");
	_sPEPCreationClassName = String ("");
	_sPEPSystemName = String ("");
	_sPEPName = String ("");
	_sPEPProtocolIFType = Uint16(0);
	_sPEPOtherTypeDescription = String ("");
	_sPEPConnectionType = Uint16(0);
	_sPEPRole = Uint16(0);
	_aPInstanceID = String ("");
	_aPPrivilegeGranted = Boolean(false);
	_aPActivities.clear();
	_aPElementName = String ("");
	_sPCSystemCreationClassName = String ("");
	_sPCCreationClassName = String ("");
	_sPCSystemName = String ("");
	_sPCDeviceID = String ("");
	_pCFUDeviceNumber = String ("");
	_pCFUDeviceAccess = Uint16(0);
	
	return false;
}

Boolean UNIX_MaskingMappingView::finalize()
{
	return false;
}


Boolean UNIX_MaskingMappingView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String storageHardwareIDKey;
	String logicalDeviceKey;
	String protocolEndpointKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_STORAGE_HARDWARE_ID)) storageHardwareIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOGICAL_DEVICE)) logicalDeviceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROTOCOL_ENDPOINT)) protocolEndpointKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getStorageHardwareID().getPath().toString(), storageHardwareIDKey)) && 
			(String::equalNoCase(getLogicalDevice().getPath().toString(), logicalDeviceKey)) && 
			(String::equalNoCase(getProtocolEndpoint().getPath().toString(), protocolEndpointKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MaskingMappingView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MaskingMappingView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MaskingMappingView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MaskingMappingView::validateInstance()
{
	return true;
}

