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


UNIX_InstalledPartitionTable::UNIX_InstalledPartitionTable(void)
{
}

UNIX_InstalledPartitionTable::~UNIX_InstalledPartitionTable(void)
{
}

Boolean UNIX_InstalledPartitionTable::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_InstalledPartitionTable::getAntecedent() const
{
	return _antecedent;
}

void UNIX_InstalledPartitionTable::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_InstalledPartitionTable::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_InstalledPartitionTable::getDependent() const
{
	return _dependent;
}

void UNIX_InstalledPartitionTable::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_InstalledPartitionTable::clearInstance()
{

	_antecedent = _antecedentDiskPartitionConfigurationCapabilitiesProvider.constructInstance(
		CIMName("UNIX_DiskPartitionConfigurationCapabilities"),
		CIMNamespaceName("root/cimv2"),
		_antecedentDiskPartitionConfigurationCapabilities);
	_dependent = _dependentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_dependentLogicalDisk);

}

Boolean UNIX_InstalledPartitionTable::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_InstalledPartitionTable::initialize()
{
	_antecedentDiskPartitionConfigurationCapabilities.initialize();
	_dependentLogicalDisk.initialize();
	_dependentSnapshot.initialize();
	_dependentVTOCDiskPartition.initialize();
	_dependentGPTDiskPartition.initialize();
	_dependentDiskPartition.initialize();
	_dependentTapePartition.initialize();
	_dependentCompositeExtent.initialize();
	_dependentProtectedSpaceExtent.initialize();
	_dependentPhysicalExtent.initialize();
	_dependentDatabaseSegment.initialize();
	_dependentAggregatePExtent.initialize();
	_dependentVolumeSet.initialize();
	_dependentOpaqueManagementData.initialize();
	_dependentAggregatePSExtent.initialize();
	_dependentCacheMemory.initialize();
	_dependentVolatileStorage.initialize();
	_dependentNonVolatileStorage.initialize();
	return true;
}
Boolean UNIX_InstalledPartitionTable::load(int &pIndex)
{

	_antecedent = _antecedentDiskPartitionConfigurationCapabilitiesProvider.constructInstance(
		CIMName("UNIX_DiskPartitionConfigurationCapabilities"),
		CIMNamespaceName("root/cimv2"),
		_antecedentDiskPartitionConfigurationCapabilities);
	_dependent = _dependentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_dependentLogicalDisk);

	return false;
}

Boolean UNIX_InstalledPartitionTable::finalize()
{
	_antecedentDiskPartitionConfigurationCapabilities.finalize();
	_dependentLogicalDisk.finalize();
	_dependentSnapshot.finalize();
	_dependentVTOCDiskPartition.finalize();
	_dependentGPTDiskPartition.finalize();
	_dependentDiskPartition.finalize();
	_dependentTapePartition.finalize();
	_dependentCompositeExtent.finalize();
	_dependentProtectedSpaceExtent.finalize();
	_dependentPhysicalExtent.finalize();
	_dependentDatabaseSegment.finalize();
	_dependentAggregatePExtent.finalize();
	_dependentVolumeSet.finalize();
	_dependentOpaqueManagementData.finalize();
	_dependentAggregatePSExtent.finalize();
	_dependentCacheMemory.finalize();
	_dependentVolatileStorage.finalize();
	_dependentNonVolatileStorage.finalize();
	return true;
}


Boolean UNIX_InstalledPartitionTable::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_InstalledPartitionTable::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledPartitionTable::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledPartitionTable::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_InstalledPartitionTable::validateInstance()
{
	return true;
}

