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
2.10
*/


/* **** UMLPackagePath *** */
/*
CIM::Database::Storage
*/


/* **** Description *** */
/*
CIM_DatabaseControlFile is a specialization of the CIM_Dependency association that identifies the LogicalFiles that provide control information for a Database. As an example, some implementations of CommonDatabase assign particular significance to a small number of files that contain database state and configuration information. This association is intended to provide an efficient means of identifying these files.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_HostedDependency:

			UNIX_DatabaseControlFile:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_HostedDependency:

			UNIX_DatabaseControlFile:


*/

#ifndef __UNIX_DATABASECONTROLFILE_H
#define __UNIX_DATABASECONTROLFILE_H


#include "CIM_HostedDependency.h"
#include <CommonDatabase/UNIX_CommonDatabaseProvider.h>
#include <FIFOPipeFile/UNIX_FIFOPipeFileProvider.h>
#include <Directory/UNIX_DirectoryProvider.h>
#include <DataFile/UNIX_DataFileProvider.h>
#include <SymbolicLink/UNIX_SymbolicLinkProvider.h>
#include <DeviceFile/UNIX_DeviceFileProvider.h>

#include "UNIX_DatabaseControlFileDeps.h"




class UNIX_DatabaseControlFile :
	public CIM_HostedDependency
{
public:

	UNIX_DatabaseControlFile();
	~UNIX_DatabaseControlFile();

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

UNIX_CommonDatabase _antecedentCommonDatabase;
UNIX_CommonDatabaseProvider _antecedentCommonDatabaseProvider;

UNIX_FIFOPipeFile _dependentFIFOPipeFile;
UNIX_FIFOPipeFileProvider _dependentFIFOPipeFileProvider;
UNIX_Directory _dependentDirectory;
UNIX_DirectoryProvider _dependentDirectoryProvider;
UNIX_DataFile _dependentDataFile;
UNIX_DataFileProvider _dependentDataFileProvider;
UNIX_SymbolicLink _dependentSymbolicLink;
UNIX_SymbolicLinkProvider _dependentSymbolicLinkProvider;
UNIX_DeviceFile _dependentDeviceFile;
UNIX_DeviceFileProvider _dependentDeviceFileProvider;

#	include "UNIX_DatabaseControlFilePrivate.h"


};

#endif /* UNIX_DATABASECONTROLFILE */
