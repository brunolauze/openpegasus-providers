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


/* **** Association *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.19.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
ElementSettingData represents the association between ManagedElements and applicable setting data. This association also describes whether this is a default or current setting. Each non-null, non-key property of the associated SettingData instance defines a setting value for the associated ManagedElement. The properties, IsDefault, IsCurrent, IsNext, IsMinimum, IsMaximum, and IsPending further qualify those setting values. 
Note: the referenced SettingData instance does not reflect the current desired state of the referenced ManagedElement unless IsCurrent = "Is Current". 
When IsMinimum and/or IsMaximum properties have the value "Is Minimum" or "Is Maximum" respectively, the referenced SettingData instance reflects desired minimum or maximum values respectively. When IsMinimum and IsMaximum have any other value, the referenced SettingData reflects actual desired values.
*/


/*
			 *** Properties ***

			CIM_ElementSettingData:
				ManagedElement Reference
				SettingData Reference
				IsDefault UInt16
				IsCurrent UInt16
				IsNext UInt16
				IsMinimum UInt16
				IsMaximum UInt16
				IsPending UInt16


*/


/*
			 *** Methods ***

			CIM_ElementSettingData:


*/

#ifndef __CIM_ELEMENTSETTINGDATA_H
#define __CIM_ELEMENTSETTINGDATA_H


#include "CIM_ClassBase.h"


#ifndef PROPERTY_MANAGED_ELEMENT
#define PROPERTY_MANAGED_ELEMENT \
					"ManagedElement"
#endif

#ifndef PROPERTY_SETTING_DATA
#define PROPERTY_SETTING_DATA \
					"SettingData"
#endif

#ifndef PROPERTY_IS_DEFAULT
#define PROPERTY_IS_DEFAULT \
					"IsDefault"
#endif

#ifndef PROPERTY_IS_CURRENT
#define PROPERTY_IS_CURRENT \
					"IsCurrent"
#endif

#ifndef PROPERTY_IS_NEXT
#define PROPERTY_IS_NEXT \
					"IsNext"
#endif

#ifndef PROPERTY_IS_MINIMUM
#define PROPERTY_IS_MINIMUM \
					"IsMinimum"
#endif

#ifndef PROPERTY_IS_MAXIMUM
#define PROPERTY_IS_MAXIMUM \
					"IsMaximum"
#endif

#ifndef PROPERTY_IS_PENDING
#define PROPERTY_IS_PENDING \
					"IsPending"
#endif



class CIM_ElementSettingData :
	public CIM_ClassBase
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

	virtual Boolean getManagedElement(CIMProperty&) const=0;
	virtual CIMInstance getManagedElement() const=0;
	virtual void setManagedElement(CIMInstance&)=0;
	virtual Boolean getSettingData(CIMProperty&) const=0;
	virtual CIMInstance getSettingData() const=0;
	virtual void setSettingData(CIMInstance&)=0;
	virtual Boolean getIsDefault(CIMProperty&) const=0;
	virtual Uint16 getIsDefault() const=0;
	virtual void setIsDefault(Uint16&)=0;
	virtual Boolean getIsCurrent(CIMProperty&) const=0;
	virtual Uint16 getIsCurrent() const=0;
	virtual void setIsCurrent(Uint16&)=0;
	virtual Boolean getIsNext(CIMProperty&) const=0;
	virtual Uint16 getIsNext() const=0;
	virtual void setIsNext(Uint16&)=0;
	virtual Boolean getIsMinimum(CIMProperty&) const=0;
	virtual Uint16 getIsMinimum() const=0;
	virtual void setIsMinimum(Uint16&)=0;
	virtual Boolean getIsMaximum(CIMProperty&) const=0;
	virtual Uint16 getIsMaximum() const=0;
	virtual void setIsMaximum(Uint16&)=0;
	virtual Boolean getIsPending(CIMProperty&) const=0;
	virtual Uint16 getIsPending() const=0;
	virtual void setIsPending(Uint16&)=0;


private:

};

#endif /* CIM_ELEMENTSETTINGDATA */
