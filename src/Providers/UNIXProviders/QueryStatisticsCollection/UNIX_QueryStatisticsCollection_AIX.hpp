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


UNIX_QueryStatisticsCollection::UNIX_QueryStatisticsCollection(void)
{
}

UNIX_QueryStatisticsCollection::~UNIX_QueryStatisticsCollection(void)
{
}

Boolean UNIX_QueryStatisticsCollection::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_QueryStatisticsCollection::getInstanceID() const
{
	return _instanceID;
}

void UNIX_QueryStatisticsCollection::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_QueryStatisticsCollection::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_QueryStatisticsCollection::getCaption() const
{
	return _caption;
}

void UNIX_QueryStatisticsCollection::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_QueryStatisticsCollection::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_QueryStatisticsCollection::getDescription() const
{
	return _description;
}

void UNIX_QueryStatisticsCollection::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_QueryStatisticsCollection::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_QueryStatisticsCollection::getElementName() const
{
	return _elementName;
}

void UNIX_QueryStatisticsCollection::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_QueryStatisticsCollection::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_QueryStatisticsCollection::getGeneration() const
{
	return _generation;
}

void UNIX_QueryStatisticsCollection::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_QueryStatisticsCollection::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_QueryStatisticsCollection::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_QueryStatisticsCollection::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_QueryStatisticsCollection::getTimeLastSampled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_LAST_SAMPLED, getTimeLastSampled());
	return true;
}

CIMDateTime UNIX_QueryStatisticsCollection::getTimeLastSampled() const
{
	return _timeLastSampled;
}

void UNIX_QueryStatisticsCollection::setTimeLastSampled(CIMDateTime &value)
{
	_timeLastSampled = value;
}

Boolean UNIX_QueryStatisticsCollection::getQuery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY, getQuery());
	return true;
}

String UNIX_QueryStatisticsCollection::getQuery() const
{
	return _query;
}

void UNIX_QueryStatisticsCollection::setQuery(String &value)
{
	_query = value;
}

Boolean UNIX_QueryStatisticsCollection::getQueryLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_LANGUAGE, getQueryLanguage());
	return true;
}

Uint16 UNIX_QueryStatisticsCollection::getQueryLanguage() const
{
	return _queryLanguage;
}

void UNIX_QueryStatisticsCollection::setQueryLanguage(Uint16 &value)
{
	_queryLanguage = value;
}

Boolean UNIX_QueryStatisticsCollection::getSelectedEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELECTED_ENCODING, getSelectedEncoding());
	return true;
}

Uint16 UNIX_QueryStatisticsCollection::getSelectedEncoding() const
{
	return _selectedEncoding;
}

void UNIX_QueryStatisticsCollection::setSelectedEncoding(Uint16 &value)
{
	_selectedEncoding = value;
}

Boolean UNIX_QueryStatisticsCollection::getSelectedNames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELECTED_NAMES, getSelectedNames());
	return true;
}

String UNIX_QueryStatisticsCollection::getSelectedNames() const
{
	return _selectedNames;
}

void UNIX_QueryStatisticsCollection::setSelectedNames(String &value)
{
	_selectedNames = value;
}

Boolean UNIX_QueryStatisticsCollection::getSelectedTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELECTED_TYPES, getSelectedTypes());
	return true;
}

String UNIX_QueryStatisticsCollection::getSelectedTypes() const
{
	return _selectedTypes;
}

void UNIX_QueryStatisticsCollection::setSelectedTypes(String &value)
{
	_selectedTypes = value;
}

Boolean UNIX_QueryStatisticsCollection::getSelectedValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELECTED_VALUES, getSelectedValues());
	return true;
}

String UNIX_QueryStatisticsCollection::getSelectedValues() const
{
	return _selectedValues;
}

void UNIX_QueryStatisticsCollection::setSelectedValues(String &value)
{
	_selectedValues = value;
}

Boolean UNIX_QueryStatisticsCollection::getSelectedRateNames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELECTED_RATE_NAMES, getSelectedRateNames());
	return true;
}

String UNIX_QueryStatisticsCollection::getSelectedRateNames() const
{
	return _selectedRateNames;
}

void UNIX_QueryStatisticsCollection::setSelectedRateNames(String &value)
{
	_selectedRateNames = value;
}

Boolean UNIX_QueryStatisticsCollection::getSelectedRateTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELECTED_RATE_TYPES, getSelectedRateTypes());
	return true;
}

