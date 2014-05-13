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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
Description of a print request that is either waiting on a Queue for a Printer to become available or in the process of being output on a Printer, or that has previously been printed on a Printer. PrintJobs are weak to their current Queue, or to the last Queue that held them. The ABNF for CIM references to PWG Standards and MIBs is in the directory 'ftp://ftp.pwg.org/pub/pwg/general/process' in the file 'pwg-cim-references-format-20060309.txt'. An example for a MappingStrings reference to a PWG Standard is 'PWG5101-1.PWG|Section 4 Media Color Names'. An example for a MappingStrings reference to a PWG MIB is 'MIB.PWG|PWG-IMAGING-COUNTER-MIB.icMonitorCompletedJobs'.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_Job:
				JobStatus String
				TimeSubmitted DateTime
				ScheduledStartTime DateTime
				StartTime DateTime
				ElapsedTime DateTime
				JobRunTimes UInt32
				RunMonth UInt8
				RunDay SInt8
				RunDayOfWeek SInt8
				RunStartInterval DateTime
				LocalOrUtcTime UInt16
				UntilTime DateTime
				Notify String
				Owner String
				Priority UInt32
				PercentComplete UInt16
				DeleteOnCompletion Boolean
				ErrorCode UInt16
				ErrorDescription String
				RecoveryAction UInt16
				OtherRecoveryAction String

			UNIX_PrintJob:
				SystemCreationClassName String
				SystemName String
				QueueCreationClassName String
				QueueName String
				JobID String
				SchedulingInformation String
				JobSize UInt32
				Language UInt16
				MimeTypes String
				RequiredPaperType String
				Finishing UInt16
				Copies UInt32
				HorizontalResolution UInt32
				VerticalResolution UInt32
				CharSet String
				NaturalLanguage String
				NumberUp UInt32
				PrintJobStatus UInt16
				TimeCompleted DateTime
				RequiredJobSheets String
				JobOrigination String
				DocumentAccessErrors String
				Finishings String
				ImpressionsCompleted UInt32
				JobHoldUntil String
				JobPriority UInt32
				JobStatusMessage String
				JobURI String
				MessageFromOperator String
				MoreInfoURI String
				MultipleDocumentHandling String
				NumberOfDocuments UInt32
				OrientationRequested String
				OutputDevice String
				PageRanges String
				PrintQuality String
				SheetsCompleted UInt32
				Sides String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_Job:
				KillJob UInt32

			UNIX_PrintJob:


*/

#ifndef __UNIX_PRINTJOB_H
#define __UNIX_PRINTJOB_H


#include "CIM_Job.h"

#include "UNIX_PrintJobDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_QUEUE_CREATION_CLASS_NAME
#define PROPERTY_QUEUE_CREATION_CLASS_NAME \
					"QueueCreationClassName"
#endif

#ifndef PROPERTY_QUEUE_NAME
#define PROPERTY_QUEUE_NAME \
					"QueueName"
#endif

#ifndef PROPERTY_JOB_ID
#define PROPERTY_JOB_ID \
					"JobID"
#endif

#ifndef PROPERTY_SCHEDULING_INFORMATION
#define PROPERTY_SCHEDULING_INFORMATION \
					"SchedulingInformation"
#endif

#ifndef PROPERTY_JOB_SIZE
#define PROPERTY_JOB_SIZE \
					"JobSize"
#endif

#ifndef PROPERTY_LANGUAGE
#define PROPERTY_LANGUAGE \
					"Language"
#endif

#ifndef PROPERTY_MIME_TYPES
#define PROPERTY_MIME_TYPES \
					"MimeTypes"
#endif

#ifndef PROPERTY_REQUIRED_PAPER_TYPE
#define PROPERTY_REQUIRED_PAPER_TYPE \
					"RequiredPaperType"
#endif

#ifndef PROPERTY_FINISHING
#define PROPERTY_FINISHING \
					"Finishing"
#endif

#ifndef PROPERTY_COPIES
#define PROPERTY_COPIES \
					"Copies"
