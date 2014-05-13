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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::QoS
*/


/* **** Description *** */
/*
The IETF's RFC2597 describes a Differentiated Services Per-Hop-Behavior (PHB) Group called Assured Forwarding (AF). Quoting from the RFC, 'The AF PHB group provides delivery of IP packets in four independently forwarded AF classes. Within each AF class, an IP packet can be assigned one of three different levels of drop precedence.' The AFRelatedServices association describes the precedence of the individual AF drop-related Services within an AF IP packet-forwarding class.
*/


/*
			 *** Properties ***

			UNIX_AFRelatedServices:
				AFLowerDropPrecedence Reference
				AFHigherDropPrecedence Reference


*/


/*
			 *** Methods ***

			UNIX_AFRelatedServices:


*/

#ifndef __UNIX_AFRELATEDSERVICES_H
#define __UNIX_AFRELATEDSERVICES_H


#include "CIM_ClassBase.h"

#include "UNIX_AFRelatedServicesDeps.h"


#ifndef PROPERTY_AF_LOWER_DROP_PRECEDENCE
#define PROPERTY_AF_LOWER_DROP_PRECEDENCE \
					"AFLowerDropPrecedence"
#endif

#ifndef PROPERTY_AF_HIGHER_DROP_PRECEDENCE
#define PROPERTY_AF_HIGHER_DROP_PRECEDENCE \
					"AFHigherDropPrecedence"
#endif



class UNIX_AFRelatedServices :
	public CIM_ClassBase
{
public:

	UNIX_AFRelatedServices();
	~UNIX_AFRelatedServices();

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

	virtual Boolean getAFLowerDropPrecedence(CIMProperty&) const;
	virtual CIMInstance getAFLowerDropPrecedence() const;
	virtual void setAFLowerDropPrecedence(CIMInstance&);
	virtual Boolean getAFHigherDropPrecedence(CIMProperty&) const;
	virtual CIMInstance getAFHigherDropPrecedence() const;
	virtual void setAFHigherDropPrecedence(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _aFLowerDropPrecedence;
	CIMInstance _aFHigherDropPrecedence;

#	include "UNIX_AFRelatedServicesPrivate.h"


};

#endif /* UNIX_AFRELATEDSERVICES */
