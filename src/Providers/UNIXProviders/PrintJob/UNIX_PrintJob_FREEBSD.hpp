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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_PrintJob::UNIX_PrintJob(void)
{
}

UNIX_PrintJob::~UNIX_PrintJob(void)
{
}

Boolean UNIX_PrintJob::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintJob::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintJob::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintJob::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintJob::getCaption() const
{
	return _caption;
}

void UNIX_PrintJob::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintJob::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintJob::getDescription() const
{
	return _description;
}

void UNIX_PrintJob::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintJob::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintJob::getElementName() const
{
	return _elementName;
}

void UNIX_PrintJob::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintJob::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintJob::getGeneration() const
{
	return _generation;
}

void UNIX_PrintJob::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintJob::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintJob::getInstallDate() const
{
	return _installDate;
}

void UNIX_PrintJob::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_PrintJob::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintJob::getName() const
{
	return _name;
}

void UNIX_PrintJob::setName(String &value)
{
	_name = value;
}

Boolean UNIX_PrintJob::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintJob::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_PrintJob::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_PrintJob::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintJob::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_PrintJob::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_PrintJob::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintJob::getStatus() const
{
	return _status;
}

void UNIX_PrintJob::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_PrintJob::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintJob::getHealthState() const
{
	return _healthState;
}

void UNIX_PrintJob::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_PrintJob::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintJob::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_PrintJob::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_PrintJob::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintJob::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_PrintJob::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_PrintJob::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintJob::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_PrintJob::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_PrintJob::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintJob::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_PrintJob::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_PrintJob::getJobStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATUS, getJobStatus());
	return true;
}

String UNIX_PrintJob::getJobStatus() const
{
	return _jobStatus;
}

void UNIX_PrintJob::setJobStatus(String &value)
{
	_jobStatus = value;
}

Boolean UNIX_PrintJob::getTimeSubmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SUBMITTED, getTimeSubmitted());
	return true;
}

CIMDateTime UNIX_PrintJob::getTimeSubmitted() const
{
	return _timeSubmitted;
}

void UNIX_PrintJob::setTimeSubmitted(CIMDateTime &value)
{
	_timeSubmitted = value;
}

Boolean UNIX_PrintJob::getScheduledStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEDULED_START_TIME, getScheduledStartTime());
	return true;
}

CIMDateTime UNIX_PrintJob::getScheduledStartTime() const
{
	return _scheduledStartTime;
}

void UNIX_PrintJob::setScheduledStartTime(CIMDateTime &value)
{
	_scheduledStartTime = value;
}

Boolean UNIX_PrintJob::getStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_TIME, getStartTime());
	return true;
}

CIMDateTime UNIX_PrintJob::getStartTime() const
{
	return _startTime;
}

void UNIX_PrintJob::setStartTime(CIMDateTime &value)
{
	_startTime = value;
}

Boolean UNIX_PrintJob::getElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELAPSED_TIME, getElapsedTime());
	return true;
}

CIMDateTime UNIX_PrintJob::getElapsedTime() const
{
	return _elapsedTime;
}

void UNIX_PrintJob::setElapsedTime(CIMDateTime &value)
{
	_elapsedTime = value;
}

Boolean UNIX_PrintJob::getJobRunTimes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_RUN_TIMES, getJobRunTimes());
	return true;
}

Uint32 UNIX_PrintJob::getJobRunTimes() const
{
	return _jobRunTimes;
}

void UNIX_PrintJob::setJobRunTimes(Uint32 &value)
{
	_jobRunTimes = value;
}

Boolean UNIX_PrintJob::getRunMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_MONTH, getRunMonth());
	return true;
}

Uint8 UNIX_PrintJob::getRunMonth() const
{
	return _runMonth;
}

void UNIX_PrintJob::setRunMonth(Uint8 &value)
{
	_runMonth = value;
}

Boolean UNIX_PrintJob::getRunDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY, getRunDay());
	return true;
}

Sint8 UNIX_PrintJob::getRunDay() const
{
	return _runDay;
}

void UNIX_PrintJob::setRunDay(Sint8 &value)
{
	_runDay = value;
}

Boolean UNIX_PrintJob::getRunDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY_OF_WEEK, getRunDayOfWeek());
	return true;
}

Sint8 UNIX_PrintJob::getRunDayOfWeek() const
{
	return _runDayOfWeek;
}

void UNIX_PrintJob::setRunDayOfWeek(Sint8 &value)
{
	_runDayOfWeek = value;
}

Boolean UNIX_PrintJob::getRunStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_START_INTERVAL, getRunStartInterval());
	return true;
}

