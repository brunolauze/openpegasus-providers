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


UNIX_ConfigurationComponent::UNIX_ConfigurationComponent(void)
{
}

UNIX_ConfigurationComponent::~UNIX_ConfigurationComponent(void)
{
}

Boolean UNIX_ConfigurationComponent::getConfigGroup(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_GROUP, getConfigGroup());
	return true;
}

CIMInstance UNIX_ConfigurationComponent::getConfigGroup() const
{
	return _configGroup;
}

void UNIX_ConfigurationComponent::setConfigGroup(CIMInstance &value)
{
	_configGroup = value;
}

Boolean UNIX_ConfigurationComponent::getConfigComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_COMPONENT, getConfigComponent());
	return true;
}

CIMInstance UNIX_ConfigurationComponent::getConfigComponent() const
{
	return _configComponent;
}

void UNIX_ConfigurationComponent::setConfigComponent(CIMInstance &value)
{
	_configComponent = value;
}


void UNIX_ConfigurationComponent::clearInstance()
{

	_configGroup = CIMInstance(CIMName("CIM_Configuration"));
	_configComponent = CIMInstance(CIMName("CIM_Configuration"));

}

Boolean UNIX_ConfigurationComponent::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ConfigGroup"))
			{
				CIMInstance configGroupValue;
				property.getValue().get(configGroupValue);
				setConfigGroup(configGroupValue);
			}
			else if (String::equal(property.getName().getString(), "ConfigComponent"))
			{
				CIMInstance configComponentValue;
				property.getValue().get(configComponentValue);
				setConfigComponent(configComponentValue);
			}
	}
	return true;
}


Boolean UNIX_ConfigurationComponent::initialize()
{
	return false;
}

Boolean UNIX_ConfigurationComponent::load(int &pIndex)
{
	
	_configGroup = CIMInstance(CIMName("CIM_Configuration"));
	_configComponent = CIMInstance(CIMName("CIM_Configuration"));
	
	return false;
}

Boolean UNIX_ConfigurationComponent::finalize()
{
	return false;
}


Boolean UNIX_ConfigurationComponent::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String configGroupKey;
	String configComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CONFIG_GROUP)) configGroupKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CONFIG_COMPONENT)) configComponentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getConfigGroup().getPath().toString(), configGroupKey)) && 
			(String::equalNoCase(getConfigComponent().getPath().toString(), configComponentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ConfigurationComponent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationComponent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationComponent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ConfigurationComponent::validateInstance()
{
	return true;
}

