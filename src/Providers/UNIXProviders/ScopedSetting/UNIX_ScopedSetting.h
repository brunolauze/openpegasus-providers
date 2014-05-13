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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Settings
*/


/* **** Description *** */
/*
ScopedSetting defines a setting in the context of the ManagedElement in which it is located.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			UNIX_ScopedSetting:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			UNIX_ScopedSetting:


*/

#ifndef __UNIX_SCOPEDSETTING_H
#define __UNIX_SCOPEDSETTING_H


#include "CIM_HostedDependency.h"
#include <NATStaticSettings/UNIX_NATStaticSettingsProvider.h>
#include <NATListBasedSettings/UNIX_NATListBasedSettingsProvider.h>
#include <FileSystemSettingData/UNIX_FileSystemSettingDataProvider.h>
#include <DatabaseSegmentSettingData/UNIX_DatabaseSegmentSettingDataProvider.h>
#include <AHTransform/UNIX_AHTransformProvider.h>
#include <ESPTransform/UNIX_ESPTransformProvider.h>
#include <IPCOMPTransform/UNIX_IPCOMPTransformProvider.h>
#include <IPsecProposal/UNIX_IPsecProposalProvider.h>
#include <IKEProposal/UNIX_IKEProposalProvider.h>
#include <TimeoutsForNATTranslation/UNIX_TimeoutsForNATTranslationProvider.h>
#include <DatabaseParameter/UNIX_DatabaseParameterProvider.h>

#include "UNIX_ScopedSettingDeps.h"




class UNIX_ScopedSetting :
	public CIM_HostedDependency
{
public:

	UNIX_ScopedSetting();
	~UNIX_ScopedSetting();

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


UNIX_NATStaticSettings _dependentNATStaticSettings;
UNIX_NATStaticSettingsProvider _dependentNATStaticSettingsProvider;
UNIX_NATListBasedSettings _dependentNATListBasedSettings;
UNIX_NATListBasedSettingsProvider _dependentNATListBasedSettingsProvider;
UNIX_FileSystemSettingData _dependentFileSystemSettingData;
UNIX_FileSystemSettingDataProvider _dependentFileSystemSettingDataProvider;
UNIX_DatabaseSegmentSettingData _dependentDatabaseSegmentSettingData;
UNIX_DatabaseSegmentSettingDataProvider _dependentDatabaseSegmentSettingDataProvider;
UNIX_AHTransform _dependentAHTransform;
UNIX_AHTransformProvider _dependentAHTransformProvider;
UNIX_ESPTransform _dependentESPTransform;
UNIX_ESPTransformProvider _dependentESPTransformProvider;
UNIX_IPCOMPTransform _dependentIPCOMPTransform;
UNIX_IPCOMPTransformProvider _dependentIPCOMPTransformProvider;
UNIX_IPsecProposal _dependentIPsecProposal;
UNIX_IPsecProposalProvider _dependentIPsecProposalProvider;
UNIX_IKEProposal _dependentIKEProposal;
UNIX_IKEProposalProvider _dependentIKEProposalProvider;
UNIX_TimeoutsForNATTranslation _dependentTimeoutsForNATTranslation;
UNIX_TimeoutsForNATTranslationProvider _dependentTimeoutsForNATTranslationProvider;
UNIX_DatabaseParameter _dependentDatabaseParameter;
UNIX_DatabaseParameterProvider _dependentDatabaseParameterProvider;

#	include "UNIX_ScopedSettingPrivate.h"


};

#endif /* UNIX_SCOPEDSETTING */
