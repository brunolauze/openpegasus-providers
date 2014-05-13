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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Collections
*/


/* **** Description *** */
/*
ConnectivityMembershipSettingData provides the identification criteria for possible members of a ConnectivityCollection.
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

			CIM_ConnectivityMembershipSettingData:
				ConnectivityMemberType UInt16
				OtherConnectivityMemberType String
				ConnectivityMemberID String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ConnectivityMembershipSettingData:


*/

#ifndef __CIM_CONNECTIVITYMEMBERSHIPSETTINGDATA_H
#define __CIM_CONNECTIVITYMEMBERSHIPSETTINGDATA_H


#include "CIM_SettingData.h"


#ifndef PROPERTY_CONNECTIVITY_MEMBER_TYPE
#define PROPERTY_CONNECTIVITY_MEMBER_TYPE \
					"ConnectivityMemberType"
#endif

#ifndef PROPERTY_OTHER_CONNECTIVITY_MEMBER_TYPE
#define PROPERTY_OTHER_CONNECTIVITY_MEMBER_TYPE \
					"OtherConnectivityMemberType"
#endif

#ifndef PROPERTY_CONNECTIVITY_MEMBER_ID
#define PROPERTY_CONNECTIVITY_MEMBER_ID \
					"ConnectivityMemberID"
#endif



class CIM_ConnectivityMembershipSettingData :
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

	virtual Boolean getConnectivityMemberType(CIMProperty&) const=0;
	virtual Uint16 getConnectivityMemberType() const=0;
	virtual void setConnectivityMemberType(Uint16&)=0;
	virtual Boolean getOtherConnectivityMemberType(CIMProperty&) const=0;
	virtual String getOtherConnectivityMemberType() const=0;
	virtual void setOtherConnectivityMemberType(String&)=0;
	virtual Boolean getConnectivityMemberID(CIMProperty&) const=0;
	virtual String getConnectivityMemberID() const=0;
	virtual void setConnectivityMemberID(String&)=0;


private:

};

#endif /* CIM_CONNECTIVITYMEMBERSHIPSETTINGDATA */
