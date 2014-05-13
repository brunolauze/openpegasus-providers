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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
A single instance of Capabilities for any PrintService which corresponds to xxx-supported attributes of an IPP Printer. 
See: Section 2.1 Printer Object in IPP/1.1 (RFC 2911). 
See: Section 4.2 Job Template Attributes in IPP/1.1. 
See: Section 4.4 Printer Description Attributes in IPP/1.1. 
Note: An instance of PrintServiceCapabilities shall be associated with exactly one instance of PrintService via an instance of the CIM_ElementCapabilities association.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_PrintServiceCapabilities:
				Charset String
				ColorSupported Boolean
				Compression String
				Copies String
				Finishings String
				IPPOperations String
				IPPVersions String
				JobHoldUntil String
				JobPriority String
				JobSheets String
				MaxImpressions UInt32
				MaxJobSize UInt32
				MaxSheets UInt32
				MultipleDocumentHandling String
				MultipleDocumentJobs Boolean
				NaturalLanguage String
				NumberUp String
				OrientationRequested String
				OutputBin String
				OutputDevice String
				PagesPerMinute UInt32
				PagesPerMinuteColor UInt32
				PageRanges Boolean
				PDLOverrideAttempted Boolean
				PrintQuality String
				ReferenceURISchemes String
				Resolution String
				Sides String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_PrintServiceCapabilities:


*/

#ifndef __UNIX_PRINTSERVICECAPABILITIES_H
#define __UNIX_PRINTSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_PrintServiceCapabilitiesDeps.h"


#ifndef PROPERTY_CHARSET
#define PROPERTY_CHARSET \
					"Charset"
#endif

#ifndef PROPERTY_COLOR_SUPPORTED
#define PROPERTY_COLOR_SUPPORTED \
					"ColorSupported"
#endif

#ifndef PROPERTY_COMPRESSION
#define PROPERTY_COMPRESSION \
					"Compression"
#endif

#ifndef PROPERTY_COPIES
#define PROPERTY_COPIES \
					"Copies"
#endif

#ifndef PROPERTY_FINISHINGS
#define PROPERTY_FINISHINGS \
					"Finishings"
#endif

#ifndef PROPERTY_IP_P_OPERATIONS
#define PROPERTY_IP_P_OPERATIONS \
					"IPPOperations"
#endif

#ifndef PROPERTY_IP_P_VERSIONS
#define PROPERTY_IP_P_VERSIONS \
					"IPPVersions"
#endif

#ifndef PROPERTY_JOB_HOLD_UNTIL
#define PROPERTY_JOB_HOLD_UNTIL \
					"JobHoldUntil"
#endif

#ifndef PROPERTY_JOB_PRIORITY
#define PROPERTY_JOB_PRIORITY \
					"JobPriority"
#endif

#ifndef PROPERTY_JOB_SHEETS
#define PROPERTY_JOB_SHEETS \
					"JobSheets"
#endif

#ifndef PROPERTY_MAX_IMPRESSIONS
#define PROPERTY_MAX_IMPRESSIONS \
					"MaxImpressions"
#endif

#ifndef PROPERTY_MAX_JOB_SIZE
#define PROPERTY_MAX_JOB_SIZE \
					"MaxJobSize"
#endif

#ifndef PROPERTY_MAX_SHEETS
#define PROPERTY_MAX_SHEETS \
					"MaxSheets"
#endif

#ifndef PROPERTY_MULTIPLE_DOCUMENT_HANDLING
#define PROPERTY_MULTIPLE_DOCUMENT_HANDLING \
					"MultipleDocumentHandling"
#endif

#ifndef PROPERTY_MULTIPLE_DOCUMENT_JOBS
#define PROPERTY_MULTIPLE_DOCUMENT_JOBS \
					"MultipleDocumentJobs"
#endif

#ifndef PROPERTY_NATURAL_LANGUAGE
#define PROPERTY_NATURAL_LANGUAGE \
					"NaturalLanguage"
