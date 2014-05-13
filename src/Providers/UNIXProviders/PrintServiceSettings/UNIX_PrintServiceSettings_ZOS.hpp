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


UNIX_PrintServiceSettings::UNIX_PrintServiceSettings(void)
{
}

UNIX_PrintServiceSettings::~UNIX_PrintServiceSettings(void)
{
}

Boolean UNIX_PrintServiceSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintServiceSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintServiceSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintServiceSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintServiceSettings::getCaption() const
{
	return _caption;
}

void UNIX_PrintServiceSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintServiceSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintServiceSettings::getDescription() const
{
	return _description;
}

void UNIX_PrintServiceSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintServiceSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintServiceSettings::getElementName() const
{
	return _elementName;
}

void UNIX_PrintServiceSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintServiceSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintServiceSettings::getGeneration() const
{
	return _generation;
}

void UNIX_PrintServiceSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintServiceSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_PrintServiceSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_PrintServiceSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_PrintServiceSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_PrintServiceSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_PrintServiceSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_PrintServiceSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_PrintServiceSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_PrintServiceSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_PrintServiceSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_PrintServiceSettings::getSoID() const
{
	return _soID;
}

void UNIX_PrintServiceSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_PrintServiceSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_PrintServiceSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_PrintServiceSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_PrintServiceSettings::getCopies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPIES, getCopies());
	return true;
}

Uint32 UNIX_PrintServiceSettings::getCopies() const
{
	return _copies;
}

void UNIX_PrintServiceSettings::setCopies(Uint32 &value)
{
	_copies = value;
}

Boolean UNIX_PrintServiceSettings::getDocumentFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOCUMENT_FORMAT, getDocumentFormat());
	return true;
}

String UNIX_PrintServiceSettings::getDocumentFormat() const
{
	return _documentFormat;
}

void UNIX_PrintServiceSettings::setDocumentFormat(String &value)
{
	_documentFormat = value;
}

Boolean UNIX_PrintServiceSettings::getFinishings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINISHINGS, getFinishings());
	return true;
}

Array<String> UNIX_PrintServiceSettings::getFinishings() const
{
	return _finishings;
}

void UNIX_PrintServiceSettings::setFinishings(Array<String> &value)
{
	_finishings = value;
}

Boolean UNIX_PrintServiceSettings::getJobHoldUntil(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_HOLD_UNTIL, getJobHoldUntil());
	return true;
}

String UNIX_PrintServiceSettings::getJobHoldUntil() const
{
	return _jobHoldUntil;
}

void UNIX_PrintServiceSettings::setJobHoldUntil(String &value)
{
	_jobHoldUntil = value;
}

Boolean UNIX_PrintServiceSettings::getJobPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_PRIORITY, getJobPriority());
	return true;
}

Uint32 UNIX_PrintServiceSettings::getJobPriority() const
{
	return _jobPriority;
}

void UNIX_PrintServiceSettings::setJobPriority(Uint32 &value)
{
	_jobPriority = value;
}

Boolean UNIX_PrintServiceSettings::getJobSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_SHEETS, getJobSheets());
	return true;
}

String UNIX_PrintServiceSettings::getJobSheets() const
{
	return _jobSheets;
}

void UNIX_PrintServiceSettings::setJobSheets(String &value)
{
	_jobSheets = value;
}

Boolean UNIX_PrintServiceSettings::getMedia(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA, getMedia());
	return true;
}

String UNIX_PrintServiceSettings::getMedia() const
{
	return _media;
}

void UNIX_PrintServiceSettings::setMedia(String &value)
{
	_media = value;
}

Boolean UNIX_PrintServiceSettings::getMultipleDocumentHandling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_DOCUMENT_HANDLING, getMultipleDocumentHandling());
	return true;
}

String UNIX_PrintServiceSettings::getMultipleDocumentHandling() const
{
	return _multipleDocumentHandling;
}

void UNIX_PrintServiceSettings::setMultipleDocumentHandling(String &value)
{
	_multipleDocumentHandling = value;
}

Boolean UNIX_PrintServiceSettings::getNumberUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_UP, getNumberUp());
	return true;
}

Uint32 UNIX_PrintServiceSettings::getNumberUp() const
{
	return _numberUp;
}

void UNIX_PrintServiceSettings::setNumberUp(Uint32 &value)
{
	_numberUp = value;
}

Boolean UNIX_PrintServiceSettings::getOrientationRequested(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIENTATION_REQUESTED, getOrientationRequested());
	return true;
}

String UNIX_PrintServiceSettings::getOrientationRequested() const
{
	return _orientationRequested;
}

void UNIX_PrintServiceSettings::setOrientationRequested(String &value)
{
	_orientationRequested = value;
}

Boolean UNIX_PrintServiceSettings::getOutputBin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_BIN, getOutputBin());
	return true;
}

String UNIX_PrintServiceSettings::getOutputBin() const
{
	return _outputBin;
}

void UNIX_PrintServiceSettings::setOutputBin(String &value)
{
	_outputBin = value;
}

