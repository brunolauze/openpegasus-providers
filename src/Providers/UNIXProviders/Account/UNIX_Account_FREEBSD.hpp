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


using PROVIDER_LIB_NS::CIMHelper;


#include <unistd.h>
#include <sys/stat.h>
#include <grp.h>
#include <utmpx.h>
#include <login_cap.h>
  
/* Custom Methods */
bool UNIX_Account::hasPasswordMinimumLength(const passwd* pw)
{
  login_cap_t *lc;
	int min_length = 1;
	if ((lc = login_getpwclass(pw)) != NULL) {
		/* minpasswordlen capablity */
		return ((int)login_getcapnum(lc, "minpasswordlen",
				min_length, min_length)) > 1;
	}
	return false;
}

bool UNIX_Account::hasPasswordForceMixCase(const passwd* pw)
{
	login_cap_t *lc;
	if ((lc = login_getpwclass(pw)) != NULL) {
		return login_getcapbool(lc, "mixpasswordcase", 1) == 1;
	}
	return false;
}

int UNIX_Account::getLoginRetries(const passwd* pw)
{
	login_cap_t *lc;
	if ((lc = login_getpwclass(pw)) != NULL) {
		return login_getcapnum(lc, "login-retries", 1, 1);
	}
	return 10;
}

time_t UNIX_Account::getIdleTimeout(const passwd* pw)
{
	login_cap_t *lc;
	if ((lc = login_getpwclass(pw)) != NULL) {
		/* idle timeout capablity */
		return ((time_t)login_getcaptime(lc, "idletime",
				0, 0));
	}
	return (time_t)0;
}

time_t UNIX_Account::getLastLoginValue(const passwd* pw)
{
	struct utmpx *u;
	if (setutxdb(UTXDB_LASTLOGIN, NULL) != 0)
				return (time_t)0;
	if ((u = getutxuser(pw->pw_name)) == NULL) {
		return (time_t)0;
	}
	time_t t = u->ut_tv.tv_sec;
	return t;
}

Boolean UNIX_Account::loadByUserID(String userID)
{
  passwd* user;
	int id = atoi(userID.getCString());
	if ((user = getpwuid(id)) != NULL)
	{
    loadByPasswd(user);
		return true;
	}
	return false;
}

void UNIX_Account::loadByPasswd(passwd *user)
{
	struct tm* clock;			// create a time structure
    _instanceID = String (user->pw_name);
	_caption = String (user->pw_gecos);
	_description = String ("");
	_elementName = String("Account");
	_generation = Uint64(0);
    if (sizeof(user->pw_dir) == 0) 
      _installDate = CIMHelper::getOSInstallDate();
    else {
      /// We could at least check the user profile creationdate
      _installDate = CIMHelper::getInstallDate(user->pw_dir);
    }
	_name = String (user->pw_name);
	_operationalStatus.clear();
	_operationalStatus.append(2); //OK
	_statusDescriptions.clear();
	_statusDescriptions.append("OK");
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus =Uint16(DEFAULT_PRIMARY_STATUS);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(1);
	time_t ll = getLastLoginValue(user);
	if (ll == 0) _timeOfLastStateChange = CIMHelper::getOSInstallDate();
	else {
		clock = gmtime(&(ll));	// Get the last modified time and put it into the time structure
		_timeOfLastStateChange = CIMDateTime(
			clock->tm_year + 1900, 
			clock->tm_mon + 1, 
			clock->tm_mday,
			clock->tm_hour,
			clock->tm_min,
			clock->tm_sec,
			0,0,
			clock->tm_gmtoff
			);
	}
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_Account");
	char userId[256];
	sprintf(userId, "%d", user->pw_uid);
	_userID = String (userId);
	_objectClass.clear();
	_objectClass.append("POSIXAccount");
	_descriptions.clear();
	_host.clear();
	_host.append(CIMHelper::HostName);
	_localityName.clear();
	_organizationName.clear();
	_oU.clear();
	_seeAlso.clear();
	gid_t *groups;
	int ngroups = 1022;
	groups = (gid_t*)calloc(ngroups, sizeof(gid_t));
	if (getgrouplist(user->pw_name, user->pw_gid, groups, &ngroups) == 0)
	{
		for(int i = 0; i < ngroups;i++)
		{
			if (groups[i])
			{
			  	_seeAlso.append(String(group_from_gid(groups[i], 0)));
		  	}
		}
	}
	_userCertificate.clear();
	_userPassword.clear();
	_userPassword.append(String(user->pw_passwd));
	_passwordHistoryDepth = Uint16(0);
	if (user->pw_change == 0) 
	_passwordExpiration = CIMHelper::getOSInstallDate();
	else {
	clock = gmtime(&(user->pw_change));	// Get the last modified time and put it into the time structure
	_passwordExpiration = CIMDateTime(
	  clock->tm_year + 1900,
	  clock->tm_mon + 1,
	  clock->tm_mday,
	  clock->tm_hour,
	  clock->tm_min,
	  clock->tm_sec,
	  0,0,
	  clock->tm_gmtoff);
	}
	_complexPasswordRulesEnforced.clear();
	time_t idle = getIdleTimeout(user);
	_inactivityTimeout  = CIMDateTime(idle, true);
	_maximumSuccessiveLoginFailures = Uint16(getLoginRetries(user));
	_lastLogin = _timeOfLastStateChange;
	_userPasswordEncryptionAlgorithm = Uint16(1);
	_otherUserPasswordEncryptionAlgorithm = String ("SHA512");
	_userPasswordEncoding = Uint32(5);
}

    


