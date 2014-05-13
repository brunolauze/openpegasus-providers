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
No value
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
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
This class is being deprecated. Tests should be grouped at the test level, not in the model. Therefore, the association is not appropriate. /n This is an association class that identifies a Diagnostic Test as made up of lower level Tests. In this case, the test identified as the GroupComponent reference (i.e, the higher level test) would have the "Is Package" enumerated value specified in DiagnosticTest. Characteristics.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_DiagnosticTestInPackage:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_DiagnosticTestInPackage:


*/

#ifndef __UNIX_DIAGNOSTICTESTINPACKAGE_H
#define __UNIX_DIAGNOSTICTESTINPACKAGE_H


#include "CIM_Component.h"
#include <FCHBADiagnosticTest/UNIX_FCHBADiagnosticTestProvider.h>
#include <RAIDDiagnosticTest/UNIX_RAIDDiagnosticTestProvider.h>
#include <CPUDiagnosticTest/UNIX_CPUDiagnosticTestProvider.h>
#include <EthernetNICDiagnosticTest/UNIX_EthernetNICDiagnosticTestProvider.h>
#include <OpticalDriveDiagnosticTest/UNIX_OpticalDriveDiagnosticTestProvider.h>
#include <OpticalDriveDiagnosticSettingData/UNIX_OpticalDriveDiagnosticSettingDataProvider.h>
#include <DiskDriveDiagnosticTest/UNIX_DiskDriveDiagnosticTestProvider.h>

#include "UNIX_DiagnosticTestInPackageDeps.h"




class UNIX_DiagnosticTestInPackage :
	public CIM_Component
{
public:

	UNIX_DiagnosticTestInPackage();
	~UNIX_DiagnosticTestInPackage();

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
	UNIX_FCHBADiagnosticTest group_UNIX_FCHBADiagnosticTest_Component;
	int group_UNIX_FCHBADiagnosticTest_Index;
	bool endOf_UNIX_FCHBADiagnosticTest_Group;
	UNIX_RAIDDiagnosticTest group_UNIX_RAIDDiagnosticTest_Component;
	int group_UNIX_RAIDDiagnosticTest_Index;
	bool endOf_UNIX_RAIDDiagnosticTest_Group;
	UNIX_CPUDiagnosticTest group_UNIX_CPUDiagnosticTest_Component;
	int group_UNIX_CPUDiagnosticTest_Index;
	bool endOf_UNIX_CPUDiagnosticTest_Group;
	UNIX_EthernetNICDiagnosticTest group_UNIX_EthernetNICDiagnosticTest_Component;
	int group_UNIX_EthernetNICDiagnosticTest_Index;
	bool endOf_UNIX_EthernetNICDiagnosticTest_Group;
	UNIX_OpticalDriveDiagnosticTest group_UNIX_OpticalDriveDiagnosticTest_Component;
	int group_UNIX_OpticalDriveDiagnosticTest_Index;
	bool endOf_UNIX_OpticalDriveDiagnosticTest_Group;
	UNIX_OpticalDriveDiagnosticSettingData group_UNIX_OpticalDriveDiagnosticSettingData_Component;
	int group_UNIX_OpticalDriveDiagnosticSettingData_Index;
	bool endOf_UNIX_OpticalDriveDiagnosticSettingData_Group;
	UNIX_DiskDriveDiagnosticTest group_UNIX_DiskDriveDiagnosticTest_Component;
	int group_UNIX_DiskDriveDiagnosticTest_Index;
	bool endOf_UNIX_DiskDriveDiagnosticTest_Group;

	UNIX_FCHBADiagnosticTest part_UNIX_FCHBADiagnosticTest_Component;
	int part_UNIX_FCHBADiagnosticTest_Index;
	bool endOf_UNIX_FCHBADiagnosticTest_Part;
	UNIX_RAIDDiagnosticTest part_UNIX_RAIDDiagnosticTest_Component;
	int part_UNIX_RAIDDiagnosticTest_Index;
	bool endOf_UNIX_RAIDDiagnosticTest_Part;
	UNIX_CPUDiagnosticTest part_UNIX_CPUDiagnosticTest_Component;
	int part_UNIX_CPUDiagnosticTest_Index;
	bool endOf_UNIX_CPUDiagnosticTest_Part;
	UNIX_EthernetNICDiagnosticTest part_UNIX_EthernetNICDiagnosticTest_Component;
	int part_UNIX_EthernetNICDiagnosticTest_Index;
	bool endOf_UNIX_EthernetNICDiagnosticTest_Part;
	UNIX_OpticalDriveDiagnosticTest part_UNIX_OpticalDriveDiagnosticTest_Component;
	int part_UNIX_OpticalDriveDiagnosticTest_Index;
	bool endOf_UNIX_OpticalDriveDiagnosticTest_Part;
	UNIX_OpticalDriveDiagnosticSettingData part_UNIX_OpticalDriveDiagnosticSettingData_Component;
	int part_UNIX_OpticalDriveDiagnosticSettingData_Index;
	bool endOf_UNIX_OpticalDriveDiagnosticSettingData_Part;
	UNIX_DiskDriveDiagnosticTest part_UNIX_DiskDriveDiagnosticTest_Component;
	int part_UNIX_DiskDriveDiagnosticTest_Index;
	bool endOf_UNIX_DiskDriveDiagnosticTest_Part;

#	include "UNIX_DiagnosticTestInPackagePrivate.h"


};

#endif /* UNIX_DIAGNOSTICTESTINPACKAGE */
