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
2.37.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Processing
*/


/* **** Description *** */
/*
CIM_DiagnosticServiceJobCapabilities identifies the capabilities of a job created as a result of a DiagnosticService method.
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

			UNIX_JobCapabilities:
				DeleteJobSupported Boolean
				RequestedStatesSupported UInt16
				InteractiveTimeoutMax DateTime
				DefaultValuesSupported Boolean
				ClientRetriesMax UInt32
				CleanupInterval DateTime
				SilentModeSupported Boolean
				Characteristics String
				OtherCharacteristicsDescriptions String
				ApplicableMethods String
				TimeBeforeRemovalMin DateTime
				TimeBeforeRemovalMax DateTime

			UNIX_DiagnosticServiceJobCapabilities:


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_JobCapabilities:

			UNIX_DiagnosticServiceJobCapabilities:


*/

#ifndef __UNIX_DIAGNOSTICSERVICEJOBCAPABILITIES_H
#define __UNIX_DIAGNOSTICSERVICEJOBCAPABILITIES_H


#include <JobCapabilities/UNIX_JobCapabilities.h>

#include "UNIX_DiagnosticServiceJobCapabilitiesDeps.h"




class UNIX_DiagnosticServiceJobCapabilities :
	public UNIX_JobCapabilities
{
public:

	UNIX_DiagnosticServiceJobCapabilities();
	~UNIX_DiagnosticServiceJobCapabilities();

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
	virtual Boolean getDeleteJobSupported(CIMProperty&) const;
	virtual Boolean getDeleteJobSupported() const;
	virtual void setDeleteJobSupported(Boolean&);
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupported() const;
	virtual void setRequestedStatesSupported(Array<Uint16>&);
	virtual Boolean getInteractiveTimeoutMax(CIMProperty&) const;
	virtual CIMDateTime getInteractiveTimeoutMax() const;
	virtual void setInteractiveTimeoutMax(CIMDateTime&);
	virtual Boolean getDefaultValuesSupported(CIMProperty&) const;
	virtual Boolean getDefaultValuesSupported() const;
	virtual void setDefaultValuesSupported(Boolean&);
	virtual Boolean getClientRetriesMax(CIMProperty&) const;
	virtual Uint32 getClientRetriesMax() const;
	virtual void setClientRetriesMax(Uint32&);
	virtual Boolean getCleanupInterval(CIMProperty&) const;
	virtual CIMDateTime getCleanupInterval() const;
	virtual void setCleanupInterval(CIMDateTime&);
	virtual Boolean getSilentModeSupported(CIMProperty&) const;
	virtual Boolean getSilentModeSupported() const;
	virtual void setSilentModeSupported(Boolean&);
	virtual Boolean getCharacteristics(CIMProperty&) const;
	virtual Array<String> getCharacteristics() const;
	virtual void setCharacteristics(Array<String>&);
	virtual Boolean getOtherCharacteristicsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherCharacteristicsDescriptions() const;
	virtual void setOtherCharacteristicsDescriptions(Array<String>&);
	virtual Boolean getApplicableMethods(CIMProperty&) const;
	virtual Array<String> getApplicableMethods() const;
	virtual void setApplicableMethods(Array<String>&);
	virtual Boolean getTimeBeforeRemovalMin(CIMProperty&) const;
	virtual CIMDateTime getTimeBeforeRemovalMin() const;
	virtual void setTimeBeforeRemovalMin(CIMDateTime&);
	virtual Boolean getTimeBeforeRemovalMax(CIMProperty&) const;
	virtual CIMDateTime getTimeBeforeRemovalMax() const;
	virtual void setTimeBeforeRemovalMax(CIMDateTime&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _deleteJobSupported;
	Array<Uint16> _requestedStatesSupported;
	CIMDateTime _interactiveTimeoutMax;
	Boolean _defaultValuesSupported;
	Uint32 _clientRetriesMax;
	CIMDateTime _cleanupInterval;
	Boolean _silentModeSupported;
	Array<String> _characteristics;
	Array<String> _otherCharacteristicsDescriptions;
	Array<String> _applicableMethods;
	CIMDateTime _timeBeforeRemovalMin;
	CIMDateTime _timeBeforeRemovalMax;

#	include "UNIX_DiagnosticServiceJobCapabilitiesPrivate.h"


};

#endif /* UNIX_DIAGNOSTICSERVICEJOBCAPABILITIES */
