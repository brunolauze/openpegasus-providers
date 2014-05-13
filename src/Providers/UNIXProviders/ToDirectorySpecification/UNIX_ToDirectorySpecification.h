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
The ToDirectorySpecification association identifies the target directory for a FileAction. When this association is used, the assumption is that the target directory already exists. This association cannot co-exist with a ToDirectoryAction association, since a FileAction can only involve a single target directory.
*/


/*
			 *** Properties ***

			UNIX_ToDirectorySpecification:
				DestinationDirectory Reference
				FileName Reference


*/


/*
			 *** Methods ***

			UNIX_ToDirectorySpecification:


*/

#ifndef __UNIX_TODIRECTORYSPECIFICATION_H
#define __UNIX_TODIRECTORYSPECIFICATION_H


#include "CIM_ClassBase.h"

#include "UNIX_ToDirectorySpecificationDeps.h"


#ifndef PROPERTY_DESTINATION_DIRECTORY
#define PROPERTY_DESTINATION_DIRECTORY \
					"DestinationDirectory"
#endif

#ifndef PROPERTY_FILE_NAME
#define PROPERTY_FILE_NAME \
					"FileName"
#endif



class UNIX_ToDirectorySpecification :
	public CIM_ClassBase
{
public:

	UNIX_ToDirectorySpecification();
	~UNIX_ToDirectorySpecification();

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

	virtual Boolean getDestinationDirectory(CIMProperty&) const;
	virtual CIMInstance getDestinationDirectory() const;
	virtual void setDestinationDirectory(CIMInstance&);
	virtual Boolean getFileName(CIMProperty&) const;
	virtual CIMInstance getFileName() const;
	virtual void setFileName(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _destinationDirectory;
	CIMInstance _fileName;

#	include "UNIX_ToDirectorySpecificationPrivate.h"


};

#endif /* UNIX_TODIRECTORYSPECIFICATION */
