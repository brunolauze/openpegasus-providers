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
CIM::Network::Filtering
*/


/* **** Description *** */
/*
All filter entries (FilterEntryBase and its subclasses) are defined in the context of a ComputerSystem/network device, where the filter entries are used and administered.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			UNIX_HostedFilterEntryBase:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			UNIX_HostedFilterEntryBase:


*/

#ifndef __UNIX_HOSTEDFILTERENTRYBASE_H
#define __UNIX_HOSTEDFILTERENTRYBASE_H


#include "CIM_HostedDependency.h"
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

#include "UNIX_HostedFilterEntryBaseDeps.h"




class UNIX_HostedFilterEntryBase :
	public CIM_HostedDependency
{
public:

	UNIX_HostedFilterEntryBase();
	~UNIX_HostedFilterEntryBase();

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

UNIX_VirtualComputerSystem _antecedentVirtualComputerSystem;
UNIX_VirtualComputerSystemProvider _antecedentVirtualComputerSystemProvider;
UNIX_Cluster _antecedentCluster;
UNIX_ClusterProvider _antecedentClusterProvider;
UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;

UNIX_Hdr8021Filter _dependentHdr8021Filter;
UNIX_Hdr8021FilterProvider _dependentHdr8021FilterProvider;
UNIX_PreambleFilter _dependentPreambleFilter;
UNIX_PreambleFilterProvider _dependentPreambleFilterProvider;
UNIX_X509CredentialFilterEntry _dependentX509CredentialFilterEntry;
UNIX_X509CredentialFilterEntryProvider _dependentX509CredentialFilterEntryProvider;
UNIX_PeerIDPayloadFilterEntry _dependentPeerIDPayloadFilterEntry;
UNIX_PeerIDPayloadFilterEntryProvider _dependentPeerIDPayloadFilterEntryProvider;
UNIX_FilterEntry _dependentFilterEntry;
UNIX_FilterEntryProvider _dependentFilterEntryProvider;
UNIX_IPHeadersFilter _dependentIPHeadersFilter;
UNIX_IPHeadersFilterProvider _dependentIPHeadersFilterProvider;
UNIX_IPSOFilterEntry _dependentIPSOFilterEntry;
UNIX_IPSOFilterEntryProvider _dependentIPSOFilterEntryProvider;

#	include "UNIX_HostedFilterEntryBasePrivate.h"


};

#endif /* UNIX_HOSTEDFILTERENTRYBASE */
