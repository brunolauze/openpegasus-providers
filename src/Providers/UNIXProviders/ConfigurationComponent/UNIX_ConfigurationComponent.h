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
Note: The Configuration class is being deprecated in lieu of using a ConcreteComponent relationship to indicate a hierarchy of instances of Setting or SettingData. Deprecated description: ConfigurationComponent aggregates "lower-level" Configuration objects into a "high-level" Configuration. This association enables the assembly of complex configurations by grouping together simpler ones. For example, a logon policy for the United States could consist of two Configuration groups, one for the East Coast and one for the West Coast. Each of these groups could in turn consist of multiple Configurations to handle different aspects of the logon process.
*/


/*
			 *** Properties ***

			UNIX_ConfigurationComponent:
				ConfigGroup Reference
				ConfigComponent Reference


*/


/*
			 *** Methods ***

			UNIX_ConfigurationComponent:


*/

#ifndef __UNIX_CONFIGURATIONCOMPONENT_H
#define __UNIX_CONFIGURATIONCOMPONENT_H


#include "CIM_ClassBase.h"

#include "UNIX_ConfigurationComponentDeps.h"


#ifndef PROPERTY_CONFIG_GROUP
#define PROPERTY_CONFIG_GROUP \
					"ConfigGroup"
#endif

#ifndef PROPERTY_CONFIG_COMPONENT
#define PROPERTY_CONFIG_COMPONENT \
					"ConfigComponent"
#endif



class UNIX_ConfigurationComponent :
	public CIM_ClassBase
{
public:

	UNIX_ConfigurationComponent();
	~UNIX_ConfigurationComponent();

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

	virtual Boolean getConfigGroup(CIMProperty&) const;
	virtual CIMInstance getConfigGroup() const;
	virtual void setConfigGroup(CIMInstance&);
	virtual Boolean getConfigComponent(CIMProperty&) const;
	virtual CIMInstance getConfigComponent() const;
	virtual void setConfigComponent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _configGroup;
	CIMInstance _configComponent;

#	include "UNIX_ConfigurationComponentPrivate.h"


};

#endif /* UNIX_CONFIGURATIONCOMPONENT */
