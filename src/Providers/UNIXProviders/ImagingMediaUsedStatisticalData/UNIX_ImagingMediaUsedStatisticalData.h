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
This class defines media used (for accounting and billing) ImagingStatisticalData associated with an imaging system (e.g., ComputerSystem), imaging service (e.g., PrintService), imaging device (e.g., Printer), imaging job (e.g., PrintJob), or any other imaging element. 
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

			UNIX_ImagingMediaUsedStatisticalData:
				SNMPRowId UInt32
				TotalSheets UInt32
				MonochromeSheets UInt32
				BlankSheets UInt32
				FullColorSheets UInt32
				HighlightColorSheets UInt32
				MediaSizeName String
				MediaInfo String
				MediaName String
				MediaAccountingKey String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_ImagingStatisticalData:

			UNIX_ImagingMediaUsedStatisticalData:


*/

#ifndef __UNIX_IMAGINGMEDIAUSEDSTATISTICALDATA_H
#define __UNIX_IMAGINGMEDIAUSEDSTATISTICALDATA_H


#include "CIM_ImagingStatisticalData.h"

#include "UNIX_ImagingMediaUsedStatisticalDataDeps.h"


#ifndef PROPERTY_S_N_M_P_ROW_ID
#define PROPERTY_S_N_M_P_ROW_ID \
					"SNMPRowId"
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

#ifndef PROPERTY_MEDIA_SIZE_NAME
#define PROPERTY_MEDIA_SIZE_NAME \
					"MediaSizeName"
#endif

#ifndef PROPERTY_MEDIA_INFO
#define PROPERTY_MEDIA_INFO \
					"MediaInfo"
#endif

#ifndef PROPERTY_MEDIA_NAME
#define PROPERTY_MEDIA_NAME \
					"MediaName"
#endif

#ifndef PROPERTY_MEDIA_ACCOUNTING_KEY
#define PROPERTY_MEDIA_ACCOUNTING_KEY \
					"MediaAccountingKey"
#endif



class UNIX_ImagingMediaUsedStatisticalData :
	public CIM_ImagingStatisticalData
{
public:

	UNIX_ImagingMediaUsedStatisticalData();
	~UNIX_ImagingMediaUsedStatisticalData();

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
	virtual Boolean getSNMPRowId(CIMProperty&) const;
	virtual Uint32 getSNMPRowId() const;
	virtual void setSNMPRowId(Uint32&);
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
	virtual Boolean getMediaSizeName(CIMProperty&) const;
	virtual String getMediaSizeName() const;
	virtual void setMediaSizeName(String&);
	virtual Boolean getMediaInfo(CIMProperty&) const;
	virtual String getMediaInfo() const;
	virtual void setMediaInfo(String&);
	virtual Boolean getMediaName(CIMProperty&) const;
	virtual String getMediaName() const;
	virtual void setMediaName(String&);
	virtual Boolean getMediaAccountingKey(CIMProperty&) const;
	virtual String getMediaAccountingKey() const;
	virtual void setMediaAccountingKey(String&);

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
	Uint32 _sNMPRowId;
	Uint32 _totalSheets;
	Uint32 _monochromeSheets;
	Uint32 _blankSheets;
	Uint32 _fullColorSheets;
	Uint32 _highlightColorSheets;
	String _mediaSizeName;
	String _mediaInfo;
	String _mediaName;
	String _mediaAccountingKey;

#	include "UNIX_ImagingMediaUsedStatisticalDataPrivate.h"


};

#endif /* UNIX_IMAGINGMEDIAUSEDSTATISTICALDATA */
