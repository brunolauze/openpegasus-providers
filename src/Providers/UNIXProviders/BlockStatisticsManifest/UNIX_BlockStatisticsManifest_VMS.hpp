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


UNIX_BlockStatisticsManifest::UNIX_BlockStatisticsManifest(void)
{
}

UNIX_BlockStatisticsManifest::~UNIX_BlockStatisticsManifest(void)
{
}

Boolean UNIX_BlockStatisticsManifest::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BlockStatisticsManifest::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BlockStatisticsManifest::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BlockStatisticsManifest::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BlockStatisticsManifest::getCaption() const
{
	return _caption;
}

void UNIX_BlockStatisticsManifest::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BlockStatisticsManifest::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BlockStatisticsManifest::getDescription() const
{
	return _description;
}

void UNIX_BlockStatisticsManifest::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BlockStatisticsManifest::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BlockStatisticsManifest::getElementName() const
{
	return _elementName;
}

void UNIX_BlockStatisticsManifest::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BlockStatisticsManifest::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BlockStatisticsManifest::getGeneration() const
{
	return _generation;
}

void UNIX_BlockStatisticsManifest::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BlockStatisticsManifest::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_BlockStatisticsManifest::getElementType() const
{
	return _elementType;
}

void UNIX_BlockStatisticsManifest::setElementType(Uint16 &value)
{
	_elementType = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_START_STATISTIC_TIME, getIncludeStartStatisticTime());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeStartStatisticTime() const
{
	return _includeStartStatisticTime;
}

void UNIX_BlockStatisticsManifest::setIncludeStartStatisticTime(Boolean &value)
{
	_includeStartStatisticTime = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_STATISTIC_TIME, getIncludeStatisticTime());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeStatisticTime() const
{
	return _includeStatisticTime;
}

