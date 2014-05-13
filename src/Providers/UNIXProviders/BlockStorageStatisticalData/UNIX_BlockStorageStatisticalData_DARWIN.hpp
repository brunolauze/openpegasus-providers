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


UNIX_BlockStorageStatisticalData::UNIX_BlockStorageStatisticalData(void)
{
}

UNIX_BlockStorageStatisticalData::~UNIX_BlockStorageStatisticalData(void)
{
}

Boolean UNIX_BlockStorageStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BlockStorageStatisticalData::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BlockStorageStatisticalData::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BlockStorageStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BlockStorageStatisticalData::getCaption() const
{
	return _caption;
}

void UNIX_BlockStorageStatisticalData::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BlockStorageStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BlockStorageStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_BlockStorageStatisticalData::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BlockStorageStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BlockStorageStatisticalData::getElementName() const
{
	return _elementName;
}

void UNIX_BlockStorageStatisticalData::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BlockStorageStatisticalData::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getGeneration() const
{
	return _generation;
}

void UNIX_BlockStorageStatisticalData::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BlockStorageStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_BlockStorageStatisticalData::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_BlockStorageStatisticalData::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_BlockStorageStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_BlockStorageStatisticalData::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_BlockStorageStatisticalData::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_BlockStorageStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_BlockStorageStatisticalData::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_BlockStorageStatisticalData::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_BlockStorageStatisticalData::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_BlockStorageStatisticalData::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_BlockStorageStatisticalData::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_BlockStorageStatisticalData::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_BlockStorageStatisticalData::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_BlockStorageStatisticalData::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_BlockStorageStatisticalData::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_BlockStorageStatisticalData::getElementType() const
{
	return _elementType;
}

void UNIX_BlockStorageStatisticalData::setElementType(Uint16 &value)
{
	_elementType = value;
}

Boolean UNIX_BlockStorageStatisticalData::getTotalIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_IOS, getTotalIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getTotalIOs() const
{
	return _totalIOs;
}

void UNIX_BlockStorageStatisticalData::setTotalIOs(Uint64 &value)
{
	_totalIOs = value;
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesTransferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_TRANSFERRED, getKBytesTransferred());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getKBytesTransferred() const
{
	return _kBytesTransferred;
}

