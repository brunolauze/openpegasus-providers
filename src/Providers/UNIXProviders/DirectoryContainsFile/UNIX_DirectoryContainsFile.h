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


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Composition *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FileElements
*/


/* **** Description *** */
/*
Specifies the hierarchical arrangement of LogicalFiles in a Directory.
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_DirectoryContainsFile:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_DirectoryContainsFile:


*/

#ifndef __UNIX_DIRECTORYCONTAINSFILE_H
#define __UNIX_DIRECTORYCONTAINSFILE_H


#include "CIM_Component.h"
#include <Directory/UNIX_DirectoryProvider.h>
#include <FIFOPipeFile/UNIX_FIFOPipeFileProvider.h>
#include <DataFile/UNIX_DataFileProvider.h>
#include <SymbolicLink/UNIX_SymbolicLinkProvider.h>
#include <DeviceFile/UNIX_DeviceFileProvider.h>

#include "UNIX_DirectoryContainsFileDeps.h"




class UNIX_DirectoryContainsFile :
	public CIM_Component
{
public:

	UNIX_DirectoryContainsFile();
	~UNIX_DirectoryContainsFile();

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
	UNIX_Directory group_UNIX_Directory_Component;
	int group_UNIX_Directory_Index;
	bool endOf_UNIX_Directory_Group;

	UNIX_FIFOPipeFile part_UNIX_FIFOPipeFile_Component;
	int part_UNIX_FIFOPipeFile_Index;
	bool endOf_UNIX_FIFOPipeFile_Part;
	UNIX_Directory part_UNIX_Directory_Component;
	int part_UNIX_Directory_Index;
	bool endOf_UNIX_Directory_Part;
	UNIX_DataFile part_UNIX_DataFile_Component;
	int part_UNIX_DataFile_Index;
	bool endOf_UNIX_DataFile_Part;
	UNIX_SymbolicLink part_UNIX_SymbolicLink_Component;
	int part_UNIX_SymbolicLink_Index;
	bool endOf_UNIX_SymbolicLink_Part;
	UNIX_DeviceFile part_UNIX_DeviceFile_Component;
	int part_UNIX_DeviceFile_Index;
	bool endOf_UNIX_DeviceFile_Part;

#	include "UNIX_DirectoryContainsFilePrivate.h"


};

#endif /* UNIX_DIRECTORYCONTAINSFILE */
