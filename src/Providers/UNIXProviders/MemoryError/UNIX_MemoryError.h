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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Memory
*/


/* **** Description *** */
/*
MemoryError defines a memory space that has errors. The Key of the class is the StartingAddress of the bytes in error.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_StorageError:
				SystemCreationClassName String
				SystemName String
				DeviceCreationClassName String
				DeviceID String
				StartingAddress UInt64
				EndingAddress UInt64

			UNIX_MemoryError:
				ErrorInfo UInt16
				OtherErrorDescription String
				CorrectableError Boolean
				ErrorTime DateTime
				ErrorAccess UInt16
				ErrorTransferSize UInt32
				ErrorData UInt8
				ErrorDataOrder UInt16
				SystemLevelAddress Boolean
				ErrorResolution UInt64
				AdditionalErrorData UInt8


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_StorageError:

			UNIX_MemoryError:


*/

#ifndef __UNIX_MEMORYERROR_H
#define __UNIX_MEMORYERROR_H


#include <StorageError/UNIX_StorageError.h>

#include "UNIX_MemoryErrorDeps.h"


#ifndef PROPERTY_ERROR_INFO
#define PROPERTY_ERROR_INFO \
					"ErrorInfo"
#endif

#ifndef PROPERTY_OTHER_ERROR_DESCRIPTION
#define PROPERTY_OTHER_ERROR_DESCRIPTION \
					"OtherErrorDescription"
#endif

#ifndef PROPERTY_CORRECTABLE_ERROR
#define PROPERTY_CORRECTABLE_ERROR \
					"CorrectableError"
#endif

#ifndef PROPERTY_ERROR_TIME
#define PROPERTY_ERROR_TIME \
					"ErrorTime"
#endif

#ifndef PROPERTY_ERROR_ACCESS
#define PROPERTY_ERROR_ACCESS \
					"ErrorAccess"
#endif

#ifndef PROPERTY_ERROR_TRANSFER_SIZE
#define PROPERTY_ERROR_TRANSFER_SIZE \
					"ErrorTransferSize"
#endif

#ifndef PROPERTY_ERROR_DATA
#define PROPERTY_ERROR_DATA \
					"ErrorData"
#endif

#ifndef PROPERTY_ERROR_DATA_ORDER
#define PROPERTY_ERROR_DATA_ORDER \
					"ErrorDataOrder"
#endif

#ifndef PROPERTY_SYSTEM_LEVEL_ADDRESS
#define PROPERTY_SYSTEM_LEVEL_ADDRESS \
					"SystemLevelAddress"
#endif

#ifndef PROPERTY_ERROR_RESOLUTION
#define PROPERTY_ERROR_RESOLUTION \
					"ErrorResolution"
#endif

#ifndef PROPERTY_ADDITIONAL_ERROR_DATA
#define PROPERTY_ADDITIONAL_ERROR_DATA \
					"AdditionalErrorData"
#endif



class UNIX_MemoryError :
	public UNIX_StorageError
{
public:

	UNIX_MemoryError();
	~UNIX_MemoryError();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getDeviceCreationClassName(CIMProperty&) const;
	virtual String getDeviceCreationClassName() const;
	virtual void setDeviceCreationClassName(String&);
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual void setDeviceID(String&);
	virtual Boolean getStartingAddress(CIMProperty&) const;
	virtual Uint64 getStartingAddress() const;
	virtual void setStartingAddress(Uint64&);
	virtual Boolean getEndingAddress(CIMProperty&) const;
	virtual Uint64 getEndingAddress() const;
	virtual void setEndingAddress(Uint64&);
	virtual Boolean getErrorInfo(CIMProperty&) const;
	virtual Uint16 getErrorInfo() const;
	virtual void setErrorInfo(Uint16&);
	virtual Boolean getOtherErrorDescription(CIMProperty&) const;
	virtual String getOtherErrorDescription() const;
	virtual void setOtherErrorDescription(String&);
	virtual Boolean getCorrectableError(CIMProperty&) const;
	virtual Boolean getCorrectableError() const;
	virtual void setCorrectableError(Boolean&);
	virtual Boolean getErrorTime(CIMProperty&) const;
	virtual CIMDateTime getErrorTime() const;
	virtual void setErrorTime(CIMDateTime&);
	virtual Boolean getErrorAccess(CIMProperty&) const;
	virtual Uint16 getErrorAccess() const;
	virtual void setErrorAccess(Uint16&);
	virtual Boolean getErrorTransferSize(CIMProperty&) const;
	virtual Uint32 getErrorTransferSize() const;
	virtual void setErrorTransferSize(Uint32&);
	virtual Boolean getErrorData(CIMProperty&) const;
	virtual Array<Uint8> getErrorData() const;
	virtual void setErrorData(Array<Uint8>&);
	virtual Boolean getErrorDataOrder(CIMProperty&) const;
	virtual Uint16 getErrorDataOrder() const;
	virtual void setErrorDataOrder(Uint16&);
	virtual Boolean getSystemLevelAddress(CIMProperty&) const;
	virtual Boolean getSystemLevelAddress() const;
	virtual void setSystemLevelAddress(Boolean&);
	virtual Boolean getErrorResolution(CIMProperty&) const;
	virtual Uint64 getErrorResolution() const;
	virtual void setErrorResolution(Uint64&);
	virtual Boolean getAdditionalErrorData(CIMProperty&) const;
	virtual Array<Uint8> getAdditionalErrorData() const;
	virtual void setAdditionalErrorData(Array<Uint8>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _systemCreationClassName;
	String _systemName;
	String _deviceCreationClassName;
	String _deviceID;
	Uint64 _startingAddress;
	Uint64 _endingAddress;
	Uint16 _errorInfo;
	String _otherErrorDescription;
	Boolean _correctableError;
	CIMDateTime _errorTime;
	Uint16 _errorAccess;
	Uint32 _errorTransferSize;
	Array<Uint8> _errorData;
	Uint16 _errorDataOrder;
	Boolean _systemLevelAddress;
	Uint64 _errorResolution;
	Array<Uint8> _additionalErrorData;

#	include "UNIX_MemoryErrorPrivate.h"


};

#endif /* UNIX_MEMORYERROR */
