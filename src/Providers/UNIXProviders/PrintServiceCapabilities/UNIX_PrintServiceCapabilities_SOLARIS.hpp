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


UNIX_PrintServiceCapabilities::UNIX_PrintServiceCapabilities(void)
{
}

UNIX_PrintServiceCapabilities::~UNIX_PrintServiceCapabilities(void)
{
}

Boolean UNIX_PrintServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_PrintServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_PrintServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_PrintServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_PrintServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintServiceCapabilities::getCharset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARSET, getCharset());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getCharset() const
{
	return _charset;
}

void UNIX_PrintServiceCapabilities::setCharset(Array<String> &value)
{
	_charset = value;
}

Boolean UNIX_PrintServiceCapabilities::getColorSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLOR_SUPPORTED, getColorSupported());
	return true;
}

Boolean UNIX_PrintServiceCapabilities::getColorSupported() const
{
	return _colorSupported;
}

void UNIX_PrintServiceCapabilities::setColorSupported(Boolean &value)
{
	_colorSupported = value;
}

Boolean UNIX_PrintServiceCapabilities::getCompression(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION, getCompression());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getCompression() const
{
	return _compression;
}

void UNIX_PrintServiceCapabilities::setCompression(Array<String> &value)
{
	_compression = value;
}

Boolean UNIX_PrintServiceCapabilities::getCopies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPIES, getCopies());
	return true;
}

String UNIX_PrintServiceCapabilities::getCopies() const
{
	return _copies;
}

void UNIX_PrintServiceCapabilities::setCopies(String &value)
{
	_copies = value;
}

Boolean UNIX_PrintServiceCapabilities::getFinishings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINISHINGS, getFinishings());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getFinishings() const
{
	return _finishings;
}

void UNIX_PrintServiceCapabilities::setFinishings(Array<String> &value)
{
	_finishings = value;
}

Boolean UNIX_PrintServiceCapabilities::getIPPOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_P_OPERATIONS, getIPPOperations());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getIPPOperations() const
{
	return _iPPOperations;
}

void UNIX_PrintServiceCapabilities::setIPPOperations(Array<String> &value)
{
	_iPPOperations = value;
}

Boolean UNIX_PrintServiceCapabilities::getIPPVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IP_P_VERSIONS, getIPPVersions());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getIPPVersions() const
{
	return _iPPVersions;
}

void UNIX_PrintServiceCapabilities::setIPPVersions(Array<String> &value)
{
	_iPPVersions = value;
}

Boolean UNIX_PrintServiceCapabilities::getJobHoldUntil(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_HOLD_UNTIL, getJobHoldUntil());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getJobHoldUntil() const
{
	return _jobHoldUntil;
}

void UNIX_PrintServiceCapabilities::setJobHoldUntil(Array<String> &value)
{
	_jobHoldUntil = value;
}

Boolean UNIX_PrintServiceCapabilities::getJobPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_PRIORITY, getJobPriority());
	return true;
}

String UNIX_PrintServiceCapabilities::getJobPriority() const
{
	return _jobPriority;
}

void UNIX_PrintServiceCapabilities::setJobPriority(String &value)
{
	_jobPriority = value;
}

Boolean UNIX_PrintServiceCapabilities::getJobSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_SHEETS, getJobSheets());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getJobSheets() const
{
	return _jobSheets;
}

void UNIX_PrintServiceCapabilities::setJobSheets(Array<String> &value)
{
	_jobSheets = value;
}

Boolean UNIX_PrintServiceCapabilities::getMaxImpressions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_IMPRESSIONS, getMaxImpressions());
	return true;
}

Uint32 UNIX_PrintServiceCapabilities::getMaxImpressions() const
{
	return _maxImpressions;
}

void UNIX_PrintServiceCapabilities::setMaxImpressions(Uint32 &value)
{
	_maxImpressions = value;
}

Boolean UNIX_PrintServiceCapabilities::getMaxJobSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_JOB_SIZE, getMaxJobSize());
	return true;
}

Uint32 UNIX_PrintServiceCapabilities::getMaxJobSize() const
{
	return _maxJobSize;
}

void UNIX_PrintServiceCapabilities::setMaxJobSize(Uint32 &value)
{
	_maxJobSize = value;
}

Boolean UNIX_PrintServiceCapabilities::getMaxSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SHEETS, getMaxSheets());
	return true;
}

Uint32 UNIX_PrintServiceCapabilities::getMaxSheets() const
{
	return _maxSheets;
}