#endif

#ifndef PROPERTY_NUMBER_UP
#define PROPERTY_NUMBER_UP \
					"NumberUp"
#endif

#ifndef PROPERTY_ORIENTATION_REQUESTED
#define PROPERTY_ORIENTATION_REQUESTED \
					"OrientationRequested"
#endif

#ifndef PROPERTY_OUTPUT_BIN
#define PROPERTY_OUTPUT_BIN \
					"OutputBin"
#endif

#ifndef PROPERTY_OUTPUT_DEVICE
#define PROPERTY_OUTPUT_DEVICE \
					"OutputDevice"
#endif

#ifndef PROPERTY_PAGES_PER_MINUTE
#define PROPERTY_PAGES_PER_MINUTE \
					"PagesPerMinute"
#endif

#ifndef PROPERTY_PAGES_PER_MINUTE_COLOR
#define PROPERTY_PAGES_PER_MINUTE_COLOR \
					"PagesPerMinuteColor"
#endif

#ifndef PROPERTY_PAGE_RANGES
#define PROPERTY_PAGE_RANGES \
					"PageRanges"
#endif

#ifndef PROPERTY_P_D_L_OVERRIDE_ATTEMPTED
#define PROPERTY_P_D_L_OVERRIDE_ATTEMPTED \
					"PDLOverrideAttempted"
#endif

#ifndef PROPERTY_PRINT_QUALITY
#define PROPERTY_PRINT_QUALITY \
					"PrintQuality"
#endif

#ifndef PROPERTY_REFERENCE_U_R_I_SCHEMES
#define PROPERTY_REFERENCE_U_R_I_SCHEMES \
					"ReferenceURISchemes"
#endif

#ifndef PROPERTY_RESOLUTION
#define PROPERTY_RESOLUTION \
					"Resolution"
#endif

#ifndef PROPERTY_SIDES
#define PROPERTY_SIDES \
					"Sides"
#endif



