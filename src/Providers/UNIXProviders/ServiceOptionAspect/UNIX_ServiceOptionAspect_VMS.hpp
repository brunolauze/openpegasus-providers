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


UNIX_ServiceOptionAspect::UNIX_ServiceOptionAspect(void)
{
}

UNIX_ServiceOptionAspect::~UNIX_ServiceOptionAspect(void)
{
}

Boolean UNIX_ServiceOptionAspect::getServiceOption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_OPTION, getServiceOption());
	return true;
}

CIMInstance UNIX_ServiceOptionAspect::getServiceOption() const
{
	return _serviceOption;
}

void UNIX_ServiceOptionAspect::setServiceOption(CIMInstance &value)
{
	_serviceOption = value;
}

Boolean UNIX_ServiceOptionAspect::getAspect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASPECT, getAspect());
	return true;
}

CIMInstance UNIX_ServiceOptionAspect::getAspect() const
{
	return _aspect;
}

void UNIX_ServiceOptionAspect::setAspect(CIMInstance &value)
{
	_aspect = value;
}


void UNIX_ServiceOptionAspect::clearInstance()
{

	_serviceOption = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	_aspect = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));

}

Boolean UNIX_ServiceOptionAspect::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ServiceOption"))
			{
				CIMInstance serviceOptionValue;
				property.getValue().get(serviceOptionValue);
				setServiceOption(serviceOptionValue);
			}
			else if (String::equal(property.getName().getString(), "Aspect"))
			{
				CIMInstance aspectValue;
				property.getValue().get(aspectValue);
				setAspect(aspectValue);
			}
	}
	return true;
}


Boolean UNIX_ServiceOptionAspect::initialize()
{
	return false;
}

Boolean UNIX_ServiceOptionAspect::load(int &pIndex)
{
	
	_serviceOption = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	_aspect = CIMInstance(CIMName("CIM_FirewallRuleSettingData"));
	
	return false;
}

Boolean UNIX_ServiceOptionAspect::finalize()
{
	return false;
}


Boolean UNIX_ServiceOptionAspect::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String serviceOptionKey;
	String aspectKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SERVICE_OPTION)) serviceOptionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ASPECT)) aspectKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getServiceOption().getPath().toString(), serviceOptionKey)) && 
			(String::equalNoCase(getAspect().getPath().toString(), aspectKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ServiceOptionAspect::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceOptionAspect::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceOptionAspect::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceOptionAspect::validateInstance()
{
	return true;
}

