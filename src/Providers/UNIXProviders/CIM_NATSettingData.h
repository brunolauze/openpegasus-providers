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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::NAT
*/


/* **** Description *** */
/*
NATSettingData is an abstract class specifying the general parameters of an address translation. This data is specific to the system on which the NATService is running. The scoping system is described using the inherited ScopedSetting association.
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

			CIM_ScopedSettingData:

			CIM_NATSettingData:
				IsInside Boolean
				AddressExamined UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ScopedSettingData:

			CIM_NATSettingData:


*/

#ifndef __CIM_NATSETTINGDATA_H
#define __CIM_NATSETTINGDATA_H


#include "CIM_ScopedSettingData.h"


#ifndef PROPERTY_IS_INSIDE
#define PROPERTY_IS_INSIDE \
					"IsInside"
#endif

#ifndef PROPERTY_ADDRESS_EXAMINED
#define PROPERTY_ADDRESS_EXAMINED \
					"AddressExamined"
#endif



class CIM_NATSettingData :
	public CIM_ScopedSettingData
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

	virtual Boolean getIsInside(CIMProperty&) const=0;
	virtual Boolean getIsInside() const=0;
	virtual void setIsInside(Boolean&)=0;
	virtual Boolean getAddressExamined(CIMProperty&) const=0;
	virtual Uint16 getAddressExamined() const=0;
	virtual void setAddressExamined(Uint16&)=0;


private:

};

#endif /* CIM_NATSETTINGDATA */
