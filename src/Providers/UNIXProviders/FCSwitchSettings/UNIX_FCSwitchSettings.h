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
CIM::Device::FC
*/


/* **** Description *** */
/*
A ComputerSystem that supports FC Switch capabilities and can be configured using the FCSwitchConfig class.
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

			UNIX_FCSwitchSettings:
				PreferredDomainID UInt8
				DomainIDLocked Boolean
				PrincipalPriority UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_FCSwitchSettings:


*/

#ifndef __UNIX_FCSWITCHSETTINGS_H
#define __UNIX_FCSWITCHSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_FCSwitchSettingsDeps.h"


#ifndef PROPERTY_PREFERRED_DOMAIN_ID
#define PROPERTY_PREFERRED_DOMAIN_ID \
					"PreferredDomainID"
#endif

#ifndef PROPERTY_DOMAIN_ID_LOCKED
#define PROPERTY_DOMAIN_ID_LOCKED \
					"DomainIDLocked"
#endif

#ifndef PROPERTY_PRINCIPAL_PRIORITY
#define PROPERTY_PRINCIPAL_PRIORITY \
					"PrincipalPriority"
#endif



class UNIX_FCSwitchSettings :
	public CIM_SettingData
{
public:

	UNIX_FCSwitchSettings();
	~UNIX_FCSwitchSettings();

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
	virtual Boolean getPreferredDomainID(CIMProperty&) const;
	virtual Uint8 getPreferredDomainID() const;
	virtual void setPreferredDomainID(Uint8&);
	virtual Boolean getDomainIDLocked(CIMProperty&) const;
	virtual Boolean getDomainIDLocked() const;
	virtual void setDomainIDLocked(Boolean&);
	virtual Boolean getPrincipalPriority(CIMProperty&) const;
	virtual Uint16 getPrincipalPriority() const;
	virtual void setPrincipalPriority(Uint16&);


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
	Uint8 _preferredDomainID;
	Boolean _domainIDLocked;
	Uint16 _principalPriority;

#	include "UNIX_FCSwitchSettingsPrivate.h"


};

#endif /* UNIX_FCSWITCHSETTINGS */
