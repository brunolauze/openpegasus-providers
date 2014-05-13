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
A switch participating in the spanning tree maintains spanning-tree specific information about each port whose forwarding is determined by the spanning tree. This association represents that information.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_ServiceSAPDependency:

			UNIX_SwitchPortSpanningTree:
				Priority UInt8
				State UInt16
				Enable UInt16
				PathCost UInt16
				DesignatedRoot String
				DesignatedCost UInt16
				DesignatedBridge String
				DesignatedPort UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ServiceSAPDependency:

			UNIX_SwitchPortSpanningTree:


*/

#ifndef __UNIX_SWITCHPORTSPANNINGTREE_H
#define __UNIX_SWITCHPORTSPANNINGTREE_H


#include "CIM_ServiceSAPDependency.h"
#include <SwitchPort/UNIX_SwitchPortProvider.h>
#include <SpanningTreeService/UNIX_SpanningTreeServiceProvider.h>

#include "UNIX_SwitchPortSpanningTreeDeps.h"


#ifndef PROPERTY_PRIORITY
#define PROPERTY_PRIORITY \
					"Priority"
#endif

#ifndef PROPERTY_STATE
#define PROPERTY_STATE \
					"State"
#endif

#ifndef PROPERTY_ENABLE
#define PROPERTY_ENABLE \
					"Enable"
#endif

#ifndef PROPERTY_PATH_COST
#define PROPERTY_PATH_COST \
					"PathCost"
#endif

#ifndef PROPERTY_DESIGNATED_ROOT
#define PROPERTY_DESIGNATED_ROOT \
					"DesignatedRoot"
#endif

#ifndef PROPERTY_DESIGNATED_COST
#define PROPERTY_DESIGNATED_COST \
					"DesignatedCost"
#endif

#ifndef PROPERTY_DESIGNATED_BRIDGE
#define PROPERTY_DESIGNATED_BRIDGE \
					"DesignatedBridge"
#endif

#ifndef PROPERTY_DESIGNATED_PORT
#define PROPERTY_DESIGNATED_PORT \
					"DesignatedPort"
#endif



class UNIX_SwitchPortSpanningTree :
	public CIM_ServiceSAPDependency
{
public:

	UNIX_SwitchPortSpanningTree();
	~UNIX_SwitchPortSpanningTree();

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
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint8 getPriority() const;
	virtual void setPriority(Uint8&);
	virtual Boolean getState(CIMProperty&) const;
	virtual Uint16 getState() const;
	virtual void setState(Uint16&);
	virtual Boolean getEnable(CIMProperty&) const;
	virtual Uint16 getEnable() const;
	virtual void setEnable(Uint16&);
	virtual Boolean getPathCost(CIMProperty&) const;
	virtual Uint16 getPathCost() const;
	virtual void setPathCost(Uint16&);
	virtual Boolean getDesignatedRoot(CIMProperty&) const;
	virtual String getDesignatedRoot() const;
	virtual void setDesignatedRoot(String&);
	virtual Boolean getDesignatedCost(CIMProperty&) const;
	virtual Uint16 getDesignatedCost() const;
	virtual void setDesignatedCost(Uint16&);
	virtual Boolean getDesignatedBridge(CIMProperty&) const;
	virtual String getDesignatedBridge() const;
	virtual void setDesignatedBridge(String&);
	virtual Boolean getDesignatedPort(CIMProperty&) const;
	virtual Uint16 getDesignatedPort() const;
	virtual void setDesignatedPort(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint8 _priority;
	Uint16 _state;
	Uint16 _enable;
	Uint16 _pathCost;
	String _designatedRoot;
	Uint16 _designatedCost;
	String _designatedBridge;
	Uint16 _designatedPort;

UNIX_SwitchPort _antecedentSwitchPort;
UNIX_SwitchPortProvider _antecedentSwitchPortProvider;

UNIX_SpanningTreeService _dependentSpanningTreeService;
UNIX_SpanningTreeServiceProvider _dependentSpanningTreeServiceProvider;

#	include "UNIX_SwitchPortSpanningTreePrivate.h"


};

#endif /* UNIX_SWITCHPORTSPANNINGTREE */
