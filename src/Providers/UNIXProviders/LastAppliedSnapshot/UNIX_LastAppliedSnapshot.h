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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::SystemElements
*/


/* **** Description *** */
/*
The CIM_LastAppliedSnapshot association associates an instance of the CIM_VirtualSystemSettingData class representing a virtual system snapshot that was most recently applied to a virtual system, and the instance of the CIM_ComputerSystem class representing the related virtual system.
An instance of this assocation indicates that the referenced snapshot is the snapshot the was last applied to the virtual system from the set of snapshots taken from that virtual system. For each virtual system at any time there is at most one snapshot the last applied snapshot.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_LastAppliedSnapshot:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_LastAppliedSnapshot:


*/

#ifndef __UNIX_LASTAPPLIEDSNAPSHOT_H
#define __UNIX_LASTAPPLIEDSNAPSHOT_H


#include "CIM_Dependency.h"
#include <VirtualSystemSettingData/UNIX_VirtualSystemSettingDataProvider.h>
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>

#include "UNIX_LastAppliedSnapshotDeps.h"




class UNIX_LastAppliedSnapshot :
	public CIM_Dependency
{
public:

	UNIX_LastAppliedSnapshot();
	~UNIX_LastAppliedSnapshot();

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

UNIX_VirtualSystemSettingData _antecedentVirtualSystemSettingData;
UNIX_VirtualSystemSettingDataProvider _antecedentVirtualSystemSettingDataProvider;

UNIX_VirtualComputerSystem _dependentVirtualComputerSystem;
UNIX_VirtualComputerSystemProvider _dependentVirtualComputerSystemProvider;
UNIX_Cluster _dependentCluster;
UNIX_ClusterProvider _dependentClusterProvider;
UNIX_ComputerSystem _dependentComputerSystem;
UNIX_ComputerSystemProvider _dependentComputerSystemProvider;

#	include "UNIX_LastAppliedSnapshotPrivate.h"


};

#endif /* UNIX_LASTAPPLIEDSNAPSHOT */
