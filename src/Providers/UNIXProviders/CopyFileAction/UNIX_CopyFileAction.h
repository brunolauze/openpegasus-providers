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
CopyFileAction specifies the files to be moved or copied to a new location. The to/from information for the copy is specified using either the ToDirectorySpecification/ FromDirectorySpecification or the ToDirectoryAction/ FromDirectoryAction associations. The first set is used when the source and/or the target are to exist before any Actions are taken. The second set is used when the source and/or target are created as a part of a previous Action (specified using the association, ActionSequence).
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Action:
				Name String
				Version String
				SoftwareElementState UInt16
				SoftwareElementID String
				TargetOperatingSystem UInt16
				ActionID String
				Direction UInt16

			CIM_FileAction:

			UNIX_CopyFileAction:
				Source String
				Destination String
				DeleteAfterCopy Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Action:
				Invoke UInt32
				InvokeOnSystem UInt32

			CIM_FileAction:

			UNIX_CopyFileAction:


*/

#ifndef __UNIX_COPYFILEACTION_H
#define __UNIX_COPYFILEACTION_H


#include "CIM_FileAction.h"
#include <ComputerSystem/UNIX_ComputerSystem.h>

#include "UNIX_CopyFileActionDeps.h"


#ifndef PROPERTY_SOURCE
#define PROPERTY_SOURCE \
					"Source"
#endif

#ifndef PROPERTY_DESTINATION
#define PROPERTY_DESTINATION \
					"Destination"
#endif

#ifndef PROPERTY_DELETE_AFTER_COPY
#define PROPERTY_DELETE_AFTER_COPY \
					"DeleteAfterCopy"
#endif



class UNIX_CopyFileAction :
	public CIM_FileAction
{
public:

	UNIX_CopyFileAction();
	~UNIX_CopyFileAction();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getSoftwareElementState(CIMProperty&) const;
	virtual Uint16 getSoftwareElementState() const;
	virtual void setSoftwareElementState(Uint16&);
	virtual Boolean getSoftwareElementID(CIMProperty&) const;
	virtual String getSoftwareElementID() const;
	virtual void setSoftwareElementID(String&);
	virtual Boolean getTargetOperatingSystem(CIMProperty&) const;
	virtual Uint16 getTargetOperatingSystem() const;
	virtual void setTargetOperatingSystem(Uint16&);
	virtual Boolean getActionID(CIMProperty&) const;
	virtual String getActionID() const;
	virtual void setActionID(String&);
	virtual Boolean getDirection(CIMProperty&) const;
	virtual Uint16 getDirection() const;
	virtual void setDirection(Uint16&);
	virtual Boolean getSource(CIMProperty&) const;
	virtual String getSource() const;
	virtual void setSource(String&);
	virtual Boolean getDestination(CIMProperty&) const;
	virtual String getDestination() const;
	virtual void setDestination(String&);
	virtual Boolean getDeleteAfterCopy(CIMProperty&) const;
	virtual Boolean getDeleteAfterCopy() const;
	virtual void setDeleteAfterCopy(Boolean&);

	virtual Uint32 invokeInvoke();

	virtual Uint32 invokeInvokeOnSystem(
		CIMInstance &inTargetSystem
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	String _version;
	Uint16 _softwareElementState;
	String _softwareElementID;
	Uint16 _targetOperatingSystem;
	String _actionID;
	Uint16 _direction;
	String _source;
	String _destination;
	Boolean _deleteAfterCopy;

#	include "UNIX_CopyFileActionPrivate.h"


};

#endif /* UNIX_COPYFILEACTION */
