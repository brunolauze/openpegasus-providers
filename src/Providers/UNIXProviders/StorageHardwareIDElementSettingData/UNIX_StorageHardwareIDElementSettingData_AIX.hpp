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


UNIX_StorageHardwareIDElementSettingData::UNIX_StorageHardwareIDElementSettingData(void)
{
}

UNIX_StorageHardwareIDElementSettingData::~UNIX_StorageHardwareIDElementSettingData(void)
{
}

Boolean UNIX_StorageHardwareIDElementSettingData::getManagedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT, getManagedElement());
	return true;
}

CIMInstance UNIX_StorageHardwareIDElementSettingData::getManagedElement() const
{
	return _managedElement;
}

void UNIX_StorageHardwareIDElementSettingData::setManagedElement(CIMInstance &value)
{
	_managedElement = value;
}

Boolean UNIX_StorageHardwareIDElementSettingData::getSettingData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_DATA, getSettingData());
	return true;
}

CIMInstance UNIX_StorageHardwareIDElementSettingData::getSettingData() const
{
	return _settingData;
}

void UNIX_StorageHardwareIDElementSettingData::setSettingData(CIMInstance &value)
{
	_settingData = value;
}

Boolean UNIX_StorageHardwareIDElementSettingData::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Uint16 UNIX_StorageHardwareIDElementSettingData::getIsDefault() const
{
	return _isDefault;
}

void UNIX_StorageHardwareIDElementSettingData::setIsDefault(Uint16 &value)
{
	_isDefault = value;
}

Boolean UNIX_StorageHardwareIDElementSettingData::getIsCurrent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CURRENT, getIsCurrent());
	return true;
}

Uint16 UNIX_StorageHardwareIDElementSettingData::getIsCurrent() const
{
	return _isCurrent;
}

void UNIX_StorageHardwareIDElementSettingData::setIsCurrent(Uint16 &value)
{
	_isCurrent = value;
}

Boolean UNIX_StorageHardwareIDElementSettingData::getIsNext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEXT, getIsNext());
	return true;
}

Uint16 UNIX_StorageHardwareIDElementSettingData::getIsNext() const
{
	return _isNext;
}

void UNIX_StorageHardwareIDElementSettingData::setIsNext(Uint16 &value)
{
	_isNext = value;
}

Boolean UNIX_StorageHardwareIDElementSettingData::getIsMinimum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_MINIMUM, getIsMinimum());
	return true;
}

Uint16 UNIX_StorageHardwareIDElementSettingData::getIsMinimum() const
{
	return _isMinimum;
}

void UNIX_StorageHardwareIDElementSettingData::setIsMinimum(Uint16 &value)
{
	_isMinimum = value;
}

Boolean UNIX_StorageHardwareIDElementSettingData::getIsMaximum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_MAXIMUM, getIsMaximum());
	return true;
}

Uint16 UNIX_StorageHardwareIDElementSettingData::getIsMaximum() const
{
	return _isMaximum;
}

void UNIX_StorageHardwareIDElementSettingData::setIsMaximum(Uint16 &value)
{
	_isMaximum = value;
}

Boolean UNIX_StorageHardwareIDElementSettingData::getIsPending(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PENDING, getIsPending());
	return true;
}

Uint16 UNIX_StorageHardwareIDElementSettingData::getIsPending() const
{
	return _isPending;
}

void UNIX_StorageHardwareIDElementSettingData::setIsPending(Uint16 &value)
{
	_isPending = value;
}


void UNIX_StorageHardwareIDElementSettingData::clearInstance()
{

	_managedElement = CIMInstance(CIMName("CIM_StorageHardwareID"));
	_settingData = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	_isDefault = Uint16(0);
	_isCurrent = Uint16(0);
	_isNext = Uint16(0);
	_isMinimum = Uint16(0);
	_isMaximum = Uint16(0);
	_isPending = Uint16(0);

}

Boolean UNIX_StorageHardwareIDElementSettingData::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IsDefault"))
			{
				Uint16 isDefaultValue;
				property.getValue().get(isDefaultValue);
				setIsDefault(isDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "IsCurrent"))
			{
				Uint16 isCurrentValue;
				property.getValue().get(isCurrentValue);
				setIsCurrent(isCurrentValue);
			}
			else if (String::equal(property.getName().getString(), "IsNext"))
			{
				Uint16 isNextValue;
				property.getValue().get(isNextValue);
				setIsNext(isNextValue);
			}
			else if (String::equal(property.getName().getString(), "IsMinimum"))
			{
				Uint16 isMinimumValue;
				property.getValue().get(isMinimumValue);
				setIsMinimum(isMinimumValue);
			}
			else if (String::equal(property.getName().getString(), "IsMaximum"))
			{
				Uint16 isMaximumValue;
				property.getValue().get(isMaximumValue);
				setIsMaximum(isMaximumValue);
			}
			else if (String::equal(property.getName().getString(), "IsPending"))
			{
				Uint16 isPendingValue;
				property.getValue().get(isPendingValue);
				setIsPending(isPendingValue);
			}
	}
	return true;
}


Boolean UNIX_StorageHardwareIDElementSettingData::initialize()
{
	return false;
}

Boolean UNIX_StorageHardwareIDElementSettingData::load(int &pIndex)
{
	
	_managedElement = CIMInstance(CIMName("CIM_StorageHardwareID"));
	_settingData = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	_isDefault = Uint16(0);
	_isCurrent = Uint16(0);
	_isNext = Uint16(0);
	_isMinimum = Uint16(0);
	_isMaximum = Uint16(0);
	_isPending = Uint16(0);
	
	return false;
}

Boolean UNIX_StorageHardwareIDElementSettingData::finalize()
{
	return false;
}


Boolean UNIX_StorageHardwareIDElementSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageHardwareIDElementSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageHardwareIDElementSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageHardwareIDElementSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageHardwareIDElementSettingData::validateInstance()
{
	return true;
}

