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


UNIX_RecordInLog::UNIX_RecordInLog(void)
{
}

UNIX_RecordInLog::~UNIX_RecordInLog(void)
{
}

Boolean UNIX_RecordInLog::getMessageLog(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_LOG, getMessageLog());
	return true;
}

CIMInstance UNIX_RecordInLog::getMessageLog() const
{
	return _messageLog;
}

void UNIX_RecordInLog::setMessageLog(CIMInstance &value)
{
	_messageLog = value;
}

Boolean UNIX_RecordInLog::getLogRecord(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_RECORD, getLogRecord());
	return true;
}

CIMInstance UNIX_RecordInLog::getLogRecord() const
{
	return _logRecord;
}

void UNIX_RecordInLog::setLogRecord(CIMInstance &value)
{
	_logRecord = value;
}


void UNIX_RecordInLog::clearInstance()
{

	_messageLog = CIMInstance(CIMName("CIM_MessageLog"));
	_logRecord = CIMInstance(CIMName("CIM_LogRecord"));

}

Boolean UNIX_RecordInLog::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "MessageLog"))
			{
				CIMInstance messageLogValue;
				property.getValue().get(messageLogValue);
				setMessageLog(messageLogValue);
			}
			else if (String::equal(property.getName().getString(), "LogRecord"))
			{
				CIMInstance logRecordValue;
				property.getValue().get(logRecordValue);
				setLogRecord(logRecordValue);
			}
	}
	return true;
}


Boolean UNIX_RecordInLog::initialize()
{
	return false;
}

Boolean UNIX_RecordInLog::load(int &pIndex)
{
	
	_messageLog = CIMInstance(CIMName("CIM_MessageLog"));
	_logRecord = CIMInstance(CIMName("CIM_LogRecord"));
	
	return false;
}

Boolean UNIX_RecordInLog::finalize()
{
	return false;
}


Boolean UNIX_RecordInLog::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String messageLogKey;
	String logRecordKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_MESSAGE_LOG)) messageLogKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOG_RECORD)) logRecordKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getMessageLog().getPath().toString(), messageLogKey)) && 
			(String::equalNoCase(getLogRecord().getPath().toString(), logRecordKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_RecordInLog::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RecordInLog::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RecordInLog::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RecordInLog::validateInstance()
{
	return true;
}