CIMDateTime UNIX_PrintJob::getRunStartInterval() const
{
	return _runStartInterval;
}

void UNIX_PrintJob::setRunStartInterval(CIMDateTime &value)
{
	_runStartInterval = value;
}

Boolean UNIX_PrintJob::getLocalOrUtcTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_OR_UTC_TIME, getLocalOrUtcTime());
	return true;
}

Uint16 UNIX_PrintJob::getLocalOrUtcTime() const
{
	return _localOrUtcTime;
}

void UNIX_PrintJob::setLocalOrUtcTime(Uint16 &value)
{
	_localOrUtcTime = value;
}

Boolean UNIX_PrintJob::getUntilTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNTIL_TIME, getUntilTime());
	return true;
}

CIMDateTime UNIX_PrintJob::getUntilTime() const
{
	return _untilTime;
}

void UNIX_PrintJob::setUntilTime(CIMDateTime &value)
{
	_untilTime = value;
}

Boolean UNIX_PrintJob::getNotify(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTIFY, getNotify());
	return true;
}

String UNIX_PrintJob::getNotify() const
{
	return _notify;
}

void UNIX_PrintJob::setNotify(String &value)
{
	_notify = value;
}

Boolean UNIX_PrintJob::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

String UNIX_PrintJob::getOwner() const
{
	return _owner;
}

void UNIX_PrintJob::setOwner(String &value)
{
	_owner = value;
}

Boolean UNIX_PrintJob::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_PrintJob::getPriority() const
{
	return _priority;
}

void UNIX_PrintJob::setPriority(Uint32 &value)
{
	_priority = value;
}

Boolean UNIX_PrintJob::getPercentComplete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_COMPLETE, getPercentComplete());
	return true;
}

Uint16 UNIX_PrintJob::getPercentComplete() const
{
	return _percentComplete;
}

void UNIX_PrintJob::setPercentComplete(Uint16 &value)
{
	_percentComplete = value;
}

Boolean UNIX_PrintJob::getDeleteOnCompletion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_COMPLETION, getDeleteOnCompletion());
	return true;
}

Boolean UNIX_PrintJob::getDeleteOnCompletion() const
{
	return _deleteOnCompletion;
}

void UNIX_PrintJob::setDeleteOnCompletion(Boolean &value)
{
	_deleteOnCompletion = value;
}

Boolean UNIX_PrintJob::getErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CODE, getErrorCode());
	return true;
}

Uint16 UNIX_PrintJob::getErrorCode() const
{
	return _errorCode;
}

void UNIX_PrintJob::setErrorCode(Uint16 &value)
{
	_errorCode = value;
}

Boolean UNIX_PrintJob::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PrintJob::getErrorDescription() const
{
	return _errorDescription;
}

void UNIX_PrintJob::setErrorDescription(String &value)
{
	_errorDescription = value;
}

Boolean UNIX_PrintJob::getRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_ACTION, getRecoveryAction());
	return true;
}

Uint16 UNIX_PrintJob::getRecoveryAction() const
{
	return _recoveryAction;
}

void UNIX_PrintJob::setRecoveryAction(Uint16 &value)
{
	_recoveryAction = value;
}

Boolean UNIX_PrintJob::getOtherRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERY_ACTION, getOtherRecoveryAction());
	return true;
}

String UNIX_PrintJob::getOtherRecoveryAction() const
{
	return _otherRecoveryAction;
}

void UNIX_PrintJob::setOtherRecoveryAction(String &value)
{
	_otherRecoveryAction = value;
}

Boolean UNIX_PrintJob::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PrintJob::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_PrintJob::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_PrintJob::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PrintJob::getSystemName() const
{
	return _systemName;
}

void UNIX_PrintJob::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_PrintJob::getQueueCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_CREATION_CLASS_NAME, getQueueCreationClassName());
	return true;
}

String UNIX_PrintJob::getQueueCreationClassName() const
{
	return _queueCreationClassName;
}

void UNIX_PrintJob::setQueueCreationClassName(String &value)
{
	_queueCreationClassName = value;
}

Boolean UNIX_PrintJob::getQueueName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_NAME, getQueueName());
	return true;
}

String UNIX_PrintJob::getQueueName() const
{
	return _queueName;
}

void UNIX_PrintJob::setQueueName(String &value)
{
	_queueName = value;
}

Boolean UNIX_PrintJob::getJobID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_ID, getJobID());
	return true;
}

String UNIX_PrintJob::getJobID() const
{
	return _jobID;
}

void UNIX_PrintJob::setJobID(String &value)
{
	_jobID = value;
}