void UNIX_PrintServiceCapabilities::setMaxSheets(Uint32 &value)
{
	_maxSheets = value;
}

Boolean UNIX_PrintServiceCapabilities::getMultipleDocumentHandling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_DOCUMENT_HANDLING, getMultipleDocumentHandling());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getMultipleDocumentHandling() const
{
	return _multipleDocumentHandling;
}

void UNIX_PrintServiceCapabilities::setMultipleDocumentHandling(Array<String> &value)
{
	_multipleDocumentHandling = value;
}

Boolean UNIX_PrintServiceCapabilities::getMultipleDocumentJobs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_DOCUMENT_JOBS, getMultipleDocumentJobs());
	return true;
}

Boolean UNIX_PrintServiceCapabilities::getMultipleDocumentJobs() const
{
	return _multipleDocumentJobs;
}

void UNIX_PrintServiceCapabilities::setMultipleDocumentJobs(Boolean &value)
{
	_multipleDocumentJobs = value;
}

Boolean UNIX_PrintServiceCapabilities::getNaturalLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NATURAL_LANGUAGE, getNaturalLanguage());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getNaturalLanguage() const
{
	return _naturalLanguage;
}

void UNIX_PrintServiceCapabilities::setNaturalLanguage(Array<String> &value)
{
	_naturalLanguage = value;
}

Boolean UNIX_PrintServiceCapabilities::getNumberUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_UP, getNumberUp());
	return true;
}

String UNIX_PrintServiceCapabilities::getNumberUp() const
{
	return _numberUp;
}

void UNIX_PrintServiceCapabilities::setNumberUp(String &value)
{
	_numberUp = value;
}

Boolean UNIX_PrintServiceCapabilities::getOrientationRequested(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIENTATION_REQUESTED, getOrientationRequested());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getOrientationRequested() const
{
	return _orientationRequested;
}

void UNIX_PrintServiceCapabilities::setOrientationRequested(Array<String> &value)
{
	_orientationRequested = value;
}

Boolean UNIX_PrintServiceCapabilities::getOutputBin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_BIN, getOutputBin());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getOutputBin() const
{
	return _outputBin;
}

void UNIX_PrintServiceCapabilities::setOutputBin(Array<String> &value)
{
	_outputBin = value;
}

Boolean UNIX_PrintServiceCapabilities::getOutputDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_DEVICE, getOutputDevice());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getOutputDevice() const
{
	return _outputDevice;
}

void UNIX_PrintServiceCapabilities::setOutputDevice(Array<String> &value)
{
	_outputDevice = value;
}

Boolean UNIX_PrintServiceCapabilities::getPagesPerMinute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGES_PER_MINUTE, getPagesPerMinute());
	return true;
}

Uint32 UNIX_PrintServiceCapabilities::getPagesPerMinute() const
{
	return _pagesPerMinute;
}

void UNIX_PrintServiceCapabilities::setPagesPerMinute(Uint32 &value)
{
	_pagesPerMinute = value;
}

Boolean UNIX_PrintServiceCapabilities::getPagesPerMinuteColor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGES_PER_MINUTE_COLOR, getPagesPerMinuteColor());
	return true;
}

Uint32 UNIX_PrintServiceCapabilities::getPagesPerMinuteColor() const
{
	return _pagesPerMinuteColor;
}

void UNIX_PrintServiceCapabilities::setPagesPerMinuteColor(Uint32 &value)
{
	_pagesPerMinuteColor = value;
}

Boolean UNIX_PrintServiceCapabilities::getPageRanges(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGE_RANGES, getPageRanges());
	return true;
}

Boolean UNIX_PrintServiceCapabilities::getPageRanges() const
{
	return _pageRanges;
}

void UNIX_PrintServiceCapabilities::setPageRanges(Boolean &value)
{
	_pageRanges = value;
}

Boolean UNIX_PrintServiceCapabilities::getPDLOverrideAttempted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_D_L_OVERRIDE_ATTEMPTED, getPDLOverrideAttempted());
	return true;
}

Boolean UNIX_PrintServiceCapabilities::getPDLOverrideAttempted() const
{
	return _pDLOverrideAttempted;
}

void UNIX_PrintServiceCapabilities::setPDLOverrideAttempted(Boolean &value)
{
	_pDLOverrideAttempted = value;
}

Boolean UNIX_PrintServiceCapabilities::getPrintQuality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINT_QUALITY, getPrintQuality());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getPrintQuality() const
{
	return _printQuality;
}

