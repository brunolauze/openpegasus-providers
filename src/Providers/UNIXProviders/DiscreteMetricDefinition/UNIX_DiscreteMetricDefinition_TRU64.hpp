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


UNIX_DiscreteMetricDefinition::UNIX_DiscreteMetricDefinition(void)
{
}

UNIX_DiscreteMetricDefinition::~UNIX_DiscreteMetricDefinition(void)
{
}

Boolean UNIX_DiscreteMetricDefinition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiscreteMetricDefinition::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiscreteMetricDefinition::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiscreteMetricDefinition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiscreteMetricDefinition::getCaption() const
{
	return _caption;
}

void UNIX_DiscreteMetricDefinition::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiscreteMetricDefinition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiscreteMetricDefinition::getDescription() const
{
	return _description;
}

void UNIX_DiscreteMetricDefinition::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiscreteMetricDefinition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiscreteMetricDefinition::getElementName() const
{
	return _elementName;
}

void UNIX_DiscreteMetricDefinition::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiscreteMetricDefinition::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiscreteMetricDefinition::getGeneration() const
{
	return _generation;
}

void UNIX_DiscreteMetricDefinition::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiscreteMetricDefinition::getId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID, getId());
	return true;
}

String UNIX_DiscreteMetricDefinition::getId() const
{
	return _id;
}

void UNIX_DiscreteMetricDefinition::setId(String &value)
{
	_id = value;
}

Boolean UNIX_DiscreteMetricDefinition::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DiscreteMetricDefinition::getName() const
{
	return _name;
}

void UNIX_DiscreteMetricDefinition::setName(String &value)
{
	_name = value;
}

Boolean UNIX_DiscreteMetricDefinition::getDataType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_TYPE, getDataType());
	return true;
}

Uint16 UNIX_DiscreteMetricDefinition::getDataType() const
{
	return _dataType;
}

void UNIX_DiscreteMetricDefinition::setDataType(Uint16 &value)
{
	_dataType = value;
}

Boolean UNIX_DiscreteMetricDefinition::getCalculable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALCULABLE, getCalculable());
	return true;
}

Uint16 UNIX_DiscreteMetricDefinition::getCalculable() const
{
	return _calculable;
}

void UNIX_DiscreteMetricDefinition::setCalculable(Uint16 &value)
{
	_calculable = value;
}

Boolean UNIX_DiscreteMetricDefinition::getUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS, getUnits());
	return true;
}

String UNIX_DiscreteMetricDefinition::getUnits() const
{
	return _units;
}

void UNIX_DiscreteMetricDefinition::setUnits(String &value)
{
	_units = value;
}

Boolean UNIX_DiscreteMetricDefinition::getProgrammaticUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRAMMATIC_UNITS, getProgrammaticUnits());
	return true;
}

String UNIX_DiscreteMetricDefinition::getProgrammaticUnits() const
{
	return _programmaticUnits;
}

void UNIX_DiscreteMetricDefinition::setProgrammaticUnits(String &value)
{
	_programmaticUnits = value;
}

Boolean UNIX_DiscreteMetricDefinition::getBreakdownDimensions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREAKDOWN_DIMENSIONS, getBreakdownDimensions());
	return true;
}

Array<String> UNIX_DiscreteMetricDefinition::getBreakdownDimensions() const
{
	return _breakdownDimensions;
}

void UNIX_DiscreteMetricDefinition::setBreakdownDimensions(Array<String> &value)
{
	_breakdownDimensions = value;
}

Boolean UNIX_DiscreteMetricDefinition::getIsContinuous(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONTINUOUS, getIsContinuous());
	return true;
}

Boolean UNIX_DiscreteMetricDefinition::getIsContinuous() const
{
	return _isContinuous;
}

void UNIX_DiscreteMetricDefinition::setIsContinuous(Boolean &value)
{
	_isContinuous = value;
}

Boolean UNIX_DiscreteMetricDefinition::getChangeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGE_TYPE, getChangeType());
	return true;
}

Uint16 UNIX_DiscreteMetricDefinition::getChangeType() const
{
	return _changeType;
}

void UNIX_DiscreteMetricDefinition::setChangeType(Uint16 &value)
{
	_changeType = value;
}

Boolean UNIX_DiscreteMetricDefinition::getTimeScope(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SCOPE, getTimeScope());
	return true;
}

Uint16 UNIX_DiscreteMetricDefinition::getTimeScope() const
{
	return _timeScope;
}

void UNIX_DiscreteMetricDefinition::setTimeScope(Uint16 &value)
{
	_timeScope = value;
}

