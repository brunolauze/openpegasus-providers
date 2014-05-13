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
2.35.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Account
*/


/* **** Description *** */
/*
CIM_Account is the information held by a SecurityService to track identity and privileges managed by that service. Common examples of an Account are the entries in a UNIX /etc/passwd file. Several kinds of security services use various information from those entries - the /bin/login program uses the account name ('root') and hashed password to authenticate users, and the file service, for instance, uses the UserID field ('0') and GroupID field ('0') to record ownership and determine access control privileges on files in the file system. This class is defined so as to incorporate commonly-used LDAP attributes to permit implementations to easily derive this information from LDAP-accessible directories. 

The semantics of Account overlap with that of the class, CIM_Identity. However, aspects of Account - such as its specific tie to a System - are valuable and have been widely implemented. For this reason, the Account and Identity classes are associated using a subclass of LogicalIdentity (AccountIdentity), instead of deprecating the Account class in the CIM Schema. When an Account has been authenticated, the corresponding Identity's TrustEstablished Boolean would be set to TRUE. Then, the Identity class can be used as defined for authorization purposes.
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

			UNIX_Account:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				UserID String
				ObjectClass String
				Descriptions String
				Host String
				LocalityName String
				OrganizationName String
				OU String
				SeeAlso String
				UserCertificate String
				UserPassword String
				PasswordHistoryDepth UInt16
				PasswordExpiration DateTime
				ComplexPasswordRulesEnforced UInt16
				InactivityTimeout DateTime
				MaximumSuccessiveLoginFailures UInt16
				LastLogin DateTime
				UserPasswordEncryptionAlgorithm UInt16
				OtherUserPasswordEncryptionAlgorithm String
				UserPasswordEncoding UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_EnabledLogicalElement:
				RequestStateChange UInt32

			UNIX_Account:


*/

#ifndef __UNIX_ACCOUNT_H
#define __UNIX_ACCOUNT_H


#include "CIM_EnabledLogicalElement.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_AccountDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_USER_ID
#define PROPERTY_USER_ID \
					"UserID"
#endif

#ifndef PROPERTY_OBJECT_CLASS
#define PROPERTY_OBJECT_CLASS \
					"ObjectClass"
#endif

#ifndef PROPERTY_DESCRIPTIONS
#define PROPERTY_DESCRIPTIONS \
					"Descriptions"
#endif

#ifndef PROPERTY_HOST
#define PROPERTY_HOST \
					"Host"
#endif

#ifndef PROPERTY_LOCALITY_NAME
#define PROPERTY_LOCALITY_NAME \
					"LocalityName"
#endif

#ifndef PROPERTY_ORGANIZATION_NAME
#define PROPERTY_ORGANIZATION_NAME \
					"OrganizationName"
#endif

#ifndef PROPERTY_OU
#define PROPERTY_OU \
					"OU"
#endif

#ifndef PROPERTY_SEE_ALSO
#define PROPERTY_SEE_ALSO \
					"SeeAlso"
#endif

#ifndef PROPERTY_USER_CERTIFICATE
#define PROPERTY_USER_CERTIFICATE \
					"UserCertificate"
#endif

#ifndef PROPERTY_USER_PASSWORD
#define PROPERTY_USER_PASSWORD \
					"UserPassword"
#endif

#ifndef PROPERTY_PASSWORD_HISTORY_DEPTH
#define PROPERTY_PASSWORD_HISTORY_DEPTH \
					"PasswordHistoryDepth"
#endif

#ifndef PROPERTY_PASSWORD_EXPIRATION
#define PROPERTY_PASSWORD_EXPIRATION \
					"PasswordExpiration"
#endif

#ifndef PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED
#define PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED \
					"ComplexPasswordRulesEnforced"
#endif

#ifndef PROPERTY_INACTIVITY_TIMEOUT
#define PROPERTY_INACTIVITY_TIMEOUT \
					"InactivityTimeout"
#endif

#ifndef PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES
#define PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES \
					"MaximumSuccessiveLoginFailures"
#endif

#ifndef PROPERTY_LAST_LOGIN
#define PROPERTY_LAST_LOGIN \
					"LastLogin"
#endif

#ifndef PROPERTY_USER_PASSWORD_ENCRYPTION_ALGORITHM
#define PROPERTY_USER_PASSWORD_ENCRYPTION_ALGORITHM \
					"UserPasswordEncryptionAlgorithm"
#endif

#ifndef PROPERTY_OTHER_USER_PASSWORD_ENCRYPTION_ALGORITHM
#define PROPERTY_OTHER_USER_PASSWORD_ENCRYPTION_ALGORITHM \
					"OtherUserPasswordEncryptionAlgorithm"
#endif

#ifndef PROPERTY_USER_PASSWORD_ENCODING
#define PROPERTY_USER_PASSWORD_ENCODING \
					"UserPasswordEncoding"
#endif



