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
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Logs
*/


/* **** Description *** */
/*
The LogRecord object can describe the definitional format for entries in a MessageLog, or can be used to instantiate the actual records in the Log. The latter approach provides a great deal more semantic definition and management control over the individual entries in a MessageLog, than do the record manipulation methods of the Log class. It is recommended that the data in individual Log entries be modeled using subclasses of LogRecord, to avoid the creation of LogRecords with one property (such as RecordData) without semantics. 
Definitional formats for LogRecords could be specified by establishing a naming convention for the RecordID and Message Timestamp key properties.
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

			UNIX_LogRecord:
				LogCreationClassName String
				LogName String
				CreationClassName String
				RecordID String
				MessageTimestamp DateTime
				DataFormat String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_RecordForLog:

			UNIX_LogRecord:


*/

#ifndef __UNIX_LOGRECORD_H
#define __UNIX_LOGRECORD_H


#include "CIM_RecordForLog.h"

#include "UNIX_LogRecordDeps.h"


#ifndef PROPERTY_LOG_CREATION_CLASS_NAME
#define PROPERTY_LOG_CREATION_CLASS_NAME \
					"LogCreationClassName"
#endif

#ifndef PROPERTY_LOG_NAME
#define PROPERTY_LOG_NAME \
					"LogName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_RECORD_ID
#define PROPERTY_RECORD_ID \
					"RecordID"
#endif

#ifndef PROPERTY_MESSAGE_TIMESTAMP
#define PROPERTY_MESSAGE_TIMESTAMP \
					"MessageTimestamp"
#endif

#ifndef PROPERTY_DATA_FORMAT
#define PROPERTY_DATA_FORMAT \
					"DataFormat"
#endif



class UNIX_LogRecord :
	public CIM_RecordForLog
{
public:

	UNIX_LogRecord();
	~UNIX_LogRecord();

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
	virtual Boolean getRecordFormat(CIMProperty&) const;
	virtual String getRecordFormat() const;
	virtual void setRecordFormat(String&);
	virtual Boolean getRecordData(CIMProperty&) const;
	virtual String getRecordData() const;
	virtual void setRecordData(String&);
	virtual Boolean getLocale(CIMProperty&) const;
	virtual String getLocale() const;
	virtual void setLocale(String&);
	virtual Boolean getPerceivedSeverity(CIMProperty&) const;
	virtual Uint16 getPerceivedSeverity() const;
	virtual void setPerceivedSeverity(Uint16&);
	virtual Boolean getLogCreationClassName(CIMProperty&) const;
	virtual String getLogCreationClassName() const;
	virtual void setLogCreationClassName(String&);
	virtual Boolean getLogName(CIMProperty&) const;
	virtual String getLogName() const;
	virtual void setLogName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getRecordID(CIMProperty&) const;
	virtual String getRecordID() const;
	virtual void setRecordID(String&);
	virtual Boolean getMessageTimestamp(CIMProperty&) const;
	virtual CIMDateTime getMessageTimestamp() const;
	virtual void setMessageTimestamp(CIMDateTime&);
	virtual Boolean getDataFormat(CIMProperty&) const;
	virtual String getDataFormat() const;
	virtual void setDataFormat(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _recordFormat;
	String _recordData;
	String _locale;
	Uint16 _perceivedSeverity;
	String _logCreationClassName;
	String _logName;
	String _creationClassName;
	String _recordID;
	CIMDateTime _messageTimestamp;
	String _dataFormat;

#	include "UNIX_LogRecordPrivate.h"


};

#endif /* UNIX_LOGRECORD */
