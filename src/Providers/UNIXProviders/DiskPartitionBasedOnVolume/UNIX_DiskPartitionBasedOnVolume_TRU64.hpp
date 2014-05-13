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


UNIX_DiskPartitionBasedOnVolume::UNIX_DiskPartitionBasedOnVolume(void)
{
}

UNIX_DiskPartitionBasedOnVolume::~UNIX_DiskPartitionBasedOnVolume(void)
{
}

Boolean UNIX_DiskPartitionBasedOnVolume::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_DiskPartitionBasedOnVolume::getAntecedent() const
{
	return _antecedent;
}

void UNIX_DiskPartitionBasedOnVolume::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_DiskPartitionBasedOnVolume::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_DiskPartitionBasedOnVolume::getDependent() const
{
	return _dependent;
}

void UNIX_DiskPartitionBasedOnVolume::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_DiskPartitionBasedOnVolume::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_DiskPartitionBasedOnVolume::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_DiskPartitionBasedOnVolume::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_DiskPartitionBasedOnVolume::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_DiskPartitionBasedOnVolume::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_DiskPartitionBasedOnVolume::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}

Boolean UNIX_DiskPartitionBasedOnVolume::getOrderIndex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORDER_INDEX, getOrderIndex());
	return true;
}

Uint16 UNIX_DiskPartitionBasedOnVolume::getOrderIndex() const
{
	return _orderIndex;
}

void UNIX_DiskPartitionBasedOnVolume::setOrderIndex(Uint16 &value)
{
	_orderIndex = value;
}


void UNIX_DiskPartitionBasedOnVolume::clearInstance()
{

	_antecedent = _antecedentVolumeSetProvider.constructInstance(
		CIMName("UNIX_VolumeSet"),
		CIMNamespaceName("root/cimv2"),
		_antecedentVolumeSet);
	_dependent = _dependentVTOCDiskPartitionProvider.constructInstance(
		CIMName("UNIX_VTOCDiskPartition"),
		CIMNamespaceName("root/cimv2"),
		_dependentVTOCDiskPartition);
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_orderIndex = Uint16(0);

}

Boolean UNIX_DiskPartitionBasedOnVolume::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "OrderIndex"))
			{
				Uint16 orderIndexValue;
				property.getValue().get(orderIndexValue);
				setOrderIndex(orderIndexValue);
			}
	}
	return true;
}


Boolean UNIX_DiskPartitionBasedOnVolume::initialize()
{
	_antecedentVolumeSet.initialize();
	_dependentVTOCDiskPartition.initialize();
	_dependentGPTDiskPartition.initialize();
	_dependentDiskPartition.initialize();
	return true;
}
Boolean UNIX_DiskPartitionBasedOnVolume::load(int &pIndex)
{

	_antecedent = _antecedentVolumeSetProvider.constructInstance(
		CIMName("UNIX_VolumeSet"),
		CIMNamespaceName("root/cimv2"),
		_antecedentVolumeSet);
	_dependent = _dependentVTOCDiskPartitionProvider.constructInstance(
		CIMName("UNIX_VTOCDiskPartition"),
		CIMNamespaceName("root/cimv2"),
		_dependentVTOCDiskPartition);
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_orderIndex = Uint16(0);

	return false;
}

Boolean UNIX_DiskPartitionBasedOnVolume::finalize()
{
	_antecedentVolumeSet.finalize();
	_dependentVTOCDiskPartition.finalize();
	_dependentGPTDiskPartition.finalize();
	_dependentDiskPartition.finalize();
	return true;
}


Boolean UNIX_DiskPartitionBasedOnVolume::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiskPartitionBasedOnVolume::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskPartitionBasedOnVolume::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskPartitionBasedOnVolume::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskPartitionBasedOnVolume::validateInstance()
{
	return true;
}

