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


/* **** Deprecated *** */
/*
CIM_ConcreteComponent
*/


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
Note: The Configuration class is being deprecated in lieu of using a ConcreteComponent relationship to indicate a hierarchy of instances of Setting or SettingData. Therefore, the aggregation of Settings into Configurations is replaced by the ConcreteComponent relationship between instances of Settings and SettingData. 
Deprecated description: This relationship associates Configuration objects with Setting objects. For example, Settings of a NetworkAdapter could change based on the site or network to which its hosting ComputerSystem is attached. In this case, the ComputerSystem would have two different Configuration objects, corresponding to the differences in network configuration for the two network segments. Configuration A would aggregate a Setting object for the NetworkAdapter when operating on segment "ANet", whereas Configuration B would aggregate a different NetworkAdapter Setting object, specific to segment "BNet". Note that many Settings of the computer are independent of the network Configuration. For example, both Configurations A and B would aggregate the same Setting object for the MonitorResolution of the ComputerSystem.
*/


/*
			 *** Properties ***

			UNIX_SettingContext:
				Context Reference
				Setting Reference


*/


/*
			 *** Methods ***

			UNIX_SettingContext:


*/

#ifndef __UNIX_SETTINGCONTEXT_H
#define __UNIX_SETTINGCONTEXT_H


#include "CIM_ClassBase.h"

#include "UNIX_SettingContextDeps.h"


#ifndef PROPERTY_CONTEXT
#define PROPERTY_CONTEXT \
					"Context"
#endif

#ifndef PROPERTY_SETTING
#define PROPERTY_SETTING \
					"Setting"
#endif



class UNIX_SettingContext :
	public CIM_ClassBase
{
public:

	UNIX_SettingContext();
	~UNIX_SettingContext();

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

	virtual Boolean getContext(CIMProperty&) const;
	virtual CIMInstance getContext() const;
	virtual void setContext(CIMInstance&);
	virtual Boolean getSetting(CIMProperty&) const;
	virtual CIMInstance getSetting() const;
	virtual void setSetting(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _context;
	CIMInstance _setting;

#	include "UNIX_SettingContextPrivate.h"


};

#endif /* UNIX_SETTINGCONTEXT */
