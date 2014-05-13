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
CIM::Network::Wireless
*/


/* **** Description *** */
/*
CIM_WiFiEndpointSettings describes setting data that can be applied to an instance of CIM_WiFiEndpoint to enable it to associate to a particular Wi-Fi network.
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

			UNIX_WiFiEndpointSettings:
				Priority UInt8
				SSID String
				BSSType UInt16
				EncryptionMethod UInt16
				OtherEncryptionMethod String
				AuthenticationMethod UInt16
				OtherAuthenticationMethod String
				Keys String
				KeyIndex UInt8
				PSKValue UInt8
				PSKPassPhrase String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_WiFiEndpointSettings:


*/

#ifndef __UNIX_WIFIENDPOINTSETTINGS_H
#define __UNIX_WIFIENDPOINTSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_WiFiEndpointSettingsDeps.h"


#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif

#ifndef PROPERTY_S_S_ID
#define PROPERTY_S_S_ID \
					"SSID"
#endif

#ifndef PROPERTY_B_S_S_TYPE
#define PROPERTY_B_S_S_TYPE \
					"BSSType"
#endif

#ifndef PROPERTY_ENCRYPTION_METHOD
#define PROPERTY_ENCRYPTION_METHOD \
					"EncryptionMethod"
#endif

#ifndef PROPERTY_OTHER_ENCRYPTION_METHOD
#define PROPERTY_OTHER_ENCRYPTION_METHOD \
					"OtherEncryptionMethod"
#endif

#ifndef PROPERTY_AUTHENTICATION_METHOD
#define PROPERTY_AUTHENTICATION_METHOD \
					"AuthenticationMethod"
#endif

#ifndef PROPERTY_OTHER_AUTHENTICATION_METHOD
#define PROPERTY_OTHER_AUTHENTICATION_METHOD \
					"OtherAuthenticationMethod"
#endif

#ifndef PROPERTY_KEYS
#define PROPERTY_KEYS \
					"Keys"
#endif

#ifndef PROPERTY_KEY_INDEX
#define PROPERTY_KEY_INDEX \
					"KeyIndex"
#endif

#ifndef PROPERTY_P_S_K_VALUE
#define PROPERTY_P_S_K_VALUE \
					"PSKValue"
#endif

#ifndef PROPERTY_P_S_K_PASS_PHRASE
#define PROPERTY_P_S_K_PASS_PHRASE \
					"PSKPassPhrase"
#endif



class UNIX_WiFiEndpointSettings :
	public CIM_SettingData
{
public:

	UNIX_WiFiEndpointSettings();
	~UNIX_WiFiEndpointSettings();

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
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint8 getPriority() const;
	virtual void setPriority(Uint8&);
	virtual Boolean getSSID(CIMProperty&) const;
	virtual String getSSID() const;
	virtual void setSSID(String&);
	virtual Boolean getBSSType(CIMProperty&) const;
	virtual Uint16 getBSSType() const;
	virtual void setBSSType(Uint16&);
	virtual Boolean getEncryptionMethod(CIMProperty&) const;
	virtual Uint16 getEncryptionMethod() const;
	virtual void setEncryptionMethod(Uint16&);
	virtual Boolean getOtherEncryptionMethod(CIMProperty&) const;
	virtual String getOtherEncryptionMethod() const;
	virtual void setOtherEncryptionMethod(String&);
	virtual Boolean getAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getAuthenticationMethod() const;
	virtual void setAuthenticationMethod(Uint16&);
	virtual Boolean getOtherAuthenticationMethod(CIMProperty&) const;
	virtual String getOtherAuthenticationMethod() const;
	virtual void setOtherAuthenticationMethod(String&);
	virtual Boolean getKeys(CIMProperty&) const;
	virtual Array<String> getKeys() const;
	virtual void setKeys(Array<String>&);
	virtual Boolean getKeyIndex(CIMProperty&) const;
	virtual Uint8 getKeyIndex() const;
	virtual void setKeyIndex(Uint8&);
	virtual Boolean getPSKValue(CIMProperty&) const;
	virtual Array<Uint8> getPSKValue() const;
	virtual void setPSKValue(Array<Uint8>&);
	virtual Boolean getPSKPassPhrase(CIMProperty&) const;
	virtual String getPSKPassPhrase() const;
	virtual void setPSKPassPhrase(String&);


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
	Uint8 _priority;
	String _sSID;
	Uint16 _bSSType;
	Uint16 _encryptionMethod;
	String _otherEncryptionMethod;
	Uint16 _authenticationMethod;
	String _otherAuthenticationMethod;
	Array<String> _keys;
	Uint8 _keyIndex;
	Array<Uint8> _pSKValue;
	String _pSKPassPhrase;

#	include "UNIX_WiFiEndpointSettingsPrivate.h"


};

#endif /* UNIX_WIFIENDPOINTSETTINGS */
