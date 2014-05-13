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


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Event
*/


/* **** Description *** */
/*
CIM_LogOfIndication defines an individual log which can record the Indications received from an IndicationSubscription.
*/


/*
			 *** Properties ***

			UNIX_LogOfIndication:
				ListenerDestination Reference
				Log Reference


*/


/*
			 *** Methods ***

			UNIX_LogOfIndication:


*/

#ifndef __UNIX_LOGOFINDICATION_H
#define __UNIX_LOGOFINDICATION_H


#include "CIM_ClassBase.h"

#include "UNIX_LogOfIndicationDeps.h"


#ifndef PROPERTY_LISTENER_DESTINATION
#define PROPERTY_LISTENER_DESTINATION \
					"ListenerDestination"
#endif

#ifndef PROPERTY_LOG
#define PROPERTY_LOG \
					"Log"
#endif



class UNIX_LogOfIndication :
	public CIM_ClassBase
{
public:

	UNIX_LogOfIndication();
	~UNIX_LogOfIndication();

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

	virtual Boolean getListenerDestination(CIMProperty&) const;
	virtual CIMInstance getListenerDestination() const;
	virtual void setListenerDestination(CIMInstance&);
	virtual Boolean getLog(CIMProperty&) const;
	virtual CIMInstance getLog() const;
	virtual void setLog(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _listenerDestination;
	CIMInstance _log;

#	include "UNIX_LogOfIndicationPrivate.h"


};

#endif /* UNIX_LOGOFINDICATION */
