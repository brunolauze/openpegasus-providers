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


UNIX_ComputerSystemElementSettingData::UNIX_ComputerSystemElementSettingData(void)
{
}

UNIX_ComputerSystemElementSettingData::~UNIX_ComputerSystemElementSettingData(void)
{
}

Boolean UNIX_ComputerSystemElementSettingData::getManagedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT, getManagedElement());
	return true;
}

CIMInstance UNIX_ComputerSystemElementSettingData::getManagedElement() const
{
	return _managedElement;
}

void UNIX_ComputerSystemElementSettingData::setManagedElement(CIMInstance &value)
{
	_managedElement = value;
}

Boolean UNIX_ComputerSystemElementSettingData::getSettingData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_DATA, getSettingData());
	return true;
}

CIMInstance UNIX_ComputerSystemElementSettingData::getSettingData() const
{
	return _settingData;
}

void UNIX_ComputerSystemElementSettingData::setSettingData(CIMInstance &value)
{
	_settingData = value;
}

Boolean UNIX_ComputerSystemElementSettingData::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Uint16 UNIX_ComputerSystemElementSettingData::getIsDefault() const
{
	return _isDefault;
}

void UNIX_ComputerSystemElementSettingData::setIsDefault(Uint16 &value)
{
	_isDefault = value;
}

Boolean UNIX_ComputerSystemElementSettingData::getIsCurrent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CURRENT, getIsCurrent());
	return true;
}

Uint16 UNIX_ComputerSystemElementSettingData::getIsCurrent() const
{
	return _isCurrent;
}

void UNIX_ComputerSystemElementSettingData::setIsCurrent(Uint16 &value)
{
	_isCurrent = value;
}

Boolean UNIX_ComputerSystemElementSettingData::getIsNext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEXT, getIsNext());
	return true;
}

Uint16 UNIX_ComputerSystemElementSettingData::getIsNext() const
{
	return _isNext;
}

void UNIX_ComputerSystemElementSettingData::setIsNext(Uint16 &value)
{
	_isNext = value;
}

Boolean UNIX_ComputerSystemElementSettingData::getIsMinimum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_MINIMUM, getIsMinimum());
	return true;
}

Uint16 UNIX_ComputerSystemElementSettingData::getIsMinimum() const
{
	return _isMinimum;
}

void UNIX_ComputerSystemElementSettingData::setIsMinimum(Uint16 &value)
{
	_isMinimum = value;
}

Boolean UNIX_ComputerSystemElementSettingData::getIsMaximum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_MAXIMUM, getIsMaximum());
	return true;
}

Uint16 UNIX_ComputerSystemElementSettingData::getIsMaximum() const
{
	return _isMaximum;
}

void UNIX_ComputerSystemElementSettingData::setIsMaximum(Uint16 &value)
{
	_isMaximum = value;
}

Boolean UNIX_ComputerSystemElementSettingData::getIsPending(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PENDING, getIsPending());
	return true;
}

Uint16 UNIX_ComputerSystemElementSettingData::getIsPending() const
{
	return _isPending;
}

void UNIX_ComputerSystemElementSettingData::setIsPending(Uint16 &value)
{
	_isPending = value;
}


void UNIX_ComputerSystemElementSettingData::clearInstance()
{

	_managedElement = CIMInstance(CIMName("CIM_VirtualComputerSystem"));
	_settingData = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	_isDefault = Uint16(0);
	_isCurrent = Uint16(0);
	_isNext = Uint16(0);
	_isMinimum = Uint16(0);
	_isMaximum = Uint16(0);
	_isPending = Uint16(0);

}

Boolean UNIX_ComputerSystemElementSettingData::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_ComputerSystemElementSettingData::initialize()
{
	return false;
}

Boolean UNIX_ComputerSystemElementSettingData::load(int &pIndex)
{
	
	_managedElement = CIMInstance(CIMName("CIM_VirtualComputerSystem"));
	_settingData = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	_isDefault = Uint16(0);
	_isCurrent = Uint16(0);
	_isNext = Uint16(0);
	_isMinimum = Uint16(0);
	_isMaximum = Uint16(0);
	_isPending = Uint16(0);
	
	return false;
}

Boolean UNIX_ComputerSystemElementSettingData::finalize()
{
	return false;
}


Boolean UNIX_ComputerSystemElementSettingData::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ComputerSystemElementSettingData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemElementSettingData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemElementSettingData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemElementSettingData::validateInstance()
{
	return true;
}

