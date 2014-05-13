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
2.14.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::DNS
*/


/* **** Description *** */
/*
The DNSGeneralSettingData class represents the system wide configuration options for the DNS client. Therefore, these configuration parameters are scoped to a computer system and are applicable to all of the network interfaces of the scoping system.
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

			CIM_IPAssignmentSettingData:
				AddressOrigin UInt16
				ProtocolIFType UInt16
				AddressPrefixOrigin UInt16
				AddressSuffixOrigin UInt16
				OtherAddressPrefixOriginDescription String
				OtherAddressSuffixOriginDescription String

			UNIX_DNSGeneralSettingData:
				AppendPrimarySuffixes Boolean
				AppendParentSuffixes Boolean
				DNSSuffixesToAppend String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_IPAssignmentSettingData:

			UNIX_DNSGeneralSettingData:


*/

#ifndef __UNIX_DNSGENERALSETTINGDATA_H
#define __UNIX_DNSGENERALSETTINGDATA_H


#include "CIM_IPAssignmentSettingData.h"

#include "UNIX_DNSGeneralSettingDataDeps.h"


#ifndef PROPERTY_APPEND_PRIMARY_SUFFIXES
#define PROPERTY_APPEND_PRIMARY_SUFFIXES \
					"AppendPrimarySuffixes"
#endif

#ifndef PROPERTY_APPEND_PARENT_SUFFIXES
#define PROPERTY_APPEND_PARENT_SUFFIXES \
					"AppendParentSuffixes"
#endif

#ifndef PROPERTY_DNS_SUFFIXES_TO_APPEND
#define PROPERTY_DNS_SUFFIXES_TO_APPEND \
					"DNSSuffixesToAppend"
#endif



class UNIX_DNSGeneralSettingData :
	public CIM_IPAssignmentSettingData
{
public:

	UNIX_DNSGeneralSettingData();
	~UNIX_DNSGeneralSettingData();

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
	virtual Boolean getAddressOrigin(CIMProperty&) const;
	virtual Uint16 getAddressOrigin() const;
	virtual void setAddressOrigin(Uint16&);
	virtual Boolean getProtocolIFType(CIMProperty&) const;
	virtual Uint16 getProtocolIFType() const;
	virtual void setProtocolIFType(Uint16&);
	virtual Boolean getAddressPrefixOrigin(CIMProperty&) const;
	virtual Uint16 getAddressPrefixOrigin() const;
	virtual void setAddressPrefixOrigin(Uint16&);
	virtual Boolean getAddressSuffixOrigin(CIMProperty&) const;
	virtual Uint16 getAddressSuffixOrigin() const;
	virtual void setAddressSuffixOrigin(Uint16&);
	virtual Boolean getOtherAddressPrefixOriginDescription(CIMProperty&) const;
	virtual String getOtherAddressPrefixOriginDescription() const;
	virtual void setOtherAddressPrefixOriginDescription(String&);
	virtual Boolean getOtherAddressSuffixOriginDescription(CIMProperty&) const;
	virtual String getOtherAddressSuffixOriginDescription() const;
	virtual void setOtherAddressSuffixOriginDescription(String&);
	virtual Boolean getAppendPrimarySuffixes(CIMProperty&) const;
	virtual Boolean getAppendPrimarySuffixes() const;
	virtual void setAppendPrimarySuffixes(Boolean&);
	virtual Boolean getAppendParentSuffixes(CIMProperty&) const;
	virtual Boolean getAppendParentSuffixes() const;
	virtual void setAppendParentSuffixes(Boolean&);
	virtual Boolean getDNSSuffixesToAppend(CIMProperty&) const;
	virtual Array<String> getDNSSuffixesToAppend() const;
	virtual void setDNSSuffixesToAppend(Array<String>&);


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
	Uint16 _addressOrigin;
	Uint16 _protocolIFType;
	Uint16 _addressPrefixOrigin;
	Uint16 _addressSuffixOrigin;
	String _otherAddressPrefixOriginDescription;
	String _otherAddressSuffixOriginDescription;
	Boolean _appendPrimarySuffixes;
	Boolean _appendParentSuffixes;
	Array<String> _dNSSuffixesToAppend;

#	include "UNIX_DNSGeneralSettingDataPrivate.h"


};

#endif /* UNIX_DNSGENERALSETTINGDATA */
