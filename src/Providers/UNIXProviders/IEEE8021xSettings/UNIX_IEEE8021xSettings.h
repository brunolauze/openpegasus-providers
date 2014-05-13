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
CIM::Network::IEEE8021x
*/


/* **** Description *** */
/*
IEEE8021xSettings specifies a set of IEEE 802.1x Port-Based Network Access Control settings that can be applied to a ISO OSI layer 2 ProtocolEndpoint.
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

			UNIX_IEEE8021xSettings:
				AuthenticationProtocol UInt16
				RoamingIdentity String
				ServerCertificateName String
				ServerCertificateNameComparison UInt16
				Username String
				Password String
				Domain String
				ProtectedAccessCredential UInt8
				PACPassword String
				PSK UInt8


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_IEEE8021xSettings:


*/

#ifndef __UNIX_IEEE8021XSETTINGS_H
#define __UNIX_IEEE8021XSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_IEEE8021xSettingsDeps.h"


#ifndef PROPERTY_AUTHENTICATION_PROTOCOL
#define PROPERTY_AUTHENTICATION_PROTOCOL \
					"AuthenticationProtocol"
#endif

#ifndef PROPERTY_ROAMING_IDENTITY
#define PROPERTY_ROAMING_IDENTITY \
					"RoamingIdentity"
#endif

#ifndef PROPERTY_SERVER_CERTIFICATE_NAME
#define PROPERTY_SERVER_CERTIFICATE_NAME \
					"ServerCertificateName"
#endif

#ifndef PROPERTY_SERVER_CERTIFICATE_NAME_COMPARISON
#define PROPERTY_SERVER_CERTIFICATE_NAME_COMPARISON \
					"ServerCertificateNameComparison"
#endif

#ifndef PROPERTY_USERNAME
#define PROPERTY_USERNAME \
					"Username"
#endif

#ifndef PROPERTY_PASSWORD
#define PROPERTY_PASSWORD \
					"Password"
#endif

#ifndef PROPERTY_DOMAIN
#define PROPERTY_DOMAIN \
					"Domain"
#endif

#ifndef PROPERTY_PROTECTED_ACCESS_CREDENTIAL
#define PROPERTY_PROTECTED_ACCESS_CREDENTIAL \
					"ProtectedAccessCredential"
#endif

#ifndef PROPERTY_P_A_C_PASSWORD
#define PROPERTY_P_A_C_PASSWORD \
					"PACPassword"
#endif

#ifndef PROPERTY_P_S_K
#define PROPERTY_P_S_K \
					"PSK"
#endif



class UNIX_IEEE8021xSettings :
	public CIM_SettingData
{
public:

	UNIX_IEEE8021xSettings();
	~UNIX_IEEE8021xSettings();

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
	virtual Boolean getAuthenticationProtocol(CIMProperty&) const;
	virtual Uint16 getAuthenticationProtocol() const;
	virtual void setAuthenticationProtocol(Uint16&);
	virtual Boolean getRoamingIdentity(CIMProperty&) const;
	virtual String getRoamingIdentity() const;
	virtual void setRoamingIdentity(String&);
	virtual Boolean getServerCertificateName(CIMProperty&) const;
	virtual String getServerCertificateName() const;
	virtual void setServerCertificateName(String&);
	virtual Boolean getServerCertificateNameComparison(CIMProperty&) const;
	virtual Uint16 getServerCertificateNameComparison() const;
	virtual void setServerCertificateNameComparison(Uint16&);
	virtual Boolean getUsername(CIMProperty&) const;
	virtual String getUsername() const;
	virtual void setUsername(String&);
	virtual Boolean getPassword(CIMProperty&) const;
	virtual String getPassword() const;
	virtual void setPassword(String&);
	virtual Boolean getDomain(CIMProperty&) const;
	virtual String getDomain() const;
	virtual void setDomain(String&);
	virtual Boolean getProtectedAccessCredential(CIMProperty&) const;
	virtual Array<Uint8> getProtectedAccessCredential() const;
	virtual void setProtectedAccessCredential(Array<Uint8>&);
	virtual Boolean getPACPassword(CIMProperty&) const;
	virtual String getPACPassword() const;
	virtual void setPACPassword(String&);
	virtual Boolean getPSK(CIMProperty&) const;
	virtual Array<Uint8> getPSK() const;
	virtual void setPSK(Array<Uint8>&);


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
	Uint16 _authenticationProtocol;
	String _roamingIdentity;
	String _serverCertificateName;
	Uint16 _serverCertificateNameComparison;
	String _username;
	String _password;
	String _domain;
	Array<Uint8> _protectedAccessCredential;
	String _pACPassword;
	Array<Uint8> _pSK;

#	include "UNIX_IEEE8021xSettingsPrivate.h"


};

#endif /* UNIX_IEEE8021XSETTINGS */
