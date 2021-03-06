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


UNIX_SharedElement::UNIX_SharedElement(void)
{
}

UNIX_SharedElement::~UNIX_SharedElement(void)
{
}

Boolean UNIX_SharedElement::getSystemElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_ELEMENT, getSystemElement());
	return true;
}

CIMInstance UNIX_SharedElement::getSystemElement() const
{
	return _systemElement;
}

void UNIX_SharedElement::setSystemElement(CIMInstance &value)
{
	_systemElement = value;
}

Boolean UNIX_SharedElement::getSameElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAME_ELEMENT, getSameElement());
	return true;
}

CIMInstance UNIX_SharedElement::getSameElement() const
{
	return _sameElement;
}

void UNIX_SharedElement::setSameElement(CIMInstance &value)
{
	_sameElement = value;
}


void UNIX_SharedElement::clearInstance()
{

	_systemElement = CIMInstance(CIMName("CIM_SqlSchema"));
	_sameElement = CIMInstance(CIMName("CIM_NFSShare"));

}

Boolean UNIX_SharedElement::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "SystemElement"))
			{
				CIMInstance systemElementValue;
				property.getValue().get(systemElementValue);
				setSystemElement(systemElementValue);
			}
			else if (String::equal(property.getName().getString(), "SameElement"))
			{
				CIMInstance sameElementValue;
				property.getValue().get(sameElementValue);
				setSameElement(sameElementValue);
			}
	}
	return true;
}


Boolean UNIX_SharedElement::initialize()
{
	return false;
}

Boolean UNIX_SharedElement::load(int &pIndex)
{
	
	_systemElement = CIMInstance(CIMName("CIM_SqlSchema"));
	_sameElement = CIMInstance(CIMName("CIM_NFSShare"));
	
	return false;
}

Boolean UNIX_SharedElement::finalize()
{
	return false;
}


Boolean UNIX_SharedElement::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemElementKey;
	String sameElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_ELEMENT)) systemElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SAME_ELEMENT)) sameElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemElement().getPath().toString(), systemElementKey)) && 
			(String::equalNoCase(getSameElement().getPath().toString(), sameElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SharedElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedElement::validateInstance()
{
	return true;
}

