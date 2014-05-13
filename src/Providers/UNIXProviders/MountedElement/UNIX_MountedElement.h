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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FileElements
*/


/* **** Description *** */
/*
An association derived from AttachedElement for use in attaching a FileSystem to a LogicalFile (or Directory). The semantics of this relationship require that the SystemElement LogicalFile be contained by a FileSystem (via the FileStorage association) that is different from the FileSystem referenced as the SameElement. The LogicalFile's containing FileSystem could be either local or remote. For example, a LocalFileSystem on a Solaris ComputerSystem can mount on its LogicalFile a FileSystem accessed via the machine's CDROM drive, i.e., another LocalFileSystem. On the other hand, in a 'remote' case, the LogicalFile must be surfaced in the namespace of the local host appropriately.
*/


/*
			 *** Properties ***

			CIM_LogicalIdentity:
				SystemElement Reference
				SameElement Reference

			UNIX_AttachedElement:

			UNIX_MountedElement:


*/


/*
			 *** Methods ***

			CIM_LogicalIdentity:

			UNIX_AttachedElement:

			UNIX_MountedElement:


*/

#ifndef __UNIX_MOUNTEDELEMENT_H
#define __UNIX_MOUNTEDELEMENT_H


#include <AttachedElement/UNIX_AttachedElement.h>

#include "UNIX_MountedElementDeps.h"




class UNIX_MountedElement :
	public UNIX_AttachedElement
{
public:

	UNIX_MountedElement();
	~UNIX_MountedElement();

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

	virtual Boolean getSystemElement(CIMProperty&) const;
	virtual CIMInstance getSystemElement() const;
	virtual void setSystemElement(CIMInstance&);
	virtual Boolean getSameElement(CIMProperty&) const;
	virtual CIMInstance getSameElement() const;
	virtual void setSameElement(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _systemElement;
	CIMInstance _sameElement;

#	include "UNIX_MountedElementPrivate.h"


};

#endif /* UNIX_MOUNTEDELEMENT */
