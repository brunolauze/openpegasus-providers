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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::DeviceElements
*/


/* **** Description *** */
/*
DeviceErrorCounts is a statistical class containing error- related counters for a LogicalDevice. The types of errors are defined by CCITT (Rec X.733) and ISO (IEC 10164-4). Note that the CIM_DeviceErrorCountData class uses a simplified naming or identity algorithm as compared to this class. DeviceErrorCounts is not deprecated because its naming algorithm is still in use in various implementations.
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

			UNIX_DeviceErrorCounts:
				SystemCreationClassName String
				SystemName String
				DeviceCreationClassName String
				DeviceID String
				IndeterminateErrorCount UInt64
				CriticalErrorCount UInt64
				MajorErrorCount UInt64
				MinorErrorCount UInt64
				WarningCount UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			UNIX_DeviceErrorCounts:
				ResetCounter UInt32


*/

#ifndef __UNIX_DEVICEERRORCOUNTS_H
#define __UNIX_DEVICEERRORCOUNTS_H


#include "CIM_StatisticalInformation.h"

#include "UNIX_DeviceErrorCountsDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_DEVICE_CREATION_CLASS_NAME
#define PROPERTY_DEVICE_CREATION_CLASS_NAME \
					"DeviceCreationClassName"
#endif

#ifndef PROPERTY_DEVICE_ID
#define PROPERTY_DEVICE_ID \
					"DeviceID"
#endif

#ifndef PROPERTY_INDETERMINATE_ERROR_COUNT
#define PROPERTY_INDETERMINATE_ERROR_COUNT \
					"IndeterminateErrorCount"
#endif

#ifndef PROPERTY_CRITICAL_ERROR_COUNT
#define PROPERTY_CRITICAL_ERROR_COUNT \
					"CriticalErrorCount"
#endif

#ifndef PROPERTY_MAJOR_ERROR_COUNT
#define PROPERTY_MAJOR_ERROR_COUNT \
					"MajorErrorCount"
#endif

#ifndef PROPERTY_MINOR_ERROR_COUNT
#define PROPERTY_MINOR_ERROR_COUNT \
					"MinorErrorCount"
#endif

#ifndef PROPERTY_WARNING_COUNT
#define PROPERTY_WARNING_COUNT \
					"WarningCount"
#endif



class UNIX_DeviceErrorCounts :
	public CIM_StatisticalInformation
{
public:

	UNIX_DeviceErrorCounts();
	~UNIX_DeviceErrorCounts();

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
	virtual Boolean getIndeterminateErrorCount(CIMProperty&) const;
	virtual Uint64 getIndeterminateErrorCount() const;
	virtual void setIndeterminateErrorCount(Uint64&);
	virtual Boolean getCriticalErrorCount(CIMProperty&) const;
	virtual Uint64 getCriticalErrorCount() const;
	virtual void setCriticalErrorCount(Uint64&);
	virtual Boolean getMajorErrorCount(CIMProperty&) const;
	virtual Uint64 getMajorErrorCount() const;
	virtual void setMajorErrorCount(Uint64&);
	virtual Boolean getMinorErrorCount(CIMProperty&) const;
	virtual Uint64 getMinorErrorCount() const;
	virtual void setMinorErrorCount(Uint64&);
	virtual Boolean getWarningCount(CIMProperty&) const;
	virtual Uint64 getWarningCount() const;
	virtual void setWarningCount(Uint64&);

	virtual Uint32 invokeResetCounter(
		Uint16 &inSelectedCounter
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
	String _systemCreationClassName;
	String _systemName;
	String _deviceCreationClassName;
	String _deviceID;
	Uint64 _indeterminateErrorCount;
	Uint64 _criticalErrorCount;
	Uint64 _majorErrorCount;
	Uint64 _minorErrorCount;
	Uint64 _warningCount;

#	include "UNIX_DeviceErrorCountsPrivate.h"


};

#endif /* UNIX_DEVICEERRORCOUNTS */
