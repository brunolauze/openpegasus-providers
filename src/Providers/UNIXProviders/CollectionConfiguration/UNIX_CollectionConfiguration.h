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
CIM_ElementSettingData
CIM_CollectionSetting
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
Note: The Configuration class is being deprecated in lieu of using a ConcreteComponent relationship to indicate a hierarchy of instances of Setting or SettingData. This relationship allows the reuse of the collection-to-Setting and element-to-SettingData associations instead of defining peer associations specifically for Configurations. 
Deprecated description: This association relates a Configuration object to one or more CollectionOfMSEs objects. The Configuration object represents a certain behavior or a desired functional state for the associated Collection.
*/


/*
			 *** Properties ***

			UNIX_CollectionConfiguration:
				Collection Reference
				Configuration Reference


*/


/*
			 *** Methods ***

			UNIX_CollectionConfiguration:


*/

#ifndef __UNIX_COLLECTIONCONFIGURATION_H
#define __UNIX_COLLECTIONCONFIGURATION_H


#include "CIM_ClassBase.h"

#include "UNIX_CollectionConfigurationDeps.h"


#ifndef PROPERTY_COLLECTION
#define PROPERTY_COLLECTION \
					"Collection"
#endif

#ifndef PROPERTY_CONFIGURATION
#define PROPERTY_CONFIGURATION \
					"Configuration"
#endif



class UNIX_CollectionConfiguration :
	public CIM_ClassBase
{
public:

	UNIX_CollectionConfiguration();
	~UNIX_CollectionConfiguration();

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

	virtual Boolean getCollection(CIMProperty&) const;
	virtual CIMInstance getCollection() const;
	virtual void setCollection(CIMInstance&);
	virtual Boolean getConfiguration(CIMProperty&) const;
	virtual CIMInstance getConfiguration() const;
	virtual void setConfiguration(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _collection;
	CIMInstance _configuration;

#	include "UNIX_CollectionConfigurationPrivate.h"


};

#endif /* UNIX_COLLECTIONCONFIGURATION */
