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


UNIX_SettingsDefineState::UNIX_SettingsDefineState(void)
{
}

UNIX_SettingsDefineState::~UNIX_SettingsDefineState(void)
{
}

Boolean UNIX_SettingsDefineState::getManagedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT, getManagedElement());
	return true;
}

CIMInstance UNIX_SettingsDefineState::getManagedElement() const
{
	return _managedElement;
}

void UNIX_SettingsDefineState::setManagedElement(CIMInstance &value)
{
	_managedElement = value;
}

Boolean UNIX_SettingsDefineState::getSettingData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_DATA, getSettingData());
	return true;
}

CIMInstance UNIX_SettingsDefineState::getSettingData() const
{
	return _settingData;
}

void UNIX_SettingsDefineState::setSettingData(CIMInstance &value)
{
	_settingData = value;
}


void UNIX_SettingsDefineState::clearInstance()
{

	// _managedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_settingData = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));

}

Boolean UNIX_SettingsDefineState::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ManagedElement"))
			{
				CIMInstance managedElementValue;
				property.getValue().get(managedElementValue);
				setManagedElement(managedElementValue);
			}
			else if (String::equal(property.getName().getString(), "SettingData"))
			{
				CIMInstance settingDataValue;
				property.getValue().get(settingDataValue);
				setSettingData(settingDataValue);
			}
	}
	return true;
}


Boolean UNIX_SettingsDefineState::initialize()
{
	return false;
}

Boolean UNIX_SettingsDefineState::load(int &pIndex)
{
	
	// _managedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_settingData = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	
	return false;
}

Boolean UNIX_SettingsDefineState::finalize()
{
	return false;
}


Boolean UNIX_SettingsDefineState::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String managedElementKey;
	String settingDataKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_MANAGED_ELEMENT)) managedElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SETTING_DATA)) settingDataKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getManagedElement().getPath().toString(), managedElementKey)) && 
			(String::equalNoCase(getSettingData().getPath().toString(), settingDataKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SettingsDefineState::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SettingsDefineState::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SettingsDefineState::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SettingsDefineState::validateInstance()
{
	return true;
}

