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
2.27.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Logs
*/


/* **** Description *** */
/*
The LogEntry object can describe the definitional format for entries in a Log, or can be used to instantiate the actual entries in the Log.
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

			UNIX_LogEntry:
				LogInstanceID String
				LogName String
				RecordID String
				CreationTimeStamp DateTime
				OwningEntity String
				MessageID String
				Message String
				MessageArguments String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_RecordForLog:

			UNIX_LogEntry:


*/

#ifndef __UNIX_LOGENTRY_H
#define __UNIX_LOGENTRY_H


#include "CIM_RecordForLog.h"

#include "UNIX_LogEntryDeps.h"


#ifndef PROPERTY_LOG_INSTANCE_ID
#define PROPERTY_LOG_INSTANCE_ID \
					"LogInstanceID"
#endif

#ifndef PROPERTY_LOG_NAME
#define PROPERTY_LOG_NAME \
					"LogName"
#endif

#ifndef PROPERTY_RECORD_ID
#define PROPERTY_RECORD_ID \
					"RecordID"
#endif

#ifndef PROPERTY_CREATION_TIME_STAMP
#define PROPERTY_CREATION_TIME_STAMP \
					"CreationTimeStamp"
#endif

#ifndef PROPERTY_OWNING_ENTITY
#define PROPERTY_OWNING_ENTITY \
					"OwningEntity"
#endif

#ifndef PROPERTY_MESSAGE_ID
#define PROPERTY_MESSAGE_ID \
					"MessageID"
#endif

#ifndef PROPERTY_MESSAGE
#define PROPERTY_MESSAGE \
					"Message"
#endif

#ifndef PROPERTY_MESSAGE_ARGUMENTS
#define PROPERTY_MESSAGE_ARGUMENTS \
					"MessageArguments"
#endif



class UNIX_LogEntry :
	public CIM_RecordForLog
{
public:

	UNIX_LogEntry();
	~UNIX_LogEntry();

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
	virtual Boolean getLogInstanceID(CIMProperty&) const;
	virtual String getLogInstanceID() const;
	virtual void setLogInstanceID(String&);
	virtual Boolean getLogName(CIMProperty&) const;
	virtual String getLogName() const;
	virtual void setLogName(String&);
	virtual Boolean getRecordID(CIMProperty&) const;
	virtual String getRecordID() const;
	virtual void setRecordID(String&);
	virtual Boolean getCreationTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getCreationTimeStamp() const;
	virtual void setCreationTimeStamp(CIMDateTime&);
	virtual Boolean getOwningEntity(CIMProperty&) const;
	virtual String getOwningEntity() const;
	virtual void setOwningEntity(String&);
	virtual Boolean getMessageID(CIMProperty&) const;
	virtual String getMessageID() const;
	virtual void setMessageID(String&);
	virtual Boolean getMessage(CIMProperty&) const;
	virtual String getMessage() const;
	virtual void setMessage(String&);
	virtual Boolean getMessageArguments(CIMProperty&) const;
	virtual Array<String> getMessageArguments() const;
	virtual void setMessageArguments(Array<String>&);


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
	String _logInstanceID;
	String _logName;
	String _recordID;
	CIMDateTime _creationTimeStamp;
	String _owningEntity;
	String _messageID;
	String _message;
	Array<String> _messageArguments;

#	include "UNIX_LogEntryPrivate.h"


};

#endif /* UNIX_LOGENTRY */