UNIX_Account::UNIX_Account(void)
{
}

UNIX_Account::~UNIX_Account(void)
{
}

Boolean UNIX_Account::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Account::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Account::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Account::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Account::getCaption() const
{
	return _caption;
}

void UNIX_Account::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Account::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Account::getDescription() const
{
	return _description;
}

void UNIX_Account::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Account::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Account::getElementName() const
{
	return _elementName;
}

void UNIX_Account::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Account::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Account::getGeneration() const
{
	return _generation;
}

void UNIX_Account::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Account::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Account::getInstallDate() const
{
	return _installDate;
}

void UNIX_Account::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_Account::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Account::getName() const
{
	return _name;
}

void UNIX_Account::setName(String &value)
{
	_name = value;
}

Boolean UNIX_Account::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Account::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_Account::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_Account::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Account::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_Account::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_Account::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Account::getStatus() const
{
	return _status;
}

void UNIX_Account::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_Account::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Account::getHealthState() const
{
	return _healthState;
}

void UNIX_Account::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_Account::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Account::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_Account::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_Account::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Account::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_Account::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_Account::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Account::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_Account::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_Account::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Account::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_Account::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_Account::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Account::getEnabledState() const
{
	return _enabledState;
}

void UNIX_Account::setEnabledState(Uint16 &value)
{
	_enabledState = value;
}

Boolean UNIX_Account::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Account::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_Account::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_Account::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Account::getRequestedState() const
{
	return _requestedState;
}

void UNIX_Account::setRequestedState(Uint16 &value)
{
	_requestedState = value;
}

Boolean UNIX_Account::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Account::getEnabledDefault() const
{
	return _enabledDefault;
}

void UNIX_Account::setEnabledDefault(Uint16 &value)
{
	_enabledDefault = value;
}

Boolean UNIX_Account::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Account::getTimeOfLastStateChange() const
{
	return _timeOfLastStateChange;
}

void UNIX_Account::setTimeOfLastStateChange(CIMDateTime &value)
{
	_timeOfLastStateChange = value;
}

Boolean UNIX_Account::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Account::getAvailableRequestedStates() const
{
	return _availableRequestedStates;
}

void UNIX_Account::setAvailableRequestedStates(Array<Uint16> &value)
{
	_availableRequestedStates = value;
}

Boolean UNIX_Account::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Account::getTransitioningToState() const
{
	return _transitioningToState;
}

void UNIX_Account::setTransitioningToState(Uint16 &value)
{
	_transitioningToState = value;
}

Boolean UNIX_Account::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Account::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_Account::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_Account::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Account::getSystemName() const
{
	return _systemName;
}

void UNIX_Account::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_Account::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Account::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_Account::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_Account::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_Account::getUserID() const
{
	return _userID;
}

void UNIX_Account::setUserID(String &value)
{
	_userID = value;
}

Boolean UNIX_Account::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_Account::getObjectClass() const
{
	return _objectClass;
}

void UNIX_Account::setObjectClass(Array<String> &value)
{
	_objectClass = value;
}

Boolean UNIX_Account::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_Account::getDescriptions() const
{
	return _descriptions;
}

void UNIX_Account::setDescriptions(Array<String> &value)
{
	_descriptions = value;
}

Boolean UNIX_Account::getHost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST, getHost());
	return true;
}

Array<String> UNIX_Account::getHost() const
{
	return _host;
}

void UNIX_Account::setHost(Array<String> &value)
{
	_host = value;
}

Boolean UNIX_Account::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

Array<String> UNIX_Account::getLocalityName() const
{
	return _localityName;
}

void UNIX_Account::setLocalityName(Array<String> &value)
{
	_localityName = value;
}