void UNIX_BlockStorageStatisticalData::setKBytesTransferred(Uint64 &value)
{
	_kBytesTransferred = value;
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesWritten(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_WRITTEN, getKBytesWritten());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getKBytesWritten() const
{
	return _kBytesWritten;
}

void UNIX_BlockStorageStatisticalData::setKBytesWritten(Uint64 &value)
{
	_kBytesWritten = value;
}

Boolean UNIX_BlockStorageStatisticalData::getIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IO_TIME_COUNTER, getIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getIOTimeCounter() const
{
	return _iOTimeCounter;
}

void UNIX_BlockStorageStatisticalData::setIOTimeCounter(Uint64 &value)
{
	_iOTimeCounter = value;
}

Boolean UNIX_BlockStorageStatisticalData::getReadIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_IOS, getReadIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getReadIOs() const
{
	return _readIOs;
}

void UNIX_BlockStorageStatisticalData::setReadIOs(Uint64 &value)
{
	_readIOs = value;
}

Boolean UNIX_BlockStorageStatisticalData::getReadHitIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_HIT_IOS, getReadHitIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getReadHitIOs() const
{
	return _readHitIOs;
}

void UNIX_BlockStorageStatisticalData::setReadHitIOs(Uint64 &value)
{
	_readHitIOs = value;
}

Boolean UNIX_BlockStorageStatisticalData::getReadIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_IO_TIME_COUNTER, getReadIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getReadIOTimeCounter() const
{
	return _readIOTimeCounter;
}

void UNIX_BlockStorageStatisticalData::setReadIOTimeCounter(Uint64 &value)
{
	_readIOTimeCounter = value;
}

Boolean UNIX_BlockStorageStatisticalData::getReadHitIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_HIT_IO_TIME_COUNTER, getReadHitIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getReadHitIOTimeCounter() const
{
	return _readHitIOTimeCounter;
}

void UNIX_BlockStorageStatisticalData::setReadHitIOTimeCounter(Uint64 &value)
{
	_readHitIOTimeCounter = value;
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesRead(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_READ, getKBytesRead());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getKBytesRead() const
{
	return _kBytesRead;
}

void UNIX_BlockStorageStatisticalData::setKBytesRead(Uint64 &value)
{
	_kBytesRead = value;
}

Boolean UNIX_BlockStorageStatisticalData::getWriteIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_IOS, getWriteIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getWriteIOs() const
{
	return _writeIOs;
}

void UNIX_BlockStorageStatisticalData::setWriteIOs(Uint64 &value)
{
	_writeIOs = value;
}

Boolean UNIX_BlockStorageStatisticalData::getWriteHitIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_HIT_IOS, getWriteHitIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getWriteHitIOs() const
{
	return _writeHitIOs;
}

void UNIX_BlockStorageStatisticalData::setWriteHitIOs(Uint64 &value)
{
	_writeHitIOs = value;
}

Boolean UNIX_BlockStorageStatisticalData::getWriteIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_IO_TIME_COUNTER, getWriteIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getWriteIOTimeCounter() const
{
	return _writeIOTimeCounter;
}

void UNIX_BlockStorageStatisticalData::setWriteIOTimeCounter(Uint64 &value)
{
	_writeIOTimeCounter = value;
}

Boolean UNIX_BlockStorageStatisticalData::getWriteHitIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_HIT_IO_TIME_COUNTER, getWriteHitIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getWriteHitIOTimeCounter() const
{
	return _writeHitIOTimeCounter;
}

void UNIX_BlockStorageStatisticalData::setWriteHitIOTimeCounter(Uint64 &value)
{
	_writeHitIOTimeCounter = value;
}

Boolean UNIX_BlockStorageStatisticalData::getIdleTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_TIME_COUNTER, getIdleTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getIdleTimeCounter() const
{
	return _idleTimeCounter;
}

void UNIX_BlockStorageStatisticalData::setIdleTimeCounter(Uint64 &value)
{
	_idleTimeCounter = value;
}

Boolean UNIX_BlockStorageStatisticalData::getMaintOp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAINT_OP, getMaintOp());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getMaintOp() const
{
	return _maintOp;
}

void UNIX_BlockStorageStatisticalData::setMaintOp(Uint64 &value)
{
	_maintOp = value;
}

Boolean UNIX_BlockStorageStatisticalData::getMaintTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAINT_TIME_COUNTER, getMaintTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getMaintTimeCounter() const
{
	return _maintTimeCounter;
}

void UNIX_BlockStorageStatisticalData::setMaintTimeCounter(Uint64 &value)
{
	_maintTimeCounter = value;
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesReadRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_READ_RATE, getKBytesReadRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getKBytesReadRate() const
{
	return _kBytesReadRate;
}

void UNIX_BlockStorageStatisticalData::setKBytesReadRate(Real32 &value)
{
	_kBytesReadRate = value;
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesTransferredRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_TRANSFERRED_RATE, getKBytesTransferredRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getKBytesTransferredRate() const
{
	return _kBytesTransferredRate;
}

void UNIX_BlockStorageStatisticalData::setKBytesTransferredRate(Real32 &value)
{
	_kBytesTransferredRate = value;
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesWrittenRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_WRITTEN_RATE, getKBytesWrittenRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getKBytesWrittenRate() const
{
	return _kBytesWrittenRate;
}

void UNIX_BlockStorageStatisticalData::setKBytesWrittenRate(Real32 &value)
{
	_kBytesWrittenRate = value;
}

Boolean UNIX_BlockStorageStatisticalData::getMaintOpRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAINT_OP_RATE, getMaintOpRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getMaintOpRate() const
{
	return _maintOpRate;
}

void UNIX_BlockStorageStatisticalData::setMaintOpRate(Real32 &value)
{
	_maintOpRate = value;
}

Boolean UNIX_BlockStorageStatisticalData::getRateElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_ELEMENT_TYPE, getRateElementType());
	return true;
}

Uint16 UNIX_BlockStorageStatisticalData::getRateElementType() const
{
	return _rateElementType;
}

void UNIX_BlockStorageStatisticalData::setRateElementType(Uint16 &value)
{
	_rateElementType = value;
}

Boolean UNIX_BlockStorageStatisticalData::getReadHitIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_HIT_IOS_RATE, getReadHitIOsRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getReadHitIOsRate() const
{
	return _readHitIOsRate;
}

void UNIX_BlockStorageStatisticalData::setReadHitIOsRate(Real32 &value)
{
	_readHitIOsRate = value;
}

Boolean UNIX_BlockStorageStatisticalData::getReadIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_IOS_RATE, getReadIOsRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getReadIOsRate() const
{
	return _readIOsRate;
}

void UNIX_BlockStorageStatisticalData::setReadIOsRate(Real32 &value)
{
	_readIOsRate = value;
}

Boolean UNIX_BlockStorageStatisticalData::getTotalIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_IOS_RATE, getTotalIOsRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getTotalIOsRate() const
{
	return _totalIOsRate;
}

void UNIX_BlockStorageStatisticalData::setTotalIOsRate(Real32 &value)
{
	_totalIOsRate = value;
}

Boolean UNIX_BlockStorageStatisticalData::getWriteHitIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_HIT_IOS_RATE, getWriteHitIOsRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getWriteHitIOsRate() const
{
	return _writeHitIOsRate;
}

void UNIX_BlockStorageStatisticalData::setWriteHitIOsRate(Real32 &value)
{
	_writeHitIOsRate = value;
}

Boolean UNIX_BlockStorageStatisticalData::getWriteIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_IOS_RATE, getWriteIOsRate());
	return true;
}

