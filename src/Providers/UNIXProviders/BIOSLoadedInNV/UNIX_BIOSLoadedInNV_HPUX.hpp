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


UNIX_BIOSLoadedInNV::UNIX_BIOSLoadedInNV(void)
{
}

UNIX_BIOSLoadedInNV::~UNIX_BIOSLoadedInNV(void)
{
}

Boolean UNIX_BIOSLoadedInNV::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_BIOSLoadedInNV::getAntecedent() const
{
	return _antecedent;
}

void UNIX_BIOSLoadedInNV::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_BIOSLoadedInNV::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_BIOSLoadedInNV::getDependent() const
{
	return _dependent;
}

void UNIX_BIOSLoadedInNV::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_BIOSLoadedInNV::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_BIOSLoadedInNV::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_BIOSLoadedInNV::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_BIOSLoadedInNV::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_BIOSLoadedInNV::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_BIOSLoadedInNV::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}


void UNIX_BIOSLoadedInNV::clearInstance()
{

	_antecedent = _antecedentCacheMemoryProvider.constructInstance(
		CIMName("UNIX_CacheMemory"),
		CIMNamespaceName("root/cimv2"),
		_antecedentCacheMemory);
	_dependent = _dependentBIOSElementProvider.constructInstance(
		CIMName("UNIX_BIOSElement"),
		CIMNamespaceName("root/cimv2"),
		_dependentBIOSElement);
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);

}

Boolean UNIX_BIOSLoadedInNV::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "StartingAddress"))
			{
				Uint64 startingAddressValue;
				property.getValue().get(startingAddressValue);
				setStartingAddress(startingAddressValue);
			}
			else if (String::equal(property.getName().getString(), "EndingAddress"))
			{
				Uint64 endingAddressValue;
				property.getValue().get(endingAddressValue);
				setEndingAddress(endingAddressValue);
			}
	}
	return true;
}


Boolean UNIX_BIOSLoadedInNV::initialize()
{
	_antecedentCacheMemory.initialize();
	_antecedentVolatileStorage.initialize();
	_antecedentNonVolatileStorage.initialize();
	_dependentBIOSElement.initialize();
	return true;
}
Boolean UNIX_BIOSLoadedInNV::load(int &pIndex)
{

	_antecedent = _antecedentCacheMemoryProvider.constructInstance(
		CIMName("UNIX_CacheMemory"),
		CIMNamespaceName("root/cimv2"),
		_antecedentCacheMemory);
	_dependent = _dependentBIOSElementProvider.constructInstance(
		CIMName("UNIX_BIOSElement"),
		CIMNamespaceName("root/cimv2"),
		_dependentBIOSElement);
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);

	return false;
}

Boolean UNIX_BIOSLoadedInNV::finalize()
{
	_antecedentCacheMemory.finalize();
	_antecedentVolatileStorage.finalize();
	_antecedentNonVolatileStorage.finalize();
	_dependentBIOSElement.finalize();
	return true;
}


Boolean UNIX_BIOSLoadedInNV::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BIOSLoadedInNV::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSLoadedInNV::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSLoadedInNV::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BIOSLoadedInNV::validateInstance()
{
	return true;
}