#endif

#ifndef PROPERTY_HORIZONTAL_RESOLUTION
#define PROPERTY_HORIZONTAL_RESOLUTION \
					"HorizontalResolution"
#endif

#ifndef PROPERTY_VERTICAL_RESOLUTION
#define PROPERTY_VERTICAL_RESOLUTION \
					"VerticalResolution"
#endif

#ifndef PROPERTY_CHAR_SET
#define PROPERTY_CHAR_SET \
					"CharSet"
#endif

#ifndef PROPERTY_NATURAL_LANGUAGE
#define PROPERTY_NATURAL_LANGUAGE \
					"NaturalLanguage"
#endif

#ifndef PROPERTY_NUMBER_UP
#define PROPERTY_NUMBER_UP \
					"NumberUp"
#endif

#ifndef PROPERTY_PRINT_JOB_STATUS
#define PROPERTY_PRINT_JOB_STATUS \
					"PrintJobStatus"
#endif

#ifndef PROPERTY_TIME_COMPLETED
#define PROPERTY_TIME_COMPLETED \
					"TimeCompleted"
#endif

#ifndef PROPERTY_REQUIRED_JOB_SHEETS
#define PROPERTY_REQUIRED_JOB_SHEETS \
					"RequiredJobSheets"
#endif

#ifndef PROPERTY_JOB_ORIGINATION
#define PROPERTY_JOB_ORIGINATION \
					"JobOrigination"
#endif

#ifndef PROPERTY_DOCUMENT_ACCESS_ERRORS
#define PROPERTY_DOCUMENT_ACCESS_ERRORS \
					"DocumentAccessErrors"
#endif

#ifndef PROPERTY_FINISHINGS
#define PROPERTY_FINISHINGS \
					"Finishings"
#endif

#ifndef PROPERTY_IMPRESSIONS_COMPLETED
#define PROPERTY_IMPRESSIONS_COMPLETED \
					"ImpressionsCompleted"
#endif

#ifndef PROPERTY_JOB_HOLD_UNTIL
#define PROPERTY_JOB_HOLD_UNTIL \
					"JobHoldUntil"
#endif

#ifndef PROPERTY_JOB_PRIORITY
#define PROPERTY_JOB_PRIORITY \
					"JobPriority"
#endif

#ifndef PROPERTY_JOB_STATUS_MESSAGE
#define PROPERTY_JOB_STATUS_MESSAGE \
					"JobStatusMessage"
#endif

#ifndef PROPERTY_JOB_U_R_I
#define PROPERTY_JOB_U_R_I \
					"JobURI"
#endif

#ifndef PROPERTY_MESSAGE_FROM_OPERATOR
#define PROPERTY_MESSAGE_FROM_OPERATOR \
					"MessageFromOperator"
#endif

#ifndef PROPERTY_MORE_INFO_U_R_I
#define PROPERTY_MORE_INFO_U_R_I \
					"MoreInfoURI"
#endif

#ifndef PROPERTY_MULTIPLE_DOCUMENT_HANDLING
#define PROPERTY_MULTIPLE_DOCUMENT_HANDLING \
					"MultipleDocumentHandling"
#endif

#ifndef PROPERTY_NUMBER_OF_DOCUMENTS
#define PROPERTY_NUMBER_OF_DOCUMENTS \
					"NumberOfDocuments"
#endif

#ifndef PROPERTY_ORIENTATION_REQUESTED
#define PROPERTY_ORIENTATION_REQUESTED \
					"OrientationRequested"
#endif

#ifndef PROPERTY_OUTPUT_DEVICE
#define PROPERTY_OUTPUT_DEVICE \
					"OutputDevice"
#endif

#ifndef PROPERTY_PAGE_RANGES
#define PROPERTY_PAGE_RANGES \
					"PageRanges"
#endif

#ifndef PROPERTY_PRINT_QUALITY
#define PROPERTY_PRINT_QUALITY \
					"PrintQuality"
