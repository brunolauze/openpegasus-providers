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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Account
*/


/* **** Description *** */
/*
CIM_AccountSettingData provides the ability to manage the desired configuration for an instance of CIM_Account. When associated with an instance of CIM_AccountManagementService, this class may be used to constrain the properties of instances of CIM_Accountcreated using the service. When associated with an instance of CIM_Account, this class may be used to manage the configuration of the CIM_Acount instance.
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

			UNIX_AccountSettingData:
				ComplexPasswordRulesEnforced UInt16
				InactivityTimeout DateTime
				MaximumPasswordExpiration DateTime
				MaximumSuccessiveLoginFailures UInt16
				PasswordHistoryDepth UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_AccountSettingData:


*/

#ifndef __UNIX_ACCOUNTSETTINGDATA_H
#define __UNIX_ACCOUNTSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_AccountSettingDataDeps.h"


#ifndef PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED
#define PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED \
					"ComplexPasswordRulesEnforced"
#endif

#ifndef PROPERTY_INACTIVITY_TIMEOUT
#define PROPERTY_INACTIVITY_TIMEOUT \
					"InactivityTimeout"
#endif

#ifndef PROPERTY_MAXIMUM_PASSWORD_EXPIRATION
#define PROPERTY_MAXIMUM_PASSWORD_EXPIRATION \
					"MaximumPasswordExpiration"
#endif

#ifndef PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES
#define PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES \
					"MaximumSuccessiveLoginFailures"
#endif

#ifndef PROPERTY_PASSWORD_HISTORY_DEPTH
#define PROPERTY_PASSWORD_HISTORY_DEPTH \
					"PasswordHistoryDepth"
#endif



class UNIX_AccountSettingData :
	public CIM_SettingData
{
public:

	UNIX_AccountSettingData();
	~UNIX_AccountSettingData();

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
	virtual Boolean getComplexPasswordRulesEnforced(CIMProperty&) const;
	virtual Array<Uint16> getComplexPasswordRulesEnforced() const;
	virtual void setComplexPasswordRulesEnforced(Array<Uint16>&);
	virtual Boolean getInactivityTimeout(CIMProperty&) const;
	virtual CIMDateTime getInactivityTimeout() const;
	virtual void setInactivityTimeout(CIMDateTime&);
	virtual Boolean getMaximumPasswordExpiration(CIMProperty&) const;
	virtual CIMDateTime getMaximumPasswordExpiration() const;
	virtual void setMaximumPasswordExpiration(CIMDateTime&);
	virtual Boolean getMaximumSuccessiveLoginFailures(CIMProperty&) const;
	virtual Uint16 getMaximumSuccessiveLoginFailures() const;
	virtual void setMaximumSuccessiveLoginFailures(Uint16&);
	virtual Boolean getPasswordHistoryDepth(CIMProperty&) const;
	virtual Uint16 getPasswordHistoryDepth() const;
	virtual void setPasswordHistoryDepth(Uint16&);


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
	Array<Uint16> _complexPasswordRulesEnforced;
	CIMDateTime _inactivityTimeout;
	CIMDateTime _maximumPasswordExpiration;
	Uint16 _maximumSuccessiveLoginFailures;
	Uint16 _passwordHistoryDepth;

#	include "UNIX_AccountSettingDataPrivate.h"


};

#endif /* UNIX_ACCOUNTSETTINGDATA */