class UNIX_PrintServiceCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_PrintServiceCapabilities();
	~UNIX_PrintServiceCapabilities();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getCharset(CIMProperty&) const;
	virtual Array<String> getCharset() const;
	virtual void setCharset(Array<String>&);
	virtual Boolean getColorSupported(CIMProperty&) const;
	virtual Boolean getColorSupported() const;
	virtual void setColorSupported(Boolean&);
	virtual Boolean getCompression(CIMProperty&) const;
	virtual Array<String> getCompression() const;
	virtual void setCompression(Array<String>&);
	virtual Boolean getCopies(CIMProperty&) const;
	virtual String getCopies() const;
	virtual void setCopies(String&);
	virtual Boolean getFinishings(CIMProperty&) const;
	virtual Array<String> getFinishings() const;
	virtual void setFinishings(Array<String>&);
	virtual Boolean getIPPOperations(CIMProperty&) const;
	virtual Array<String> getIPPOperations() const;
	virtual void setIPPOperations(Array<String>&);
	virtual Boolean getIPPVersions(CIMProperty&) const;
	virtual Array<String> getIPPVersions() const;
	virtual void setIPPVersions(Array<String>&);
	virtual Boolean getJobHoldUntil(CIMProperty&) const;
	virtual Array<String> getJobHoldUntil() const;
	virtual void setJobHoldUntil(Array<String>&);
	virtual Boolean getJobPriority(CIMProperty&) const;
	virtual String getJobPriority() const;
	virtual void setJobPriority(String&);
	virtual Boolean getJobSheets(CIMProperty&) const;
	virtual Array<String> getJobSheets() const;
	virtual void setJobSheets(Array<String>&);
	virtual Boolean getMaxImpressions(CIMProperty&) const;
	virtual Uint32 getMaxImpressions() const;
	virtual void setMaxImpressions(Uint32&);
	virtual Boolean getMaxJobSize(CIMProperty&) const;
	virtual Uint32 getMaxJobSize() const;
	virtual void setMaxJobSize(Uint32&);
	virtual Boolean getMaxSheets(CIMProperty&) const;
	virtual Uint32 getMaxSheets() const;
	virtual void setMaxSheets(Uint32&);
	virtual Boolean getMultipleDocumentHandling(CIMProperty&) const;
	virtual Array<String> getMultipleDocumentHandling() const;
	virtual void setMultipleDocumentHandling(Array<String>&);
	virtual Boolean getMultipleDocumentJobs(CIMProperty&) const;
	virtual Boolean getMultipleDocumentJobs() const;
	virtual void setMultipleDocumentJobs(Boolean&);
	virtual Boolean getNaturalLanguage(CIMProperty&) const;
	virtual Array<String> getNaturalLanguage() const;
	virtual void setNaturalLanguage(Array<String>&);
	virtual Boolean getNumberUp(CIMProperty&) const;
	virtual String getNumberUp() const;
	virtual void setNumberUp(String&);
	virtual Boolean getOrientationRequested(CIMProperty&) const;
	virtual Array<String> getOrientationRequested() const;
	virtual void setOrientationRequested(Array<String>&);
	virtual Boolean getOutputBin(CIMProperty&) const;
	virtual Array<String> getOutputBin() const;
	virtual void setOutputBin(Array<String>&);
	virtual Boolean getOutputDevice(CIMProperty&) const;
	virtual Array<String> getOutputDevice() const;
	virtual void setOutputDevice(Array<String>&);
	virtual Boolean getPagesPerMinute(CIMProperty&) const;
	virtual Uint32 getPagesPerMinute() const;
	virtual void setPagesPerMinute(Uint32&);
	virtual Boolean getPagesPerMinuteColor(CIMProperty&) const;
	virtual Uint32 getPagesPerMinuteColor() const;
	virtual void setPagesPerMinuteColor(Uint32&);
	virtual Boolean getPageRanges(CIMProperty&) const;
	virtual Boolean getPageRanges() const;
	virtual void setPageRanges(Boolean&);
	virtual Boolean getPDLOverrideAttempted(CIMProperty&) const;
	virtual Boolean getPDLOverrideAttempted() const;
	virtual void setPDLOverrideAttempted(Boolean&);
	virtual Boolean getPrintQuality(CIMProperty&) const;
	virtual Array<String> getPrintQuality() const;
	virtual void setPrintQuality(Array<String>&);
	virtual Boolean getReferenceURISchemes(CIMProperty&) const;
	virtual Array<String> getReferenceURISchemes() const;
	virtual void setReferenceURISchemes(Array<String>&);
	virtual Boolean getResolution(CIMProperty&) const;
	virtual Array<String> getResolution() const;
	virtual void setResolution(Array<String>&);
	virtual Boolean getSides(CIMProperty&) const;
	virtual Array<String> getSides() const;
	virtual void setSides(Array<String>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Array<String> _charset;
	Boolean _colorSupported;
	Array<String> _compression;
	String _copies;
	Array<String> _finishings;
	Array<String> _iPPOperations;
	Array<String> _iPPVersions;
	Array<String> _jobHoldUntil;
	String _jobPriority;
	Array<String> _jobSheets;
	Uint32 _maxImpressions;
	Uint32 _maxJobSize;
	Uint32 _maxSheets;
	Array<String> _multipleDocumentHandling;
	Boolean _multipleDocumentJobs;
	Array<String> _naturalLanguage;
	String _numberUp;
	Array<String> _orientationRequested;
	Array<String> _outputBin;
	Array<String> _outputDevice;
	Uint32 _pagesPerMinute;
	Uint32 _pagesPerMinuteColor;
	Boolean _pageRanges;
	Boolean _pDLOverrideAttempted;
	Array<String> _printQuality;
	Array<String> _referenceURISchemes;
	Array<String> _resolution;
	Array<String> _sides;

#	include "UNIX_PrintServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_PRINTSERVICECAPABILITIES */