void UNIX_BlockStatisticsManifest::setIncludeStatisticTime(Boolean &value)
{
	_includeStatisticTime = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeTotalIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_IOS, getIncludeTotalIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeTotalIOs() const
{
	return _includeTotalIOs;
}

void UNIX_BlockStatisticsManifest::setIncludeTotalIOs(Boolean &value)
{
	_includeTotalIOs = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesTransferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_TRANSFERRED, getIncludeKBytesTransferred());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesTransferred() const
{
	return _includeKBytesTransferred;
}

void UNIX_BlockStatisticsManifest::setIncludeKBytesTransferred(Boolean &value)
{
	_includeKBytesTransferred = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_IO_TIME_COUNTER, getIncludeIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeIOTimeCounter() const
{
	return _includeIOTimeCounter;
}

void UNIX_BlockStatisticsManifest::setIncludeIOTimeCounter(Boolean &value)
{
	_includeIOTimeCounter = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_IOS, getIncludeReadIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOs() const
{
	return _includeReadIOs;
}

void UNIX_BlockStatisticsManifest::setIncludeReadIOs(Boolean &value)
{
	_includeReadIOs = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_HIT_IOS, getIncludeReadHitIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOs() const
{
	return _includeReadHitIOs;
}

void UNIX_BlockStatisticsManifest::setIncludeReadHitIOs(Boolean &value)
{
	_includeReadHitIOs = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_IO_TIME_COUNTER, getIncludeReadIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOTimeCounter() const
{
	return _includeReadIOTimeCounter;
}

void UNIX_BlockStatisticsManifest::setIncludeReadIOTimeCounter(Boolean &value)
{
	_includeReadIOTimeCounter = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_HIT_IO_TIME_COUNTER, getIncludeReadHitIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOTimeCounter() const
{
	return _includeReadHitIOTimeCounter;
}

void UNIX_BlockStatisticsManifest::setIncludeReadHitIOTimeCounter(Boolean &value)
{
	_includeReadHitIOTimeCounter = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesRead(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_READ, getIncludeKBytesRead());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesRead() const
{
	return _includeKBytesRead;
}

void UNIX_BlockStatisticsManifest::setIncludeKBytesRead(Boolean &value)
{
	_includeKBytesRead = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_IOS, getIncludeWriteIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOs() const
{
	return _includeWriteIOs;
}

void UNIX_BlockStatisticsManifest::setIncludeWriteIOs(Boolean &value)
{
	_includeWriteIOs = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_HIT_IOS, getIncludeWriteHitIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOs() const
{
	return _includeWriteHitIOs;
}

void UNIX_BlockStatisticsManifest::setIncludeWriteHitIOs(Boolean &value)
{
	_includeWriteHitIOs = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_IO_TIME_COUNTER, getIncludeWriteIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOTimeCounter() const
{
	return _includeWriteIOTimeCounter;
}

void UNIX_BlockStatisticsManifest::setIncludeWriteIOTimeCounter(Boolean &value)
{
	_includeWriteIOTimeCounter = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_HIT_IO_TIME_COUNTER, getIncludeWriteHitIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOTimeCounter() const
{
	return _includeWriteHitIOTimeCounter;
}

void UNIX_BlockStatisticsManifest::setIncludeWriteHitIOTimeCounter(Boolean &value)
{
	_includeWriteHitIOTimeCounter = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesWritten(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_WRITTEN, getIncludeKBytesWritten());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesWritten() const
{
	return _includeKBytesWritten;
}

void UNIX_BlockStatisticsManifest::setIncludeKBytesWritten(Boolean &value)
{
	_includeKBytesWritten = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeIdleTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_IDLE_TIME_COUNTER, getIncludeIdleTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeIdleTimeCounter() const
{
	return _includeIdleTimeCounter;
}

void UNIX_BlockStatisticsManifest::setIncludeIdleTimeCounter(Boolean &value)
{
	_includeIdleTimeCounter = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintOp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_MAINT_OP, getIncludeMaintOp());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintOp() const
{
	return _includeMaintOp;
}

void UNIX_BlockStatisticsManifest::setIncludeMaintOp(Boolean &value)
{
	_includeMaintOp = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_MAINT_TIME_COUNTER, getIncludeMaintTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintTimeCounter() const
{
	return _includeMaintTimeCounter;
}

void UNIX_BlockStatisticsManifest::setIncludeMaintTimeCounter(Boolean &value)
{
	_includeMaintTimeCounter = value;
}

Boolean UNIX_BlockStatisticsManifest::getCSVSequence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_V_SEQUENCE, getCSVSequence());
	return true;
}

Array<String> UNIX_BlockStatisticsManifest::getCSVSequence() const
{
	return _cSVSequence;
}

void UNIX_BlockStatisticsManifest::setCSVSequence(Array<String> &value)
{
	_cSVSequence = value;
}

Boolean UNIX_BlockStatisticsManifest::getCSVRateSequence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_V_RATE_SEQUENCE, getCSVRateSequence());
	return true;
}

Array<String> UNIX_BlockStatisticsManifest::getCSVRateSequence() const
{
	return _cSVRateSequence;
}

void UNIX_BlockStatisticsManifest::setCSVRateSequence(Array<String> &value)
{
	_cSVRateSequence = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesReadRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_READ_RATE, getIncludeKBytesReadRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesReadRate() const
{
	return _includeKBytesReadRate;
}

void UNIX_BlockStatisticsManifest::setIncludeKBytesReadRate(Boolean &value)
{
	_includeKBytesReadRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesTransferredRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_TRANSFERRED_RATE, getIncludeKBytesTransferredRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesTransferredRate() const
{
	return _includeKBytesTransferredRate;
}

void UNIX_BlockStatisticsManifest::setIncludeKBytesTransferredRate(Boolean &value)
{
	_includeKBytesTransferredRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesWrittenRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_WRITTEN_RATE, getIncludeKBytesWrittenRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesWrittenRate() const
{
	return _includeKBytesWrittenRate;
}

void UNIX_BlockStatisticsManifest::setIncludeKBytesWrittenRate(Boolean &value)
{
	_includeKBytesWrittenRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintOpRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_MAINT_OP_RATE, getIncludeMaintOpRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintOpRate() const
{
	return _includeMaintOpRate;
}

void UNIX_BlockStatisticsManifest::setIncludeMaintOpRate(Boolean &value)
{
	_includeMaintOpRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_RATE_INTERVAL_END_TIME, getIncludeRateIntervalEndTime());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeRateIntervalEndTime() const
{
	return _includeRateIntervalEndTime;
}

void UNIX_BlockStatisticsManifest::setIncludeRateIntervalEndTime(Boolean &value)
{
	_includeRateIntervalEndTime = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_RATE_INTERVAL_START_TIME, getIncludeRateIntervalStartTime());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeRateIntervalStartTime() const
{
	return _includeRateIntervalStartTime;
}

void UNIX_BlockStatisticsManifest::setIncludeRateIntervalStartTime(Boolean &value)
{
	_includeRateIntervalStartTime = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_HIT_IOS_RATE, getIncludeReadHitIOsRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOsRate() const
{
	return _includeReadHitIOsRate;
}

void UNIX_BlockStatisticsManifest::setIncludeReadHitIOsRate(Boolean &value)
{
	_includeReadHitIOsRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_IOS_RATE, getIncludeReadIOsRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOsRate() const
{
	return _includeReadIOsRate;
}

void UNIX_BlockStatisticsManifest::setIncludeReadIOsRate(Boolean &value)
{
	_includeReadIOsRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeTotalIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_IOS_RATE, getIncludeTotalIOsRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeTotalIOsRate() const
{
	return _includeTotalIOsRate;
}

void UNIX_BlockStatisticsManifest::setIncludeTotalIOsRate(Boolean &value)
{
	_includeTotalIOsRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_HIT_IOS_RATE, getIncludeWriteHitIOsRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOsRate() const
{
	return _includeWriteHitIOsRate;
}

void UNIX_BlockStatisticsManifest::setIncludeWriteHitIOsRate(Boolean &value)
{
	_includeWriteHitIOsRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOsRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_IOS_RATE, getIncludeWriteIOsRate());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOsRate() const
{
	return _includeWriteIOsRate;
}

void UNIX_BlockStatisticsManifest::setIncludeWriteIOsRate(Boolean &value)
{
	_includeWriteIOsRate = value;
}

Boolean UNIX_BlockStatisticsManifest::getRateElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_ELEMENT_TYPE, getRateElementType());
	return true;
}

Uint16 UNIX_BlockStatisticsManifest::getRateElementType() const
{
	return _rateElementType;
}

void UNIX_BlockStatisticsManifest::setRateElementType(Uint16 &value)
{
	_rateElementType = value;
}


void UNIX_BlockStatisticsManifest::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BlockStatisticsManifest");
	_generation = Uint64(0);
	_elementType = Uint16(0);
	_includeStartStatisticTime = Boolean(false);
	_includeStatisticTime = Boolean(false);
	_includeTotalIOs = Boolean(false);
	_includeKBytesTransferred = Boolean(false);
	_includeIOTimeCounter = Boolean(false);
	_includeReadIOs = Boolean(false);
	_includeReadHitIOs = Boolean(false);
	_includeReadIOTimeCounter = Boolean(false);
	_includeReadHitIOTimeCounter = Boolean(false);
	_includeKBytesRead = Boolean(false);
	_includeWriteIOs = Boolean(false);
	_includeWriteHitIOs = Boolean(false);
	_includeWriteIOTimeCounter = Boolean(false);
	_includeWriteHitIOTimeCounter = Boolean(false);
	_includeKBytesWritten = Boolean(false);
	_includeIdleTimeCounter = Boolean(false);
	_includeMaintOp = Boolean(false);
	_includeMaintTimeCounter = Boolean(false);
	_cSVSequence.clear();
	_cSVRateSequence.clear();
	_includeKBytesReadRate = Boolean(false);
	_includeKBytesTransferredRate = Boolean(false);
	_includeKBytesWrittenRate = Boolean(false);
	_includeMaintOpRate = Boolean(false);
	_includeRateIntervalEndTime = Boolean(false);
	_includeRateIntervalStartTime = Boolean(false);
	_includeReadHitIOsRate = Boolean(false);
	_includeReadIOsRate = Boolean(false);
	_includeTotalIOsRate = Boolean(false);
	_includeWriteHitIOsRate = Boolean(false);
	_includeWriteIOsRate = Boolean(false);
	_rateElementType = Uint16(0);

}

Boolean UNIX_BlockStatisticsManifest::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementType"))
			{
				Uint16 elementTypeValue;
				property.getValue().get(elementTypeValue);
				setElementType(elementTypeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeStartStatisticTime"))
			{
				Boolean includeStartStatisticTimeValue;
				property.getValue().get(includeStartStatisticTimeValue);
				setIncludeStartStatisticTime(includeStartStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeStatisticTime"))
			{
				Boolean includeStatisticTimeValue;
				property.getValue().get(includeStatisticTimeValue);
				setIncludeStatisticTime(includeStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalIOs"))
			{
				Boolean includeTotalIOsValue;
				property.getValue().get(includeTotalIOsValue);
				setIncludeTotalIOs(includeTotalIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeKBytesTransferred"))
			{
				Boolean includeKBytesTransferredValue;
				property.getValue().get(includeKBytesTransferredValue);
				setIncludeKBytesTransferred(includeKBytesTransferredValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeIOTimeCounter"))
			{
				Boolean includeIOTimeCounterValue;
				property.getValue().get(includeIOTimeCounterValue);
				setIncludeIOTimeCounter(includeIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadIOs"))
			{
				Boolean includeReadIOsValue;
				property.getValue().get(includeReadIOsValue);
				setIncludeReadIOs(includeReadIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadHitIOs"))
			{
				Boolean includeReadHitIOsValue;
				property.getValue().get(includeReadHitIOsValue);
				setIncludeReadHitIOs(includeReadHitIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadIOTimeCounter"))
			{
				Boolean includeReadIOTimeCounterValue;
				property.getValue().get(includeReadIOTimeCounterValue);
				setIncludeReadIOTimeCounter(includeReadIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadHitIOTimeCounter"))
			{
				Boolean includeReadHitIOTimeCounterValue;
				property.getValue().get(includeReadHitIOTimeCounterValue);
				setIncludeReadHitIOTimeCounter(includeReadHitIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeKBytesRead"))
			{
				Boolean includeKBytesReadValue;
				property.getValue().get(includeKBytesReadValue);
				setIncludeKBytesRead(includeKBytesReadValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteIOs"))
			{
				Boolean includeWriteIOsValue;
				property.getValue().get(includeWriteIOsValue);
				setIncludeWriteIOs(includeWriteIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteHitIOs"))
			{
				Boolean includeWriteHitIOsValue;
				property.getValue().get(includeWriteHitIOsValue);
				setIncludeWriteHitIOs(includeWriteHitIOsValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteIOTimeCounter"))
			{
				Boolean includeWriteIOTimeCounterValue;
				property.getValue().get(includeWriteIOTimeCounterValue);
				setIncludeWriteIOTimeCounter(includeWriteIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteHitIOTimeCounter"))
			{
				Boolean includeWriteHitIOTimeCounterValue;
				property.getValue().get(includeWriteHitIOTimeCounterValue);
				setIncludeWriteHitIOTimeCounter(includeWriteHitIOTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeKBytesWritten"))
			{
				Boolean includeKBytesWrittenValue;
				property.getValue().get(includeKBytesWrittenValue);
				setIncludeKBytesWritten(includeKBytesWrittenValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeIdleTimeCounter"))
			{
				Boolean includeIdleTimeCounterValue;
				property.getValue().get(includeIdleTimeCounterValue);
				setIncludeIdleTimeCounter(includeIdleTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeMaintOp"))
			{
				Boolean includeMaintOpValue;
				property.getValue().get(includeMaintOpValue);
				setIncludeMaintOp(includeMaintOpValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeMaintTimeCounter"))
			{
				Boolean includeMaintTimeCounterValue;
				property.getValue().get(includeMaintTimeCounterValue);
				setIncludeMaintTimeCounter(includeMaintTimeCounterValue);
			}
			else if (String::equal(property.getName().getString(), "CSVSequence"))
			{
				Array<String> cSVSequenceValue;
				property.getValue().get(cSVSequenceValue);
				setCSVSequence(cSVSequenceValue);
			}
			else if (String::equal(property.getName().getString(), "CSVRateSequence"))
			{
				Array<String> cSVRateSequenceValue;
				property.getValue().get(cSVRateSequenceValue);
				setCSVRateSequence(cSVRateSequenceValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeKBytesReadRate"))
			{
				Boolean includeKBytesReadRateValue;
				property.getValue().get(includeKBytesReadRateValue);
				setIncludeKBytesReadRate(includeKBytesReadRateValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeKBytesTransferredRate"))
			{
				Boolean includeKBytesTransferredRateValue;
				property.getValue().get(includeKBytesTransferredRateValue);
				setIncludeKBytesTransferredRate(includeKBytesTransferredRateValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeKBytesWrittenRate"))
			{
				Boolean includeKBytesWrittenRateValue;
				property.getValue().get(includeKBytesWrittenRateValue);
				setIncludeKBytesWrittenRate(includeKBytesWrittenRateValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeMaintOpRate"))
			{
				Boolean includeMaintOpRateValue;
				property.getValue().get(includeMaintOpRateValue);
				setIncludeMaintOpRate(includeMaintOpRateValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeRateIntervalEndTime"))
			{
				Boolean includeRateIntervalEndTimeValue;
				property.getValue().get(includeRateIntervalEndTimeValue);
				setIncludeRateIntervalEndTime(includeRateIntervalEndTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeRateIntervalStartTime"))
			{
				Boolean includeRateIntervalStartTimeValue;
				property.getValue().get(includeRateIntervalStartTimeValue);
				setIncludeRateIntervalStartTime(includeRateIntervalStartTimeValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadHitIOsRate"))
			{
				Boolean includeReadHitIOsRateValue;
				property.getValue().get(includeReadHitIOsRateValue);
				setIncludeReadHitIOsRate(includeReadHitIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeReadIOsRate"))
			{
				Boolean includeReadIOsRateValue;
				property.getValue().get(includeReadIOsRateValue);
				setIncludeReadIOsRate(includeReadIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeTotalIOsRate"))
			{
				Boolean includeTotalIOsRateValue;
				property.getValue().get(includeTotalIOsRateValue);
				setIncludeTotalIOsRate(includeTotalIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteHitIOsRate"))
			{
				Boolean includeWriteHitIOsRateValue;
				property.getValue().get(includeWriteHitIOsRateValue);
				setIncludeWriteHitIOsRate(includeWriteHitIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "IncludeWriteIOsRate"))
			{
				Boolean includeWriteIOsRateValue;
				property.getValue().get(includeWriteIOsRateValue);
				setIncludeWriteIOsRate(includeWriteIOsRateValue);
			}
			else if (String::equal(property.getName().getString(), "RateElementType"))
			{
				Uint16 rateElementTypeValue;
				property.getValue().get(rateElementTypeValue);
				setRateElementType(rateElementTypeValue);
			}
	}
	return true;
}


Boolean UNIX_BlockStatisticsManifest::initialize()
{
	return false;
}

Boolean UNIX_BlockStatisticsManifest::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BlockStatisticsManifest");
	_generation = Uint64(0);
	_elementType = Uint16(0);
	_includeStartStatisticTime = Boolean(false);
	_includeStatisticTime = Boolean(false);
	_includeTotalIOs = Boolean(false);
	_includeKBytesTransferred = Boolean(false);
	_includeIOTimeCounter = Boolean(false);
	_includeReadIOs = Boolean(false);
	_includeReadHitIOs = Boolean(false);
	_includeReadIOTimeCounter = Boolean(false);
	_includeReadHitIOTimeCounter = Boolean(false);
	_includeKBytesRead = Boolean(false);
	_includeWriteIOs = Boolean(false);
	_includeWriteHitIOs = Boolean(false);
	_includeWriteIOTimeCounter = Boolean(false);
	_includeWriteHitIOTimeCounter = Boolean(false);
	_includeKBytesWritten = Boolean(false);
	_includeIdleTimeCounter = Boolean(false);
	_includeMaintOp = Boolean(false);
	_includeMaintTimeCounter = Boolean(false);
	_cSVSequence.clear();
	_cSVRateSequence.clear();
	_includeKBytesReadRate = Boolean(false);
	_includeKBytesTransferredRate = Boolean(false);
	_includeKBytesWrittenRate = Boolean(false);
	_includeMaintOpRate = Boolean(false);
	_includeRateIntervalEndTime = Boolean(false);
	_includeRateIntervalStartTime = Boolean(false);
	_includeReadHitIOsRate = Boolean(false);
	_includeReadIOsRate = Boolean(false);
	_includeTotalIOsRate = Boolean(false);
	_includeWriteHitIOsRate = Boolean(false);
	_includeWriteIOsRate = Boolean(false);
	_rateElementType = Uint16(0);
	
	return false;
}

Boolean UNIX_BlockStatisticsManifest::finalize()
{
	return false;
}


Boolean UNIX_BlockStatisticsManifest::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BlockStatisticsManifest::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStatisticsManifest::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStatisticsManifest::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStatisticsManifest::validateInstance()
{
	return true;
}

