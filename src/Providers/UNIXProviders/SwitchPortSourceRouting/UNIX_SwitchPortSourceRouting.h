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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::SwitchingBridging
*/


/* **** Description *** */
/*
A switch capable of source routing maintains source-routing specific information about each port. This association represents that information.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_ServiceSAPDependency:

			UNIX_SwitchPortSourceRouting:
				HopCount UInt16
				LocalSegment UInt16
				BridgeNum UInt16
				TargetSegment UInt16
				STESpanMode UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ServiceSAPDependency:

			UNIX_SwitchPortSourceRouting:


*/

#ifndef __UNIX_SWITCHPORTSOURCEROUTING_H
#define __UNIX_SWITCHPORTSOURCEROUTING_H


#include "CIM_ServiceSAPDependency.h"
#include <SwitchPort/UNIX_SwitchPortProvider.h>
#include <SourceRoutingService/UNIX_SourceRoutingServiceProvider.h>

#include "UNIX_SwitchPortSourceRoutingDeps.h"


#ifndef PROPERTY_HOP_COUNT
#define PROPERTY_HOP_COUNT \
					"HopCount"
#endif

#ifndef PROPERTY_LOCAL_SEGMENT
#define PROPERTY_LOCAL_SEGMENT \
					"LocalSegment"
#endif

#ifndef PROPERTY_BRIDGE_NUM
#define PROPERTY_BRIDGE_NUM \
					"BridgeNum"
#endif

#ifndef PROPERTY_TARGET_SEGMENT
#define PROPERTY_TARGET_SEGMENT \
					"TargetSegment"
#endif

#ifndef PROPERTY_S_T_E_SPAN_MODE
#define PROPERTY_S_T_E_SPAN_MODE \
					"STESpanMode"
#endif



class UNIX_SwitchPortSourceRouting :
	public CIM_ServiceSAPDependency
{
public:

	UNIX_SwitchPortSourceRouting();
	~UNIX_SwitchPortSourceRouting();

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
	virtual Boolean getHopCount(CIMProperty&) const;
	virtual Uint16 getHopCount() const;
	virtual void setHopCount(Uint16&);
	virtual Boolean getLocalSegment(CIMProperty&) const;
	virtual Uint16 getLocalSegment() const;
	virtual void setLocalSegment(Uint16&);
	virtual Boolean getBridgeNum(CIMProperty&) const;
	virtual Uint16 getBridgeNum() const;
	virtual void setBridgeNum(Uint16&);
	virtual Boolean getTargetSegment(CIMProperty&) const;
	virtual Uint16 getTargetSegment() const;
	virtual void setTargetSegment(Uint16&);
	virtual Boolean getSTESpanMode(CIMProperty&) const;
	virtual Uint16 getSTESpanMode() const;
	virtual void setSTESpanMode(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _hopCount;
	Uint16 _localSegment;
	Uint16 _bridgeNum;
	Uint16 _targetSegment;
	Uint16 _sTESpanMode;

UNIX_SwitchPort _antecedentSwitchPort;
UNIX_SwitchPortProvider _antecedentSwitchPortProvider;

UNIX_SourceRoutingService _dependentSourceRoutingService;
UNIX_SourceRoutingServiceProvider _dependentSourceRoutingServiceProvider;

#	include "UNIX_SwitchPortSourceRoutingPrivate.h"


};

#endif /* UNIX_SWITCHPORTSOURCEROUTING */
