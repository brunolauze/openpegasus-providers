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
Defines the LSP to which the CrossConnect belongs.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_MPLSCrossConnectLSP:
				XcType UInt16
				XcOrder UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_MPLSCrossConnectLSP:


*/

#ifndef __UNIX_MPLSCROSSCONNECTLSP_H
#define __UNIX_MPLSCROSSCONNECTLSP_H


#include "CIM_Dependency.h"
#include <MPLSLSP/UNIX_MPLSLSPProvider.h>
#include <MPLSCrossConnect/UNIX_MPLSCrossConnectProvider.h>

#include "UNIX_MPLSCrossConnectLSPDeps.h"


#ifndef PROPERTY_XC_TYPE
#define PROPERTY_XC_TYPE \
					"XcType"
#endif

#ifndef PROPERTY_XC_ORDER
#define PROPERTY_XC_ORDER \
					"XcOrder"
#endif



class UNIX_MPLSCrossConnectLSP :
	public CIM_Dependency
{
public:

	UNIX_MPLSCrossConnectLSP();
	~UNIX_MPLSCrossConnectLSP();

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
	virtual Boolean getXcType(CIMProperty&) const;
	virtual Uint16 getXcType() const;
	virtual void setXcType(Uint16&);
	virtual Boolean getXcOrder(CIMProperty&) const;
	virtual Uint16 getXcOrder() const;
	virtual void setXcOrder(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _xcType;
	Uint16 _xcOrder;

UNIX_MPLSLSP _antecedentMPLSLSP;
UNIX_MPLSLSPProvider _antecedentMPLSLSPProvider;

UNIX_MPLSCrossConnect _dependentMPLSCrossConnect;
UNIX_MPLSCrossConnectProvider _dependentMPLSCrossConnectProvider;

#	include "UNIX_MPLSCrossConnectLSPPrivate.h"


};

#endif /* UNIX_MPLSCROSSCONNECTLSP */
