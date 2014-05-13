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
2.38.0
*/


/* **** ClassConstraint *** */
/*
inv: SoID <> null implies SoOrgID <> null
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
CIM_SettingData is used to represent configuration and and operational parameters for CIM_ManagedElement instances. There are a number of different uses of CIM_SettingData supported in the model today. Additional uses may be defined in the future.
Instances of CIM_SettingData may represent Aspects of a CIM_ManagedElement instance. This is modeled using the CIM_SettingsDefineState association. CIM_SettingData may be used to define capabilities when associated to an instance of CIM_Capabilities through the CIM_SettingsDefineCapabilities association. 
Instances of CIM_SettingData may represent different types of configurations for a CIM_ManagedElement, including persistent configurations, in progress configuration changes, or requested configurations. The CIM_ElementSettingData association is used to model the relationship between a CIM_SettingData instance and the CIM_ManagedElement for which it is a configuration. 
When an instance of CIM_SettingData represents a configuration, the current operational values for the parameters of the element are reflected by properties in the Element itself or by properties in its associations. These properties do not have to be the same values that are present in the SettingData object. For example, a modem might have a SettingData baud rate of 56Kb/sec but be operating at 19.2Kb/sec. 
Note: The CIM_SettingData class is very similar to CIM_Setting, yet both classes are present in the model because many implementations have successfully used CIM_Setting. However, issues have arisen that could not be resolved without defining a new class. Therefore, until a new major release occurs, both classes will exist in the model. Refer to the Core White Paper for additional information. SettingData instances can be aggregated together into higher- level SettingData objects using ConcreteComponent associations.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:


*/

#ifndef __CIM_SETTINGDATA_H
#define __CIM_SETTINGDATA_H


#include "CIM_ManagedElement.h"


#ifndef PROPERTY_CONFIGURATION_NAME
#define PROPERTY_CONFIGURATION_NAME \
					"ConfigurationName"
#endif

#ifndef PROPERTY_CHANGEABLE_TYPE
#define PROPERTY_CHANGEABLE_TYPE \
					"ChangeableType"
#endif

#ifndef PROPERTY_COMPONENT_SETTING
#define PROPERTY_COMPONENT_SETTING \
					"ComponentSetting"
#endif

#ifndef PROPERTY_SO_ID
#define PROPERTY_SO_ID \
					"SoID"
#endif

#ifndef PROPERTY_SO_ORG_ID
#define PROPERTY_SO_ORG_ID \
					"SoOrgID"
#endif



class CIM_SettingData :
	public CIM_ManagedElement
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

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getElementName(CIMProperty&) const=0;
	virtual String getElementName() const=0;
	virtual void setElementName(String&)=0;
	virtual Boolean getConfigurationName(CIMProperty&) const=0;
	virtual String getConfigurationName() const=0;
	virtual void setConfigurationName(String&)=0;
	virtual Boolean getChangeableType(CIMProperty&) const=0;
	virtual Uint16 getChangeableType() const=0;
	virtual void setChangeableType(Uint16&)=0;
	virtual Boolean getComponentSetting(CIMProperty&) const=0;
	virtual Array<String> getComponentSetting() const=0;
	virtual void setComponentSetting(Array<String>&)=0;
	virtual Boolean getSoID(CIMProperty&) const=0;
	virtual String getSoID() const=0;
	virtual void setSoID(String&)=0;
	virtual Boolean getSoOrgID(CIMProperty&) const=0;
	virtual String getSoOrgID() const=0;
	virtual void setSoOrgID(String&)=0;


private:

};

#endif /* CIM_SETTINGDATA */
