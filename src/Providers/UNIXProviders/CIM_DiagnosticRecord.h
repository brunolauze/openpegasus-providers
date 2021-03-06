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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
Data related to Diagnostics may be recorded in various DiagnosticRecord objects. The type of information that is recorded in a log is specified via the LogOptions property in DiagnosticSetting.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_RecordForLog:
				RecordFormat String
				RecordData String
				Locale String
				PerceivedSeverity UInt16

			CIM_DiagnosticRecord:
				ServiceName String
				ManagedElementName String
				ExpirationDate DateTime
				RecordType UInt16
				OtherRecordTypeDescription String
				CreationTimeStamp DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_RecordForLog:

			CIM_DiagnosticRecord:


*/

#ifndef __CIM_DIAGNOSTICRECORD_H
#define __CIM_DIAGNOSTICRECORD_H


#include "CIM_RecordForLog.h"


#ifndef PROPERTY_SERVICE_NAME
#define PROPERTY_SERVICE_NAME \
					"ServiceName"
#endif

#ifndef PROPERTY_MANAGED_ELEMENT_NAME
#define PROPERTY_MANAGED_ELEMENT_NAME \
					"ManagedElementName"
#endif

#ifndef PROPERTY_EXPIRATION_DATE
#define PROPERTY_EXPIRATION_DATE \
					"ExpirationDate"
#endif

#ifndef PROPERTY_RECORD_TYPE
#define PROPERTY_RECORD_TYPE \
					"RecordType"
#endif

#ifndef PROPERTY_OTHER_RECORD_TYPE_DESCRIPTION
#define PROPERTY_OTHER_RECORD_TYPE_DESCRIPTION \
					"OtherRecordTypeDescription"
#endif

#ifndef PROPERTY_CREATION_TIME_STAMP
#define PROPERTY_CREATION_TIME_STAMP \
					"CreationTimeStamp"
#endif



class CIM_DiagnosticRecord :
	public CIM_RecordForLog
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getServiceName(CIMProperty&) const=0;
	virtual String getServiceName() const=0;
	virtual void setServiceName(String&)=0;
	virtual Boolean getManagedElementName(CIMProperty&) const=0;
	virtual String getManagedElementName() const=0;
	virtual void setManagedElementName(String&)=0;
	virtual Boolean getExpirationDate(CIMProperty&) const=0;
	virtual CIMDateTime getExpirationDate() const=0;
	virtual void setExpirationDate(CIMDateTime&)=0;
	virtual Boolean getRecordType(CIMProperty&) const=0;
	virtual Uint16 getRecordType() const=0;
	virtual void setRecordType(Uint16&)=0;
	virtual Boolean getOtherRecordTypeDescription(CIMProperty&) const=0;
	virtual String getOtherRecordTypeDescription() const=0;
	virtual void setOtherRecordTypeDescription(String&)=0;
	virtual Boolean getCreationTimeStamp(CIMProperty&) const=0;
	virtual CIMDateTime getCreationTimeStamp() const=0;
	virtual void setCreationTimeStamp(CIMDateTime&)=0;


private:

};

#endif /* CIM_DIAGNOSTICRECORD */
