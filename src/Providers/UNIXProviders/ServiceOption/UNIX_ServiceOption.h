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


/* **** Composition *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.38.0
*/


/* **** ClassConstraint *** */
/*
inv: Service.LoSID <> null and Option.SoID <> null
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
ServiceOption is a relationship between a Service instance that represents an ITIL service and a SettingData instance that represents an ITIL service option.
*/


/*
			 *** Properties ***

			UNIX_ServiceOption:
				Service Reference
				Option Reference
				IsDefault UInt16


*/


/*
			 *** Methods ***

			UNIX_ServiceOption:


*/

#ifndef __UNIX_SERVICEOPTION_H
#define __UNIX_SERVICEOPTION_H


#include "CIM_ClassBase.h"

#include "UNIX_ServiceOptionDeps.h"


#ifndef PROPERTY_SERVICE
#define PROPERTY_SERVICE \
					"Service"
#endif

#ifndef PROPERTY_OPTION
#define PROPERTY_OPTION \
					"Option"
#endif

#ifndef PROPERTY_IS_DEFAULT
#define PROPERTY_IS_DEFAULT \
					"IsDefault"
#endif



class UNIX_ServiceOption :
	public CIM_ClassBase
{
public:

	UNIX_ServiceOption();
	~UNIX_ServiceOption();

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

	virtual Boolean getService(CIMProperty&) const;
	virtual CIMInstance getService() const;
	virtual void setService(CIMInstance&);
	virtual Boolean getOption(CIMProperty&) const;
	virtual CIMInstance getOption() const;
	virtual void setOption(CIMInstance&);
	virtual Boolean getIsDefault(CIMProperty&) const;
	virtual Uint16 getIsDefault() const;
	virtual void setIsDefault(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _service;
	CIMInstance _option;
	Uint16 _isDefault;

#	include "UNIX_ServiceOptionPrivate.h"


};

#endif /* UNIX_SERVICEOPTION */