Real32 UNIX_BlockStorageStatisticalData::getWriteIOsRate() const
{
	return _writeIOsRate;
}

void UNIX_BlockStorageStatisticalData::setWriteIOsRate(Real32 &value)
{
	_writeIOsRate = value;
}


void UNIX_BlockStorageStatisticalData::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BlockStorageStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_elementType = Uint16(0);
	_totalIOs = Uint64(0);
	_kBytesTransferred = Uint64(0);
	_kBytesWritten = Uint64(0);
	_iOTimeCounter = Uint64(0);
	_readIOs = Uint64(0);
	_readHitIOs = Uint64(0);
	_readIOTimeCounter = Uint64(0);
	_readHitIOTimeCounter = Uint64(0);
	_kBytesRead = Uint64(0);
	_writeIOs = Uint64(0);
	_writeHitIOs = Uint64(0);
	_writeIOTimeCounter = Uint64(0);
	_writeHitIOTimeCounter = Uint64(0);
	_idleTimeCounter = Uint64(0);
	_maintOp = Uint64(0);
	_maintTimeCounter = Uint64(0);
	_kBytesReadRate = Real32(0);
	_kBytesTransferredRate = Real32(0);
	_kBytesWrittenRate = Real32(0);
	_maintOpRate = Real32(0);
	_rateElementType = Uint16(0);
	_readHitIOsRate = Real32(0);
	_readIOsRate = Real32(0);
	_totalIOsRate = Real32(0);
	_writeHitIOsRate = Real32(0);
	_writeIOsRate = Real32(0);

}