#endif

#ifndef PROPERTY_SHEETS_COMPLETED
#define PROPERTY_SHEETS_COMPLETED \
					"SheetsCompleted"
#endif

#ifndef PROPERTY_SIDES
#define PROPERTY_SIDES \
					"Sides"
#endif



class UNIX_PrintJob :
	public CIM_Job
{
public:

	UNIX_PrintJob();
	~UNIX_PrintJob();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getJobStatus(CIMProperty&) const;
	virtual String getJobStatus() const;
	virtual void setJobStatus(String&);
	virtual Boolean getTimeSubmitted(CIMProperty&) const;
	virtual CIMDateTime getTimeSubmitted() const;
	virtual void setTimeSubmitted(CIMDateTime&);
	virtual Boolean getScheduledStartTime(CIMProperty&) const;
	virtual CIMDateTime getScheduledStartTime() const;
	virtual void setScheduledStartTime(CIMDateTime&);
	virtual Boolean getStartTime(CIMProperty&) const;
	virtual CIMDateTime getStartTime() const;
	virtual void setStartTime(CIMDateTime&);
	virtual Boolean getElapsedTime(CIMProperty&) const;
	virtual CIMDateTime getElapsedTime() const;
	virtual void setElapsedTime(CIMDateTime&);
	virtual Boolean getJobRunTimes(CIMProperty&) const;
	virtual Uint32 getJobRunTimes() const;
	virtual void setJobRunTimes(Uint32&);
	virtual Boolean getRunMonth(CIMProperty&) const;
	virtual Uint8 getRunMonth() const;
	virtual void setRunMonth(Uint8&);
	virtual Boolean getRunDay(CIMProperty&) const;
	virtual Sint8 getRunDay() const;
	virtual void setRunDay(Sint8&);
	virtual Boolean getRunDayOfWeek(CIMProperty&) const;
	virtual Sint8 getRunDayOfWeek() const;
	virtual void setRunDayOfWeek(Sint8&);
	virtual Boolean getRunStartInterval(CIMProperty&) const;
	virtual CIMDateTime getRunStartInterval() const;
	virtual void setRunStartInterval(CIMDateTime&);
	virtual Boolean getLocalOrUtcTime(CIMProperty&) const;
	virtual Uint16 getLocalOrUtcTime() const;
	virtual void setLocalOrUtcTime(Uint16&);
	virtual Boolean getUntilTime(CIMProperty&) const;
	virtual CIMDateTime getUntilTime() const;
	virtual void setUntilTime(CIMDateTime&);
	virtual Boolean getNotify(CIMProperty&) const;
	virtual String getNotify() const;
	virtual void setNotify(String&);
	virtual Boolean getOwner(CIMProperty&) const;
	virtual String getOwner() const;
	virtual void setOwner(String&);
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint32 getPriority() const;
	virtual void setPriority(Uint32&);
	virtual Boolean getPercentComplete(CIMProperty&) const;
	virtual Uint16 getPercentComplete() const;
	virtual void setPercentComplete(Uint16&);
	virtual Boolean getDeleteOnCompletion(CIMProperty&) const;
	virtual Boolean getDeleteOnCompletion() const;
	virtual void setDeleteOnCompletion(Boolean&);
	virtual Boolean getErrorCode(CIMProperty&) const;
	virtual Uint16 getErrorCode() const;
	virtual void setErrorCode(Uint16&);
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual void setErrorDescription(String&);
	virtual Boolean getRecoveryAction(CIMProperty&) const;
	virtual Uint16 getRecoveryAction() const;
	virtual void setRecoveryAction(Uint16&);
	virtual Boolean getOtherRecoveryAction(CIMProperty&) const;
	virtual String getOtherRecoveryAction() const;
	virtual void setOtherRecoveryAction(String&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getQueueCreationClassName(CIMProperty&) const;
	virtual String getQueueCreationClassName() const;
	virtual void setQueueCreationClassName(String&);
	virtual Boolean getQueueName(CIMProperty&) const;
	virtual String getQueueName() const;
	virtual void setQueueName(String&);
	virtual Boolean getJobID(CIMProperty&) const;
	virtual String getJobID() const;
	virtual void setJobID(String&);
	virtual Boolean getSchedulingInformation(CIMProperty&) const;
	virtual String getSchedulingInformation() const;
	virtual void setSchedulingInformation(String&);
	virtual Boolean getJobSize(CIMProperty&) const;
	virtual Uint32 getJobSize() const;
	virtual void setJobSize(Uint32&);
	virtual Boolean getLanguage(CIMProperty&) const;
	virtual Uint16 getLanguage() const;
	virtual void setLanguage(Uint16&);
	virtual Boolean getMimeTypes(CIMProperty&) const;
	virtual Array<String> getMimeTypes() const;
	virtual void setMimeTypes(Array<String>&);
	virtual Boolean getRequiredPaperType(CIMProperty&) const;
	virtual String getRequiredPaperType() const;
	virtual void setRequiredPaperType(String&);
	virtual Boolean getFinishing(CIMProperty&) const;
	virtual Array<Uint16> getFinishing() const;
	virtual void setFinishing(Array<Uint16>&);
	virtual Boolean getCopies(CIMProperty&) const;
	virtual Uint32 getCopies() const;
	virtual void setCopies(Uint32&);
	virtual Boolean getHorizontalResolution(CIMProperty&) const;
	virtual Uint32 getHorizontalResolution() const;
	virtual void setHorizontalResolution(Uint32&);
	virtual Boolean getVerticalResolution(CIMProperty&) const;
	virtual Uint32 getVerticalResolution() const;
	virtual void setVerticalResolution(Uint32&);
	virtual Boolean getCharSet(CIMProperty&) const;
	virtual String getCharSet() const;
	virtual void setCharSet(String&);
	virtual Boolean getNaturalLanguage(CIMProperty&) const;
	virtual String getNaturalLanguage() const;
	virtual void setNaturalLanguage(String&);
	virtual Boolean getNumberUp(CIMProperty&) const;
	virtual Uint32 getNumberUp() const;
	virtual void setNumberUp(Uint32&);
	virtual Boolean getPrintJobStatus(CIMProperty&) const;
	virtual Uint16 getPrintJobStatus() const;
	virtual void setPrintJobStatus(Uint16&);
	virtual Boolean getTimeCompleted(CIMProperty&) const;
	virtual CIMDateTime getTimeCompleted() const;
	virtual void setTimeCompleted(CIMDateTime&);
	virtual Boolean getRequiredJobSheets(CIMProperty&) const;
	virtual Array<String> getRequiredJobSheets() const;
	virtual void setRequiredJobSheets(Array<String>&);
	virtual Boolean getJobOrigination(CIMProperty&) const;
	virtual String getJobOrigination() const;
	virtual void setJobOrigination(String&);
	virtual Boolean getDocumentAccessErrors(CIMProperty&) const;
	virtual Array<String> getDocumentAccessErrors() const;
	virtual void setDocumentAccessErrors(Array<String>&);
	virtual Boolean getFinishings(CIMProperty&) const;
	virtual Array<String> getFinishings() const;
	virtual void setFinishings(Array<String>&);
	virtual Boolean getImpressionsCompleted(CIMProperty&) const;
	virtual Uint32 getImpressionsCompleted() const;
	virtual void setImpressionsCompleted(Uint32&);
	virtual Boolean getJobHoldUntil(CIMProperty&) const;
	virtual String getJobHoldUntil() const;
	virtual void setJobHoldUntil(String&);
	virtual Boolean getJobPriority(CIMProperty&) const;
	virtual Uint32 getJobPriority() const;
	virtual void setJobPriority(Uint32&);
	virtual Boolean getJobStatusMessage(CIMProperty&) const;
	virtual Array<String> getJobStatusMessage() const;
	virtual void setJobStatusMessage(Array<String>&);
	virtual Boolean getJobURI(CIMProperty&) const;
	virtual String getJobURI() const;
	virtual void setJobURI(String&);
	virtual Boolean getMessageFromOperator(CIMProperty&) const;
	virtual String getMessageFromOperator() const;
	virtual void setMessageFromOperator(String&);
	virtual Boolean getMoreInfoURI(CIMProperty&) const;
	virtual String getMoreInfoURI() const;
	virtual void setMoreInfoURI(String&);
	virtual Boolean getMultipleDocumentHandling(CIMProperty&) const;
	virtual String getMultipleDocumentHandling() const;
	virtual void setMultipleDocumentHandling(String&);
	virtual Boolean getNumberOfDocuments(CIMProperty&) const;
	virtual Uint32 getNumberOfDocuments() const;
	virtual void setNumberOfDocuments(Uint32&);
	virtual Boolean getOrientationRequested(CIMProperty&) const;
	virtual String getOrientationRequested() const;
	virtual void setOrientationRequested(String&);
	virtual Boolean getOutputDevice(CIMProperty&) const;
	virtual Array<String> getOutputDevice() const;
	virtual void setOutputDevice(Array<String>&);
	virtual Boolean getPageRanges(CIMProperty&) const;
	virtual Array<String> getPageRanges() const;
	virtual void setPageRanges(Array<String>&);
	virtual Boolean getPrintQuality(CIMProperty&) const;
	virtual String getPrintQuality() const;
	virtual void setPrintQuality(String&);
	virtual Boolean getSheetsCompleted(CIMProperty&) const;
	virtual Uint32 getSheetsCompleted() const;
	virtual void setSheetsCompleted(Uint32&);
	virtual Boolean getSides(CIMProperty&) const;
	virtual String getSides() const;
	virtual void setSides(String&);

	virtual Uint32 invokeKillJob(
		Boolean &inDeleteOnKill
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	String _jobStatus;
	CIMDateTime _timeSubmitted;
	CIMDateTime _scheduledStartTime;
	CIMDateTime _startTime;
	CIMDateTime _elapsedTime;
	Uint32 _jobRunTimes;
	Uint8 _runMonth;
	Sint8 _runDay;
	Sint8 _runDayOfWeek;
	CIMDateTime _runStartInterval;
	Uint16 _localOrUtcTime;
	CIMDateTime _untilTime;
	String _notify;
	String _owner;
	Uint32 _priority;
	Uint16 _percentComplete;
	Boolean _deleteOnCompletion;
	Uint16 _errorCode;
	String _errorDescription;
	Uint16 _recoveryAction;
	String _otherRecoveryAction;
	String _systemCreationClassName;
	String _systemName;
	String _queueCreationClassName;
	String _queueName;
	String _jobID;
	String _schedulingInformation;
	Uint32 _jobSize;
	Uint16 _language;
	Array<String> _mimeTypes;
	String _requiredPaperType;
	Array<Uint16> _finishing;
	Uint32 _copies;
	Uint32 _horizontalResolution;
	Uint32 _verticalResolution;
	String _charSet;
	String _naturalLanguage;
	Uint32 _numberUp;
	Uint16 _printJobStatus;
	CIMDateTime _timeCompleted;
	Array<String> _requiredJobSheets;
	String _jobOrigination;
	Array<String> _documentAccessErrors;
	Array<String> _finishings;
	Uint32 _impressionsCompleted;
	String _jobHoldUntil;
	Uint32 _jobPriority;
	Array<String> _jobStatusMessage;
	String _jobURI;
	String _messageFromOperator;
	String _moreInfoURI;
	String _multipleDocumentHandling;
	Uint32 _numberOfDocuments;
	String _orientationRequested;
	Array<String> _outputDevice;
	Array<String> _pageRanges;
	String _printQuality;
	Uint32 _sheetsCompleted;
	String _sides;

#	include "UNIX_PrintJobPrivate.h"


};

#endif /* UNIX_PRINTJOB */
