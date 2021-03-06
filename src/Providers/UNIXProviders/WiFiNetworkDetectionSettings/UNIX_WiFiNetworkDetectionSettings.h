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
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Wireless
*/


/* **** Description *** */
/*
CIM_WiFiNetworkDetectionSettings describes setting data that control the behavior of the network detection and selection logic in a Wi-Fi Port.
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

			UNIX_WiFiNetworkDetectionSettings:
				TargetNetworkCategories UInt16
				PreferredNetworks String
				KnownNetworks String
				MinimumSignalStrength UInt16
				PortTypes UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_WiFiNetworkDetectionSettings:


*/

#ifndef __UNIX_WIFINETWORKDETECTIONSETTINGS_H
#define __UNIX_WIFINETWORKDETECTIONSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_WiFiNetworkDetectionSettingsDeps.h"


#ifndef PROPERTY_TARGET_NETWORK_CATEGORIES
#define PROPERTY_TARGET_NETWORK_CATEGORIES \
					"TargetNetworkCategories"
#endif

#ifndef PROPERTY_PREFERRED_NETWORKS
#define PROPERTY_PREFERRED_NETWORKS \
					"PreferredNetworks"
#endif

#ifndef PROPERTY_KNOWN_NETWORKS
#define PROPERTY_KNOWN_NETWORKS \
					"KnownNetworks"
#endif

#ifndef PROPERTY_MINIMUM_SIGNAL_STRENGTH
#define PROPERTY_MINIMUM_SIGNAL_STRENGTH \
					"MinimumSignalStrength"
#endif

#ifndef PROPERTY_PORT_TYPES
#define PROPERTY_PORT_TYPES \
					"PortTypes"
#endif



class UNIX_WiFiNetworkDetectionSettings :
	public CIM_SettingData
{
public:

	UNIX_WiFiNetworkDetectionSettings();
	~UNIX_WiFiNetworkDetectionSettings();

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
	virtual Boolean getTargetNetworkCategories(CIMProperty&) const;
	virtual Uint16 getTargetNetworkCategories() const;
	virtual void setTargetNetworkCategories(Uint16&);
	virtual Boolean getPreferredNetworks(CIMProperty&) const;
	virtual Array<String> getPreferredNetworks() const;
	virtual void setPreferredNetworks(Array<String>&);
	virtual Boolean getKnownNetworks(CIMProperty&) const;
	virtual Array<String> getKnownNetworks() const;
	virtual void setKnownNetworks(Array<String>&);
	virtual Boolean getMinimumSignalStrength(CIMProperty&) const;
	virtual Uint16 getMinimumSignalStrength() const;
	virtual void setMinimumSignalStrength(Uint16&);
	virtual Boolean getPortTypes(CIMProperty&) const;
	virtual Array<Uint16> getPortTypes() const;
	virtual void setPortTypes(Array<Uint16>&);


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
	Uint16 _targetNetworkCategories;
	Array<String> _preferredNetworks;
	Array<String> _knownNetworks;
	Uint16 _minimumSignalStrength;
	Array<Uint16> _portTypes;

#	include "UNIX_WiFiNetworkDetectionSettingsPrivate.h"


};

#endif /* UNIX_WIFINETWORKDETECTIONSETTINGS */
