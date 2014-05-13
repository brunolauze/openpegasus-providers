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
CIM::System::FileServerServices
*/


/* **** Description *** */
/*
The CIFSSettingData is a derived class of Settingdata that specifies CIFS specific properties for a Fileserver.
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

			UNIX_CIFSSettingData:
				Enabled Boolean
				Charset UInt16
				UseTCPOnly Boolean
				NETBIOSName String
				WINSIP String
				AuthenticationDomain String
				AuthenticationMode UInt8
				UseKerberos Boolean
				UseOpportunisticLocking Boolean
				SMBSigningOnly Boolean
				ClientsConnectAnonymously Boolean
				JoinDomainAnonymously Boolean
				DomainControllerUser String
				DomainControllerPassword String
				CIFSDomainController String
				CASupported Boolean
				MultiChannelSupported Boolean
				ProtocolVersions String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_CIFSSettingData:


*/

#ifndef __UNIX_CIFSSETTINGDATA_H
#define __UNIX_CIFSSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_CIFSSettingDataDeps.h"


#ifndef PROPERTY_ENABLED
#define PROPERTY_ENABLED \
					"Enabled"
#endif

#ifndef PROPERTY_CHARSET
#define PROPERTY_CHARSET \
					"Charset"
#endif

#ifndef PROPERTY_USE_TCP_ONLY
#define PROPERTY_USE_TCP_ONLY \
					"UseTCPOnly"
#endif

#ifndef PROPERTY_N_E_T_BIOS_NAME
#define PROPERTY_N_E_T_BIOS_NAME \
					"NETBIOSName"
#endif

#ifndef PROPERTY_W_I_N_S_IP
#define PROPERTY_W_I_N_S_IP \
					"WINSIP"
#endif

#ifndef PROPERTY_AUTHENTICATION_DOMAIN
#define PROPERTY_AUTHENTICATION_DOMAIN \
					"AuthenticationDomain"
#endif

#ifndef PROPERTY_AUTHENTICATION_MODE
#define PROPERTY_AUTHENTICATION_MODE \
					"AuthenticationMode"
#endif

#ifndef PROPERTY_USE_KERBEROS
#define PROPERTY_USE_KERBEROS \
					"UseKerberos"
#endif

#ifndef PROPERTY_USE_OPPORTUNISTIC_LOCKING
#define PROPERTY_USE_OPPORTUNISTIC_LOCKING \
					"UseOpportunisticLocking"
#endif

#ifndef PROPERTY_S_M_B_SIGNING_ONLY
#define PROPERTY_S_M_B_SIGNING_ONLY \
					"SMBSigningOnly"
#endif

#ifndef PROPERTY_CLIENTS_CONNECT_ANONYMOUSLY
#define PROPERTY_CLIENTS_CONNECT_ANONYMOUSLY \
					"ClientsConnectAnonymously"
#endif

#ifndef PROPERTY_JOIN_DOMAIN_ANONYMOUSLY
#define PROPERTY_JOIN_DOMAIN_ANONYMOUSLY \
					"JoinDomainAnonymously"
#endif

#ifndef PROPERTY_DOMAIN_CONTROLLER_USER
#define PROPERTY_DOMAIN_CONTROLLER_USER \
					"DomainControllerUser"
#endif

#ifndef PROPERTY_DOMAIN_CONTROLLER_PASSWORD
#define PROPERTY_DOMAIN_CONTROLLER_PASSWORD \
					"DomainControllerPassword"
#endif

#ifndef PROPERTY_C_I_FS_DOMAIN_CONTROLLER
#define PROPERTY_C_I_FS_DOMAIN_CONTROLLER \
					"CIFSDomainController"
#endif

#ifndef PROPERTY_C_A_SUPPORTED
#define PROPERTY_C_A_SUPPORTED \
					"CASupported"
#endif

#ifndef PROPERTY_MULTI_CHANNEL_SUPPORTED
#define PROPERTY_MULTI_CHANNEL_SUPPORTED \
					"MultiChannelSupported"
#endif

#ifndef PROPERTY_PROTOCOL_VERSIONS
#define PROPERTY_PROTOCOL_VERSIONS \
					"ProtocolVersions"
