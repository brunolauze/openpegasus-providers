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
2.30.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
This class defines the permissible settings that can be used for RAID controller diagnostic tests.
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

			UNIX_RAIDDiagnosticSettingData:
				Seed UInt32
				LBAStart UInt64
				LBAEnd UInt64
				TargetHDDs String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_DiagnosticSettingData:

			UNIX_RAIDDiagnosticSettingData:


*/

#ifndef __UNIX_RAIDDIAGNOSTICSETTINGDATA_H
#define __UNIX_RAIDDIAGNOSTICSETTINGDATA_H


#include "CIM_DiagnosticSettingData.h"

#include "UNIX_RAIDDiagnosticSettingDataDeps.h"


#ifndef PROPERTY_SEED
#define PROPERTY_SEED \
					"Seed"
#endif

#ifndef PROPERTY_L_B_A_START
#define PROPERTY_L_B_A_START \
					"LBAStart"
#endif

#ifndef PROPERTY_L_B_A_END
#define PROPERTY_L_B_A_END \
					"LBAEnd"
#endif

#ifndef PROPERTY_TARGET_H_D_DS
#define PROPERTY_TARGET_H_D_DS \
					"TargetHDDs"
#endif



class UNIX_RAIDDiagnosticSettingData :
	public CIM_DiagnosticSettingData
{
public:

	UNIX_RAIDDiagnosticSettingData();
	~UNIX_RAIDDiagnosticSettingData();

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
	virtual Boolean getHaltOnError(CIMProperty&) const;
	virtual Boolean getHaltOnError() const;
	virtual void setHaltOnError(Boolean&);
	virtual Boolean getQuickMode(CIMProperty&) const;
	virtual Boolean getQuickMode() const;
	virtual void setQuickMode(Boolean&);
	virtual Boolean getPercentOfTestCoverage(CIMProperty&) const;
	virtual Uint8 getPercentOfTestCoverage() const;
	virtual void setPercentOfTestCoverage(Uint8&);
	virtual Boolean getLoopControlParameter(CIMProperty&) const;
	virtual Array<String> getLoopControlParameter() const;
	virtual void setLoopControlParameter(Array<String>&);
	virtual Boolean getLoopControl(CIMProperty&) const;
	virtual Array<Uint16> getLoopControl() const;
	virtual void setLoopControl(Array<Uint16>&);
	virtual Boolean getOtherLoopControlDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLoopControlDescriptions() const;
	virtual void setOtherLoopControlDescriptions(Array<String>&);
	virtual Boolean getResultPersistence(CIMProperty&) const;
	virtual Uint32 getResultPersistence() const;
	virtual void setResultPersistence(Uint32&);
	virtual Boolean getLogOptions(CIMProperty&) const;
	virtual Array<Uint16> getLogOptions() const;
	virtual void setLogOptions(Array<Uint16>&);
	virtual Boolean getOtherLogOptionsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLogOptionsDescriptions() const;
	virtual void setOtherLogOptionsDescriptions(Array<String>&);
	virtual Boolean getLogStorage(CIMProperty&) const;
	virtual Array<Uint16> getLogStorage() const;
	virtual void setLogStorage(Array<Uint16>&);
	virtual Boolean getOtherLogStorageDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLogStorageDescriptions() const;
	virtual void setOtherLogStorageDescriptions(Array<String>&);
	virtual Boolean getVerbosityLevel(CIMProperty&) const;
	virtual Array<Uint16> getVerbosityLevel() const;
	virtual void setVerbosityLevel(Array<Uint16>&);
	virtual Boolean getQueryTimeout(CIMProperty&) const;
	virtual Uint32 getQueryTimeout() const;
	virtual void setQueryTimeout(Uint32&);
	virtual Boolean getNonDestructive(CIMProperty&) const;
	virtual Boolean getNonDestructive() const;
	virtual void setNonDestructive(Boolean&);
	virtual Boolean getSeed(CIMProperty&) const;
	virtual Uint32 getSeed() const;
	virtual void setSeed(Uint32&);
	virtual Boolean getLBAStart(CIMProperty&) const;
	virtual Uint64 getLBAStart() const;
	virtual void setLBAStart(Uint64&);
	virtual Boolean getLBAEnd(CIMProperty&) const;
	virtual Uint64 getLBAEnd() const;
	virtual void setLBAEnd(Uint64&);
	virtual Boolean getTargetHDDs(CIMProperty&) const;
	virtual Array<String> getTargetHDDs() const;
	virtual void setTargetHDDs(Array<String>&);


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
	Boolean _haltOnError;
	Boolean _quickMode;
	Uint8 _percentOfTestCoverage;
	Array<String> _loopControlParameter;
	Array<Uint16> _loopControl;
	Array<String> _otherLoopControlDescriptions;
	Uint32 _resultPersistence;
	Array<Uint16> _logOptions;
	Array<String> _otherLogOptionsDescriptions;
	Array<Uint16> _logStorage;
	Array<String> _otherLogStorageDescriptions;
	Array<Uint16> _verbosityLevel;
	Uint32 _queryTimeout;
	Boolean _nonDestructive;
	Uint32 _seed;
	Uint64 _lBAStart;
	Uint64 _lBAEnd;
	Array<String> _targetHDDs;

#	include "UNIX_RAIDDiagnosticSettingDataPrivate.h"


};

#endif /* UNIX_RAIDDIAGNOSTICSETTINGDATA */