Boolean UNIX_PrintJob::getSchedulingInformation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEDULING_INFORMATION, getSchedulingInformation());
	return true;
}

String UNIX_PrintJob::getSchedulingInformation() const
{
	return _schedulingInformation;
}

void UNIX_PrintJob::setSchedulingInformation(String &value)
{
	_schedulingInformation = value;
}

Boolean UNIX_PrintJob::getJobSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_SIZE, getJobSize());
	return true;
}

Uint32 UNIX_PrintJob::getJobSize() const
{
	return _jobSize;
}

void UNIX_PrintJob::setJobSize(Uint32 &value)
{
	_jobSize = value;
}

Boolean UNIX_PrintJob::getLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE, getLanguage());
	return true;
}

Uint16 UNIX_PrintJob::getLanguage() const
{
	return _language;
}

void UNIX_PrintJob::setLanguage(Uint16 &value)
{
	_language = value;
}

Boolean UNIX_PrintJob::getMimeTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIME_TYPES, getMimeTypes());
	return true;
}

Array<String> UNIX_PrintJob::getMimeTypes() const
{
	return _mimeTypes;
}

void UNIX_PrintJob::setMimeTypes(Array<String> &value)
{
	_mimeTypes = value;
}

Boolean UNIX_PrintJob::getRequiredPaperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRED_PAPER_TYPE, getRequiredPaperType());
	return true;
}

String UNIX_PrintJob::getRequiredPaperType() const
{
	return _requiredPaperType;
}

void UNIX_PrintJob::setRequiredPaperType(String &value)
{
	_requiredPaperType = value;
}

Boolean UNIX_PrintJob::getFinishing(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINISHING, getFinishing());
	return true;
}

Array<Uint16> UNIX_PrintJob::getFinishing() const
{
	return _finishing;
}

void UNIX_PrintJob::setFinishing(Array<Uint16> &value)
{
	_finishing = value;
}

Boolean UNIX_PrintJob::getCopies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPIES, getCopies());
	return true;
}

Uint32 UNIX_PrintJob::getCopies() const
{
	return _copies;
}

void UNIX_PrintJob::setCopies(Uint32 &value)
{
	_copies = value;
}

Boolean UNIX_PrintJob::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_PrintJob::getHorizontalResolution() const
{
	return _horizontalResolution;
}

void UNIX_PrintJob::setHorizontalResolution(Uint32 &value)
{
	_horizontalResolution = value;
}

Boolean UNIX_PrintJob::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_PrintJob::getVerticalResolution() const
{
	return _verticalResolution;
}

void UNIX_PrintJob::setVerticalResolution(Uint32 &value)
{
	_verticalResolution = value;
}

Boolean UNIX_PrintJob::getCharSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHAR_SET, getCharSet());
	return true;
}

String UNIX_PrintJob::getCharSet() const
{
	return _charSet;
}

void UNIX_PrintJob::setCharSet(String &value)
{
	_charSet = value;
}

Boolean UNIX_PrintJob::getNaturalLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NATURAL_LANGUAGE, getNaturalLanguage());
	return true;
}

String UNIX_PrintJob::getNaturalLanguage() const
{
	return _naturalLanguage;
}

void UNIX_PrintJob::setNaturalLanguage(String &value)
{
	_naturalLanguage = value;
}

Boolean UNIX_PrintJob::getNumberUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_UP, getNumberUp());
	return true;
}

Uint32 UNIX_PrintJob::getNumberUp() const
{
	return _numberUp;
}

void UNIX_PrintJob::setNumberUp(Uint32 &value)
{
	_numberUp = value;
}

Boolean UNIX_PrintJob::getPrintJobStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINT_JOB_STATUS, getPrintJobStatus());
	return true;
}

Uint16 UNIX_PrintJob::getPrintJobStatus() const
{
	return _printJobStatus;
}

void UNIX_PrintJob::setPrintJobStatus(Uint16 &value)
{
	_printJobStatus = value;
}

Boolean UNIX_PrintJob::getTimeCompleted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_COMPLETED, getTimeCompleted());
	return true;
}

CIMDateTime UNIX_PrintJob::getTimeCompleted() const
{
	return _timeCompleted;
}

void UNIX_PrintJob::setTimeCompleted(CIMDateTime &value)
{
	_timeCompleted = value;
}

Boolean UNIX_PrintJob::getRequiredJobSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRED_JOB_SHEETS, getRequiredJobSheets());
	return true;
}

Array<String> UNIX_PrintJob::getRequiredJobSheets() const
{
	return _requiredJobSheets;
}

void UNIX_PrintJob::setRequiredJobSheets(Array<String> &value)
{
	_requiredJobSheets = value;
}

