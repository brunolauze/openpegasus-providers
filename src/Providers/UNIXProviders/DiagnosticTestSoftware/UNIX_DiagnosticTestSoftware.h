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
CIM_ElementSoftwareIdentity
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::SystemSoftware
*/


/* **** Description *** */
/*
This class is being deprecated to promote its usage to the DiagnosticService level. 
This is an association class relating DiagnosticTest to the SoftwareElements that provide this test. SoftwareElement describes vendor/version information and other deployment data.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_DiagnosticTestSoftware:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_DiagnosticTestSoftware:


*/

#ifndef __UNIX_DIAGNOSTICTESTSOFTWARE_H
#define __UNIX_DIAGNOSTICTESTSOFTWARE_H


#include "CIM_Dependency.h"
#include <FCHBADiagnosticTest/UNIX_FCHBADiagnosticTestProvider.h>
#include <RAIDDiagnosticTest/UNIX_RAIDDiagnosticTestProvider.h>
#include <CPUDiagnosticTest/UNIX_CPUDiagnosticTestProvider.h>
#include <EthernetNICDiagnosticTest/UNIX_EthernetNICDiagnosticTestProvider.h>
#include <OpticalDriveDiagnosticTest/UNIX_OpticalDriveDiagnosticTestProvider.h>
#include <OpticalDriveDiagnosticSettingData/UNIX_OpticalDriveDiagnosticSettingDataProvider.h>
#include <DiskDriveDiagnosticTest/UNIX_DiskDriveDiagnosticTestProvider.h>

#include "UNIX_DiagnosticTestSoftwareDeps.h"




class UNIX_DiagnosticTestSoftware :
	public CIM_Dependency
{
public:

	UNIX_DiagnosticTestSoftware();
	~UNIX_DiagnosticTestSoftware();

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


UNIX_FCHBADiagnosticTest _dependentFCHBADiagnosticTest;
UNIX_FCHBADiagnosticTestProvider _dependentFCHBADiagnosticTestProvider;
UNIX_RAIDDiagnosticTest _dependentRAIDDiagnosticTest;
UNIX_RAIDDiagnosticTestProvider _dependentRAIDDiagnosticTestProvider;
UNIX_CPUDiagnosticTest _dependentCPUDiagnosticTest;
UNIX_CPUDiagnosticTestProvider _dependentCPUDiagnosticTestProvider;
UNIX_EthernetNICDiagnosticTest _dependentEthernetNICDiagnosticTest;
UNIX_EthernetNICDiagnosticTestProvider _dependentEthernetNICDiagnosticTestProvider;
UNIX_OpticalDriveDiagnosticTest _dependentOpticalDriveDiagnosticTest;
UNIX_OpticalDriveDiagnosticTestProvider _dependentOpticalDriveDiagnosticTestProvider;
UNIX_OpticalDriveDiagnosticSettingData _dependentOpticalDriveDiagnosticSettingData;
UNIX_OpticalDriveDiagnosticSettingDataProvider _dependentOpticalDriveDiagnosticSettingDataProvider;
UNIX_DiskDriveDiagnosticTest _dependentDiskDriveDiagnosticTest;
UNIX_DiskDriveDiagnosticTestProvider _dependentDiskDriveDiagnosticTestProvider;

#	include "UNIX_DiagnosticTestSoftwarePrivate.h"


};

#endif /* UNIX_DIAGNOSTICTESTSOFTWARE */