Boolean UNIX_Account::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

Array<String> UNIX_Account::getOrganizationName() const
{
	return _organizationName;
}

void UNIX_Account::setOrganizationName(Array<String> &value)
{
	_organizationName = value;
}

Boolean UNIX_Account::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OU, getOU());
	return true;
}

Array<String> UNIX_Account::getOU() const
{
	return _oU;
}

void UNIX_Account::setOU(Array<String> &value)
{
	_oU = value;
}

Boolean UNIX_Account::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_Account::getSeeAlso() const
{
	return _seeAlso;
}

void UNIX_Account::setSeeAlso(Array<String> &value)
{
	_seeAlso = value;
}

Boolean UNIX_Account::getUserCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_CERTIFICATE, getUserCertificate());
	return true;
}

Array<String> UNIX_Account::getUserCertificate() const
{
	return _userCertificate;
}

void UNIX_Account::setUserCertificate(Array<String> &value)
{
	_userCertificate = value;
}

Boolean UNIX_Account::getUserPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD, getUserPassword());
	return true;
}

Array<String> UNIX_Account::getUserPassword() const
{
	return _userPassword;
}

void UNIX_Account::setUserPassword(Array<String> &value)
{
	_userPassword = value;
}

Boolean UNIX_Account::getPasswordHistoryDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_HISTORY_DEPTH, getPasswordHistoryDepth());
	return true;
}

Uint16 UNIX_Account::getPasswordHistoryDepth() const
{
	return _passwordHistoryDepth;
}

void UNIX_Account::setPasswordHistoryDepth(Uint16 &value)
{
	_passwordHistoryDepth = value;
}

Boolean UNIX_Account::getPasswordExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_EXPIRATION, getPasswordExpiration());
	return true;
}

CIMDateTime UNIX_Account::getPasswordExpiration() const
{
	return _passwordExpiration;
}

void UNIX_Account::setPasswordExpiration(CIMDateTime &value)
{
	_passwordExpiration = value;
}

Boolean UNIX_Account::getComplexPasswordRulesEnforced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED, getComplexPasswordRulesEnforced());
	return true;
}

Array<Uint16> UNIX_Account::getComplexPasswordRulesEnforced() const
{
	return _complexPasswordRulesEnforced;
}

void UNIX_Account::setComplexPasswordRulesEnforced(Array<Uint16> &value)
{
	_complexPasswordRulesEnforced = value;
}

Boolean UNIX_Account::getInactivityTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INACTIVITY_TIMEOUT, getInactivityTimeout());
	return true;
}

CIMDateTime UNIX_Account::getInactivityTimeout() const
{
	return _inactivityTimeout;
}

void UNIX_Account::setInactivityTimeout(CIMDateTime &value)
{
	_inactivityTimeout = value;
}

Boolean UNIX_Account::getMaximumSuccessiveLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES, getMaximumSuccessiveLoginFailures());
	return true;
}

Uint16 UNIX_Account::getMaximumSuccessiveLoginFailures() const
{
	return _maximumSuccessiveLoginFailures;
}

void UNIX_Account::setMaximumSuccessiveLoginFailures(Uint16 &value)
{
	_maximumSuccessiveLoginFailures = value;
}

Boolean UNIX_Account::getLastLogin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN, getLastLogin());
	return true;
}

CIMDateTime UNIX_Account::getLastLogin() const
{
	return _lastLogin;
}

void UNIX_Account::setLastLogin(CIMDateTime &value)
{
	_lastLogin = value;
}

Boolean UNIX_Account::getUserPasswordEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD_ENCRYPTION_ALGORITHM, getUserPasswordEncryptionAlgorithm());
	return true;
}

Uint16 UNIX_Account::getUserPasswordEncryptionAlgorithm() const
{
	return _userPasswordEncryptionAlgorithm;
}

void UNIX_Account::setUserPasswordEncryptionAlgorithm(Uint16 &value)
{
	_userPasswordEncryptionAlgorithm = value;
}

Boolean UNIX_Account::getOtherUserPasswordEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USER_PASSWORD_ENCRYPTION_ALGORITHM, getOtherUserPasswordEncryptionAlgorithm());
	return true;
}

String UNIX_Account::getOtherUserPasswordEncryptionAlgorithm() const
{
	return _otherUserPasswordEncryptionAlgorithm;
}

void UNIX_Account::setOtherUserPasswordEncryptionAlgorithm(String &value)
{
	_otherUserPasswordEncryptionAlgorithm = value;
}

Boolean UNIX_Account::getUserPasswordEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD_ENCODING, getUserPasswordEncoding());
	return true;
}

