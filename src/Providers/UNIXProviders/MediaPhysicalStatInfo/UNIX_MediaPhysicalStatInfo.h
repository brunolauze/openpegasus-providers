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


/* **** Deprecated *** */
/*
CIM_MediaPhysicalStatData
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Physical::StoragePackage
*/


/* **** Description *** */
/*
Statistics related to reading physical labels and picks/puts at a specific StorageMediaLocation, or for a specific piece of PhysicalMedia. Although the same class is used to represent this data, at the instance level the object holds information for the Location (independent of the Media), OR for the Media (independent of its StorageMediaLocation). This class is deprecated in lieu of MediaPhysicalStatData, to take advantage of the simplified key structure defined there.
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

			UNIX_PhysicalStatisticalInformation:
				PhysicalCreationClassName String
				Tag String
				CreationClassName String

			UNIX_MediaPhysicalStatInfo:
				ScanSuccesses UInt64
				ScanFailures UInt64
				ScanRetries UInt64
				PickSuccesses UInt64
				PickFailures UInt64
				PickRetries UInt64
				PutSuccesses UInt64
				PutFailures UInt64
				PutRetries UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			UNIX_PhysicalStatisticalInformation:

			UNIX_MediaPhysicalStatInfo:
				ResetCounter UInt32


*/

#ifndef __UNIX_MEDIAPHYSICALSTATINFO_H
#define __UNIX_MEDIAPHYSICALSTATINFO_H


#include <PhysicalStatisticalInformation/UNIX_PhysicalStatisticalInformation.h>

#include "UNIX_MediaPhysicalStatInfoDeps.h"


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

#ifndef PROPERTY_PICK_SUCCESSES
#define PROPERTY_PICK_SUCCESSES \
					"PickSuccesses"
#endif

#ifndef PROPERTY_PICK_FAILURES
#define PROPERTY_PICK_FAILURES \
					"PickFailures"
#endif

#ifndef PROPERTY_PICK_RETRIES
#define PROPERTY_PICK_RETRIES \
					"PickRetries"
#endif

#ifndef PROPERTY_PUT_SUCCESSES
#define PROPERTY_PUT_SUCCESSES \
					"PutSuccesses"
#endif

#ifndef PROPERTY_PUT_FAILURES
#define PROPERTY_PUT_FAILURES \
					"PutFailures"
#endif

#ifndef PROPERTY_PUT_RETRIES
#define PROPERTY_PUT_RETRIES \
					"PutRetries"
#endif



class UNIX_MediaPhysicalStatInfo :
	public UNIX_PhysicalStatisticalInformation
{
public:

	UNIX_MediaPhysicalStatInfo();
	~UNIX_MediaPhysicalStatInfo();

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
	virtual Boolean getPhysicalCreationClassName(CIMProperty&) const;
	virtual String getPhysicalCreationClassName() const;
	virtual void setPhysicalCreationClassName(String&);
	virtual Boolean getTag(CIMProperty&) const;
	virtual String getTag() const;
	virtual void setTag(String&);
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
	virtual Boolean getPickSuccesses(CIMProperty&) const;
	virtual Uint64 getPickSuccesses() const;
	virtual void setPickSuccesses(Uint64&);
	virtual Boolean getPickFailures(CIMProperty&) const;
	virtual Uint64 getPickFailures() const;
	virtual void setPickFailures(Uint64&);
	virtual Boolean getPickRetries(CIMProperty&) const;
	virtual Uint64 getPickRetries() const;
	virtual void setPickRetries(Uint64&);
	virtual Boolean getPutSuccesses(CIMProperty&) const;
	virtual Uint64 getPutSuccesses() const;
	virtual void setPutSuccesses(Uint64&);
	virtual Boolean getPutFailures(CIMProperty&) const;
	virtual Uint64 getPutFailures() const;
	virtual void setPutFailures(Uint64&);
	virtual Boolean getPutRetries(CIMProperty&) const;
	virtual Uint64 getPutRetries() const;
	virtual void setPutRetries(Uint64&);

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
	String _physicalCreationClassName;
	String _tag;
	String _creationClassName;
	Uint64 _scanSuccesses;
	Uint64 _scanFailures;
	Uint64 _scanRetries;
	Uint64 _pickSuccesses;
	Uint64 _pickFailures;
	Uint64 _pickRetries;
	Uint64 _putSuccesses;
	Uint64 _putFailures;
	Uint64 _putRetries;

#	include "UNIX_MediaPhysicalStatInfoPrivate.h"


};

#endif /* UNIX_MEDIAPHYSICALSTATINFO */
