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


/* **** Indication *** */
/*
TRUE
*/


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.38.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
A use of a SettingData.
*/


/* **** Structure *** */
/*
TRUE
*/


/*
			 *** Properties ***

			UNIX_ComponentSetting:
				PropertyPolicy UInt16
				ValueRange UInt16
				ValueRole UInt16
				Setting String


*/


/*
			 *** Methods ***

			UNIX_ComponentSetting:


*/

#ifndef __UNIX_COMPONENTSETTING_H
#define __UNIX_COMPONENTSETTING_H


#include "CIM_ClassBase.h"

#include "UNIX_ComponentSettingDeps.h"


#ifndef PROPERTY_PROPERTY_POLICY
#define PROPERTY_PROPERTY_POLICY \
					"PropertyPolicy"
#endif

#ifndef PROPERTY_VALUE_RANGE
#define PROPERTY_VALUE_RANGE \
					"ValueRange"
#endif

#ifndef PROPERTY_VALUE_ROLE
#define PROPERTY_VALUE_ROLE \
					"ValueRole"
#endif

#ifndef PROPERTY_SETTING
#define PROPERTY_SETTING \
					"Setting"
#endif



class UNIX_ComponentSetting :
	public CIM_ClassBase
{
public:

	UNIX_ComponentSetting();
	~UNIX_ComponentSetting();

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

	virtual Boolean getPropertyPolicy(CIMProperty&) const;
	virtual Uint16 getPropertyPolicy() const;
	virtual void setPropertyPolicy(Uint16&);
	virtual Boolean getValueRange(CIMProperty&) const;
	virtual Uint16 getValueRange() const;
	virtual void setValueRange(Uint16&);
	virtual Boolean getValueRole(CIMProperty&) const;
	virtual Uint16 getValueRole() const;
	virtual void setValueRole(Uint16&);
	virtual Boolean getSetting(CIMProperty&) const;
	virtual String getSetting() const;
	virtual void setSetting(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	Uint16 _propertyPolicy;
	Uint16 _valueRange;
	Uint16 _valueRole;
	String _setting;

#	include "UNIX_ComponentSettingPrivate.h"


};

#endif /* UNIX_COMPONENTSETTING */
