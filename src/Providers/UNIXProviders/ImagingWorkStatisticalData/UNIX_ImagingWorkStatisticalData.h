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
2.20.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Statistics
*/


/* **** Description *** */
/*
This class defines work counters (for accounting and billing) ImagingStatisticalData associated with an imaging system (e.g., ComputerSystem), imaging service (e.g., PrintService), imaging device (e.g., Printer), imaging job (e.g., PrintJob), or any other imaging element. 
See: Section 4 Overview in PWG Counter MIB v2 (PWG 5106.3).
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalData:
				StartStatisticTime DateTime
				StatisticTime DateTime
				SampleInterval DateTime
				RateIntervalEndTime DateTime
				RateIntervalStartTime DateTime

			CIM_ImagingStatisticalData:
				PersistenceType UInt16
				OtherPersistenceType String
				SNMPKeyId UInt32

			UNIX_ImagingWorkStatisticalData:
				WorkType UInt16
				OtherWorkType String
				TotalImages UInt32
				MonochromeImages UInt32
				FullColorImages UInt32
				TotalImpressions UInt32
				MonochromeImpressions UInt32
				BlankImpressions UInt32
				FullColorImpressions UInt32
				HighlightColorImpressions UInt32
				TotalTwoSidedImpressions UInt32
				MonochromeTwoSidedImpressions UInt32
				BlankTwoSidedImpressions UInt32
				FullColorTwoSidedImpressions UInt32
				HighlightColorTwoSidedImpressions UInt32
				TotalSheets UInt32
				MonochromeSheets UInt32
				BlankSheets UInt32
				FullColorSheets UInt32
				HighlightColorSheets UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_ImagingStatisticalData:

			UNIX_ImagingWorkStatisticalData:


*/

#ifndef __UNIX_IMAGINGWORKSTATISTICALDATA_H
#define __UNIX_IMAGINGWORKSTATISTICALDATA_H


#include "CIM_ImagingStatisticalData.h"

#include "UNIX_ImagingWorkStatisticalDataDeps.h"


#ifndef PROPERTY_WORK_TYPE
#define PROPERTY_WORK_TYPE \
					"WorkType"
#endif

#ifndef PROPERTY_OTHER_WORK_TYPE
#define PROPERTY_OTHER_WORK_TYPE \
					"OtherWorkType"
#endif

#ifndef PROPERTY_TOTAL_IMAGES
#define PROPERTY_TOTAL_IMAGES \
					"TotalImages"
#endif

#ifndef PROPERTY_MONOCHROME_IMAGES
#define PROPERTY_MONOCHROME_IMAGES \
					"MonochromeImages"
#endif

#ifndef PROPERTY_FULL_COLOR_IMAGES
#define PROPERTY_FULL_COLOR_IMAGES \
					"FullColorImages"
#endif

#ifndef PROPERTY_TOTAL_IMPRESSIONS
#define PROPERTY_TOTAL_IMPRESSIONS \
					"TotalImpressions"
#endif

#ifndef PROPERTY_MONOCHROME_IMPRESSIONS
#define PROPERTY_MONOCHROME_IMPRESSIONS \
					"MonochromeImpressions"
#endif

#ifndef PROPERTY_BLANK_IMPRESSIONS
#define PROPERTY_BLANK_IMPRESSIONS \
					"BlankImpressions"
#endif

#ifndef PROPERTY_FULL_COLOR_IMPRESSIONS
#define PROPERTY_FULL_COLOR_IMPRESSIONS \
					"FullColorImpressions"
#endif

#ifndef PROPERTY_HIGHLIGHT_COLOR_IMPRESSIONS
#define PROPERTY_HIGHLIGHT_COLOR_IMPRESSIONS \
					"HighlightColorImpressions"
#endif

#ifndef PROPERTY_TOTAL_TWO_SIDED_IMPRESSIONS
#define PROPERTY_TOTAL_TWO_SIDED_IMPRESSIONS \
					"TotalTwoSidedImpressions"
#endif

