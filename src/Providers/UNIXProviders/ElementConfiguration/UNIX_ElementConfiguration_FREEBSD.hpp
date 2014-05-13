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


UNIX_ElementConfiguration::UNIX_ElementConfiguration(void)
{
}

UNIX_ElementConfiguration::~UNIX_ElementConfiguration(void)
{
}

Boolean UNIX_ElementConfiguration::getElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT, getElement());
	return true;
}

CIMInstance UNIX_ElementConfiguration::getElement() const
{
	return _element;
}

void UNIX_ElementConfiguration::setElement(CIMInstance &value)
{
	_element = value;
}

Boolean UNIX_ElementConfiguration::getConfiguration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION, getConfiguration());
	return true;
}

CIMInstance UNIX_ElementConfiguration::getConfiguration() const
{
	return _configuration;
}

void UNIX_ElementConfiguration::setConfiguration(CIMInstance &value)
{
	_configuration = value;
}


void UNIX_ElementConfiguration::clearInstance()
{

	// _element = CIMInstance(CIMName("CIM_ManagedSystemElement"));
	_configuration = CIMInstance(CIMName("CIM_Configuration"));

}

Boolean UNIX_ElementConfiguration::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Element"))
			{
				CIMInstance elementValue;
				property.getValue().get(elementValue);
				setElement(elementValue);
			}
			else if (String::equal(property.getName().getString(), "Configuration"))
			{
				CIMInstance configurationValue;
				property.getValue().get(configurationValue);
				setConfiguration(configurationValue);
			}
	}
	return true;
}


Boolean UNIX_ElementConfiguration::initialize()
{
	return false;
}

Boolean UNIX_ElementConfiguration::load(int &pIndex)
{
	
	// _element = CIMInstance(CIMName("CIM_ManagedSystemElement"));
	_configuration = CIMInstance(CIMName("CIM_Configuration"));
	
	return false;
}

Boolean UNIX_ElementConfiguration::finalize()
{
	return false;
}


Boolean UNIX_ElementConfiguration::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String elementKey;
	String configurationKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ELEMENT)) elementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CONFIGURATION)) configurationKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getElement().getPath().toString(), elementKey)) && 
			(String::equalNoCase(getConfiguration().getPath().toString(), configurationKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ElementConfiguration::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementConfiguration::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementConfiguration::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementConfiguration::validateInstance()
{
	return true;
}

