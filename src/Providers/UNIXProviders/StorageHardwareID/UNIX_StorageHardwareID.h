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
2.35.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::StorageHardwareID
*/


/* **** Description *** */
/*
CIM_StorageHardwareID is a hardware ID that serves as an authorization subject. Example are host controller IDs that serve as authorization subjects in disk array LUN Masking.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Identity:
				CurrentlyAuthenticated Boolean

			UNIX_StorageHardwareID:
				StorageID String
				IDType UInt16
				OtherIDType String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Identity:

			UNIX_StorageHardwareID:


*/

#ifndef __UNIX_STORAGEHARDWAREID_H
#define __UNIX_STORAGEHARDWAREID_H


#include "CIM_Identity.h"

#include "UNIX_StorageHardwareIDDeps.h"


#ifndef PROPERTY_STORAGE_ID
#define PROPERTY_STORAGE_ID \
					"StorageID"
#endif

#ifndef PROPERTY_ID_TYPE
#define PROPERTY_ID_TYPE \
					"IDType"
#endif

#ifndef PROPERTY_OTHER_ID_TYPE
#define PROPERTY_OTHER_ID_TYPE \
					"OtherIDType"
#endif



class UNIX_StorageHardwareID :
	public CIM_Identity
{
public:

	UNIX_StorageHardwareID();
	~UNIX_StorageHardwareID();

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
	virtual Boolean getCurrentlyAuthenticated(CIMProperty&) const;
	virtual Boolean getCurrentlyAuthenticated() const;
	virtual void setCurrentlyAuthenticated(Boolean&);
	virtual Boolean getStorageID(CIMProperty&) const;
	virtual String getStorageID() const;
	virtual void setStorageID(String&);
	virtual Boolean getIDType(CIMProperty&) const;
	virtual Uint16 getIDType() const;
	virtual void setIDType(Uint16&);
	virtual Boolean getOtherIDType(CIMProperty&) const;
	virtual String getOtherIDType() const;
	virtual void setOtherIDType(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _currentlyAuthenticated;
	String _storageID;
	Uint16 _iDType;
	String _otherIDType;

#	include "UNIX_StorageHardwareIDPrivate.h"


};

#endif /* UNIX_STORAGEHARDWAREID */