String UNIX_QueryStatisticsCollection::getSelectedRateTypes() const
{
	return _selectedRateTypes;
}

void UNIX_QueryStatisticsCollection::setSelectedRateTypes(String &value)
{
	_selectedRateTypes = value;
}

Boolean UNIX_QueryStatisticsCollection::getSelectedRateValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELECTED_RATE_VALUES, getSelectedRateValues());
	return true;
}

String UNIX_QueryStatisticsCollection::getSelectedRateValues() const
{
	return _selectedRateValues;
}

void UNIX_QueryStatisticsCollection::setSelectedRateValues(String &value)
{
	_selectedRateValues = value;
}


void UNIX_QueryStatisticsCollection::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QueryStatisticsCollection");
	_generation = Uint64(0);
	_sampleInterval = CIMHelper::getCurrentTime();
	_timeLastSampled = CIMHelper::getCurrentTime();
	_query = String ("");
	_queryLanguage = Uint16(0);
	_selectedEncoding = Uint16(0);
	_selectedNames = String ("");
	_selectedTypes = String ("");
	_selectedValues = String ("");
	_selectedRateNames = String ("");
	_selectedRateTypes = String ("");
	_selectedRateValues = String ("");

}

Boolean UNIX_QueryStatisticsCollection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SampleInterval"))
			{
				CIMDateTime sampleIntervalValue;
				property.getValue().get(sampleIntervalValue);
				setSampleInterval(sampleIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "TimeLastSampled"))
			{
				CIMDateTime timeLastSampledValue;
				property.getValue().get(timeLastSampledValue);
				setTimeLastSampled(timeLastSampledValue);
			}
			else if (String::equal(property.getName().getString(), "Query"))
			{
				String queryValue;
				property.getValue().get(queryValue);
				setQuery(queryValue);
			}
			else if (String::equal(property.getName().getString(), "QueryLanguage"))
			{
				Uint16 queryLanguageValue;
				property.getValue().get(queryLanguageValue);
				setQueryLanguage(queryLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "SelectedEncoding"))
			{
				Uint16 selectedEncodingValue;
				property.getValue().get(selectedEncodingValue);
				setSelectedEncoding(selectedEncodingValue);
			}
			else if (String::equal(property.getName().getString(), "SelectedNames"))
			{
				String selectedNamesValue;
				property.getValue().get(selectedNamesValue);
				setSelectedNames(selectedNamesValue);
			}
			else if (String::equal(property.getName().getString(), "SelectedTypes"))
			{
				String selectedTypesValue;
				property.getValue().get(selectedTypesValue);
				setSelectedTypes(selectedTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SelectedValues"))
			{
				String selectedValuesValue;
				property.getValue().get(selectedValuesValue);
				setSelectedValues(selectedValuesValue);
			}
			else if (String::equal(property.getName().getString(), "SelectedRateNames"))
			{
				String selectedRateNamesValue;
				property.getValue().get(selectedRateNamesValue);
				setSelectedRateNames(selectedRateNamesValue);
			}
			else if (String::equal(property.getName().getString(), "SelectedRateTypes"))
			{
				String selectedRateTypesValue;
				property.getValue().get(selectedRateTypesValue);
				setSelectedRateTypes(selectedRateTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SelectedRateValues"))
			{
				String selectedRateValuesValue;
				property.getValue().get(selectedRateValuesValue);
				setSelectedRateValues(selectedRateValuesValue);
			}
	}
	return true;
}


Boolean UNIX_QueryStatisticsCollection::initialize()
{
	return false;
}

Boolean UNIX_QueryStatisticsCollection::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QueryStatisticsCollection");
	_generation = Uint64(0);
	_sampleInterval = CIMHelper::getCurrentTime();
	_timeLastSampled = CIMHelper::getCurrentTime();
	_query = String ("");
	_queryLanguage = Uint16(0);
	_selectedEncoding = Uint16(0);
	_selectedNames = String ("");
	_selectedTypes = String ("");
	_selectedValues = String ("");
	_selectedRateNames = String ("");
	_selectedRateTypes = String ("");
	_selectedRateValues = String ("");
	
	return false;
}

Boolean UNIX_QueryStatisticsCollection::finalize()
{
	return false;
}


Boolean UNIX_QueryStatisticsCollection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_QueryStatisticsCollection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryStatisticsCollection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryStatisticsCollection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryStatisticsCollection::validateInstance()
{
	return true;
}