Uint32 UNIX_Account::getUserPasswordEncoding() const
{
	return _userPasswordEncoding;
}

void UNIX_Account::setUserPasswordEncoding(Uint32 &value)
{
	_userPasswordEncoding = value;
}


void UNIX_Account::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Account");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_enabledState = Uint16(DEFAULT_ENABLED_STATE);
	_otherEnabledState = String ("");
	_requestedState = Uint16(0);
	_enabledDefault = Uint16(0);
	_timeOfLastStateChange = CIMHelper::getCurrentTime();
	_availableRequestedStates.clear();
	_transitioningToState = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_Account");
	_userID = String ("");
	_objectClass.clear();
	_descriptions.clear();
	_host.clear();
	_localityName.clear();
	_organizationName.clear();
	_oU.clear();
	_seeAlso.clear();
	_userCertificate.clear();
	_userPassword.clear();
	_passwordHistoryDepth = Uint16(0);
	_passwordExpiration = CIMHelper::getCurrentTime();
	_complexPasswordRulesEnforced.clear();
	_inactivityTimeout = CIMHelper::getCurrentTime();
	_maximumSuccessiveLoginFailures = Uint16(0);
	_lastLogin = CIMHelper::getCurrentTime();
	_userPasswordEncryptionAlgorithm = Uint16(0);
	_otherUserPasswordEncryptionAlgorithm = String ("");
	_userPasswordEncoding = Uint32(0);

}

