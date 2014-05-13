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
2.17.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Unix
*/


/* **** Description *** */
/*
The statistics associated with a Unix process.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalInformation:
				Name String

			UNIX_ProcessStatisticalInformation:
				CSCreationClassName String
				CSName String
				OSCreationClassName String
				OSName String
				Handle String
				ProcessCreationClassName String
				CPUTime UInt32
				RealText UInt64
				RealData UInt64
				RealStack UInt64
				VirtualText UInt64
				VirtualData UInt64
				VirtualStack UInt64
				VirtualMemoryMappedFileSize UInt64
				VirtualSharedMemory UInt64
				CpuTimeDeadChildren UInt64
				SystemTimeDeadChildren UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			UNIX_ProcessStatisticalInformation:


*/

#ifndef __UNIX_PROCESSSTATISTICALINFORMATION_H
#define __UNIX_PROCESSSTATISTICALINFORMATION_H


#include "CIM_StatisticalInformation.h"

#include "UNIX_ProcessStatisticalInformationDeps.h"


#ifndef PROPERTY_CS_CREATION_CLASS_NAME
#define PROPERTY_CS_CREATION_CLASS_NAME \
					"CSCreationClassName"
#endif

#ifndef PROPERTY_CS_NAME
#define PROPERTY_CS_NAME \
					"CSName"
#endif

#ifndef PROPERTY_OS_CREATION_CLASS_NAME
#define PROPERTY_OS_CREATION_CLASS_NAME \
					"OSCreationClassName"
#endif

#ifndef PROPERTY_OS_NAME
#define PROPERTY_OS_NAME \
					"OSName"
#endif

#ifndef PROPERTY_HANDLE
#define PROPERTY_HANDLE \
					"Handle"
#endif

#ifndef PROPERTY_PROCESS_CREATION_CLASS_NAME
#define PROPERTY_PROCESS_CREATION_CLASS_NAME \
					"ProcessCreationClassName"
#endif

#ifndef PROPERTY_CPU_TIME
#define PROPERTY_CPU_TIME \
					"CPUTime"
#endif

#ifndef PROPERTY_REAL_TEXT
#define PROPERTY_REAL_TEXT \
					"RealText"
#endif

#ifndef PROPERTY_REAL_DATA
#define PROPERTY_REAL_DATA \
					"RealData"
#endif

#ifndef PROPERTY_REAL_STACK
#define PROPERTY_REAL_STACK \
					"RealStack"
#endif

#ifndef PROPERTY_VIRTUAL_TEXT
#define PROPERTY_VIRTUAL_TEXT \
					"VirtualText"
#endif

#ifndef PROPERTY_VIRTUAL_DATA
#define PROPERTY_VIRTUAL_DATA \
					"VirtualData"
#endif

#ifndef PROPERTY_VIRTUAL_STACK
#define PROPERTY_VIRTUAL_STACK \
					"VirtualStack"
#endif

#ifndef PROPERTY_VIRTUAL_MEMORY_MAPPED_FILE_SIZE
#define PROPERTY_VIRTUAL_MEMORY_MAPPED_FILE_SIZE \
					"VirtualMemoryMappedFileSize"
#endif

#ifndef PROPERTY_VIRTUAL_SHARED_MEMORY
#define PROPERTY_VIRTUAL_SHARED_MEMORY \
					"VirtualSharedMemory"
#endif

#ifndef PROPERTY_CPU_TIME_DEAD_CHILDREN
#define PROPERTY_CPU_TIME_DEAD_CHILDREN \
					"CpuTimeDeadChildren"
#endif

#ifndef PROPERTY_SYSTEM_TIME_DEAD_CHILDREN
#define PROPERTY_SYSTEM_TIME_DEAD_CHILDREN \
					"SystemTimeDeadChildren"
#endif



class UNIX_ProcessStatisticalInformation :
	public CIM_StatisticalInformation
{
public:

	UNIX_ProcessStatisticalInformation();
	~UNIX_ProcessStatisticalInformation();

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
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual void setCSCreationClassName(String&);
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual void setCSName(String&);
	virtual Boolean getOSCreationClassName(CIMProperty&) const;
	virtual String getOSCreationClassName() const;
	virtual void setOSCreationClassName(String&);
	virtual Boolean getOSName(CIMProperty&) const;
	virtual String getOSName() const;
	virtual void setOSName(String&);
	virtual Boolean getHandle(CIMProperty&) const;
	virtual String getHandle() const;
	virtual void setHandle(String&);
	virtual Boolean getProcessCreationClassName(CIMProperty&) const;
	virtual String getProcessCreationClassName() const;
	virtual void setProcessCreationClassName(String&);
	virtual Boolean getCPUTime(CIMProperty&) const;
	virtual Uint32 getCPUTime() const;
	virtual void setCPUTime(Uint32&);
	virtual Boolean getRealText(CIMProperty&) const;
	virtual Uint64 getRealText() const;
	virtual void setRealText(Uint64&);
	virtual Boolean getRealData(CIMProperty&) const;
	virtual Uint64 getRealData() const;
	virtual void setRealData(Uint64&);
	virtual Boolean getRealStack(CIMProperty&) const;
	virtual Uint64 getRealStack() const;
	virtual void setRealStack(Uint64&);
	virtual Boolean getVirtualText(CIMProperty&) const;
	virtual Uint64 getVirtualText() const;
	virtual void setVirtualText(Uint64&);
	virtual Boolean getVirtualData(CIMProperty&) const;
	virtual Uint64 getVirtualData() const;
	virtual void setVirtualData(Uint64&);
	virtual Boolean getVirtualStack(CIMProperty&) const;
	virtual Uint64 getVirtualStack() const;
	virtual void setVirtualStack(Uint64&);
	virtual Boolean getVirtualMemoryMappedFileSize(CIMProperty&) const;
	virtual Uint64 getVirtualMemoryMappedFileSize() const;
	virtual void setVirtualMemoryMappedFileSize(Uint64&);
	virtual Boolean getVirtualSharedMemory(CIMProperty&) const;
	virtual Uint64 getVirtualSharedMemory() const;
	virtual void setVirtualSharedMemory(Uint64&);
	virtual Boolean getCpuTimeDeadChildren(CIMProperty&) const;
	virtual Uint64 getCpuTimeDeadChildren() const;
	virtual void setCpuTimeDeadChildren(Uint64&);
	virtual Boolean getSystemTimeDeadChildren(CIMProperty&) const;
	virtual Uint64 getSystemTimeDeadChildren() const;
	virtual void setSystemTimeDeadChildren(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	String _cSCreationClassName;
	String _cSName;
	String _oSCreationClassName;
	String _oSName;
	String _handle;
	String _processCreationClassName;
	Uint32 _cPUTime;
	Uint64 _realText;
	Uint64 _realData;
	Uint64 _realStack;
	Uint64 _virtualText;
	Uint64 _virtualData;
	Uint64 _virtualStack;
	Uint64 _virtualMemoryMappedFileSize;
	Uint64 _virtualSharedMemory;
	Uint64 _cpuTimeDeadChildren;
	Uint64 _systemTimeDeadChildren;

#	include "UNIX_ProcessStatisticalInformationPrivate.h"


};

#endif /* UNIX_PROCESSSTATISTICALINFORMATION */
