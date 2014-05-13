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
CIM_MemberOfCollection
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
CIM::System::SystemElements
*/


/* **** Description *** */
/*
A Cluster is composed of two or more ComputerSystems, operating together. A ComputerSystem may participate in multiple Clusters. 

When first establishing or bringing up a Cluster, only one ComputerSystem may be defined as participating in it. Therfore, the cardinality of the association for the ComputerSystem reference is Min (1). 
The use of this association is deprecated in lieu of using MemberOfCollection to RedundancySet.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_ParticipatingCS:
				StateOfNode UInt16
				RoleOfNode UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_ParticipatingCS:


*/

#ifndef __UNIX_PARTICIPATINGCS_H
#define __UNIX_PARTICIPATINGCS_H


#include "CIM_Dependency.h"
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>

#include "UNIX_ParticipatingCSDeps.h"


#ifndef PROPERTY_STATE_OF_NODE
#define PROPERTY_STATE_OF_NODE \
					"StateOfNode"
#endif

#ifndef PROPERTY_ROLE_OF_NODE
#define PROPERTY_ROLE_OF_NODE \
					"RoleOfNode"
#endif



class UNIX_ParticipatingCS :
	public CIM_Dependency
{
public:

	UNIX_ParticipatingCS();
	~UNIX_ParticipatingCS();

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
	virtual Boolean getStateOfNode(CIMProperty&) const;
	virtual Uint16 getStateOfNode() const;
	virtual void setStateOfNode(Uint16&);
	virtual Boolean getRoleOfNode(CIMProperty&) const;
	virtual Uint16 getRoleOfNode() const;
	virtual void setRoleOfNode(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _stateOfNode;
	Uint16 _roleOfNode;

UNIX_VirtualComputerSystem _antecedentVirtualComputerSystem;
UNIX_VirtualComputerSystemProvider _antecedentVirtualComputerSystemProvider;
UNIX_Cluster _antecedentCluster;
UNIX_ClusterProvider _antecedentClusterProvider;
UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;

UNIX_Cluster _dependentCluster;
UNIX_ClusterProvider _dependentClusterProvider;

#	include "UNIX_ParticipatingCSPrivate.h"


};

#endif /* UNIX_PARTICIPATINGCS */
