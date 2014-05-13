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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Aggregation *** */
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
This aggregation relates a SettingData instance that represents an ITIL service option with other SettingData instances that represent aspects of this service option.
*/


/*
			 *** Properties ***

			UNIX_ServiceOptionAspect:
				ServiceOption Reference
				Aspect Reference


*/


/*
			 *** Methods ***

			UNIX_ServiceOptionAspect:


*/

#ifndef __UNIX_SERVICEOPTIONASPECT_H
#define __UNIX_SERVICEOPTIONASPECT_H


#include "CIM_ClassBase.h"

#include "UNIX_ServiceOptionAspectDeps.h"


#ifndef PROPERTY_SERVICE_OPTION
#define PROPERTY_SERVICE_OPTION \
					"ServiceOption"
#endif

#ifndef PROPERTY_ASPECT
#define PROPERTY_ASPECT \
					"Aspect"
#endif



class UNIX_ServiceOptionAspect :
	public CIM_ClassBase
{
public:

	UNIX_ServiceOptionAspect();
	~UNIX_ServiceOptionAspect();

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

	virtual Boolean getServiceOption(CIMProperty&) const;
	virtual CIMInstance getServiceOption() const;
	virtual void setServiceOption(CIMInstance&);
	virtual Boolean getAspect(CIMProperty&) const;
	virtual CIMInstance getAspect() const;
	virtual void setAspect(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _serviceOption;
	CIMInstance _aspect;

#	include "UNIX_ServiceOptionAspectPrivate.h"


};

#endif /* UNIX_SERVICEOPTIONASPECT */
