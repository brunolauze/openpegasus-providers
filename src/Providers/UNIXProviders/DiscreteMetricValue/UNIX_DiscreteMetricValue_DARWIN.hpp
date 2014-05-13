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


UNIX_DiscreteMetricValue::UNIX_DiscreteMetricValue(void)
{
}

UNIX_DiscreteMetricValue::~UNIX_DiscreteMetricValue(void)
{
}

Boolean UNIX_DiscreteMetricValue::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiscreteMetricValue::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiscreteMetricValue::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiscreteMetricValue::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiscreteMetricValue::getCaption() const
{
	return _caption;
}

void UNIX_DiscreteMetricValue::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiscreteMetricValue::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiscreteMetricValue::getDescription() const
{
	return _description;
}

void UNIX_DiscreteMetricValue::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiscreteMetricValue::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiscreteMetricValue::getElementName() const
{
	return _elementName;
}

void UNIX_DiscreteMetricValue::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiscreteMetricValue::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiscreteMetricValue::getGeneration() const
{
	return _generation;
}

void UNIX_DiscreteMetricValue::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiscreteMetricValue::getMetricDefinitionId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METRIC_DEFINITION_ID, getMetricDefinitionId());
	return true;
}

String UNIX_DiscreteMetricValue::getMetricDefinitionId() const
{
	return _metricDefinitionId;
}

void UNIX_DiscreteMetricValue::setMetricDefinitionId(String &value)
{
	_metricDefinitionId = value;
}

Boolean UNIX_DiscreteMetricValue::getMeasuredElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEASURED_ELEMENT_NAME, getMeasuredElementName());
	return true;
}

String UNIX_DiscreteMetricValue::getMeasuredElementName() const
{
	return _measuredElementName;
}

void UNIX_DiscreteMetricValue::setMeasuredElementName(String &value)
{
	_measuredElementName = value;
}

Boolean UNIX_DiscreteMetricValue::getTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_STAMP, getTimeStamp());
	return true;
}

CIMDateTime UNIX_DiscreteMetricValue::getTimeStamp() const
{
	return _timeStamp;
}

void UNIX_DiscreteMetricValue::setTimeStamp(CIMDateTime &value)
{
	_timeStamp = value;
}

Boolean UNIX_DiscreteMetricValue::getDuration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DURATION, getDuration());
	return true;
}

CIMDateTime UNIX_DiscreteMetricValue::getDuration() const
{
	return _duration;
}

void UNIX_DiscreteMetricValue::setDuration(CIMDateTime &value)
{
	_duration = value;
}

Boolean UNIX_DiscreteMetricValue::getMetricValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METRIC_VALUE, getMetricValue());
	return true;
}

String UNIX_DiscreteMetricValue::getMetricValue() const
{
	return _metricValue;
}

void UNIX_DiscreteMetricValue::setMetricValue(String &value)
{
	_metricValue = value;
}

Boolean UNIX_DiscreteMetricValue::getBreakdownDimension(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREAKDOWN_DIMENSION, getBreakdownDimension());
	return true;
}

String UNIX_DiscreteMetricValue::getBreakdownDimension() const
{
	return _breakdownDimension;
}

void UNIX_DiscreteMetricValue::setBreakdownDimension(String &value)
{
	_breakdownDimension = value;
}

Boolean UNIX_DiscreteMetricValue::getBreakdownValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREAKDOWN_VALUE, getBreakdownValue());
	return true;
}

String UNIX_DiscreteMetricValue::getBreakdownValue() const
{
	return _breakdownValue;
}

void UNIX_DiscreteMetricValue::setBreakdownValue(String &value)
{
	_breakdownValue = value;
}

Boolean UNIX_DiscreteMetricValue::getVolatile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VOLATILE, getVolatile());
	return true;
}

Boolean UNIX_DiscreteMetricValue::getVolatile() const
{
	return _volatile;
}

void UNIX_DiscreteMetricValue::setVolatile(Boolean &value)
{
	_volatile = value;
}

Boolean UNIX_DiscreteMetricValue::getDiscreteValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISCRETE_VALUE, getDiscreteValue());
	return true;
}

Uint16 UNIX_DiscreteMetricValue::getDiscreteValue() const
{
	return _discreteValue;
}

void UNIX_DiscreteMetricValue::setDiscreteValue(Uint16 &value)
{
	_discreteValue = value;
}


void UNIX_DiscreteMetricValue::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiscreteMetricValue");
	_generation = Uint64(0);
	_metricDefinitionId = String ("");
	_measuredElementName = String ("");
	_timeStamp = CIMHelper::getCurrentTime();
	_duration = CIMHelper::getCurrentTime();
	_metricValue = String ("");
	_breakdownDimension = String ("");
	_breakdownValue = String ("");
	_volatile = Boolean(false);
	_discreteValue = Uint16(0);

}

Boolean UNIX_DiscreteMetricValue::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MetricDefinitionId"))
			{
				String metricDefinitionIdValue;
				property.getValue().get(metricDefinitionIdValue);
				setMetricDefinitionId(metricDefinitionIdValue);
			}
			else if (String::equal(property.getName().getString(), "MeasuredElementName"))
			{
				String measuredElementNameValue;
				property.getValue().get(measuredElementNameValue);
				setMeasuredElementName(measuredElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "TimeStamp"))
			{
				CIMDateTime timeStampValue;
				property.getValue().get(timeStampValue);
				setTimeStamp(timeStampValue);
			}
			else if (String::equal(property.getName().getString(), "Duration"))
			{
				CIMDateTime durationValue;
				property.getValue().get(durationValue);
				setDuration(durationValue);
			}
			else if (String::equal(property.getName().getString(), "MetricValue"))
			{
				String metricValueValue;
				property.getValue().get(metricValueValue);
				setMetricValue(metricValueValue);
			}
			else if (String::equal(property.getName().getString(), "BreakdownDimension"))
			{
				String breakdownDimensionValue;
				property.getValue().get(breakdownDimensionValue);
				setBreakdownDimension(breakdownDimensionValue);
			}
			else if (String::equal(property.getName().getString(), "BreakdownValue"))
			{
				String breakdownValueValue;
				property.getValue().get(breakdownValueValue);
				setBreakdownValue(breakdownValueValue);
			}
			else if (String::equal(property.getName().getString(), "Volatile"))
			{
				Boolean volatileValue;
				property.getValue().get(volatileValue);
				setVolatile(volatileValue);
			}
			else if (String::equal(property.getName().getString(), "DiscreteValue"))
			{
				Uint16 discreteValueValue;
				property.getValue().get(discreteValueValue);
				setDiscreteValue(discreteValueValue);
			}
	}
	return true;
}


Boolean UNIX_DiscreteMetricValue::initialize()
{
	return false;
}

Boolean UNIX_DiscreteMetricValue::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiscreteMetricValue");
	_generation = Uint64(0);
	_metricDefinitionId = String ("");
	_measuredElementName = String ("");
	_timeStamp = CIMHelper::getCurrentTime();
	_duration = CIMHelper::getCurrentTime();
	_metricValue = String ("");
	_breakdownDimension = String ("");
	_breakdownValue = String ("");
	_volatile = Boolean(false);
	_discreteValue = Uint16(0);
	
	return false;
}

Boolean UNIX_DiscreteMetricValue::finalize()
{
	return false;
}


Boolean UNIX_DiscreteMetricValue::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiscreteMetricValue::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiscreteMetricValue::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiscreteMetricValue::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiscreteMetricValue::validateInstance()
{
	return true;
}

