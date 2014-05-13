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


UNIX_ElementHasBeenFRUed::UNIX_ElementHasBeenFRUed(void)
{
}

UNIX_ElementHasBeenFRUed::~UNIX_ElementHasBeenFRUed(void)
{
}

Boolean UNIX_ElementHasBeenFRUed::getReplacedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACED_ELEMENT, getReplacedElement());
	return true;
}

CIMInstance UNIX_ElementHasBeenFRUed::getReplacedElement() const
{
	return _replacedElement;
}

void UNIX_ElementHasBeenFRUed::setReplacedElement(CIMInstance &value)
{
	_replacedElement = value;
}

Boolean UNIX_ElementHasBeenFRUed::getReplacementElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEMENT_ELEMENT, getReplacementElement());
	return true;
}

CIMInstance UNIX_ElementHasBeenFRUed::getReplacementElement() const
{
	return _replacementElement;
}

void UNIX_ElementHasBeenFRUed::setReplacementElement(CIMInstance &value)
{
	_replacementElement = value;
}


void UNIX_ElementHasBeenFRUed::clearInstance()
{

	_replacedElement = CIMInstance(CIMName("CIM_PhysicalMedia"));
	_replacementElement = CIMInstance(CIMName("CIM_PhysicalMedia"));

}

Boolean UNIX_ElementHasBeenFRUed::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ReplacedElement"))
			{
				CIMInstance replacedElementValue;
				property.getValue().get(replacedElementValue);
				setReplacedElement(replacedElementValue);
			}
			else if (String::equal(property.getName().getString(), "ReplacementElement"))
			{
				CIMInstance replacementElementValue;
				property.getValue().get(replacementElementValue);
				setReplacementElement(replacementElementValue);
			}
	}
	return true;
}


Boolean UNIX_ElementHasBeenFRUed::initialize()
{
	return false;
}

Boolean UNIX_ElementHasBeenFRUed::load(int &pIndex)
{
	
	_replacedElement = CIMInstance(CIMName("CIM_PhysicalMedia"));
	_replacementElement = CIMInstance(CIMName("CIM_PhysicalMedia"));
	
	return false;
}

Boolean UNIX_ElementHasBeenFRUed::finalize()
{
	return false;
}


Boolean UNIX_ElementHasBeenFRUed::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String replacedElementKey;
	String replacementElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_REPLACED_ELEMENT)) replacedElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_REPLACEMENT_ELEMENT)) replacementElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getReplacedElement().getPath().toString(), replacedElementKey)) && 
			(String::equalNoCase(getReplacementElement().getPath().toString(), replacementElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ElementHasBeenFRUed::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementHasBeenFRUed::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementHasBeenFRUed::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementHasBeenFRUed::validateInstance()
{
	return true;
}

