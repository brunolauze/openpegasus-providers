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


UNIX_ElementFRU::UNIX_ElementFRU(void)
{
}

UNIX_ElementFRU::~UNIX_ElementFRU(void)
{
}

Boolean UNIX_ElementFRU::getReplaceableElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE_ELEMENT, getReplaceableElement());
	return true;
}

CIMInstance UNIX_ElementFRU::getReplaceableElement() const
{
	return _replaceableElement;
}

void UNIX_ElementFRU::setReplaceableElement(CIMInstance &value)
{
	_replaceableElement = value;
}

Boolean UNIX_ElementFRU::getReplacementElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEMENT_ELEMENT, getReplacementElement());
	return true;
}

CIMInstance UNIX_ElementFRU::getReplacementElement() const
{
	return _replacementElement;
}

void UNIX_ElementFRU::setReplacementElement(CIMInstance &value)
{
	_replacementElement = value;
}


void UNIX_ElementFRU::clearInstance()
{

	_replaceableElement = CIMInstance(CIMName("CIM_PhysicalMedia"));
	_replacementElement = CIMInstance(CIMName("CIM_ReplacementFRU"));

}

Boolean UNIX_ElementFRU::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ReplaceableElement"))
			{
				CIMInstance replaceableElementValue;
				property.getValue().get(replaceableElementValue);
				setReplaceableElement(replaceableElementValue);
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


Boolean UNIX_ElementFRU::initialize()
{
	return false;
}

Boolean UNIX_ElementFRU::load(int &pIndex)
{
	
	_replaceableElement = CIMInstance(CIMName("CIM_PhysicalMedia"));
	_replacementElement = CIMInstance(CIMName("CIM_ReplacementFRU"));
	
	return false;
}

Boolean UNIX_ElementFRU::finalize()
{
	return false;
}


Boolean UNIX_ElementFRU::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String replaceableElementKey;
	String replacementElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_REPLACEABLE_ELEMENT)) replaceableElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_REPLACEMENT_ELEMENT)) replacementElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getReplaceableElement().getPath().toString(), replaceableElementKey)) && 
			(String::equalNoCase(getReplacementElement().getPath().toString(), replacementElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ElementFRU::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementFRU::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementFRU::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementFRU::validateInstance()
{
	return true;
}

