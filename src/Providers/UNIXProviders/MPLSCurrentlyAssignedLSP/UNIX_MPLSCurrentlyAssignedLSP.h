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
Associates a traffic trunk with an LSP that is currently carrying its traffic.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_MPLSCurrentlyAssignedLSP:
				Preference UInt16
				TrafficProportion UInt8


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_MPLSCurrentlyAssignedLSP:


*/

#ifndef __UNIX_MPLSCURRENTLYASSIGNEDLSP_H
#define __UNIX_MPLSCURRENTLYASSIGNEDLSP_H


#include "CIM_Dependency.h"
#include <MPLSLSP/UNIX_MPLSLSPProvider.h>
#include <MPLSTunnel/UNIX_MPLSTunnelProvider.h>

#include "UNIX_MPLSCurrentlyAssignedLSPDeps.h"


#ifndef PROPERTY_PREFERENCE
#define PROPERTY_PREFERENCE \
					"Preference"
#endif

#ifndef PROPERTY_TRAFFIC_PROPORTION
#define PROPERTY_TRAFFIC_PROPORTION \
					"TrafficProportion"
#endif



class UNIX_MPLSCurrentlyAssignedLSP :
	public CIM_Dependency
{
public:

	UNIX_MPLSCurrentlyAssignedLSP();
	~UNIX_MPLSCurrentlyAssignedLSP();

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
	virtual Boolean getPreference(CIMProperty&) const;
	virtual Uint16 getPreference() const;
	virtual void setPreference(Uint16&);
	virtual Boolean getTrafficProportion(CIMProperty&) const;
	virtual Uint8 getTrafficProportion() const;
	virtual void setTrafficProportion(Uint8&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _preference;
	Uint8 _trafficProportion;

UNIX_MPLSLSP _antecedentMPLSLSP;
UNIX_MPLSLSPProvider _antecedentMPLSLSPProvider;

UNIX_MPLSTunnel _dependentMPLSTunnel;
UNIX_MPLSTunnelProvider _dependentMPLSTunnelProvider;

#	include "UNIX_MPLSCurrentlyAssignedLSPPrivate.h"


};

#endif /* UNIX_MPLSCURRENTLYASSIGNEDLSP */
