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
2.37.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Processing
*/


/* **** Description *** */
/*
JobSettingData represents job characteristics and scheduling information for a CIM_Job. The settings may be applied to a job handling Service, a JobQueue or other destination to which jobs are submitted, and/or to individual CIM_Jobs. The applicability of the settings are defined using the ElementSettingData relationship. Since the Settings may be defined in several contexts and applied to many types of elements, this class is defined as a subclass of SettingData, versus ScopedSettingData.
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

			UNIX_JobSettingData:
				DeleteOnCompletion Boolean
				RecoveryAction UInt16
				OtherRecoveryAction String
				ClientRetries UInt32
				DefaultInputNames String
				DefaultInputValues String
				InteractiveTimeout DateTime
				RunInSilentMode Boolean
				TerminateOnTimeout Boolean
				ApplicableMethod String
				TimeBeforeRemoval DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_JobSettingData:


*/

#ifndef __UNIX_JOBSETTINGDATA_H
#define __UNIX_JOBSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_JobSettingDataDeps.h"


#ifndef PROPERTY_DELETE_ON_COMPLETION
#define PROPERTY_DELETE_ON_COMPLETION \
					"DeleteOnCompletion"
#endif

#ifndef PROPERTY_RECOVERY_ACTION
#define PROPERTY_RECOVERY_ACTION \
					"RecoveryAction"
#endif

#ifndef PROPERTY_OTHER_RECOVERY_ACTION
#define PROPERTY_OTHER_RECOVERY_ACTION \
					"OtherRecoveryAction"
#endif

#ifndef PROPERTY_CLIENT_RETRIES
#define PROPERTY_CLIENT_RETRIES \
					"ClientRetries"
#endif

#ifndef PROPERTY_DEFAULT_INPUT_NAMES
#define PROPERTY_DEFAULT_INPUT_NAMES \
					"DefaultInputNames"
#endif

#ifndef PROPERTY_DEFAULT_INPUT_VALUES
#define PROPERTY_DEFAULT_INPUT_VALUES \
					"DefaultInputValues"
#endif

#ifndef PROPERTY_INTERACTIVE_TIMEOUT
#define PROPERTY_INTERACTIVE_TIMEOUT \
					"InteractiveTimeout"
#endif

#ifndef PROPERTY_RUN_IN_SILENT_MODE
#define PROPERTY_RUN_IN_SILENT_MODE \
					"RunInSilentMode"
#endif

#ifndef PROPERTY_TERMINATE_ON_TIMEOUT
#define PROPERTY_TERMINATE_ON_TIMEOUT \
					"TerminateOnTimeout"
#endif

#ifndef PROPERTY_APPLICABLE_METHOD
#define PROPERTY_APPLICABLE_METHOD \
					"ApplicableMethod"
#endif

#ifndef PROPERTY_TIME_BEFORE_REMOVAL
#define PROPERTY_TIME_BEFORE_REMOVAL \
					"TimeBeforeRemoval"
#endif



class UNIX_JobSettingData :
	public CIM_SettingData
{
public:

	UNIX_JobSettingData();
	~UNIX_JobSettingData();

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
	virtual Boolean getDeleteOnCompletion(CIMProperty&) const;
	virtual Boolean getDeleteOnCompletion() const;
	virtual void setDeleteOnCompletion(Boolean&);
	virtual Boolean getRecoveryAction(CIMProperty&) const;
	virtual Uint16 getRecoveryAction() const;
	virtual void setRecoveryAction(Uint16&);
	virtual Boolean getOtherRecoveryAction(CIMProperty&) const;
	virtual String getOtherRecoveryAction() const;
	virtual void setOtherRecoveryAction(String&);
	virtual Boolean getClientRetries(CIMProperty&) const;
	virtual Uint32 getClientRetries() const;
	virtual void setClientRetries(Uint32&);
	virtual Boolean getDefaultInputNames(CIMProperty&) const;
	virtual Array<String> getDefaultInputNames() const;
	virtual void setDefaultInputNames(Array<String>&);
	virtual Boolean getDefaultInputValues(CIMProperty&) const;
	virtual Array<String> getDefaultInputValues() const;
	virtual void setDefaultInputValues(Array<String>&);
	virtual Boolean getInteractiveTimeout(CIMProperty&) const;
	virtual CIMDateTime getInteractiveTimeout() const;
	virtual void setInteractiveTimeout(CIMDateTime&);
	virtual Boolean getRunInSilentMode(CIMProperty&) const;
	virtual Boolean getRunInSilentMode() const;
	virtual void setRunInSilentMode(Boolean&);
	virtual Boolean getTerminateOnTimeout(CIMProperty&) const;
	virtual Boolean getTerminateOnTimeout() const;
	virtual void setTerminateOnTimeout(Boolean&);
	virtual Boolean getApplicableMethod(CIMProperty&) const;
	virtual String getApplicableMethod() const;
	virtual void setApplicableMethod(String&);
	virtual Boolean getTimeBeforeRemoval(CIMProperty&) const;
	virtual CIMDateTime getTimeBeforeRemoval() const;
	virtual void setTimeBeforeRemoval(CIMDateTime&);


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
	Boolean _deleteOnCompletion;
	Uint16 _recoveryAction;
	String _otherRecoveryAction;
	Uint32 _clientRetries;
	Array<String> _defaultInputNames;
	Array<String> _defaultInputValues;
	CIMDateTime _interactiveTimeout;
	Boolean _runInSilentMode;
	Boolean _terminateOnTimeout;
	String _applicableMethod;
	CIMDateTime _timeBeforeRemoval;

#	include "UNIX_JobSettingDataPrivate.h"


};

#endif /* UNIX_JOBSETTINGDATA */