Boolean UNIX_Account::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledState"))
			{
				Uint16 enabledStateValue;
				property.getValue().get(enabledStateValue);
				setEnabledState(enabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledState"))
			{
				String otherEnabledStateValue;
				property.getValue().get(otherEnabledStateValue);
				setOtherEnabledState(otherEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedState"))
			{
				Uint16 requestedStateValue;
				property.getValue().get(requestedStateValue);
				setRequestedState(requestedStateValue);
			}
			else if (String::equal(property.getName().getString(), "EnabledDefault"))
			{
				Uint16 enabledDefaultValue;
				property.getValue().get(enabledDefaultValue);
				setEnabledDefault(enabledDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastStateChange"))
			{
				CIMDateTime timeOfLastStateChangeValue;
				property.getValue().get(timeOfLastStateChangeValue);
				setTimeOfLastStateChange(timeOfLastStateChangeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableRequestedStates"))
			{
				Array<Uint16> availableRequestedStatesValue;
				property.getValue().get(availableRequestedStatesValue);
				setAvailableRequestedStates(availableRequestedStatesValue);
			}
			else if (String::equal(property.getName().getString(), "TransitioningToState"))
			{
				Uint16 transitioningToStateValue;
				property.getValue().get(transitioningToStateValue);
				setTransitioningToState(transitioningToStateValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "UserID"))
			{
				String userIDValue;
				property.getValue().get(userIDValue);
				setUserID(userIDValue);
			}
			else if (String::equal(property.getName().getString(), "ObjectClass"))
			{
				Array<String> objectClassValue;
				property.getValue().get(objectClassValue);
				setObjectClass(objectClassValue);
			}
			else if (String::equal(property.getName().getString(), "Descriptions"))
			{
				Array<String> descriptionsValue;
				property.getValue().get(descriptionsValue);
				setDescriptions(descriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Host"))
			{
				Array<String> hostValue;
				property.getValue().get(hostValue);
				setHost(hostValue);
			}
			else if (String::equal(property.getName().getString(), "LocalityName"))
			{
				Array<String> localityNameValue;
				property.getValue().get(localityNameValue);
				setLocalityName(localityNameValue);
			}
			else if (String::equal(property.getName().getString(), "OrganizationName"))
			{
				Array<String> organizationNameValue;
				property.getValue().get(organizationNameValue);
				setOrganizationName(organizationNameValue);
			}
			else if (String::equal(property.getName().getString(), "OU"))
			{
				Array<String> oUValue;
				property.getValue().get(oUValue);
				setOU(oUValue);
			}
			else if (String::equal(property.getName().getString(), "SeeAlso"))
			{
				Array<String> seeAlsoValue;
				property.getValue().get(seeAlsoValue);
				setSeeAlso(seeAlsoValue);
			}
			else if (String::equal(property.getName().getString(), "UserCertificate"))
			{
				Array<String> userCertificateValue;
				property.getValue().get(userCertificateValue);
				setUserCertificate(userCertificateValue);
			}
			else if (String::equal(property.getName().getString(), "UserPassword"))
			{
				Array<String> userPasswordValue;
				property.getValue().get(userPasswordValue);
				setUserPassword(userPasswordValue);
			}
			else if (String::equal(property.getName().getString(), "PasswordHistoryDepth"))
			{
				Uint16 passwordHistoryDepthValue;
				property.getValue().get(passwordHistoryDepthValue);
				setPasswordHistoryDepth(passwordHistoryDepthValue);
			}
			else if (String::equal(property.getName().getString(), "PasswordExpiration"))
			{
				CIMDateTime passwordExpirationValue;
				property.getValue().get(passwordExpirationValue);
				setPasswordExpiration(passwordExpirationValue);
			}
			else if (String::equal(property.getName().getString(), "ComplexPasswordRulesEnforced"))
			{
				Array<Uint16> complexPasswordRulesEnforcedValue;
				property.getValue().get(complexPasswordRulesEnforcedValue);
				setComplexPasswordRulesEnforced(complexPasswordRulesEnforcedValue);
			}
			else if (String::equal(property.getName().getString(), "InactivityTimeout"))
			{
				CIMDateTime inactivityTimeoutValue;
				property.getValue().get(inactivityTimeoutValue);
				setInactivityTimeout(inactivityTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumSuccessiveLoginFailures"))
			{
				Uint16 maximumSuccessiveLoginFailuresValue;
				property.getValue().get(maximumSuccessiveLoginFailuresValue);
				setMaximumSuccessiveLoginFailures(maximumSuccessiveLoginFailuresValue);
			}
			else if (String::equal(property.getName().getString(), "LastLogin"))
			{
				CIMDateTime lastLoginValue;
				property.getValue().get(lastLoginValue);
				setLastLogin(lastLoginValue);
			}
			else if (String::equal(property.getName().getString(), "UserPasswordEncryptionAlgorithm"))
			{
				Uint16 userPasswordEncryptionAlgorithmValue;
				property.getValue().get(userPasswordEncryptionAlgorithmValue);
				setUserPasswordEncryptionAlgorithm(userPasswordEncryptionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUserPasswordEncryptionAlgorithm"))
			{
				String otherUserPasswordEncryptionAlgorithmValue;
				property.getValue().get(otherUserPasswordEncryptionAlgorithmValue);
				setOtherUserPasswordEncryptionAlgorithm(otherUserPasswordEncryptionAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "UserPasswordEncoding"))
			{
				Uint32 userPasswordEncodingValue;
				property.getValue().get(userPasswordEncodingValue);
				setUserPasswordEncoding(userPasswordEncodingValue);
			}
	}
	return true;
}

Uint32 UNIX_Account::invokeRequestStateChange(
		Uint16 &inRequestedState,
		CIMInstance &inJob,
		CIMDateTime &inTimeoutPeriod
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_ConcreteJob inJobObject;
	inJobObject.loadInstance(inJob);
	
	/* Execute method RequestStateChange */
	
	
	
	return returnValue;
}


Boolean UNIX_Account::initialize()
{

	setpwent();
	return true;    
    
}

Boolean UNIX_Account::load(int &pIndex)
{

  passwd* user;
  if ((user = getpwent()) != NULL)
	{
    	loadByPasswd(user);
		return true;
	}
  return false;    
    
}

Boolean UNIX_Account::finalize()
{

	endpwent();
	return true;
    
}

Boolean UNIX_Account::loadByName(const String name)
{

	passwd* user;
	const char *nam = name.getCString();
	if ((user = getpwnam(nam)) != NULL)
	{
    	loadByPasswd(user);
		return true;
	}
	return false;
  	
}

Boolean UNIX_Account::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Account::createInstance(const OperationContext &ctx)
{

	return false;
  	
}

Boolean UNIX_Account::modifyInstance(const OperationContext &ctx)
{

	return false;
  	
}

Boolean UNIX_Account::deleteInstance(const OperationContext &ctx)
{

  	String name = getName();
  	if (name.size() == 0) throw CIMObjectNotFoundException("Name cannot be null");
  	if (CIMHelper::contains(getObjectClass(), String("POSIXAccount")))
  	{
	  	String cmd("pw user del "); /* using pw command */
	  	cmd.append(name);
	  	FILE* pipe = popen(cmd.getCString(), "r");
	  	if (!pipe) throw CIMObjectNotFoundException("pw utility cannot be opened");
	  	if (!feof(pipe))
	  	{
	  		char buffer[512];
	  		if (fgets(buffer, 512, pipe) != NULL) {
	  			throw CIMObjectNotFoundException(String(buffer));
	  		}
	  	}
		return true;
	}
	return false;
  	
}

Boolean UNIX_Account::validateInstance()
{

	return true;
  	
}

