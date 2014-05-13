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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::MPLS
*/


/* **** Description *** */
/*
An MPLSSegment is defined in the context of an MPLS Endpoint. This association makes that relationship explicit.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_MPLSSegmentOnProtocolEP:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_MPLSSegmentOnProtocolEP:


*/

#ifndef __UNIX_MPLSSEGMENTONPROTOCOLEP_H
#define __UNIX_MPLSSEGMENTONPROTOCOLEP_H


#include "CIM_Dependency.h"
#include <MPLSProtocolEndpoint/UNIX_MPLSProtocolEndpointProvider.h>
#include <MPLSInSegment/UNIX_MPLSInSegmentProvider.h>
#include <MPLSOutSegment/UNIX_MPLSOutSegmentProvider.h>

#include "UNIX_MPLSSegmentOnProtocolEPDeps.h"




class UNIX_MPLSSegmentOnProtocolEP :
	public CIM_Dependency
{
public:

	UNIX_MPLSSegmentOnProtocolEP();
	~UNIX_MPLSSegmentOnProtocolEP();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_MPLSProtocolEndpoint _antecedentMPLSProtocolEndpoint;
UNIX_MPLSProtocolEndpointProvider _antecedentMPLSProtocolEndpointProvider;

UNIX_MPLSInSegment _dependentMPLSInSegment;
UNIX_MPLSInSegmentProvider _dependentMPLSInSegmentProvider;
UNIX_MPLSOutSegment _dependentMPLSOutSegment;
UNIX_MPLSOutSegmentProvider _dependentMPLSOutSegmentProvider;

#	include "UNIX_MPLSSegmentOnProtocolEPPrivate.h"


};

#endif /* UNIX_MPLSSEGMENTONPROTOCOLEP */
