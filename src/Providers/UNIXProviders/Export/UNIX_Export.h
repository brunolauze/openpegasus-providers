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
CIM::System::FileElements
*/


/* **** Description *** */
/*
An association between a LocalFileSystem and its Directories indicating that the specified Directories are available for mount. When exporting an entire FileSystem, the Directory should reference the topmost directory of the FileSystem.
*/


/*
			 *** Properties ***

			UNIX_Export:
				LocalFS Reference
				Directory Reference
				ExportedDirectoryName String


*/


/*
			 *** Methods ***

			UNIX_Export:


*/

#ifndef __UNIX_EXPORT_H
#define __UNIX_EXPORT_H


#include "CIM_ClassBase.h"

#include "UNIX_ExportDeps.h"


#ifndef PROPERTY_LOCAL_FS
#define PROPERTY_LOCAL_FS \
					"LocalFS"
#endif

#ifndef PROPERTY_DIRECTORY
#define PROPERTY_DIRECTORY \
					"Directory"
#endif

#ifndef PROPERTY_EXPORTED_DIRECTORY_NAME
#define PROPERTY_EXPORTED_DIRECTORY_NAME \
					"ExportedDirectoryName"
#endif



class UNIX_Export :
	public CIM_ClassBase
{
public:

	UNIX_Export();
	~UNIX_Export();

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

	virtual Boolean getLocalFS(CIMProperty&) const;
	virtual CIMInstance getLocalFS() const;
	virtual void setLocalFS(CIMInstance&);
	virtual Boolean getDirectory(CIMProperty&) const;
	virtual CIMInstance getDirectory() const;
	virtual void setDirectory(CIMInstance&);
	virtual Boolean getExportedDirectoryName(CIMProperty&) const;
	virtual String getExportedDirectoryName() const;
	virtual void setExportedDirectoryName(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _localFS;
	CIMInstance _directory;
	String _exportedDirectoryName;

#	include "UNIX_ExportPrivate.h"


};

#endif /* UNIX_EXPORT */
