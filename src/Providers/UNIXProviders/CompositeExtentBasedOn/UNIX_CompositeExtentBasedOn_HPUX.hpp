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


UNIX_CompositeExtentBasedOn::UNIX_CompositeExtentBasedOn(void)
{
}

UNIX_CompositeExtentBasedOn::~UNIX_CompositeExtentBasedOn(void)
{
}

Boolean UNIX_CompositeExtentBasedOn::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_CompositeExtentBasedOn::getAntecedent() const
{
	return _antecedent;
}

void UNIX_CompositeExtentBasedOn::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_CompositeExtentBasedOn::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_CompositeExtentBasedOn::getDependent() const
{
	return _dependent;
}

void UNIX_CompositeExtentBasedOn::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_CompositeExtentBasedOn::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_CompositeExtentBasedOn::getStartingAddress() const
{
	return _startingAddress;
}

void UNIX_CompositeExtentBasedOn::setStartingAddress(Uint64 &value)
{
	_startingAddress = value;
}

Boolean UNIX_CompositeExtentBasedOn::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_CompositeExtentBasedOn::getEndingAddress() const
{
	return _endingAddress;
}

void UNIX_CompositeExtentBasedOn::setEndingAddress(Uint64 &value)
{
	_endingAddress = value;
}

Boolean UNIX_CompositeExtentBasedOn::getOrderIndex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORDER_INDEX, getOrderIndex());
	return true;
}

Uint16 UNIX_CompositeExtentBasedOn::getOrderIndex() const
{
	return _orderIndex;
}

void UNIX_CompositeExtentBasedOn::setOrderIndex(Uint16 &value)
{
	_orderIndex = value;
}

Boolean UNIX_CompositeExtentBasedOn::getLBAsMappedByDecrementing(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_B_AS_MAPPED_BY_DECREMENTING, getLBAsMappedByDecrementing());
	return true;
}

Boolean UNIX_CompositeExtentBasedOn::getLBAsMappedByDecrementing() const
{
	return _lBAsMappedByDecrementing;
}

void UNIX_CompositeExtentBasedOn::setLBAsMappedByDecrementing(Boolean &value)
{
	_lBAsMappedByDecrementing = value;
}

Boolean UNIX_CompositeExtentBasedOn::getLBAMappingIncludesCheckData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_B_A_MAPPING_INCLUDES_CHECK_DATA, getLBAMappingIncludesCheckData());
	return true;
}

Boolean UNIX_CompositeExtentBasedOn::getLBAMappingIncludesCheckData() const
{
	return _lBAMappingIncludesCheckData;
}

void UNIX_CompositeExtentBasedOn::setLBAMappingIncludesCheckData(Boolean &value)
{
	_lBAMappingIncludesCheckData = value;
}

Boolean UNIX_CompositeExtentBasedOn::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_CompositeExtentBasedOn::getNumberOfBlocks() const
{
	return _numberOfBlocks;
}

void UNIX_CompositeExtentBasedOn::setNumberOfBlocks(Uint64 &value)
{
	_numberOfBlocks = value;
}

Boolean UNIX_CompositeExtentBasedOn::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_CompositeExtentBasedOn::getBlockSize() const
{
	return _blockSize;
}

void UNIX_CompositeExtentBasedOn::setBlockSize(Uint64 &value)
{
	_blockSize = value;
}

Boolean UNIX_CompositeExtentBasedOn::getUserDataStripeDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH, getUserDataStripeDepth());
	return true;
}

Uint64 UNIX_CompositeExtentBasedOn::getUserDataStripeDepth() const
{
	return _userDataStripeDepth;
}

void UNIX_CompositeExtentBasedOn::setUserDataStripeDepth(Uint64 &value)
{
	_userDataStripeDepth = value;
}

Boolean UNIX_CompositeExtentBasedOn::getUnitsBeforeCheckDataInterleave(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_BEFORE_CHECK_DATA_INTERLEAVE, getUnitsBeforeCheckDataInterleave());
	return true;
}

Uint64 UNIX_CompositeExtentBasedOn::getUnitsBeforeCheckDataInterleave() const
{
	return _unitsBeforeCheckDataInterleave;
}

void UNIX_CompositeExtentBasedOn::setUnitsBeforeCheckDataInterleave(Uint64 &value)
{
	_unitsBeforeCheckDataInterleave = value;
}

Boolean UNIX_CompositeExtentBasedOn::getUnitsOfCheckData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_OF_CHECK_DATA, getUnitsOfCheckData());
	return true;
}

Uint64 UNIX_CompositeExtentBasedOn::getUnitsOfCheckData() const
{
	return _unitsOfCheckData;
}

