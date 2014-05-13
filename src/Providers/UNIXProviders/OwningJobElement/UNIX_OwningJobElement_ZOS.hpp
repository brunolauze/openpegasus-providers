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


UNIX_OwningJobElement::UNIX_OwningJobElement(void)
{
}

UNIX_OwningJobElement::~UNIX_OwningJobElement(void)
{
}

Boolean UNIX_OwningJobElement::getOwningElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNING_ELEMENT, getOwningElement());
	return true;
}

CIMInstance UNIX_OwningJobElement::getOwningElement() const
{
	return _owningElement;
}

void UNIX_OwningJobElement::setOwningElement(CIMInstance &value)
{
	_owningElement = value;
}

Boolean UNIX_OwningJobElement::getOwnedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNED_ELEMENT, getOwnedElement());
	return true;
}

CIMInstance UNIX_OwningJobElement::getOwnedElement() const
{
	return _ownedElement;
}

void UNIX_OwningJobElement::setOwnedElement(CIMInstance &value)
{
	_ownedElement = value;
}


void UNIX_OwningJobElement::clearInstance()
{

	// _owningElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_ownedElement = CIMInstance(CIMName("UNIX_ConcreteJob"));

}

Boolean UNIX_OwningJobElement::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "OwningElement"))
			{
				CIMInstance owningElementValue;
				property.getValue().get(owningElementValue);
				setOwningElement(owningElementValue);
			}
			else if (String::equal(property.getName().getString(), "OwnedElement"))
			{
				CIMInstance ownedElementValue;
				property.getValue().get(ownedElementValue);
				setOwnedElement(ownedElementValue);
			}
	}
	return true;
}


Boolean UNIX_OwningJobElement::initialize()
{
	return false;
}

Boolean UNIX_OwningJobElement::load(int &pIndex)
{
	
	// _owningElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_ownedElement = CIMInstance(CIMName("UNIX_ConcreteJob"));
	
	return false;
}

Boolean UNIX_OwningJobElement::finalize()
{
	return false;
}


Boolean UNIX_OwningJobElement::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String owningElementKey;
	String ownedElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_OWNING_ELEMENT)) owningElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OWNED_ELEMENT)) ownedElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getOwningElement().getPath().toString(), owningElementKey)) && 
			(String::equalNoCase(getOwnedElement().getPath().toString(), ownedElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_OwningJobElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OwningJobElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OwningJobElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OwningJobElement::validateInstance()
{
	return true;
}

