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


UNIX_InstalledSoftwareIdentity::UNIX_InstalledSoftwareIdentity(void)
{
}

UNIX_InstalledSoftwareIdentity::~UNIX_InstalledSoftwareIdentity(void)
{
}

Boolean UNIX_InstalledSoftwareIdentity::getSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM, getSystem());
	return true;
}

CIMInstance UNIX_InstalledSoftwareIdentity::getSystem() const
{
	return _system;
}

void UNIX_InstalledSoftwareIdentity::setSystem(CIMInstance &value)
{
	_system = value;
}

Boolean UNIX_InstalledSoftwareIdentity::getInstalledSoftware(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALLED_SOFTWARE, getInstalledSoftware());
	return true;
}

CIMInstance UNIX_InstalledSoftwareIdentity::getInstalledSoftware() const
{
	return _installedSoftware;
}

void UNIX_InstalledSoftwareIdentity::setInstalledSoftware(CIMInstance &value)
{
	_installedSoftware = value;
}


void UNIX_InstalledSoftwareIdentity::clearInstance()
{

	_system = CIMInstance(CIMName("UNIX_ComputerSystem"));
	_installedSoftware = CIMInstance(CIMName("CIM_SoftwareIdentity"));

}

Boolean UNIX_InstalledSoftwareIdentity::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "System"))
			{
				CIMInstance systemValue;
				property.getValue().get(systemValue);
				setSystem(systemValue);
			}
			else if (String::equal(property.getName().getString(), "InstalledSoftware"))
			{
				CIMInstance installedSoftwareValue;
				property.getValue().get(installedSoftwareValue);
				setInstalledSoftware(installedSoftwareValue);
			}
	}
	return true;
}


Boolean UNIX_InstalledSoftwareIdentity::initialize()
{
	return false;
}

Boolean UNIX_InstalledSoftwareIdentity::load(int &pIndex)
{
	
	_system = CIMInstance(CIMName("UNIX_ComputerSystem"));
	_installedSoftware = CIMInstance(CIMName("CIM_SoftwareIdentity"));
	
	return false;
}

Boolean UNIX_InstalledSoftwareIdentity::finalize()
{
	return false;
}


Boolean UNIX_InstalledSoftwareIdentity::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemKey;
	String installedSoftwareKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM)) systemKey = kb.getValue();
		else if (keyName.equal(PROPERTY_INSTALLED_SOFTWARE)) installedSoftwareKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystem().getPath().toString(), systemKey)) && 
			(String::equalNoCase(getInstalledSoftware().getPath().toString(), installedSoftwareKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_InstalledSoftwareIdentity::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledSoftwareIdentity::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledSoftwareIdentity::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledSoftwareIdentity::validateInstance()
{
	return true;
}

