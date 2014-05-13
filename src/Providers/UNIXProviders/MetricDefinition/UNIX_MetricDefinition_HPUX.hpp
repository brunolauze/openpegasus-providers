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


UNIX_MetricDefinition::UNIX_MetricDefinition(void)
{
}

UNIX_MetricDefinition::~UNIX_MetricDefinition(void)
{
}

Boolean UNIX_MetricDefinition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MetricDefinition::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MetricDefinition::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MetricDefinition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MetricDefinition::getCaption() const
{
	return _caption;
}

void UNIX_MetricDefinition::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MetricDefinition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MetricDefinition::getDescription() const
{
	return _description;
}

void UNIX_MetricDefinition::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MetricDefinition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MetricDefinition::getElementName() const
{
	return _elementName;
}

void UNIX_MetricDefinition::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MetricDefinition::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MetricDefinition::getGeneration() const
{
	return _generation;
}

void UNIX_MetricDefinition::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MetricDefinition::getId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID, getId());
	return true;
}

String UNIX_MetricDefinition::getId() const
{
	return _id;
}

void UNIX_MetricDefinition::setId(String &value)
{
	_id = value;
}

Boolean UNIX_MetricDefinition::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MetricDefinition::getName() const
{
	return _name;
}

void UNIX_MetricDefinition::setName(String &value)
{
	_name = value;
}

Boolean UNIX_MetricDefinition::getDataType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_TYPE, getDataType());
	return true;
}

Uint16 UNIX_MetricDefinition::getDataType() const
{
	return _dataType;
}

void UNIX_MetricDefinition::setDataType(Uint16 &value)
{
	_dataType = value;
}

Boolean UNIX_MetricDefinition::getCalculable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALCULABLE, getCalculable());
	return true;
}

Uint16 UNIX_MetricDefinition::getCalculable() const
{
	return _calculable;
}

void UNIX_MetricDefinition::setCalculable(Uint16 &value)
{
	_calculable = value;
}

Boolean UNIX_MetricDefinition::getUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS, getUnits());
	return true;
}

String UNIX_MetricDefinition::getUnits() const
{
	return _units;
}

void UNIX_MetricDefinition::setUnits(String &value)
{
	_units = value;
}

Boolean UNIX_MetricDefinition::getProgrammaticUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRAMMATIC_UNITS, getProgrammaticUnits());
	return true;
}

String UNIX_MetricDefinition::getProgrammaticUnits() const
{
	return _programmaticUnits;
}

void UNIX_MetricDefinition::setProgrammaticUnits(String &value)
{
	_programmaticUnits = value;
}

Boolean UNIX_MetricDefinition::getBreakdownDimensions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREAKDOWN_DIMENSIONS, getBreakdownDimensions());
	return true;
}

Array<String> UNIX_MetricDefinition::getBreakdownDimensions() const
{
	return _breakdownDimensions;
}

void UNIX_MetricDefinition::setBreakdownDimensions(Array<String> &value)
{
	_breakdownDimensions = value;
}

Boolean UNIX_MetricDefinition::getIsContinuous(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONTINUOUS, getIsContinuous());
	return true;
}

Boolean UNIX_MetricDefinition::getIsContinuous() const
{
	return _isContinuous;
}

void UNIX_MetricDefinition::setIsContinuous(Boolean &value)
{
	_isContinuous = value;
}

Boolean UNIX_MetricDefinition::getChangeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGE_TYPE, getChangeType());
	return true;
}

Uint16 UNIX_MetricDefinition::getChangeType() const
{
	return _changeType;
}

void UNIX_MetricDefinition::setChangeType(Uint16 &value)
{
	_changeType = value;
}

Boolean UNIX_MetricDefinition::getTimeScope(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SCOPE, getTimeScope());
	return true;
}

Uint16 UNIX_MetricDefinition::getTimeScope() const
{
	return _timeScope;
}

void UNIX_MetricDefinition::setTimeScope(Uint16 &value)
{
	_timeScope = value;
}

Boolean UNIX_MetricDefinition::getGatheringType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATHERING_TYPE, getGatheringType());
	return true;
}

Uint16 UNIX_MetricDefinition::getGatheringType() const
{
	return _gatheringType;
}

void UNIX_MetricDefinition::setGatheringType(Uint16 &value)
{
	_gatheringType = value;
}

Boolean UNIX_MetricDefinition::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_MetricDefinition::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_MetricDefinition::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_MetricDefinition::getAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY, getAccuracy());
	return true;
}

Uint32 UNIX_MetricDefinition::getAccuracy() const
{
	return _accuracy;
}

void UNIX_MetricDefinition::setAccuracy(Uint32 &value)
{
	_accuracy = value;
}

Boolean UNIX_MetricDefinition::getAccuracyUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY_UNITS, getAccuracyUnits());
	return true;
}

String UNIX_MetricDefinition::getAccuracyUnits() const
{
	return _accuracyUnits;
}

void UNIX_MetricDefinition::setAccuracyUnits(String &value)
{
	_accuracyUnits = value;
}

Boolean UNIX_MetricDefinition::getMetricID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METRIC_ID, getMetricID());
	return true;
}

String UNIX_MetricDefinition::getMetricID() const
{
	return _metricID;
}

void UNIX_MetricDefinition::setMetricID(String &value)
{
	_metricID = value;
}

Boolean UNIX_MetricDefinition::getValidity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALIDITY, getValidity());
	return true;
}

Uint16 UNIX_MetricDefinition::getValidity() const
{
	return _validity;
}

void UNIX_MetricDefinition::setValidity(Uint16 &value)
{
	_validity = value;
}


void UNIX_MetricDefinition::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MetricDefinition");
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
	_validity = Uint16(0);

}

Boolean UNIX_MetricDefinition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Validity"))
			{
				Uint16 validityValue;
				property.getValue().get(validityValue);
				setValidity(validityValue);
			}
	}
	return true;
}


Boolean UNIX_MetricDefinition::initialize()
{
	return false;
}

Boolean UNIX_MetricDefinition::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MetricDefinition");
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
	_validity = Uint16(0);
	
	return false;
}

Boolean UNIX_MetricDefinition::finalize()
{
	return false;
}

Boolean UNIX_MetricDefinition::loadByName(const String name)
{
	return false;
}

Boolean UNIX_MetricDefinition::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MetricDefinition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MetricDefinition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MetricDefinition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MetricDefinition::validateInstance()
{
	return true;
}

