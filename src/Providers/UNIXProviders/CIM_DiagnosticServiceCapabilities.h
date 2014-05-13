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
2.13.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
DiagnosticServiceCapabilities is a class that describes the capabilities of the diagnostic service. This provides the means for the diagnostic service to describe its abilities, limitations, and/or potential for use of various diagnostic service parameters. For example, what types of settings the diagnostic service supports.
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

			CIM_DiagnosticServiceCapabilities:
				SupportedServiceModes UInt16
				OtherSupportedServiceModesDescriptions String
				SupportedLoopControl UInt16
				OtherSupportedLoopControlDescriptions String
				SupportedLogOptions UInt16
				OtherSupportedLogOptionsDescriptions String
				SupportedLogStorage UInt16
				OtherSupportedLogStorageDescriptions String
				SupportedExecutionControls UInt16
				OtherSupportedExecutionControlsDescriptions String
				SupportedTestWarnings UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_DiagnosticServiceCapabilities:


*/

#ifndef __CIM_DIAGNOSTICSERVICECAPABILITIES_H
#define __CIM_DIAGNOSTICSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"


#ifndef PROPERTY_SUPPORTED_SERVICE_MODES
#define PROPERTY_SUPPORTED_SERVICE_MODES \
					"SupportedServiceModes"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_SERVICE_MODES_DESCRIPTIONS
#define PROPERTY_OTHER_SUPPORTED_SERVICE_MODES_DESCRIPTIONS \
					"OtherSupportedServiceModesDescriptions"
#endif

#ifndef PROPERTY_SUPPORTED_LOOP_CONTROL
#define PROPERTY_SUPPORTED_LOOP_CONTROL \
					"SupportedLoopControl"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_LOOP_CONTROL_DESCRIPTIONS
#define PROPERTY_OTHER_SUPPORTED_LOOP_CONTROL_DESCRIPTIONS \
					"OtherSupportedLoopControlDescriptions"
#endif

#ifndef PROPERTY_SUPPORTED_LOG_OPTIONS
#define PROPERTY_SUPPORTED_LOG_OPTIONS \
					"SupportedLogOptions"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_LOG_OPTIONS_DESCRIPTIONS
#define PROPERTY_OTHER_SUPPORTED_LOG_OPTIONS_DESCRIPTIONS \
					"OtherSupportedLogOptionsDescriptions"
#endif

#ifndef PROPERTY_SUPPORTED_LOG_STORAGE
#define PROPERTY_SUPPORTED_LOG_STORAGE \
					"SupportedLogStorage"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_LOG_STORAGE_DESCRIPTIONS
#define PROPERTY_OTHER_SUPPORTED_LOG_STORAGE_DESCRIPTIONS \
					"OtherSupportedLogStorageDescriptions"
#endif

#ifndef PROPERTY_SUPPORTED_EXECUTION_CONTROLS
#define PROPERTY_SUPPORTED_EXECUTION_CONTROLS \
					"SupportedExecutionControls"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_EXECUTION_CONTROLS_DESCRIPTIONS
#define PROPERTY_OTHER_SUPPORTED_EXECUTION_CONTROLS_DESCRIPTIONS \
					"OtherSupportedExecutionControlsDescriptions"
#endif

#ifndef PROPERTY_SUPPORTED_TEST_WARNINGS
#define PROPERTY_SUPPORTED_TEST_WARNINGS \
					"SupportedTestWarnings"
#endif



class CIM_DiagnosticServiceCapabilities :
	public CIM_Capabilities
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

	virtual Boolean getSupportedServiceModes(CIMProperty&) const=0;
	virtual Array<Uint16> getSupportedServiceModes() const=0;
	virtual void setSupportedServiceModes(Array<Uint16>&)=0;
	virtual Boolean getOtherSupportedServiceModesDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherSupportedServiceModesDescriptions() const=0;
	virtual void setOtherSupportedServiceModesDescriptions(Array<String>&)=0;
	virtual Boolean getSupportedLoopControl(CIMProperty&) const=0;
	virtual Array<Uint16> getSupportedLoopControl() const=0;
	virtual void setSupportedLoopControl(Array<Uint16>&)=0;
	virtual Boolean getOtherSupportedLoopControlDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherSupportedLoopControlDescriptions() const=0;
	virtual void setOtherSupportedLoopControlDescriptions(Array<String>&)=0;
	virtual Boolean getSupportedLogOptions(CIMProperty&) const=0;
	virtual Array<Uint16> getSupportedLogOptions() const=0;
	virtual void setSupportedLogOptions(Array<Uint16>&)=0;
	virtual Boolean getOtherSupportedLogOptionsDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherSupportedLogOptionsDescriptions() const=0;
	virtual void setOtherSupportedLogOptionsDescriptions(Array<String>&)=0;
	virtual Boolean getSupportedLogStorage(CIMProperty&) const=0;
	virtual Array<Uint16> getSupportedLogStorage() const=0;
	virtual void setSupportedLogStorage(Array<Uint16>&)=0;
	virtual Boolean getOtherSupportedLogStorageDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherSupportedLogStorageDescriptions() const=0;
	virtual void setOtherSupportedLogStorageDescriptions(Array<String>&)=0;
	virtual Boolean getSupportedExecutionControls(CIMProperty&) const=0;
	virtual Array<Uint16> getSupportedExecutionControls() const=0;
	virtual void setSupportedExecutionControls(Array<Uint16>&)=0;
	virtual Boolean getOtherSupportedExecutionControlsDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherSupportedExecutionControlsDescriptions() const=0;
	virtual void setOtherSupportedExecutionControlsDescriptions(Array<String>&)=0;
	virtual Boolean getSupportedTestWarnings(CIMProperty&) const=0;
	virtual Uint16 getSupportedTestWarnings() const=0;
	virtual void setSupportedTestWarnings(Uint16&)=0;

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)=0;



private:

};

#endif /* CIM_DIAGNOSTICSERVICECAPABILITIES */
