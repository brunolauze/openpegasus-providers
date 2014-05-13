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
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
The CIM_DiagnosticTest class represents the framework for running diagnostic tests. Specific diagnostic tests may be defined by subclassing and/or instantiating this object. To provide more detail for a type of test(s) (i.e, additional properties and methods), subclassing is appropriate. 
When a DiagnosticTest can be simultaneously executed against several elements, then DiagnosticTest may launch a ConcreteJob to represent each execution.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				EnabledState UInt16
				OtherEnabledState String
				RequestedState UInt16
				EnabledDefault UInt16
				TimeOfLastStateChange DateTime
				AvailableRequestedStates UInt16
				TransitioningToState UInt16

			CIM_Service:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				PrimaryOwnerName String
				PrimaryOwnerContact String
				StartMode String
				Started Boolean
				LoSID String
				LoSOrgID String

			CIM_DiagnosticService:

			CIM_DiagnosticTest:
				Characteristics UInt16
				OtherCharacteristicDescription String
				OtherCharacteristicsDescriptions String
				IsInUse Boolean
				ResourcesUsed UInt16
				TestTypes UInt16
				OtherTestTypesDescriptions String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_Service:
				StartService UInt32
				StopService UInt32
				ChangeAffectedElementsAssignedSequence UInt32

			CIM_DiagnosticService:
				RunDiagnostic UInt32
				RunDiagnosticService UInt32

			CIM_DiagnosticTest:
				RunTest UInt32
				ClearResults UInt32
				DiscontinueTest UInt32


*/

#ifndef __CIM_DIAGNOSTICTEST_H
#define __CIM_DIAGNOSTICTEST_H


#include "CIM_DiagnosticService.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>
#include <DiagnosticSetting/UNIX_DiagnosticSetting.h>
#include <JobSettingData/UNIX_JobSettingData.h>
#include <DiagnosticResult/UNIX_DiagnosticResult.h>


#ifndef PROPERTY_CHARACTERISTICS
#define PROPERTY_CHARACTERISTICS \
					"Characteristics"
#endif

#ifndef PROPERTY_OTHER_CHARACTERISTIC_DESCRIPTION
#define PROPERTY_OTHER_CHARACTERISTIC_DESCRIPTION \
					"OtherCharacteristicDescription"
#endif

#ifndef PROPERTY_OTHER_CHARACTERISTICS_DESCRIPTIONS
#define PROPERTY_OTHER_CHARACTERISTICS_DESCRIPTIONS \
					"OtherCharacteristicsDescriptions"
#endif

#ifndef PROPERTY_IS_IN_USE
#define PROPERTY_IS_IN_USE \
					"IsInUse"
#endif

#ifndef PROPERTY_RESOURCES_USED
#define PROPERTY_RESOURCES_USED \
					"ResourcesUsed"
#endif

#ifndef PROPERTY_TEST_TYPES
#define PROPERTY_TEST_TYPES \
					"TestTypes"
#endif

#ifndef PROPERTY_OTHER_TEST_TYPES_DESCRIPTIONS
#define PROPERTY_OTHER_TEST_TYPES_DESCRIPTIONS \
					"OtherTestTypesDescriptions"
#endif



class CIM_DiagnosticTest :
	public CIM_DiagnosticService
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean loadByName(const String)=0;
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

	virtual Boolean getCharacteristics(CIMProperty&) const=0;
	virtual Array<Uint16> getCharacteristics() const=0;
	virtual void setCharacteristics(Array<Uint16>&)=0;
	virtual Boolean getOtherCharacteristicDescription(CIMProperty&) const=0;
	virtual String getOtherCharacteristicDescription() const=0;
	virtual void setOtherCharacteristicDescription(String&)=0;
	virtual Boolean getOtherCharacteristicsDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherCharacteristicsDescriptions() const=0;
	virtual void setOtherCharacteristicsDescriptions(Array<String>&)=0;
	virtual Boolean getIsInUse(CIMProperty&) const=0;
	virtual Boolean getIsInUse() const=0;
	virtual void setIsInUse(Boolean&)=0;
	virtual Boolean getResourcesUsed(CIMProperty&) const=0;
	virtual Array<Uint16> getResourcesUsed() const=0;
	virtual void setResourcesUsed(Array<Uint16>&)=0;
	virtual Boolean getTestTypes(CIMProperty&) const=0;
	virtual Array<Uint16> getTestTypes() const=0;
	virtual void setTestTypes(Array<Uint16>&)=0;
	virtual Boolean getOtherTestTypesDescriptions(CIMProperty&) const=0;
	virtual Array<String> getOtherTestTypesDescriptions() const=0;
	virtual void setOtherTestTypesDescriptions(Array<String>&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeStartService()=0;

	virtual Uint32 invokeStopService()=0;

	virtual Uint32 invokeChangeAffectedElementsAssignedSequence(
		CIMInstance &inManagedElements,
		Array<Uint16> &inAssignedSequence,
		CIMInstance &inJob
	)=0;

	virtual Uint32 invokeRunDiagnostic(
		CIMInstance &inManagedElement,
		CIMInstance &inDiagSetting,
		CIMInstance &inJobSetting,
		CIMInstance &inJob
	)=0;

	virtual Uint32 invokeRunDiagnosticService(
		CIMInstance &inManagedElement,
		String &inDiagnosticSettings,
		String &inJobSettings,
		CIMInstance &inJob
	)=0;

	virtual Uint32 invokeRunTest(
		CIMInstance &inSystemElement,
		CIMInstance &inSetting,
		CIMInstance &inResult
	)=0;

	virtual Uint32 invokeClearResults(
		CIMInstance &inSystemElement,
		Array<String> &inResultsNotCleared
	)=0;

	virtual Uint32 invokeDiscontinueTest(
		CIMInstance &inSystemElement,
		CIMInstance &inResult,
		Boolean &inTestingStopped
	)=0;



private:

};

#endif /* CIM_DIAGNOSTICTEST */
