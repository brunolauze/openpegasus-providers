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
CIM::Network::IP
*/


/* **** Description *** */
/*
This class and its sub-classes represents Internet Protocol (IP) related settings. When used as an accumulation of settings (AddressOrigin set to 11 "cumulative configuration"), this SettingData instance is the aggregation point identifying an IP configuration. Multiple IP configurations could exist for a target. Each configuration is represented with an instance of IPAssignmentSettingData. The details of the IP configuration are defined by instances of sub-classes of this class (i.e. StaticIPAssignmentSettingData, DHCPSettingData, DNSSettingData). These instances are associated with the IPAssignmentSettingData instance using the OrderedComponent or ConcreteComponent associations. For example, a static IP configuration would be represented by an instance of IPAssignmentSettingData and an instance of StaticIPAssignmentSettingData associated via an instance of ConcreteComponent. A static IP configuration including DNS would be modeled using an instance of IPAssignmentSettingData, DNSSettingData, and StaticIPAssignmentSettingData. The DNSSettingData and StaticIPAssignmentSettingData instance would be associated with the IPAssignmentSettingData using instances of ConcreteComponent.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_IPAssignmentSettingData:


*/

#ifndef __CIM_IPASSIGNMENTSETTINGDATA_H
#define __CIM_IPASSIGNMENTSETTINGDATA_H


#include "CIM_SettingData.h"


#ifndef PROPERTY_ADDRESS_ORIGIN
#define PROPERTY_ADDRESS_ORIGIN \
					"AddressOrigin"
#endif

#ifndef PROPERTY_PROTOCOL_I_F_TYPE
#define PROPERTY_PROTOCOL_I_F_TYPE \
					"ProtocolIFType"
#endif

#ifndef PROPERTY_ADDRESS_PREFIX_ORIGIN
#define PROPERTY_ADDRESS_PREFIX_ORIGIN \
					"AddressPrefixOrigin"
#endif

#ifndef PROPERTY_ADDRESS_SUFFIX_ORIGIN
#define PROPERTY_ADDRESS_SUFFIX_ORIGIN \
					"AddressSuffixOrigin"
#endif

#ifndef PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION
#define PROPERTY_OTHER_ADDRESS_PREFIX_ORIGIN_DESCRIPTION \
					"OtherAddressPrefixOriginDescription"
#endif

#ifndef PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION
#define PROPERTY_OTHER_ADDRESS_SUFFIX_ORIGIN_DESCRIPTION \
					"OtherAddressSuffixOriginDescription"
#endif



class CIM_IPAssignmentSettingData :
	public CIM_SettingData
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getAddressOrigin(CIMProperty&) const=0;
	virtual Uint16 getAddressOrigin() const=0;
	virtual void setAddressOrigin(Uint16&)=0;
	virtual Boolean getProtocolIFType(CIMProperty&) const=0;
	virtual Uint16 getProtocolIFType() const=0;
	virtual void setProtocolIFType(Uint16&)=0;
	virtual Boolean getAddressPrefixOrigin(CIMProperty&) const=0;
	virtual Uint16 getAddressPrefixOrigin() const=0;
	virtual void setAddressPrefixOrigin(Uint16&)=0;
	virtual Boolean getAddressSuffixOrigin(CIMProperty&) const=0;
	virtual Uint16 getAddressSuffixOrigin() const=0;
	virtual void setAddressSuffixOrigin(Uint16&)=0;
	virtual Boolean getOtherAddressPrefixOriginDescription(CIMProperty&) const=0;
	virtual String getOtherAddressPrefixOriginDescription() const=0;
	virtual void setOtherAddressPrefixOriginDescription(String&)=0;
	virtual Boolean getOtherAddressSuffixOriginDescription(CIMProperty&) const=0;
	virtual String getOtherAddressSuffixOriginDescription() const=0;
	virtual void setOtherAddressSuffixOriginDescription(String&)=0;


private:

};

#endif /* CIM_IPASSIGNMENTSETTINGDATA */
