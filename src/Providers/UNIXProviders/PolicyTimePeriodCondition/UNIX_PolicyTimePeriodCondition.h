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


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
This class provides a means of representing the time periods during which a PolicySet is valid, i.e., active. At all times that fall outside these time periods, the PolicySet has no effect. A PolicySet is treated as valid at ALL times, if it does not specify a PolicyTimePeriodCondition. 

In some cases a Policy Consumer may need to perform certain setup / cleanup actions when a PolicySet becomes active / inactive. For example, sessions that were established while a PolicySet was active might need to be taken down when the PolicySet becomes inactive. In other cases, however, such sessions might be left up. In this case, the effect of deactivating the PolicySet would just be to prevent the establishment of new sessions. 

Setup / cleanup behaviors on validity period transitions are not currently addressed by the Policy Model, and must be specified in 'guideline' documents or via subclasses of CIM_PolicySet, CIM_PolicyTimePeriod Condition or other concrete subclasses of CIM_Policy. If such behaviors need to be under the control of the policy administrator, then a mechanism to allow this control must also be specified in the subclasses. 

PolicyTimePeriodCondition is defined as a subclass of PolicyCondition. This is to allow the inclusion of time-based criteria in the AND/OR condition definitions for a PolicyRule. 

Instances of this class may have up to five properties identifying time periods at different levels. The values of all the properties present in an instance are ANDed together to determine the validity period(s) for the instance. For example, an instance with an overall validity range of January 1, 2000 through December 31, 2000; a month mask that selects March and April; a day-of-the-week mask that selects Fridays; and a time of day range of 0800 through 1600 would be represented using the following time periods: 
Friday, March 5, 2000, from 0800 through 1600; 
Friday, March 12, 2000, from 0800 through 1600; 
Friday, March 19, 2000, from 0800 through 1600; 
Friday, March 26, 2000, from 0800 through 1600; 
Friday, April 2, 2000, from 0800 through 1600; 
Friday, April 9, 2000, from 0800 through 1600; 
Friday, April 16, 2000, from 0800 through 1600; 
Friday, April 23, 2000, from 0800 through 1600; 
Friday, April 30, 2000, from 0800 through 1600. 

Properties not present in an instance of PolicyTimePeriodCondition are implicitly treated as having their value 'always enabled'. Thus, in the example above, the day-of-the-month mask is not present, and so the validity period for the instance implicitly includes a day-of-the-month mask that selects all days of the month. If this 'missing property' rule is applied to its fullest, we see that there is a second way to indicate that a PolicySet is always enabled: associate with it an instance of PolicyTimePeriodCondition whose only properties with specific values are its key properties.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Policy:
				CommonName String
				PolicyKeywords String

			CIM_PolicyCondition:
				SystemCreationClassName String
				SystemName String
				PolicyRuleCreationClassName String
				PolicyRuleName String
				CreationClassName String
				PolicyConditionName String

			UNIX_PolicyTimePeriodCondition:
				TimePeriod String
				MonthOfYearMask UInt8
				DayOfMonthMask UInt8
				DayOfWeekMask UInt8
				TimeOfDayMask String
				LocalOrUtcTime UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicyCondition:

			UNIX_PolicyTimePeriodCondition:


*/

#ifndef __UNIX_POLICYTIMEPERIODCONDITION_H
#define __UNIX_POLICYTIMEPERIODCONDITION_H


#include "CIM_PolicyCondition.h"

#include "UNIX_PolicyTimePeriodConditionDeps.h"


#ifndef PROPERTY_TIME_PERIOD
#define PROPERTY_TIME_PERIOD \
					"TimePeriod"
#endif

#ifndef PROPERTY_MONTH_OF_YEAR_MASK
#define PROPERTY_MONTH_OF_YEAR_MASK \
					"MonthOfYearMask"
#endif

#ifndef PROPERTY_DAY_OF_MONTH_MASK
#define PROPERTY_DAY_OF_MONTH_MASK \
					"DayOfMonthMask"
#endif

#ifndef PROPERTY_DAY_OF_WEEK_MASK
#define PROPERTY_DAY_OF_WEEK_MASK \
					"DayOfWeekMask"
#endif

#ifndef PROPERTY_TIME_OF_DAY_MASK
#define PROPERTY_TIME_OF_DAY_MASK \
					"TimeOfDayMask"
#endif

#ifndef PROPERTY_LOCAL_OR_UTC_TIME
#define PROPERTY_LOCAL_OR_UTC_TIME \
					"LocalOrUtcTime"
#endif



class UNIX_PolicyTimePeriodCondition :
	public CIM_PolicyCondition
{
public:

	UNIX_PolicyTimePeriodCondition();
	~UNIX_PolicyTimePeriodCondition();

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
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual void setCommonName(String&);
	virtual Boolean getPolicyKeywords(CIMProperty&) const;
	virtual Array<String> getPolicyKeywords() const;
	virtual void setPolicyKeywords(Array<String>&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getPolicyRuleCreationClassName(CIMProperty&) const;
	virtual String getPolicyRuleCreationClassName() const;
	virtual void setPolicyRuleCreationClassName(String&);
	virtual Boolean getPolicyRuleName(CIMProperty&) const;
	virtual String getPolicyRuleName() const;
	virtual void setPolicyRuleName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getPolicyConditionName(CIMProperty&) const;
	virtual String getPolicyConditionName() const;
	virtual void setPolicyConditionName(String&);
	virtual Boolean getTimePeriod(CIMProperty&) const;
	virtual String getTimePeriod() const;
	virtual void setTimePeriod(String&);
	virtual Boolean getMonthOfYearMask(CIMProperty&) const;
	virtual Array<Uint8> getMonthOfYearMask() const;
	virtual void setMonthOfYearMask(Array<Uint8>&);
	virtual Boolean getDayOfMonthMask(CIMProperty&) const;
	virtual Array<Uint8> getDayOfMonthMask() const;
	virtual void setDayOfMonthMask(Array<Uint8>&);
	virtual Boolean getDayOfWeekMask(CIMProperty&) const;
	virtual Array<Uint8> getDayOfWeekMask() const;
	virtual void setDayOfWeekMask(Array<Uint8>&);
	virtual Boolean getTimeOfDayMask(CIMProperty&) const;
	virtual String getTimeOfDayMask() const;
	virtual void setTimeOfDayMask(String&);
	virtual Boolean getLocalOrUtcTime(CIMProperty&) const;
	virtual Uint16 getLocalOrUtcTime() const;
	virtual void setLocalOrUtcTime(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _commonName;
	Array<String> _policyKeywords;
	String _systemCreationClassName;
	String _systemName;
	String _policyRuleCreationClassName;
	String _policyRuleName;
	String _creationClassName;
	String _policyConditionName;
	String _timePeriod;
	Array<Uint8> _monthOfYearMask;
	Array<Uint8> _dayOfMonthMask;
	Array<Uint8> _dayOfWeekMask;
	String _timeOfDayMask;
	Uint16 _localOrUtcTime;

#	include "UNIX_PolicyTimePeriodConditionPrivate.h"


};

#endif /* UNIX_POLICYTIMEPERIODCONDITION */
