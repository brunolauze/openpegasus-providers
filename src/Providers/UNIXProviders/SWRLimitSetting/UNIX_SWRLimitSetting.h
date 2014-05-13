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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::SWResources
*/


/* **** Description *** */
/*
SWRLimitSetting describes the limits of the software resource. In essence it is possible to define 6 different types of limits in groups of three. Each group consists of allocation, input and output limits. One group is always expressed by technical units (the default) and the other group in domain-specific units (e.g., items per second as the input limit). Thus, they are of different types. In order to avoid inconsistencies, only one group of settings is writable. The other one is derived from the writable limits. I.e., if technical limits are specifiable by the user (the type of the settings is technical) then the other set of limits (the non-writeable and derived settings) are domain-specific. 
SWRLimitSetting is associated to SoftwareResource via ElementSettingData. One software resource can have multiple limit settings. Only one of the settings is the default and one (potentially another one) is operational (current). Settings can be shared by software resources.
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

			UNIX_SWRLimitSetting:
				LowerInputLimit UInt32
				UpperInputLimit UInt32
				InputUnit String
				LowerOutputLimit UInt32
				UpperOutputLimit UInt32
				OutputUnit String
				LowerAllocationLimit UInt32
				UpperAllocationLimit UInt32
				AllocationUnit String
				OtherLowerInputLimit UInt32
				OtherUpperInputLimit UInt32
				OtherInputUnit String
				OtherLowerOutputLimit UInt32
				OtherUpperOutputLimit UInt32
				OtherOutputUnit String
				OtherLowerAllocationLimit UInt32
				OtherUpperAllocationLimit UInt32
				OtherAllocationUnit String
				LimitSettingType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_SWRLimitSetting:


*/

#ifndef __UNIX_SWRLIMITSETTING_H
#define __UNIX_SWRLIMITSETTING_H


#include "CIM_SettingData.h"

#include "UNIX_SWRLimitSettingDeps.h"


#ifndef PROPERTY_LOWER_INPUT_LIMIT
#define PROPERTY_LOWER_INPUT_LIMIT \
					"LowerInputLimit"
#endif

#ifndef PROPERTY_UPPER_INPUT_LIMIT
#define PROPERTY_UPPER_INPUT_LIMIT \
					"UpperInputLimit"
#endif

#ifndef PROPERTY_INPUT_UNIT
#define PROPERTY_INPUT_UNIT \
					"InputUnit"
#endif

#ifndef PROPERTY_LOWER_OUTPUT_LIMIT
#define PROPERTY_LOWER_OUTPUT_LIMIT \
					"LowerOutputLimit"
#endif

#ifndef PROPERTY_UPPER_OUTPUT_LIMIT
#define PROPERTY_UPPER_OUTPUT_LIMIT \
					"UpperOutputLimit"
#endif

#ifndef PROPERTY_OUTPUT_UNIT
#define PROPERTY_OUTPUT_UNIT \
					"OutputUnit"
#endif

#ifndef PROPERTY_LOWER_ALLOCATION_LIMIT
#define PROPERTY_LOWER_ALLOCATION_LIMIT \
					"LowerAllocationLimit"
#endif

#ifndef PROPERTY_UPPER_ALLOCATION_LIMIT
#define PROPERTY_UPPER_ALLOCATION_LIMIT \
					"UpperAllocationLimit"
#endif

#ifndef PROPERTY_ALLOCATION_UNIT
#define PROPERTY_ALLOCATION_UNIT \
					"AllocationUnit"
#endif

#ifndef PROPERTY_OTHER_LOWER_INPUT_LIMIT
#define PROPERTY_OTHER_LOWER_INPUT_LIMIT \
					"OtherLowerInputLimit"
#endif

#ifndef PROPERTY_OTHER_UPPER_INPUT_LIMIT
#define PROPERTY_OTHER_UPPER_INPUT_LIMIT \
					"OtherUpperInputLimit"
#endif

#ifndef PROPERTY_OTHER_INPUT_UNIT
#define PROPERTY_OTHER_INPUT_UNIT \
					"OtherInputUnit"
#endif

#ifndef PROPERTY_OTHER_LOWER_OUTPUT_LIMIT
#define PROPERTY_OTHER_LOWER_OUTPUT_LIMIT \
					"OtherLowerOutputLimit"
#endif

#ifndef PROPERTY_OTHER_UPPER_OUTPUT_LIMIT
#define PROPERTY_OTHER_UPPER_OUTPUT_LIMIT \
					"OtherUpperOutputLimit"
#endif

#ifndef PROPERTY_OTHER_OUTPUT_UNIT
#define PROPERTY_OTHER_OUTPUT_UNIT \
					"OtherOutputUnit"
#endif

#ifndef PROPERTY_OTHER_LOWER_ALLOCATION_LIMIT
#define PROPERTY_OTHER_LOWER_ALLOCATION_LIMIT \
					"OtherLowerAllocationLimit"
#endif

#ifndef PROPERTY_OTHER_UPPER_ALLOCATION_LIMIT
#define PROPERTY_OTHER_UPPER_ALLOCATION_LIMIT \
					"OtherUpperAllocationLimit"
