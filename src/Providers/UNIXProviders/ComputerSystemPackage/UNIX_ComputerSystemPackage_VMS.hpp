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


UNIX_ComputerSystemPackage::UNIX_ComputerSystemPackage(void)
{
}

UNIX_ComputerSystemPackage::~UNIX_ComputerSystemPackage(void)
{
}

Boolean UNIX_ComputerSystemPackage::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ComputerSystemPackage::getAntecedent() const
{
	return _antecedent;
}

void UNIX_ComputerSystemPackage::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_ComputerSystemPackage::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ComputerSystemPackage::getDependent() const
{
	return _dependent;
}

void UNIX_ComputerSystemPackage::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_ComputerSystemPackage::getPlatformGUID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PLATFORM_G_U_ID, getPlatformGUID());
	return true;
}

String UNIX_ComputerSystemPackage::getPlatformGUID() const
{
	return _platformGUID;
}

void UNIX_ComputerSystemPackage::setPlatformGUID(String &value)
{
	_platformGUID = value;
}


void UNIX_ComputerSystemPackage::clearInstance()
{

	_antecedent = _antecedentCardProvider.constructInstance(
		CIMName("UNIX_Card"),
		CIMNamespaceName("root/cimv2"),
		_antecedentCard);
	_dependent = _dependentVirtualComputerSystemProvider.constructInstance(
		CIMName("UNIX_VirtualComputerSystem"),
		CIMNamespaceName("root/cimv2"),
		_dependentVirtualComputerSystem);
	_platformGUID = String ("");

}

Boolean UNIX_ComputerSystemPackage::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PlatformGUID"))
			{
				String platformGUIDValue;
				property.getValue().get(platformGUIDValue);
				setPlatformGUID(platformGUIDValue);
			}
	}
	return true;
}


Boolean UNIX_ComputerSystemPackage::initialize()
{
	_antecedentCard.initialize();
	_antecedentSystemBusCard.initialize();
	_antecedentChassis.initialize();
	_antecedentRack.initialize();
	_antecedentPackageLocation.initialize();
	_antecedentStorageMediaLocation.initialize();
	_antecedentMagazine.initialize();
	_dependentVirtualComputerSystem.initialize();
	_dependentCluster.initialize();
	_dependentComputerSystem.initialize();
	return true;
}
Boolean UNIX_ComputerSystemPackage::load(int &pIndex)
{

	_antecedent = _antecedentCardProvider.constructInstance(
		CIMName("UNIX_Card"),
		CIMNamespaceName("root/cimv2"),
		_antecedentCard);
	_dependent = _dependentVirtualComputerSystemProvider.constructInstance(
		CIMName("UNIX_VirtualComputerSystem"),
		CIMNamespaceName("root/cimv2"),
		_dependentVirtualComputerSystem);
	_platformGUID = String ("");

	return false;
}

Boolean UNIX_ComputerSystemPackage::finalize()
{
	_antecedentCard.finalize();
	_antecedentSystemBusCard.finalize();
	_antecedentChassis.finalize();
	_antecedentRack.finalize();
	_antecedentPackageLocation.finalize();
	_antecedentStorageMediaLocation.finalize();
	_antecedentMagazine.finalize();
	_dependentVirtualComputerSystem.finalize();
	_dependentCluster.finalize();
	_dependentComputerSystem.finalize();
	return true;
}


Boolean UNIX_ComputerSystemPackage::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ComputerSystemPackage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemPackage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemPackage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ComputerSystemPackage::validateInstance()
{
	return true;
}