Boolean UNIX_PrintJob::getJobOrigination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_ORIGINATION, getJobOrigination());
	return true;
}

String UNIX_PrintJob::getJobOrigination() const
{
	return _jobOrigination;
}

void UNIX_PrintJob::setJobOrigination(String &value)
{
	_jobOrigination = value;
}

Boolean UNIX_PrintJob::getDocumentAccessErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOCUMENT_ACCESS_ERRORS, getDocumentAccessErrors());
	return true;
}

Array<String> UNIX_PrintJob::getDocumentAccessErrors() const
{
	return _documentAccessErrors;
}

void UNIX_PrintJob::setDocumentAccessErrors(Array<String> &value)
{
	_documentAccessErrors = value;
}

Boolean UNIX_PrintJob::getFinishings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINISHINGS, getFinishings());
	return true;
}

Array<String> UNIX_PrintJob::getFinishings() const
{
	return _finishings;
}

void UNIX_PrintJob::setFinishings(Array<String> &value)
{
	_finishings = value;
}

Boolean UNIX_PrintJob::getImpressionsCompleted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPRESSIONS_COMPLETED, getImpressionsCompleted());
	return true;
}

Uint32 UNIX_PrintJob::getImpressionsCompleted() const
{
	return _impressionsCompleted;
}

void UNIX_PrintJob::setImpressionsCompleted(Uint32 &value)
{
	_impressionsCompleted = value;
}

Boolean UNIX_PrintJob::getJobHoldUntil(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_HOLD_UNTIL, getJobHoldUntil());
	return true;
}

String UNIX_PrintJob::getJobHoldUntil() const
{
	return _jobHoldUntil;
}

void UNIX_PrintJob::setJobHoldUntil(String &value)
{
	_jobHoldUntil = value;
}

Boolean UNIX_PrintJob::getJobPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_PRIORITY, getJobPriority());
	return true;
}

Uint32 UNIX_PrintJob::getJobPriority() const
{
	return _jobPriority;
}

void UNIX_PrintJob::setJobPriority(Uint32 &value)
{
	_jobPriority = value;
}

Boolean UNIX_PrintJob::getJobStatusMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATUS_MESSAGE, getJobStatusMessage());
	return true;
}

Array<String> UNIX_PrintJob::getJobStatusMessage() const
{
	return _jobStatusMessage;
}

void UNIX_PrintJob::setJobStatusMessage(Array<String> &value)
{
	_jobStatusMessage = value;
}

Boolean UNIX_PrintJob::getJobURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_U_R_I, getJobURI());
	return true;
}

String UNIX_PrintJob::getJobURI() const
{
	return _jobURI;
}

void UNIX_PrintJob::setJobURI(String &value)
{
	_jobURI = value;
}

Boolean UNIX_PrintJob::getMessageFromOperator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_FROM_OPERATOR, getMessageFromOperator());
	return true;
}

String UNIX_PrintJob::getMessageFromOperator() const
{
	return _messageFromOperator;
}

void UNIX_PrintJob::setMessageFromOperator(String &value)
{
	_messageFromOperator = value;
}

Boolean UNIX_PrintJob::getMoreInfoURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MORE_INFO_U_R_I, getMoreInfoURI());
	return true;
}

String UNIX_PrintJob::getMoreInfoURI() const
{
	return _moreInfoURI;
}

void UNIX_PrintJob::setMoreInfoURI(String &value)
{
	_moreInfoURI = value;
}

Boolean UNIX_PrintJob::getMultipleDocumentHandling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_DOCUMENT_HANDLING, getMultipleDocumentHandling());
	return true;
}

String UNIX_PrintJob::getMultipleDocumentHandling() const
{
	return _multipleDocumentHandling;
}

void UNIX_PrintJob::setMultipleDocumentHandling(String &value)
{
	_multipleDocumentHandling = value;
}

Boolean UNIX_PrintJob::getNumberOfDocuments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_DOCUMENTS, getNumberOfDocuments());
	return true;
}

Uint32 UNIX_PrintJob::getNumberOfDocuments() const
{
	return _numberOfDocuments;
}

void UNIX_PrintJob::setNumberOfDocuments(Uint32 &value)
{
	_numberOfDocuments = value;
}

Boolean UNIX_PrintJob::getOrientationRequested(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIENTATION_REQUESTED, getOrientationRequested());
	return true;
}

String UNIX_PrintJob::getOrientationRequested() const
{
	return _orientationRequested;
}

void UNIX_PrintJob::setOrientationRequested(String &value)
{
	_orientationRequested = value;
}