Boolean UNIX_BlockStorageStatisticalData::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "StartStatisticTime"))
			{
				CIMDateTime startStatisticTimeValue;
				property.getValue().get(startStatisticTimeValue);
				setStartStatisticTime(startStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "StatisticTime"))
			{
				CIMDateTime statisticTimeValue;
				property.getValue().get(statisticTimeValue);
				setStatisticTime(statisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "SampleInterval"))
			{
				CIMDateTime sampleIntervalValue;
				property.getValue().get(sampleIntervalValue);
				setSampleInterval(sampleIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalEndTime"))
			{
				CIMDateTime rateIntervalEndTimeValue;
				property.getValue().get(rateIntervalEndTimeValue);
				setRateIntervalEndTime(rateIntervalEndTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalStartTime"))
			{
				CIMDateTime rateIntervalStartTimeValue;
				property.getValue().get(rateIntervalStartTimeValue);
				setRateIntervalStartTime(rateIntervalStartTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ElementType"))
			{
				Uint16 elementTypeValue;
				property.getValue().get(elementTypeValue);
				setElementType(elementTypeValue);
			}
			else if (String::equal(property.getName().getString(), "TotalIOs"))
			{
				Uint64 totalIOsValue;
				property.getValue().get(totalIOsValue);
				setTotalIOs(totalIOsValue);
			}
			else if (String::equal(property.getName().getString(), "KBytesTransferred"))
			{
				Uint64 kBytesTransferredValue;
				property.getValue().get(kBytesTransferredValue);
				setKBytesTransferred(kBytesTransferredValue);
			}
			else if (String::equal(property.getName().getString(), "KBytesWritten"))
			{
				Uint64 kBytesWrittenValue;
				property.getValue().get(kBytesWrittenValue);
				setKBytesWritten(kBytesWrittenValue);
			}
			else if (String::equal(property.getName().getString(), "IOTimeCounter"))
			{
				Uint64 iOTimeCounterValue;
				property.getValue().get(iOTimeCounterValue);
				setIOTimeCounter(iOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "ReadIOs"))
			{
				Uint64 readIOsValue;
				property.getValue().get(readIOsValue);
				setReadIOs(readIOsValue);
			}
			else if (String::equal(property.getName().getString(), "ReadHitIOs"))
			{
				Uint64 readHitIOsValue;
				property.getValue().get(readHitIOsValue);
				setReadHitIOs(readHitIOsValue);
			}
			else if (String::equal(property.getName().getString(), "ReadIOTimeCounter"))
			{
				Uint64 readIOTimeCounterValue;
				property.getValue().get(readIOTimeCounterValue);
				setReadIOTimeCounter(readIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "ReadHitIOTimeCounter"))
			{
				Uint64 readHitIOTimeCounterValue;
				property.getValue().get(readHitIOTimeCounterValue);
				setReadHitIOTimeCounter(readHitIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "KBytesRead"))
			{
				Uint64 kBytesReadValue;
				property.getValue().get(kBytesReadValue);
				setKBytesRead(kBytesReadValue);
			}
			else if (String::equal(property.getName().getString(), "WriteIOs"))
			{
				Uint64 writeIOsValue;
				property.getValue().get(writeIOsValue);
				setWriteIOs(writeIOsValue);
			}
			else if (String::equal(property.getName().getString(), "WriteHitIOs"))
			{
				Uint64 writeHitIOsValue;
				property.getValue().get(writeHitIOsValue);
				setWriteHitIOs(writeHitIOsValue);
			}
			else if (String::equal(property.getName().getString(), "WriteIOTimeCounter"))
			{
				Uint64 writeIOTimeCounterValue;
				property.getValue().get(writeIOTimeCounterValue);
				setWriteIOTimeCounter(writeIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "WriteHitIOTimeCounter"))
			{
				Uint64 writeHitIOTimeCounterValue;
				property.getValue().get(writeHitIOTimeCounterValue);
				setWriteHitIOTimeCounter(writeHitIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IdleTimeCounter"))
			{
				Uint64 idleTimeCounterValue;
				property.getValue().get(idleTimeCounterValue);
				setIdleTimeCounter(idleTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "MaintOp"))
			{
				Uint64 maintOpValue;
				property.getValue().get(maintOpValue);
				setMaintOp(maintOpValue);
			}
			else if (String::equal(property.getName().getString(), "MaintTimeCounter"))
			{
				Uint64 maintTimeCounterValue;
				property.getValue().get(maintTimeCounterValue);
				setMaintTimeCounter(maintTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "KBytesReadRate"))
			{
				Real32 kBytesReadRateValue;
				property.getValue().get(kBytesReadRateValue);
				setKBytesReadRate(kBytesReadRateValue);
			}
			else if (String::equal(property.getName().getString(), "KBytesTransferredRate"))
			{
				Real32 kBytesTransferredRateValue;
				property.getValue().get(kBytesTransferredRateValue);
				setKBytesTransferredRate(kBytesTransferredRateValue);
			}
			else if (String::equal(property.getName().getString(), "KBytesWrittenRate"))
			{
				Real32 kBytesWrittenRateValue;
				property.getValue().get(kBytesWrittenRateValue);
				setKBytesWrittenRate(kBytesWrittenRateValue);
			}
			else if (String::equal(property.getName().getString(), "MaintOpRate"))
			{
				Real32 maintOpRateValue;
				property.getValue().get(maintOpRateValue);
				setMaintOpRate(maintOpRateValue);
			}
			else if (String::equal(property.getName().getString(), "RateElementType"))
			{
				Uint16 rateElementTypeValue;
				property.getValue().get(rateElementTypeValue);
				setRateElementType(rateElementTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ReadHitIOsRate"))
			{
				Real32 readHitIOsRateValue;
				property.getValue().get(readHitIOsRateValue);
				setReadHitIOsRate(readHitIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "ReadIOsRate"))
			{
				Real32 readIOsRateValue;
				property.getValue().get(readIOsRateValue);
				setReadIOsRate(readIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "TotalIOsRate"))
			{
				Real32 totalIOsRateValue;
				property.getValue().get(totalIOsRateValue);
				setTotalIOsRate(totalIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "WriteHitIOsRate"))
			{
				Real32 writeHitIOsRateValue;
				property.getValue().get(writeHitIOsRateValue);
				setWriteHitIOsRate(writeHitIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "WriteIOsRate"))
			{
				Real32 writeIOsRateValue;
				property.getValue().get(writeIOsRateValue);
				setWriteIOsRate(writeIOsRateValue);
			}
	}
	return true;
}

Uint32 UNIX_BlockStorageStatisticalData::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_BlockStorageStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BlockStorageStatisticalData");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_elementType = Uint16(0);
	_totalIOs = Uint64(0);
	_kBytesTransferred = Uint64(0);
	_kBytesWritten = Uint64(0);
	_iOTimeCounter = Uint64(0);
	_readIOs = Uint64(0);
	_readHitIOs = Uint64(0);
	_readIOTimeCounter = Uint64(0);
	_readHitIOTimeCounter = Uint64(0);
	_kBytesRead = Uint64(0);
	_writeIOs = Uint64(0);
	_writeHitIOs = Uint64(0);
	_writeIOTimeCounter = Uint64(0);
	_writeHitIOTimeCounter = Uint64(0);
	_idleTimeCounter = Uint64(0);
	_maintOp = Uint64(0);
	_maintTimeCounter = Uint64(0);
	_kBytesReadRate = Real32(0);
	_kBytesTransferredRate = Real32(0);
	_kBytesWrittenRate = Real32(0);
	_maintOpRate = Real32(0);
	_rateElementType = Uint16(0);
	_readHitIOsRate = Real32(0);
	_readIOsRate = Real32(0);
	_totalIOsRate = Real32(0);
	_writeHitIOsRate = Real32(0);
	_writeIOsRate = Real32(0);
	
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_BlockStorageStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::validateInstance()
{
	return true;
}