#endif

#ifndef PROPERTY_OTHER_ALLOCATION_UNIT
#define PROPERTY_OTHER_ALLOCATION_UNIT \
					"OtherAllocationUnit"
#endif

#ifndef PROPERTY_LIMIT_SETTING_TYPE
#define PROPERTY_LIMIT_SETTING_TYPE \
					"LimitSettingType"
#endif



class UNIX_SWRLimitSetting :
	public CIM_SettingData
{
public:

	UNIX_SWRLimitSetting();
	~UNIX_SWRLimitSetting();

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
	virtual Boolean getLowerInputLimit(CIMProperty&) const;
	virtual Uint32 getLowerInputLimit() const;
	virtual void setLowerInputLimit(Uint32&);
	virtual Boolean getUpperInputLimit(CIMProperty&) const;
	virtual Uint32 getUpperInputLimit() const;
	virtual void setUpperInputLimit(Uint32&);
	virtual Boolean getInputUnit(CIMProperty&) const;
	virtual String getInputUnit() const;
	virtual void setInputUnit(String&);
	virtual Boolean getLowerOutputLimit(CIMProperty&) const;
	virtual Uint32 getLowerOutputLimit() const;
	virtual void setLowerOutputLimit(Uint32&);
	virtual Boolean getUpperOutputLimit(CIMProperty&) const;
	virtual Uint32 getUpperOutputLimit() const;
	virtual void setUpperOutputLimit(Uint32&);
	virtual Boolean getOutputUnit(CIMProperty&) const;
	virtual String getOutputUnit() const;
	virtual void setOutputUnit(String&);
	virtual Boolean getLowerAllocationLimit(CIMProperty&) const;
	virtual Uint32 getLowerAllocationLimit() const;
	virtual void setLowerAllocationLimit(Uint32&);
	virtual Boolean getUpperAllocationLimit(CIMProperty&) const;
	virtual Uint32 getUpperAllocationLimit() const;
	virtual void setUpperAllocationLimit(Uint32&);
	virtual Boolean getAllocationUnit(CIMProperty&) const;
	virtual String getAllocationUnit() const;
	virtual void setAllocationUnit(String&);
	virtual Boolean getOtherLowerInputLimit(CIMProperty&) const;
	virtual Uint32 getOtherLowerInputLimit() const;
	virtual void setOtherLowerInputLimit(Uint32&);
	virtual Boolean getOtherUpperInputLimit(CIMProperty&) const;
	virtual Uint32 getOtherUpperInputLimit() const;
	virtual void setOtherUpperInputLimit(Uint32&);
	virtual Boolean getOtherInputUnit(CIMProperty&) const;
	virtual String getOtherInputUnit() const;
	virtual void setOtherInputUnit(String&);
	virtual Boolean getOtherLowerOutputLimit(CIMProperty&) const;
	virtual Uint32 getOtherLowerOutputLimit() const;
	virtual void setOtherLowerOutputLimit(Uint32&);
	virtual Boolean getOtherUpperOutputLimit(CIMProperty&) const;
	virtual Uint32 getOtherUpperOutputLimit() const;
	virtual void setOtherUpperOutputLimit(Uint32&);
	virtual Boolean getOtherOutputUnit(CIMProperty&) const;
	virtual String getOtherOutputUnit() const;
	virtual void setOtherOutputUnit(String&);
	virtual Boolean getOtherLowerAllocationLimit(CIMProperty&) const;
	virtual Uint32 getOtherLowerAllocationLimit() const;
	virtual void setOtherLowerAllocationLimit(Uint32&);
	virtual Boolean getOtherUpperAllocationLimit(CIMProperty&) const;
	virtual Uint32 getOtherUpperAllocationLimit() const;
	virtual void setOtherUpperAllocationLimit(Uint32&);
	virtual Boolean getOtherAllocationUnit(CIMProperty&) const;
	virtual String getOtherAllocationUnit() const;
	virtual void setOtherAllocationUnit(String&);
	virtual Boolean getLimitSettingType(CIMProperty&) const;
	virtual Uint16 getLimitSettingType() const;
	virtual void setLimitSettingType(Uint16&);


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
	Uint32 _lowerInputLimit;
	Uint32 _upperInputLimit;
	String _inputUnit;
	Uint32 _lowerOutputLimit;
	Uint32 _upperOutputLimit;
	String _outputUnit;
	Uint32 _lowerAllocationLimit;
	Uint32 _upperAllocationLimit;
	String _allocationUnit;
	Uint32 _otherLowerInputLimit;
	Uint32 _otherUpperInputLimit;
	String _otherInputUnit;
	Uint32 _otherLowerOutputLimit;
	Uint32 _otherUpperOutputLimit;
	String _otherOutputUnit;
	Uint32 _otherLowerAllocationLimit;
	Uint32 _otherUpperAllocationLimit;
	String _otherAllocationUnit;
	Uint16 _limitSettingType;

#	include "UNIX_SWRLimitSettingPrivate.h"


};

#endif /* UNIX_SWRLIMITSETTING */
