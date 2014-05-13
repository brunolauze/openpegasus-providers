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
CIM_HostedFilterEntryBase
*/


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Filtering
*/


/* **** Description *** */
/*
All filter entries (FilterEntryBase and its subclasses) are defined in the context of a ComputerSystem/network device, where they are used to identify and act on network traffic. Note that this class is deprecated since its subclassing is not correct. It subclasses from System Component, but a FilterEntryBase is NOT a Component of a System. Instead, it is hosted/scoped by the System. In versions up to CIM 2.6, FilterEntryInSystem was a mandatory, Weak relationship. This is no longer true, beginning with CIM V2.7.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			CIM_SystemComponent:

			UNIX_FilterEntryInSystem:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			CIM_SystemComponent:

			UNIX_FilterEntryInSystem:


*/

#ifndef __UNIX_FILTERENTRYINSYSTEM_H
#define __UNIX_FILTERENTRYINSYSTEM_H


#include "CIM_SystemComponent.h"
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <Hdr8021Filter/UNIX_Hdr8021FilterProvider.h>
#include <PreambleFilter/UNIX_PreambleFilterProvider.h>
#include <X509CredentialFilterEntry/UNIX_X509CredentialFilterEntryProvider.h>
#include <PeerIDPayloadFilterEntry/UNIX_PeerIDPayloadFilterEntryProvider.h>
#include <FilterEntry/UNIX_FilterEntryProvider.h>
#include <IPHeadersFilter/UNIX_IPHeadersFilterProvider.h>
#include <IPSOFilterEntry/UNIX_IPSOFilterEntryProvider.h>

#include "UNIX_FilterEntryInSystemDeps.h"




class UNIX_FilterEntryInSystem :
	public CIM_SystemComponent
{
public:

	UNIX_FilterEntryInSystem();
	~UNIX_FilterEntryInSystem();

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
	UNIX_VirtualComputerSystem group_UNIX_VirtualComputerSystem_Component;
	int group_UNIX_VirtualComputerSystem_Index;
	bool endOf_UNIX_VirtualComputerSystem_Group;
	UNIX_Cluster group_UNIX_Cluster_Component;
	int group_UNIX_Cluster_Index;
	bool endOf_UNIX_Cluster_Group;
	UNIX_ComputerSystem group_UNIX_ComputerSystem_Component;
	int group_UNIX_ComputerSystem_Index;
	bool endOf_UNIX_ComputerSystem_Group;

	UNIX_Hdr8021Filter part_UNIX_Hdr8021Filter_Component;
	int part_UNIX_Hdr8021Filter_Index;
	bool endOf_UNIX_Hdr8021Filter_Part;
	UNIX_PreambleFilter part_UNIX_PreambleFilter_Component;
	int part_UNIX_PreambleFilter_Index;
	bool endOf_UNIX_PreambleFilter_Part;
	UNIX_X509CredentialFilterEntry part_UNIX_X509CredentialFilterEntry_Component;
	int part_UNIX_X509CredentialFilterEntry_Index;
	bool endOf_UNIX_X509CredentialFilterEntry_Part;
	UNIX_PeerIDPayloadFilterEntry part_UNIX_PeerIDPayloadFilterEntry_Component;
	int part_UNIX_PeerIDPayloadFilterEntry_Index;
	bool endOf_UNIX_PeerIDPayloadFilterEntry_Part;
	UNIX_FilterEntry part_UNIX_FilterEntry_Component;
	int part_UNIX_FilterEntry_Index;
	bool endOf_UNIX_FilterEntry_Part;
	UNIX_IPHeadersFilter part_UNIX_IPHeadersFilter_Component;
	int part_UNIX_IPHeadersFilter_Index;
	bool endOf_UNIX_IPHeadersFilter_Part;
	UNIX_IPSOFilterEntry part_UNIX_IPSOFilterEntry_Component;
	int part_UNIX_IPSOFilterEntry_Index;
	bool endOf_UNIX_IPSOFilterEntry_Part;

#	include "UNIX_FilterEntryInSystemPrivate.h"


};

#endif /* UNIX_FILTERENTRYINSYSTEM */