Boolean UNIX_PrintJob::getOutputDevice(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_DEVICE, getOutputDevice());
	return true;
}

Array<String> UNIX_PrintJob::getOutputDevice() const
{
	return _outputDevice;
}

void UNIX_PrintJob::setOutputDevice(Array<String> &value)
{
	_outputDevice = value;
}

Boolean UNIX_PrintJob::getPageRanges(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGE_RANGES, getPageRanges());
	return true;
}

Array<String> UNIX_PrintJob::getPageRanges() const
{
	return _pageRanges;
}

void UNIX_PrintJob::setPageRanges(Array<String> &value)
{
	_pageRanges = value;
}

Boolean UNIX_PrintJob::getPrintQuality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINT_QUALITY, getPrintQuality());
	return true;
}

String UNIX_PrintJob::getPrintQuality() const
{
	return _printQuality;
}

void UNIX_PrintJob::setPrintQuality(String &value)
{
	_printQuality = value;
}

Boolean UNIX_PrintJob::getSheetsCompleted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHEETS_COMPLETED, getSheetsCompleted());
	return true;
}

Uint32 UNIX_PrintJob::getSheetsCompleted() const
{
	return _sheetsCompleted;
}

void UNIX_PrintJob::setSheetsCompleted(Uint32 &value)
{
	_sheetsCompleted = value;
}

Boolean UNIX_PrintJob::getSides(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIDES, getSides());
	return true;
}

String UNIX_PrintJob::getSides() const
{
	return _sides;
}

void UNIX_PrintJob::setSides(String &value)
{
	_sides = value;
}


void UNIX_PrintJob::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintJob");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_jobStatus = String ("");
	_timeSubmitted = CIMHelper::getCurrentTime();
	_scheduledStartTime = CIMHelper::getCurrentTime();
	_startTime = CIMHelper::getCurrentTime();
	_elapsedTime = CIMHelper::getCurrentTime();
	_jobRunTimes = Uint32(0);
	_runMonth = Uint8(0);
	_runDay = Sint8(0);
	_runDayOfWeek = Sint8(0);
	_runStartInterval = CIMHelper::getCurrentTime();
	_localOrUtcTime = Uint16(0);
	_untilTime = CIMHelper::getCurrentTime();
	_notify = String ("");
	_owner = String ("");
	_priority = Uint32(0);
	_percentComplete = Uint16(0);
	_deleteOnCompletion = Boolean(false);
	_errorCode = Uint16(0);
	_errorDescription = String ("");
	_recoveryAction = Uint16(0);
	_otherRecoveryAction = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_queueCreationClassName = String ("");
	_queueName = String ("");
	_jobID = String ("");
	_schedulingInformation = String ("");
	_jobSize = Uint32(0);
	_language = Uint16(0);
	_mimeTypes.clear();
	_requiredPaperType = String ("");
	_finishing.clear();
	_copies = Uint32(0);
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_charSet = String ("");
	_naturalLanguage = String ("");
	_numberUp = Uint32(0);
	_printJobStatus = Uint16(0);
	_timeCompleted = CIMHelper::getCurrentTime();
	_requiredJobSheets.clear();
	_jobOrigination = String ("");
	_documentAccessErrors.clear();
	_finishings.clear();
	_impressionsCompleted = Uint32(0);
	_jobHoldUntil = String ("");
	_jobPriority = Uint32(0);
	_jobStatusMessage.clear();
	_jobURI = String ("");
	_messageFromOperator = String ("");
	_moreInfoURI = String ("");
	_multipleDocumentHandling = String ("");
	_numberOfDocuments = Uint32(0);
	_orientationRequested = String ("");
	_outputDevice.clear();
	_pageRanges.clear();
	_printQuality = String ("");
	_sheetsCompleted = Uint32(0);
	_sides = String ("");

}

