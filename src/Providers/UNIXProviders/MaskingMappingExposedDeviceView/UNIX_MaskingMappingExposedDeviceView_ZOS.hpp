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


UNIX_MaskingMappingExposedDeviceView::UNIX_MaskingMappingExposedDeviceView(void)
{
}

UNIX_MaskingMappingExposedDeviceView::~UNIX_MaskingMappingExposedDeviceView(void)
{
}

Boolean UNIX_MaskingMappingExposedDeviceView::getProtocolEndpoint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_ENDPOINT, getProtocolEndpoint());
	return true;
}

CIMInstance UNIX_MaskingMappingExposedDeviceView::getProtocolEndpoint() const
{
	return _protocolEndpoint;
}

void UNIX_MaskingMappingExposedDeviceView::setProtocolEndpoint(CIMInstance &value)
{
	_protocolEndpoint = value;
}

Boolean UNIX_MaskingMappingExposedDeviceView::getLogicalDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_DEVICE, getLogicalDevice());
	return true;
}

CIMInstance UNIX_MaskingMappingExposedDeviceView::getLogicalDevice() const
{
	return _logicalDevice;
}

void UNIX_MaskingMappingExposedDeviceView::setLogicalDevice(CIMInstance &value)
{
	_logicalDevice = value;
}

Boolean UNIX_MaskingMappingExposedDeviceView::getSPCSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_CSYSTEM_CREATION_CLASS_NAME, getSPCSystemCreationClassName());
	return true;
}

String UNIX_MaskingMappingExposedDeviceView::getSPCSystemCreationClassName() const
{
	return _sPCSystemCreationClassName;
}

void UNIX_MaskingMappingExposedDeviceView::setSPCSystemCreationClassName(String &value)
{
	_sPCSystemCreationClassName = value;
}

Boolean UNIX_MaskingMappingExposedDeviceView::getSPCSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_CSYSTEM_NAME, getSPCSystemName());
	return true;
}

String UNIX_MaskingMappingExposedDeviceView::getSPCSystemName() const
{
	return _sPCSystemName;
}

void UNIX_MaskingMappingExposedDeviceView::setSPCSystemName(String &value)
{
	_sPCSystemName = value;
}

Boolean UNIX_MaskingMappingExposedDeviceView::getSPCCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_CREATION_CLASS_NAME, getSPCCreationClassName());
	return true;
}

String UNIX_MaskingMappingExposedDeviceView::getSPCCreationClassName() const
{
	return _sPCCreationClassName;
}

void UNIX_MaskingMappingExposedDeviceView::setSPCCreationClassName(String &value)
{
	_sPCCreationClassName = value;
}

Boolean UNIX_MaskingMappingExposedDeviceView::getSPCDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_DEVICE_ID, getSPCDeviceID());
	return true;
}

String UNIX_MaskingMappingExposedDeviceView::getSPCDeviceID() const
{
	return _sPCDeviceID;
}

void UNIX_MaskingMappingExposedDeviceView::setSPCDeviceID(String &value)
{
	_sPCDeviceID = value;
}

Boolean UNIX_MaskingMappingExposedDeviceView::getPCFUDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_C_F_U_DEVICE_NUMBER, getPCFUDeviceNumber());
	return true;
}

String UNIX_MaskingMappingExposedDeviceView::getPCFUDeviceNumber() const
{
	return _pCFUDeviceNumber;
}

void UNIX_MaskingMappingExposedDeviceView::setPCFUDeviceNumber(String &value)
{
	_pCFUDeviceNumber = value;
}

Boolean UNIX_MaskingMappingExposedDeviceView::getPCFUDeviceAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_C_F_U_DEVICE_ACCESS, getPCFUDeviceAccess());
	return true;
}

Uint16 UNIX_MaskingMappingExposedDeviceView::getPCFUDeviceAccess() const
{
	return _pCFUDeviceAccess;
}

void UNIX_MaskingMappingExposedDeviceView::setPCFUDeviceAccess(Uint16 &value)
{
	_pCFUDeviceAccess = value;
}


void UNIX_MaskingMappingExposedDeviceView::clearInstance()
{

	_protocolEndpoint = CIMInstance(CIMName("CIM_DHCPProtocolEndpoint"));
	_logicalDevice = CIMInstance(CIMName("CIM_SCSIArbitraryLogicalUnit"));
	_sPCSystemCreationClassName = String ("");
	_sPCSystemName = String ("");
	_sPCCreationClassName = String ("");
	_sPCDeviceID = String ("");
	_pCFUDeviceNumber = String ("");
	_pCFUDeviceAccess = Uint16(0);

}

Boolean UNIX_MaskingMappingExposedDeviceView::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ProtocolEndpoint"))
			{
				CIMInstance protocolEndpointValue;
				property.getValue().get(protocolEndpointValue);
				setProtocolEndpoint(protocolEndpointValue);
			}
			else if (String::equal(property.getName().getString(), "LogicalDevice"))
			{
				CIMInstance logicalDeviceValue;
				property.getValue().get(logicalDeviceValue);
				setLogicalDevice(logicalDeviceValue);
			}
			else if (String::equal(property.getName().getString(), "SPCSystemCreationClassName"))
			{
				String sPCSystemCreationClassNameValue;
				property.getValue().get(sPCSystemCreationClassNameValue);
				setSPCSystemCreationClassName(sPCSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPCSystemName"))
			{
				String sPCSystemNameValue;
				property.getValue().get(sPCSystemNameValue);
				setSPCSystemName(sPCSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "SPCCreationClassName"))
			{
				String sPCCreationClassNameValue;
				property.getValue().get(sPCCreationClassNameValue);
				setSPCCreationClassName(sPCCreationClassNameValue);
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


Boolean UNIX_MaskingMappingExposedDeviceView::initialize()
{
	return false;
}

Boolean UNIX_MaskingMappingExposedDeviceView::load(int &pIndex)
{
	
	_protocolEndpoint = CIMInstance(CIMName("CIM_DHCPProtocolEndpoint"));
	_logicalDevice = CIMInstance(CIMName("CIM_SCSIArbitraryLogicalUnit"));
	_sPCSystemCreationClassName = String ("");
	_sPCSystemName = String ("");
	_sPCCreationClassName = String ("");
	_sPCDeviceID = String ("");
	_pCFUDeviceNumber = String ("");
	_pCFUDeviceAccess = Uint16(0);
	
	return false;
}

Boolean UNIX_MaskingMappingExposedDeviceView::finalize()
{
	return false;
}


Boolean UNIX_MaskingMappingExposedDeviceView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String protocolEndpointKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PROTOCOL_ENDPOINT)) protocolEndpointKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getProtocolEndpoint().getPath().toString(), protocolEndpointKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MaskingMappingExposedDeviceView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MaskingMappingExposedDeviceView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MaskingMappingExposedDeviceView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MaskingMappingExposedDeviceView::validateInstance()
{
	return true;
}