Boolean UNIX_DiscreteMetricDefinition::getGatheringType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATHERING_TYPE, getGatheringType());
	return true;
}

Uint16 UNIX_DiscreteMetricDefinition::getGatheringType() const
{
	return _gatheringType;
}

void UNIX_DiscreteMetricDefinition::setGatheringType(Uint16 &value)
{
	_gatheringType = value;
}

Boolean UNIX_DiscreteMetricDefinition::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_DiscreteMetricDefinition::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_DiscreteMetricDefinition::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_DiscreteMetricDefinition::getAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY, getAccuracy());
	return true;
}

Uint32 UNIX_DiscreteMetricDefinition::getAccuracy() const
{
	return _accuracy;
}

void UNIX_DiscreteMetricDefinition::setAccuracy(Uint32 &value)
{
	_accuracy = value;
}

Boolean UNIX_DiscreteMetricDefinition::getAccuracyUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY_UNITS, getAccuracyUnits());
	return true;
}

String UNIX_DiscreteMetricDefinition::getAccuracyUnits() const
{
	return _accuracyUnits;
}

void UNIX_DiscreteMetricDefinition::setAccuracyUnits(String &value)
{
	_accuracyUnits = value;
}

Boolean UNIX_DiscreteMetricDefinition::getMetricID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METRIC_ID, getMetricID());
	return true;
}

String UNIX_DiscreteMetricDefinition::getMetricID() const
{
	return _metricID;
}

void UNIX_DiscreteMetricDefinition::setMetricID(String &value)
{
	_metricID = value;
}

Boolean UNIX_DiscreteMetricDefinition::getDiscreteValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISCRETE_VALUES, getDiscreteValues());
	return true;
}

Array<Uint16> UNIX_DiscreteMetricDefinition::getDiscreteValues() const
{
	return _discreteValues;
}

void UNIX_DiscreteMetricDefinition::setDiscreteValues(Array<Uint16> &value)
{
	_discreteValues = value;
}

Boolean UNIX_DiscreteMetricDefinition::getBaseIndex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_INDEX, getBaseIndex());
	return true;
}

Uint16 UNIX_DiscreteMetricDefinition::getBaseIndex() const
{
	return _baseIndex;
}

void UNIX_DiscreteMetricDefinition::setBaseIndex(Uint16 &value)
{
	_baseIndex = value;
}

Boolean UNIX_DiscreteMetricDefinition::getAnalogTriggerValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANALOG_TRIGGER_VALUES, getAnalogTriggerValues());
	return true;
}

Array<String> UNIX_DiscreteMetricDefinition::getAnalogTriggerValues() const
{
	return _analogTriggerValues;
}

void UNIX_DiscreteMetricDefinition::setAnalogTriggerValues(Array<String> &value)
{
	_analogTriggerValues = value;
}

Boolean UNIX_DiscreteMetricDefinition::getAnalogResetValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANALOG_RESET_VALUES, getAnalogResetValues());
	return true;
}

Array<String> UNIX_DiscreteMetricDefinition::getAnalogResetValues() const
{
	return _analogResetValues;
}

void UNIX_DiscreteMetricDefinition::setAnalogResetValues(Array<String> &value)
{
	_analogResetValues = value;
}


void UNIX_DiscreteMetricDefinition::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiscreteMetricDefinition");
	_generation = Uint64(0);
	_id = String ("");
	_name = String ("");
	_dataType = Uint16(0);
	_calculable = Uint16(0);
	_units = String ("");
	_programmaticUnits = String ("");
	_breakdownDimensions.clear();
	_isContinuous = Boolean(false);
	_changeType = Uint16(0);
	_timeScope = Uint16(0);
	_gatheringType = Uint16(0);
	_sampleInterval = CIMHelper::getCurrentTime();
	_accuracy = Uint32(0);
	_accuracyUnits = String ("");
	_metricID = String ("");
	_discreteValues.clear();
	_baseIndex = Uint16(0);
	_analogTriggerValues.clear();
	_analogResetValues.clear();

}