Boolean UNIX_PrintJob::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "JobStatus"))
			{
				String jobStatusValue;
				property.getValue().get(jobStatusValue);
				setJobStatus(jobStatusValue);
			}
			else if (String::equal(property.getName().getString(), "TimeSubmitted"))
			{
				CIMDateTime timeSubmittedValue;
				property.getValue().get(timeSubmittedValue);
				setTimeSubmitted(timeSubmittedValue);
			}
			else if (String::equal(property.getName().getString(), "ScheduledStartTime"))
			{
				CIMDateTime scheduledStartTimeValue;
				property.getValue().get(scheduledStartTimeValue);
				setScheduledStartTime(scheduledStartTimeValue);
			}
			else if (String::equal(property.getName().getString(), "StartTime"))
			{
				CIMDateTime startTimeValue;
				property.getValue().get(startTimeValue);
				setStartTime(startTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ElapsedTime"))
			{
				CIMDateTime elapsedTimeValue;
				property.getValue().get(elapsedTimeValue);
				setElapsedTime(elapsedTimeValue);
			}
			else if (String::equal(property.getName().getString(), "JobRunTimes"))
			{
				Uint32 jobRunTimesValue;
				property.getValue().get(jobRunTimesValue);
				setJobRunTimes(jobRunTimesValue);
			}
			else if (String::equal(property.getName().getString(), "RunMonth"))
			{
				Uint8 runMonthValue;
				property.getValue().get(runMonthValue);
				setRunMonth(runMonthValue);
			}
			else if (String::equal(property.getName().getString(), "RunDay"))
			{
				Sint8 runDayValue;
				property.getValue().get(runDayValue);
				setRunDay(runDayValue);
			}
			else if (String::equal(property.getName().getString(), "RunDayOfWeek"))
			{
				Sint8 runDayOfWeekValue;
				property.getValue().get(runDayOfWeekValue);
				setRunDayOfWeek(runDayOfWeekValue);
			}
			else if (String::equal(property.getName().getString(), "RunStartInterval"))
			{
				CIMDateTime runStartIntervalValue;
				property.getValue().get(runStartIntervalValue);
				setRunStartInterval(runStartIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "LocalOrUtcTime"))
			{
				Uint16 localOrUtcTimeValue;
				property.getValue().get(localOrUtcTimeValue);
				setLocalOrUtcTime(localOrUtcTimeValue);
			}
			else if (String::equal(property.getName().getString(), "UntilTime"))
			{
				CIMDateTime untilTimeValue;
				property.getValue().get(untilTimeValue);
				setUntilTime(untilTimeValue);
			}
			else if (String::equal(property.getName().getString(), "Notify"))
			{
				String notifyValue;
				property.getValue().get(notifyValue);
				setNotify(notifyValue);
			}
			else if (String::equal(property.getName().getString(), "Owner"))
			{
				String ownerValue;
				property.getValue().get(ownerValue);
				setOwner(ownerValue);
			}
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint32 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "PercentComplete"))
			{
				Uint16 percentCompleteValue;
				property.getValue().get(percentCompleteValue);
				setPercentComplete(percentCompleteValue);
			}
			else if (String::equal(property.getName().getString(), "DeleteOnCompletion"))
			{
				Boolean deleteOnCompletionValue;
				property.getValue().get(deleteOnCompletionValue);
				setDeleteOnCompletion(deleteOnCompletionValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorCode"))
			{
				Uint16 errorCodeValue;
				property.getValue().get(errorCodeValue);
				setErrorCode(errorCodeValue);
			}
			else if (String::equal(property.getName().getString(), "ErrorDescription"))
			{
				String errorDescriptionValue;
				property.getValue().get(errorDescriptionValue);
				setErrorDescription(errorDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "RecoveryAction"))
			{
				Uint16 recoveryActionValue;
				property.getValue().get(recoveryActionValue);
				setRecoveryAction(recoveryActionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherRecoveryAction"))
			{
				String otherRecoveryActionValue;
				property.getValue().get(otherRecoveryActionValue);
				setOtherRecoveryAction(otherRecoveryActionValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "QueueCreationClassName"))
			{
				String queueCreationClassNameValue;
				property.getValue().get(queueCreationClassNameValue);
				setQueueCreationClassName(queueCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "QueueName"))
			{
				String queueNameValue;
				property.getValue().get(queueNameValue);
				setQueueName(queueNameValue);
			}
			else if (String::equal(property.getName().getString(), "JobID"))
			{
				String jobIDValue;
				property.getValue().get(jobIDValue);
				setJobID(jobIDValue);
			}
			else if (String::equal(property.getName().getString(), "SchedulingInformation"))
			{
				String schedulingInformationValue;
				property.getValue().get(schedulingInformationValue);
				setSchedulingInformation(schedulingInformationValue);
			}
			else if (String::equal(property.getName().getString(), "JobSize"))
			{
				Uint32 jobSizeValue;
				property.getValue().get(jobSizeValue);
				setJobSize(jobSizeValue);
			}
			else if (String::equal(property.getName().getString(), "Language"))
			{
				Uint16 languageValue;
				property.getValue().get(languageValue);
				setLanguage(languageValue);
			}
			else if (String::equal(property.getName().getString(), "MimeTypes"))
			{
				Array<String> mimeTypesValue;
				property.getValue().get(mimeTypesValue);
				setMimeTypes(mimeTypesValue);
			}
			else if (String::equal(property.getName().getString(), "RequiredPaperType"))
			{
				String requiredPaperTypeValue;
				property.getValue().get(requiredPaperTypeValue);
				setRequiredPaperType(requiredPaperTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Finishing"))
			{
				Array<Uint16> finishingValue;
				property.getValue().get(finishingValue);
				setFinishing(finishingValue);
			}
			else if (String::equal(property.getName().getString(), "Copies"))
			{
				Uint32 copiesValue;
				property.getValue().get(copiesValue);
				setCopies(copiesValue);
			}
			else if (String::equal(property.getName().getString(), "HorizontalResolution"))
			{
				Uint32 horizontalResolutionValue;
				property.getValue().get(horizontalResolutionValue);
				setHorizontalResolution(horizontalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "VerticalResolution"))
			{
				Uint32 verticalResolutionValue;
				property.getValue().get(verticalResolutionValue);
				setVerticalResolution(verticalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "CharSet"))
			{
				String charSetValue;
				property.getValue().get(charSetValue);
				setCharSet(charSetValue);
			}
			else if (String::equal(property.getName().getString(), "NaturalLanguage"))
			{
				String naturalLanguageValue;
				property.getValue().get(naturalLanguageValue);
				setNaturalLanguage(naturalLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "NumberUp"))
			{
				Uint32 numberUpValue;
				property.getValue().get(numberUpValue);
				setNumberUp(numberUpValue);
			}
			else if (String::equal(property.getName().getString(), "PrintJobStatus"))
			{
				Uint16 printJobStatusValue;
				property.getValue().get(printJobStatusValue);
				setPrintJobStatus(printJobStatusValue);
			}
			else if (String::equal(property.getName().getString(), "TimeCompleted"))
			{
				CIMDateTime timeCompletedValue;
				property.getValue().get(timeCompletedValue);
				setTimeCompleted(timeCompletedValue);
			}
			else if (String::equal(property.getName().getString(), "RequiredJobSheets"))
			{
				Array<String> requiredJobSheetsValue;
				property.getValue().get(requiredJobSheetsValue);
				setRequiredJobSheets(requiredJobSheetsValue);
			}
			else if (String::equal(property.getName().getString(), "JobOrigination"))
			{
				String jobOriginationValue;
				property.getValue().get(jobOriginationValue);
				setJobOrigination(jobOriginationValue);
			}
			else if (String::equal(property.getName().getString(), "DocumentAccessErrors"))
			{
				Array<String> documentAccessErrorsValue;
				property.getValue().get(documentAccessErrorsValue);
				setDocumentAccessErrors(documentAccessErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "Finishings"))
			{
				Array<String> finishingsValue;
				property.getValue().get(finishingsValue);
				setFinishings(finishingsValue);
			}
			else if (String::equal(property.getName().getString(), "ImpressionsCompleted"))
			{
				Uint32 impressionsCompletedValue;
				property.getValue().get(impressionsCompletedValue);
				setImpressionsCompleted(impressionsCompletedValue);
			}
			else if (String::equal(property.getName().getString(), "JobHoldUntil"))
			{
				String jobHoldUntilValue;
				property.getValue().get(jobHoldUntilValue);
				setJobHoldUntil(jobHoldUntilValue);
			}
			else if (String::equal(property.getName().getString(), "JobPriority"))
			{
				Uint32 jobPriorityValue;
				property.getValue().get(jobPriorityValue);
				setJobPriority(jobPriorityValue);
			}
			else if (String::equal(property.getName().getString(), "JobStatusMessage"))
			{
				Array<String> jobStatusMessageValue;
				property.getValue().get(jobStatusMessageValue);
				setJobStatusMessage(jobStatusMessageValue);
			}
			else if (String::equal(property.getName().getString(), "JobURI"))
			{
				String jobURIValue;
				property.getValue().get(jobURIValue);
				setJobURI(jobURIValue);
			}
			else if (String::equal(property.getName().getString(), "MessageFromOperator"))
			{
				String messageFromOperatorValue;
				property.getValue().get(messageFromOperatorValue);
				setMessageFromOperator(messageFromOperatorValue);
			}
			else if (String::equal(property.getName().getString(), "MoreInfoURI"))
			{
				String moreInfoURIValue;
				property.getValue().get(moreInfoURIValue);
				setMoreInfoURI(moreInfoURIValue);
			}
			else if (String::equal(property.getName().getString(), "MultipleDocumentHandling"))
			{
				String multipleDocumentHandlingValue;
				property.getValue().get(multipleDocumentHandlingValue);
				setMultipleDocumentHandling(multipleDocumentHandlingValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfDocuments"))
			{
				Uint32 numberOfDocumentsValue;
				property.getValue().get(numberOfDocumentsValue);
				setNumberOfDocuments(numberOfDocumentsValue);
			}
			else if (String::equal(property.getName().getString(), "OrientationRequested"))
			{
				String orientationRequestedValue;
				property.getValue().get(orientationRequestedValue);
				setOrientationRequested(orientationRequestedValue);
			}
			else if (String::equal(property.getName().getString(), "OutputDevice"))
			{
				Array<String> outputDeviceValue;
				property.getValue().get(outputDeviceValue);
				setOutputDevice(outputDeviceValue);
			}
			else if (String::equal(property.getName().getString(), "PageRanges"))
			{
				Array<String> pageRangesValue;
				property.getValue().get(pageRangesValue);
				setPageRanges(pageRangesValue);
			}
			else if (String::equal(property.getName().getString(), "PrintQuality"))
			{
				String printQualityValue;
				property.getValue().get(printQualityValue);
				setPrintQuality(printQualityValue);
			}
			else if (String::equal(property.getName().getString(), "SheetsCompleted"))
			{
				Uint32 sheetsCompletedValue;
				property.getValue().get(sheetsCompletedValue);
				setSheetsCompleted(sheetsCompletedValue);
			}
			else if (String::equal(property.getName().getString(), "Sides"))
			{
				String sidesValue;
				property.getValue().get(sidesValue);
				setSides(sidesValue);
			}
	}
	return true;
}

Uint32 UNIX_PrintJob::invokeKillJob(
		Boolean &inDeleteOnKill
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method KillJob */
	
	
	
	return returnValue;
}


Boolean UNIX_PrintJob::initialize()
{
	return false;
}

Boolean UNIX_PrintJob::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintJob");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_jobStatus = String ("");
	_timeSubmitted = CIMHelper::getCurrentTime();
	_scheduledStartTime = CIMHelper::getCurrentTime();
	_startTime = CIMHelper::getCurrentTime();
	_elapsedTime = CIMHelper::getCurrentTime();
	_jobRunTimes = Uint32(0);
	_runMonth = Uint8(0);
	_runDay = Sint8(0);
	_runDayOfWeek = Sint8(0);
	_runStartInterval = CIMHelper::getCurrentTime();
	_localOrUtcTime = Uint16(0);
	_untilTime = CIMHelper::getCurrentTime();
	_notify = String ("");
	_owner = String ("");
	_priority = Uint32(0);
	_percentComplete = Uint16(0);
	_deleteOnCompletion = Boolean(false);
	_errorCode = Uint16(0);
	_errorDescription = String ("");
	_recoveryAction = Uint16(0);
	_otherRecoveryAction = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_queueCreationClassName = String ("");
	_queueName = String ("");
	_jobID = String ("");
	_schedulingInformation = String ("");
	_jobSize = Uint32(0);
	_language = Uint16(0);
	_mimeTypes.clear();
	_requiredPaperType = String ("");
	_finishing.clear();
	_copies = Uint32(0);
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_charSet = String ("");
	_naturalLanguage = String ("");
	_numberUp = Uint32(0);
	_printJobStatus = Uint16(0);
	_timeCompleted = CIMHelper::getCurrentTime();
	_requiredJobSheets.clear();
	_jobOrigination = String ("");
	_documentAccessErrors.clear();
	_finishings.clear();
	_impressionsCompleted = Uint32(0);
	_jobHoldUntil = String ("");
	_jobPriority = Uint32(0);
	_jobStatusMessage.clear();
	_jobURI = String ("");
	_messageFromOperator = String ("");
	_moreInfoURI = String ("");
	_multipleDocumentHandling = String ("");
	_numberOfDocuments = Uint32(0);
	_orientationRequested = String ("");
	_outputDevice.clear();
	_pageRanges.clear();
	_printQuality = String ("");
	_sheetsCompleted = Uint32(0);
	_sides = String ("");
	
	return false;
}

Boolean UNIX_PrintJob::finalize()
{
	return false;
}

Boolean UNIX_PrintJob::loadByName(const String name)
{
	return false;
}

Boolean UNIX_PrintJob::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String queueCreationClassNameKey;
	String queueNameKey;
	String jobIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_QUEUE_CREATION_CLASS_NAME)) queueCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_QUEUE_NAME)) queueNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_JOB_ID)) jobIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getQueueCreationClassName(), queueCreationClassNameKey)) && 
			(String::equalNoCase(getQueueName(), queueNameKey)) && 
			(String::equalNoCase(getJobID(), jobIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PrintJob::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintJob::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintJob::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintJob::validateInstance()
{
	return true;
}

