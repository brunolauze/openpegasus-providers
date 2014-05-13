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


/* **** Deprecated *** */
/*
CIM_OrderedMemberOfCollection
*/


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::NetworkAdapter
*/


/* **** Description *** */
/*
Note: The use of the CIM_NetworkAdapterRedundancyComponent class has been deprecated because a specific association is not needed. Instead use the CIM_ OrderedMemberOf Collection class. 
Deprecated description: CIM_NetworkAdapterRedundancyComponent indicates the role that a NetworkAdapter plays in an ExtraCapacityGroup, providing load balancing.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_RedundancyComponent:

			UNIX_NetworkAdapterRedundancyComponent:
				ScopeOfBalancing UInt16
				PrimaryAdapter UInt16


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_RedundancyComponent:

			UNIX_NetworkAdapterRedundancyComponent:


*/

#ifndef __UNIX_NETWORKADAPTERREDUNDANCYCOMPONENT_H
#define __UNIX_NETWORKADAPTERREDUNDANCYCOMPONENT_H


#include "CIM_RedundancyComponent.h"
#include <ExtraCapacityGroup/UNIX_ExtraCapacityGroupProvider.h>
#include <EthernetAdapter/UNIX_EthernetAdapterProvider.h>
#include <TokenRingAdapter/UNIX_TokenRingAdapterProvider.h>
#include <FibreChannelAdapter/UNIX_FibreChannelAdapterProvider.h>

#include "UNIX_NetworkAdapterRedundancyComponentDeps.h"


#ifndef PROPERTY_SCOPE_OF_BALANCING
#define PROPERTY_SCOPE_OF_BALANCING \
					"ScopeOfBalancing"
#endif

#ifndef PROPERTY_PRIMARY_ADAPTER
#define PROPERTY_PRIMARY_ADAPTER \
					"PrimaryAdapter"
#endif



class UNIX_NetworkAdapterRedundancyComponent :
	public CIM_RedundancyComponent
{
public:

	UNIX_NetworkAdapterRedundancyComponent();
	~UNIX_NetworkAdapterRedundancyComponent();

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
	virtual Boolean getScopeOfBalancing(CIMProperty&) const;
	virtual Uint16 getScopeOfBalancing() const;
	virtual void setScopeOfBalancing(Uint16&);
	virtual Boolean getPrimaryAdapter(CIMProperty&) const;
	virtual Uint16 getPrimaryAdapter() const;
	virtual void setPrimaryAdapter(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;
	Uint16 _scopeOfBalancing;
	Uint16 _primaryAdapter;

	int groupIndex;
	int partIndex;
	UNIX_ExtraCapacityGroup group_UNIX_ExtraCapacityGroup_Component;
	int group_UNIX_ExtraCapacityGroup_Index;
	bool endOf_UNIX_ExtraCapacityGroup_Group;

	UNIX_EthernetAdapter part_UNIX_EthernetAdapter_Component;
	int part_UNIX_EthernetAdapter_Index;
	bool endOf_UNIX_EthernetAdapter_Part;
	UNIX_TokenRingAdapter part_UNIX_TokenRingAdapter_Component;
	int part_UNIX_TokenRingAdapter_Index;
	bool endOf_UNIX_TokenRingAdapter_Part;
	UNIX_FibreChannelAdapter part_UNIX_FibreChannelAdapter_Component;
	int part_UNIX_FibreChannelAdapter_Index;
	bool endOf_UNIX_FibreChannelAdapter_Part;

#	include "UNIX_NetworkAdapterRedundancyComponentPrivate.h"


};

#endif /* UNIX_NETWORKADAPTERREDUNDANCYCOMPONENT */