#ifndef PROPERTY_MONOCHROME_TWO_SIDED_IMPRESSIONS
#define PROPERTY_MONOCHROME_TWO_SIDED_IMPRESSIONS \
					"MonochromeTwoSidedImpressions"
#endif

#ifndef PROPERTY_BLANK_TWO_SIDED_IMPRESSIONS
#define PROPERTY_BLANK_TWO_SIDED_IMPRESSIONS \
					"BlankTwoSidedImpressions"
#endif

#ifndef PROPERTY_FULL_COLOR_TWO_SIDED_IMPRESSIONS
#define PROPERTY_FULL_COLOR_TWO_SIDED_IMPRESSIONS \
					"FullColorTwoSidedImpressions"
#endif

#ifndef PROPERTY_HIGHLIGHT_COLOR_TWO_SIDED_IMPRESSIONS
#define PROPERTY_HIGHLIGHT_COLOR_TWO_SIDED_IMPRESSIONS \
					"HighlightColorTwoSidedImpressions"
#endif

#ifndef PROPERTY_TOTAL_SHEETS
#define PROPERTY_TOTAL_SHEETS \
					"TotalSheets"
#endif

#ifndef PROPERTY_MONOCHROME_SHEETS
#define PROPERTY_MONOCHROME_SHEETS \
					"MonochromeSheets"
#endif

#ifndef PROPERTY_BLANK_SHEETS
#define PROPERTY_BLANK_SHEETS \
					"BlankSheets"
#endif

#ifndef PROPERTY_FULL_COLOR_SHEETS
#define PROPERTY_FULL_COLOR_SHEETS \
					"FullColorSheets"
#endif

#ifndef PROPERTY_HIGHLIGHT_COLOR_SHEETS
#define PROPERTY_HIGHLIGHT_COLOR_SHEETS \
					"HighlightColorSheets"
#endif



