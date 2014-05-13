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
2.13.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
Specific diagnostic test parameters and execution instructions are defined by this class. To provide more detailed Settings for a type of test (i.e., additional properties), subclassing is appropriate.
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

			CIM_DiagnosticSettingData:
				HaltOnError Boolean
				QuickMode Boolean
				PercentOfTestCoverage UInt8
				LoopControlParameter String
				LoopControl UInt16
				OtherLoopControlDescriptions String
				ResultPersistence UInt32
				LogOptions UInt16
				OtherLogOptionsDescriptions String
				LogStorage UInt16
				OtherLogStorageDescriptions String
				VerbosityLevel UInt16
				QueryTimeout UInt32
				NonDestructive Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_DiagnosticSettingData:


*/

#ifndef __CIM_DIAGNOSTICSETTINGDATA_H
#define __CIM_DIAGNOSTICSETTINGDATA_H


#include "CIM_SettingData.h"


#ifndef PROPERTY_HALT_ON_ERROR
#define PROPERTY_HALT_ON_ERROR \
					"HaltOnError"
#endif

#ifndef PROPERTY_QUICK_MODE
#define PROPERTY_QUICK_MODE \
					"QuickMode"
#endif

#ifndef PROPERTY_PERCENT_OF_TEST_COVERAGE
#define PROPERTY_PERCENT_OF_TEST_COVERAGE \
					"PercentOfTestCoverage"
#endif

#ifndef PROPERTY_LOOP_CONTROL_PARAMETER
#define PROPERTY_LOOP_CONTROL_PARAMETER \
					"LoopControlParameter"
#endif

#ifndef PROPERTY_LOOP_CONTROL
#define PROPERTY_LOOP_CONTROL \
					"LoopControl"
#endif

#ifndef PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS
#define PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS \
					"OtherLoopControlDescriptions"
#endif

#ifndef PROPERTY_RESULT_PERSISTENCE
#define PROPERTY_RESULT_PERSISTENCE \
					"ResultPersistence"
#endif

#ifndef PROPERTY_LOG_OPTIONS
#define PROPERTY_LOG_OPTIONS \
					"LogOptions"
#endif

#ifndef PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS
#define PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS \
					"OtherLogOptionsDescriptions"
#endif

#ifndef PROPERTY_LOG_STORAGE
#define PROPERTY_LOG_STORAGE \
					"LogStorage"
#endif

#ifndef PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS
#define PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS \
					"OtherLogStorageDescriptions"
#endif

#ifndef PROPERTY_VERBOSITY_LEVEL
#define PROPERTY_VERBOSITY_LEVEL \
					"VerbosityLevel"
#endif

#ifndef PROPERTY_QUERY_TIMEOUT
#define PROPERTY_QUERY_TIMEOUT \
					"QueryTimeout"
#endif

#ifndef PROPERTY_NON_DESTRUCTIVE
#define PROPERTY_NON_DESTRUCTIVE \
					"NonDestructive"
#endif



class CIM_DiagnosticSettingData :
	public CIM_SettingData
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getHaltOnError(CIMProperty&) const=0;
	virtual Boolean getHaltOnError() const=0;
	virtual void setHaltOnError(Boolean&)=0;
	virtual Boolean getQuickMode(CIMProperty&) const=0;
	virtual Boolean getQuickMode() const=0;
	virtual void setQuickMode(Boolean&)=0;
	virtual Boolean getPercentOfTestCoverage(CIMProperty&) const=0;
	virtual Uint8 getPercentOfTestCoverage() const=0;
	virtual void setPercentOfTestCoverage(Uint8&)=0;
	virtual Boolean getLoopControlParameter(CIMProperty&) const=0;
	virtual Array<String> getLoopControlParameter() const=0;
	virtual void setLoopControlParameter(Array<String>&)=0;
	virtual Boolean getLoopControl(CIMProperty&) const=0;
	virtual Array<Uint16> getLoopControl() const=0;
	virtual void setLoopControl(Array<Uint16>&)=0;
	virtual Boolean getOtherLoopControlDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherLoopControlDescriptions() const=0;
	virtual void setOtherLoopControlDescriptions(Array<String>&)=0;
	virtual Boolean getResultPersistence(CIMProperty&) const=0;
	virtual Uint32 getResultPersistence() const=0;
	virtual void setResultPersistence(Uint32&)=0;
	virtual Boolean getLogOptions(CIMProperty&) const=0;
	virtual Array<Uint16> getLogOptions() const=0;
	virtual void setLogOptions(Array<Uint16>&)=0;
	virtual Boolean getOtherLogOptionsDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherLogOptionsDescriptions() const=0;
	virtual void setOtherLogOptionsDescriptions(Array<String>&)=0;
	virtual Boolean getLogStorage(CIMProperty&) const=0;
	virtual Array<Uint16> getLogStorage() const=0;
	virtual void setLogStorage(Array<Uint16>&)=0;
	virtual Boolean getOtherLogStorageDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherLogStorageDescriptions() const=0;
	virtual void setOtherLogStorageDescriptions(Array<String>&)=0;
	virtual Boolean getVerbosityLevel(CIMProperty&) const=0;
	virtual Array<Uint16> getVerbosityLevel() const=0;
	virtual void setVerbosityLevel(Array<Uint16>&)=0;
	virtual Boolean getQueryTimeout(CIMProperty&) const=0;
	virtual Uint32 getQueryTimeout() const=0;
	virtual void setQueryTimeout(Uint32&)=0;
	virtual Boolean getNonDestructive(CIMProperty&) const=0;
	virtual Boolean getNonDestructive() const=0;
	virtual void setNonDestructive(Boolean&)=0;


private:

};

#endif /* CIM_DIAGNOSTICSETTINGDATA */
