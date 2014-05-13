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


UNIX_DeviceServicesLocation::UNIX_DeviceServicesLocation(void)
{
}

UNIX_DeviceServicesLocation::~UNIX_DeviceServicesLocation(void)
{
}

Boolean UNIX_DeviceServicesLocation::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_DeviceServicesLocation::getAntecedent() const
{
	return _antecedent;
}

void UNIX_DeviceServicesLocation::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_DeviceServicesLocation::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_DeviceServicesLocation::getDependent() const
{
	return _dependent;
}

void UNIX_DeviceServicesLocation::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_DeviceServicesLocation::getInaccessible(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INACCESSIBLE, getInaccessible());
	return true;
}

Boolean UNIX_DeviceServicesLocation::getInaccessible() const
{
	return _inaccessible;
}

void UNIX_DeviceServicesLocation::setInaccessible(Boolean &value)
{
	_inaccessible = value;
}


void UNIX_DeviceServicesLocation::clearInstance()
{

	_antecedent = _antecedentInterLibraryPortProvider.constructInstance(
		CIMName("UNIX_InterLibraryPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentInterLibraryPort);
	_dependent = _dependentStorageMediaLocationProvider.constructInstance(
		CIMName("UNIX_StorageMediaLocation"),
		CIMNamespaceName("root/cimv2"),
		_dependentStorageMediaLocation);
	_inaccessible = Boolean(false);

}

Boolean UNIX_DeviceServicesLocation::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Antecedent"))
			{
				CIMInstance antecedentValue;
				property.getValue().get(antecedentValue);
				setAntecedent(antecedentValue);
			}
			else if (String::equal(property.getName().getString(), "Dependent"))
			{
				CIMInstance dependentValue;
				property.getValue().get(dependentValue);
				setDependent(dependentValue);
			}
			else if (String::equal(property.getName().getString(), "Inaccessible"))
			{
				Boolean inaccessibleValue;
				property.getValue().get(inaccessibleValue);
				setInaccessible(inaccessibleValue);
			}
	}
	return true;
}


Boolean UNIX_DeviceServicesLocation::initialize()
{
	_antecedentInterLibraryPort.initialize();
	_antecedentLimitedAccessPort.initialize();
	_dependentStorageMediaLocation.initialize();
	return true;
}
Boolean UNIX_DeviceServicesLocation::load(int &pIndex)
{

	_antecedent = _antecedentInterLibraryPortProvider.constructInstance(
		CIMName("UNIX_InterLibraryPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentInterLibraryPort);
	_dependent = _dependentStorageMediaLocationProvider.constructInstance(
		CIMName("UNIX_StorageMediaLocation"),
		CIMNamespaceName("root/cimv2"),
		_dependentStorageMediaLocation);
	_inaccessible = Boolean(false);

	return false;
}

Boolean UNIX_DeviceServicesLocation::finalize()
{
	_antecedentInterLibraryPort.finalize();
	_antecedentLimitedAccessPort.finalize();
	_dependentStorageMediaLocation.finalize();
	return true;
}


Boolean UNIX_DeviceServicesLocation::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAntecedent().getPath().toString(), antecedentKey)) && 
			(String::equalNoCase(getDependent().getPath().toString(), dependentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DeviceServicesLocation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceServicesLocation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceServicesLocation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceServicesLocation::validateInstance()
{
	return true;
}