void UNIX_PrintServiceCapabilities::setPrintQuality(Array<String> &value)
{
	_printQuality = value;
}

Boolean UNIX_PrintServiceCapabilities::getReferenceURISchemes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFERENCE_U_R_I_SCHEMES, getReferenceURISchemes());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getReferenceURISchemes() const
{
	return _referenceURISchemes;
}

void UNIX_PrintServiceCapabilities::setReferenceURISchemes(Array<String> &value)
{
	_referenceURISchemes = value;
}

Boolean UNIX_PrintServiceCapabilities::getResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOLUTION, getResolution());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getResolution() const
{
	return _resolution;
}

void UNIX_PrintServiceCapabilities::setResolution(Array<String> &value)
{
	_resolution = value;
}

Boolean UNIX_PrintServiceCapabilities::getSides(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIDES, getSides());
	return true;
}

Array<String> UNIX_PrintServiceCapabilities::getSides() const
{
	return _sides;
}

void UNIX_PrintServiceCapabilities::setSides(Array<String> &value)
{
	_sides = value;
}


void UNIX_PrintServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintServiceCapabilities");
	_generation = Uint64(0);
	_charset.clear();
	_colorSupported = Boolean(false);
	_compression.clear();
	_copies = String ("");
	_finishings.clear();
	_iPPOperations.clear();
	_iPPVersions.clear();
	_jobHoldUntil.clear();
	_jobPriority = String ("");
	_jobSheets.clear();
	_maxImpressions = Uint32(0);
	_maxJobSize = Uint32(0);
	_maxSheets = Uint32(0);
	_multipleDocumentHandling.clear();
	_multipleDocumentJobs = Boolean(false);
	_naturalLanguage.clear();
	_numberUp = String ("");
	_orientationRequested.clear();
	_outputBin.clear();
	_outputDevice.clear();
	_pagesPerMinute = Uint32(0);
	_pagesPerMinuteColor = Uint32(0);
	_pageRanges = Boolean(false);
	_pDLOverrideAttempted = Boolean(false);
	_printQuality.clear();
	_referenceURISchemes.clear();
	_resolution.clear();
	_sides.clear();

}

