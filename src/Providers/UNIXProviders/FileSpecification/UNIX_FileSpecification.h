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
FileSpecification identifies a file that is either to be on or off the system. The file is to be located in the directory identified in FileName, or by the CIM_Directory SpecificationFile association. When the Invoke methods are executed, it is expected that they will use a combination of information to check for file existence. Therefore, any of the properties with a NULL value are not checked. So, if only the FileName and MD5Checksum properties have values, they are the only ones considered by the Invoke methods.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Check:
				Name String
				Version String
				SoftwareElementState UInt16
				SoftwareElementID String
				TargetOperatingSystem UInt16
				CheckID String
				CheckMode Boolean

			UNIX_FileSpecification:
				FileName String
				CreateTimeStamp DateTime
				FileSize UInt64
				CheckSum UInt32
				CRC1 UInt32
				CRC2 UInt32
				MD5Checksum String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Check:
				Invoke UInt32
				InvokeOnSystem UInt32

			UNIX_FileSpecification:


*/

#ifndef __UNIX_FILESPECIFICATION_H
#define __UNIX_FILESPECIFICATION_H


#include "CIM_Check.h"
#include <ComputerSystem/UNIX_ComputerSystem.h>

#include "UNIX_FileSpecificationDeps.h"


#ifndef PROPERTY_FILE_NAME
#define PROPERTY_FILE_NAME \
					"FileName"
#endif

#ifndef PROPERTY_CREATE_TIME_STAMP
#define PROPERTY_CREATE_TIME_STAMP \
					"CreateTimeStamp"
#endif

#ifndef PROPERTY_FILE_SIZE
#define PROPERTY_FILE_SIZE \
					"FileSize"
#endif

#ifndef PROPERTY_CHECK_SUM
#define PROPERTY_CHECK_SUM \
					"CheckSum"
#endif

#ifndef PROPERTY_C_R_C_1
#define PROPERTY_C_R_C_1 \
					"CRC1"
#endif

#ifndef PROPERTY_C_R_C_2
#define PROPERTY_C_R_C_2 \
					"CRC2"
#endif

#ifndef PROPERTY_M_D_5_CHECKSUM
#define PROPERTY_M_D_5_CHECKSUM \
					"MD5Checksum"
#endif



class UNIX_FileSpecification :
	public CIM_Check
{
public:

	UNIX_FileSpecification();
	~UNIX_FileSpecification();

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
	virtual Boolean getCheckID(CIMProperty&) const;
	virtual String getCheckID() const;
	virtual void setCheckID(String&);
	virtual Boolean getCheckMode(CIMProperty&) const;
	virtual Boolean getCheckMode() const;
	virtual void setCheckMode(Boolean&);
	virtual Boolean getFileName(CIMProperty&) const;
	virtual String getFileName() const;
	virtual void setFileName(String&);
	virtual Boolean getCreateTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getCreateTimeStamp() const;
	virtual void setCreateTimeStamp(CIMDateTime&);
	virtual Boolean getFileSize(CIMProperty&) const;
	virtual Uint64 getFileSize() const;
	virtual void setFileSize(Uint64&);
	virtual Boolean getCheckSum(CIMProperty&) const;
	virtual Uint32 getCheckSum() const;
	virtual void setCheckSum(Uint32&);
	virtual Boolean getCRC1(CIMProperty&) const;
	virtual Uint32 getCRC1() const;
	virtual void setCRC1(Uint32&);
	virtual Boolean getCRC2(CIMProperty&) const;
	virtual Uint32 getCRC2() const;
	virtual void setCRC2(Uint32&);
	virtual Boolean getMD5Checksum(CIMProperty&) const;
	virtual String getMD5Checksum() const;
	virtual void setMD5Checksum(String&);

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
	String _checkID;
	Boolean _checkMode;
	String _fileName;
	CIMDateTime _createTimeStamp;
	Uint64 _fileSize;
	Uint32 _checkSum;
	Uint32 _cRC1;
	Uint32 _cRC2;
	String _mD5Checksum;

#	include "UNIX_FileSpecificationPrivate.h"


};

#endif /* UNIX_FILESPECIFICATION */
