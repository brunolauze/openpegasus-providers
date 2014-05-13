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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Logs
*/


/* **** Description *** */
/*
Log represents any type of event, error or informational register or chronicle. The object describes the existence of the log and its characteristics. Log does not dictate the form of the data represented or how records/messages are stored in the log and/or accessed. Subclasses will define the appropriate methods and behavior.
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

			CIM_Log:
				MaxNumberOfRecords UInt64
				CurrentNumberOfRecords UInt64
				LogState UInt16
				OverwritePolicy UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			CIM_Log:
				ClearLog UInt32


*/

#ifndef __CIM_LOG_H
#define __CIM_LOG_H


#include "CIM_EnabledLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>


#ifndef PROPERTY_MAX_NUMBER_OF_RECORDS
#define PROPERTY_MAX_NUMBER_OF_RECORDS \
					"MaxNumberOfRecords"
#endif

#ifndef PROPERTY_CURRENT_NUMBER_OF_RECORDS
#define PROPERTY_CURRENT_NUMBER_OF_RECORDS \
					"CurrentNumberOfRecords"
#endif

#ifndef PROPERTY_LOG_STATE
#define PROPERTY_LOG_STATE \
					"LogState"
#endif

#ifndef PROPERTY_OVERWRITE_POLICY
#define PROPERTY_OVERWRITE_POLICY \
					"OverwritePolicy"
#endif



class CIM_Log :
	public CIM_EnabledLogicalElement
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

	virtual Boolean getMaxNumberOfRecords(CIMProperty&) const=0;
	virtual Uint64 getMaxNumberOfRecords() const=0;
	virtual void setMaxNumberOfRecords(Uint64&)=0;
	virtual Boolean getCurrentNumberOfRecords(CIMProperty&) const=0;
	virtual Uint64 getCurrentNumberOfRecords() const=0;
	virtual void setCurrentNumberOfRecords(Uint64&)=0;
	virtual Boolean getLogState(CIMProperty&) const=0;
	virtual Uint16 getLogState() const=0;
	virtual void setLogState(Uint16&)=0;
	virtual Boolean getOverwritePolicy(CIMProperty&) const=0;
	virtual Uint16 getOverwritePolicy() const=0;
	virtual void setOverwritePolicy(Uint16&)=0;

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)=0;

	virtual Uint32 invokeClearLog()=0;



private:

};

#endif /* CIM_LOG */
