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
CIM::Network::ConsoleProtocols
*/


/* **** Description *** */
/*
A representation of the SettingData of an SSH endpoint.
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

			UNIX_SSHSettingData:
				EnabledSSHVersions UInt16
				OtherEnabledSSHVersion String
				SSHVersion UInt16
				OtherSSHVersion String
				EnabledEncryptionAlgorithms UInt16
				OtherEnabledEncryptionAlgorithm String
				EncryptionAlgorithm UInt16
				OtherEncryptionAlgorithm String
				IdleTimeout UInt32
				KeepAlive Boolean
				ForwardX11 Boolean
				Compression Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_SSHSettingData:


*/

#ifndef __UNIX_SSHSETTINGDATA_H
#define __UNIX_SSHSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_SSHSettingDataDeps.h"


#ifndef PROPERTY_ENABLED_S_S_H_VERSIONS
#define PROPERTY_ENABLED_S_S_H_VERSIONS \
					"EnabledSSHVersions"
#endif

#ifndef PROPERTY_OTHER_ENABLED_S_S_H_VERSION
#define PROPERTY_OTHER_ENABLED_S_S_H_VERSION \
					"OtherEnabledSSHVersion"
#endif

#ifndef PROPERTY_S_S_H_VERSION
#define PROPERTY_S_S_H_VERSION \
					"SSHVersion"
#endif

#ifndef PROPERTY_OTHER_S_S_H_VERSION
#define PROPERTY_OTHER_S_S_H_VERSION \
					"OtherSSHVersion"
#endif

#ifndef PROPERTY_ENABLED_ENCRYPTION_ALGORITHMS
#define PROPERTY_ENABLED_ENCRYPTION_ALGORITHMS \
					"EnabledEncryptionAlgorithms"
#endif

#ifndef PROPERTY_OTHER_ENABLED_ENCRYPTION_ALGORITHM
#define PROPERTY_OTHER_ENABLED_ENCRYPTION_ALGORITHM \
					"OtherEnabledEncryptionAlgorithm"
#endif

#ifndef PROPERTY_ENCRYPTION_ALGORITHM
#define PROPERTY_ENCRYPTION_ALGORITHM \
					"EncryptionAlgorithm"
#endif

#ifndef PROPERTY_OTHER_ENCRYPTION_ALGORITHM
#define PROPERTY_OTHER_ENCRYPTION_ALGORITHM \
					"OtherEncryptionAlgorithm"
#endif

#ifndef PROPERTY_IDLE_TIMEOUT
#define PROPERTY_IDLE_TIMEOUT \
					"IdleTimeout"
#endif

#ifndef PROPERTY_KEEP_ALIVE
#define PROPERTY_KEEP_ALIVE \
					"KeepAlive"
#endif

#ifndef PROPERTY_FORWARD_X_1_1
#define PROPERTY_FORWARD_X_1_1 \
					"ForwardX11"
#endif

#ifndef PROPERTY_COMPRESSION
#define PROPERTY_COMPRESSION \
					"Compression"
#endif



class UNIX_SSHSettingData :
	public CIM_SettingData
{
public:

	UNIX_SSHSettingData();
	~UNIX_SSHSettingData();

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
	virtual Boolean getEnabledSSHVersions(CIMProperty&) const;
	virtual Array<Uint16> getEnabledSSHVersions() const;
	virtual void setEnabledSSHVersions(Array<Uint16>&);
	virtual Boolean getOtherEnabledSSHVersion(CIMProperty&) const;
	virtual String getOtherEnabledSSHVersion() const;
	virtual void setOtherEnabledSSHVersion(String&);
	virtual Boolean getSSHVersion(CIMProperty&) const;
	virtual Uint16 getSSHVersion() const;
	virtual void setSSHVersion(Uint16&);
	virtual Boolean getOtherSSHVersion(CIMProperty&) const;
	virtual Array<String> getOtherSSHVersion() const;
	virtual void setOtherSSHVersion(Array<String>&);
	virtual Boolean getEnabledEncryptionAlgorithms(CIMProperty&) const;
	virtual Array<Uint16> getEnabledEncryptionAlgorithms() const;
	virtual void setEnabledEncryptionAlgorithms(Array<Uint16>&);
	virtual Boolean getOtherEnabledEncryptionAlgorithm(CIMProperty&) const;
	virtual Array<String> getOtherEnabledEncryptionAlgorithm() const;
	virtual void setOtherEnabledEncryptionAlgorithm(Array<String>&);
	virtual Boolean getEncryptionAlgorithm(CIMProperty&) const;
	virtual Uint16 getEncryptionAlgorithm() const;
	virtual void setEncryptionAlgorithm(Uint16&);
	virtual Boolean getOtherEncryptionAlgorithm(CIMProperty&) const;
	virtual String getOtherEncryptionAlgorithm() const;
	virtual void setOtherEncryptionAlgorithm(String&);
	virtual Boolean getIdleTimeout(CIMProperty&) const;
	virtual Uint32 getIdleTimeout() const;
	virtual void setIdleTimeout(Uint32&);
	virtual Boolean getKeepAlive(CIMProperty&) const;
	virtual Boolean getKeepAlive() const;
	virtual void setKeepAlive(Boolean&);
	virtual Boolean getForwardX11(CIMProperty&) const;
	virtual Boolean getForwardX11() const;
	virtual void setForwardX11(Boolean&);
	virtual Boolean getCompression(CIMProperty&) const;
	virtual Boolean getCompression() const;
	virtual void setCompression(Boolean&);


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
	Array<Uint16> _enabledSSHVersions;
	String _otherEnabledSSHVersion;
	Uint16 _sSHVersion;
	Array<String> _otherSSHVersion;
	Array<Uint16> _enabledEncryptionAlgorithms;
	Array<String> _otherEnabledEncryptionAlgorithm;
	Uint16 _encryptionAlgorithm;
	String _otherEncryptionAlgorithm;
	Uint32 _idleTimeout;
	Boolean _keepAlive;
	Boolean _forwardX11;
	Boolean _compression;

#	include "UNIX_SSHSettingDataPrivate.h"


};

#endif /* UNIX_SSHSETTINGDATA */