Boolean UNIX_PrintServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Charset"))
			{
				Array<String> charsetValue;
				property.getValue().get(charsetValue);
				setCharset(charsetValue);
			}
			else if (String::equal(property.getName().getString(), "ColorSupported"))
			{
				Boolean colorSupportedValue;
				property.getValue().get(colorSupportedValue);
				setColorSupported(colorSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "Compression"))
			{
				Array<String> compressionValue;
				property.getValue().get(compressionValue);
				setCompression(compressionValue);
			}
			else if (String::equal(property.getName().getString(), "Copies"))
			{
				String copiesValue;
				property.getValue().get(copiesValue);
				setCopies(copiesValue);
			}
			else if (String::equal(property.getName().getString(), "Finishings"))
			{
				Array<String> finishingsValue;
				property.getValue().get(finishingsValue);
				setFinishings(finishingsValue);
			}
			else if (String::equal(property.getName().getString(), "IPPOperations"))
			{
				Array<String> iPPOperationsValue;
				property.getValue().get(iPPOperationsValue);
				setIPPOperations(iPPOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "IPPVersions"))
			{
				Array<String> iPPVersionsValue;
				property.getValue().get(iPPVersionsValue);
				setIPPVersions(iPPVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "JobHoldUntil"))
			{
				Array<String> jobHoldUntilValue;
				property.getValue().get(jobHoldUntilValue);
				setJobHoldUntil(jobHoldUntilValue);
			}
			else if (String::equal(property.getName().getString(), "JobPriority"))
			{
				String jobPriorityValue;
				property.getValue().get(jobPriorityValue);
				setJobPriority(jobPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "JobSheets"))
			{
				Array<String> jobSheetsValue;
				property.getValue().get(jobSheetsValue);
				setJobSheets(jobSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxImpressions"))
			{
				Uint32 maxImpressionsValue;
				property.getValue().get(maxImpressionsValue);
				setMaxImpressions(maxImpressionsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxJobSize"))
			{
				Uint32 maxJobSizeValue;
				property.getValue().get(maxJobSizeValue);
				setMaxJobSize(maxJobSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxSheets"))
			{
				Uint32 maxSheetsValue;
				property.getValue().get(maxSheetsValue);
				setMaxSheets(maxSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleDocumentHandling"))
			{
				Array<String> multipleDocumentHandlingValue;
				property.getValue().get(multipleDocumentHandlingValue);
				setMultipleDocumentHandling(multipleDocumentHandlingValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleDocumentJobs"))
			{
				Boolean multipleDocumentJobsValue;
				property.getValue().get(multipleDocumentJobsValue);
				setMultipleDocumentJobs(multipleDocumentJobsValue);
			}
			else if (String::equal(property.getName().getString(), "NaturalLanguage"))
			{
				Array<String> naturalLanguageValue;
				property.getValue().get(naturalLanguageValue);
				setNaturalLanguage(naturalLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "NumberUp"))
			{
				String numberUpValue;
				property.getValue().get(numberUpValue);
				setNumberUp(numberUpValue);
			}
			else if (String::equal(property.getName().getString(), "OrientationRequested"))
			{
				Array<String> orientationRequestedValue;
				property.getValue().get(orientationRequestedValue);
				setOrientationRequested(orientationRequestedValue);
			}
			else if (String::equal(property.getName().getString(), "OutputBin"))
			{
				Array<String> outputBinValue;
				property.getValue().get(outputBinValue);
				setOutputBin(outputBinValue);
			}
			else if (String::equal(property.getName().getString(), "OutputDevice"))
			{
				Array<String> outputDeviceValue;
				property.getValue().get(outputDeviceValue);
				setOutputDevice(outputDeviceValue);
			}
			else if (String::equal(property.getName().getString(), "PagesPerMinute"))
			{
				Uint32 pagesPerMinuteValue;
				property.getValue().get(pagesPerMinuteValue);
				setPagesPerMinute(pagesPerMinuteValue);
			}
			else if (String::equal(property.getName().getString(), "PagesPerMinuteColor"))
			{
				Uint32 pagesPerMinuteColorValue;
				property.getValue().get(pagesPerMinuteColorValue);
				setPagesPerMinuteColor(pagesPerMinuteColorValue);
			}
			else if (String::equal(property.getName().getString(), "PageRanges"))
			{
				Boolean pageRangesValue;
				property.getValue().get(pageRangesValue);
				setPageRanges(pageRangesValue);
			}
			else if (String::equal(property.getName().getString(), "PDLOverrideAttempted"))
			{
				Boolean pDLOverrideAttemptedValue;
				property.getValue().get(pDLOverrideAttemptedValue);
				setPDLOverrideAttempted(pDLOverrideAttemptedValue);
			}
			else if (String::equal(property.getName().getString(), "PrintQuality"))
			{
				Array<String> printQualityValue;
				property.getValue().get(printQualityValue);
				setPrintQuality(printQualityValue);
			}
			else if (String::equal(property.getName().getString(), "ReferenceURISchemes"))
			{
				Array<String> referenceURISchemesValue;
				property.getValue().get(referenceURISchemesValue);
				setReferenceURISchemes(referenceURISchemesValue);
			}
			else if (String::equal(property.getName().getString(), "Resolution"))
			{
				Array<String> resolutionValue;
				property.getValue().get(resolutionValue);
				setResolution(resolutionValue);
			}
			else if (String::equal(property.getName().getString(), "Sides"))
			{
				Array<String> sidesValue;
				property.getValue().get(sidesValue);
				setSides(sidesValue);
			}
	}
	return true;
}

Uint16 UNIX_PrintServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_PrintServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_PrintServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintServiceCapabilities");
	_generation = Uint64(0);
	_charset.clear();
	_colorSupported = Boolean(false);
	_compression.clear();
	_copies = String ("");
	_finishings.clear();
	_iPPOperations.clear();
	_iPPVersions.clear();
	_jobHoldUntil.clear();
	_jobPriority = String ("");
	_jobSheets.clear();
	_maxImpressions = Uint32(0);
	_maxJobSize = Uint32(0);
	_maxSheets = Uint32(0);
	_multipleDocumentHandling.clear();
	_multipleDocumentJobs = Boolean(false);
	_naturalLanguage.clear();
	_numberUp = String ("");
	_orientationRequested.clear();
	_outputBin.clear();
	_outputDevice.clear();
	_pagesPerMinute = Uint32(0);
	_pagesPerMinuteColor = Uint32(0);
	_pageRanges = Boolean(false);
	_pDLOverrideAttempted = Boolean(false);
	_printQuality.clear();
	_referenceURISchemes.clear();
	_resolution.clear();
	_sides.clear();
	
	return false;
}

Boolean UNIX_PrintServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_PrintServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintServiceCapabilities::validateInstance()
{
	return true;
}

