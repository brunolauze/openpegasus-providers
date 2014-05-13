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


UNIX_LogEntry::UNIX_LogEntry(void)
{
}

UNIX_LogEntry::~UNIX_LogEntry(void)
{
}

Boolean UNIX_LogEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LogEntry::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LogEntry::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LogEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LogEntry::getCaption() const
{
	return _caption;
}

void UNIX_LogEntry::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LogEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LogEntry::getDescription() const
{
	return _description;
}

void UNIX_LogEntry::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LogEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LogEntry::getElementName() const
{
	return _elementName;
}

void UNIX_LogEntry::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LogEntry::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LogEntry::getGeneration() const
{
	return _generation;
}

void UNIX_LogEntry::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LogEntry::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_LogEntry::getRecordFormat() const
{
	return _recordFormat;
}

void UNIX_LogEntry::setRecordFormat(String &value)
{
	_recordFormat = value;
}

Boolean UNIX_LogEntry::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_LogEntry::getRecordData() const
{
	return _recordData;
}

void UNIX_LogEntry::setRecordData(String &value)
{
	_recordData = value;
}

Boolean UNIX_LogEntry::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_LogEntry::getLocale() const
{
	return _locale;
}

void UNIX_LogEntry::setLocale(String &value)
{
	_locale = value;
}

Boolean UNIX_LogEntry::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_LogEntry::getPerceivedSeverity() const
{
	return _perceivedSeverity;
}

void UNIX_LogEntry::setPerceivedSeverity(Uint16 &value)
{
	_perceivedSeverity = value;
}

Boolean UNIX_LogEntry::getLogInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_INSTANCE_ID, getLogInstanceID());
	return true;
}

String UNIX_LogEntry::getLogInstanceID() const
{
	return _logInstanceID;
}

void UNIX_LogEntry::setLogInstanceID(String &value)
{
	_logInstanceID = value;
}

Boolean UNIX_LogEntry::getLogName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_NAME, getLogName());
	return true;
}

String UNIX_LogEntry::getLogName() const
{
	return _logName;
}

void UNIX_LogEntry::setLogName(String &value)
{
	_logName = value;
}

Boolean UNIX_LogEntry::getRecordID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_ID, getRecordID());
	return true;
}

String UNIX_LogEntry::getRecordID() const
{
	return _recordID;
}

void UNIX_LogEntry::setRecordID(String &value)
{
	_recordID = value;
}

Boolean UNIX_LogEntry::getCreationTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME_STAMP, getCreationTimeStamp());
	return true;
}

CIMDateTime UNIX_LogEntry::getCreationTimeStamp() const
{
	return _creationTimeStamp;
}

void UNIX_LogEntry::setCreationTimeStamp(CIMDateTime &value)
{
	_creationTimeStamp = value;
}

Boolean UNIX_LogEntry::getOwningEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNING_ENTITY, getOwningEntity());
	return true;
}

String UNIX_LogEntry::getOwningEntity() const
{
	return _owningEntity;
}

void UNIX_LogEntry::setOwningEntity(String &value)
{
	_owningEntity = value;
}

Boolean UNIX_LogEntry::getMessageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ID, getMessageID());
	return true;
}

String UNIX_LogEntry::getMessageID() const
{
	return _messageID;
}

void UNIX_LogEntry::setMessageID(String &value)
{
	_messageID = value;
}

Boolean UNIX_LogEntry::getMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE, getMessage());
	return true;
}

String UNIX_LogEntry::getMessage() const
{
	return _message;
}

void UNIX_LogEntry::setMessage(String &value)
{
	_message = value;
}

Boolean UNIX_LogEntry::getMessageArguments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ARGUMENTS, getMessageArguments());
	return true;
}

Array<String> UNIX_LogEntry::getMessageArguments() const
{
	return _messageArguments;
}

void UNIX_LogEntry::setMessageArguments(Array<String> &value)
{
	_messageArguments = value;
}


void UNIX_LogEntry::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LogEntry");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_logInstanceID = String ("");
	_logName = String ("");
	_recordID = String ("");
	_creationTimeStamp = CIMHelper::getCurrentTime();
	_owningEntity = String ("");
	_messageID = String ("");
	_message = String ("");
	_messageArguments.clear();

}

Boolean UNIX_LogEntry::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RecordFormat"))
			{
				String recordFormatValue;
				property.getValue().get(recordFormatValue);
				setRecordFormat(recordFormatValue);
			}
			else if (String::equal(property.getName().getString(), "RecordData"))
			{
				String recordDataValue;
				property.getValue().get(recordDataValue);
				setRecordData(recordDataValue);
			}
			else if (String::equal(property.getName().getString(), "Locale"))
			{
				String localeValue;
				property.getValue().get(localeValue);
				setLocale(localeValue);
			}
			else if (String::equal(property.getName().getString(), "PerceivedSeverity"))
			{
				Uint16 perceivedSeverityValue;
				property.getValue().get(perceivedSeverityValue);
				setPerceivedSeverity(perceivedSeverityValue);
			}
			else if (String::equal(property.getName().getString(), "LogInstanceID"))
			{
				String logInstanceIDValue;
				property.getValue().get(logInstanceIDValue);
				setLogInstanceID(logInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "LogName"))
			{
				String logNameValue;
				property.getValue().get(logNameValue);
				setLogName(logNameValue);
			}
			else if (String::equal(property.getName().getString(), "RecordID"))
			{
				String recordIDValue;
				property.getValue().get(recordIDValue);
				setRecordID(recordIDValue);
			}
			else if (String::equal(property.getName().getString(), "CreationTimeStamp"))
			{
				CIMDateTime creationTimeStampValue;
				property.getValue().get(creationTimeStampValue);
				setCreationTimeStamp(creationTimeStampValue);
			}
			else if (String::equal(property.getName().getString(), "OwningEntity"))
			{
				String owningEntityValue;
				property.getValue().get(owningEntityValue);
				setOwningEntity(owningEntityValue);
			}
			else if (String::equal(property.getName().getString(), "MessageID"))
			{
				String messageIDValue;
				property.getValue().get(messageIDValue);
				setMessageID(messageIDValue);
			}
			else if (String::equal(property.getName().getString(), "Message"))
			{
				String messageValue;
				property.getValue().get(messageValue);
				setMessage(messageValue);
			}
			else if (String::equal(property.getName().getString(), "MessageArguments"))
			{
				Array<String> messageArgumentsValue;
				property.getValue().get(messageArgumentsValue);
				setMessageArguments(messageArgumentsValue);
			}
	}
	return true;
}


Boolean UNIX_LogEntry::initialize()
{
	return false;
}

Boolean UNIX_LogEntry::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LogEntry");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_logInstanceID = String ("");
	_logName = String ("");
	_recordID = String ("");
	_creationTimeStamp = CIMHelper::getCurrentTime();
	_owningEntity = String ("");
	_messageID = String ("");
	_message = String ("");
	_messageArguments.clear();
	
	return false;
}

Boolean UNIX_LogEntry::finalize()
{
	return false;
}


Boolean UNIX_LogEntry::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_LogEntry::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogEntry::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogEntry::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogEntry::validateInstance()
{
	return true;
}

