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
CIM::Network::QoS
*/


/* **** Description *** */
/*
The associations - QoSSubService and QoSConditioningSub Service - operate in conjunction. High level QoS definitions, such as 'John gets Gold Service', map to lower level, more concrete QoSServices (the subclasses of QoSService). This is described by the QoSSubService association. In turn, each of the SubServices may require their own conditioning. This is modeled using the QoSConditioningSubService aggregation. 

Note that a more concrete QoSService may only be aggregated into one higher level Service, using this association. The cardinality on the GroupComponent reference is Max (1).
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_ServiceComponent:

			UNIX_QoSSubService:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_ServiceComponent:

			UNIX_QoSSubService:


*/

#ifndef __UNIX_QOSSUBSERVICE_H
#define __UNIX_QOSSUBSERVICE_H


#include "CIM_ServiceComponent.h"
#include <AFService/UNIX_AFServiceProvider.h>
#include <EFService/UNIX_EFServiceProvider.h>
#include <FlowService/UNIX_FlowServiceProvider.h>
#include <Hdr8021PService/UNIX_Hdr8021PServiceProvider.h>
#include <PrecedenceService/UNIX_PrecedenceServiceProvider.h>

#include "UNIX_QoSSubServiceDeps.h"




class UNIX_QoSSubService :
	public CIM_ServiceComponent
{
public:

	UNIX_QoSSubService();
	~UNIX_QoSSubService();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;

	int groupIndex;
	int partIndex;
	UNIX_AFService group_UNIX_AFService_Component;
	int group_UNIX_AFService_Index;
	bool endOf_UNIX_AFService_Group;
	UNIX_EFService group_UNIX_EFService_Component;
	int group_UNIX_EFService_Index;
	bool endOf_UNIX_EFService_Group;
	UNIX_FlowService group_UNIX_FlowService_Component;
	int group_UNIX_FlowService_Index;
	bool endOf_UNIX_FlowService_Group;
	UNIX_Hdr8021PService group_UNIX_Hdr8021PService_Component;
	int group_UNIX_Hdr8021PService_Index;
	bool endOf_UNIX_Hdr8021PService_Group;
	UNIX_PrecedenceService group_UNIX_PrecedenceService_Component;
	int group_UNIX_PrecedenceService_Index;
	bool endOf_UNIX_PrecedenceService_Group;

	UNIX_AFService part_UNIX_AFService_Component;
	int part_UNIX_AFService_Index;
	bool endOf_UNIX_AFService_Part;
	UNIX_EFService part_UNIX_EFService_Component;
	int part_UNIX_EFService_Index;
	bool endOf_UNIX_EFService_Part;
	UNIX_FlowService part_UNIX_FlowService_Component;
	int part_UNIX_FlowService_Index;
	bool endOf_UNIX_FlowService_Part;
	UNIX_Hdr8021PService part_UNIX_Hdr8021PService_Component;
	int part_UNIX_Hdr8021PService_Index;
	bool endOf_UNIX_Hdr8021PService_Part;
	UNIX_PrecedenceService part_UNIX_PrecedenceService_Component;
	int part_UNIX_PrecedenceService_Index;
	bool endOf_UNIX_PrecedenceService_Part;

#	include "UNIX_QoSSubServicePrivate.h"


};

#endif /* UNIX_QOSSUBSERVICE */
