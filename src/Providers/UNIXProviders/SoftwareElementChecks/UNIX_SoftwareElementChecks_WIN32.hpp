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


UNIX_SoftwareElementChecks::UNIX_SoftwareElementChecks(void)
{
}

UNIX_SoftwareElementChecks::~UNIX_SoftwareElementChecks(void)
{
}

Boolean UNIX_SoftwareElementChecks::getElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT, getElement());
	return true;
}

CIMInstance UNIX_SoftwareElementChecks::getElement() const
{
	return _element;
}

void UNIX_SoftwareElementChecks::setElement(CIMInstance &value)
{
	_element = value;
}

Boolean UNIX_SoftwareElementChecks::getCheck(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK, getCheck());
	return true;
}

CIMInstance UNIX_SoftwareElementChecks::getCheck() const
{
	return _check;
}

void UNIX_SoftwareElementChecks::setCheck(CIMInstance &value)
{
	_check = value;
}

Boolean UNIX_SoftwareElementChecks::getPhase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHASE, getPhase());
	return true;
}

Uint16 UNIX_SoftwareElementChecks::getPhase() const
{
	return _phase;
}

void UNIX_SoftwareElementChecks::setPhase(Uint16 &value)
{
	_phase = value;
}


void UNIX_SoftwareElementChecks::clearInstance()
{

	// _element = CIMInstance(CIMName("CIM_SoftwareElement"));
	_check = CIMInstance(CIMName("CIM_ArchitectureCheck"));
	_phase = Uint16(0);

}

Boolean UNIX_SoftwareElementChecks::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Check"))
			{
				CIMInstance checkValue;
				property.getValue().get(checkValue);
				setCheck(checkValue);
			}
			else if (String::equal(property.getName().getString(), "Phase"))
			{
				Uint16 phaseValue;
				property.getValue().get(phaseValue);
				setPhase(phaseValue);
			}
	}
	return true;
}


Boolean UNIX_SoftwareElementChecks::initialize()
{
	return false;
}

Boolean UNIX_SoftwareElementChecks::load(int &pIndex)
{
	
	// _element = CIMInstance(CIMName("CIM_SoftwareElement"));
	_check = CIMInstance(CIMName("CIM_ArchitectureCheck"));
	_phase = Uint16(0);
	
	return false;
}

Boolean UNIX_SoftwareElementChecks::finalize()
{
	return false;
}


Boolean UNIX_SoftwareElementChecks::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String elementKey;
	String checkKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ELEMENT)) elementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CHECK)) checkKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getElement().getPath().toString(), elementKey)) && 
			(String::equalNoCase(getCheck().getPath().toString(), checkKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SoftwareElementChecks::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElementChecks::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElementChecks::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElementChecks::validateInstance()
{
	return true;
}

