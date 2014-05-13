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


/* **** Deprecated *** */
/*
CIM_TimeZoneSettingData
*/


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Time
*/


/* **** Description *** */
/*
The TimeZone class is a set of properties defining a particular time zone. These properties include the concept of daylight saving time. It is deprecated to move the concept into the SettingData hierarchy.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Setting:
				SettingID String

			UNIX_TimeZone:
				TimeZoneID String
				TimeZoneStartDate DateTime
				StandardName String
				StandardCaption String
				StandardOffset SInt32
				StandardMonth UInt8
				StandardDay SInt8
				StandardDayOfWeek SInt8
				StandardStartInterval DateTime
				DaylightName String
				DaylightCaption String
				DaylightOffset SInt32
				DaylightMonth UInt8
				DaylightDay SInt8
				DaylightDayOfWeek SInt8
				DaylightStartInterval DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Setting:
				VerifyOKToApplyToMSE UInt32
				ApplyToMSE UInt32
				VerifyOKToApplyToCollection UInt32
				ApplyToCollection UInt32
				VerifyOKToApplyIncrementalChangeToMSE UInt32
				ApplyIncrementalChangeToMSE UInt32
				VerifyOKToApplyIncrementalChangeToCollection UInt32
				ApplyIncrementalChangeToCollection UInt32

			UNIX_TimeZone:


*/

#ifndef __UNIX_TIMEZONE_H
#define __UNIX_TIMEZONE_H


#include "CIM_Setting.h"

#include "UNIX_TimeZoneDeps.h"


#ifndef PROPERTY_TIME_ZONE_ID
#define PROPERTY_TIME_ZONE_ID \
					"TimeZoneID"
#endif

#ifndef PROPERTY_TIME_ZONE_START_DATE
#define PROPERTY_TIME_ZONE_START_DATE \
					"TimeZoneStartDate"
#endif

#ifndef PROPERTY_STANDARD_NAME
#define PROPERTY_STANDARD_NAME \
					"StandardName"
#endif

#ifndef PROPERTY_STANDARD_CAPTION
#define PROPERTY_STANDARD_CAPTION \
					"StandardCaption"
#endif

#ifndef PROPERTY_STANDARD_OFFSET
#define PROPERTY_STANDARD_OFFSET \
					"StandardOffset"
#endif

#ifndef PROPERTY_STANDARD_MONTH
#define PROPERTY_STANDARD_MONTH \
					"StandardMonth"
#endif

#ifndef PROPERTY_STANDARD_DAY
#define PROPERTY_STANDARD_DAY \
					"StandardDay"
#endif

#ifndef PROPERTY_STANDARD_DAY_OF_WEEK
#define PROPERTY_STANDARD_DAY_OF_WEEK \
					"StandardDayOfWeek"
#endif

#ifndef PROPERTY_STANDARD_START_INTERVAL
#define PROPERTY_STANDARD_START_INTERVAL \
					"StandardStartInterval"
#endif

#ifndef PROPERTY_DAYLIGHT_NAME
#define PROPERTY_DAYLIGHT_NAME \
					"DaylightName"
#endif

#ifndef PROPERTY_DAYLIGHT_CAPTION
#define PROPERTY_DAYLIGHT_CAPTION \
					"DaylightCaption"
#endif

#ifndef PROPERTY_DAYLIGHT_OFFSET
#define PROPERTY_DAYLIGHT_OFFSET \
					"DaylightOffset"
#endif

#ifndef PROPERTY_DAYLIGHT_MONTH
#define PROPERTY_DAYLIGHT_MONTH \
					"DaylightMonth"
#endif

#ifndef PROPERTY_DAYLIGHT_DAY
#define PROPERTY_DAYLIGHT_DAY \
					"DaylightDay"
#endif

#ifndef PROPERTY_DAYLIGHT_DAY_OF_WEEK
#define PROPERTY_DAYLIGHT_DAY_OF_WEEK \
					"DaylightDayOfWeek"
#endif

#ifndef PROPERTY_DAYLIGHT_START_INTERVAL
#define PROPERTY_DAYLIGHT_START_INTERVAL \
					"DaylightStartInterval"
#endif



