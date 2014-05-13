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


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Composition *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Pipes
*/


/* **** Description *** */
/*
NetworkPipeComposition describes the makeup a pipe, based on lower-level ones. If the pipe is not composed of lower-level entities (i.e., its AggregationBehavior property is set to 2), then no instances of this association should be defined where the pipe has the role of GroupComponent. 

In the context of M.3100, this semantic is modeled as a Trail that is made up of one or more Connections. Both Trails and Connections are subclasses of M.3100's Pipe. Because of the flexibility of the NetworkPipeComposition association, there is no need to subclass NetworkPipe, as was done in M.3100, but merely to instantiate this association to describe the bundling of the lower-level pipes (connections), or the sequencing of them. How the lower-level pipes are aggregated is described by the property, AggregationBehavior, of NetworkPipe. If the pipes are combined in a sequence, the ordering is conveyed via the property, AggregationSequence, on this association.
*/


/* **** MappingStrings *** */
/*
Recommendation.ITU|M3100.TrailR1.serverConnectionListPackage
Recommendation.ITU|M3100.TrailR1.clientConnectionListPackage
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_NetworkPipeComposition:
				AggregationSequence UInt16


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_NetworkPipeComposition:


*/

#ifndef __UNIX_NETWORKPIPECOMPOSITION_H
#define __UNIX_NETWORKPIPECOMPOSITION_H


#include "CIM_Component.h"
#include <iSCSISession/UNIX_iSCSISessionProvider.h>
#include <iSCSIConnection/UNIX_iSCSIConnectionProvider.h>

#include "UNIX_NetworkPipeCompositionDeps.h"


#ifndef PROPERTY_AGGREGATION_SEQUENCE
#define PROPERTY_AGGREGATION_SEQUENCE \
					"AggregationSequence"
#endif



class UNIX_NetworkPipeComposition :
	public CIM_Component
{
public:

	UNIX_NetworkPipeComposition();
	~UNIX_NetworkPipeComposition();

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

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual void setGroupComponent(CIMInstance&);
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual void setPartComponent(CIMInstance&);
	virtual Boolean getAggregationSequence(CIMProperty&) const;
	virtual Uint16 getAggregationSequence() const;
	virtual void setAggregationSequence(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint16 _aggregationSequence;

	int groupIndex;
	int partIndex;
	UNIX_iSCSISession group_UNIX_iSCSISession_Component;
	int group_UNIX_iSCSISession_Index;
	bool endOf_UNIX_iSCSISession_Group;
	UNIX_iSCSIConnection group_UNIX_iSCSIConnection_Component;
	int group_UNIX_iSCSIConnection_Index;
	bool endOf_UNIX_iSCSIConnection_Group;

	UNIX_iSCSISession part_UNIX_iSCSISession_Component;
	int part_UNIX_iSCSISession_Index;
	bool endOf_UNIX_iSCSISession_Part;
	UNIX_iSCSIConnection part_UNIX_iSCSIConnection_Component;
	int part_UNIX_iSCSIConnection_Index;
	bool endOf_UNIX_iSCSIConnection_Part;

#	include "UNIX_NetworkPipeCompositionPrivate.h"


};

#endif /* UNIX_NETWORKPIPECOMPOSITION */
