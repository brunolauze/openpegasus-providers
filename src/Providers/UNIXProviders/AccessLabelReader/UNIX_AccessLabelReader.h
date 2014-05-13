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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageLib
*/


/* **** Description *** */
/*
AccessLabelReader is used to indicate that one or more Label Readers works in conjunction with MediaAccessDevices, to identify PhysicalMedia before read/write.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AssociatedLabelReader:

			UNIX_AccessLabelReader:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AssociatedLabelReader:

			UNIX_AccessLabelReader:


*/

#ifndef __UNIX_ACCESSLABELREADER_H
#define __UNIX_ACCESSLABELREADER_H


#include "CIM_AssociatedLabelReader.h"
#include <LabelReader/UNIX_LabelReaderProvider.h>
#include <TapeDrive/UNIX_TapeDriveProvider.h>
#include <CDROMDrive/UNIX_CDROMDriveProvider.h>
#include <WORMDrive/UNIX_WORMDriveProvider.h>
#include <DiskDrive/UNIX_DiskDriveProvider.h>
#include <DVDDrive/UNIX_DVDDriveProvider.h>
#include <DisketteDrive/UNIX_DisketteDriveProvider.h>
#include <MagnetoOpticalDrive/UNIX_MagnetoOpticalDriveProvider.h>

#include "UNIX_AccessLabelReaderDeps.h"




class UNIX_AccessLabelReader :
	public CIM_AssociatedLabelReader
{
public:

	UNIX_AccessLabelReader();
	~UNIX_AccessLabelReader();

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

UNIX_LabelReader _antecedentLabelReader;
UNIX_LabelReaderProvider _antecedentLabelReaderProvider;

UNIX_TapeDrive _dependentTapeDrive;
UNIX_TapeDriveProvider _dependentTapeDriveProvider;
UNIX_CDROMDrive _dependentCDROMDrive;
UNIX_CDROMDriveProvider _dependentCDROMDriveProvider;
UNIX_WORMDrive _dependentWORMDrive;
UNIX_WORMDriveProvider _dependentWORMDriveProvider;
UNIX_DiskDrive _dependentDiskDrive;
UNIX_DiskDriveProvider _dependentDiskDriveProvider;
UNIX_DVDDrive _dependentDVDDrive;
UNIX_DVDDriveProvider _dependentDVDDriveProvider;
UNIX_DisketteDrive _dependentDisketteDrive;
UNIX_DisketteDriveProvider _dependentDisketteDriveProvider;
UNIX_MagnetoOpticalDrive _dependentMagnetoOpticalDrive;
UNIX_MagnetoOpticalDriveProvider _dependentMagnetoOpticalDriveProvider;

#	include "UNIX_AccessLabelReaderPrivate.h"


};

#endif /* UNIX_ACCESSLABELREADER */
