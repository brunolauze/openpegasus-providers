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
CIM_AvailableDiagnosticService
*/


/* **** Version *** */
/*
2.9.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
This class is being deprecated to promote its usage to the DiagnosticService level. 
This is an association class that relates a DiagnosticTest to a ManagedSystemElement. Consumers wishing to 'diagnose' a particular Element could query this association, for the Element, to determine what tests are available.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_ProvidesServiceToElement:

			UNIX_DiagnosticTestForMSE:
				EstimatedTimeOfPerforming UInt32
				IsExclusiveForMSE Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_ProvidesServiceToElement:

			UNIX_DiagnosticTestForMSE:


*/

#ifndef __UNIX_DIAGNOSTICTESTFORMSE_H
#define __UNIX_DIAGNOSTICTESTFORMSE_H


#include "CIM_ProvidesServiceToElement.h"
#include <FCHBADiagnosticTest/UNIX_FCHBADiagnosticTestProvider.h>
#include <RAIDDiagnosticTest/UNIX_RAIDDiagnosticTestProvider.h>
#include <CPUDiagnosticTest/UNIX_CPUDiagnosticTestProvider.h>
#include <EthernetNICDiagnosticTest/UNIX_EthernetNICDiagnosticTestProvider.h>
#include <OpticalDriveDiagnosticTest/UNIX_OpticalDriveDiagnosticTestProvider.h>
#include <OpticalDriveDiagnosticSettingData/UNIX_OpticalDriveDiagnosticSettingDataProvider.h>
#include <DiskDriveDiagnosticTest/UNIX_DiskDriveDiagnosticTestProvider.h>

#include "UNIX_DiagnosticTestForMSEDeps.h"


#ifndef PROPERTY_ESTIMATED_TIME_OF_PERFORMING
#define PROPERTY_ESTIMATED_TIME_OF_PERFORMING \
					"EstimatedTimeOfPerforming"
#endif

#ifndef PROPERTY_IS_EXCLUSIVE_FOR_M_S_E
#define PROPERTY_IS_EXCLUSIVE_FOR_M_S_E \
					"IsExclusiveForMSE"
#endif



class UNIX_DiagnosticTestForMSE :
	public CIM_ProvidesServiceToElement
{
public:

	UNIX_DiagnosticTestForMSE();
	~UNIX_DiagnosticTestForMSE();

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
	virtual Boolean getEstimatedTimeOfPerforming(CIMProperty&) const;
	virtual Uint32 getEstimatedTimeOfPerforming() const;
	virtual void setEstimatedTimeOfPerforming(Uint32&);
	virtual Boolean getIsExclusiveForMSE(CIMProperty&) const;
	virtual Boolean getIsExclusiveForMSE() const;
	virtual void setIsExclusiveForMSE(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint32 _estimatedTimeOfPerforming;
	Boolean _isExclusiveForMSE;

UNIX_FCHBADiagnosticTest _antecedentFCHBADiagnosticTest;
UNIX_FCHBADiagnosticTestProvider _antecedentFCHBADiagnosticTestProvider;
UNIX_RAIDDiagnosticTest _antecedentRAIDDiagnosticTest;
UNIX_RAIDDiagnosticTestProvider _antecedentRAIDDiagnosticTestProvider;
UNIX_CPUDiagnosticTest _antecedentCPUDiagnosticTest;
UNIX_CPUDiagnosticTestProvider _antecedentCPUDiagnosticTestProvider;
UNIX_EthernetNICDiagnosticTest _antecedentEthernetNICDiagnosticTest;
UNIX_EthernetNICDiagnosticTestProvider _antecedentEthernetNICDiagnosticTestProvider;
UNIX_OpticalDriveDiagnosticTest _antecedentOpticalDriveDiagnosticTest;
UNIX_OpticalDriveDiagnosticTestProvider _antecedentOpticalDriveDiagnosticTestProvider;
UNIX_OpticalDriveDiagnosticSettingData _antecedentOpticalDriveDiagnosticSettingData;
UNIX_OpticalDriveDiagnosticSettingDataProvider _antecedentOpticalDriveDiagnosticSettingDataProvider;
UNIX_DiskDriveDiagnosticTest _antecedentDiskDriveDiagnosticTest;
UNIX_DiskDriveDiagnosticTestProvider _antecedentDiskDriveDiagnosticTestProvider;


#	include "UNIX_DiagnosticTestForMSEPrivate.h"


};

#endif /* UNIX_DIAGNOSTICTESTFORMSE */