Boolean UNIX_DiscreteMetricDefinition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Id"))
			{
				String idValue;
				property.getValue().get(idValue);
				setId(idValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "DataType"))
			{
				Uint16 dataTypeValue;
				property.getValue().get(dataTypeValue);
				setDataType(dataTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Calculable"))
			{
				Uint16 calculableValue;
				property.getValue().get(calculableValue);
				setCalculable(calculableValue);
			}
			else if (String::equal(property.getName().getString(), "Units"))
			{
				String unitsValue;
				property.getValue().get(unitsValue);
				setUnits(unitsValue);
			}
			else if (String::equal(property.getName().getString(), "ProgrammaticUnits"))
			{
				String programmaticUnitsValue;
				property.getValue().get(programmaticUnitsValue);
				setProgrammaticUnits(programmaticUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "BreakdownDimensions"))
			{
				Array<String> breakdownDimensionsValue;
				property.getValue().get(breakdownDimensionsValue);
				setBreakdownDimensions(breakdownDimensionsValue);
			}
			else if (String::equal(property.getName().getString(), "IsContinuous"))
			{
				Boolean isContinuousValue;
				property.getValue().get(isContinuousValue);
				setIsContinuous(isContinuousValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeType"))
			{
				Uint16 changeTypeValue;
				property.getValue().get(changeTypeValue);
				setChangeType(changeTypeValue);
			}
			else if (String::equal(property.getName().getString(), "TimeScope"))
			{
				Uint16 timeScopeValue;
				property.getValue().get(timeScopeValue);
				setTimeScope(timeScopeValue);
			}
			else if (String::equal(property.getName().getString(), "GatheringType"))
			{
				Uint16 gatheringTypeValue;
				property.getValue().get(gatheringTypeValue);
				setGatheringType(gatheringTypeValue);
			}
			else if (String::equal(property.getName().getString(), "SampleInterval"))
			{
				CIMDateTime sampleIntervalValue;
				property.getValue().get(sampleIntervalValue);
				setSampleInterval(sampleIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "Accuracy"))
			{
				Uint32 accuracyValue;
				property.getValue().get(accuracyValue);
				setAccuracy(accuracyValue);
			}
			else if (String::equal(property.getName().getString(), "AccuracyUnits"))
			{
				String accuracyUnitsValue;
				property.getValue().get(accuracyUnitsValue);
				setAccuracyUnits(accuracyUnitsValue);
			}
			else if (String::equal(property.getName().getString(), "MetricID"))
			{
				String metricIDValue;
				property.getValue().get(metricIDValue);
				setMetricID(metricIDValue);
			}
			else if (String::equal(property.getName().getString(), "DiscreteValues"))
			{
				Array<Uint16> discreteValuesValue;
				property.getValue().get(discreteValuesValue);
				setDiscreteValues(discreteValuesValue);
			}
			else if (String::equal(property.getName().getString(), "BaseIndex"))
			{
				Uint16 baseIndexValue;
				property.getValue().get(baseIndexValue);
				setBaseIndex(baseIndexValue);
			}
			else if (String::equal(property.getName().getString(), "AnalogTriggerValues"))
			{
				Array<String> analogTriggerValuesValue;
				property.getValue().get(analogTriggerValuesValue);
				setAnalogTriggerValues(analogTriggerValuesValue);
			}
			else if (String::equal(property.getName().getString(), "AnalogResetValues"))
			{
				Array<String> analogResetValuesValue;
				property.getValue().get(analogResetValuesValue);
				setAnalogResetValues(analogResetValuesValue);
			}
	}
	return true;
}


Boolean UNIX_DiscreteMetricDefinition::initialize()
{
	return false;
}

Boolean UNIX_DiscreteMetricDefinition::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiscreteMetricDefinition");
	_generation = Uint64(0);
	_id = String ("");
	_name = String ("");
	_dataType = Uint16(0);
	_calculable = Uint16(0);
	_units = String ("");
	_programmaticUnits = String ("");
	_breakdownDimensions.clear();
	_isContinuous = Boolean(false);
	_changeType = Uint16(0);
	_timeScope = Uint16(0);
	_gatheringType = Uint16(0);
	_sampleInterval = CIMHelper::getCurrentTime();
	_accuracy = Uint32(0);
	_accuracyUnits = String ("");
	_metricID = String ("");
	_discreteValues.clear();
	_baseIndex = Uint16(0);
	_analogTriggerValues.clear();
	_analogResetValues.clear();
	
	return false;
}

Boolean UNIX_DiscreteMetricDefinition::finalize()
{
	return false;
}

Boolean UNIX_DiscreteMetricDefinition::loadByName(const String name)
{
	return false;
}

Boolean UNIX_DiscreteMetricDefinition::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String idKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ID)) idKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getId(), idKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DiscreteMetricDefinition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiscreteMetricDefinition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiscreteMetricDefinition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiscreteMetricDefinition::validateInstance()
{
	return true;
}