class UNIX_TimeZone :
	public CIM_Setting
{
public:

	UNIX_TimeZone();
	~UNIX_TimeZone();

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
	virtual Boolean getSettingID(CIMProperty&) const;
	virtual String getSettingID() const;
	virtual void setSettingID(String&);
	virtual Boolean getTimeZoneID(CIMProperty&) const;
	virtual String getTimeZoneID() const;
	virtual void setTimeZoneID(String&);
	virtual Boolean getTimeZoneStartDate(CIMProperty&) const;
	virtual CIMDateTime getTimeZoneStartDate() const;
	virtual void setTimeZoneStartDate(CIMDateTime&);
	virtual Boolean getStandardName(CIMProperty&) const;
	virtual String getStandardName() const;
	virtual void setStandardName(String&);
	virtual Boolean getStandardCaption(CIMProperty&) const;
	virtual String getStandardCaption() const;
	virtual void setStandardCaption(String&);
	virtual Boolean getStandardOffset(CIMProperty&) const;
	virtual Sint32 getStandardOffset() const;
	virtual void setStandardOffset(Sint32&);
	virtual Boolean getStandardMonth(CIMProperty&) const;
	virtual Uint8 getStandardMonth() const;
	virtual void setStandardMonth(Uint8&);
	virtual Boolean getStandardDay(CIMProperty&) const;
	virtual Sint8 getStandardDay() const;
	virtual void setStandardDay(Sint8&);
	virtual Boolean getStandardDayOfWeek(CIMProperty&) const;
	virtual Sint8 getStandardDayOfWeek() const;
	virtual void setStandardDayOfWeek(Sint8&);
	virtual Boolean getStandardStartInterval(CIMProperty&) const;
	virtual CIMDateTime getStandardStartInterval() const;
	virtual void setStandardStartInterval(CIMDateTime&);
	virtual Boolean getDaylightName(CIMProperty&) const;
	virtual String getDaylightName() const;
	virtual void setDaylightName(String&);
	virtual Boolean getDaylightCaption(CIMProperty&) const;
	virtual String getDaylightCaption() const;
	virtual void setDaylightCaption(String&);
	virtual Boolean getDaylightOffset(CIMProperty&) const;
	virtual Sint32 getDaylightOffset() const;
	virtual void setDaylightOffset(Sint32&);
	virtual Boolean getDaylightMonth(CIMProperty&) const;
	virtual Uint8 getDaylightMonth() const;
	virtual void setDaylightMonth(Uint8&);
	virtual Boolean getDaylightDay(CIMProperty&) const;
	virtual Sint8 getDaylightDay() const;
	virtual void setDaylightDay(Sint8&);
	virtual Boolean getDaylightDayOfWeek(CIMProperty&) const;
	virtual Sint8 getDaylightDayOfWeek() const;
	virtual void setDaylightDayOfWeek(Sint8&);
	virtual Boolean getDaylightStartInterval(CIMProperty&) const;
	virtual CIMDateTime getDaylightStartInterval() const;
	virtual void setDaylightStartInterval(CIMDateTime&);

	virtual Uint32 invokeVerifyOKToApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	);

	virtual Uint32 invokeApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	);

	virtual Uint32 invokeVerifyOKToApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	);

	virtual Uint32 invokeApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	);

	virtual Uint32 invokeVerifyOKToApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	);

	virtual Uint32 invokeApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	);

	virtual Uint32 invokeVerifyOKToApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	);

	virtual Uint32 invokeApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _settingID;
	String _timeZoneID;
	CIMDateTime _timeZoneStartDate;
	String _standardName;
	String _standardCaption;
	Sint32 _standardOffset;
	Uint8 _standardMonth;
	Sint8 _standardDay;
	Sint8 _standardDayOfWeek;
	CIMDateTime _standardStartInterval;
	String _daylightName;
	String _daylightCaption;
	Sint32 _daylightOffset;
	Uint8 _daylightMonth;
	Sint8 _daylightDay;
	Sint8 _daylightDayOfWeek;
	CIMDateTime _daylightStartInterval;

#	include "UNIX_TimeZonePrivate.h"


};

#endif /* UNIX_TIMEZONE */
