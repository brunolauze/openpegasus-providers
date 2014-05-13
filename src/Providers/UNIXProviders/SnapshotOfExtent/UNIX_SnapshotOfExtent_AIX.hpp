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


UNIX_SnapshotOfExtent::UNIX_SnapshotOfExtent(void)
{
}

UNIX_SnapshotOfExtent::~UNIX_SnapshotOfExtent(void)
{
}

Boolean UNIX_SnapshotOfExtent::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SnapshotOfExtent::getAntecedent() const
{
	return _antecedent;
}

void UNIX_SnapshotOfExtent::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_SnapshotOfExtent::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SnapshotOfExtent::getDependent() const
{
	return _dependent;
}

void UNIX_SnapshotOfExtent::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_SnapshotOfExtent::getSnapshotType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SNAPSHOT_TYPE, getSnapshotType());
	return true;
}

Uint16 UNIX_SnapshotOfExtent::getSnapshotType() const
{
	return _snapshotType;
}

void UNIX_SnapshotOfExtent::setSnapshotType(Uint16 &value)
{
	_snapshotType = value;
}


void UNIX_SnapshotOfExtent::clearInstance()
{

	_antecedent = _antecedentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLogicalDisk);
	_dependent = _dependentSnapshotProvider.constructInstance(
		CIMName("UNIX_Snapshot"),
		CIMNamespaceName("root/cimv2"),
		_dependentSnapshot);
	_snapshotType = Uint16(0);

}

Boolean UNIX_SnapshotOfExtent::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SnapshotType"))
			{
				Uint16 snapshotTypeValue;
				property.getValue().get(snapshotTypeValue);
				setSnapshotType(snapshotTypeValue);
			}
	}
	return true;
}


Boolean UNIX_SnapshotOfExtent::initialize()
{
	_antecedentLogicalDisk.initialize();
	_antecedentSnapshot.initialize();
	_antecedentVTOCDiskPartition.initialize();
	_antecedentGPTDiskPartition.initialize();
	_antecedentDiskPartition.initialize();
	_antecedentTapePartition.initialize();
	_antecedentCompositeExtent.initialize();
	_antecedentProtectedSpaceExtent.initialize();
	_antecedentPhysicalExtent.initialize();
	_antecedentDatabaseSegment.initialize();
	_antecedentAggregatePExtent.initialize();
	_antecedentVolumeSet.initialize();
	_antecedentOpaqueManagementData.initialize();
	_antecedentAggregatePSExtent.initialize();
	_antecedentCacheMemory.initialize();
	_antecedentVolatileStorage.initialize();
	_antecedentNonVolatileStorage.initialize();
	_dependentSnapshot.initialize();
	return true;
}
Boolean UNIX_SnapshotOfExtent::load(int &pIndex)
{

	_antecedent = _antecedentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLogicalDisk);
	_dependent = _dependentSnapshotProvider.constructInstance(
		CIMName("UNIX_Snapshot"),
		CIMNamespaceName("root/cimv2"),
		_dependentSnapshot);
	_snapshotType = Uint16(0);

	return false;
}

Boolean UNIX_SnapshotOfExtent::finalize()
{
	_antecedentLogicalDisk.finalize();
	_antecedentSnapshot.finalize();
	_antecedentVTOCDiskPartition.finalize();
	_antecedentGPTDiskPartition.finalize();
	_antecedentDiskPartition.finalize();
	_antecedentTapePartition.finalize();
	_antecedentCompositeExtent.finalize();
	_antecedentProtectedSpaceExtent.finalize();
	_antecedentPhysicalExtent.finalize();
	_antecedentDatabaseSegment.finalize();
	_antecedentAggregatePExtent.finalize();
	_antecedentVolumeSet.finalize();
	_antecedentOpaqueManagementData.finalize();
	_antecedentAggregatePSExtent.finalize();
	_antecedentCacheMemory.finalize();
	_antecedentVolatileStorage.finalize();
	_antecedentNonVolatileStorage.finalize();
	_dependentSnapshot.finalize();
	return true;
}


Boolean UNIX_SnapshotOfExtent::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SnapshotOfExtent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SnapshotOfExtent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SnapshotOfExtent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SnapshotOfExtent::validateInstance()
{
	return true;
}

