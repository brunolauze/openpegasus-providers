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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
Captures the configuration information of the element as an octet string (that is, a "blob"). The configuration data is element-specific and generalizes (for any element) the semantically similar Save/RestoreProperties methods that are currently defined as part of the LogicalDevice class. 
Various types of configurations can be instantiated for an element, such as a currently running config, a startup config, or other possible configurations. The configuration type is specified in the association of the instance to a ManagedElement using the properties of the ElementSettingData association: 
- When the configuration is currently running, then the IsCurrent Boolean of the association is true. 
- When the configuration is the initial or startup config, then the IsDefault Boolean is true. 
- If the IsCurrent and IsDefault Booleans are false, then the configuration is assumed to be a "possible" config (configuration workspace) for the element. 
Note: This class has an "apply" method only with no corresponding "extract". It has no extract because an application or client can query for and enumerate any existing configurations using existing CIM Operations. It is the responsibility of the client to reuse or reapply the configurations that are returned by such a request because the configuration data itself is opaque and element-specific. 
Only one "running" configuration can exist at any time. In addition, this configuration can be the only configuration reported by an element. However, elements can also have one "startup" configuration and can have multiple possible/workspace configurations. The configurations can be identical. For example, if a possible configuration is applied to an element (and therefore made the running/current configuration), then the two configs would be identical upon a subsequent query or enumerate instances request.
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

			UNIX_ConfigurationData:
				ConfigurationInformation UInt8
				ConfigurationTimestamp DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_ConfigurationData:
				ApplyConfiguration UInt32


*/

#ifndef __UNIX_CONFIGURATIONDATA_H
#define __UNIX_CONFIGURATIONDATA_H


#include "CIM_SettingData.h"

#include "UNIX_ConfigurationDataDeps.h"


#ifndef PROPERTY_CONFIGURATION_INFORMATION
#define PROPERTY_CONFIGURATION_INFORMATION \
					"ConfigurationInformation"
#endif

#ifndef PROPERTY_CONFIGURATION_TIMESTAMP
#define PROPERTY_CONFIGURATION_TIMESTAMP \
					"ConfigurationTimestamp"
#endif



class UNIX_ConfigurationData :
	public CIM_SettingData
{
public:

	UNIX_ConfigurationData();
	~UNIX_ConfigurationData();

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
	virtual Boolean getConfigurationInformation(CIMProperty&) const;
	virtual Array<Uint8> getConfigurationInformation() const;
	virtual void setConfigurationInformation(Array<Uint8>&);
	virtual Boolean getConfigurationTimestamp(CIMProperty&) const;
	virtual CIMDateTime getConfigurationTimestamp() const;
	virtual void setConfigurationTimestamp(CIMDateTime&);

	virtual Uint32 invokeApplyConfiguration(
		Boolean &inValidateOnly,
		Uint16 &inTypeOfConfiguration,
		CIMInstance &inManagedElement
	);



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
	Array<Uint8> _configurationInformation;
	CIMDateTime _configurationTimestamp;

#	include "UNIX_ConfigurationDataPrivate.h"


};

#endif /* UNIX_CONFIGURATIONDATA */