class UNIX_Account :
	public CIM_EnabledLogicalElement
{
public:

	UNIX_Account();
	~UNIX_Account();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual void setEnabledState(Uint16&);
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual void setOtherEnabledState(String&);
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual void setRequestedState(Uint16&);
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual void setEnabledDefault(Uint16&);
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual void setTimeOfLastStateChange(CIMDateTime&);
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual void setAvailableRequestedStates(Array<Uint16>&);
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual void setTransitioningToState(Uint16&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getUserID(CIMProperty&) const;
	virtual String getUserID() const;
	virtual void setUserID(String&);
	virtual Boolean getObjectClass(CIMProperty&) const;
	virtual Array<String> getObjectClass() const;
	virtual void setObjectClass(Array<String>&);
	virtual Boolean getDescriptions(CIMProperty&) const;
	virtual Array<String> getDescriptions() const;
	virtual void setDescriptions(Array<String>&);
	virtual Boolean getHost(CIMProperty&) const;
	virtual Array<String> getHost() const;
	virtual void setHost(Array<String>&);
	virtual Boolean getLocalityName(CIMProperty&) const;
	virtual Array<String> getLocalityName() const;
	virtual void setLocalityName(Array<String>&);
	virtual Boolean getOrganizationName(CIMProperty&) const;
	virtual Array<String> getOrganizationName() const;
	virtual void setOrganizationName(Array<String>&);
	virtual Boolean getOU(CIMProperty&) const;
	virtual Array<String> getOU() const;
	virtual void setOU(Array<String>&);
	virtual Boolean getSeeAlso(CIMProperty&) const;
	virtual Array<String> getSeeAlso() const;
	virtual void setSeeAlso(Array<String>&);
	virtual Boolean getUserCertificate(CIMProperty&) const;
	virtual Array<String> getUserCertificate() const;
	virtual void setUserCertificate(Array<String>&);
	virtual Boolean getUserPassword(CIMProperty&) const;
	virtual Array<String> getUserPassword() const;
	virtual void setUserPassword(Array<String>&);
	virtual Boolean getPasswordHistoryDepth(CIMProperty&) const;
	virtual Uint16 getPasswordHistoryDepth() const;
	virtual void setPasswordHistoryDepth(Uint16&);
	virtual Boolean getPasswordExpiration(CIMProperty&) const;
	virtual CIMDateTime getPasswordExpiration() const;
	virtual void setPasswordExpiration(CIMDateTime&);
	virtual Boolean getComplexPasswordRulesEnforced(CIMProperty&) const;
	virtual Array<Uint16> getComplexPasswordRulesEnforced() const;
	virtual void setComplexPasswordRulesEnforced(Array<Uint16>&);
	virtual Boolean getInactivityTimeout(CIMProperty&) const;
	virtual CIMDateTime getInactivityTimeout() const;
	virtual void setInactivityTimeout(CIMDateTime&);
	virtual Boolean getMaximumSuccessiveLoginFailures(CIMProperty&) const;
	virtual Uint16 getMaximumSuccessiveLoginFailures() const;
	virtual void setMaximumSuccessiveLoginFailures(Uint16&);
	virtual Boolean getLastLogin(CIMProperty&) const;
	virtual CIMDateTime getLastLogin() const;
	virtual void setLastLogin(CIMDateTime&);
	virtual Boolean getUserPasswordEncryptionAlgorithm(CIMProperty&) const;
	virtual Uint16 getUserPasswordEncryptionAlgorithm() const;
	virtual void setUserPasswordEncryptionAlgorithm(Uint16&);
	virtual Boolean getOtherUserPasswordEncryptionAlgorithm(CIMProperty&) const;
	virtual String getOtherUserPasswordEncryptionAlgorithm() const;
	virtual void setOtherUserPasswordEncryptionAlgorithm(String&);
	virtual Boolean getUserPasswordEncoding(CIMProperty&) const;
	virtual Uint32 getUserPasswordEncoding() const;
	virtual void setUserPasswordEncoding(Uint32&);

	virtual Uint32 invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	);


#if PEGASUS_OS_FREEBSD

	virtual Boolean loadByUserID(String userID);
    
#endif


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	Uint16 _enabledState;
	String _otherEnabledState;
	Uint16 _requestedState;
	Uint16 _enabledDefault;
	CIMDateTime _timeOfLastStateChange;
	Array<Uint16> _availableRequestedStates;
	Uint16 _transitioningToState;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _userID;
	Array<String> _objectClass;
	Array<String> _descriptions;
	Array<String> _host;
	Array<String> _localityName;
	Array<String> _organizationName;
	Array<String> _oU;
	Array<String> _seeAlso;
	Array<String> _userCertificate;
	Array<String> _userPassword;
	Uint16 _passwordHistoryDepth;
	CIMDateTime _passwordExpiration;
	Array<Uint16> _complexPasswordRulesEnforced;
	CIMDateTime _inactivityTimeout;
	Uint16 _maximumSuccessiveLoginFailures;
	CIMDateTime _lastLogin;
	Uint16 _userPasswordEncryptionAlgorithm;
	String _otherUserPasswordEncryptionAlgorithm;
	Uint32 _userPasswordEncoding;

#	include "UNIX_AccountPrivate.h"


};

#endif /* UNIX_ACCOUNT */
