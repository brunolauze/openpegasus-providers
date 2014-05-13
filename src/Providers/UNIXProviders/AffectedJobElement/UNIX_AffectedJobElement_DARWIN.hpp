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


UNIX_AffectedJobElement::UNIX_AffectedJobElement(void)
{
}

UNIX_AffectedJobElement::~UNIX_AffectedJobElement(void)
{
}

Boolean UNIX_AffectedJobElement::getAffectedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AFFECTED_ELEMENT, getAffectedElement());
	return true;
}

CIMInstance UNIX_AffectedJobElement::getAffectedElement() const
{
	return _affectedElement;
}

void UNIX_AffectedJobElement::setAffectedElement(CIMInstance &value)
{
	_affectedElement = value;
}

Boolean UNIX_AffectedJobElement::getAffectingElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AFFECTING_ELEMENT, getAffectingElement());
	return true;
}

CIMInstance UNIX_AffectedJobElement::getAffectingElement() const
{
	return _affectingElement;
}

void UNIX_AffectedJobElement::setAffectingElement(CIMInstance &value)
{
	_affectingElement = value;
}

Boolean UNIX_AffectedJobElement::getElementEffects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_EFFECTS, getElementEffects());
	return true;
}

Array<Uint16> UNIX_AffectedJobElement::getElementEffects() const
{
	return _elementEffects;
}

void UNIX_AffectedJobElement::setElementEffects(Array<Uint16> &value)
{
	_elementEffects = value;
}

Boolean UNIX_AffectedJobElement::getOtherElementEffectsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ELEMENT_EFFECTS_DESCRIPTIONS, getOtherElementEffectsDescriptions());
	return true;
}

Array<String> UNIX_AffectedJobElement::getOtherElementEffectsDescriptions() const
{
	return _otherElementEffectsDescriptions;
}

void UNIX_AffectedJobElement::setOtherElementEffectsDescriptions(Array<String> &value)
{
	_otherElementEffectsDescriptions = value;
}


void UNIX_AffectedJobElement::clearInstance()
{

	// _affectedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_affectingElement = CIMInstance(CIMName("UNIX_ConcreteJob"));
	_elementEffects.clear();
	_otherElementEffectsDescriptions.clear();

}

Boolean UNIX_AffectedJobElement::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "AffectedElement"))
			{
				CIMInstance affectedElementValue;
				property.getValue().get(affectedElementValue);
				setAffectedElement(affectedElementValue);
			}
			else if (String::equal(property.getName().getString(), "AffectingElement"))
			{
				CIMInstance affectingElementValue;
				property.getValue().get(affectingElementValue);
				setAffectingElement(affectingElementValue);
			}
			else if (String::equal(property.getName().getString(), "ElementEffects"))
			{
				Array<Uint16> elementEffectsValue;
				property.getValue().get(elementEffectsValue);
				setElementEffects(elementEffectsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherElementEffectsDescriptions"))
			{
				Array<String> otherElementEffectsDescriptionsValue;
				property.getValue().get(otherElementEffectsDescriptionsValue);
				setOtherElementEffectsDescriptions(otherElementEffectsDescriptionsValue);
			}
	}
	return true;
}


Boolean UNIX_AffectedJobElement::initialize()
{
	return false;
}

Boolean UNIX_AffectedJobElement::load(int &pIndex)
{
	
	// _affectedElement = CIMInstance(CIMName("CIM_ManagedElement"));
	_affectingElement = CIMInstance(CIMName("UNIX_ConcreteJob"));
	_elementEffects.clear();
	_otherElementEffectsDescriptions.clear();
	
	return false;
}

Boolean UNIX_AffectedJobElement::finalize()
{
	return false;
}


Boolean UNIX_AffectedJobElement::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String affectedElementKey;
	String affectingElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_AFFECTED_ELEMENT)) affectedElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_AFFECTING_ELEMENT)) affectingElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAffectedElement().getPath().toString(), affectedElementKey)) && 
			(String::equalNoCase(getAffectingElement().getPath().toString(), affectingElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AffectedJobElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AffectedJobElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AffectedJobElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AffectedJobElement::validateInstance()
{
	return true;
}