class UNIX_ImagingWorkStatisticalData :
	public CIM_ImagingStatisticalData
{
public:

	UNIX_ImagingWorkStatisticalData();
	~UNIX_ImagingWorkStatisticalData();

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
	virtual Boolean getStartStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStartStatisticTime() const;
	virtual void setStartStatisticTime(CIMDateTime&);
	virtual Boolean getStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStatisticTime() const;
	virtual void setStatisticTime(CIMDateTime&);
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual void setSampleInterval(CIMDateTime&);
	virtual Boolean getRateIntervalEndTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalEndTime() const;
	virtual void setRateIntervalEndTime(CIMDateTime&);
	virtual Boolean getRateIntervalStartTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalStartTime() const;
	virtual void setRateIntervalStartTime(CIMDateTime&);
	virtual Boolean getPersistenceType(CIMProperty&) const;
	virtual Uint16 getPersistenceType() const;
	virtual void setPersistenceType(Uint16&);
	virtual Boolean getOtherPersistenceType(CIMProperty&) const;
	virtual String getOtherPersistenceType() const;
	virtual void setOtherPersistenceType(String&);
	virtual Boolean getSNMPKeyId(CIMProperty&) const;
	virtual Uint32 getSNMPKeyId() const;
	virtual void setSNMPKeyId(Uint32&);
	virtual Boolean getWorkType(CIMProperty&) const;
	virtual Uint16 getWorkType() const;
	virtual void setWorkType(Uint16&);
	virtual Boolean getOtherWorkType(CIMProperty&) const;
	virtual String getOtherWorkType() const;
	virtual void setOtherWorkType(String&);
	virtual Boolean getTotalImages(CIMProperty&) const;
	virtual Uint32 getTotalImages() const;
	virtual void setTotalImages(Uint32&);
	virtual Boolean getMonochromeImages(CIMProperty&) const;
	virtual Uint32 getMonochromeImages() const;
	virtual void setMonochromeImages(Uint32&);
	virtual Boolean getFullColorImages(CIMProperty&) const;
	virtual Uint32 getFullColorImages() const;
	virtual void setFullColorImages(Uint32&);
	virtual Boolean getTotalImpressions(CIMProperty&) const;
	virtual Uint32 getTotalImpressions() const;
	virtual void setTotalImpressions(Uint32&);
	virtual Boolean getMonochromeImpressions(CIMProperty&) const;
	virtual Uint32 getMonochromeImpressions() const;
	virtual void setMonochromeImpressions(Uint32&);
	virtual Boolean getBlankImpressions(CIMProperty&) const;
	virtual Uint32 getBlankImpressions() const;
	virtual void setBlankImpressions(Uint32&);
	virtual Boolean getFullColorImpressions(CIMProperty&) const;
	virtual Uint32 getFullColorImpressions() const;
	virtual void setFullColorImpressions(Uint32&);
	virtual Boolean getHighlightColorImpressions(CIMProperty&) const;
	virtual Uint32 getHighlightColorImpressions() const;
	virtual void setHighlightColorImpressions(Uint32&);
	virtual Boolean getTotalTwoSidedImpressions(CIMProperty&) const;
	virtual Uint32 getTotalTwoSidedImpressions() const;
	virtual void setTotalTwoSidedImpressions(Uint32&);
	virtual Boolean getMonochromeTwoSidedImpressions(CIMProperty&) const;
	virtual Uint32 getMonochromeTwoSidedImpressions() const;
	virtual void setMonochromeTwoSidedImpressions(Uint32&);
	virtual Boolean getBlankTwoSidedImpressions(CIMProperty&) const;
	virtual Uint32 getBlankTwoSidedImpressions() const;
	virtual void setBlankTwoSidedImpressions(Uint32&);
	virtual Boolean getFullColorTwoSidedImpressions(CIMProperty&) const;
	virtual Uint32 getFullColorTwoSidedImpressions() const;
	virtual void setFullColorTwoSidedImpressions(Uint32&);
	virtual Boolean getHighlightColorTwoSidedImpressions(CIMProperty&) const;
	virtual Uint32 getHighlightColorTwoSidedImpressions() const;
	virtual void setHighlightColorTwoSidedImpressions(Uint32&);
	virtual Boolean getTotalSheets(CIMProperty&) const;
	virtual Uint32 getTotalSheets() const;
	virtual void setTotalSheets(Uint32&);
	virtual Boolean getMonochromeSheets(CIMProperty&) const;
	virtual Uint32 getMonochromeSheets() const;
	virtual void setMonochromeSheets(Uint32&);
	virtual Boolean getBlankSheets(CIMProperty&) const;
	virtual Uint32 getBlankSheets() const;
	virtual void setBlankSheets(Uint32&);
	virtual Boolean getFullColorSheets(CIMProperty&) const;
	virtual Uint32 getFullColorSheets() const;
	virtual void setFullColorSheets(Uint32&);
	virtual Boolean getHighlightColorSheets(CIMProperty&) const;
	virtual Uint32 getHighlightColorSheets() const;
	virtual void setHighlightColorSheets(Uint32&);

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _startStatisticTime;
	CIMDateTime _statisticTime;
	CIMDateTime _sampleInterval;
	CIMDateTime _rateIntervalEndTime;
	CIMDateTime _rateIntervalStartTime;
	Uint16 _persistenceType;
	String _otherPersistenceType;
	Uint32 _sNMPKeyId;
	Uint16 _workType;
	String _otherWorkType;
	Uint32 _totalImages;
	Uint32 _monochromeImages;
	Uint32 _fullColorImages;
	Uint32 _totalImpressions;
	Uint32 _monochromeImpressions;
	Uint32 _blankImpressions;
	Uint32 _fullColorImpressions;
	Uint32 _highlightColorImpressions;
	Uint32 _totalTwoSidedImpressions;
	Uint32 _monochromeTwoSidedImpressions;
	Uint32 _blankTwoSidedImpressions;
	Uint32 _fullColorTwoSidedImpressions;
	Uint32 _highlightColorTwoSidedImpressions;
	Uint32 _totalSheets;
	Uint32 _monochromeSheets;
	Uint32 _blankSheets;
	Uint32 _fullColorSheets;
	Uint32 _highlightColorSheets;

#	include "UNIX_ImagingWorkStatisticalDataPrivate.h"


};

#endif /* UNIX_IMAGINGWORKSTATISTICALDATA */
