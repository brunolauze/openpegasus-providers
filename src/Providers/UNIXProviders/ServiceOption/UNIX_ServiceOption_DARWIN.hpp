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


UNIX_ServiceOption::UNIX_ServiceOption(void)
{
}

UNIX_ServiceOption::~UNIX_ServiceOption(void)
{
}

Boolean UNIX_ServiceOption::getService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE, getService());
	return true;
}

CIMInstance UNIX_ServiceOption::getService() const
{
	return _service;
}

void UNIX_ServiceOption::setService(CIMInstance &value)
{
	_service = value;
}

Boolean UNIX_ServiceOption::getOption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPTION, getOption());
	return true;
}

CIMInstance UNIX_ServiceOption::getOption() const
{
	return _option;
}

void UNIX_ServiceOption::setOption(CIMInstance &value)
{
	_option = value;
}

Boolean UNIX_ServiceOption::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Uint16 UNIX_ServiceOption::getIsDefault() const
{
	return _isDefault;
}

void UNIX_ServiceOption::setIsDefault(Uint16 &value)
{
	_isDefault = value;
}


void UNIX_ServiceOption::clearInstance()
{

	_service = CIMInstance(CIMName("CIM_FibreProtocolService"));
	_option = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	_isDefault = Uint16(0);

}

Boolean UNIX_ServiceOption::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Service"))
			{
				CIMInstance serviceValue;
				property.getValue().get(serviceValue);
				setService(serviceValue);
			}
			else if (String::equal(property.getName().getString(), "Option"))
			{
				CIMInstance optionValue;
				property.getValue().get(optionValue);
				setOption(optionValue);
			}
			else if (String::equal(property.getName().getString(), "IsDefault"))
			{
				Uint16 isDefaultValue;
				property.getValue().get(isDefaultValue);
				setIsDefault(isDefaultValue);
			}
	}
	return true;
}


Boolean UNIX_ServiceOption::initialize()
{
	return false;
}

Boolean UNIX_ServiceOption::load(int &pIndex)
{
	
	_service = CIMInstance(CIMName("CIM_FibreProtocolService"));
	_option = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	_isDefault = Uint16(0);
	
	return false;
}

Boolean UNIX_ServiceOption::finalize()
{
	return false;
}


Boolean UNIX_ServiceOption::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String serviceKey;
	String optionKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SERVICE)) serviceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OPTION)) optionKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getService().getPath().toString(), serviceKey)) && 
			(String::equalNoCase(getOption().getPath().toString(), optionKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ServiceOption::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceOption::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceOption::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceOption::validateInstance()
{
	return true;
}