#endif



class UNIX_CIFSSettingData :
	public CIM_SettingData
{
public:

	UNIX_CIFSSettingData();
	~UNIX_CIFSSettingData();

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
	virtual Boolean getEnabled(CIMProperty&) const;
	virtual Boolean getEnabled() const;
	virtual void setEnabled(Boolean&);
	virtual Boolean getCharset(CIMProperty&) const;
	virtual Uint16 getCharset() const;
	virtual void setCharset(Uint16&);
	virtual Boolean getUseTCPOnly(CIMProperty&) const;
	virtual Boolean getUseTCPOnly() const;
	virtual void setUseTCPOnly(Boolean&);
	virtual Boolean getNETBIOSName(CIMProperty&) const;
	virtual String getNETBIOSName() const;
	virtual void setNETBIOSName(String&);
	virtual Boolean getWINSIP(CIMProperty&) const;
	virtual Array<String> getWINSIP() const;
	virtual void setWINSIP(Array<String>&);
	virtual Boolean getAuthenticationDomain(CIMProperty&) const;
	virtual String getAuthenticationDomain() const;
	virtual void setAuthenticationDomain(String&);
	virtual Boolean getAuthenticationMode(CIMProperty&) const;
	virtual Uint8 getAuthenticationMode() const;
	virtual void setAuthenticationMode(Uint8&);
	virtual Boolean getUseKerberos(CIMProperty&) const;
	virtual Boolean getUseKerberos() const;
	virtual void setUseKerberos(Boolean&);
	virtual Boolean getUseOpportunisticLocking(CIMProperty&) const;
	virtual Boolean getUseOpportunisticLocking() const;
	virtual void setUseOpportunisticLocking(Boolean&);
	virtual Boolean getSMBSigningOnly(CIMProperty&) const;
	virtual Boolean getSMBSigningOnly() const;
	virtual void setSMBSigningOnly(Boolean&);
	virtual Boolean getClientsConnectAnonymously(CIMProperty&) const;
	virtual Boolean getClientsConnectAnonymously() const;
	virtual void setClientsConnectAnonymously(Boolean&);
	virtual Boolean getJoinDomainAnonymously(CIMProperty&) const;
	virtual Boolean getJoinDomainAnonymously() const;
	virtual void setJoinDomainAnonymously(Boolean&);
	virtual Boolean getDomainControllerUser(CIMProperty&) const;
	virtual String getDomainControllerUser() const;
	virtual void setDomainControllerUser(String&);
	virtual Boolean getDomainControllerPassword(CIMProperty&) const;
	virtual String getDomainControllerPassword() const;
	virtual void setDomainControllerPassword(String&);
	virtual Boolean getCIFSDomainController(CIMProperty&) const;
	virtual String getCIFSDomainController() const;
	virtual void setCIFSDomainController(String&);
	virtual Boolean getCASupported(CIMProperty&) const;
	virtual Boolean getCASupported() const;
	virtual void setCASupported(Boolean&);
	virtual Boolean getMultiChannelSupported(CIMProperty&) const;
	virtual Boolean getMultiChannelSupported() const;
	virtual void setMultiChannelSupported(Boolean&);
	virtual Boolean getProtocolVersions(CIMProperty&) const;
	virtual Array<String> getProtocolVersions() const;
	virtual void setProtocolVersions(Array<String>&);


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
	Boolean _enabled;
	Uint16 _charset;
	Boolean _useTCPOnly;
	String _nETBIOSName;
	Array<String> _wINSIP;
	String _authenticationDomain;
	Uint8 _authenticationMode;
	Boolean _useKerberos;
	Boolean _useOpportunisticLocking;
	Boolean _sMBSigningOnly;
	Boolean _clientsConnectAnonymously;
	Boolean _joinDomainAnonymously;
	String _domainControllerUser;
	String _domainControllerPassword;
	String _cIFSDomainController;
	Boolean _cASupported;
	Boolean _multiChannelSupported;
	Array<String> _protocolVersions;

#	include "UNIX_CIFSSettingDataPrivate.h"


};

#endif /* UNIX_CIFSSETTINGDATA */
