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


UNIX_ComponentSetting::UNIX_ComponentSetting(void)
{
}

UNIX_ComponentSetting::~UNIX_ComponentSetting(void)
{
}

Boolean UNIX_ComponentSetting::getPropertyPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROPERTY_POLICY, getPropertyPolicy());
	return true;
}

Uint16 UNIX_ComponentSetting::getPropertyPolicy() const
{
	return _propertyPolicy;
}

void UNIX_ComponentSetting::setPropertyPolicy(Uint16 &value)
{
	_propertyPolicy = value;
}

Boolean UNIX_ComponentSetting::getValueRange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALUE_RANGE, getValueRange());
	return true;
}

Uint16 UNIX_ComponentSetting::getValueRange() const
{
	return _valueRange;
}

void UNIX_ComponentSetting::setValueRange(Uint16 &value)
{
	_valueRange = value;
}

Boolean UNIX_ComponentSetting::getValueRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALUE_ROLE, getValueRole());
	return true;
}

Uint16 UNIX_ComponentSetting::getValueRole() const
{
	return _valueRole;
}

void UNIX_ComponentSetting::setValueRole(Uint16 &value)
{
	_valueRole = value;
}

Boolean UNIX_ComponentSetting::getSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING, getSetting());
	return true;
}

String UNIX_ComponentSetting::getSetting() const
{
	return _setting;
}

void UNIX_ComponentSetting::setSetting(String &value)
{
	_setting = value;
}


void UNIX_ComponentSetting::clearInstance()
{

	_propertyPolicy = Uint16(0);
	_valueRange = Uint16(0);
	_valueRole = Uint16(0);
	_setting = String ("");

}

Boolean UNIX_ComponentSetting::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "PropertyPolicy"))
			{
				Uint16 propertyPolicyValue;
				property.getValue().get(propertyPolicyValue);
				setPropertyPolicy(propertyPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "ValueRange"))
			{
				Uint16 valueRangeValue;
				property.getValue().get(valueRangeValue);
				setValueRange(valueRangeValue);
			}
			else if (String::equal(property.getName().getString(), "ValueRole"))
			{
				Uint16 valueRoleValue;
				property.getValue().get(valueRoleValue);
				setValueRole(valueRoleValue);
			}
			else if (String::equal(property.getName().getString(), "Setting"))
			{
				String settingValue;
				property.getValue().get(settingValue);
				setSetting(settingValue);
			}
	}
	return true;
}


Boolean UNIX_ComponentSetting::initialize()
{
	return false;
}

Boolean UNIX_ComponentSetting::load(int &pIndex)
{
	
	_propertyPolicy = Uint16(0);
	_valueRange = Uint16(0);
	_valueRole = Uint16(0);
	_setting = String ("");
	
	return false;
}

Boolean UNIX_ComponentSetting::finalize()
{
	return false;
}


Boolean UNIX_ComponentSetting::find(const Array<CIMKeyBinding> &kbArray)
{
	return true;
}

Boolean UNIX_ComponentSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComponentSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComponentSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComponentSetting::validateInstance()
{
	return true;
}

