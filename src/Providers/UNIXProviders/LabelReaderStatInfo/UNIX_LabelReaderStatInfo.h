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
CIM::Device::StorageLib
*/


/* **** Description *** */
/*
Statistics for a LabelReader, related to read successes, failures and retries.
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

			CIM_DeviceStatisticalInformation:
				SystemCreationClassName String
				SystemName String
				DeviceCreationClassName String
				DeviceID String
				CreationClassName String

			UNIX_LabelReaderStatInfo:
				ScanSuccesses UInt64
				ScanFailures UInt64
				ScanRetries UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			CIM_DeviceStatisticalInformation:

			UNIX_LabelReaderStatInfo:
				ResetCounter UInt32


*/

#ifndef __UNIX_LABELREADERSTATINFO_H
#define __UNIX_LABELREADERSTATINFO_H


#include "CIM_DeviceStatisticalInformation.h"

#include "UNIX_LabelReaderStatInfoDeps.h"


#ifndef PROPERTY_SCAN_SUCCESSES
#define PROPERTY_SCAN_SUCCESSES \
					"ScanSuccesses"
#endif

#ifndef PROPERTY_SCAN_FAILURES
#define PROPERTY_SCAN_FAILURES \
					"ScanFailures"
#endif

#ifndef PROPERTY_SCAN_RETRIES
#define PROPERTY_SCAN_RETRIES \
					"ScanRetries"
#endif



class UNIX_LabelReaderStatInfo :
	public CIM_DeviceStatisticalInformation
{
public:

	UNIX_LabelReaderStatInfo();
	~UNIX_LabelReaderStatInfo();

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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getScanSuccesses(CIMProperty&) const;
	virtual Uint64 getScanSuccesses() const;
	virtual void setScanSuccesses(Uint64&);
	virtual Boolean getScanFailures(CIMProperty&) const;
	virtual Uint64 getScanFailures() const;
	virtual void setScanFailures(Uint64&);
	virtual Boolean getScanRetries(CIMProperty&) const;
	virtual Uint64 getScanRetries() const;
	virtual void setScanRetries(Uint64&);

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
	String _creationClassName;
	Uint64 _scanSuccesses;
	Uint64 _scanFailures;
	Uint64 _scanRetries;

#	include "UNIX_LabelReaderStatInfoPrivate.h"


};

#endif /* UNIX_LABELREADERSTATINFO */
