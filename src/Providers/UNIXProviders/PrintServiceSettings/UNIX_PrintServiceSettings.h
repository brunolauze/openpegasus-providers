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
An instance of SettingData for a specific PrintService which corresponds to xxx-default attributes of an IPP Printer. 
See: Section 2.1 Printer Object in IPP/1.1 (RFC 2911). 
See: Section 4.2 Job Template Attributes in IPP/1.1. 
See: Section 4.4 Printer Description Attributes in IPP/1.1. 
Note: An instance of PrintServiceSettings shall be associated with exactly one instance of PrintService via an instance of the ElementSettingData association.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SettingData:
				ConfigurationName String
				ChangeableType UInt16
				ComponentSetting String
				SoID String
				SoOrgID String

			UNIX_PrintServiceSettings:
				Copies UInt32
				DocumentFormat String
				Finishings String
				JobHoldUntil String
				JobPriority UInt32
				JobSheets String
				Media String
				MultipleDocumentHandling String
				NumberUp UInt32
				OrientationRequested String
				OutputBin String
				PrintQuality String
				Resolution String
				Sides String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_PrintServiceSettings:


*/

#ifndef __UNIX_PRINTSERVICESETTINGS_H
#define __UNIX_PRINTSERVICESETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_PrintServiceSettingsDeps.h"


#ifndef PROPERTY_COPIES
#define PROPERTY_COPIES \
					"Copies"
#endif

#ifndef PROPERTY_DOCUMENT_FORMAT
#define PROPERTY_DOCUMENT_FORMAT \
					"DocumentFormat"
#endif

#ifndef PROPERTY_FINISHINGS
#define PROPERTY_FINISHINGS \
					"Finishings"
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

#ifndef PROPERTY_MEDIA
#define PROPERTY_MEDIA \
					"Media"
#endif

#ifndef PROPERTY_MULTIPLE_DOCUMENT_HANDLING
#define PROPERTY_MULTIPLE_DOCUMENT_HANDLING \
					"MultipleDocumentHandling"
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

#ifndef PROPERTY_PRINT_QUALITY
#define PROPERTY_PRINT_QUALITY \
					"PrintQuality"
#endif

#ifndef PROPERTY_RESOLUTION
#define PROPERTY_RESOLUTION \
					"Resolution"
#endif

#ifndef PROPERTY_SIDES
#define PROPERTY_SIDES \
					"Sides"
#endif



class UNIX_PrintServiceSettings :
	public CIM_SettingData
{
public:

	UNIX_PrintServiceSettings();
	~UNIX_PrintServiceSettings();

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
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual void setConfigurationName(String&);
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual void setChangeableType(Uint16&);
	virtual Boolean getComponentSetting(CIMProperty&) const;
	virtual Array<String> getComponentSetting() const;
	virtual void setComponentSetting(Array<String>&);
	virtual Boolean getSoID(CIMProperty&) const;
	virtual String getSoID() const;
	virtual void setSoID(String&);
	virtual Boolean getSoOrgID(CIMProperty&) const;
	virtual String getSoOrgID() const;
	virtual void setSoOrgID(String&);
	virtual Boolean getCopies(CIMProperty&) const;
	virtual Uint32 getCopies() const;
	virtual void setCopies(Uint32&);
	virtual Boolean getDocumentFormat(CIMProperty&) const;
	virtual String getDocumentFormat() const;
	virtual void setDocumentFormat(String&);
	virtual Boolean getFinishings(CIMProperty&) const;
	virtual Array<String> getFinishings() const;
	virtual void setFinishings(Array<String>&);
	virtual Boolean getJobHoldUntil(CIMProperty&) const;
	virtual String getJobHoldUntil() const;
	virtual void setJobHoldUntil(String&);
	virtual Boolean getJobPriority(CIMProperty&) const;
	virtual Uint32 getJobPriority() const;
	virtual void setJobPriority(Uint32&);
	virtual Boolean getJobSheets(CIMProperty&) const;
	virtual String getJobSheets() const;
	virtual void setJobSheets(String&);
	virtual Boolean getMedia(CIMProperty&) const;
	virtual String getMedia() const;
	virtual void setMedia(String&);
	virtual Boolean getMultipleDocumentHandling(CIMProperty&) const;
	virtual String getMultipleDocumentHandling() const;
	virtual void setMultipleDocumentHandling(String&);
	virtual Boolean getNumberUp(CIMProperty&) const;
	virtual Uint32 getNumberUp() const;
	virtual void setNumberUp(Uint32&);
	virtual Boolean getOrientationRequested(CIMProperty&) const;
	virtual String getOrientationRequested() const;
	virtual void setOrientationRequested(String&);
	virtual Boolean getOutputBin(CIMProperty&) const;
	virtual String getOutputBin() const;
	virtual void setOutputBin(String&);
	virtual Boolean getPrintQuality(CIMProperty&) const;
	virtual String getPrintQuality() const;
	virtual void setPrintQuality(String&);
	virtual Boolean getResolution(CIMProperty&) const;
	virtual String getResolution() const;
	virtual void setResolution(String&);
	virtual Boolean getSides(CIMProperty&) const;
	virtual String getSides() const;
	virtual void setSides(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _configurationName;
	Uint16 _changeableType;
	Array<String> _componentSetting;
	String _soID;
	String _soOrgID;
	Uint32 _copies;
	String _documentFormat;
	Array<String> _finishings;
	String _jobHoldUntil;
	Uint32 _jobPriority;
	String _jobSheets;
	String _media;
	String _multipleDocumentHandling;
	Uint32 _numberUp;
	String _orientationRequested;
	String _outputBin;
	String _printQuality;
	String _resolution;
	String _sides;

#	include "UNIX_PrintServiceSettingsPrivate.h"


};

#endif /* UNIX_PRINTSERVICESETTINGS */