Boolean UNIX_PrintServiceSettings::getPrintQuality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINT_QUALITY, getPrintQuality());
	return true;
}

String UNIX_PrintServiceSettings::getPrintQuality() const
{
	return _printQuality;
}

void UNIX_PrintServiceSettings::setPrintQuality(String &value)
{
	_printQuality = value;
}

Boolean UNIX_PrintServiceSettings::getResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOLUTION, getResolution());
	return true;
}

String UNIX_PrintServiceSettings::getResolution() const
{
	return _resolution;
}

void UNIX_PrintServiceSettings::setResolution(String &value)
{
	_resolution = value;
}

Boolean UNIX_PrintServiceSettings::getSides(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIDES, getSides());
	return true;
}

String UNIX_PrintServiceSettings::getSides() const
{
	return _sides;
}

void UNIX_PrintServiceSettings::setSides(String &value)
{
	_sides = value;
}


void UNIX_PrintServiceSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintServiceSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_copies = Uint32(0);
	_documentFormat = String ("");
	_finishings.clear();
	_jobHoldUntil = String ("");
	_jobPriority = Uint32(0);
	_jobSheets = String ("");
	_media = String ("");
	_multipleDocumentHandling = String ("");
	_numberUp = Uint32(0);
	_orientationRequested = String ("");
	_outputBin = String ("");
	_printQuality = String ("");
	_resolution = String ("");
	_sides = String ("");

}

Boolean UNIX_PrintServiceSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "Copies"))
			{
				Uint32 copiesValue;
				property.getValue().get(copiesValue);
				setCopies(copiesValue);
			}
			else if (String::equal(property.getName().getString(), "DocumentFormat"))
			{
				String documentFormatValue;
				property.getValue().get(documentFormatValue);
				setDocumentFormat(documentFormatValue);
			}
			else if (String::equal(property.getName().getString(), "Finishings"))
			{
				Array<String> finishingsValue;
				property.getValue().get(finishingsValue);
				setFinishings(finishingsValue);
			}
			else if (String::equal(property.getName().getString(), "JobHoldUntil"))
			{
				String jobHoldUntilValue;
				property.getValue().get(jobHoldUntilValue);
				setJobHoldUntil(jobHoldUntilValue);
			}
			else if (String::equal(property.getName().getString(), "JobPriority"))
			{
				Uint32 jobPriorityValue;
				property.getValue().get(jobPriorityValue);
				setJobPriority(jobPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "JobSheets"))
			{
				String jobSheetsValue;
				property.getValue().get(jobSheetsValue);
				setJobSheets(jobSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "Media"))
			{
				String mediaValue;
				property.getValue().get(mediaValue);
				setMedia(mediaValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleDocumentHandling"))
			{
				String multipleDocumentHandlingValue;
				property.getValue().get(multipleDocumentHandlingValue);
				setMultipleDocumentHandling(multipleDocumentHandlingValue);
			}
			else if (String::equal(property.getName().getString(), "NumberUp"))
			{
				Uint32 numberUpValue;
				property.getValue().get(numberUpValue);
				setNumberUp(numberUpValue);
			}
			else if (String::equal(property.getName().getString(), "OrientationRequested"))
			{
				String orientationRequestedValue;
				property.getValue().get(orientationRequestedValue);
				setOrientationRequested(orientationRequestedValue);
			}
			else if (String::equal(property.getName().getString(), "OutputBin"))
			{
				String outputBinValue;
				property.getValue().get(outputBinValue);
				setOutputBin(outputBinValue);
			}
			else if (String::equal(property.getName().getString(), "PrintQuality"))
			{
				String printQualityValue;
				property.getValue().get(printQualityValue);
				setPrintQuality(printQualityValue);
			}
			else if (String::equal(property.getName().getString(), "Resolution"))
			{
				String resolutionValue;
				property.getValue().get(resolutionValue);
				setResolution(resolutionValue);
			}
			else if (String::equal(property.getName().getString(), "Sides"))
			{
				String sidesValue;
				property.getValue().get(sidesValue);
				setSides(sidesValue);
			}
	}
	return true;
}


Boolean UNIX_PrintServiceSettings::initialize()
{
	return false;
}

Boolean UNIX_PrintServiceSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintServiceSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_copies = Uint32(0);
	_documentFormat = String ("");
	_finishings.clear();
	_jobHoldUntil = String ("");
	_jobPriority = Uint32(0);
	_jobSheets = String ("");
	_media = String ("");
	_multipleDocumentHandling = String ("");
	_numberUp = Uint32(0);
	_orientationRequested = String ("");
	_outputBin = String ("");
	_printQuality = String ("");
	_resolution = String ("");
	_sides = String ("");
	
	return false;
}

Boolean UNIX_PrintServiceSettings::finalize()
{
	return false;
}


Boolean UNIX_PrintServiceSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintServiceSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintServiceSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintServiceSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintServiceSettings::validateInstance()
{
	return true;
}