void UNIX_CompositeExtentBasedOn::setUnitsOfCheckData(Uint64 &value)
{
	_unitsOfCheckData = value;
}

Boolean UNIX_CompositeExtentBasedOn::getUnitsOfUserData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_OF_USER_DATA, getUnitsOfUserData());
	return true;
}

Uint64 UNIX_CompositeExtentBasedOn::getUnitsOfUserData() const
{
	return _unitsOfUserData;
}

void UNIX_CompositeExtentBasedOn::setUnitsOfUserData(Uint64 &value)
{
	_unitsOfUserData = value;
}


void UNIX_CompositeExtentBasedOn::clearInstance()
{

	_antecedent = _antecedentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLogicalDisk);
	_dependent = _dependentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_dependentLogicalDisk);
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_orderIndex = Uint16(0);
	_lBAsMappedByDecrementing = Boolean(false);
	_lBAMappingIncludesCheckData = Boolean(false);
	_numberOfBlocks = Uint64(0);
	_blockSize = Uint64(0);
	_userDataStripeDepth = Uint64(0);
	_unitsBeforeCheckDataInterleave = Uint64(0);
	_unitsOfCheckData = Uint64(0);
	_unitsOfUserData = Uint64(0);

}

Boolean UNIX_CompositeExtentBasedOn::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LBAsMappedByDecrementing"))
			{
				Boolean lBAsMappedByDecrementingValue;
				property.getValue().get(lBAsMappedByDecrementingValue);
				setLBAsMappedByDecrementing(lBAsMappedByDecrementingValue);
			}
			else if (String::equal(property.getName().getString(), "LBAMappingIncludesCheckData"))
			{
				Boolean lBAMappingIncludesCheckDataValue;
				property.getValue().get(lBAMappingIncludesCheckDataValue);
				setLBAMappingIncludesCheckData(lBAMappingIncludesCheckDataValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfBlocks"))
			{
				Uint64 numberOfBlocksValue;
				property.getValue().get(numberOfBlocksValue);
				setNumberOfBlocks(numberOfBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "BlockSize"))
			{
				Uint64 blockSizeValue;
				property.getValue().get(blockSizeValue);
				setBlockSize(blockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "UserDataStripeDepth"))
			{
				Uint64 userDataStripeDepthValue;
				property.getValue().get(userDataStripeDepthValue);
				setUserDataStripeDepth(userDataStripeDepthValue);
			}
			else if (String::equal(property.getName().getString(), "UnitsBeforeCheckDataInterleave"))
			{
				Uint64 unitsBeforeCheckDataInterleaveValue;
				property.getValue().get(unitsBeforeCheckDataInterleaveValue);
				setUnitsBeforeCheckDataInterleave(unitsBeforeCheckDataInterleaveValue);
			}
			else if (String::equal(property.getName().getString(), "UnitsOfCheckData"))
			{
				Uint64 unitsOfCheckDataValue;
				property.getValue().get(unitsOfCheckDataValue);
				setUnitsOfCheckData(unitsOfCheckDataValue);
			}
			else if (String::equal(property.getName().getString(), "UnitsOfUserData"))
			{
				Uint64 unitsOfUserDataValue;
				property.getValue().get(unitsOfUserDataValue);
				setUnitsOfUserData(unitsOfUserDataValue);
			}
	}
	return true;
}


Boolean UNIX_CompositeExtentBasedOn::initialize()
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
Boolean UNIX_CompositeExtentBasedOn::load(int &pIndex)
{

	_antecedent = _antecedentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLogicalDisk);
	_dependent = _dependentLogicalDiskProvider.constructInstance(
		CIMName("UNIX_LogicalDisk"),
		CIMNamespaceName("root/cimv2"),
		_dependentLogicalDisk);
	_startingAddress = Uint64(0);
	_endingAddress = Uint64(0);
	_orderIndex = Uint16(0);
	_lBAsMappedByDecrementing = Boolean(false);
	_lBAMappingIncludesCheckData = Boolean(false);
	_numberOfBlocks = Uint64(0);
	_blockSize = Uint64(0);
	_userDataStripeDepth = Uint64(0);
	_unitsBeforeCheckDataInterleave = Uint64(0);
	_unitsOfCheckData = Uint64(0);
	_unitsOfUserData = Uint64(0);

	return false;
}

Boolean UNIX_CompositeExtentBasedOn::finalize()
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


Boolean UNIX_CompositeExtentBasedOn::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CompositeExtentBasedOn::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CompositeExtentBasedOn::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CompositeExtentBasedOn::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CompositeExtentBasedOn::validateInstance()
{
	return true;
}

