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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::ProtocolEndpoints
*/


/* **** Description *** */
/*
A representation of the SettingData of a CLProtocol. The relationship between the SettingData and the CLP Service is described by instantiating the ProvidesEndpoint association, with an association to the transport (TelnetProtocolEndpoint or SSHProtocolEndpoint) with a BindsTo association.
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

			UNIX_CLPSettingData:
				CurrentDefaultTarget String
				KeepTime UInt16
				WaitBehavior Boolean
				OutputFormat UInt16
				OutputVerbosity UInt16
				OutputLanguage String
				OutputPosition UInt16
				OutputOrder UInt16
				OutputCount UInt32
				DisplayOption String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_CLPSettingData:


*/

#ifndef __UNIX_CLPSETTINGDATA_H
#define __UNIX_CLPSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_CLPSettingDataDeps.h"


#ifndef PROPERTY_CURRENT_DEFAULT_TARGET
#define PROPERTY_CURRENT_DEFAULT_TARGET \
					"CurrentDefaultTarget"
#endif

#ifndef PROPERTY_KEEP_TIME
#define PROPERTY_KEEP_TIME \
					"KeepTime"
#endif

#ifndef PROPERTY_WAIT_BEHAVIOR
#define PROPERTY_WAIT_BEHAVIOR \
					"WaitBehavior"
#endif

#ifndef PROPERTY_OUTPUT_FORMAT
#define PROPERTY_OUTPUT_FORMAT \
					"OutputFormat"
#endif

#ifndef PROPERTY_OUTPUT_VERBOSITY
#define PROPERTY_OUTPUT_VERBOSITY \
					"OutputVerbosity"
#endif

#ifndef PROPERTY_OUTPUT_LANGUAGE
#define PROPERTY_OUTPUT_LANGUAGE \
					"OutputLanguage"
#endif

#ifndef PROPERTY_OUTPUT_POSITION
#define PROPERTY_OUTPUT_POSITION \
					"OutputPosition"
#endif

#ifndef PROPERTY_OUTPUT_ORDER
#define PROPERTY_OUTPUT_ORDER \
					"OutputOrder"
#endif

#ifndef PROPERTY_OUTPUT_COUNT
#define PROPERTY_OUTPUT_COUNT \
					"OutputCount"
#endif

#ifndef PROPERTY_DISPLAY_OPTION
#define PROPERTY_DISPLAY_OPTION \
					"DisplayOption"
#endif



class UNIX_CLPSettingData :
	public CIM_SettingData
{
public:

	UNIX_CLPSettingData();
	~UNIX_CLPSettingData();

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
	virtual Boolean getCurrentDefaultTarget(CIMProperty&) const;
	virtual String getCurrentDefaultTarget() const;
	virtual void setCurrentDefaultTarget(String&);
	virtual Boolean getKeepTime(CIMProperty&) const;
	virtual Uint16 getKeepTime() const;
	virtual void setKeepTime(Uint16&);
	virtual Boolean getWaitBehavior(CIMProperty&) const;
	virtual Boolean getWaitBehavior() const;
	virtual void setWaitBehavior(Boolean&);
	virtual Boolean getOutputFormat(CIMProperty&) const;
	virtual Uint16 getOutputFormat() const;
	virtual void setOutputFormat(Uint16&);
	virtual Boolean getOutputVerbosity(CIMProperty&) const;
	virtual Uint16 getOutputVerbosity() const;
	virtual void setOutputVerbosity(Uint16&);
	virtual Boolean getOutputLanguage(CIMProperty&) const;
	virtual String getOutputLanguage() const;
	virtual void setOutputLanguage(String&);
	virtual Boolean getOutputPosition(CIMProperty&) const;
	virtual Uint16 getOutputPosition() const;
	virtual void setOutputPosition(Uint16&);
	virtual Boolean getOutputOrder(CIMProperty&) const;
	virtual Uint16 getOutputOrder() const;
	virtual void setOutputOrder(Uint16&);
	virtual Boolean getOutputCount(CIMProperty&) const;
	virtual Uint32 getOutputCount() const;
	virtual void setOutputCount(Uint32&);
	virtual Boolean getDisplayOption(CIMProperty&) const;
	virtual String getDisplayOption() const;
	virtual void setDisplayOption(String&);


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
	String _currentDefaultTarget;
	Uint16 _keepTime;
	Boolean _waitBehavior;
	Uint16 _outputFormat;
	Uint16 _outputVerbosity;
	String _outputLanguage;
	Uint16 _outputPosition;
	Uint16 _outputOrder;
	Uint32 _outputCount;
	String _displayOption;

#	include "UNIX_CLPSettingDataPrivate.h"


};

#endif /* UNIX_CLPSETTINGDATA */
