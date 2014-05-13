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
CIM::Application::CheckAction
*/


/* **** Description *** */
/*
The FromDirectoryAction association identifies the source directory for a FileAction. When this association is used, the assumption is that the source directory was created by a previous Action. This association cannot co-exist with a FromDirectorySpecification association, since a FileAction can only involve a single source directory.
*/


/*
			 *** Properties ***

			UNIX_FromDirectoryAction:
				SourceDirectory Reference
				FileName Reference


*/


/*
			 *** Methods ***

			UNIX_FromDirectoryAction:


*/

#ifndef __UNIX_FROMDIRECTORYACTION_H
#define __UNIX_FROMDIRECTORYACTION_H


#include "CIM_ClassBase.h"

#include "UNIX_FromDirectoryActionDeps.h"


#ifndef PROPERTY_SOURCE_DIRECTORY
#define PROPERTY_SOURCE_DIRECTORY \
					"SourceDirectory"
#endif

#ifndef PROPERTY_FILE_NAME
#define PROPERTY_FILE_NAME \
					"FileName"
#endif



class UNIX_FromDirectoryAction :
	public CIM_ClassBase
{
public:

	UNIX_FromDirectoryAction();
	~UNIX_FromDirectoryAction();

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

	virtual Boolean getSourceDirectory(CIMProperty&) const;
	virtual CIMInstance getSourceDirectory() const;
	virtual void setSourceDirectory(CIMInstance&);
	virtual Boolean getFileName(CIMProperty&) const;
	virtual CIMInstance getFileName() const;
	virtual void setFileName(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _sourceDirectory;
	CIMInstance _fileName;

#	include "UNIX_FromDirectoryActionPrivate.h"


};

#endif /* UNIX_FROMDIRECTORYACTION */
