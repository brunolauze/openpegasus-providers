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
CIM::System::BIOS
*/


/* **** Description *** */
/*
A class derived from ManagedElement that provides instrumentation of BIOS configuration data or Attributes of a managed computer system or device. These attributes are surfaced in the form of BIOSAttribute instances. The CIM_BIOSAttribute object may be used to represent both configurable and static BIOS attributes.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_BIOSAttribute:
				AttributeName String
				CurrentValue String
				DefaultValue String
				PendingValue String
				IsOrderedList Boolean
				IsReadOnly Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BIOSAttribute:


*/

#ifndef __CIM_BIOSATTRIBUTE_H
#define __CIM_BIOSATTRIBUTE_H


#include "CIM_ManagedElement.h"


#ifndef PROPERTY_ATTRIBUTE_NAME
#define PROPERTY_ATTRIBUTE_NAME \
					"AttributeName"
#endif

#ifndef PROPERTY_CURRENT_VALUE
#define PROPERTY_CURRENT_VALUE \
					"CurrentValue"
#endif

#ifndef PROPERTY_DEFAULT_VALUE
#define PROPERTY_DEFAULT_VALUE \
					"DefaultValue"
#endif

#ifndef PROPERTY_PENDING_VALUE
#define PROPERTY_PENDING_VALUE \
					"PendingValue"
#endif

#ifndef PROPERTY_IS_ORDERED_LIST
#define PROPERTY_IS_ORDERED_LIST \
					"IsOrderedList"
#endif

#ifndef PROPERTY_IS_READ_ONLY
#define PROPERTY_IS_READ_ONLY \
					"IsReadOnly"
#endif



class CIM_BIOSAttribute :
	public CIM_ManagedElement
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

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getAttributeName(CIMProperty&) const=0;
	virtual String getAttributeName() const=0;
	virtual void setAttributeName(String&)=0;
	virtual Boolean getCurrentValue(CIMProperty&) const=0;
	virtual Array<String> getCurrentValue() const=0;
	virtual void setCurrentValue(Array<String>&)=0;
	virtual Boolean getDefaultValue(CIMProperty&) const=0;
	virtual Array<String> getDefaultValue() const=0;
	virtual void setDefaultValue(Array<String>&)=0;
	virtual Boolean getPendingValue(CIMProperty&) const=0;
	virtual Array<String> getPendingValue() const=0;
	virtual void setPendingValue(Array<String>&)=0;
	virtual Boolean getIsOrderedList(CIMProperty&) const=0;
	virtual Boolean getIsOrderedList() const=0;
	virtual void setIsOrderedList(Boolean&)=0;
	virtual Boolean getIsReadOnly(CIMProperty&) const=0;
	virtual Boolean getIsReadOnly() const=0;
	virtual void setIsReadOnly(Boolean&)=0;


private:

};

#endif /* CIM_BIOSATTRIBUTE */
