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
CIM::System::FileElements
*/


/* **** Description *** */
/*
CIM_HostedShare is an association between a Share and the System on which the functionality resides. The cardinality of this association is many-to-many but a FileShare must have at least 1 host system, either exporting or importing it. (A System may host many Shares and a Share may be hosted by more than one System, but a Share must have at least one HostedShare). 
Heuristic: For export, a Share is hosted on the System where the LogicalElement that is exported by the Share is located (via SharedElement, derived from LogicalIdentity). For import, a Share is hosted on the System where the LogicalFile (or other namespace element) that provides the mount-point for the share is located (via ImportedShare, derived from LogicalIdentity).
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			UNIX_HostedShare:
				RemoteShareWWN String


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			UNIX_HostedShare:


*/

#ifndef __UNIX_HOSTEDSHARE_H
#define __UNIX_HOSTEDSHARE_H


#include "CIM_HostedDependency.h"
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <NFSShare/UNIX_NFSShareProvider.h>
#include <CIFSShare/UNIX_CIFSShareProvider.h>

#include "UNIX_HostedShareDeps.h"


#ifndef PROPERTY_REMOTE_SHARE_W_W_N
#define PROPERTY_REMOTE_SHARE_W_W_N \
					"RemoteShareWWN"
#endif



class UNIX_HostedShare :
	public CIM_HostedDependency
{
public:

	UNIX_HostedShare();
	~UNIX_HostedShare();

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
	virtual Boolean getRemoteShareWWN(CIMProperty&) const;
	virtual String getRemoteShareWWN() const;
	virtual void setRemoteShareWWN(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	String _remoteShareWWN;

UNIX_ComputerSystem _antecedentComputerSystem;
UNIX_ComputerSystemProvider _antecedentComputerSystemProvider;

UNIX_NFSShare _dependentNFSShare;
UNIX_NFSShareProvider _dependentNFSShareProvider;
UNIX_CIFSShare _dependentCIFSShare;
UNIX_CIFSShareProvider _dependentCIFSShareProvider;

#	include "UNIX_HostedSharePrivate.h"


};

#endif /* UNIX_HOSTEDSHARE */
