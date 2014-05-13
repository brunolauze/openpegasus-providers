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


UNIX_InstalledSoftwareElement::UNIX_InstalledSoftwareElement(void)
{
}

UNIX_InstalledSoftwareElement::~UNIX_InstalledSoftwareElement(void)
{
}

Boolean UNIX_InstalledSoftwareElement::getSoftware(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE, getSoftware());
	return true;
}

CIMInstance UNIX_InstalledSoftwareElement::getSoftware() const
{
	return _software;
}

void UNIX_InstalledSoftwareElement::setSoftware(CIMInstance &value)
{
	_software = value;
}

Boolean UNIX_InstalledSoftwareElement::getSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM, getSystem());
	return true;
}

CIMInstance UNIX_InstalledSoftwareElement::getSystem() const
{
	return _system;
}

void UNIX_InstalledSoftwareElement::setSystem(CIMInstance &value)
{
	_system = value;
}


void UNIX_InstalledSoftwareElement::clearInstance()
{

	// _software = CIMInstance(CIMName("CIM_SoftwareElement"));
	_system = CIMInstance(CIMName("CIM_VirtualComputerSystem"));

}

Boolean UNIX_InstalledSoftwareElement::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Software"))
			{
				CIMInstance softwareValue;
				property.getValue().get(softwareValue);
				setSoftware(softwareValue);
			}
			else if (String::equal(property.getName().getString(), "System"))
			{
				CIMInstance systemValue;
				property.getValue().get(systemValue);
				setSystem(systemValue);
			}
	}
	return true;
}


Boolean UNIX_InstalledSoftwareElement::initialize()
{
	return false;
}

Boolean UNIX_InstalledSoftwareElement::load(int &pIndex)
{
	
	// _software = CIMInstance(CIMName("CIM_SoftwareElement"));
	_system = CIMInstance(CIMName("CIM_VirtualComputerSystem"));
	
	return false;
}

Boolean UNIX_InstalledSoftwareElement::finalize()
{
	return false;
}


Boolean UNIX_InstalledSoftwareElement::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String softwareKey;
	String systemKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SOFTWARE)) softwareKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM)) systemKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSoftware().getPath().toString(), softwareKey)) && 
			(String::equalNoCase(getSystem().getPath().toString(), systemKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_InstalledSoftwareElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledSoftwareElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledSoftwareElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledSoftwareElement::validateInstance()
{
	return true;
}

