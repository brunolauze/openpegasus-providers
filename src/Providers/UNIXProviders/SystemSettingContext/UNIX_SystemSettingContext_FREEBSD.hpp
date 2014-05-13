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


UNIX_SystemSettingContext::UNIX_SystemSettingContext(void)
{
}

UNIX_SystemSettingContext::~UNIX_SystemSettingContext(void)
{
}

Boolean UNIX_SystemSettingContext::getContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTEXT, getContext());
	return true;
}

CIMInstance UNIX_SystemSettingContext::getContext() const
{
	return _context;
}

void UNIX_SystemSettingContext::setContext(CIMInstance &value)
{
	_context = value;
}

Boolean UNIX_SystemSettingContext::getSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING, getSetting());
	return true;
}

CIMInstance UNIX_SystemSettingContext::getSetting() const
{
	return _setting;
}

void UNIX_SystemSettingContext::setSetting(CIMInstance &value)
{
	_setting = value;
}


void UNIX_SystemSettingContext::clearInstance()
{

	_context = CIMInstance(CIMName("CIM_SystemConfiguration"));
	_setting = CIMInstance(CIMName("CIM_SystemSetting"));

}

Boolean UNIX_SystemSettingContext::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Context"))
			{
				CIMInstance contextValue;
				property.getValue().get(contextValue);
				setContext(contextValue);
			}
			else if (String::equal(property.getName().getString(), "Setting"))
			{
				CIMInstance settingValue;
				property.getValue().get(settingValue);
				setSetting(settingValue);
			}
	}
	return true;
}


Boolean UNIX_SystemSettingContext::initialize()
{
	return false;
}

Boolean UNIX_SystemSettingContext::load(int &pIndex)
{
	
	_context = CIMInstance(CIMName("CIM_SystemConfiguration"));
	_setting = CIMInstance(CIMName("CIM_SystemSetting"));
	
	return false;
}

Boolean UNIX_SystemSettingContext::finalize()
{
	return false;
}


Boolean UNIX_SystemSettingContext::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String contextKey;
	String settingKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CONTEXT)) contextKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SETTING)) settingKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getContext().getPath().toString(), contextKey)) && 
			(String::equalNoCase(getSetting().getPath().toString(), settingKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SystemSettingContext::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemSettingContext::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemSettingContext::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemSettingContext::validateInstance()
{
	return true;
}

