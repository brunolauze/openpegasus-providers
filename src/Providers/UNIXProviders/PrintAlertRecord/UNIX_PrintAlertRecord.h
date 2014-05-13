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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.21
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
This class represents an alert (warning or critical event) on a Printer (print device). A critical alert is one that stops the Printer from printing immediately and printing cannot continue until the critical alert condition is eliminated. Non-critical alerts are those alerts that do not stop printing immediately, but may do so at some future time. A PrintAlertRecord is a snapshot of the state of the device at the time an alert condition occurs. It is preserved in a format that is suitable for offline processing, when the device may have changed or may not be available for interrogation. A PrintAlertRecord shall be associated with exactly one Printer via an instance of the PrintAlertLog class. See: Model in section 2 of Printer MIB (RFC 3805) and section 3 of Finisher MIB (RFC 3806).
*/


/* **** MappingStrings *** */
/*
MIB.IETF|Printer-MIB.prtAlertEntry
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

			UNIX_PrintAlertRecord:
				LocalizedDescription String
				CodeName String
				OtherCodeName String
				SeverityLevel UInt32
				OtherSeverityLevel String
				ComponentClassName String
				ComponentElementName String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_RecordForLog:

			UNIX_LogEntry:

			UNIX_PrintAlertRecord:


*/

#ifndef __UNIX_PRINTALERTRECORD_H
#define __UNIX_PRINTALERTRECORD_H


#include <LogEntry/UNIX_LogEntry.h>

#include "UNIX_PrintAlertRecordDeps.h"


#ifndef PROPERTY_LOCALIZED_DESCRIPTION
#define PROPERTY_LOCALIZED_DESCRIPTION \
					"LocalizedDescription"
#endif

#ifndef PROPERTY_CODE_NAME
#define PROPERTY_CODE_NAME \
					"CodeName"
#endif

#ifndef PROPERTY_OTHER_CODE_NAME
#define PROPERTY_OTHER_CODE_NAME \
					"OtherCodeName"
#endif

#ifndef PROPERTY_SEVERITY_LEVEL
#define PROPERTY_SEVERITY_LEVEL \
					"SeverityLevel"
#endif

#ifndef PROPERTY_OTHER_SEVERITY_LEVEL
#define PROPERTY_OTHER_SEVERITY_LEVEL \
					"OtherSeverityLevel"
#endif

#ifndef PROPERTY_COMPONENT_CLASS_NAME
#define PROPERTY_COMPONENT_CLASS_NAME \
					"ComponentClassName"
#endif

#ifndef PROPERTY_COMPONENT_ELEMENT_NAME
#define PROPERTY_COMPONENT_ELEMENT_NAME \
					"ComponentElementName"
#endif



class UNIX_PrintAlertRecord :
	public UNIX_LogEntry
{
public:

	UNIX_PrintAlertRecord();
	~UNIX_PrintAlertRecord();

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
	virtual Boolean getLocalizedDescription(CIMProperty&) const;
	virtual String getLocalizedDescription() const;
	virtual void setLocalizedDescription(String&);
	virtual Boolean getCodeName(CIMProperty&) const;
	virtual String getCodeName() const;
	virtual void setCodeName(String&);
	virtual Boolean getOtherCodeName(CIMProperty&) const;
	virtual String getOtherCodeName() const;
	virtual void setOtherCodeName(String&);
	virtual Boolean getSeverityLevel(CIMProperty&) const;
	virtual Uint32 getSeverityLevel() const;
	virtual void setSeverityLevel(Uint32&);
	virtual Boolean getOtherSeverityLevel(CIMProperty&) const;
	virtual String getOtherSeverityLevel() const;
	virtual void setOtherSeverityLevel(String&);
	virtual Boolean getComponentClassName(CIMProperty&) const;
	virtual String getComponentClassName() const;
	virtual void setComponentClassName(String&);
	virtual Boolean getComponentElementName(CIMProperty&) const;
	virtual String getComponentElementName() const;
	virtual void setComponentElementName(String&);


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
	String _localizedDescription;
	String _codeName;
	String _otherCodeName;
	Uint32 _severityLevel;
	String _otherSeverityLevel;
	String _componentClassName;
	String _componentElementName;

#	include "UNIX_PrintAlertRecordPrivate.h"


};

#endif /* UNIX_PRINTALERTRECORD */
